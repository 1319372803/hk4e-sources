// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp

// Line 20: range 0000000012DEB1CA-0000000012DEB42C
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::rewriteConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityRogueDiaryExcelConfigMgr::rewriteRogueDiaryRoundRoomExcelConfig(this, txt_config_mgr)
    || ActivityRogueDiaryExcelConfigMgr::rewriteRogueDiaryDungeonExcelConfig(this, txt_config_mgr)
    || ActivityRogueDiaryExcelConfigMgr::rewriteRogueDiaryCardDepotExcelConfig(this, txt_config_mgr)
    || ActivityRogueDiaryExcelConfigMgr::rewriteRogueDiaryCardWeightExcelConfig(this, txt_config_mgr)
    || ActivityRogueDiaryExcelConfigMgr::rewriteRogueDiaryResourceExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "rewriteConfig",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v6,
      (const char (*)[34])"[RogueDiary] rewriteConfig failed");
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

// Line 34: range 0000000012DEB42E-0000000012DEB735
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::checkConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryRoomExcelConfig(this, txt_config_mgr)
    || ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryRoundRoomExcelConfig(this, txt_config_mgr)
    || ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryDungeonExcelConfig(this, txt_config_mgr)
    || ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryPortalExcelConfig(this, txt_config_mgr)
    || ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryStageExcelConfig(this, txt_config_mgr)
    || ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryBuffDataExcelConfig(this, txt_config_mgr)
    || ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryCardDepotExcelConfig(this, txt_config_mgr)
    || ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryCardWeightExcelConfig(this, txt_config_mgr)
    || ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryResourceExcelConfig(this, txt_config_mgr)
    || ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryPreviewExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "checkConfig",
      46);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v6,
      (const char (*)[32])"[RogueDiary] checkConfig failed");
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

// Line 53: range 0000000012DEB736-0000000012DEBE5B
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryPreviewExcelConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
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
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  SceneExcelConfigMgr *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  data::RogueDiaryPreviewExcelConfigMap *__for_range; // [rsp+18h] [rbp-178h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false,false>::reference v18; // [rsp+20h] [rbp-170h]
  std::tuple_element<0,std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig> >::type *id; // [rsp+28h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig> >::type *config; // [rsp+30h] [rbp-160h]
  const data::NewActivityExcelConfig *config_ptr; // [rsp+38h] [rbp-158h]
  char v22[336]; // [rsp+40h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 14 __for_begin:54 64 8 12 __for_end:54 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryPreviewExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->rogue_diary_preview_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryPreviewExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::RogueDiaryPreviewExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryPreviewExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::RogueDiaryPreviewExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_33;
    }
    v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::RogueDiaryPreviewExcelConfig>(v18);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueDiaryPreviewExcelConfig>(v18);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(p_new_activity_config_mgr, *id);
    if ( !config_ptr )
      goto LABEL_40;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->activity_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->activity_type >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->activity_type);
    }
    if ( config_ptr->activity_type != NEW_ACTIVITY_ROGUE_DIARY )
    {
LABEL_40:
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
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "checkRogueDiaryPreviewExcelConfig",
        59);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             v7,
             (const char (*)[34])"[RogueDiary] invalid activity id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v9 = 0;
      goto LABEL_33;
    }
    p_scene_config_mgr = &txt_config_mgr->scene_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->room_scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->room_scene_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->room_scene_id);
    }
    if ( !data::SceneExcelConfigMgrBase::findSceneExcelConfig(p_scene_config_mgr, config->room_scene_id) )
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
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "checkRogueDiaryPreviewExcelConfig",
        64);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              v11,
              (const char (*)[52])"[RogueDiary] findSceneExcelConfig failed, scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->room_scene_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v9 = 0;
      goto LABEL_33;
    }
    v13 = &txt_config_mgr->scene_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->world_scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->world_scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->world_scene_id);
    }
    if ( !data::SceneExcelConfigMgrBase::findSceneExcelConfig(v13, config->world_scene_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
    "checkRogueDiaryPreviewExcelConfig",
    69);
  v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v15 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
          v14,
          (const char (*)[52])"[RogueDiary] findSceneExcelConfig failed, scene_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->world_scene_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v9 = 0;
LABEL_33:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v22 == (char *)v3 )
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

// Line 77: range 0000000012DEBE5C-0000000012DEC4B1
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::rewriteRogueDiaryResourceExcelConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *v6; // r8
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<const data::RogueDiaryResourceType,unsigned int>,false,false>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  int32_t result; // eax
  data::RogueDiaryResourceExcelConfigMap *__for_range; // [rsp+10h] [rbp-170h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false,false>::reference v19; // [rsp+18h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig> >::type *config; // [rsp+28h] [rbp-158h]
  char v21[336]; // [rsp+30h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 14 __for_begin:78 64 8 12 __for_end:78 96 8 9 <unknown> 128 8 9 <unknown> 160 32 9 <unkno"
                        "wn> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueDiaryExcelConfigMgr::rewriteRogueDiaryResourceExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->rogue_diary_resource_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryResourceExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::RogueDiaryResourceExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryResourceExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::RogueDiaryResourceExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_30;
    }
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::RogueDiaryResourceExcelConfig>(v19);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueDiaryResourceExcelConfig>(v19);
    if ( *(_BYTE *)(((unsigned __int64)&config->value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->value);
    }
    if ( !config->value )
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
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "rewriteRogueDiaryResourceExcelConfig",
        82);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             v7,
             (const char (*)[36])"[RogueDiary] resource cost 0, type:");
      v9 = (((_BYTE)config + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->type);
      }
      v10 = (__int64)data::enumValToStr(config->type, v9);
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        v10 = __asan_report_store8(v3 + 96, v9);
      *(_QWORD *)(v3 + 96) = v10;
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v3 + 96));
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v11 = 0;
      goto LABEL_30;
    }
    v12 = std::unordered_map<data::RogueDiaryResourceType,unsigned int>::emplace<data::RogueDiaryResourceType const&,unsigned int const&>(
            &this->resource_cost_map,
            &config->type,
            &config->value,
            &config->type,
            v6);
    if ( !v12.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
    "rewriteRogueDiaryResourceExcelConfig",
    87);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          v13,
          (const char (*)[44])"[RogueDiary] duplicate resource type, type:");
  v15 = (((_BYTE)config + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&config->type);
  }
  v16 = (__int64)data::enumValToStr(config->type, v15);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    v16 = __asan_report_store8(v3 + 128, v15);
  *(_QWORD *)(v3 + 128) = v16;
  common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v14, (const char *const *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v11 = 0;
LABEL_30:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 95: range 0000000012DEC4B2-0000000012DECC94
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryResourceExcelConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // al
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  __int64 v8; // rax
  int32_t result; // eax
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  __int64 v13; // rax
  bool v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  __int64 v17; // rax
  char v18[432]; // [rsp+10h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 "
                        "<unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryResourceExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, txt_config_mgr);
  *(_DWORD *)(v2 + 48) = 3;
  v5 = common::tools::MiscUtils::isContains<std::unordered_map<data::RogueDiaryResourceType,unsigned int>,data::RogueDiaryResourceType>(
         &this->resource_cost_map,
         (const data::RogueDiaryResourceType *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( !v5 )
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
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "checkRogueDiaryResourceExcelConfig",
      98);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           v6,
           (const char (*)[46])"[RogueDiary] find resource type failed, type:");
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    v8 = (__int64)data::enumValToStr(ROGUE_DIARY_USE_REROLL, (__int64)"[RogueDiary] find resource type failed, type:");
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      v8 = __asan_report_store8(v2 + 96, "[RogueDiary] find resource type failed, type:");
    *(_QWORD *)(v2 + 96) = v8;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = -1;
  }
  else
  {
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 64, v2 + 48);
    *(_DWORD *)(v2 + 64) = 4;
    v10 = common::tools::MiscUtils::isContains<std::unordered_map<data::RogueDiaryResourceType,unsigned int>,data::RogueDiaryResourceType>(
            &this->resource_cost_map,
            (const data::RogueDiaryResourceType *)(v2 + 64));
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !v10 )
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
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "checkRogueDiaryResourceExcelConfig",
        103);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              v11,
              (const char (*)[46])"[RogueDiary] find resource type failed, type:");
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      v13 = (__int64)data::enumValToStr(
                       ROGUE_DIARY_GET_BUYCARD,
                       (__int64)"[RogueDiary] find resource type failed, type:");
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        v13 = __asan_report_store8(v2 + 128, "[RogueDiary] find resource type failed, type:");
      *(_QWORD *)(v2 + 128) = v13;
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v12, (const char *const *)(v2 + 128));
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = -1;
    }
    else
    {
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, v2 + 64);
      *(_DWORD *)(v2 + 80) = 5;
      v14 = common::tools::MiscUtils::isContains<std::unordered_map<data::RogueDiaryResourceType,unsigned int>,data::RogueDiaryResourceType>(
              &this->resource_cost_map,
              (const data::RogueDiaryResourceType *)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( !v14 )
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
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "checkRogueDiaryResourceExcelConfig",
          108);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                v15,
                (const char (*)[46])"[RogueDiary] find resource type failed, type:");
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        v17 = (__int64)data::enumValToStr(
                         ROGUE_DIARY_GET_REVIVE,
                         (__int64)"[RogueDiary] find resource type failed, type:");
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          v17 = __asan_report_store8(v2 + 160, "[RogueDiary] find resource type failed, type:");
        *(_QWORD *)(v2 + 160) = v17;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v16, (const char *const *)(v2 + 160));
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 115: range 0000000012DECC96-0000000012DED368
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::rewriteRogueDiaryDungeonExcelConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::vector<data::RogueDiaryRoundExcelConfig>::size_type v5; // r15
  const std::vector<data::RogueDiaryRoundExcelConfig> *p_round_list; // rcx
  unsigned int *v7; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  unsigned int *v11; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-15Ch]
  data::RogueDiaryDungeonExcelConfigMap *__for_range; // [rsp+18h] [rbp-158h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false,false>::reference v18; // [rsp+20h] [rbp-150h]
  std::tuple_element<0,std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig> >::type *dungeon_id; // [rsp+28h] [rbp-148h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig> >::type *config; // [rsp+30h] [rbp-140h]
  const data::RogueDiaryRoundExcelConfig *round_config; // [rsp+38h] [rbp-138h]
  char v22[304]; // [rsp+40h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 9 index:119 64 8 15 __for_begin:117 96 8 13 __for_end:117 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::rewriteRogueDiaryDungeonExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->rogue_diary_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false> *)(v2 + 96)) )
  {
    v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false,false> *const)(v2 + 64));
    dungeon_id = std::get<0ul,unsigned int const,data::RogueDiaryDungeonExcelConfig>(v18);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueDiaryDungeonExcelConfig>(v18);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, v2 + 96);
    for ( *(_DWORD *)(v2 + 48) = 0; ; ++*(_DWORD *)(v2 + 48) )
    {
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      v5 = *(unsigned int *)(v2 + 48);
      if ( v5 >= std::vector<data::RogueDiaryRoundExcelConfig>::size(&config->round_list) )
        break;
      p_round_list = &config->round_list;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      round_config = std::vector<data::RogueDiaryRoundExcelConfig>::operator[](p_round_list, *(unsigned int *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&round_config->room_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&round_config->room_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&round_config->room_count);
      }
      if ( !round_config->room_count )
      {
        v8 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
               &this->dungeon_round_count_map,
               dungeon_id,
               (unsigned int *)(v2 + 48),
               (const unsigned int *)&this->dungeon_round_count_map,
               v7);
        if ( v8.second )
          break;
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
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "rewriteRogueDiaryDungeonExcelConfig",
          128);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 128),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                v9,
                (const char (*)[47])"[RogueDiary] duplicate dungeon_id, dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, dungeon_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
        *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
    }
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
            &this->dungeon_round_count_map,
            dungeon_id) )
    {
      v12 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
              &this->dungeon_round_count_map,
              dungeon_id,
              (unsigned int *)(v2 + 48),
              (const unsigned int *)&this->dungeon_round_count_map,
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
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "rewriteRogueDiaryDungeonExcelConfig",
          140);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                v13,
                (const char (*)[47])"[RogueDiary] duplicate dungeon_id, dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, dungeon_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false,false> *const)(v2 + 64));
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

// Line 151: range 0000000012DED36A-0000000012DEEFDC
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::rewriteRogueDiaryRoundRoomExcelConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  unsigned __int64 v10; // rax
  char *v11; // rsi
  unsigned int *v12; // rax
  int *v13; // rdx
  int v14; // ecx
  char v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  unsigned __int64 v29; // rax
  char *v30; // rsi
  unsigned int *v31; // rax
  int *v32; // rdx
  int v33; // ecx
  char v34; // al
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  unsigned __int64 v48; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::set<unsigned int>::iterator v50; // rax
  unsigned __int64 v51; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v52; // r15
  std::set<unsigned int>::iterator v53; // rax
  unsigned __int64 v54; // rax
  std::pair<std::vector<unsigned int>,std::vector<unsigned int> > *v55; // rax
  std::pair<unsigned int,unsigned int> *v56; // rcx
  std::pair<std::vector<unsigned int>,std::vector<unsigned int> > *v57; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > >,false,true>,bool> v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rdx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rdx
  int32_t ret; // [rsp+18h] [rbp-588h]
  uint32_t config_max_hard_count; // [rsp+1Ch] [rbp-584h]
  data::RogueDiaryRoundRoomExcelConfigMap *__for_range; // [rsp+20h] [rbp-580h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false,false>::reference v72; // [rsp+28h] [rbp-578h]
  std::tuple_element<0,std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig> >::type *id; // [rsp+30h] [rbp-570h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig> >::type *config; // [rsp+38h] [rbp-568h]
  const std::vector<data::RogueDiaryRoomTypeConfig> *__for_range_0; // [rsp+40h] [rbp-560h]
  const data::RogueDiaryRoomTypeConfig *type_config; // [rsp+48h] [rbp-558h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-550h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+58h] [rbp-548h]
  data::RogueDiaryRoomExcelConfig *room_config_ptr_0; // [rsp+60h] [rbp-540h]
  data::RogueDiaryRoomExcelConfig *room_config_ptr; // [rsp+68h] [rbp-538h]
  char v81[1328]; // [rsp+70h] [rbp-530h] BYREF

  v2 = (unsigned __int64)v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1280LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "26 48 1 9 <unknown> 64 4 14 room_index:156 80 4 20 normal_config_id:168 96 4 18 hard_config_id:1"
                        "92 112 8 15 __for_begin:153 144 8 13 __for_end:153 176 8 15 __for_begin:158 208 8 13 __for_end:1"
                        "58 240 8 15 __for_begin:168 272 8 13 __for_end:168 304 8 15 __for_begin:192 336 8 13 __for_end:1"
                        "92 368 8 12 key_pair:220 400 24 9 <unknown> 464 32 9 <unknown> 528 32 9 <unknown> 592 32 9 <unkn"
                        "own> 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unknown> 848 32 9 <unknown> 912 32 9 <unkno"
                        "wn> 976 32 9 <unknown> 1040 48 19 normal_room_set:167 1120 48 17 hard_room_set:191 1200 48 17 rand_vec_pair:221";
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::rewriteRogueDiaryRoundRoomExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = 61956;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862728] = -234881024;
  v4[536862729] = 62194;
  v4[536862729] = -234881024;
  v4[536862730] = 62194;
  v4[536862730] = -234881024;
  v4[536862731] = 62194;
  v4[536862731] = -234881024;
  v4[536862732] = 62194;
  v4[536862733] = -218959360;
  v4[536862734] = 62194;
  v4[536862735] = -219021312;
  v4[536862736] = 62194;
  v4[536862737] = -219021312;
  v4[536862738] = 62194;
  v4[536862739] = -219021312;
  v4[536862740] = 62194;
  v4[536862741] = -219021312;
  v4[536862742] = 62194;
  v4[536862743] = -219021312;
  v4[536862744] = 62194;
  v4[536862745] = -219021312;
  v4[536862746] = 62194;
  v4[536862747] = -219021312;
  v4[536862748] = 62194;
  v4[536862749] = -219021312;
  v4[536862750] = 62194;
  v4[536862751] = -219021312;
  v4[536862752] = 62194;
  v4[536862754] = -218959118;
  v4[536862756] = -219021312;
  v4[536862757] = 62194;
  v4[536862759] = -202116109;
  ret = 0;
  __for_range = &this->rogue_diary_round_room_excel_config_map;
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryRoundRoomExcelConfig>::iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::RogueDiaryRoundRoomExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 144, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryRoundRoomExcelConfig>::iterator *)(v2 + 144) = std::unordered_map<unsigned int,data::RogueDiaryRoundRoomExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 144);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false> *)(v2 + 112),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false> *)(v2 + 144)) )
      break;
    v72 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false,false> *const)(v2 + 112));
    id = std::get<0ul,unsigned int const,data::RogueDiaryRoundRoomExcelConfig>(v72);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueDiaryRoundRoomExcelConfig>(v72);
    config_max_hard_count = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 64, v5);
    *(_DWORD *)(v2 + 64) = 0;
    __for_range_0 = &config->room_type_config_list;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v5);
    *(std::vector<data::RogueDiaryRoomTypeConfig>::const_iterator *)(v2 + 176) = std::vector<data::RogueDiaryRoomTypeConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, v5);
    *(std::vector<data::RogueDiaryRoomTypeConfig>::const_iterator *)(v2 + 208) = std::vector<data::RogueDiaryRoomTypeConfig>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v2 + 208);
      if ( !__gnu_cxx::operator!=<data::RogueDiaryRoomTypeConfig const*,std::vector<data::RogueDiaryRoomTypeConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::RogueDiaryRoomTypeConfig*,std::vector<data::RogueDiaryRoomTypeConfig> > *)(v2 + 176),
              (const __gnu_cxx::__normal_iterator<const data::RogueDiaryRoomTypeConfig*,std::vector<data::RogueDiaryRoomTypeConfig> > *)(v2 + 208)) )
        break;
      type_config = __gnu_cxx::__normal_iterator<data::RogueDiaryRoomTypeConfig const*,std::vector<data::RogueDiaryRoomTypeConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::RogueDiaryRoomTypeConfig*,std::vector<data::RogueDiaryRoomTypeConfig> > *const)(v2 + 176));
      if ( std::vector<unsigned int>::empty(&type_config->normal_room_config_list)
        && std::vector<unsigned int>::empty(&type_config->hard_room_config_list) )
      {
        *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 464) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 464, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 464),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "rewriteRogueDiaryRoundRoomExcelConfig",
          163);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 464),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
               v8,
               (const char (*)[73])"[RogueDiary] round room config have no optional config, round_config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 464));
        *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        v10 = ((v2 + 1040) >> 3) + 2147450880;
        *(_DWORD *)v10 = 0;
        *(_WORD *)(v10 + 4) = 0;
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 1040));
        __for_range_1 = &type_config->normal_room_config_list;
        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 240, v6);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 240) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 272, v6);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 272) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v11 = (char *)(v2 + 272);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 240),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 272)) )
            break;
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
          v12 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 240));
          v13 = (int *)v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v12);
          }
          v14 = *v13;
          v15 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
          if ( v15 != 0 && v15 <= 3 )
          {
            LOBYTE(v11) = v15 != 0;
            __asan_report_store4(v2 + 80, v11);
          }
          *(_DWORD *)(v2 + 80) = v14;
          room_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoomExcelConfig(
                              this,
                              *(unsigned int *)(v2 + 80));
          if ( room_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&room_config_ptr->hard_tide_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&room_config_ptr->hard_tide_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&room_config_ptr->hard_tide_id);
            }
            if ( room_config_ptr->hard_tide_id )
              goto LABEL_46;
            if ( *(_BYTE *)(((unsigned __int64)&room_config_ptr->challenge_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)room_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&room_config_ptr->challenge_id >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(&room_config_ptr->challenge_id);
            }
            if ( room_config_ptr->challenge_id )
            {
LABEL_46:
              *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 592) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 623) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 623) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 592, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 592),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                "rewriteRogueDiaryRoundRoomExcelConfig",
                179);
              v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 592),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v21 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                      v20,
                      (const char (*)[59])"[RogueDiary] room cannot be a normal room, room_config_id:");
              v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v21,
                      (const unsigned int *)(v2 + 80));
              v23 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v22,
                      (const char (*)[19])", round_config_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 592));
              *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              v24 = std::set<unsigned int>::insert(
                      (std::set<unsigned int> *const)(v2 + 1040),
                      (const std::set<unsigned int>::value_type *)(v2 + 80));
              if ( !v24.second )
              {
                *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 656) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 687) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 687) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 656, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 656),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                  "rewriteRogueDiaryRoundRoomExcelConfig",
                  185);
                v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 656),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v26 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                        v25,
                        (const char (*)[48])"[RogueDiary] duplicate room_id, room_config_id:");
                v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v26,
                        (const unsigned int *)(v2 + 80));
                v28 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v27,
                        (const char (*)[19])", round_config_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 656));
                *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
          }
          else
          {
            *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 528) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 559) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 559) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 528, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 528),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
              "rewriteRogueDiaryRoundRoomExcelConfig",
              173);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 528),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                    v16,
                    (const char (*)[67])"[RogueDiary] findRogueDiaryRoomExcelConfig failed, room_config_id:");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v2 + 80));
            v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v18,
                    (const char (*)[19])", round_config_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 528));
            *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 240));
        }
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
        v29 = ((v2 + 1120) >> 3) + 2147450880;
        *(_DWORD *)v29 = 0;
        *(_WORD *)(v29 + 4) = 0;
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 1120));
        __for_range_2 = &type_config->hard_room_config_list;
        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 304, v11);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 304) = std::vector<unsigned int>::begin(__for_range_2);
        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 336, v11);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 336) = std::vector<unsigned int>::end(__for_range_2);
        while ( 1 )
        {
          v30 = (char *)(v2 + 336);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 304),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 336)) )
            break;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
          v31 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 304));
          v32 = (int *)v31;
          if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v31);
          }
          v33 = *v32;
          v34 = *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000);
          if ( v34 != 0 && v34 <= 3 )
          {
            LOBYTE(v30) = v34 != 0;
            __asan_report_store4(v2 + 96, v30);
          }
          *(_DWORD *)(v2 + 96) = v33;
          room_config_ptr_0 = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoomExcelConfig(
                                this,
                                *(unsigned int *)(v2 + 96));
          if ( room_config_ptr_0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&room_config_ptr_0->hard_tide_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&room_config_ptr_0->hard_tide_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&room_config_ptr_0->hard_tide_id);
            }
            if ( room_config_ptr_0->hard_tide_id )
              goto LABEL_77;
            if ( *(_BYTE *)(((unsigned __int64)&room_config_ptr_0->challenge_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)room_config_ptr_0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&room_config_ptr_0->challenge_id >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&room_config_ptr_0->challenge_id);
            }
            if ( room_config_ptr_0->challenge_id )
            {
LABEL_77:
              v43 = std::set<unsigned int>::insert(
                      (std::set<unsigned int> *const)(v2 + 1120),
                      (const std::set<unsigned int>::value_type *)(v2 + 96));
              if ( !v43.second )
              {
                *(_DWORD *)(((v2 + 848) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 848) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 879) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 879) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 848, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 848),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                  "rewriteRogueDiaryRoundRoomExcelConfig",
                  209);
                v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 848),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v45 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                        v44,
                        (const char (*)[48])"[RogueDiary] duplicate room_id, room_config_id:");
                v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v45,
                        (const unsigned int *)(v2 + 96));
                v47 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v46,
                        (const char (*)[19])", round_config_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 848));
                *(_DWORD *)(((v2 + 848) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
            else
            {
              *(_DWORD *)(((v2 + 784) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 784) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 815) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 815) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 784, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 784),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                "rewriteRogueDiaryRoundRoomExcelConfig",
                203);
              v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 784),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v40 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                      v39,
                      (const char (*)[57])"[RogueDiary] room cannot be a hard room, room_config_id:");
              v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v40,
                      (const unsigned int *)(v2 + 96));
              v42 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v41,
                      (const char (*)[19])", round_config_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 784));
              *(_DWORD *)(((v2 + 784) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
          {
            *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 720) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 720, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 720),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
              "rewriteRogueDiaryRoundRoomExcelConfig",
              197);
            v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 720),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v36 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                    v35,
                    (const char (*)[67])"[RogueDiary] findRogueDiaryRoomExcelConfig failed, room_config_id:");
            v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v36,
                    (const unsigned int *)(v2 + 96));
            v38 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v37,
                    (const char (*)[19])", round_config_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 720));
            *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 304));
        }
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
        if ( !std::vector<unsigned int>::empty(&type_config->hard_room_config_list) )
          ++config_max_hard_count;
        *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 368, v30);
        *(std::pair<unsigned int,unsigned int> *)(v2 + 368) = std::make_pair<unsigned int const&,unsigned int &>(
                                                                id,
                                                                (unsigned int *)(v2 + 64));
        v48 = ((v2 + 1200) >> 3) + 2147450880;
        *(_DWORD *)v48 = 0;
        *(_WORD *)(v48 + 4) = 0;
        std::pair<std::vector<unsigned int>,std::vector<unsigned int>>::pair<std::vector<unsigned int>,std::vector<unsigned int>,true>((std::pair<std::vector<unsigned int>,std::vector<unsigned int> > *const)(v2 + 1200));
        std::vector<unsigned int>::operator=(
          (std::vector<unsigned int> *const)(v2 + 1224),
          &type_config->hard_room_config_list);
        M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 1120))._M_node;
        v50._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 1120))._M_node;
        std::set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
          (std::set<unsigned int> *const)(v2 + 1040),
          v50,
          (std::_Rb_tree_const_iterator<unsigned int>)M_node);
        v51 = ((v2 + 400) >> 3) + 2147450880;
        *(_WORD *)v51 = 0;
        *(_BYTE *)(v51 + 2) = 0;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v2 + 48));
        v52 = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 1040))._M_node;
        v53._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 1040))._M_node;
        std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
          (std::vector<unsigned int> *const)(v2 + 400),
          v53,
          (std::_Rb_tree_const_iterator<unsigned int>)v52,
          (const std::vector<unsigned int>::allocator_type *)(v2 + 48));
        std::vector<unsigned int>::operator=(
          (std::vector<unsigned int> *const)(v2 + 1200),
          (std::vector<unsigned int> *)(v2 + 400));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 400));
        v54 = ((v2 + 400) >> 3) + 2147450880;
        *(_WORD *)v54 = -1800;
        *(_BYTE *)(v54 + 2) = -8;
        std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v2 + 48));
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        v55 = std::move<std::pair<std::vector<unsigned int>,std::vector<unsigned int>> &>((std::pair<std::vector<unsigned int>,std::vector<unsigned int> > *)(v2 + 1200));
        v58 = std::unordered_map<std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>>>::emplace<std::pair<unsigned int,unsigned int>&,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>(
                &this->round_rand_vec_pair_map,
                (std::pair<unsigned int,unsigned int> *)(v2 + 368),
                v55,
                v56,
                v57);
        if ( !v58.second )
        {
          *(_DWORD *)(((v2 + 912) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 912) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 943) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 943) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 912, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 912),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
            "rewriteRogueDiaryRoundRoomExcelConfig",
            227);
          v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 912),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v60 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  v59,
                  (const char (*)[44])"[RogueDiary] duplicate room_id, room_index:");
          v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v60,
                  (const unsigned int *)(v2 + 64));
          v62 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v61,
                  (const char (*)[19])", round_config_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 912));
          *(_DWORD *)(((v2 + 912) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
          if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 64);
          ++*(_DWORD *)(v2 + 64);
        }
        std::pair<std::vector<unsigned int>,std::vector<unsigned int>>::~pair((std::pair<std::vector<unsigned int>,std::vector<unsigned int> > *const)(v2 + 1200));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 1120));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 1040));
      }
      v63 = ((v2 + 1040) >> 3) + 2147450880;
      *(_DWORD *)v63 = -117901064;
      *(_WORD *)(v63 + 4) = -1800;
      v64 = ((v2 + 1120) >> 3) + 2147450880;
      *(_DWORD *)v64 = -117901064;
      *(_WORD *)(v64 + 4) = -1800;
      *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
      v65 = ((v2 + 1200) >> 3) + 2147450880;
      *(_DWORD *)v65 = -117901064;
      *(_WORD *)(v65 + 4) = -1800;
      __gnu_cxx::__normal_iterator<data::RogueDiaryRoomTypeConfig const*,std::vector<data::RogueDiaryRoomTypeConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::RogueDiaryRoomTypeConfig*,std::vector<data::RogueDiaryRoomTypeConfig> > *const)(v2 + 176));
    }
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&config->hard_room_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->hard_room_count >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->hard_room_count);
    }
    if ( config_max_hard_count < config->hard_room_count )
    {
      *(_DWORD *)(((v2 + 976) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 976) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1007) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 1007) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 976, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 976),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "rewriteRogueDiaryRoundRoomExcelConfig",
        237);
      v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 976),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v67 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
              v66,
              (const char (*)[66])"[RogueDiary] round hard_room count is too large, round_config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 976));
      *(_DWORD *)(((v2 + 976) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false,false> *const)(v2 + 112));
  }
  if ( v81 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 160) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1280LL, v81);
  }
  return ret;
};

// Line 247: range 0000000012DEEFDE-0000000012DEFB04
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryRoundRoomExcelConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  unsigned int *v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  char *v15; // rsi
  unsigned int *v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-224h]
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > > > > *__for_range; // [rsp+20h] [rbp-220h]
  std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > >,false,true>::reference v31; // [rsp+28h] [rbp-218h]
  std::tuple_element<0,std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > > >::type *key_pair; // [rsp+30h] [rbp-210h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > > >::type *rand_vec_pair; // [rsp+38h] [rbp-208h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-1F8h]
  data::RogueDiaryRoomExcelConfig *room_config_ptr_0; // [rsp+50h] [rbp-1F0h]
  char v36[480]; // [rsp+60h] [rbp-1E0h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 4 20 normal_config_id:251 48 4 18 hard_config_id:261 64 8 15 __for_begin:249 96 8 13 __for"
                        "_end:249 128 8 15 __for_begin:251 160 8 13 __for_end:251 192 8 15 __for_begin:261 224 8 13 __for"
                        "_end:261 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryRoundRoomExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  ret = 0;
  __for_range = &this->round_rand_vec_pair_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > > > >::iterator *)(v2 + 64) = std::unordered_map<std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > > > >::iterator *)(v2 + 96) = std::unordered_map<std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>>>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<std::pair const<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > >,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > >,true> *)(v2 + 96)) )
      break;
    v31 = std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > >,false,true> *const)(v2 + 64));
    key_pair = std::get<0ul,std::pair<unsigned int,unsigned int> const,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>(v31);
    rand_vec_pair = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > > >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>(v31);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(&rand_vec_pair->first);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(&rand_vec_pair->first);
    while ( 1 )
    {
      v6 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(v2 + 32, v6);
      }
      *(_DWORD *)(v2 + 32) = v9;
      if ( !data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoomExcelConfig(this, *(unsigned int *)(v2 + 32)) )
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
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "checkRogueDiaryRoundRoomExcelConfig",
          256);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                v11,
                (const char (*)[67])"[RogueDiary] findRogueDiaryRoomExcelConfig failed, room_config_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 32));
        v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v13,
                (const char (*)[19])", round_config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)key_pair);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &rand_vec_pair->second;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v6);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v6);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 224) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v15 = (char *)(v2 + 224);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 224)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v16 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
      v17 = (int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v18 = *v17;
      v19 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v19 != 0 && v19 <= 3 )
      {
        LOBYTE(v15) = v19 != 0;
        __asan_report_store4(v2 + 48, v15);
      }
      *(_DWORD *)(v2 + 48) = v18;
      room_config_ptr_0 = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoomExcelConfig(
                            this,
                            *(unsigned int *)(v2 + 48));
      if ( room_config_ptr_0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&room_config_ptr_0->hard_tide_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&room_config_ptr_0->hard_tide_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&room_config_ptr_0->hard_tide_id);
        }
        if ( !room_config_ptr_0->hard_tide_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)&room_config_ptr_0->challenge_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)room_config_ptr_0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&room_config_ptr_0->challenge_id >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&room_config_ptr_0->challenge_id);
          }
          if ( !room_config_ptr_0->challenge_id )
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
              "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
              "checkRogueDiaryRoundRoomExcelConfig",
              272);
            v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v25 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                    v24,
                    (const char (*)[57])"[RogueDiary] room cannot be a hard room, room_config_id:");
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v2 + 48));
            v27 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v26,
                    (const char (*)[19])", round_config_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)key_pair);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
      }
      else
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
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "checkRogueDiaryRoundRoomExcelConfig",
          266);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                v20,
                (const char (*)[67])"[RogueDiary] findRogueDiaryRoomExcelConfig failed, room_config_id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v2 + 48));
        v23 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v22,
                (const char (*)[19])", round_config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)key_pair);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > >,false,true> *const)(v2 + 64));
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

// Line 282: range 0000000012DEFB06-0000000012DF1CC6
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryDungeonExcelConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  LuaConfigMgr *p_lua_config_mgr; // rcx
  __int64 scene_id; // rsi
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  char *v19; // rsi
  unsigned int *v20; // rax
  int *v21; // rdx
  int v22; // ecx
  char v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  ActivityRogueDiaryExcelConfigMgr *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  std::unordered_map<unsigned int,unsigned int> *p_dungeon_round_count_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v38; // rdx
  char *v39; // rsi
  bool v40; // al
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v43; // rdx
  char v44; // cl
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  char *v47; // rsi
  std::pair<unsigned int,unsigned int> *v48; // rcx
  unsigned int *v49; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>,bool> v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rdx
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  uint32_t room_count; // ecx
  char v56; // al
  char *v57; // rsi
  unsigned int *v58; // rax
  int *v59; // rdx
  int v60; // ecx
  char v61; // al
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rdx
  __int64 v66; // r15
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r15
  std::vector<data::RogueDiaryRoomTypeConfig>::size_type v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rdx
  uint32_t v74; // ecx
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rdx
  int32_t ret; // [rsp+1Ch] [rbp-604h]
  data::RogueDiaryDungeonExcelConfigMap *__for_range; // [rsp+20h] [rbp-600h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false,false>::reference v85; // [rsp+28h] [rbp-5F8h]
  std::tuple_element<0,std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig> >::type *dungeon_id; // [rsp+30h] [rbp-5F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig> >::type *config; // [rsp+38h] [rbp-5E8h]
  const data::DungeonExcelConfig *config_ptr; // [rsp+40h] [rbp-5E0h]
  const SceneScriptConfig *scene_config_ptr; // [rsp+50h] [rbp-5D0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-5C8h]
  const std::vector<data::RogueDiaryRoundExcelConfig> *__for_range_1; // [rsp+60h] [rbp-5C0h]
  const data::RogueDiaryRoundExcelConfig *round_config; // [rsp+68h] [rbp-5B8h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+70h] [rbp-5B0h]
  data::RogueDiaryRoundRoomExcelConfig *round_room_config_ptr; // [rsp+78h] [rbp-5A8h]
  char v95[1424]; // [rsp+90h] [rbp-590h] BYREF

  v2 = (unsigned __int64)v95;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1376LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "30 32 4 12 group_id:322 48 4 9 index:360 64 4 15 total_count:361 80 4 24 round_room_config_id:37"
                        "9 96 8 15 __for_begin:284 128 8 13 __for_end:284 160 8 15 __for_begin:322 192 8 13 __for_end:322"
                        " 224 8 8 iter:346 256 8 9 <unknown> 288 8 15 __for_begin:362 320 8 13 __for_end:362 352 8 9 <unk"
                        "nown> 384 8 15 __for_begin:379 416 8 13 __for_end:379 448 8 9 <unknown> 480 32 9 <unknown> 544 3"
                        "2 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32"
                        " 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 "
                        "32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryDungeonExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
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
  v4[536862758] = -218959118;
  v4[536862760] = -218959118;
  v4[536862762] = -202116109;
  ret = 0;
  __for_range = &this->rogue_diary_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false> *)(v2 + 128)) )
  {
    v85 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false,false> *const)(v2 + 96));
    dungeon_id = std::get<0ul,unsigned int const,data::RogueDiaryDungeonExcelConfig>(v85);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueDiaryDungeonExcelConfig>(v85);
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dungeon_id);
    }
    config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, *dungeon_id);
    if ( config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->type);
      }
      if ( config_ptr->type == DUNGEON_ROGUE_DIARY )
      {
        p_scene_config_mgr = &txt_config_mgr->scene_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->scene_id);
        }
        if ( data::SceneExcelConfigMgrBase::findSceneExcelConfig(p_scene_config_mgr, config_ptr->scene_id) )
        {
          p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_ptr->scene_id);
          }
          scene_id = config_ptr->scene_id;
          scene_config_ptr = LuaConfigMgr::findSceneScriptConfig(p_lua_config_mgr, scene_id);
          if ( scene_config_ptr )
          {
            if ( std::vector<unsigned int>::size(&config->group_list) )
            {
              __for_range_0 = &config->group_list;
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 160, scene_id);
              *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::begin(__for_range_0);
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 192, scene_id);
              *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::end(__for_range_0);
              while ( 1 )
              {
                v19 = (char *)(v2 + 192);
                if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160),
                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192)) )
                  break;
                *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
                v20 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 160));
                v21 = (int *)v20;
                if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v20);
                }
                v22 = *v21;
                v23 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
                if ( v23 != 0 && v23 <= 3 )
                {
                  LOBYTE(v19) = v23 != 0;
                  __asan_report_store4(v2 + 32, v19);
                }
                *(_DWORD *)(v2 + 32) = v22;
                if ( SceneScriptConfig::findGroupScriptConfig(scene_config_ptr, *(unsigned int *)(v2 + 32)) )
                {
                  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
                    __asan_report_load4(v2 + 32);
                  if ( SceneScriptConfig::findGroupInfoConfig(scene_config_ptr, *(unsigned int *)(v2 + 32)) )
                  {
                    v32 = this;
                    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(v2 + 32);
                    }
                    if ( !data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryPortalExcelConfig(
                            v32,
                            *(unsigned int *)(v2 + 32)) )
                    {
                      *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 928, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 928),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                        "checkRogueDiaryDungeonExcelConfig",
                        340);
                      v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 928),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v34 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                              v33,
                              (const char (*)[63])"[RogueDiary] findRogueDiaryPortalExcelConfig failed, group_id:");
                      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v34,
                              (const unsigned int *)(v2 + 32));
                      v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                              v35,
                              (const char (*)[14])", dungeon_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, dungeon_id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
                      *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                  }
                  else
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
                      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                      "checkRogueDiaryDungeonExcelConfig",
                      334);
                    v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 864),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v29 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                            v28,
                            (const char (*)[51])"[RogueDiary] findGroupInfoConfig failed, group_id:");
                    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v29,
                            (const unsigned int *)(v2 + 32));
                    v31 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                            v30,
                            (const char (*)[14])", dungeon_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, dungeon_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
                    *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                }
                else
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
                    "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                    "checkRogueDiaryDungeonExcelConfig",
                    327);
                  v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 800),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v25 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                          v24,
                          (const char (*)[53])"[RogueDiary] findGroupScriptConfig failed, group_id:");
                  v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v25,
                          (const unsigned int *)(v2 + 32));
                  v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v26,
                          (const char (*)[14])", dungeon_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, dungeon_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
                  *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
                __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 160));
              }
              *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
              p_dungeon_round_count_map = &this->dungeon_round_count_map;
              if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 224, v19);
              *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                         p_dungeon_round_count_map,
                                                                                         dungeon_id);
              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
              v38 = &this->dungeon_round_count_map;
              if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 256, dungeon_id);
              *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 256) = std::unordered_map<unsigned int,unsigned int>::end(v38);
              v39 = (char *)(v2 + 256);
              v40 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 224),
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 256));
              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
              if ( v40 )
              {
                *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 992, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 992),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                  "checkRogueDiaryDungeonExcelConfig",
                  349);
                v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 992),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v42 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                        v41,
                        (const char (*)[69])"[RogueDiary] dungeon_round_count_map findDungeon failed, dungeon_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, dungeon_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
                *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
              else
              {
                v43 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 224));
                v44 = *(_BYTE *)(((unsigned __int64)&v43->second >> 3) + 0x7FFF8000);
                LOBYTE(v39) = v44 != 0;
                if ( v44 != 0 && (char)((((_BYTE)v43 + 4) & 7) + 3) >= v44 )
                  __asan_report_load4(&v43->second);
                if ( v43->second )
                {
                  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
                  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
                    __asan_report_store4(v2 + 48, v39);
                  *(_DWORD *)(v2 + 48) = 0;
                  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
                  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
                    __asan_report_store4(v2 + 64, v39);
                  *(_DWORD *)(v2 + 64) = 0;
                  __for_range_1 = &config->round_list;
                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v2 + 288, v39);
                  *(std::vector<data::RogueDiaryRoundExcelConfig>::const_iterator *)(v2 + 288) = std::vector<data::RogueDiaryRoundExcelConfig>::begin(__for_range_1);
                  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v2 + 320, v39);
                  *(std::vector<data::RogueDiaryRoundExcelConfig>::const_iterator *)(v2 + 320) = std::vector<data::RogueDiaryRoundExcelConfig>::end(__for_range_1);
                  while ( __gnu_cxx::operator!=<data::RogueDiaryRoundExcelConfig const*,std::vector<data::RogueDiaryRoundExcelConfig>>(
                            (const __gnu_cxx::__normal_iterator<const data::RogueDiaryRoundExcelConfig*,std::vector<data::RogueDiaryRoundExcelConfig> > *)(v2 + 288),
                            (const __gnu_cxx::__normal_iterator<const data::RogueDiaryRoundExcelConfig*,std::vector<data::RogueDiaryRoundExcelConfig> > *)(v2 + 320)) )
                  {
                    round_config = __gnu_cxx::__normal_iterator<data::RogueDiaryRoundExcelConfig const*,std::vector<data::RogueDiaryRoundExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::RogueDiaryRoundExcelConfig*,std::vector<data::RogueDiaryRoundExcelConfig> > *const)(v2 + 288));
                    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(v2 + 48);
                    }
                    ++*(_DWORD *)(v2 + 48);
                    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
                    std::pair<unsigned int,unsigned int>::pair<unsigned int &,true>(
                      (std::pair<unsigned int,unsigned int> *const)(v2 + 352),
                      dungeon_id,
                      (unsigned int *)(v2 + 48));
                    v47 = (char *)(v2 + 352);
                    v50 = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::emplace<std::pair<unsigned int,unsigned int>,unsigned int &>(
                            &this->dungeon_round_room_count_map,
                            (std::pair<unsigned int,unsigned int> *)(v2 + 352),
                            (unsigned int *)(v2 + 64),
                            v48,
                            v49);
                    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                    if ( !v50.second )
                    {
                      *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1120) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1120, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1120),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                        "checkRogueDiaryDungeonExcelConfig",
                        368);
                      v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1120),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v52 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                              v51,
                              (const char (*)[55])"[RogueDiary] duplicate dungeon index pair, dungeon_id:");
                      v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, dungeon_id);
                      v54 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                              v53,
                              (const char (*)[9])", index:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v54,
                        (const unsigned int *)(v2 + 48));
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
                      *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                    else
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&round_config->room_count >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&round_config->room_count >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&round_config->room_count);
                      }
                      room_count = round_config->room_count;
                      v56 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
                      LOBYTE(v47) = v56 != 0;
                      if ( v56 != 0 && v56 <= 3 )
                        __asan_report_load4(v2 + 64);
                      *(_DWORD *)(v2 + 64) += room_count;
                      if ( !round_config->room_count )
                        break;
                      __for_range_2 = &round_config->round_room_config_list;
                      *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
                      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
                        __asan_report_store8(v2 + 384, v47);
                      *(std::vector<unsigned int>::const_iterator *)(v2 + 384) = std::vector<unsigned int>::begin(__for_range_2);
                      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
                      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
                        __asan_report_store8(v2 + 416, v47);
                      *(std::vector<unsigned int>::const_iterator *)(v2 + 416) = std::vector<unsigned int>::end(__for_range_2);
                      while ( 1 )
                      {
                        v57 = (char *)(v2 + 416);
                        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 384),
                                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 416)) )
                          break;
                        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
                        v58 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 384));
                        v59 = (int *)v58;
                        if ( *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)v58 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v58 >> 3)
                                                                                + 0x7FFF8000) )
                        {
                          __asan_report_load4(v58);
                        }
                        v60 = *v59;
                        v61 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
                        if ( v61 != 0 && v61 <= 3 )
                        {
                          LOBYTE(v57) = v61 != 0;
                          __asan_report_store4(v2 + 80, v57);
                        }
                        *(_DWORD *)(v2 + 80) = v60;
                        round_room_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoundRoomExcelConfig(
                                                  this,
                                                  *(unsigned int *)(v2 + 80));
                        if ( round_room_config_ptr )
                        {
                          if ( *(_BYTE *)(((unsigned __int64)&round_config->room_count >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&round_config->room_count >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(&round_config->room_count);
                          }
                          v66 = round_config->room_count;
                          if ( v66 == std::vector<data::RogueDiaryRoomTypeConfig>::size(&round_room_config_ptr->room_type_config_list) )
                          {
                            if ( *(_BYTE *)(((unsigned __int64)&round_config->room_count >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((unsigned __int64)&round_config->room_count >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_load4(&round_config->room_count);
                            }
                            v74 = round_config->room_count;
                            if ( *(_BYTE *)(((unsigned __int64)&round_room_config_ptr->hard_room_count >> 3) + 0x7FFF8000) != 0
                              && (char)((((_BYTE)round_room_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&round_room_config_ptr->hard_room_count >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_load4(&round_room_config_ptr->hard_room_count);
                            }
                            if ( v74 < round_room_config_ptr->hard_room_count )
                            {
                              *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 1312, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 1312),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                                "checkRogueDiaryDungeonExcelConfig",
                                399);
                              v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 1312),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              v76 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                                      v75,
                                      (const char (*)[61])"[RogueDiary] round room size is not valid, round room count:");
                              v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                      v76,
                                      &round_config->room_count);
                              v78 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                      v77,
                                      (const char (*)[32])", round config hard_room count:");
                              v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                      v78,
                                      &round_room_config_ptr->hard_room_count);
                              v80 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                      v79,
                                      (const char (*)[14])", dungeon_id:");
                              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v80, dungeon_id);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
                              *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                              ret = -1;
                            }
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 1248, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 1248),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                              "checkRogueDiaryDungeonExcelConfig",
                              391);
                            v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 1248),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            v68 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                                    v67,
                                    (const char (*)[61])"[RogueDiary] round room size is not valid, round room count:");
                            v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v68,
                                    &round_config->room_count);
                            v70 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                                    v69,
                                    (const char (*)[27])", round config room count:");
                            *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
                            v71 = std::vector<data::RogueDiaryRoomTypeConfig>::size(&round_room_config_ptr->room_type_config_list);
                            if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
                              v71 = __asan_report_store8(v2 + 448, ", round config room count:");
                            *(_QWORD *)(v2 + 448) = v71;
                            v72 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                                    v70,
                                    (const unsigned __int64 *)(v2 + 448));
                            v73 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                    v72,
                                    (const char (*)[14])", dungeon_id:");
                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, dungeon_id);
                            *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
                            *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                            ret = -1;
                          }
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 1184, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 1184),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                            "checkRogueDiaryDungeonExcelConfig",
                            384);
                          v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 1184),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v63 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                                  v62,
                                  (const char (*)[70])"[RogueDiary] findRogueDiaryRoundRoomExcelConfig round_room_config_id:");
                          v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v63,
                                  (const unsigned int *)(v2 + 80));
                          v65 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                  v64,
                                  (const char (*)[14])", dungeon_id:");
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, dungeon_id);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
                          *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                          ret = -1;
                        }
                        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 384));
                      }
                      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
                      *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                    }
                    __gnu_cxx::__normal_iterator<data::RogueDiaryRoundExcelConfig const*,std::vector<data::RogueDiaryRoundExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::RogueDiaryRoundExcelConfig*,std::vector<data::RogueDiaryRoundExcelConfig> > *const)(v2 + 288));
                  }
                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                }
                else
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
                    "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                    "checkRogueDiaryDungeonExcelConfig",
                    356);
                  v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1056),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v46 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                          v45,
                          (const char (*)[48])"[RogueDiary] dungeon round count 0, dungeon_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, dungeon_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
                  *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
              }
            }
            else
            {
              *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 736, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 736),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                "checkRogueDiaryDungeonExcelConfig",
                318);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 736),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v18 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      v17,
                      (const char (*)[43])"[RogueDiary] group_list empty, dungeon_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, dungeon_id);
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
              && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 672, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 672),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
              "checkRogueDiaryDungeonExcelConfig",
              312);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 672),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v16 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                    v15,
                    (const char (*)[55])"[RogueDiary] findSceneScriptConfig failed, dungeon_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, dungeon_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
            *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
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
            "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
            "checkRogueDiaryDungeonExcelConfig",
            305);
          v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 608),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v12 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  v11,
                  (const char (*)[54])"[RogueDiary] findSceneExcelConfig failed, dungeon_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, dungeon_id);
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
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "checkRogueDiaryDungeonExcelConfig",
          296);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 544),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
               v8,
               (const char (*)[58])"[RogueDiary] dungeon type is not rogue diary, dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, dungeon_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "checkRogueDiaryDungeonExcelConfig",
        289);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 480),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             v6,
             (const char (*)[56])"[RogueDiary] findDungeonExcelConfig failed, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false,false> *const)(v2 + 96));
  }
  if ( v95 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 172) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1376LL, v95);
  }
  return ret;
};

// Line 412: range 0000000012DF1CC8-0000000012DF2048
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryRoomExcelConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t *p_normal_tide_id; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::RogueDiaryRoomExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false,false>::reference v11; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig> >::type *config; // [rsp+38h] [rbp-C8h]
  char v14[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:414 64 8 13 __for_end:414 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryRoomExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->rogue_diary_room_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryRoomExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::RogueDiaryRoomExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryRoomExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryRoomExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false> *)(v2 + 64)) )
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::RogueDiaryRoomExcelConfig>(v11);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueDiaryRoomExcelConfig>(v11);
    p_normal_tide_id = &config->normal_tide_id;
    if ( *(_BYTE *)(((unsigned __int64)p_normal_tide_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_normal_tide_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_normal_tide_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(p_normal_tide_id);
    }
    if ( !config->normal_tide_id )
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
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "checkRogueDiaryRoomExcelConfig",
        418);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             v6,
             (const char (*)[43])"[RogueDiary] normal_tide_id is 0, room_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v14 == (char *)v2 )
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

// Line 427: range 0000000012DF204A-0000000012DF3B4B
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryStageExcelConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  char *v8; // rsi
  unsigned int *v9; // rax
  int *v10; // rdx
  int v11; // ecx
  char v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  char *v19; // rsi
  unsigned int *v20; // rax
  int *v21; // rdx
  int v22; // ecx
  char v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  char *v28; // rsi
  unsigned int *v29; // rax
  int *v30; // rdx
  int v31; // ecx
  char v32; // al
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  unsigned __int64 v37; // rax
  const unsigned int *M_current; // r14
  const unsigned int *v39; // rsi
  std::set<unsigned int>::size_type v40; // r14
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  char *v43; // rsi
  unsigned int *v44; // rax
  int *v45; // rdx
  int v46; // ecx
  char v47; // al
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  std::unordered_map<unsigned int,unsigned int> *p_depot_card_count_map; // rdx
  const std::unordered_map<unsigned int,unsigned int>::key_type *p_card_depot_id; // rcx
  __int64 v54; // rsi
  const std::unordered_map<unsigned int,unsigned int>::key_type *v55; // rsi
  std::unordered_map<unsigned int,unsigned int> *v56; // rdx
  bool v57; // al
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rdx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rdx
  unsigned __int64 v68; // rax
  int32_t ret; // [rsp+1Ch] [rbp-4F4h]
  data::RogueDiaryStageExcelConfigMap *__for_range; // [rsp+20h] [rbp-4F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false,false>::reference v73; // [rsp+28h] [rbp-4E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::RogueDiaryStageExcelConfig> >::type *stage_id; // [rsp+30h] [rbp-4E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryStageExcelConfig> >::type *config; // [rsp+38h] [rbp-4D8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-4D0h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-4C8h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+50h] [rbp-4C0h]
  const std::vector<unsigned int> *__for_range_3; // [rsp+58h] [rbp-4B8h]
  char v80[1200]; // [rsp+60h] [rbp-4B0h] BYREF

  v2 = (unsigned __int64)v80;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1152LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "26 48 4 21 normal_dungeon_id:437 64 4 19 hard_dungeon_id:452 80 4 21 insane_dungeon_id:461 96 4 "
                        "19 trial_avatar_id:477 112 8 15 __for_begin:429 144 8 13 __for_end:429 176 8 15 __for_begin:437 "
                        "208 8 13 __for_end:437 240 8 15 __for_begin:452 272 8 13 __for_end:452 304 8 15 __for_begin:461 "
                        "336 8 13 __for_end:461 368 8 15 __for_begin:477 400 8 13 __for_end:477 432 8 8 iter:487 464 8 9 "
                        "<unknown> 496 32 9 <unknown> 560 32 9 <unknown> 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <"
                        "unknown> 816 32 9 <unknown> 880 32 9 <unknown> 944 32 9 <unknown> 1008 32 9 <unknown> 1072 48 22"
                        " insane_dungeon_set:470";
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryStageExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = 61956;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862728] = -234881024;
  v4[536862729] = 62194;
  v4[536862729] = -234881024;
  v4[536862730] = 62194;
  v4[536862730] = -234881024;
  v4[536862731] = 62194;
  v4[536862731] = -234881024;
  v4[536862732] = 62194;
  v4[536862732] = -234881024;
  v4[536862733] = 62194;
  v4[536862733] = -234881024;
  v4[536862734] = 62194;
  v4[536862734] = -234881024;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862740] = -219021312;
  v4[536862741] = 62194;
  v4[536862742] = -219021312;
  v4[536862743] = 62194;
  v4[536862744] = -219021312;
  v4[536862745] = 62194;
  v4[536862746] = -219021312;
  v4[536862747] = 62194;
  v4[536862748] = -219021312;
  v4[536862749] = 62194;
  v4[536862750] = -219021312;
  v4[536862751] = 62194;
  v4[536862752] = -219021312;
  v4[536862753] = 62194;
  v4[536862755] = -202116109;
  ret = 0;
  __for_range = &this->rogue_diary_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 144, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::iterator *)(v2 + 144) = std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 144);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false> *)(v2 + 112),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false> *)(v2 + 144)) )
      break;
    v73 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false,false> *const)(v2 + 112));
    stage_id = std::get<0ul,unsigned int const,data::RogueDiaryStageExcelConfig>(v73);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueDiaryStageExcelConfig>(v73);
    if ( std::vector<unsigned int>::empty(&config->normal_dungeon_id_list) )
    {
      *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 15) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 496, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 496),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "checkRogueDiaryStageExcelConfig",
        433);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 496),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             v6,
             (const char (*)[53])"[RogueDiary] normal_dungeon_id_list empty, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, stage_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
      *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      __for_range_0 = &config->normal_dungeon_id_list;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 176, v5);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 176) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 208, v5);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 208) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v8 = (char *)(v2 + 208);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 176),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 208)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v9 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 176));
        v10 = (int *)v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        v11 = *v10;
        v12 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v12 != 0 && v12 <= 3 )
        {
          LOBYTE(v8) = v12 != 0;
          __asan_report_store4(v2 + 48, v8);
        }
        *(_DWORD *)(v2 + 48) = v11;
        if ( !data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig(
                this,
                *(unsigned int *)(v2 + 48)) )
        {
          *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 560) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 560, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 560),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
            "checkRogueDiaryStageExcelConfig",
            441);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 560),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                  v13,
                  (const char (*)[73])"[RogueDiary] findRogueDiaryDungeonExcelConfig failed, normal_dungeon_id:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v2 + 48));
          v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])", stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, stage_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 560));
          *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 176));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      if ( std::vector<unsigned int>::empty(&config->hard_dungeon_id_list) )
      {
        *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 624) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 624, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 624),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "checkRogueDiaryStageExcelConfig",
          448);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 624),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                v17,
                (const char (*)[51])"[RogueDiary] hard_dungeon_id_list empty, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, stage_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 624));
        *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        __for_range_1 = &config->hard_dungeon_id_list;
        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 240, v8);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 240) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 272, v8);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 272) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v19 = (char *)(v2 + 272);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 240),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 272)) )
            break;
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
          v20 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 240));
          v21 = (int *)v20;
          if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v20);
          }
          v22 = *v21;
          v23 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
          if ( v23 != 0 && v23 <= 3 )
          {
            LOBYTE(v19) = v23 != 0;
            __asan_report_store4(v2 + 64, v19);
          }
          *(_DWORD *)(v2 + 64) = v22;
          if ( !data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig(
                  this,
                  *(unsigned int *)(v2 + 64)) )
          {
            *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 688) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 688, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 688),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
              "checkRogueDiaryStageExcelConfig",
              456);
            v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 688),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v25 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                    v24,
                    (const char (*)[71])"[RogueDiary] findRogueDiaryDungeonExcelConfig failed, hard_dungeon_id:");
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v2 + 64));
            v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v26,
                    (const char (*)[12])", stage_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, stage_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 688));
            *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 240));
        }
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
        __for_range_2 = &config->insane_dungeon_id_list;
        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 304, v19);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 304) = std::vector<unsigned int>::begin(__for_range_2);
        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 336, v19);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 336) = std::vector<unsigned int>::end(__for_range_2);
        while ( 1 )
        {
          v28 = (char *)(v2 + 336);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 304),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 336)) )
            break;
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
          v29 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 304));
          v30 = (int *)v29;
          if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v29);
          }
          v31 = *v30;
          v32 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
          if ( v32 != 0 && v32 <= 3 )
          {
            LOBYTE(v28) = v32 != 0;
            __asan_report_store4(v2 + 80, v28);
          }
          *(_DWORD *)(v2 + 80) = v31;
          if ( !data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig(
                  this,
                  *(unsigned int *)(v2 + 80)) )
          {
            *(_DWORD *)(((v2 + 752) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 752) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 783) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 15) & 7) >= *(_BYTE *)(((v2 + 783) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 752, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 752),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
              "checkRogueDiaryStageExcelConfig",
              465);
            v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 752),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v34 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                    v33,
                    (const char (*)[73])"[RogueDiary] findRogueDiaryDungeonExcelConfig failed, insane_dungeon_id:");
            v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v34,
                    (const unsigned int *)(v2 + 80));
            v36 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v35,
                    (const char (*)[12])", stage_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, stage_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 752));
            *(_DWORD *)(((v2 + 752) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 304));
        }
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
        v37 = ((v2 + 1072) >> 3) + 2147450880;
        *(_DWORD *)v37 = 0;
        *(_WORD *)(v37 + 4) = 0;
        M_current = std::vector<unsigned int>::end(&config->insane_dungeon_id_list)._M_current;
        v39 = std::vector<unsigned int>::begin(&config->insane_dungeon_id_list)._M_current;
        std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
          (std::set<unsigned int> *const)(v2 + 1072),
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v39,
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
        v40 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v2 + 1072));
        if ( v40 == std::vector<unsigned int>::size(&config->insane_dungeon_id_list) )
        {
          __for_range_3 = &config->trial_avatar_list;
          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 368, v39);
          *(std::vector<unsigned int>::const_iterator *)(v2 + 368) = std::vector<unsigned int>::begin(__for_range_3);
          *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 400, v39);
          *(std::vector<unsigned int>::const_iterator *)(v2 + 400) = std::vector<unsigned int>::end(__for_range_3);
          while ( 1 )
          {
            v43 = (char *)(v2 + 400);
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 368),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 400)) )
              break;
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
            v44 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 368));
            v45 = (int *)v44;
            if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v44);
            }
            v46 = *v45;
            v47 = *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000);
            if ( v47 != 0 && v47 <= 3 )
            {
              LOBYTE(v43) = v47 != 0;
              __asan_report_store4(v2 + 96, v43);
            }
            *(_DWORD *)(v2 + 96) = v46;
            if ( !data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                    &txt_config_mgr->trial_avatar_config_mgr,
                    *(unsigned int *)(v2 + 96)) )
            {
              *(_DWORD *)(((v2 + 880) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 880) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 911) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 911) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 880, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 880),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                "checkRogueDiaryStageExcelConfig",
                481);
              v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 880),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v49 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                      v48,
                      (const char (*)[65])"[RogueDiary] findTrialAvatarExcelConfig failed, trial_avatar_id:");
              v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v49,
                      (const unsigned int *)(v2 + 96));
              v51 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v50,
                      (const char (*)[12])", stage_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, stage_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 880));
              *(_DWORD *)(((v2 + 880) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 368));
          }
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
          p_depot_card_count_map = &this->depot_card_count_map;
          p_card_depot_id = &config->card_depot_id;
          v54 = *(unsigned __int8 *)(((v2 + 432) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v54 )
            __asan_report_store8(v2 + 432, v54);
          v55 = p_card_depot_id;
          *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 432) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                     p_depot_card_count_map,
                                                                                     p_card_depot_id);
          *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
          v56 = &this->depot_card_count_map;
          if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 464, v55);
          *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 464) = std::unordered_map<unsigned int,unsigned int>::end(v56);
          v57 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 432),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 464));
          *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
          if ( v57 )
          {
            *(_DWORD *)(((v2 + 944) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 944) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 975) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 975) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 944, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 944),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
              "checkRogueDiaryStageExcelConfig",
              490);
            v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 944),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v59 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    v58,
                    (const char (*)[52])"[RogueDiary] find card_depot failed, card_depot_id:");
            v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, &config->card_depot_id);
            v61 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v60,
                    (const char (*)[12])", stage_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, stage_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 944));
            *(_DWORD *)(((v2 + 944) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&config->optional_card_count >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->optional_card_count >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config->optional_card_count);
            }
            if ( !config->optional_card_count )
              goto LABEL_97;
            if ( *(_BYTE *)(((unsigned __int64)&config->chosen_card_count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->chosen_card_count >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&config->chosen_card_count);
            }
            if ( !config->chosen_card_count || config->optional_card_count < config->chosen_card_count )
            {
LABEL_97:
              *(_DWORD *)(((v2 + 1008) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1008) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1039) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 15) & 7) >= *(_BYTE *)(((v2 + 1039) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1008, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1008),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                "checkRogueDiaryStageExcelConfig",
                496);
              v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1008),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v63 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                      v62,
                      (const char (*)[59])"[RogueDiary] stage card config error, optional_card_count:");
              v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v63,
                      &config->optional_card_count);
              v65 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v64,
                      (const char (*)[21])", chosen_card_count:");
              v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v65,
                      &config->chosen_card_count);
              v67 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v66,
                      (const char (*)[12])", stage_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, stage_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1008));
              *(_DWORD *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 816) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 816) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 847) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 847) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 816, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 816),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
            "checkRogueDiaryStageExcelConfig",
            473);
          v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 816),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v42 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  v41,
                  (const char (*)[54])"[RogueDiary] duplicate insane dungeon_id in stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, stage_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 816));
          *(_DWORD *)(((v2 + 816) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 1072));
      }
    }
    v68 = ((v2 + 1072) >> 3) + 2147450880;
    *(_DWORD *)v68 = -117901064;
    *(_WORD *)(v68 + 4) = -1800;
    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false,false> *const)(v2 + 112));
  }
  if ( v80 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 144) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1152LL, v80);
  }
  return ret;
};

// Line 507: range 0000000012DF3B4C-0000000012DF40DD
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryPortalExcelConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  data::RogueDiaryPortalExcelConfigMap *__for_range; // [rsp+20h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false,false>::reference v13; // [rsp+28h] [rbp-128h]
  uint32_t *group_id; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig> >::type *config; // [rsp+38h] [rbp-118h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+40h] [rbp-110h]
  char v17[256]; // [rsp+50h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:509 64 8 13 __for_end:509 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryPortalExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->rogue_diary_portal_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryPortalExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::RogueDiaryPortalExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryPortalExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryPortalExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false> *)(v2 + 64)) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false,false> *const)(v2 + 32));
    group_id = std::get<0ul,unsigned int const,data::RogueDiaryPortalExcelConfig>(v13);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueDiaryPortalExcelConfig>(v13);
    p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(group_id);
    }
    group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, *group_id);
    if ( group_script_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->point_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->point_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->point_id);
      }
      if ( !GroupScriptConfig::findPointConfig(group_script_config_ptr, config->point_id) )
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
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "checkRogueDiaryPortalExcelConfig",
          521);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               v8,
               (const char (*)[48])"[RogueDiary] findPointConfig failed, point_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->point_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "checkRogueDiaryPortalExcelConfig",
        514);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             v6,
             (const char (*)[54])"[RogueDiary] findGroupScriptConfig failed, group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 531: range 0000000012DF40DE-0000000012DF44C4
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryBuffDataExcelConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const HK4EDesignConfig *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-ECh]
  data::RogueDiaryBuffDataExcelConfigMap *__for_range; // [rsp+18h] [rbp-E8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false,false>::reference v13; // [rsp+20h] [rbp-E0h]
  std::tuple_element<0,std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig> >::type *id; // [rsp+28h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig> >::type *config; // [rsp+30h] [rbp-D0h]
  char v16[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:533 64 8 13 __for_end:533 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryBuffDataExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->rogue_diary_buff_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryBuffDataExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::RogueDiaryBuffDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryBuffDataExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryBuffDataExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false> *)(v2 + 64)) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::RogueDiaryBuffDataExcelConfig>(v13);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueDiaryBuffDataExcelConfig>(v13);
    if ( *(_BYTE *)(((unsigned __int64)&config->effect_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->effect_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->effect_type);
    }
    if ( config->effect_type == ROGUE_DIARY_BUFF_EFFECT_ABILITY )
    {
      v5 = TxtConfigMgr::getConfig(txt_config_mgr);
      if ( !JsonConfigMgr::findAbilityGroupConfig(&v5->json_config_mgr, &config->ability_group) )
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
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "checkRogueDiaryBuffDataExcelConfig",
          542);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
               v6,
               (const char (*)[54])"[RogueDiary] findAbilityGroupConfig failed, buff_id: ");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
        v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])", ability_group:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &config->ability_group);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
        *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v16 == (char *)v2 )
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

// Line 556: range 0000000012DF44C6-0000000012DF4DDD
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::rewriteRogueDiaryCardDepotExcelConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> *v6; // rax
  std::map<unsigned int,unsigned int> *v7; // rax
  const unsigned int *v8; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  char *v14; // rsi
  unsigned int *v15; // r8
  int v16; // esi
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-204h]
  data::RogueDiaryCardDepotExcelConfigMap *__for_range; // [rsp+20h] [rbp-200h]
  std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>> *__for_range_0; // [rsp+28h] [rbp-1F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false,false>::reference v24; // [rsp+30h] [rbp-1F0h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> > >::type *depot_id; // [rsp+38h] [rbp-1E8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> > >::type *card_type_weight_map; // [rsp+40h] [rbp-1E0h]
  std::__detail::_Node_const_iterator<std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> >,false,false>::reference v27; // [rsp+50h] [rbp-1D0h]
  std::tuple_element<1,const std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> > >::type *card_weight_map; // [rsp+60h] [rbp-1C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false,false>::reference v29; // [rsp+68h] [rbp-1B8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig> >::type *config; // [rsp+78h] [rbp-1A8h]
  char v31[416]; // [rsp+80h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 4 14 card_count:570 64 8 15 __for_begin:558 96 8 13 __for_end:558 128 8 15 __for_begin:568 "
                        "160 8 13 __for_end:568 192 8 15 __for_begin:571 224 8 13 __for_end:571 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::rewriteRogueDiaryCardDepotExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  ret = 0;
  __for_range = &this->rogue_diary_card_depot_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryCardDepotExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryCardDepotExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryCardDepotExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryCardDepotExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false> *)(v2 + 96)) )
      break;
    v29 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false,false> *const)(v2 + 64));
    std::get<0ul,unsigned int const,data::RogueDiaryCardDepotExcelConfig>(v29);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueDiaryCardDepotExcelConfig>(v29);
    v6 = std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::operator[](
           &this->depot_card_type_weight_map,
           &config->depot_id);
    v7 = std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::operator[](
           v6,
           &config->buff_type);
    v9 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           v7,
           &config->buff_id,
           &config->weight,
           (const unsigned int *)v7,
           v8);
    if ( !v9.second )
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
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "rewriteRogueDiaryCardDepotExcelConfig",
        562);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              v10,
              (const char (*)[41])"[RogueDiary] duplicate buff in depot_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->depot_id);
      v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])", buff_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->buff_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->depot_card_type_weight_map;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v5);
  *(std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::end(__for_range_0);
  while ( 1 )
  {
    v14 = (char *)(v2 + 160);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false> *)(v2 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false> *)(v2 + 160)) )
      break;
    v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false,false> *const)(v2 + 128));
    depot_id = std::get<0ul,unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>(v24);
    card_type_weight_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>(v24);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, v14);
    *(_DWORD *)(v2 + 48) = 0;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v14);
    *(std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 192) = std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::begin(card_type_weight_map);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v14);
    *(std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 224) = std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::end(card_type_weight_map);
    while ( std::__detail::operator!=<std::pair<data::RogueDiaryBuffType const,std::map<unsigned int,unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> >,false> *)(v2 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> >,false> *)(v2 + 224)) )
    {
      v27 = std::__detail::_Node_const_iterator<std::pair<data::RogueDiaryBuffType const,std::map<unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> >,false,false> *const)(v2 + 192));
      std::get<0ul,data::RogueDiaryBuffType const,std::map<unsigned int,unsigned int>>(v27);
      card_weight_map = (std::tuple_element<1,const std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,data::RogueDiaryBuffType const,std::map<unsigned int,unsigned int>>(v27);
      v16 = std::map<unsigned int,unsigned int>::size(card_weight_map);
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      *(_DWORD *)(v2 + 48) += v16;
      std::__detail::_Node_const_iterator<std::pair<data::RogueDiaryBuffType const,std::map<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> >,false,false> *const)(v2 + 192));
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    v17 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
            &this->depot_card_count_map,
            depot_id,
            (unsigned int *)(v2 + 48),
            (const unsigned int *)&this->depot_card_count_map,
            v15);
    if ( !v17.second )
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
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "rewriteRogueDiaryCardDepotExcelConfig",
        577);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v18,
              (const char (*)[33])"[RogueDiary] duplicate depot_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, depot_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false,false> *const)(v2 + 128));
  }
  result = ret;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 586: range 0000000012DF4DDE-0000000012DF5B01
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryCardDepotExcelConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  ActivityRogueDiaryExcelConfigMgr *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  data::RogueDiaryBuffType type; // ecx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-29Ch]
  std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>> *__for_range; // [rsp+18h] [rbp-298h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false,false>::reference v30; // [rsp+20h] [rbp-290h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> > >::type *depot_id; // [rsp+28h] [rbp-288h]
  const std::tuple_element<1,std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> > >::type *__for_range_0; // [rsp+38h] [rbp-278h]
  std::__detail::_Node_const_iterator<std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> >,false,false>::reference v33; // [rsp+40h] [rbp-270h]
  std::tuple_element<0,std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> > >::type *buff_type; // [rsp+48h] [rbp-268h]
  std::tuple_element<1,const std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> > >::type *card_weight_map; // [rsp+50h] [rbp-260h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v36; // [rsp+60h] [rbp-250h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+68h] [rbp-248h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *weight; // [rsp+70h] [rbp-240h]
  data::RogueDiaryBuffDataExcelConfig *config_ptr; // [rsp+78h] [rbp-238h]
  char v40[560]; // [rsp+80h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 8 15 __for_begin:588 64 8 13 __for_end:588 96 8 15 __for_begin:590 128 8 13 __for_end:590 "
                        "160 8 9 <unknown> 192 8 15 __for_begin:598 224 8 13 __for_end:598 256 32 9 <unknown> 320 32 9 <u"
                        "nknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryCardDepotExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -202116109;
  ret = 0;
  __for_range = &this->depot_card_type_weight_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false> *)(v2 + 64)) )
      break;
    v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false,false> *const)(v2 + 32));
    depot_id = std::get<0ul,unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>(v30);
    __for_range_0 = std::get<1ul,unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>(v30);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 128) = std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<data::RogueDiaryBuffType const,std::map<unsigned int,unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> >,false> *)(v2 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> >,false> *)(v2 + 128)) )
    {
      v33 = std::__detail::_Node_const_iterator<std::pair<data::RogueDiaryBuffType const,std::map<unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> >,false,false> *const)(v2 + 96));
      buff_type = std::get<0ul,data::RogueDiaryBuffType const,std::map<unsigned int,unsigned int>>(v33);
      card_weight_map = (std::tuple_element<1,const std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,data::RogueDiaryBuffType const,std::map<unsigned int,unsigned int>>(v33);
      v6 = ((unsigned __int8)buff_type & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)buff_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)buff_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(buff_type);
      }
      if ( *buff_type == ROGUE_DIARY_BUFF_R || *buff_type == ROGUE_DIARY_BUFF_SR )
      {
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 192, v6);
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 192) = std::map<unsigned int,unsigned int>::begin(card_weight_map);
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, v6);
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 224) = std::map<unsigned int,unsigned int>::end(card_weight_map);
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 192),
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 224)) )
        {
          v36 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 192));
          id = std::get<0ul,unsigned int const,unsigned int>(v36);
          weight = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v36);
          v13 = this;
          if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(id);
          }
          config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryBuffDataExcelConfig(v13, *id);
          if ( config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4(&config_ptr->type);
            }
            type = config_ptr->type;
            if ( *(_BYTE *)(((unsigned __int64)buff_type >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)buff_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_type >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4(buff_type);
            }
            if ( type == *buff_type )
            {
              if ( *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(weight);
              }
              if ( !*weight )
              {
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
                  4u,
                  "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                  "checkRogueDiaryCardDepotExcelConfig",
                  615);
                v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 448),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v24 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        v23,
                        (const char (*)[47])"[RogueDiary] buff weight 0 in depot, depot_id:");
                v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, depot_id);
                v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v25,
                        (const char (*)[11])", buff_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
                *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
            else
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
                "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                "checkRogueDiaryCardDepotExcelConfig",
                609);
              v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 384),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v20 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      v19,
                      (const char (*)[49])"[RogueDiary] buff type in depot error, depot_id:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, depot_id);
              v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v21,
                      (const char (*)[11])", buff_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
              *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
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
              "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
              "checkRogueDiaryCardDepotExcelConfig",
              603);
            v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v15 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                    v14,
                    (const char (*)[67])"[RogueDiary] findRogueDiaryBuffDataExcelConfig failed in depot_id:");
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, depot_id);
            v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])", buff_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
            *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 192));
        }
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      }
      else
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
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "checkRogueDiaryCardDepotExcelConfig",
          594);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 256),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
               v7,
               (const char (*)[58])"[RogueDiary] invalide buff type in depot error, depot_id:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, depot_id);
        v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])", buff_type:");
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        v11 = ((unsigned __int8)buff_type & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)buff_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)buff_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(buff_type);
        }
        v12 = (__int64)data::enumValToStr(*buff_type, v11);
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          v12 = __asan_report_store8(v2 + 160, v11);
        *(_QWORD *)(v2 + 160) = v12;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 160));
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::__detail::_Node_const_iterator<std::pair<data::RogueDiaryBuffType const,std::map<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> >,false,false> *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
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
  }
  return result;
};

// Line 627: range 0000000012DF5B02-0000000012DF6018
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::rewriteRogueDiaryCardWeightExcelConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *v5; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v6; // rax
  const unsigned int *v7; // r8
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  data::RogueDiaryCardWeightExcelConfigMap *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false,false>::reference v16; // [rsp+28h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig> >::type *id; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig> >::type *config; // [rsp+38h] [rbp-108h]
  char v19[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:629 64 8 13 __for_end:629 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::rewriteRogueDiaryCardWeightExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->rogue_diary_card_weight_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryCardWeightExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::RogueDiaryCardWeightExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDiaryCardWeightExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryCardWeightExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false> *)(v2 + 64)) )
  {
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::RogueDiaryCardWeightExcelConfig>(v16);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueDiaryCardWeightExcelConfig>(v16);
    v6 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->card_rand_weight_map,
           id,
           &config->weight,
           (const unsigned int *)&this->card_rand_weight_map,
           v5);
    if ( !v6.second )
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
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "rewriteRogueDiaryCardWeightExcelConfig",
        633);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             v8,
             (const char (*)[42])"[RogueDiary] duplicate random method, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      v10 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
              &this->card_retry_rand_weight_map,
              id,
              &config->retry_weight,
              (const unsigned int *)&this->card_retry_rand_weight_map,
              v7);
      if ( !v10.second )
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
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "rewriteRogueDiaryCardWeightExcelConfig",
          639);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                v11,
                (const char (*)[42])"[RogueDiary] duplicate random method, id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 648: range 0000000012DF601A-0000000012DF66B3
int32_t __cdecl ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryCardWeightExcelConfig(
        ActivityRogueDiaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t total_weight; // [rsp+18h] [rbp-188h]
  uint32_t retry_total_weight; // [rsp+1Ch] [rbp-184h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-180h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+28h] [rbp-178h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v15; // [rsp+30h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *weight_0; // [rsp+40h] [rbp-160h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v17; // [rsp+48h] [rbp-158h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *weight; // [rsp+58h] [rbp-148h]
  char v19[320]; // [rsp+60h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:650 64 8 13 __for_end:650 96 8 15 __for_begin:660 128 8 13 __for_end:660 1"
                        "60 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::checkRogueDiaryCardWeightExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  total_weight = 0;
  __for_range = &this->card_rand_weight_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 32) = std::map<unsigned int,unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 32),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64)) )
      break;
    v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 32));
    std::get<0ul,unsigned int const,unsigned int>(v17);
    v6 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v17);
    weight = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    total_weight += *weight;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( total_weight )
  {
    retry_total_weight = 0;
    __for_range_0 = &this->card_retry_rand_weight_map;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 128) = std::map<unsigned int,unsigned int>::end(__for_range_0);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 128)) )
    {
      v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96));
      std::get<0ul,unsigned int const,unsigned int>(v15);
      v9 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v15);
      weight_0 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      retry_total_weight += *weight_0;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( retry_total_weight )
    {
      result = 0;
    }
    else
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
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "checkRogueDiaryCardWeightExcelConfig",
        666);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        v10,
        (const char (*)[49])"[RogueDiary] retry random total weight 0, error!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      result = -1;
    }
  }
  else
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
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "checkRogueDiaryCardWeightExcelConfig",
      656);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      v7,
      (const char (*)[43])"[RogueDiary] random total weight 0, error!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = -1;
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
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

// Line 673: range 0000000012DF66B4-0000000012DF6F3F
bool __fastcall ActivityRogueDiaryExcelConfigMgr::isRogueDungeonRoundAndRoomValid(
        const ActivityRogueDiaryExcelConfigMgr *const this,
        uint32_t dungeon_id,
        uint32_t round_index,
        uint32_t room_index)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  bool result; // al
  std::unordered_map<unsigned int,unsigned int> *p_dungeon_round_count_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v11; // rdx
  bool v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v19; // rdx
  unsigned int *p_second; // rax
  char v21; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::vector<data::RogueDiaryRoundExcelConfig>::const_reference v27; // rax
  const data::RogueDiaryDungeonExcelConfig *config_ptr; // [rsp+28h] [rbp-1C8h]
  char v31[448]; // [rsp+30h] [rbp-1C0h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 4 14 dungeon_id:672 64 4 15 round_index:672 80 4 14 room_index:672 96 8 8 iter:680 128 8 9 "
                        "<unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityRogueDiaryExcelConfigMgr::isRogueDungeonRoundAndRoomValid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -202116109;
  *(_DWORD *)(v4 + 48) = dungeon_id;
  *(_DWORD *)(v4 + 64) = round_index;
  *(_DWORD *)(v4 + 80) = room_index;
  v7 = *(unsigned int *)(v4 + 48);
  config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig(this, v7);
  if ( config_ptr )
  {
    p_dungeon_round_count_map = &this->dungeon_round_count_map;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 96, v7);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                    p_dungeon_round_count_map,
                                                                                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48));
    v11 = &this->dungeon_round_count_map;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, v4 + 48);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v4 + 128) = std::unordered_map<unsigned int,unsigned int>::end(v11);
    v12 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v4 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v4 + 128));
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 96 + 95) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "isRogueDungeonRoundAndRoomValid",
        683);
      v13 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
              (common::milog::MiLogStream *const)(v4 + 224),
              (const char (*)[69])"[RogueDiary] dungeon_round_count_map findDungeon failed, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
      result = 0;
    }
    else if ( *(_DWORD *)(v4 + 64) || *(_DWORD *)(v4 + 80) )
    {
      if ( *(_DWORD *)(v4 + 64) && *(_DWORD *)(v4 + 80) )
      {
        if ( std::vector<data::RogueDiaryRoundExcelConfig>::size(&config_ptr->round_list) < *(unsigned int *)(v4 + 64) )
          goto LABEL_28;
        v19 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v4 + 96));
        p_second = &v19->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        if ( v19->second >= *(_DWORD *)(v4 + 64) )
          v21 = 0;
        else
LABEL_28:
          v21 = 1;
        if ( v21 )
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
            "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
            "isRogueDungeonRoundAndRoomValid",
            697);
          v22 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  (common::milog::MiLogStream *const)(v4 + 352),
                  (const char (*)[34])"[RogueDiary] invalid round_index:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v4 + 64));
          v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v23,
                  (const char (*)[14])", room_index:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v4 + 80));
          v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v25,
                  (const char (*)[14])", dungeon_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
          result = 0;
        }
        else
        {
          v27 = std::vector<data::RogueDiaryRoundExcelConfig>::operator[](
                  &config_ptr->round_list,
                  (unsigned int)(*(_DWORD *)(v4 + 64) - 1));
          if ( *(_BYTE *)(((unsigned __int64)&v27->room_count >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v27->room_count >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v27->room_count);
          }
          result = v27->room_count >= *(_DWORD *)(v4 + 80);
        }
      }
      else
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
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "isRogueDungeonRoundAndRoomValid",
          692);
        v14 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)(v4 + 288),
                (const char (*)[34])"[RogueDiary] invalid round_index:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v4 + 64));
        v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])", room_index:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v4 + 80));
        v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])", dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 288));
        result = 0;
      }
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "isRogueDungeonRoundAndRoomValid",
      677);
    v8 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           (common::milog::MiLogStream *const)(v4 + 160),
           (const char (*)[66])"[RogueDiary] findRogueDiaryDungeonExcelConfig failed, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
    result = 0;
  }
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 704: range 0000000012DF6F40-0000000012DF7E51
__int64 __fastcall ActivityRogueDiaryExcelConfigMgr::getRogueDungeonNextRoundAndRoom(
        const ActivityRogueDiaryExcelConfigMgr *const this,
        uint32_t dungeon_id,
        uint32_t round_index,
        uint32_t room_index,
        std::pair<unsigned int,unsigned int> *index_pair)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  std::unordered_map<unsigned int,unsigned int> *p_dungeon_round_count_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v12; // rdx
  char *v13; // rsi
  bool v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v21; // rdx
  unsigned int *p_second; // rax
  char v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::vector<data::RogueDiaryRoundExcelConfig>::size_type v29; // rsi
  std::vector<data::RogueDiaryRoundExcelConfig>::const_reference v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v36; // rdx
  unsigned int *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  int v43; // ecx
  char v44; // al
  int v45; // ecx
  char v46; // al
  uint32_t cur_round_room_count; // [rsp+24h] [rbp-2ECh]
  const data::RogueDiaryDungeonExcelConfig *config_ptr; // [rsp+28h] [rbp-2E8h]
  char v52[736]; // [rsp+30h] [rbp-2E0h] BYREF

  v5 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(704LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "19 32 4 9 <unknown> 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 14"
                        " dungeon_id:703 128 4 15 round_index:703 144 4 14 room_index:703 160 8 8 iter:711 192 8 9 <unkno"
                        "wn> 224 8 9 <unknown> 256 8 9 <unknown> 288 8 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> "
                        "448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ActivityRogueDiaryExcelConfigMgr::getRogueDungeonNextRoundAndRoom;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = -234556924;
  v7[536862724] = -234556924;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -218959360;
  v7[536862728] = -218959360;
  v7[536862729] = -218959360;
  v7[536862731] = -218959118;
  v7[536862733] = -218959118;
  v7[536862735] = -218959118;
  v7[536862737] = -218959118;
  v7[536862739] = -218959118;
  v7[536862741] = -202116109;
  *(_DWORD *)(v5 + 112) = dungeon_id;
  *(_DWORD *)(v5 + 128) = round_index;
  *(_DWORD *)(v5 + 144) = room_index;
  v8 = *(unsigned int *)(v5 + 112);
  config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig(this, v8);
  if ( config_ptr )
  {
    p_dungeon_round_count_map = &this->dungeon_round_count_map;
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 160, v8);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v5 + 160) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                     p_dungeon_round_count_map,
                                                                                     (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v5 + 112));
    v12 = &this->dungeon_round_count_map;
    if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 192, v5 + 112);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v5 + 192) = std::unordered_map<unsigned int,unsigned int>::end(v12);
    v13 = (char *)(v5 + 192);
    v14 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v5 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v5 + 192));
    *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v14 )
    {
      *(_DWORD *)(((v5 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "getRogueDungeonNextRoundAndRoom",
        714);
      v15 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
              (common::milog::MiLogStream *const)(v5 + 384),
              (const char (*)[69])"[RogueDiary] dungeon_round_count_map findDungeon failed, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 112));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 384));
      result = 0xFFFFFFFFLL;
    }
    else if ( *(_DWORD *)(v5 + 128) || *(_DWORD *)(v5 + 144) )
    {
      if ( *(_DWORD *)(v5 + 128) && *(_DWORD *)(v5 + 144) )
      {
        if ( std::vector<data::RogueDiaryRoundExcelConfig>::size(&config_ptr->round_list) < *(unsigned int *)(v5 + 128) )
          goto LABEL_32;
        v21 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v5 + 160));
        p_second = &v21->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        if ( v21->second >= *(_DWORD *)(v5 + 128) )
          v23 = 0;
        else
LABEL_32:
          v23 = 1;
        if ( v23 )
        {
          *(_DWORD *)(((v5 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 543) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
            "getRogueDungeonNextRoundAndRoom",
            730);
          v24 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  (common::milog::MiLogStream *const)(v5 + 512),
                  (const char (*)[34])"[RogueDiary] invalid round_index:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v5 + 128));
          v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v25,
                  (const char (*)[14])", room_index:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v5 + 144));
          v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v27,
                  (const char (*)[14])", dungeon_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v5 + 112));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 512));
          result = 0xFFFFFFFFLL;
        }
        else
        {
          v29 = (unsigned int)(*(_DWORD *)(v5 + 128) - 1);
          v30 = std::vector<data::RogueDiaryRoundExcelConfig>::operator[](&config_ptr->round_list, v29);
          if ( *(_BYTE *)(((unsigned __int64)&v30->room_count >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v30->room_count >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v30->room_count);
          }
          cur_round_room_count = v30->room_count;
          if ( cur_round_room_count >= *(_DWORD *)(v5 + 144) )
          {
            if ( cur_round_room_count == *(_DWORD *)(v5 + 144) )
            {
              v36 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v5 + 160));
              v37 = &v36->second;
              if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v37);
              }
              if ( v36->second == *(_DWORD *)(v5 + 128) )
              {
                *(_DWORD *)(((v5 + 640) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v5 + 640) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v5 + 671) >> 3) + 0x7FFF8000) != 0
                  && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 671) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v5 + 640, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v5 + 640),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
                  "getRogueDungeonNextRoundAndRoom",
                  747);
                v38 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                        (common::milog::MiLogStream *const)(v5 + 640),
                        (const char (*)[34])"[RogueDiary] invalid round_index:");
                v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v38,
                        (const unsigned int *)(v5 + 128));
                v40 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v39,
                        (const char (*)[14])", room_index:");
                v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v40,
                        (const unsigned int *)(v5 + 144));
                v42 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v41,
                        (const char (*)[14])", dungeon_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v42,
                  (const unsigned int *)(v5 + 112));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 640));
                result = 0xFFFFFFFFLL;
              }
              else
              {
                *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = 4;
                v43 = *(_DWORD *)(v5 + 128) + 1;
                v44 = *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000);
                LOBYTE(v29) = v44 != 0;
                if ( v44 != 0 && v44 <= 3 )
                  __asan_report_store4(v5 + 64, v29);
                *(_DWORD *)(v5 + 64) = v43;
                *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) = 4;
                if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v5 + 80, v29);
                *(_DWORD *)(v5 + 80) = 1;
                std::pair<unsigned int,unsigned int>::pair<unsigned int,int,true>(
                  (std::pair<unsigned int,unsigned int> *const)(v5 + 256),
                  (unsigned int *)(v5 + 64),
                  (int *)(v5 + 80));
                std::pair<unsigned int,unsigned int>::operator=(
                  index_pair,
                  (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)(v5 + 256));
                result = 0LL;
              }
            }
            else
            {
              *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = 4;
              v45 = *(_DWORD *)(v5 + 144) + 1;
              v46 = *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000);
              if ( v46 != 0 && v46 <= 3 )
              {
                LOBYTE(v29) = v46 != 0;
                __asan_report_store4(v5 + 96, v29);
              }
              *(_DWORD *)(v5 + 96) = v45;
              std::pair<unsigned int,unsigned int>::pair<unsigned int &,unsigned int,true>(
                (std::pair<unsigned int,unsigned int> *const)(v5 + 288),
                (unsigned int *)(v5 + 128),
                (unsigned int *)(v5 + 96));
              std::pair<unsigned int,unsigned int>::operator=(
                index_pair,
                (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)(v5 + 288));
              result = 0LL;
            }
          }
          else
          {
            *(_DWORD *)(((v5 + 576) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 576) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 607) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 607) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 576, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 576),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
              "getRogueDungeonNextRoundAndRoom",
              738);
            v31 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    (common::milog::MiLogStream *const)(v5 + 576),
                    (const char (*)[34])"[RogueDiary] invalid round_index:");
            v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v31,
                    (const unsigned int *)(v5 + 128));
            v33 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v32,
                    (const char (*)[14])", room_index:");
            v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v33,
                    (const unsigned int *)(v5 + 144));
            v35 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v34,
                    (const char (*)[14])", dungeon_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v35,
              (const unsigned int *)(v5 + 112));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 576));
            result = 0xFFFFFFFFLL;
          }
        }
      }
      else
      {
        *(_DWORD *)(((v5 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "getRogueDungeonNextRoundAndRoom",
          725);
        v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)(v5 + 448),
                (const char (*)[34])"[RogueDiary] invalid round_index:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v5 + 128));
        v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])", room_index:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v5 + 144));
        v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])", dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v5 + 112));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 448));
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 32, v13);
      *(_DWORD *)(v5 + 32) = 1;
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 48, v13);
      *(_DWORD *)(v5 + 48) = 1;
      std::pair<unsigned int,unsigned int>::pair<int,int,true>(
        (std::pair<unsigned int,unsigned int> *const)(v5 + 224),
        (int *)(v5 + 32),
        (int *)(v5 + 48));
      std::pair<unsigned int,unsigned int>::operator=(
        index_pair,
        (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)(v5 + 224));
      result = 0LL;
    }
  }
  else
  {
    if ( *(char *)(((v5 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "getRogueDungeonNextRoundAndRoom",
      708);
    v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           (common::milog::MiLogStream *const)(v5 + 320),
           (const char (*)[66])"[RogueDiary] findRogueDiaryDungeonExcelConfig failed, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 112));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 320));
    result = 0xFFFFFFFFLL;
  }
  if ( v52 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF804C) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8054) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 768: range 0000000012DF7E52-0000000012DF8743
__int64 __fastcall ActivityRogueDiaryExcelConfigMgr::isRogueDungeonFinalRoom(
        const ActivityRogueDiaryExcelConfigMgr *const this,
        uint32_t dungeon_id,
        uint32_t round_index,
        uint32_t room_index)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::unordered_map<unsigned int,unsigned int> *p_dungeon_round_count_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v11; // rdx
  bool v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v19; // rdx
  unsigned int *p_second; // rax
  char v21; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v27; // rdx
  unsigned int *v28; // rax
  std::vector<data::RogueDiaryRoundExcelConfig>::const_reference v29; // rax
  const data::RogueDiaryDungeonExcelConfig *config_ptr; // [rsp+28h] [rbp-1C8h]
  char v33[448]; // [rsp+30h] [rbp-1C0h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 4 14 dungeon_id:767 64 4 15 round_index:767 80 4 14 room_index:767 96 8 8 iter:775 128 8 9 "
                        "<unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityRogueDiaryExcelConfigMgr::isRogueDungeonFinalRoom;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -202116109;
  *(_DWORD *)(v4 + 48) = dungeon_id;
  *(_DWORD *)(v4 + 64) = round_index;
  *(_DWORD *)(v4 + 80) = room_index;
  v7 = *(unsigned int *)(v4 + 48);
  config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig(this, v7);
  if ( config_ptr )
  {
    p_dungeon_round_count_map = &this->dungeon_round_count_map;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 96, v7);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                    p_dungeon_round_count_map,
                                                                                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48));
    v11 = &this->dungeon_round_count_map;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, v4 + 48);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v4 + 128) = std::unordered_map<unsigned int,unsigned int>::end(v11);
    v12 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v4 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v4 + 128));
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 96 + 95) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "isRogueDungeonFinalRoom",
        778);
      v13 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
              (common::milog::MiLogStream *const)(v4 + 224),
              (const char (*)[69])"[RogueDiary] dungeon_round_count_map findDungeon failed, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
      result = 0LL;
    }
    else if ( *(_DWORD *)(v4 + 64) || *(_DWORD *)(v4 + 80) )
    {
      if ( *(_DWORD *)(v4 + 64) && *(_DWORD *)(v4 + 80) )
      {
        if ( std::vector<data::RogueDiaryRoundExcelConfig>::size(&config_ptr->round_list) < *(unsigned int *)(v4 + 64) )
          goto LABEL_28;
        v19 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v4 + 96));
        p_second = &v19->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        if ( v19->second >= *(_DWORD *)(v4 + 64) )
          v21 = 0;
        else
LABEL_28:
          v21 = 1;
        if ( v21 )
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
            "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
            "isRogueDungeonFinalRoom",
            792);
          v22 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  (common::milog::MiLogStream *const)(v4 + 352),
                  (const char (*)[34])"[RogueDiary] invalid round_index:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v4 + 64));
          v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v23,
                  (const char (*)[14])", room_index:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v4 + 80));
          v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v25,
                  (const char (*)[14])", dungeon_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
          result = 0LL;
        }
        else
        {
          v27 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v4 + 96));
          v28 = &v27->second;
          if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v28);
          }
          if ( v27->second != *(_DWORD *)(v4 + 64) )
            goto LABEL_41;
          v29 = std::vector<data::RogueDiaryRoundExcelConfig>::operator[](
                  &config_ptr->round_list,
                  (unsigned int)(*(_DWORD *)(v4 + 64) - 1));
          if ( *(_BYTE *)(((unsigned __int64)&v29->room_count >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v29->room_count >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v29->room_count);
          }
          if ( v29->room_count == *(_DWORD *)(v4 + 80) )
            result = 1LL;
          else
LABEL_41:
            result = 0LL;
        }
      }
      else
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
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "isRogueDungeonFinalRoom",
          787);
        v14 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)(v4 + 288),
                (const char (*)[34])"[RogueDiary] invalid round_index:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v4 + 64));
        v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])", room_index:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v4 + 80));
        v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])", dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 288));
        result = 0LL;
      }
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "isRogueDungeonFinalRoom",
      772);
    v8 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           (common::milog::MiLogStream *const)(v4 + 160),
           (const char (*)[66])"[RogueDiary] findRogueDiaryDungeonExcelConfig failed, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
    result = 0LL;
  }
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 799: range 0000000012DF8744-0000000012DF8E43
bool __fastcall ActivityRogueDiaryExcelConfigMgr::isRogueDungeonRoundFinalRoom(
        const ActivityRogueDiaryExcelConfigMgr *const this,
        uint32_t dungeon_id,
        uint32_t round_index,
        uint32_t room_index)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  bool result; // al
  std::unordered_map<unsigned int,unsigned int> *p_dungeon_round_count_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v11; // rdx
  bool v12; // al
  common::milog::MiLogStream *v13; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v14; // rdx
  unsigned int *p_second; // rax
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::vector<data::RogueDiaryRoundExcelConfig>::const_reference v22; // rax
  const data::RogueDiaryDungeonExcelConfig *config_ptr; // [rsp+28h] [rbp-188h]
  char v26[384]; // [rsp+30h] [rbp-180h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 4 14 dungeon_id:798 64 4 15 round_index:798 80 4 14 room_index:798 96 8 8 iter:806 128 8 9 "
                        "<unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityRogueDiaryExcelConfigMgr::isRogueDungeonRoundFinalRoom;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -202116109;
  *(_DWORD *)(v4 + 48) = dungeon_id;
  *(_DWORD *)(v4 + 64) = round_index;
  *(_DWORD *)(v4 + 80) = room_index;
  v7 = *(unsigned int *)(v4 + 48);
  config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig(this, v7);
  if ( config_ptr )
  {
    p_dungeon_round_count_map = &this->dungeon_round_count_map;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 96, v7);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                    p_dungeon_round_count_map,
                                                                                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48));
    v11 = &this->dungeon_round_count_map;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, v4 + 48);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v4 + 128) = std::unordered_map<unsigned int,unsigned int>::end(v11);
    v12 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v4 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v4 + 128));
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 1) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "isRogueDungeonRoundFinalRoom",
        809);
      v13 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
              (common::milog::MiLogStream *const)(v4 + 224),
              (const char (*)[69])"[RogueDiary] dungeon_round_count_map findDungeon failed, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
      result = 0;
    }
    else if ( *(_DWORD *)(v4 + 64) && *(_DWORD *)(v4 + 80) )
    {
      if ( std::vector<data::RogueDiaryRoundExcelConfig>::size(&config_ptr->round_list) < *(unsigned int *)(v4 + 64) )
        goto LABEL_23;
      v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v4 + 96));
      p_second = &v14->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      if ( v14->second >= *(_DWORD *)(v4 + 64) )
        v16 = 0;
      else
LABEL_23:
        v16 = 1;
      if ( v16 )
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
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "isRogueDungeonRoundFinalRoom",
          818);
        v17 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)(v4 + 288),
                (const char (*)[34])"[RogueDiary] invalid round_index:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v4 + 64));
        v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])", room_index:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v4 + 80));
        v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])", dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 288));
        result = 0;
      }
      else
      {
        v22 = std::vector<data::RogueDiaryRoundExcelConfig>::operator[](
                &config_ptr->round_list,
                (unsigned int)(*(_DWORD *)(v4 + 64) - 1));
        if ( *(_BYTE *)(((unsigned __int64)&v22->room_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v22->room_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v22->room_count);
        }
        result = v22->room_count == *(_DWORD *)(v4 + 80);
      }
    }
    else
    {
      result = 0;
    }
  }
  else
  {
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
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "isRogueDungeonRoundFinalRoom",
      803);
    v8 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           (common::milog::MiLogStream *const)(v4 + 160),
           (const char (*)[66])"[RogueDiary] findRogueDiaryDungeonExcelConfig failed, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
    result = 0;
  }
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
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

// Line 825: range 0000000012DF8E44-0000000012DF9517
__int64 __fastcall ActivityRogueDiaryExcelConfigMgr::isRogueDiaryNextStageDungeon(
        const ActivityRogueDiaryExcelConfigMgr *const this,
        uint32_t stage_id,
        uint32_t difficulty,
        uint32_t dungeon_id,
        uint32_t next_dungeon_id)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  unsigned int *v11; // r15
  const unsigned int *v12; // r14
  std::vector<unsigned int>::const_iterator v13; // rax
  unsigned int v14; // eax
  unsigned int *v15; // r15
  const unsigned int *v16; // r14
  std::vector<unsigned int>::const_iterator v17; // rax
  unsigned int v18; // eax
  unsigned int *M_current; // r15
  const unsigned int *v20; // r14
  std::vector<unsigned int>::const_iterator v21; // rax
  unsigned int v22; // eax
  common::milog::MiLogStream *v23; // rax
  __int64 result; // rax
  unsigned int *__last2; // [rsp+10h] [rbp-1A0h]
  unsigned int *__last2a; // [rsp+10h] [rbp-1A0h]
  unsigned int *__last2b; // [rsp+10h] [rbp-1A0h]
  data::RogueDiaryStageDifficultyType difficulty_type; // [rsp+34h] [rbp-17Ch]
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+38h] [rbp-178h]
  char v33[368]; // [rsp+40h] [rbp-170h] BYREF

  v5 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(320LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "7 48 1 9 <unknown> 64 4 12 stage_id:824 80 4 14 difficulty:824 96 8 9 <unknown> 128 24 27 subseq"
                        "uence_dungeon_vec:832 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ActivityRogueDiaryExcelConfigMgr::isRogueDiaryNextStageDungeon;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -234881024;
  v7[536862725] = -218959118;
  v7[536862727] = -218959118;
  v7[536862729] = -202116109;
  *(_DWORD *)(v5 + 64) = stage_id;
  *(_DWORD *)(v5 + 80) = difficulty;
  v8 = *(unsigned int *)(v5 + 64);
  stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(this, v8);
  if ( stage_config_ptr )
  {
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v5 + 96, v8);
    *(_DWORD *)(v5 + 96) = dungeon_id;
    if ( *(_BYTE *)(((v5 + 100) >> 3) + 0x7FFF8000) != 0
      && (char)(((v5 + 100) & 7) + 3) >= *(_BYTE *)(((v5 + 100) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v5 + 100, (((_BYTE)v5 + 100) & 7u) + 3);
    }
    *(_DWORD *)(v5 + 100) = next_dungeon_id;
    std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v5 + 48));
    std::vector<unsigned int>::vector(
      (std::vector<unsigned int> *const)(v5 + 128),
      (std::initializer_list<unsigned int>)__PAIR128__(2LL, v5 + 96),
      (const std::vector<unsigned int>::allocator_type *)(v5 + 48));
    std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v5 + 48));
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
    difficulty_type = *(_DWORD *)(v5 + 80);
    if ( difficulty_type == ROGUE_DIARY_STAGE_DIFFICULTY_INSANE )
    {
      __last2b = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v5 + 128))._M_current;
      M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v5 + 128))._M_current;
      v20 = std::vector<unsigned int>::end(&stage_config_ptr->insane_dungeon_id_list)._M_current;
      v21._M_current = std::vector<unsigned int>::begin(&stage_config_ptr->insane_dungeon_id_list)._M_current;
      LOBYTE(v22) = std::includes<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
                      v21,
                      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v20,
                      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last2b);
      v10 = v22;
    }
    else
    {
      if ( difficulty_type > ROGUE_DIARY_STAGE_DIFFICULTY_INSANE )
      {
LABEL_20:
        *(_DWORD *)(((v5 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 31) & 7) >= *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "isRogueDiaryNextStageDungeon",
          843);
        v23 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                (common::milog::MiLogStream *const)(v5 + 256),
                (const char (*)[65])"[RogueDiary] invalid rogue diary dungeon difficulty, difficulty:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v5 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 256));
        *(_DWORD *)(((v5 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v10 = 0;
        goto LABEL_23;
      }
      if ( difficulty_type == ROGUE_DIARY_STAGE_DIFFICULTY_NORMAL )
      {
        __last2 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v5 + 128))._M_current;
        v11 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v5 + 128))._M_current;
        v12 = std::vector<unsigned int>::end(&stage_config_ptr->normal_dungeon_id_list)._M_current;
        v13._M_current = std::vector<unsigned int>::begin(&stage_config_ptr->normal_dungeon_id_list)._M_current;
        LOBYTE(v14) = std::includes<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
                        v13,
                        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v12,
                        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v11,
                        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last2);
        v10 = v14;
      }
      else
      {
        if ( difficulty_type != ROGUE_DIARY_STAGE_DIFFICULTY_HARD )
          goto LABEL_20;
        __last2a = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v5 + 128))._M_current;
        v15 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v5 + 128))._M_current;
        v16 = std::vector<unsigned int>::end(&stage_config_ptr->hard_dungeon_id_list)._M_current;
        v17._M_current = std::vector<unsigned int>::begin(&stage_config_ptr->hard_dungeon_id_list)._M_current;
        LOBYTE(v18) = std::includes<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
                        v17,
                        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v16,
                        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v15,
                        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last2a);
        v10 = v18;
      }
    }
LABEL_23:
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 128));
    goto LABEL_24;
  }
  if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 - 33) & 7) >= *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v5 + 192, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v5 + 192),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
    "isRogueDiaryNextStageDungeon",
    829);
  v9 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
         (common::milog::MiLogStream *const)(v5 + 192),
         (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 64));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 192));
  v10 = 0;
LABEL_24:
  result = v10;
  if ( v33 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 850: range 0000000012DF9518-0000000012DF9EFA
__int64 __fastcall ActivityRogueDiaryExcelConfigMgr::getRogueDiaryNextStageDungeonId(
        const ActivityRogueDiaryExcelConfigMgr *const this,
        uint32_t stage_id,
        uint32_t difficulty,
        uint32_t dungeon_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  const unsigned int *v10; // r14
  const unsigned int *v11; // rcx
  const std::vector<unsigned int> *p_normal_dungeon_id_list; // rdx
  bool v13; // al
  const std::vector<unsigned int> *v14; // rdx
  bool v15; // al
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v16; // rax
  unsigned int *v17; // rdx
  const unsigned int *v18; // r14
  const unsigned int *v19; // rcx
  const std::vector<unsigned int> *p_hard_dungeon_id_list; // rdx
  bool v21; // al
  const std::vector<unsigned int> *v22; // rdx
  bool v23; // al
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v24; // rax
  unsigned int *v25; // rdx
  const unsigned int *M_current; // r14
  const unsigned int *v27; // rcx
  const std::vector<unsigned int> *p_insane_dungeon_id_list; // rdx
  bool v29; // al
  const std::vector<unsigned int> *v30; // rdx
  bool v31; // al
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v32; // rax
  unsigned int *v33; // rdx
  common::milog::MiLogStream *v34; // rax
  data::RogueDiaryStageDifficultyType difficulty_type; // [rsp+24h] [rbp-23Ch]
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-238h]
  char v39[560]; // [rsp+30h] [rbp-230h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(512LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "14 48 4 12 stage_id:849 64 4 14 difficulty:849 80 4 14 dungeon_id:849 96 8 8 iter:862 128 8 9 <u"
                        "nknown> 160 8 9 <unknown> 192 8 8 iter:875 224 8 9 <unknown> 256 8 9 <unknown> 288 8 8 iter:888 "
                        "320 8 9 <unknown> 352 8 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityRogueDiaryExcelConfigMgr::getRogueDiaryNextStageDungeonId;
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
  v6[536862729] = -218959360;
  v6[536862730] = -218959360;
  v6[536862731] = -218959360;
  v6[536862733] = -218959118;
  v6[536862735] = -202116109;
  *(_DWORD *)(v4 + 48) = stage_id;
  *(_DWORD *)(v4 + 64) = difficulty;
  *(_DWORD *)(v4 + 80) = dungeon_id;
  v7 = *(unsigned int *)(v4 + 48);
  stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(this, v7);
  if ( !stage_config_ptr )
  {
    if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 384, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 384),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "getRogueDiaryNextStageDungeonId",
      854);
    v8 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           (common::milog::MiLogStream *const)(v4 + 384),
           (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 384));
    result = 0LL;
    goto LABEL_52;
  }
  difficulty_type = *(_DWORD *)(v4 + 64);
  if ( difficulty_type == ROGUE_DIARY_STAGE_DIFFICULTY_INSANE )
  {
    M_current = std::vector<unsigned int>::end(&stage_config_ptr->insane_dungeon_id_list)._M_current;
    v27 = std::vector<unsigned int>::begin(&stage_config_ptr->insane_dungeon_id_list)._M_current;
    if ( *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 288, v7);
    *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 288) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v27,
                                                                                                    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                    (const unsigned int *)(v4 + 80));
    p_insane_dungeon_id_list = &stage_config_ptr->insane_dungeon_id_list;
    if ( *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 320, M_current);
    *(std::vector<unsigned int>::const_iterator *)(v4 + 320) = std::vector<unsigned int>::end(p_insane_dungeon_id_list);
    v29 = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 288),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 320));
    *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( !v29 )
      goto LABEL_48;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 288),
      0);
    *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
    v30 = &stage_config_ptr->insane_dungeon_id_list;
    if ( *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 352, 0LL);
    *(std::vector<unsigned int>::const_iterator *)(v4 + 352) = std::vector<unsigned int>::end(v30);
    v31 = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 288),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 352));
    *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) = -8;
    if ( v31 )
    {
      v32 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 288));
      v33 = (unsigned int *)v32;
      if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v32);
      }
      result = *v33;
    }
    else
    {
LABEL_48:
      result = 0LL;
    }
  }
  else
  {
    if ( difficulty_type > ROGUE_DIARY_STAGE_DIFFICULTY_INSANE )
    {
LABEL_49:
      if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "getRogueDiaryNextStageDungeonId",
        900);
      v34 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
              (common::milog::MiLogStream *const)(v4 + 448),
              (const char (*)[65])"[RogueDiary] invalid rogue diary dungeon difficulty, difficulty:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 448));
      result = 0LL;
      goto LABEL_52;
    }
    if ( difficulty_type == ROGUE_DIARY_STAGE_DIFFICULTY_NORMAL )
    {
      v10 = std::vector<unsigned int>::end(&stage_config_ptr->normal_dungeon_id_list)._M_current;
      v11 = std::vector<unsigned int>::begin(&stage_config_ptr->normal_dungeon_id_list)._M_current;
      if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 96, v7);
      *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 96) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                     (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v11,
                                                                                                     (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v10,
                                                                                                     (const unsigned int *)(v4 + 80));
      p_normal_dungeon_id_list = &stage_config_ptr->normal_dungeon_id_list;
      if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 128, v10);
      *(std::vector<unsigned int>::const_iterator *)(v4 + 128) = std::vector<unsigned int>::end(p_normal_dungeon_id_list);
      v13 = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 128));
      *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( !v13 )
        goto LABEL_24;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 96),
        0);
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
      v14 = &stage_config_ptr->normal_dungeon_id_list;
      if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 160, 0LL);
      *(std::vector<unsigned int>::const_iterator *)(v4 + 160) = std::vector<unsigned int>::end(v14);
      v15 = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 160));
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v15 )
      {
        v16 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 96));
        v17 = (unsigned int *)v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        result = *v17;
      }
      else
      {
LABEL_24:
        result = 0LL;
      }
    }
    else
    {
      if ( difficulty_type != ROGUE_DIARY_STAGE_DIFFICULTY_HARD )
        goto LABEL_49;
      v18 = std::vector<unsigned int>::end(&stage_config_ptr->hard_dungeon_id_list)._M_current;
      v19 = std::vector<unsigned int>::begin(&stage_config_ptr->hard_dungeon_id_list)._M_current;
      if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 192, v7);
      *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 192) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v19, (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v18, (const unsigned int *)(v4 + 80));
      p_hard_dungeon_id_list = &stage_config_ptr->hard_dungeon_id_list;
      if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 224, v18);
      *(std::vector<unsigned int>::const_iterator *)(v4 + 224) = std::vector<unsigned int>::end(p_hard_dungeon_id_list);
      v21 = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 192),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 224));
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( !v21 )
        goto LABEL_36;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 192),
        0);
      *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
      v22 = &stage_config_ptr->hard_dungeon_id_list;
      if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 256, 0LL);
      *(std::vector<unsigned int>::const_iterator *)(v4 + 256) = std::vector<unsigned int>::end(v22);
      v23 = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 192),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 256));
      *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = -8;
      if ( v23 )
      {
        v24 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 192));
        v25 = (unsigned int *)v24;
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v24);
        }
        result = *v25;
      }
      else
      {
LABEL_36:
        result = 0LL;
      }
    }
  }
LABEL_52:
  if ( v39 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
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
  }
  return result;
};

// Line 907: range 0000000012DF9EFC-0000000012DFA73B
bool __fastcall ActivityRogueDiaryExcelConfigMgr::isRogueDiaryStageFinalDungeon(
        const ActivityRogueDiaryExcelConfigMgr *const this,
        uint32_t stage_id,
        uint32_t difficulty,
        uint32_t dungeon_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  bool result; // al
  common::milog::MiLogStream *v9; // rax
  std::vector<unsigned int>::const_reference v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  std::vector<unsigned int>::const_reference v13; // rax
  _DWORD *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  std::vector<unsigned int>::const_reference v16; // rax
  _DWORD *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  data::RogueDiaryStageDifficultyType difficulty_type; // [rsp+24h] [rbp-1ACh]
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-1A8h]
  char v23[416]; // [rsp+30h] [rbp-1A0h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 12 stage_id:906 48 4 14 difficulty:906 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unk"
                        "nown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityRogueDiaryExcelConfigMgr::isRogueDiaryStageFinalDungeon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862723] = -218959118;
  v6[536862725] = -218959118;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -202116109;
  *(_DWORD *)(v4 + 32) = stage_id;
  *(_DWORD *)(v4 + 48) = difficulty;
  stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
                       this,
                       *(unsigned int *)(v4 + 32));
  if ( !stage_config_ptr )
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
      3u,
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "isRogueDiaryStageFinalDungeon",
      911);
    v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           (common::milog::MiLogStream *const)(v4 + 64),
           (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    result = 0;
    goto LABEL_37;
  }
  difficulty_type = *(_DWORD *)(v4 + 48);
  if ( difficulty_type == ROGUE_DIARY_STAGE_DIFFICULTY_INSANE )
  {
    if ( std::vector<unsigned int>::empty(&stage_config_ptr->insane_dungeon_id_list) )
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
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "isRogueDiaryStageFinalDungeon",
        939);
      v15 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              (common::milog::MiLogStream *const)(v4 + 256),
              (const char (*)[52])"[RogueDiary] stage have no insane config, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
      result = 1;
    }
    else
    {
      v16 = std::vector<unsigned int>::back(&stage_config_ptr->insane_dungeon_id_list);
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      result = dungeon_id == *v17;
    }
  }
  else
  {
    if ( difficulty_type > ROGUE_DIARY_STAGE_DIFFICULTY_INSANE )
    {
LABEL_34:
      if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "isRogueDiaryStageFinalDungeon",
        945);
      v18 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
              (common::milog::MiLogStream *const)(v4 + 320),
              (const char (*)[65])"[RogueDiary] invalid rogue diary dungeon difficulty, difficulty:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
      result = 0;
      goto LABEL_37;
    }
    if ( difficulty_type == ROGUE_DIARY_STAGE_DIFFICULTY_NORMAL )
    {
      if ( std::vector<unsigned int>::empty(&stage_config_ptr->normal_dungeon_id_list) )
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
          4u,
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "isRogueDiaryStageFinalDungeon",
          921);
        v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
               (common::milog::MiLogStream *const)(v4 + 128),
               (const char (*)[52])"[RogueDiary] stage have no normal config, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
        result = 0;
      }
      else
      {
        v10 = std::vector<unsigned int>::back(&stage_config_ptr->normal_dungeon_id_list);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        result = dungeon_id == *v11;
      }
    }
    else
    {
      if ( difficulty_type != ROGUE_DIARY_STAGE_DIFFICULTY_HARD )
        goto LABEL_34;
      if ( std::vector<unsigned int>::empty(&stage_config_ptr->hard_dungeon_id_list) )
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
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "isRogueDiaryStageFinalDungeon",
          930);
        v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                (common::milog::MiLogStream *const)(v4 + 192),
                (const char (*)[50])"[RogueDiary] stage have no hard config, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
        result = 0;
      }
      else
      {
        v13 = std::vector<unsigned int>::back(&stage_config_ptr->hard_dungeon_id_list);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        result = dungeon_id == *v14;
      }
    }
  }
LABEL_37:
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 952: range 0000000012DFA73C-0000000012DFAA78
bool __fastcall ActivityRogueDiaryExcelConfigMgr::isRogueDiaryDungeonFinalRound(
        const ActivityRogueDiaryExcelConfigMgr *const this,
        __int64 dungeon_id,
        uint32_t round_index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,unsigned int> *p_dungeon_round_count_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  bool result; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v11; // rdx
  unsigned int *p_second; // rax
  char v14[224]; // [rsp+10h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 14 dungeon_id:951 64 8 8 iter:953 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueDiaryExcelConfigMgr::isRogueDiaryDungeonFinalRound;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = dungeon_id;
  p_dungeon_round_count_map = &this->dungeon_round_count_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_dungeon_round_count_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  v7 = &this->dungeon_round_count_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 96));
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
      3u,
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "isRogueDiaryDungeonFinalRound",
      956);
    v9 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[69])"[RogueDiary] dungeon_round_count_map findDungeon failed, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0;
  }
  else
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
    p_second = &v11->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = round_index == v11->second;
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 963: range 0000000012DFAA7A-0000000012DFBA5D
__int64 __fastcall ActivityRogueDiaryExcelConfigMgr::randRoundRoomInfo(
        const ActivityRogueDiaryExcelConfigMgr *const this,
        uint32_t config_id,
        std::vector<std::pair<unsigned int,bool>> *round_room_config_vec)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  char *v10; // rsi
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > > > > *p_round_rand_vec_pair_map; // rdx
  char *v12; // rsi
  bool v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  _BOOL4 v17; // edx
  unsigned __int64 v18; // rax
  unsigned int *M_current; // r15
  unsigned int *v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rdx
  char *v23; // rsi
  std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > >,false,true>::pointer v24; // rax
  std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > >,false,true>::pointer v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // r15d
  unsigned int *v30; // rax
  bool *v31; // r8
  unsigned __int64 v32; // rax
  int v33; // edx
  __int64 result; // rax
  const data::RogueDiaryRoundRoomExcelConfig *config_ptr; // [rsp+28h] [rbp-358h]
  const std::vector<data::RogueDiaryRoomTypeConfig> *__for_range; // [rsp+30h] [rbp-350h]
  const std::vector<data::RogueDiaryRoomTypeConfig> *__for_range_0; // [rsp+38h] [rbp-348h]
  const data::RogueDiaryRoomTypeConfig *room_config; // [rsp+48h] [rbp-338h]
  char v40[816]; // [rsp+50h] [rbp-330h] BYREF

  v4 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(768LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "18 48 1 16 is_hard_room:998 64 4 9 index:971 80 4 13 config_id:962 96 8 15 __for_begin:974 128 8"
                        " 13 __for_end:974 160 8 15 __for_begin:989 192 8 13 __for_end:989 224 8 8 iter:991 256 8 9 <unkn"
                        "own> 288 8 9 <unknown> 320 8 9 <unknown> 352 8 9 <unknown> 384 24 26 optional_hard_room_vec:973 "
                        "448 24 17 hard_room_vec:983 512 24 22 room_config_id_vec:997 576 32 9 <unknown> 640 32 9 <unknow"
                        "n> 704 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityRogueDiaryExcelConfigMgr::randRoundRoomInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -218959360;
  v6[536862729] = -218959360;
  v6[536862730] = -218959360;
  v6[536862731] = -218959360;
  v6[536862732] = -234881024;
  v6[536862733] = -218959118;
  v6[536862734] = -234881024;
  v6[536862735] = -218959118;
  v6[536862736] = -234881024;
  v6[536862737] = -218959118;
  v6[536862739] = -218959118;
  v6[536862741] = -218959118;
  v6[536862743] = -202116109;
  *(_DWORD *)(v4 + 80) = config_id;
  std::vector<std::pair<unsigned int,bool>>::clear(round_room_config_vec);
  v7 = *(unsigned int *)(v4 + 80);
  config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoundRoomExcelConfig(this, v7);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 64, v7);
    *(_DWORD *)(v4 + 64) = 0;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 384));
    __for_range = &config_ptr->room_type_config_list;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 96, v7);
    *(std::vector<data::RogueDiaryRoomTypeConfig>::const_iterator *)(v4 + 96) = std::vector<data::RogueDiaryRoomTypeConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, v7);
    *(std::vector<data::RogueDiaryRoomTypeConfig>::const_iterator *)(v4 + 128) = std::vector<data::RogueDiaryRoomTypeConfig>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::RogueDiaryRoomTypeConfig const*,std::vector<data::RogueDiaryRoomTypeConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::RogueDiaryRoomTypeConfig*,std::vector<data::RogueDiaryRoomTypeConfig> > *)(v4 + 96),
              (const __gnu_cxx::__normal_iterator<const data::RogueDiaryRoomTypeConfig*,std::vector<data::RogueDiaryRoomTypeConfig> > *)(v4 + 128)) )
    {
      room_config = __gnu_cxx::__normal_iterator<data::RogueDiaryRoomTypeConfig const*,std::vector<data::RogueDiaryRoomTypeConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::RogueDiaryRoomTypeConfig*,std::vector<data::RogueDiaryRoomTypeConfig> > *const)(v4 + 96));
      if ( !std::vector<unsigned int>::empty(&room_config->hard_room_config_list) )
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v4 + 384),
          (const std::vector<unsigned int>::value_type *)(v4 + 64));
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 64);
      ++*(_DWORD *)(v4 + 64);
      __gnu_cxx::__normal_iterator<data::RogueDiaryRoomTypeConfig const*,std::vector<data::RogueDiaryRoomTypeConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::RogueDiaryRoomTypeConfig*,std::vector<data::RogueDiaryRoomTypeConfig> > *const)(v4 + 96));
    }
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    v9 = ((v4 + 448) >> 3) + 2147450880;
    *(_WORD *)v9 = 0;
    *(_BYTE *)(v9 + 2) = 0;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 448));
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->hard_room_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->hard_room_count >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->hard_room_count);
    }
    v10 = (char *)(v4 + 448);
    common::tools::RandomUtils::randomSelect<unsigned int>(
      (const std::vector<unsigned int> *)(v4 + 384),
      (std::vector<unsigned int> *)(v4 + 448),
      config_ptr->hard_room_count);
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 64, v10);
    *(_DWORD *)(v4 + 64) = 0;
    __for_range_0 = &config_ptr->room_type_config_list;
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 160, v10);
    *(std::vector<data::RogueDiaryRoomTypeConfig>::const_iterator *)(v4 + 160) = std::vector<data::RogueDiaryRoomTypeConfig>::begin(__for_range_0);
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 192, v10);
    *(std::vector<data::RogueDiaryRoomTypeConfig>::const_iterator *)(v4 + 192) = std::vector<data::RogueDiaryRoomTypeConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::RogueDiaryRoomTypeConfig const*,std::vector<data::RogueDiaryRoomTypeConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::RogueDiaryRoomTypeConfig*,std::vector<data::RogueDiaryRoomTypeConfig> > *)(v4 + 160),
              (const __gnu_cxx::__normal_iterator<const data::RogueDiaryRoomTypeConfig*,std::vector<data::RogueDiaryRoomTypeConfig> > *)(v4 + 192)) )
    {
      __gnu_cxx::__normal_iterator<data::RogueDiaryRoomTypeConfig const*,std::vector<data::RogueDiaryRoomTypeConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::RogueDiaryRoomTypeConfig*,std::vector<data::RogueDiaryRoomTypeConfig> > *const)(v4 + 160));
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 256, v4 + 192);
      *(std::pair<unsigned int,unsigned int> *)(v4 + 256) = std::make_pair<unsigned int &,unsigned int &>(
                                                              (unsigned int *)(v4 + 80),
                                                              (unsigned int *)(v4 + 64));
      if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 224, v4 + 64);
      *(std::unordered_map<std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > > > >::const_iterator *)(v4 + 224) = std::unordered_map<std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>>>::find(&this->round_rand_vec_pair_map, (const std::unordered_map<std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > > > >::key_type *)(v4 + 256));
      *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
      p_round_rand_vec_pair_map = &this->round_rand_vec_pair_map;
      if ( *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 288, v4 + 256);
      *(std::unordered_map<std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > > > >::const_iterator *)(v4 + 288) = std::unordered_map<std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>>>::end(p_round_rand_vec_pair_map);
      v12 = (char *)(v4 + 288);
      v13 = std::__detail::operator==<std::pair<std::pair const<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>,true>(
              (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > >,true> *)(v4 + 224),
              (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > >,true> *)(v4 + 288));
      *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = -8;
      if ( v13 )
      {
        *(_DWORD *)(((v4 + 640) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 640) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 640, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 640),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "randRoundRoomInfo",
          994);
        v14 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                (common::milog::MiLogStream *const)(v4 + 640),
                (const char (*)[74])"[RogueDiary] round_rand_vec_pair_map find round+room_index failed, index:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v4 + 64));
        v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])", config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 640));
        *(_DWORD *)(((v4 + 640) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v17 = 0;
      }
      else
      {
        v18 = ((v4 + 512) >> 3) + 2147450880;
        *(_WORD *)v18 = 0;
        *(_BYTE *)(v18 + 2) = 0;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 512));
        *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 1;
        *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 352, v12);
        *(std::vector<unsigned int>::iterator *)(v4 + 352) = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 448));
        *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 448))._M_current;
        v20 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 448))._M_current;
        if ( *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 320, v12);
        *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 320) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v20,
                                                                                                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                                  (const unsigned int *)(v4 + 64));
        v23 = (char *)(v4 + 352);
        LOBYTE(v21) = __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 320),
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 352));
        v22 = v21;
        LOBYTE(v21) = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
        LOBYTE(v23) = (_BYTE)v21 != 0;
        if ( (v21 & 0x80u) != 0 )
          __asan_report_store1(v4 + 48, v23, v22);
        *(_BYTE *)(v4 + 48) = v22;
        *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) = -8;
        if ( *(char *)(((v4 + 48) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(v4 + 48, v23, v4 + 48);
        if ( *(_BYTE *)(v4 + 48) )
        {
          v24 = std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > >,false,true> *const)(v4 + 224));
          common::tools::RandomUtils::randomSelect<unsigned int>(
            &v24->second.second,
            (std::vector<unsigned int> *)(v4 + 512),
            1u);
        }
        else
        {
          v25 = std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::pair<std::vector<unsigned int>,std::vector<unsigned int> > >,false,true> *const)(v4 + 224));
          common::tools::RandomUtils::randomSelect<unsigned int>(
            &v25->second.first,
            (std::vector<unsigned int> *)(v4 + 512),
            1u);
        }
        if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v4 + 512)) )
        {
          *(_DWORD *)(((v4 + 704) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 704) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 704, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 704),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
            "randRoundRoomInfo",
            1009);
          v26 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                  (common::milog::MiLogStream *const)(v4 + 704),
                  (const char (*)[59])"[RogueDiary] room_config_id_vec empty error failed, index:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v4 + 64));
          v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v27, (const char (*)[13])", config_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v4 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 704));
          *(_DWORD *)(((v4 + 704) >> 3) + 0x7FFF8000) = -117901064;
          v3 = -1;
          v29 = 0;
        }
        else
        {
          v30 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 512), 0LL);
          std::vector<std::pair<unsigned int,bool>>::emplace_back<unsigned int &,bool &>(
            round_room_config_vec,
            v30,
            (bool *)(v4 + 48),
            v30,
            v31);
          if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v4 + 64);
          ++*(_DWORD *)(v4 + 64);
          v29 = 1;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 512));
        v17 = v29 == 1;
      }
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
      v32 = ((v4 + 512) >> 3) + 2147450880;
      *(_WORD *)v32 = -1800;
      *(_BYTE *)(v32 + 2) = -8;
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( !v17 )
      {
        v33 = 0;
        goto LABEL_64;
      }
      __gnu_cxx::__normal_iterator<data::RogueDiaryRoomTypeConfig const*,std::vector<data::RogueDiaryRoomTypeConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::RogueDiaryRoomTypeConfig*,std::vector<data::RogueDiaryRoomTypeConfig> > *const)(v4 + 160));
    }
    v33 = 1;
LABEL_64:
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v33 == 1 )
      v3 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 448));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 384));
  }
  else
  {
    if ( *(char *)(((v4 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 576, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 576),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "randRoundRoomInfo",
      968);
    v8 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
           (common::milog::MiLogStream *const)(v4 + 576),
           (const char (*)[65])"[RogueDiary] findRogueDiaryDungeonExcelConfig failed, config_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 576));
    v3 = -1;
  }
  result = v3;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF805C) = 0;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1020: range 0000000012DFBA5E-0000000012DFBCB3
__int64 __fastcall ActivityRogueDiaryExcelConfigMgr::getRogueDiaryBuffType(
        const ActivityRogueDiaryExcelConfigMgr *const this,
        uint32_t buff_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::RogueDiaryBuffDataExcelConfig *config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 buff_id:1019 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::getRogueDiaryBuffType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = buff_id;
  config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryBuffDataExcelConfig(
                 this,
                 *(unsigned int *)(v2 + 48));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->type);
    }
    result = (unsigned int)config_ptr->type;
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
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "getRogueDiaryBuffType",
      1024);
    v5 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[64])"[RogueDiary] findRogueDiaryBuffDataExcelConfig failed, buff_id:");
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

// Line 1031: range 0000000012DFBCB4-0000000012DFC59C
// local variable allocation has failed, the output may be wrong!
uint32_t __cdecl ActivityRogueDiaryExcelConfigMgr::weightSelectRandSrCount(
        const ActivityRogueDiaryExcelConfigMgr *const this,
        bool is_retry,
        uint32_t reserve_sr_count)
{
  uint32_t sr_count; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const ActivityRogueDiaryExcelConfigMgr *v7; // rcx
  const unsigned int *v8; // r8
  int v9; // r15d
  unsigned __int64 v10; // rax
  const ActivityRogueDiaryExcelConfigMgr *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  uint32_t result; // eax
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-1E0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v16; // [rsp+28h] [rbp-1D8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+30h] [rbp-1D0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *weight; // [rsp+38h] [rbp-1C8h]
  const data::RogueDiaryCardWeightExcelConfig *config_ptr; // [rsp+40h] [rbp-1C0h]
  const data::RogueDiaryCardWeightExcelConfig *rand_config_ptr; // [rsp+48h] [rbp-1B8h]
  char v21[432]; // [rsp+50h] [rbp-1B0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 19 rand_config_id:1032 48 8 16 __for_begin:1044 80 8 14 __for_end:1044 112 32 9 <unknown>"
                        " 176 32 9 <unknown> 240 32 9 <unknown> 304 48 20 rand_weight_map:1043";
  *(_QWORD *)(v4 + 16) = ActivityRogueDiaryExcelConfigMgr::weightSelectRandSrCount;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = -219021312;
  v6[536862725] = 62194;
  v6[536862726] = -219021312;
  v6[536862727] = 62194;
  v6[536862728] = -219021312;
  v6[536862729] = 62194;
  v6[536862731] = -202116109;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v4 + 32, is_retry);
  *(_DWORD *)(v4 + 32) = 0;
  if ( !is_retry )
  {
    if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
           &this->card_rand_weight_map,
           (unsigned int *)(v4 + 32),
           0) )
    {
      if ( *(char *)(((v4 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 143) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 113) & 7) >= *(_BYTE *)(((v4 + 143) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 112, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 112),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "weightSelectRandSrCount",
        1037);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v4 + 112),
        (const char (*)[36])"[RogueDiary] weightSelectOne failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 112));
      sr_count = 0;
      goto LABEL_40;
    }
    goto LABEL_31;
  }
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 304));
  __for_range = &this->card_retry_rand_weight_map;
  if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 48, is_retry);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 48) = std::map<unsigned int,unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 80, is_retry);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 80) = std::map<unsigned int,unsigned int>::end(__for_range);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 48),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 80)) )
  {
    v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 48));
    id = std::get<0ul,unsigned int const,unsigned int>(v16);
    weight = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v16);
    v7 = this;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryCardWeightExcelConfig(v7, *id);
    if ( config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->sr_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->sr_count >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->sr_count);
      }
      if ( reserve_sr_count <= config_ptr->sr_count )
        std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
          (std::map<unsigned int,unsigned int> *const)(v4 + 304),
          id,
          weight,
          id,
          v8);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 48));
  }
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
         (const std::map<unsigned int,unsigned int> *)(v4 + 304),
         (unsigned int *)(v4 + 32),
         0) )
  {
    *(_DWORD *)(((v4 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 49) & 7) >= *(_BYTE *)(((v4 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "weightSelectRandSrCount",
      1054);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      (common::milog::MiLogStream *const)(v4 + 176),
      (const char (*)[36])"[RogueDiary] weightSelectOne failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 176));
    *(_DWORD *)(((v4 + 176) >> 3) + 0x7FFF8000) = -117901064;
    sr_count = 0;
    v9 = 0;
  }
  else
  {
    v9 = 1;
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 304));
  v10 = ((v4 + 304) >> 3) + 2147450880;
  *(_DWORD *)v10 = -117901064;
  *(_WORD *)(v10 + 4) = -1800;
  if ( v9 == 1 )
  {
LABEL_31:
    v11 = this;
    if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v4 + 32);
    rand_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryCardWeightExcelConfig(
                        v11,
                        *(unsigned int *)(v4 + 32));
    if ( rand_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&rand_config_ptr->sr_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)rand_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rand_config_ptr->sr_count >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&rand_config_ptr->sr_count);
      }
      sr_count = rand_config_ptr->sr_count;
    }
    else
    {
      *(_DWORD *)(((v4 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 15) & 7) >= *(_BYTE *)(((v4 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "weightSelectRandSrCount",
        1061);
      v12 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
              (common::milog::MiLogStream *const)(v4 + 240),
              (const char (*)[73])"[RogueDiary] findRogueDiaryCardWeightExcelConfig failed, rand_config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 240));
      sr_count = 0;
    }
  }
LABEL_40:
  result = sr_count;
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 1068: range 0000000012DFC59E-0000000012DFD204
std::map<unsigned int,unsigned int> *__fastcall ActivityRogueDiaryExcelConfigMgr::getRandSrCardWeightMap(
        std::map<unsigned int,unsigned int> *retstr,
        const ActivityRogueDiaryExcelConfigMgr *const this,
        uint32_t depot_id,
        const std::vector<unsigned int> *chosen_card_vec,
        const std::set<unsigned int> *reduce_weight_card_set)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>> *p_depot_card_type_weight_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>> *v9; // rdx
  char *v10; // rsi
  bool v11; // al
  common::milog::MiLogStream *v12; // rax
  char *v13; // rsi
  bool v14; // al
  const unsigned int *M_current; // r14
  const unsigned int *v16; // rcx
  bool v17; // al
  const unsigned int *v18; // r8
  __int64 v19; // rsi
  unsigned int *v20; // r8
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> *card_depot_map; // [rsp+38h] [rbp-298h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-290h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v30; // [rsp+48h] [rbp-288h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+50h] [rbp-280h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *weight; // [rsp+58h] [rbp-278h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v33; // [rsp+68h] [rbp-268h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *id_0; // [rsp+70h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *weight_0; // [rsp+78h] [rbp-258h]
  char v36[592]; // [rsp+80h] [rbp-250h] BYREF

  v5 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(544LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "15 48 4 9 <unknown> 64 4 19 refresh_weight:1088 80 4 13 depot_id:1067 96 8 20 card_depot_iter:10"
                        "70 128 8 9 <unknown> 160 8 12 sr_iter:1077 192 8 9 <unknown> 224 8 16 __for_begin:1080 256 8 14 "
                        "__for_end:1080 288 8 9 <unknown> 320 8 9 <unknown> 352 8 16 __for_begin:1099 384 8 14 __for_end:"
                        "1099 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ActivityRogueDiaryExcelConfigMgr::getRandSrCardWeightMap;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -218959360;
  v7[536862728] = -218959360;
  v7[536862729] = -218959360;
  v7[536862730] = -218959360;
  v7[536862731] = -218959360;
  v7[536862732] = -218959360;
  v7[536862734] = -218959118;
  v7[536862736] = -202116109;
  *(_DWORD *)(v5 + 80) = depot_id;
  std::map<unsigned int,unsigned int>::map(retstr);
  p_depot_card_type_weight_map = &this->depot_card_type_weight_map;
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, this);
  *(std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::find(p_depot_card_type_weight_map, (const std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::key_type *)(v5 + 80));
  v9 = &this->depot_card_type_weight_map;
  if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 128, v5 + 80);
  *(std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::const_iterator *)(v5 + 128) = std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::end(v9);
  v10 = (char *)(v5 + 128);
  v11 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false> *)(v5 + 96),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false> *)(v5 + 128));
  *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v11 )
  {
    *(_DWORD *)(((v5 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 65) & 7) >= *(_BYTE *)(((v5 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "getRandSrCardWeightMap",
      1073);
    v12 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            (common::milog::MiLogStream *const)(v5 + 416),
            (const char (*)[49])"[RogueDiary] find card_depot failed, , depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 416));
  }
  else
  {
    card_depot_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false,false> *const)(v5 + 96))->second;
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v5 + 48, v10);
    *(_DWORD *)(v5 + 48) = 2;
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 160, v10);
    *(std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::const_iterator *)(v5 + 160) = std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::find(card_depot_map, (const std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::key_type *)(v5 + 48));
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 192, v5 + 48);
    *(std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::const_iterator *)(v5 + 192) = std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::end(card_depot_map);
    v13 = (char *)(v5 + 192);
    v14 = std::__detail::operator!=<std::pair<data::RogueDiaryBuffType const,std::map<unsigned int,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> >,false> *)(v5 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> >,false> *)(v5 + 192));
    *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v14 )
    {
      __for_range = &std::__detail::_Node_const_iterator<std::pair<data::RogueDiaryBuffType const,std::map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> >,false,false> *const)(v5 + 160))->second;
      *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 224, v13);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v5 + 224) = std::map<unsigned int,unsigned int>::begin(__for_range);
      *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 256, v13);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v5 + 256) = std::map<unsigned int,unsigned int>::end(__for_range);
      while ( 1 )
      {
        v13 = (char *)(v5 + 256);
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 224),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 256)) )
          break;
        v30 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 224));
        id = std::get<0ul,unsigned int const,unsigned int>(v30);
        weight = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v30);
        *(_BYTE *)(((v5 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 320, v13);
        *(std::vector<unsigned int>::const_iterator *)(v5 + 320) = std::vector<unsigned int>::end(chosen_card_vec);
        *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) = 0;
        M_current = std::vector<unsigned int>::end(chosen_card_vec)._M_current;
        v16 = std::vector<unsigned int>::begin(chosen_card_vec)._M_current;
        if ( *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 288, v13);
        *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 288) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v16, (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current, id);
        v17 = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 288),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 320));
        *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 320) >> 3) + 0x7FFF8000) = -8;
        if ( !v17 )
        {
          if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                 reduce_weight_card_set,
                 id) )
          {
            *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(weight);
            }
            v19 = (unsigned int)(int)std::ceil((float)(int)*weight * 0.2);
            if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v5 + 64, v19);
            *(_DWORD *)(v5 + 64) = v19;
            std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
              retstr,
              id,
              (unsigned int *)(v5 + 64),
              id,
              v20);
            *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
          }
          else
          {
            std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
              retstr,
              id,
              weight,
              id,
              v18);
          }
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 224));
      }
      *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v5 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 352, v13);
    *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 352) = std::map<unsigned int,unsigned int>::begin(retstr);
    *(_BYTE *)(((v5 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 384, v13);
    *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 384) = std::map<unsigned int,unsigned int>::end(retstr);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 352),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 384)) )
    {
      v33 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 352));
      id_0 = std::get<0ul,unsigned int const,unsigned int>(v33);
      weight_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v33);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(reduce_weight_card_set, id_0) )
      {
        *(_DWORD *)(((v5 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 32 + 31) & 7) >= *(_BYTE *)(((v5 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "getRandSrCardWeightMap",
          1103);
        v21 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                (common::milog::MiLogStream *const)(v5 + 480),
                (const char (*)[61])"[RogueDiary] getRandSrCardWeightMap after weight change, id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id_0);
        v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])", weight:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, weight_0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 480));
        *(_DWORD *)(((v5 + 480) >> 3) + 0x7FFF8000) = -117901064;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 352));
    }
  }
  if ( v36 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8040) = -168430091;
  }
  return retstr;
};

// Line 1111: range 0000000012DFD206-0000000012DFDE6C
std::map<unsigned int,unsigned int> *__fastcall ActivityRogueDiaryExcelConfigMgr::getRandRCardWeightMap(
        std::map<unsigned int,unsigned int> *retstr,
        const ActivityRogueDiaryExcelConfigMgr *const this,
        uint32_t depot_id,
        const std::vector<unsigned int> *chosen_card_vec,
        const std::set<unsigned int> *reduce_weight_card_set)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>> *p_depot_card_type_weight_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>> *v9; // rdx
  char *v10; // rsi
  bool v11; // al
  common::milog::MiLogStream *v12; // rax
  char *v13; // rsi
  bool v14; // al
  const unsigned int *M_current; // r14
  const unsigned int *v16; // rcx
  bool v17; // al
  const unsigned int *v18; // r8
  __int64 v19; // rsi
  unsigned int *v20; // r8
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> *card_depot_map; // [rsp+38h] [rbp-298h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-290h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v30; // [rsp+48h] [rbp-288h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+50h] [rbp-280h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *weight; // [rsp+58h] [rbp-278h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v33; // [rsp+68h] [rbp-268h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *id_0; // [rsp+70h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *weight_0; // [rsp+78h] [rbp-258h]
  char v36[592]; // [rsp+80h] [rbp-250h] BYREF

  v5 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(544LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "15 48 4 9 <unknown> 64 4 19 refresh_weight:1131 80 4 13 depot_id:1110 96 8 20 card_depot_iter:11"
                        "13 128 8 9 <unknown> 160 8 11 r_iter:1120 192 8 9 <unknown> 224 8 16 __for_begin:1123 256 8 14 _"
                        "_for_end:1123 288 8 9 <unknown> 320 8 9 <unknown> 352 8 16 __for_begin:1142 384 8 14 __for_end:1"
                        "142 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ActivityRogueDiaryExcelConfigMgr::getRandRCardWeightMap;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -218959360;
  v7[536862728] = -218959360;
  v7[536862729] = -218959360;
  v7[536862730] = -218959360;
  v7[536862731] = -218959360;
  v7[536862732] = -218959360;
  v7[536862734] = -218959118;
  v7[536862736] = -202116109;
  *(_DWORD *)(v5 + 80) = depot_id;
  std::map<unsigned int,unsigned int>::map(retstr);
  p_depot_card_type_weight_map = &this->depot_card_type_weight_map;
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, this);
  *(std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::find(p_depot_card_type_weight_map, (const std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::key_type *)(v5 + 80));
  v9 = &this->depot_card_type_weight_map;
  if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 128, v5 + 80);
  *(std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::const_iterator *)(v5 + 128) = std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::end(v9);
  v10 = (char *)(v5 + 128);
  v11 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false> *)(v5 + 96),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false> *)(v5 + 128));
  *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v11 )
  {
    *(_DWORD *)(((v5 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 65) & 7) >= *(_BYTE *)(((v5 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "getRandRCardWeightMap",
      1116);
    v12 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            (common::milog::MiLogStream *const)(v5 + 416),
            (const char (*)[49])"[RogueDiary] find card_depot failed, , depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 416));
  }
  else
  {
    card_depot_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false,false> *const)(v5 + 96))->second;
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v5 + 48, v10);
    *(_DWORD *)(v5 + 48) = 1;
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 160, v10);
    *(std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::const_iterator *)(v5 + 160) = std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::find(card_depot_map, (const std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::key_type *)(v5 + 48));
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 192, v5 + 48);
    *(std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::const_iterator *)(v5 + 192) = std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>::end(card_depot_map);
    v13 = (char *)(v5 + 192);
    v14 = std::__detail::operator!=<std::pair<data::RogueDiaryBuffType const,std::map<unsigned int,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> >,false> *)(v5 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> >,false> *)(v5 + 192));
    *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v14 )
    {
      __for_range = &std::__detail::_Node_const_iterator<std::pair<data::RogueDiaryBuffType const,std::map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::RogueDiaryBuffType,std::map<unsigned int,unsigned int> >,false,false> *const)(v5 + 160))->second;
      *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 224, v13);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v5 + 224) = std::map<unsigned int,unsigned int>::begin(__for_range);
      *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 256, v13);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v5 + 256) = std::map<unsigned int,unsigned int>::end(__for_range);
      while ( 1 )
      {
        v13 = (char *)(v5 + 256);
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 224),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 256)) )
          break;
        v30 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 224));
        id = std::get<0ul,unsigned int const,unsigned int>(v30);
        weight = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v30);
        *(_BYTE *)(((v5 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 320, v13);
        *(std::vector<unsigned int>::const_iterator *)(v5 + 320) = std::vector<unsigned int>::end(chosen_card_vec);
        *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) = 0;
        M_current = std::vector<unsigned int>::end(chosen_card_vec)._M_current;
        v16 = std::vector<unsigned int>::begin(chosen_card_vec)._M_current;
        if ( *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 288, v13);
        *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 288) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v16, (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current, id);
        v17 = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 288),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 320));
        *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 320) >> 3) + 0x7FFF8000) = -8;
        if ( !v17 )
        {
          if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                 reduce_weight_card_set,
                 id) )
          {
            *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(weight);
            }
            v19 = (unsigned int)(int)std::ceil((float)(int)*weight * 0.2);
            if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v5 + 64, v19);
            *(_DWORD *)(v5 + 64) = v19;
            std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
              retstr,
              id,
              (unsigned int *)(v5 + 64),
              id,
              v20);
            *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
          }
          else
          {
            std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
              retstr,
              id,
              weight,
              id,
              v18);
          }
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 224));
      }
      *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v5 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 352, v13);
    *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 352) = std::map<unsigned int,unsigned int>::begin(retstr);
    *(_BYTE *)(((v5 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 384, v13);
    *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 384) = std::map<unsigned int,unsigned int>::end(retstr);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 352),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 384)) )
    {
      v33 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 352));
      id_0 = std::get<0ul,unsigned int const,unsigned int>(v33);
      weight_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v33);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(reduce_weight_card_set, id_0) )
      {
        *(_DWORD *)(((v5 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 32 + 31) & 7) >= *(_BYTE *)(((v5 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "getRandRCardWeightMap",
          1146);
        v21 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                (common::milog::MiLogStream *const)(v5 + 480),
                (const char (*)[61])"[RogueDiary] getRandSrCardWeightMap after weight change, id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id_0);
        v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])", weight:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, weight_0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 480));
        *(_DWORD *)(((v5 + 480) >> 3) + 0x7FFF8000) = -117901064;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 352));
    }
  }
  if ( v36 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8040) = -168430091;
  }
  return retstr;
};

// Line 1154: range 0000000012DFDE6E-0000000012DFE775
__int64 __fastcall ActivityRogueDiaryExcelConfigMgr::tryGetRogueDiaryStageFirstDungeon(
        const ActivityRogueDiaryExcelConfigMgr *const this,
        uint32_t stage_id,
        uint32_t difficulty,
        unsigned __int64 enter_dungeon_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v11; // rax
  uint32_t *v12; // rdx
  uint32_t v13; // ecx
  char v14; // dl
  common::milog::MiLogStream *v15; // rax
  __int64 v16; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v17; // rax
  uint32_t *v18; // rdx
  uint32_t v19; // ecx
  char v20; // dl
  common::milog::MiLogStream *v21; // rax
  __int64 v22; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v23; // rax
  uint32_t *v24; // rdx
  uint32_t v25; // ecx
  char v26; // dl
  common::milog::MiLogStream *v27; // rax
  data::RogueDiaryStageDifficultyType difficulty_type; // [rsp+24h] [rbp-1ACh]
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-1A8h]
  char v32[416]; // [rsp+30h] [rbp-1A0h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 13 stage_id:1153 48 4 15 difficulty:1153 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <u"
                        "nknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityRogueDiaryExcelConfigMgr::tryGetRogueDiaryStageFirstDungeon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862723] = -218959118;
  v6[536862725] = -218959118;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -202116109;
  *(_DWORD *)(v4 + 32) = stage_id;
  *(_DWORD *)(v4 + 48) = difficulty;
  stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
                       this,
                       *(unsigned int *)(v4 + 32));
  if ( !stage_config_ptr )
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
      3u,
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "tryGetRogueDiaryStageFirstDungeon",
      1158);
    v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           (common::milog::MiLogStream *const)(v4 + 64),
           (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    result = 0xFFFFFFFFLL;
    goto LABEL_44;
  }
  difficulty_type = *(_DWORD *)(v4 + 48);
  if ( difficulty_type == ROGUE_DIARY_STAGE_DIFFICULTY_INSANE )
  {
    if ( !std::vector<unsigned int>::empty(&stage_config_ptr->insane_dungeon_id_list) )
    {
      v22 = 0LL;
      v23 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &stage_config_ptr->insane_dungeon_id_list,
                                                                                                  0LL);
      v24 = v23;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v23);
      }
      v25 = *v24;
      v26 = *(_BYTE *)((enter_dungeon_id >> 3) + 0x7FFF8000);
      if ( v26 != 0 && (char)((enter_dungeon_id & 7) + 3) >= v26 )
      {
        LOBYTE(v22) = v26 != 0;
        __asan_report_store4(enter_dungeon_id, v22);
      }
      *(_DWORD *)enter_dungeon_id = v25;
      goto LABEL_43;
    }
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
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "tryGetRogueDiaryStageFirstDungeon",
      1188);
    v21 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            (common::milog::MiLogStream *const)(v4 + 256),
            (const char (*)[52])"[RogueDiary] stage have no insane config, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( difficulty_type > ROGUE_DIARY_STAGE_DIFFICULTY_INSANE )
    {
LABEL_40:
      if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "tryGetRogueDiaryStageFirstDungeon",
        1195);
      v27 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
              (common::milog::MiLogStream *const)(v4 + 320),
              (const char (*)[65])"[RogueDiary] invalid rogue diary dungeon difficulty, difficulty:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
      result = 0xFFFFFFFFLL;
      goto LABEL_44;
    }
    if ( difficulty_type != ROGUE_DIARY_STAGE_DIFFICULTY_NORMAL )
    {
      if ( difficulty_type != ROGUE_DIARY_STAGE_DIFFICULTY_HARD )
        goto LABEL_40;
      if ( std::vector<unsigned int>::empty(&stage_config_ptr->hard_dungeon_id_list) )
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
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "tryGetRogueDiaryStageFirstDungeon",
          1178);
        v15 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                (common::milog::MiLogStream *const)(v4 + 192),
                (const char (*)[50])"[RogueDiary] stage have no hard config, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
        result = 0xFFFFFFFFLL;
        goto LABEL_44;
      }
      v16 = 0LL;
      v17 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &stage_config_ptr->hard_dungeon_id_list,
                                                                                                  0LL);
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      v19 = *v18;
      v20 = *(_BYTE *)((enter_dungeon_id >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)((enter_dungeon_id & 7) + 3) >= v20 )
      {
        LOBYTE(v16) = v20 != 0;
        __asan_report_store4(enter_dungeon_id, v16);
      }
      *(_DWORD *)enter_dungeon_id = v19;
LABEL_43:
      result = 0LL;
      goto LABEL_44;
    }
    if ( !std::vector<unsigned int>::empty(&stage_config_ptr->normal_dungeon_id_list) )
    {
      v10 = 0LL;
      v11 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &stage_config_ptr->normal_dungeon_id_list,
                                                                                                  0LL);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
      v14 = *(_BYTE *)((enter_dungeon_id >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)((enter_dungeon_id & 7) + 3) >= v14 )
      {
        LOBYTE(v10) = v14 != 0;
        __asan_report_store4(enter_dungeon_id, v10);
      }
      *(_DWORD *)enter_dungeon_id = v13;
      goto LABEL_43;
    }
    if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "tryGetRogueDiaryStageFirstDungeon",
      1168);
    v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           (common::milog::MiLogStream *const)(v4 + 128),
           (const char (*)[52])"[RogueDiary] stage have no normal config, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
    result = 0xFFFFFFFFLL;
  }
LABEL_44:
  if ( v32 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 1202: range 0000000012DFE776-0000000012DFEF50
__int64 __fastcall ActivityRogueDiaryExcelConfigMgr::getRogueDungeonHpCorrection(
        const ActivityRogueDiaryExcelConfigMgr *const this,
        uint32_t dungeon_id,
        uint32_t round_index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::unordered_map<unsigned int,unsigned int> *p_dungeon_round_count_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v10; // rdx
  bool v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v16; // rdx
  unsigned int *p_second; // rax
  char v18; // al
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::vector<data::RogueDiaryRoundExcelConfig>::const_reference v22; // rax
  const data::RogueDiaryDungeonExcelConfig *config_ptr; // [rsp+18h] [rbp-1A8h]
  char v25[416]; // [rsp+20h] [rbp-1A0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 15 dungeon_id:1201 48 4 16 round_index:1201 64 8 9 iter:1209 96 8 9 <unknown> 128 32 9 <u"
                        "nknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueDiaryExcelConfigMgr::getRogueDungeonHpCorrection;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -202116109;
  *(_DWORD *)(v3 + 32) = dungeon_id;
  *(_DWORD *)(v3 + 48) = round_index;
  v6 = *(unsigned int *)(v3 + 32);
  config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig(this, v6);
  if ( config_ptr )
  {
    p_dungeon_round_count_map = &this->dungeon_round_count_map;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, v6);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                    p_dungeon_round_count_map,
                                                                                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 32));
    v10 = &this->dungeon_round_count_map;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 32);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v10);
    v11 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v11 )
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
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "getRogueDungeonHpCorrection",
        1212);
      v12 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
              (common::milog::MiLogStream *const)(v3 + 192),
              (const char (*)[69])"[RogueDiary] dungeon_round_count_map findDungeon failed, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      result = 0LL;
    }
    else if ( *(_DWORD *)(v3 + 48) )
    {
      if ( std::vector<data::RogueDiaryRoundExcelConfig>::size(&config_ptr->round_list) < *(unsigned int *)(v3 + 48) )
        goto LABEL_24;
      v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
      p_second = &v16->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      if ( v16->second >= *(_DWORD *)(v3 + 48) )
        v18 = 0;
      else
LABEL_24:
        v18 = 1;
      if ( v18 )
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
          3u,
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "getRogueDungeonHpCorrection",
          1222);
        v19 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)(v3 + 320),
                (const char (*)[34])"[RogueDiary] invalid round_index:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])", dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        result = 0LL;
      }
      else
      {
        v22 = std::vector<data::RogueDiaryRoundExcelConfig>::operator[](
                &config_ptr->round_list,
                (unsigned int)(*(_DWORD *)(v3 + 48) - 1));
        if ( *(_BYTE *)(((unsigned __int64)&v22->hp_correction >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v22->hp_correction >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v22->hp_correction);
        }
        result = v22->hp_correction;
      }
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
        3u,
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "getRogueDungeonHpCorrection",
        1217);
      v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[34])"[RogueDiary] invalid round_index:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])", dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      result = 0LL;
    }
  }
  else
  {
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "getRogueDungeonHpCorrection",
      1206);
    v7 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[66])"[RogueDiary] findRogueDiaryDungeonExcelConfig failed, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0LL;
  }
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
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

// Line 1229: range 0000000012DFEF52-0000000012DFF31F
__int64 __fastcall ActivityRogueDiaryExcelConfigMgr::getRogueDairyResourceCost(
        const ActivityRogueDiaryExcelConfigMgr *const this,
        __int64 resource_type)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<data::RogueDiaryResourceType,unsigned int> *p_resource_cost_map; // rdx
  std::unordered_map<data::RogueDiaryResourceType,unsigned int> *v6; // rdx
  bool v7; // al
  common::milog::MiLogStream *v8; // r14
  __int64 v9; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<const data::RogueDiaryResourceType,unsigned int>,false,false>::pointer v11; // rdx
  unsigned int *p_second; // rax
  char v13[272]; // [rsp+10h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 18 resource_type:1228 64 8 9 iter:1230 96 8 9 <unknown> 128 8 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::getRogueDairyResourceCost;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 48) = resource_type;
  p_resource_cost_map = &this->resource_cost_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, resource_type);
  *(std::unordered_map<data::RogueDiaryResourceType,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<data::RogueDiaryResourceType,unsigned int>::find(
                                                                                                  p_resource_cost_map,
                                                                                                  (const std::unordered_map<data::RogueDiaryResourceType,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->resource_cost_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<data::RogueDiaryResourceType,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<data::RogueDiaryResourceType,unsigned int>::end(v6);
  v7 = std::__detail::operator==<std::pair<data::RogueDiaryResourceType const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::RogueDiaryResourceType,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const data::RogueDiaryResourceType,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
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
      3u,
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "getRogueDairyResourceCost",
      1233);
    v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[46])"[RogueDiary] find resource type failed, type:");
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    v9 = (__int64)data::enumValToStr(
                    (data::RogueDiaryResourceType)*(_DWORD *)(v2 + 48),
                    (__int64)"[RogueDiary] find resource type failed, type:");
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      v9 = __asan_report_store8(v2 + 128, "[RogueDiary] find resource type failed, type:");
    *(_QWORD *)(v2 + 128) = v9;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v2 + 128));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0LL;
  }
  else
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<data::RogueDiaryResourceType const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::RogueDiaryResourceType,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v11->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v11->second;
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1240: range 0000000012DFF320-0000000012E000A3
int __fastcall ActivityRogueDiaryExcelConfigMgr::getStageDungeonPreRoundCount(
        const ActivityRogueDiaryExcelConfigMgr *const this,
        uint32_t stage_id,
        uint32_t difficulty,
        uint32_t dungeon_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  __int64 v9; // rsi
  common::milog::MiLogStream *v10; // rax
  const unsigned int *v11; // r14
  const unsigned int *v12; // rcx
  const std::vector<unsigned int> *p_normal_dungeon_id_list; // rdx
  bool v14; // al
  common::milog::MiLogStream *v15; // rax
  const unsigned int *v16; // rdi
  const unsigned int *v17; // r14
  const unsigned int *v18; // rcx
  const std::vector<unsigned int> *p_hard_dungeon_id_list; // rdx
  bool v20; // al
  common::milog::MiLogStream *v21; // rax
  const unsigned int *v22; // rdi
  const unsigned int *M_current; // r14
  const unsigned int *v24; // rcx
  const std::vector<unsigned int> *p_insane_dungeon_id_list; // rdx
  bool v26; // al
  common::milog::MiLogStream *v27; // rax
  const unsigned int *v28; // rdi
  common::milog::MiLogStream *v29; // rax
  data::RogueDiaryStageDifficultyType difficulty_type; // [rsp+2Ch] [rbp-304h]
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+30h] [rbp-300h]
  char v34[752]; // [rsp+40h] [rbp-2F0h] BYREF

  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(704LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "16 48 4 13 stage_id:1239 64 4 15 difficulty:1239 80 4 15 dungeon_id:1239 96 8 20 accu_round_func"
                        ":1254 128 8 9 iter:1262 160 8 9 <unknown> 192 8 9 iter:1272 224 8 9 <unknown> 256 8 9 iter:1282 "
                        "288 8 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 57"
                        "6 32 9 <unknown> 640 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityRogueDiaryExcelConfigMgr::getStageDungeonPreRoundCount;
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
  v6[536862729] = -218959360;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -218959118;
  v6[536862739] = -218959118;
  v6[536862741] = -202116109;
  *(_DWORD *)(v4 + 48) = stage_id;
  *(_DWORD *)(v4 + 64) = difficulty;
  *(_DWORD *)(v4 + 80) = dungeon_id;
  stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
                       this,
                       *(unsigned int *)(v4 + 48));
  if ( !stage_config_ptr )
  {
    if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "getStageDungeonPreRoundCount",
      1244);
    v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           (common::milog::MiLogStream *const)(v4 + 320),
           (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
    result = 0;
    goto LABEL_61;
  }
  v9 = *(unsigned int *)(v4 + 80);
  if ( !data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig(this, v9) )
  {
    if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 384, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 384),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "getStageDungeonPreRoundCount",
      1250);
    v10 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
            (common::milog::MiLogStream *const)(v4 + 384),
            (const char (*)[66])"[RogueDiary] findRogueDiaryDungeonExcelConfig failed, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 384));
    result = 0;
    goto LABEL_61;
  }
  difficulty_type = *(_DWORD *)(v4 + 64);
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v9);
  *(_QWORD *)(v4 + 96) = this;
  if ( difficulty_type == ROGUE_DIARY_STAGE_DIFFICULTY_INSANE )
  {
    M_current = std::vector<unsigned int>::end(&stage_config_ptr->insane_dungeon_id_list)._M_current;
    v24 = std::vector<unsigned int>::begin(&stage_config_ptr->insane_dungeon_id_list)._M_current;
    if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 256, v9);
    *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 256) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v24,
                                                                                                    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                    (const unsigned int *)(v4 + 80));
    p_insane_dungeon_id_list = &stage_config_ptr->insane_dungeon_id_list;
    if ( *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 288, M_current);
    *(std::vector<unsigned int>::const_iterator *)(v4 + 288) = std::vector<unsigned int>::end(p_insane_dungeon_id_list);
    v26 = __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 256),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 288));
    *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = -8;
    if ( v26 )
    {
      *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 576) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 576, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 576),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "getStageDungeonPreRoundCount",
        1285);
      v27 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              (common::milog::MiLogStream *const)(v4 + 576),
              (const char (*)[52])"[RogueDiary] find stage dungeon failed, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 576));
      result = 0;
    }
    else
    {
      v28 = std::vector<unsigned int>::begin(&stage_config_ptr->insane_dungeon_id_list)._M_current;
      if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
      {
        v28 = (const unsigned int *)(v4 + 256);
        __asan_report_load8(v4 + 256);
      }
      if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      {
        v28 = (const unsigned int *)(v4 + 96);
        __asan_report_load8(v4 + 96);
      }
      result = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,int,ActivityRogueDiaryExcelConfigMgr::getStageDungeonPreRoundCount(unsigned int,unsigned int,unsigned int)::{lambda(unsigned int,__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>> const&)#1}>(
                 (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v28,
                 *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 256),
                 0,
                 *(ActivityRogueDiaryExcelConfigMgr::getStageDungeonPreRoundCount::<lambda(uint32_t, const auto:25&)> *)(v4 + 96));
    }
  }
  else
  {
    if ( difficulty_type > ROGUE_DIARY_STAGE_DIFFICULTY_INSANE )
    {
LABEL_58:
      if ( *(char *)(((v4 + 640) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 640, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 640),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
        "getStageDungeonPreRoundCount",
        1291);
      v29 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
              (common::milog::MiLogStream *const)(v4 + 640),
              (const char (*)[65])"[RogueDiary] invalid rogue diary dungeon difficulty, difficulty:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 640));
      result = 0;
      goto LABEL_61;
    }
    if ( difficulty_type == ROGUE_DIARY_STAGE_DIFFICULTY_NORMAL )
    {
      v11 = std::vector<unsigned int>::end(&stage_config_ptr->normal_dungeon_id_list)._M_current;
      v12 = std::vector<unsigned int>::begin(&stage_config_ptr->normal_dungeon_id_list)._M_current;
      if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 128, v9);
      *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 128) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v12, (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v11, (const unsigned int *)(v4 + 80));
      p_normal_dungeon_id_list = &stage_config_ptr->normal_dungeon_id_list;
      if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 160, v11);
      *(std::vector<unsigned int>::const_iterator *)(v4 + 160) = std::vector<unsigned int>::end(p_normal_dungeon_id_list);
      v14 = __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 160));
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v14 )
      {
        *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "getStageDungeonPreRoundCount",
          1265);
        v15 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                (common::milog::MiLogStream *const)(v4 + 448),
                (const char (*)[52])"[RogueDiary] find stage dungeon failed, dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 448));
        result = 0;
      }
      else
      {
        v16 = std::vector<unsigned int>::begin(&stage_config_ptr->normal_dungeon_id_list)._M_current;
        if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
        {
          v16 = (const unsigned int *)(v4 + 128);
          __asan_report_load8(v4 + 128);
        }
        if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
        {
          v16 = (const unsigned int *)(v4 + 96);
          __asan_report_load8(v4 + 96);
        }
        result = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,int,ActivityRogueDiaryExcelConfigMgr::getStageDungeonPreRoundCount(unsigned int,unsigned int,unsigned int)::{lambda(unsigned int,__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>> const&)#1}>(
                   (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v16,
                   *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 128),
                   0,
                   *(ActivityRogueDiaryExcelConfigMgr::getStageDungeonPreRoundCount::<lambda(uint32_t, const auto:25&)> *)(v4 + 96));
      }
    }
    else
    {
      if ( difficulty_type != ROGUE_DIARY_STAGE_DIFFICULTY_HARD )
        goto LABEL_58;
      v17 = std::vector<unsigned int>::end(&stage_config_ptr->hard_dungeon_id_list)._M_current;
      v18 = std::vector<unsigned int>::begin(&stage_config_ptr->hard_dungeon_id_list)._M_current;
      if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 192, v9);
      *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 192) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v18, (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v17, (const unsigned int *)(v4 + 80));
      p_hard_dungeon_id_list = &stage_config_ptr->hard_dungeon_id_list;
      if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 224, v17);
      *(std::vector<unsigned int>::const_iterator *)(v4 + 224) = std::vector<unsigned int>::end(p_hard_dungeon_id_list);
      v20 = __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 192),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 224));
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( v20 )
      {
        *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 95) & 7) >= *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
          "getStageDungeonPreRoundCount",
          1275);
        v21 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                (common::milog::MiLogStream *const)(v4 + 512),
                (const char (*)[52])"[RogueDiary] find stage dungeon failed, dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 512));
        result = 0;
      }
      else
      {
        v22 = std::vector<unsigned int>::begin(&stage_config_ptr->hard_dungeon_id_list)._M_current;
        if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
        {
          v22 = (const unsigned int *)(v4 + 192);
          __asan_report_load8(v4 + 192);
        }
        if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
        {
          v22 = (const unsigned int *)(v4 + 96);
          __asan_report_load8(v4 + 96);
        }
        result = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,int,ActivityRogueDiaryExcelConfigMgr::getStageDungeonPreRoundCount(unsigned int,unsigned int,unsigned int)::{lambda(unsigned int,__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>> const&)#1}>(
                   (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v22,
                   *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 192),
                   0,
                   *(ActivityRogueDiaryExcelConfigMgr::getStageDungeonPreRoundCount::<lambda(uint32_t, const auto:25&)> *)(v4 + 96));
      }
    }
  }
LABEL_61:
  if ( v34 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF804C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8054) = 0;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1254: range 0000000012EA1498-0000000012EA1521
uint32_t __cdecl ActivityRogueDiaryExcelConfigMgr::getStageDungeonPreRoundCount::_lambda_uint32_t__const_auto_25___::operator()_unsigned_int_(
        const ActivityRogueDiaryExcelConfigMgr::getStageDungeonPreRoundCount::<lambda(uint32_t, const auto:25&)> *const __closure,
        uint32_t acc,
        const unsigned int *dungeon_id)
{
  const ActivityRogueDiaryExcelConfigMgr *this; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(dungeon_id);
  }
  return acc + ActivityRogueDiaryExcelConfigMgr::getRogueDiaryDungeonRoundCount(this, *dungeon_id);
};

// Line 1298: range 0000000012E000A4-0000000012E003D1
__int64 __fastcall ActivityRogueDiaryExcelConfigMgr::getRogueDiaryDungeonRoundCount(
        const ActivityRogueDiaryExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,unsigned int> *p_dungeon_round_count_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v10; // rdx
  unsigned int *p_second; // rax
  char v12[224]; // [rsp+10h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 15 dungeon_id:1297 64 8 9 iter:1299 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueDiaryExcelConfigMgr::getRogueDiaryDungeonRoundCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_round_count_map = &this->dungeon_round_count_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_dungeon_round_count_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->dungeon_round_count_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
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
      "./src/txt_data_manual/ActivityRogueDiaryExcelConfig.cpp",
      "getRogueDiaryDungeonRoundCount",
      1302);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[36])"[RogueDiary] find dungeon_id failed");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0LL;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v10->second;
  }
  if ( v12 == (char *)v2 )
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
