// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/DraftExcelConfig.cpp

// Line 19: range 0000000013A7E87E-0000000013A8030E
int32_t __cdecl DraftExcelConfigMgr::checkConfig(DraftExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::DraftStartLimitType *p_start_limit_type; // rax
  __int64 v7; // rsi
  __int64 scene_id; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // eax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t *p_config_id; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // edx
  common::milog::MiLogStream *v24; // rax
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  GalleryExcelConfigMgr *v32; // rcx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  ActivityCharAmusementExcelConfigMgr *p_activity_char_amusement_config_mgr; // rcx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  ActivityCoinCollectExcelConfigMgr *p_activity_coin_collect_config_mgr; // rcx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  ActivityBrickBreakerExcelConfigMgr *p_activity_brick_breaker_config_mgr; // rcx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  int32_t result; // eax
  LuaConfigMgr *lua_config_mgr; // [rsp+18h] [rbp-468h]
  data::DraftExcelConfigMap *__for_range; // [rsp+20h] [rbp-460h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DraftExcelConfig>,false,false>::reference v48; // [rsp+28h] [rbp-458h]
  std::tuple_element<0,std::pair<unsigned int const,data::DraftExcelConfig> >::type *id; // [rsp+30h] [rbp-450h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DraftExcelConfig> >::type *config; // [rsp+38h] [rbp-448h]
  const std::vector<data::DraftTransferConfig> *__for_range_1; // [rsp+40h] [rbp-440h]
  const data::DraftTransferConfig *transfer_config; // [rsp+48h] [rbp-438h]
  const SceneScriptConfig *scene_config_ptr; // [rsp+50h] [rbp-430h]
  const std::vector<data::DraftTransferConfig> *__for_range_0; // [rsp+58h] [rbp-428h]
  const data::DraftTransferConfig *transfer; // [rsp+60h] [rbp-420h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+68h] [rbp-418h]
  char v57[1040]; // [rsp+70h] [rbp-410h] BYREF

  v3 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(992LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 32 8 14 __for_begin:21 64 8 12 __for_end:21 96 8 14 __for_begin:32 128 8 12 __for_end:32 160 "
                        "8 14 __for_begin:58 192 8 12 __for_end:58 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknow"
                        "n> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown"
                        "> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DraftExcelConfigMgr::checkConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->draft_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DraftExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::DraftExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DraftExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::DraftExcelConfig>::end(__for_range);
  while ( 2 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DraftExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DraftExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DraftExcelConfig>,false> *)(v3 + 64)) )
    {
      v12 = 1;
      break;
    }
    v48 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DraftExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DraftExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::DraftExcelConfig>(v48);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::DraftExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DraftExcelConfig>(v48);
    p_start_limit_type = &config->start_limit_type;
    v7 = (((_BYTE)config + 84) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_start_limit_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_start_limit_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_start_limit_type >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(p_start_limit_type);
    }
    if ( config->start_limit_type == DRAFT_START_LIMIT_SCENE )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->scene_id);
      }
      scene_id = config->scene_id;
      scene_config_ptr = LuaConfigMgr::findSceneScriptConfig(lua_config_mgr, scene_id);
      if ( !scene_config_ptr )
      {
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
          "./src/txt_data_manual/DraftExcelConfig.cpp",
          "checkConfig",
          29);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 224),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])"scene_id: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->scene_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])byte_1AC59EA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        v2 = -1;
        v12 = 0;
        break;
      }
      __for_range_0 = &config->transfer_config;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, scene_id);
      *(std::vector<data::DraftTransferConfig>::const_iterator *)(v3 + 96) = std::vector<data::DraftTransferConfig>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, scene_id);
      *(std::vector<data::DraftTransferConfig>::const_iterator *)(v3 + 128) = std::vector<data::DraftTransferConfig>::end(__for_range_0);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<data::DraftTransferConfig const*,std::vector<data::DraftTransferConfig>>(
                (const __gnu_cxx::__normal_iterator<const data::DraftTransferConfig*,std::vector<data::DraftTransferConfig> > *)(v3 + 96),
                (const __gnu_cxx::__normal_iterator<const data::DraftTransferConfig*,std::vector<data::DraftTransferConfig> > *)(v3 + 128)) )
        {
          v16 = 1;
          goto LABEL_40;
        }
        transfer = __gnu_cxx::__normal_iterator<data::DraftTransferConfig const*,std::vector<data::DraftTransferConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::DraftTransferConfig*,std::vector<data::DraftTransferConfig> > *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&transfer->group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&transfer->group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&transfer->group_id);
        }
        if ( transfer->group_id )
        {
          group_script_config_ptr = SceneScriptConfig::findGroupScriptConfig(scene_config_ptr, transfer->group_id);
          if ( !group_script_config_ptr )
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
              "./src/txt_data_manual/DraftExcelConfig.cpp",
              "checkConfig",
              39);
            v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 288),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])"group_id: ");
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &transfer->group_id);
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])byte_1AC59EA0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
            *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v16 = 0;
            goto LABEL_40;
          }
          if ( *(_BYTE *)(((unsigned __int64)&transfer->config_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)transfer + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&transfer->config_id >> 3)
                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4(&transfer->config_id);
          }
          if ( !GroupScriptConfig::findPointConfig(group_script_config_ptr, transfer->config_id) )
            break;
        }
        __gnu_cxx::__normal_iterator<data::DraftTransferConfig const*,std::vector<data::DraftTransferConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::DraftTransferConfig*,std::vector<data::DraftTransferConfig> > *const)(v3 + 96));
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
        "./src/txt_data_manual/DraftExcelConfig.cpp",
        "checkConfig",
        44);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v17,
              (const char (*)[18])"point_config_id: ");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &transfer->config_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])byte_1AC59EA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v16 = 0;
LABEL_40:
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( v16 != 1 )
      {
        v12 = 0;
        break;
      }
      goto LABEL_73;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->scene_id);
    }
    if ( config->scene_id )
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
        "./src/txt_data_manual/DraftExcelConfig.cpp",
        "checkConfig",
        55);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(v20, (const char (*)[65])byte_1AC66960);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      v2 = -1;
      v12 = 0;
    }
    else
    {
      __for_range_1 = &config->transfer_config;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v7);
      *(std::vector<data::DraftTransferConfig>::const_iterator *)(v3 + 160) = std::vector<data::DraftTransferConfig>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v7);
      *(std::vector<data::DraftTransferConfig>::const_iterator *)(v3 + 192) = std::vector<data::DraftTransferConfig>::end(__for_range_1);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<data::DraftTransferConfig const*,std::vector<data::DraftTransferConfig>>(
                (const __gnu_cxx::__normal_iterator<const data::DraftTransferConfig*,std::vector<data::DraftTransferConfig> > *)(v3 + 160),
                (const __gnu_cxx::__normal_iterator<const data::DraftTransferConfig*,std::vector<data::DraftTransferConfig> > *)(v3 + 192)) )
        {
          v23 = 1;
          goto LABEL_65;
        }
        transfer_config = __gnu_cxx::__normal_iterator<data::DraftTransferConfig const*,std::vector<data::DraftTransferConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::DraftTransferConfig*,std::vector<data::DraftTransferConfig> > *const)(v3 + 160));
        p_config_id = &transfer_config->config_id;
        if ( *(_BYTE *)(((unsigned __int64)p_config_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_config_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(p_config_id);
        }
        if ( transfer_config->config_id )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&transfer_config->group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&transfer_config->group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&transfer_config->group_id);
        }
        if ( transfer_config->group_id )
          break;
        __gnu_cxx::__normal_iterator<data::DraftTransferConfig const*,std::vector<data::DraftTransferConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::DraftTransferConfig*,std::vector<data::DraftTransferConfig> > *const)(v3 + 160));
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
        4u,
        "./src/txt_data_manual/DraftExcelConfig.cpp",
        "checkConfig",
        62);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(v22, (const char (*)[67])byte_1AC669E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v23 = 0;
LABEL_65:
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v23 != 1 )
      {
        v12 = 0;
        break;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->invite_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->invite_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->invite_type);
      }
      if ( config->invite_type != DRAFT_INVITE_SCENE )
      {
LABEL_73:
        if ( *(_BYTE *)(((unsigned __int64)&config->exec >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->exec >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&config->exec);
        }
        switch ( config->exec )
        {
          case DRAFT_EXEC_GALLERY:
            p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&config->param >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->param >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&config->param);
            }
            if ( data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, config->param) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&config->invite_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config->invite_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&config->invite_type);
              }
              if ( config->invite_type != DRAFT_INVITE_WORLD )
                goto LABEL_115;
              v28 = ((_BYTE)config + 68) & 7;
              v29 = (*(_BYTE *)(((unsigned __int64)&config->is_need_twice_confirm >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&config->is_need_twice_confirm >> 3) + 0x7FFF8000));
              if ( (_BYTE)v29 )
                __asan_report_load1(&config->is_need_twice_confirm, v28, v29);
              if ( config->is_need_twice_confirm )
                goto LABEL_115;
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
                "./src/txt_data_manual/DraftExcelConfig.cpp",
                "checkConfig",
                84);
              v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 672),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v31 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                      v30,
                      (const char (*)[73])byte_1AC66B20);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
              v2 = -1;
              v12 = 0;
            }
            else
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
                "./src/txt_data_manual/DraftExcelConfig.cpp",
                "checkConfig",
                79);
              v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 608),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v27 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      v26,
                      (const char (*)[32])byte_1AC66AE0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &config->param);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
              v2 = -1;
              v12 = 0;
            }
            break;
          case DRAFT_EXEC_AUTOSTART_GALLERY:
            v32 = &txt_config_mgr->gallery_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&config->param >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->param >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&config->param);
            }
            if ( data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(v32, config->param) )
              goto LABEL_115;
            *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 736, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 736),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/DraftExcelConfig.cpp",
              "checkConfig",
              93);
            v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 736),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v34 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    v33,
                    (const char (*)[32])byte_1AC66AE0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &config->param);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
            v2 = -1;
            v12 = 0;
            break;
          case DRAFT_EXEC_CHAR_AMUSEMENT:
            p_activity_char_amusement_config_mgr = &txt_config_mgr->activity_char_amusement_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&config->param >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->param >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&config->param);
            }
            if ( data::ActivityCharAmusementExcelConfigMgrBase::findActivityCharAmusementStageExcelConfig(
                   p_activity_char_amusement_config_mgr,
                   config->param) )
            {
              goto LABEL_115;
            }
            *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 800, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 800),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/DraftExcelConfig.cpp",
              "checkConfig",
              102);
            v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 800),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v37 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    v36,
                    (const char (*)[27])byte_1AC66BA0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &config->param);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
            v2 = -1;
            v12 = 0;
            break;
          case DRAFT_EXEC_BRICK_BREAKER:
            p_activity_brick_breaker_config_mgr = &txt_config_mgr->activity_brick_breaker_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&config->param >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->param >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&config->param);
            }
            if ( ActivityBrickBreakerExcelConfigMgr::findWorldLevelConfig(
                   p_activity_brick_breaker_config_mgr,
                   config->param) )
            {
              goto LABEL_115;
            }
            *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 928, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 928),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/DraftExcelConfig.cpp",
              "checkConfig",
              120);
            v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 928),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v43 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    v42,
                    (const char (*)[27])byte_1AC66C20);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &config->param);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
            v2 = -1;
            v12 = 0;
            break;
          case DRAFT_EXEC_COIN_COLLECT:
            p_activity_coin_collect_config_mgr = &txt_config_mgr->activity_coin_collect_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&config->param >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->param >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&config->param);
            }
            if ( data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectExcelConfig(
                   p_activity_coin_collect_config_mgr,
                   config->param) )
            {
              goto LABEL_115;
            }
            *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 864) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 864, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 864),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/DraftExcelConfig.cpp",
              "checkConfig",
              111);
            v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 864),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v40 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    v39,
                    (const char (*)[27])byte_1AC66BE0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &config->param);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
            v2 = -1;
            v12 = 0;
            break;
          default:
LABEL_115:
            std::__detail::_Node_iterator<std::pair<unsigned int const,data::DraftExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DraftExcelConfig>,false,false> *const)(v3 + 32));
            continue;
        }
        break;
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
        "./src/txt_data_manual/DraftExcelConfig.cpp",
        "checkConfig",
        69);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 544),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(v24, (const char (*)[79])byte_1AC66A60);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
      v2 = -1;
      v12 = 0;
    }
    break;
  }
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v57 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8070) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8078) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8078) = -168430091;
  }
  return result;
};

// Line 133: range 0000000013A80310-0000000013A8058E
int32_t __cdecl DraftExcelConfigMgr::rewriteConfig(DraftExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DraftExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::DraftExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DraftExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::DraftExcelConfig> >::type *config; // [rsp+28h] [rbp-88h]
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::DraftExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::DraftExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DraftExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DraftExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:134 64 8 13 __for_end:134";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DraftExcelConfig>,false>::__node_type *)DraftExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->draft_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::DraftExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::DraftExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::DraftExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DraftExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::DraftExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::DraftExcelConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&config->invite_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->invite_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->invite_type);
    }
    if ( config->invite_type == DRAFT_INVITE_NONE )
      config->invite_type = DRAFT_INVITE_SCENE;
    if ( *(_BYTE *)(((unsigned __int64)&config->start_limit_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->start_limit_type >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->start_limit_type);
    }
    if ( config->start_limit_type == DRAFT_START_LIMIT_NONE )
      config->start_limit_type = DRAFT_START_LIMIT_SCENE;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DraftExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DraftExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};
