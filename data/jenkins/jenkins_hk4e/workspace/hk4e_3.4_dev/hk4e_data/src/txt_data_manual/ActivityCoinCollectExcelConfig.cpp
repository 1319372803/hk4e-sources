// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp

// Line 20: range 0000000012AEC950-0000000012AEC962
int32_t __cdecl ActivityCoinCollectExcelConfigMgr::checkConfig(
        ActivityCoinCollectExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 37: range 0000000012AEC964-0000000012AEE46E
int32_t __cdecl ActivityCoinCollectExcelConfigMgr::checkCoinCollectLevelConfig(
        ActivityCoinCollectExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  LuaConfigMgr *p_lua_config_mgr; // rcx
  __int64 group_id; // rsi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  uint32_t *p_gallery_id; // rsi
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  char *v33; // rsi
  unsigned int *v34; // rax
  int *v35; // rdx
  int v36; // ecx
  char v37; // al
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  int v41; // edx
  common::milog::MiLogStream *v42; // rax
  DraftExcelConfigMgr *p_draft_config_mgr; // rcx
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  JsonConfigMgr *p_json_config_mgr; // rsi
  int gallery_trans_point_id; // ecx
  uint32_t scene_id; // edx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  bool v54; // [rsp+Fh] [rbp-4A1h]
  data::CoinCollectExcelConfigMap *__for_range; // [rsp+20h] [rbp-490h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false,false>::reference v57; // [rsp+28h] [rbp-488h]
  std::tuple_element<0,std::pair<unsigned int const,data::CoinCollectExcelConfig> >::type *level_id; // [rsp+30h] [rbp-480h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CoinCollectExcelConfig> >::type *level_config; // [rsp+38h] [rbp-478h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+40h] [rbp-470h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+48h] [rbp-468h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-460h]
  const data::DraftExcelConfig *draft_config_ptr; // [rsp+58h] [rbp-458h]
  char v64[1104]; // [rsp+60h] [rbp-450h] BYREF

  v3 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1056LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "19 32 4 11 skill_no:88 48 8 14 __for_begin:39 80 8 12 __for_end:39 112 8 14 __for_begin:88 144 8"
                        " 12 __for_end:88 176 16 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400"
                        " 32 9 <unknown> 464 32 9 <unknown> 528 32 9 <unknown> 592 32 9 <unknown> 656 32 9 <unknown> 720 "
                        "32 9 <unknown> 784 32 9 <unknown> 848 32 9 <unknown> 912 32 9 <unknown> 976 48 14 gallery_set:38";
  *(_QWORD *)(v3 + 16) = ActivityCoinCollectExcelConfigMgr::checkCoinCollectLevelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
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
  v5[536862752] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 976));
  __for_range = &this->coin_collect_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CoinCollectExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::CoinCollectExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CoinCollectExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::CoinCollectExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false> *)(v3 + 80)) )
    {
      v7 = 1;
      goto LABEL_96;
    }
    v57 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false,false> *const)(v3 + 48));
    level_id = std::get<0ul,unsigned int const,data::CoinCollectExcelConfig>(v57);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CoinCollectExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CoinCollectExcelConfig>(v57);
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(level_id);
    }
    if ( !*level_id )
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
        "checkCoinCollectLevelConfig",
        44);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v6, (const char (*)[17])"level id is zero");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v7 = 0;
      goto LABEL_96;
    }
    if ( *(_BYTE *)(((unsigned __int64)&level_config->cutscene_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config->cutscene_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&level_config->cutscene_time);
    }
    if ( !level_config->cutscene_time )
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
        "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
        "checkCoinCollectLevelConfig",
        50);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 272),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             v8,
             (const char (*)[24])"cutscene time is zero: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v7 = 0;
      goto LABEL_96;
    }
    p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&level_config->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&level_config->group_id);
    }
    group_id = level_config->group_id;
    group_info_config_ptr = LuaConfigMgr::findGroupInfoConfig(p_lua_config_mgr, group_id);
    if ( !group_info_config_ptr )
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
        "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
        "checkCoinCollectLevelConfig",
        57);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 336),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])"group id: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &level_config->group_id);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" is invalid");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v7 = 0;
      goto LABEL_96;
    }
    if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&group_info_config_ptr->is_dynamic_load, group_id, &group_info_config_ptr->is_dynamic_load);
    if ( !group_info_config_ptr->is_dynamic_load )
    {
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 400, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
        "checkCoinCollectLevelConfig",
        62);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 400),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])"group id: ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &level_config->group_id);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" is static");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v7 = 0;
      goto LABEL_96;
    }
    p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&level_config->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&level_config->gallery_id);
    }
    gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                           p_gallery_config_mgr,
                           level_config->gallery_id);
    if ( !gallery_config_ptr )
    {
      *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 464, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 464),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
        "checkCoinCollectLevelConfig",
        69);
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 464),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])"gallery id: ");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &level_config->gallery_id);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])" is invalid");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
      *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v7 = 0;
      goto LABEL_96;
    }
    if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gallery_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&gallery_config_ptr->type);
    }
    if ( gallery_config_ptr->type != GALLERY_TYPE_COIN_COLLECT )
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
        "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
        "checkCoinCollectLevelConfig",
        74);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 528),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])"gallery id: ");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &level_config->gallery_id);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v24, (const char (*)[12])" is invalid");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
      *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v7 = 0;
      goto LABEL_96;
    }
    if ( std::vector<unsigned int>::size(&gallery_config_ptr->transfer_config_id_list) <= 1 )
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
        "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
        "checkCoinCollectLevelConfig",
        79);
      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 592),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v25, (const char (*)[13])"gallery id: ");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &level_config->gallery_id);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        v27,
        (const char (*)[34])" transfer config id list size < 2");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 592));
      *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v7 = 0;
      goto LABEL_96;
    }
    p_gallery_id = &level_config->gallery_id;
    v29 = std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 976), &level_config->gallery_id);
    if ( !v29.second )
    {
      *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 656) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 656, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 656),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
        "checkCoinCollectLevelConfig",
        84);
      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 656),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v31 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v30, (const char (*)[13])"gallery id: ");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &level_config->gallery_id);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v32, (const char (*)[14])" is duplicate");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 656));
      *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v7 = 0;
      goto LABEL_96;
    }
    __for_range_0 = &level_config->skill_no_list;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, p_gallery_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 112) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, p_gallery_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 144) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v33 = (char *)(v3 + 144);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 112),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 144)) )
      {
        v41 = 1;
        goto LABEL_70;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v34 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 112));
      v35 = (int *)v34;
      if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v34);
      }
      v36 = *v35;
      v37 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v37 != 0 && v37 <= 3 )
      {
        LOBYTE(v33) = v37 != 0;
        __asan_report_store4(v3 + 32, v33);
      }
      *(_DWORD *)(v3 + 32) = v36;
      if ( !data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectSkillExcelConfig(
              this,
              *(unsigned int *)(v3 + 32)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 112));
    }
    *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 720) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 720, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 720),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
      "checkCoinCollectLevelConfig",
      92);
    v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 720),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v38, (const char (*)[11])"skill_no: ");
    v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v40, (const char (*)[12])" is invalid");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 720));
    *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v41 = 0;
LABEL_70:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v41 != 1 )
    {
      v7 = 0;
      goto LABEL_96;
    }
    if ( *(_BYTE *)(((unsigned __int64)&level_config->total_balloons_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config->total_balloons_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&level_config->total_balloons_num);
    }
    if ( !level_config->total_balloons_num )
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
        "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
        "checkCoinCollectLevelConfig",
        99);
      v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 784),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        v42,
        (const char (*)[27])"total_balloons_num is zero");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 784));
      *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v7 = 0;
      goto LABEL_96;
    }
    p_draft_config_mgr = &txt_config_mgr->draft_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&level_config->draft_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->draft_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&level_config->draft_id);
    }
    draft_config_ptr = data::DraftExcelConfigMgrBase::findDraftExcelConfig(p_draft_config_mgr, level_config->draft_id);
    if ( !draft_config_ptr )
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
        "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
        "checkCoinCollectLevelConfig",
        106);
      v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 848),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v45 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v44, (const char (*)[11])"draft_id: ");
      v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &level_config->draft_id);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v46, (const char (*)[12])" is invalid");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 848));
      *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v7 = 0;
      goto LABEL_96;
    }
    *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    p_json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&level_config->gallery_trans_point_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->gallery_trans_point_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&level_config->gallery_trans_point_id);
    }
    gallery_trans_point_id = level_config->gallery_trans_point_id;
    if ( *(_BYTE *)(((unsigned __int64)&draft_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&draft_config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&draft_config_ptr->scene_id);
    }
    scene_id = draft_config_ptr->scene_id;
    if ( *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    JsonConfigMgr::findScenePoint(
      (const JsonConfigMgr *const)(v3 + 176),
      p_json_config_mgr,
      scene_id,
      gallery_trans_point_id);
    v54 = std::operator==<data::ConfigScenePoint>(0LL, (const std::shared_ptr<data::ConfigScenePoint> *)(v3 + 176));
    std::shared_ptr<data::ConfigScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigScenePoint> *const)(v3 + 176));
    *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -1800;
    if ( v54 )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false,false> *const)(v3 + 48));
  }
  *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 912) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 943) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 943) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 912, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 912),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
    "checkCoinCollectLevelConfig",
    112);
  v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 912),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v51 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          v50,
          (const char (*)[25])"gallery_trans_point_id: ");
  v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v51,
          &level_config->gallery_trans_point_id);
  common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v52, (const char (*)[12])" is invalid");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 912));
  *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v7 = 0;
LABEL_96:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v7 == 1 )
    v2 = 0;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 976));
  if ( v64 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 124) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8080) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1056LL, v64);
  }
  return v2;
};

// Line 120: range 0000000012AEE470-0000000012AEE90A
int32_t __cdecl ActivityCoinCollectExcelConfigMgr::checkCoinCollectSkillConfig(
        ActivityCoinCollectExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  data::CoinCollectSkillExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectSkillExcelConfig>,false,false>::reference v11; // [rsp+18h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,data::CoinCollectSkillExcelConfig> >::type *skill_no; // [rsp+20h] [rbp-120h]
  char v13[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:121 64 8 13 __for_end:121 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityCoinCollectExcelConfigMgr::checkCoinCollectSkillConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->coin_collect_skill_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CoinCollectSkillExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::CoinCollectSkillExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CoinCollectSkillExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::CoinCollectSkillExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CoinCollectSkillExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CoinCollectSkillExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CoinCollectSkillExcelConfig>,false> *)(v3 + 64)) )
    {
      v7 = 1;
      goto LABEL_22;
    }
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectSkillExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectSkillExcelConfig>,false,false> *const)(v3 + 32));
    skill_no = std::get<0ul,unsigned int const,data::CoinCollectSkillExcelConfig>(v11);
    std::get<1ul,unsigned int const,data::CoinCollectSkillExcelConfig>(v11);
    if ( *(_BYTE *)(((unsigned __int64)skill_no >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)skill_no & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_no >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(skill_no);
    }
    if ( !*skill_no )
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
        "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
        "checkCoinCollectSkillConfig",
        126);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v6, (const char (*)[17])"skill no is zero");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v7 = 0;
      goto LABEL_22;
    }
    if ( (unsigned __int8)std::string::empty() )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectSkillExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectSkillExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
    "checkCoinCollectSkillConfig",
    132);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 160),
         (const char (*)[16])"[CONFIG_ERROR] ");
  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v8, (const char (*)[28])"skill ability name is empty");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v7 = 0;
LABEL_22:
  if ( v7 == 1 )
    v2 = 0;
  result = v2;
  if ( v13 == (char *)v3 )
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

// Line 140: range 0000000012AEE90C-0000000012AEF0E9
int32_t __cdecl ActivityCoinCollectExcelConfigMgr::checkCoinCollectOverallConfig(
        ActivityCoinCollectExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  data::CoinCollectOverallExcelConfigMap *__for_range; // [rsp+10h] [rbp-1B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectOverallExcelConfig>,false,false>::reference v16; // [rsp+18h] [rbp-1A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::CoinCollectOverallExcelConfig> >::type *activity_id; // [rsp+20h] [rbp-1A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CoinCollectOverallExcelConfig> >::type *overall_config; // [rsp+28h] [rbp-198h]
  char v19[400]; // [rsp+30h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 15 __for_begin:141 64 8 13 __for_end:141 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityCoinCollectExcelConfigMgr::checkCoinCollectOverallConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  __for_range = &this->coin_collect_overall_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CoinCollectOverallExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::CoinCollectOverallExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CoinCollectOverallExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::CoinCollectOverallExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CoinCollectOverallExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CoinCollectOverallExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CoinCollectOverallExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_36;
    }
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectOverallExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectOverallExcelConfig>,false,false> *const)(v3 + 32));
    activity_id = std::get<0ul,unsigned int const,data::CoinCollectOverallExcelConfig>(v16);
    overall_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CoinCollectOverallExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CoinCollectOverallExcelConfig>(v16);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(activity_id);
    }
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(p_new_activity_config_mgr, *activity_id) )
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
        "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
        "checkCoinCollectOverallConfig",
        146);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])"activity_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, activity_id);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" is invalid");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v10 = 0;
      goto LABEL_36;
    }
    if ( *(_BYTE *)(((unsigned __int64)&overall_config->prepare_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&overall_config->prepare_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&overall_config->prepare_time);
    }
    if ( !overall_config->prepare_time )
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
        "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
        "checkCoinCollectOverallConfig",
        152);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v11, (const char (*)[21])"prepare_time is zero");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v10 = 0;
      goto LABEL_36;
    }
    if ( *(_BYTE *)(((unsigned __int64)&overall_config->idle_after_prepare_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)overall_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config->idle_after_prepare_time >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&overall_config->idle_after_prepare_time);
    }
    if ( !overall_config->idle_after_prepare_time )
    {
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
        "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
        "checkCoinCollectOverallConfig",
        157);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        v12,
        (const char (*)[32])"idle_after_prepare_time is zero");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      v2 = -1;
      v10 = 0;
      goto LABEL_36;
    }
    if ( *(_BYTE *)(((unsigned __int64)&overall_config->gallery_extra_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&overall_config->gallery_extra_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&overall_config->gallery_extra_time);
    }
    if ( !overall_config->gallery_extra_time )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectOverallExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectOverallExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
    "checkCoinCollectOverallConfig",
    162);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 288),
          (const char (*)[16])"[CONFIG_ERROR] ");
  common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v13, (const char (*)[27])"gallery_extra_time is zero");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
  v2 = -1;
  v10 = 0;
LABEL_36:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
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

// Line 170: range 0000000012AEF0EA-0000000012AEF44B
int32_t __cdecl ActivityCoinCollectExcelConfigMgr::rewriteConfig(
        ActivityCoinCollectExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::CoinCollectExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::CoinCollectExcelConfig> >::type *level_id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CoinCollectExcelConfig> >::type *level_config; // [rsp+28h] [rbp-D8h]
  char v17[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:171 64 8 13 __for_end:171 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityCoinCollectExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->coin_collect_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CoinCollectExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::CoinCollectExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CoinCollectExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::CoinCollectExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false,false> *const)(v3 + 32));
    level_id = std::get<0ul,unsigned int const,data::CoinCollectExcelConfig>(v14);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CoinCollectExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CoinCollectExcelConfig>(v14);
    v7 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->gallery_id_2_level_id_map_,
           &level_config->gallery_id,
           level_id,
           (const unsigned int *)&this->gallery_id_2_level_id_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityCoinCollectExcelConfig.cpp",
    "rewriteConfig",
    175);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])"gallery_id: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &level_config->gallery_id);
  common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" is duplicate");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_16:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v17 == (char *)v3 )
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

// Line 183: range 0000000012AEF44C-0000000012AEF647
__int64 __fastcall ActivityCoinCollectExcelConfigMgr::getLevelIdByGalleryId(
        const ActivityCoinCollectExcelConfigMgr *const this,
        __int64 gallery_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_gallery_id_2_level_id_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gallery_id:182 64 8 8 iter:184 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityCoinCollectExcelConfigMgr::getLevelIdByGalleryId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gallery_id;
  p_gallery_id_2_level_id_map = &this->gallery_id_2_level_id_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gallery_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_gallery_id_2_level_id_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->gallery_id_2_level_id_map_;
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
