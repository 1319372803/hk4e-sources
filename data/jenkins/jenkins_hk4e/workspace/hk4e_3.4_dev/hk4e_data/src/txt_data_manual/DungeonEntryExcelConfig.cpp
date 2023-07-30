// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/DungeonEntryExcelConfig.cpp

// Line 18: range 0000000013A95768-0000000013A95CDA
int32_t __cdecl DungeonEntryExcelConfigMgr::checkConfig(
        DungeonEntryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  uint32_t *p_reward_data_id; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  data::DungeonEntryExcelConfigMap *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-118h]
  std::tuple_element<1,std::pair<unsigned int const,data::DungeonEntryExcelConfig> >::type *dungeon_entry_config; // [rsp+38h] [rbp-108h]
  char v15[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 14 __for_begin:27 64 8 12 __for_end:27 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DungeonEntryExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( DungeonEntryExcelConfigMgr::checkSatisfiedCond(this, txt_config_mgr)
    || !DungeonEntryExcelConfigMgr::isDungeonEntryIdValid(this, txt_config_mgr) )
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
      "./src/txt_data_manual/DungeonEntryExcelConfig.cpp",
      "checkConfig",
      22);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])"checkConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = -1;
  }
  else
  {
    ret = 0;
    __for_range = &this->dungeon_entry_excel_config_map;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 32, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::end(__for_range);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false> *)(v2 + 32),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false> *)(v2 + 64)) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false> *const)(v2 + 32));
      std::get<0ul,unsigned int const,data::DungeonEntryExcelConfig>(__in);
      dungeon_entry_config = std::get<1ul,unsigned int const,data::DungeonEntryExcelConfig>(__in);
      p_reward_data_id = &dungeon_entry_config->reward_data_id;
      if ( *(_BYTE *)(((unsigned __int64)p_reward_data_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_reward_data_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reward_data_id >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(p_reward_data_id);
      }
      if ( dungeon_entry_config->reward_data_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_entry_config->reward_data_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_entry_config + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_entry_config->reward_data_id >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&dungeon_entry_config->reward_data_id);
        }
        if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                                txt_config_mgr,
                                dungeon_entry_config->reward_data_id,
                                ITEM_LIMIT_UNLOCK_DUNGEON) != 1 )
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
            "./src/txt_data_manual/DungeonEntryExcelConfig.cpp",
            "checkConfig",
            35);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 160),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  v9,
                  (const char (*)[25])"reward_config not found ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v10,
            &dungeon_entry_config->reward_data_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
          *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false> *const)(v2 + 32));
    }
    result = ret;
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 44: range 0000000013A95CDC-0000000013A96950
int32_t __cdecl DungeonEntryExcelConfigMgr::rewriteConfig(
        DungeonEntryExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_scene_id; // rax
  __int64 v7; // rsi
  uint32_t scene_id; // ecx
  char v9; // al
  uint32_t dungeon_entry_id; // ecx
  char v11; // al
  std::map<unsigned int,unsigned int> *v12; // rax
  const unsigned int *v13; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // eax
  __int64 v20; // rsi
  char *v21; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v22; // rax
  int *v23; // rdx
  int v24; // ecx
  char v25; // al
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // eax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int v33; // eax
  int32_t result; // eax
  data::DungeonEntryExcelConfigMap *__for_range; // [rsp+10h] [rbp-240h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-238h]
  const unsigned int *config_id; // [rsp+20h] [rbp-230h]
  std::tuple_element<1,std::pair<unsigned int const,data::DungeonEntryExcelConfig> >::type *dungeon_entry_config; // [rsp+28h] [rbp-228h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-220h]
  data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+38h] [rbp-218h]
  char v42[528]; // [rsp+40h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 4 11 scene_id:47 64 4 11 point_id:48 80 4 13 dungeon_id:57 96 8 14 __for_begin:45 128 8 12"
                        " __for_end:45 160 8 14 __for_begin:57 192 8 12 __for_end:57 224 32 9 <unknown> 288 32 9 <unknown"
                        "> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DungeonEntryExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -202116109;
  __for_range = &this->dungeon_entry_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false> *)(v3 + 128)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false> *const)(v3 + 96));
    config_id = std::get<0ul,unsigned int const,data::DungeonEntryExcelConfig>(__in);
    dungeon_entry_config = std::get<1ul,unsigned int const,data::DungeonEntryExcelConfig>(__in);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    p_scene_id = &dungeon_entry_config->scene_id;
    v7 = (((_BYTE)dungeon_entry_config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_entry_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_scene_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(p_scene_id);
    }
    scene_id = dungeon_entry_config->scene_id;
    v9 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v7) = v9 != 0;
      __asan_report_store4(v3 + 48, v7);
    }
    *(_DWORD *)(v3 + 48) = scene_id;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_entry_config->dungeon_entry_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_entry_config->dungeon_entry_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_entry_config->dungeon_entry_id);
    }
    dungeon_entry_id = dungeon_entry_config->dungeon_entry_id;
    v11 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
    if ( v11 != 0 && v11 <= 3 )
    {
      LOBYTE(v7) = v11 != 0;
      __asan_report_store4(v3 + 64, v7);
    }
    *(_DWORD *)(v3 + 64) = dungeon_entry_id;
    v12 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
            &this->scene_dungeon_entry_id_map,
            (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 48));
    v14 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
            v12,
            (unsigned int *)(v3 + 64),
            config_id,
            (unsigned int *)v12,
            v13);
    if ( !v14.second )
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
        "./src/txt_data_manual/DungeonEntryExcelConfig.cpp",
        "rewriteConfig",
        51);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v15,
              (const char (*)[21])"duplicated scene_id:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" point_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v19 = 0;
    }
    else
    {
      v20 = (((_BYTE)dungeon_entry_config + 20) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_entry_config->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_entry_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_entry_config->type >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_entry_config->type);
      }
      if ( dungeon_entry_config->type != DUNGEON_ENTRY_TYPE_TRIAL )
        goto LABEL_55;
      __for_range_0 = &dungeon_entry_config->cooldown_tips_dungeon_id;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v20);
      *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v20);
      *(std::vector<unsigned int>::iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v21 = (char *)(v3 + 192);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 192)) )
        {
          v28 = 1;
          goto LABEL_53;
        }
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        v22 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 160));
        v23 = (int *)v22;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v22);
        }
        v24 = *v23;
        v25 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
        if ( v25 != 0 && v25 <= 3 )
        {
          LOBYTE(v21) = v25 != 0;
          __asan_report_store4(v3 + 80, v21);
        }
        *(_DWORD *)(v3 + 80) = v24;
        dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                               &txt_config_mgr->dungeon_config_mgr,
                               *(unsigned int *)(v3 + 80));
        if ( !dungeon_config_ptr )
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
            "./src/txt_data_manual/DungeonEntryExcelConfig.cpp",
            "rewriteConfig",
            62);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v27 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v26, (const char (*)[29])byte_1AC6AAA0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v28 = 0;
          goto LABEL_53;
        }
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&dungeon_config_ptr->type);
        }
        if ( dungeon_config_ptr->type != DUNGEON_BOSS )
        {
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
            "./src/txt_data_manual/DungeonEntryExcelConfig.cpp",
            "rewriteConfig",
            68);
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v30 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v29, (const char (*)[48])byte_1AC6AAE0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v28 = 0;
          goto LABEL_53;
        }
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->serial_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->serial_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&dungeon_config_ptr->serial_id);
        }
        if ( !dungeon_config_ptr->serial_id )
          break;
        std::unordered_set<unsigned int>::insert(
          &this->trial_dungeon_id_set,
          (const std::unordered_set<unsigned int>::value_type *)(v3 + 80));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 160));
      }
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
        "./src/txt_data_manual/DungeonEntryExcelConfig.cpp",
        "rewriteConfig",
        74);
      v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v32 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v31, (const char (*)[38])byte_1AC6AB40);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v28 = 0;
LABEL_53:
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v28 == 1 )
LABEL_55:
        v19 = 1;
      else
        v19 = 0;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v19 != 1 )
    {
      v33 = 0;
      goto LABEL_60;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false> *const)(v3 + 96));
  }
  v33 = 1;
LABEL_60:
  if ( v33 == 1 )
    v2 = 0;
  result = v2;
  if ( v42 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 86: range 0000000013A96952-0000000013A977E9
bool __cdecl DungeonEntryExcelConfigMgr::isDungeonEntryIdValid(
        const DungeonEntryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_scene_id; // rax
  __int64 v7; // rsi
  uint32_t scene_id; // ecx
  char v9; // al
  uint32_t dungeon_entry_id; // ecx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  _BOOL4 v16; // eax
  int v17; // ecx
  uint32_t v18; // edx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  _BOOL4 v23; // r14d
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  unsigned __int64 v25; // rdx
  const char *v26; // rax
  const char *v27; // rsi
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  int v30; // r14d
  uint32_t DefaultWorldMainSceneId; // ecx
  char v32; // al
  char v33; // al
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  const char *v39; // rsi
  common::milog::MiLogStream *v40; // r14
  uint32_t v41; // edx
  char v42; // al
  common::milog::MiLogStream *v43; // rax
  int v44; // eax
  bool result; // al
  JsonConfigMgr *json_config_mgr; // [rsp+20h] [rbp-280h]
  data::DungeonEntryExcelConfigMap *__for_range; // [rsp+28h] [rbp-278h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>::reference v49; // [rsp+30h] [rbp-270h]
  std::tuple_element<0,std::pair<unsigned int const,data::DungeonEntryExcelConfig> >::type *config_id; // [rsp+38h] [rbp-268h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DungeonEntryExcelConfig> >::type *dungeon_entry_config; // [rsp+40h] [rbp-260h]
  char v52[592]; // [rsp+50h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 11 scene_id:90 64 4 11 point_id:91 80 4 9 <unknown> 96 8 14 __for_begin"
                        ":88 128 8 12 __for_end:88 160 16 25 scene_point_config_ptr:97 192 16 9 <unknown> 224 32 9 <unkno"
                        "wn> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DungeonEntryExcelConfigMgr::isDungeonEntryIdValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -202116109;
  json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
  __for_range = &this->dungeon_entry_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false> *)(v3 + 128)) )
  {
    v49 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false> *const)(v3 + 96));
    config_id = std::get<0ul,unsigned int const,data::DungeonEntryExcelConfig>(v49);
    dungeon_entry_config = (std::tuple_element<1,const std::pair<unsigned int const,data::DungeonEntryExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DungeonEntryExcelConfig>(v49);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    p_scene_id = &dungeon_entry_config->scene_id;
    v7 = (((_BYTE)dungeon_entry_config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_entry_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_scene_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(p_scene_id);
    }
    scene_id = dungeon_entry_config->scene_id;
    v9 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v7) = v9 != 0;
      __asan_report_store4(v3 + 48, v7);
    }
    *(_DWORD *)(v3 + 48) = scene_id;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_entry_config->dungeon_entry_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_entry_config->dungeon_entry_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_entry_config->dungeon_entry_id);
    }
    dungeon_entry_id = dungeon_entry_config->dungeon_entry_id;
    v11 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
    if ( v11 != 0 && v11 <= 3 )
    {
      LOBYTE(v7) = v11 != 0;
      __asan_report_store4(v3 + 64, v7);
    }
    *(_DWORD *)(v3 + 64) = dungeon_entry_id;
    if ( SceneExcelConfigMgr::getSceneTypeBySceneId(&txt_config_mgr->scene_config_mgr, *(_DWORD *)(v3 + 48)) == SCENE_WORLD )
    {
      *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 64);
      v17 = *(_DWORD *)(v3 + 64);
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      v18 = *(_DWORD *)(v3 + 48);
      if ( *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      JsonConfigMgr::findScenePoint<data::DungeonEntry>(
        (const JsonConfigMgr *const)(v3 + 192),
        json_config_mgr,
        v18,
        v17);
      std::shared_ptr<data::ConfigScenePoint>::shared_ptr<data::DungeonEntry,void>(
        (std::shared_ptr<data::ConfigScenePoint> *const)(v3 + 160),
        (std::shared_ptr<data::DungeonEntry> *)(v3 + 192));
      std::shared_ptr<data::DungeonEntry>::~shared_ptr((std::shared_ptr<data::DungeonEntry> *const)(v3 + 192));
      *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -1800;
      if ( std::operator==<data::ConfigScenePoint>(0LL, (const std::shared_ptr<data::ConfigScenePoint> *)(v3 + 160)) )
      {
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
          "./src/txt_data_manual/DungeonEntryExcelConfig.cpp",
          "isDungeonEntryIdValid",
          100);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                v19,
                (const char (*)[31])"dungeon entry point not found ");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v3 + 48));
        v22 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v21, (const char (*)[2])" ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v23 = 0;
      }
      else
      {
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 32);
        v24 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v24);
        v25 = (unsigned __int64)(v24->_vptr_ConfigScenePoint + 4);
        if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v24->_vptr_ConfigScenePoint + 4);
        v26 = (const char *)(*(__int64 (__fastcall **)(std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v25)(v24);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 352),
          v26,
          (const std::allocator<char> *)(v3 + 32));
        std::allocator<char>::~allocator(v3 + 32);
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
        v27 = "DungeonEntry";
        if ( std::operator!=<char>((const std::string *)(v3 + 352), "DungeonEntry") )
        {
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
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
            "./src/txt_data_manual/DungeonEntryExcelConfig.cpp",
            "isDungeonEntryIdValid",
            106);
          v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 416),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v29 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  v28,
                  (const char (*)[39])"scene point type is not DungeonEntry: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, (const std::string *)(v3 + 352));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v30 = 0;
        }
        else
        {
          DefaultWorldMainSceneId = TxtConfigMgr::getDefaultWorldMainSceneId(txt_config_mgr);
          v32 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          LOBYTE(v27) = v32 != 0;
          if ( v32 != 0 && v32 <= 3 )
            __asan_report_load4(v3 + 48);
          if ( DefaultWorldMainSceneId == *(_DWORD *)(v3 + 48) )
            goto LABEL_47;
          if ( *(char *)(((unsigned __int64)&dungeon_entry_config->is_show_in_adv_handbook >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(
              &dungeon_entry_config->is_show_in_adv_handbook,
              v27,
              &dungeon_entry_config->is_show_in_adv_handbook);
          if ( !dungeon_entry_config->is_show_in_adv_handbook )
LABEL_47:
            v33 = 0;
          else
            v33 = 1;
          if ( v33 )
          {
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
              "./src/txt_data_manual/DungeonEntryExcelConfig.cpp",
              "isDungeonEntryIdValid",
              112);
            v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 480),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v35 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v34, (const char (*)[11])"config_id:");
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, config_id);
            v37 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v36, (const char (*)[11])" scene_id:");
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v37,
                    (const unsigned int *)(v3 + 48));
            v39 = " != ";
            v40 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v38, (const char (*)[5])" != ");
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            v41 = TxtConfigMgr::getDefaultWorldMainSceneId(txt_config_mgr);
            v42 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
            if ( v42 != 0 && v42 <= 3 )
            {
              LOBYTE(v39) = v42 != 0;
              __asan_report_store4(v3 + 80, v39);
            }
            *(_DWORD *)(v3 + 80) = v41;
            v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v40,
                    (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              v43,
              (const char (*)[37])" but is_show_in_adv_handbook is true");
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
            *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
            v2 = 0;
            v30 = 0;
          }
          else
          {
            v30 = 1;
          }
        }
        std::string::~string((void *)(v3 + 352));
        v23 = v30 == 1;
      }
      std::shared_ptr<data::ConfigScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigScenePoint> *const)(v3 + 160));
      v16 = v23;
    }
    else
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
        "./src/txt_data_manual/DungeonEntryExcelConfig.cpp",
        "isDungeonEntryIdValid",
        94);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              v12,
              (const char (*)[41])"scene_type is not SCENE_WORLD. scene_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v16 = 0;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -1800;
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    if ( !v16 )
    {
      v44 = 0;
      goto LABEL_61;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false> *const)(v3 + 96));
  }
  v44 = 1;
LABEL_61:
  if ( v44 == 1 )
    v2 = 1;
  result = v2;
  if ( v52 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
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

// Line 121: range 0000000013A977EA-0000000013A97D83
int32_t __cdecl DungeonEntryExcelConfigMgr::checkSatisfiedCond(
        DungeonEntryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::LogicType *p_cond_comb; // rax
  __int64 v7; // rsi
  int cond_comb; // eax
  const data::DungeonEntrySatisfiedCond *v9; // rdx
  int v11; // eax
  const data::DungeonEntrySatisfiedCond *v12; // rdx
  int v13; // edx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  data::DungeonEntryExcelConfigMap *__for_range; // [rsp+10h] [rbp-140h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>::reference v19; // [rsp+18h] [rbp-138h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DungeonEntryExcelConfig> >::type *dungeon_entry_config; // [rsp+28h] [rbp-128h]
  const std::vector<data::DungeonEntrySatisfiedCond> *__for_range_0; // [rsp+30h] [rbp-120h]
  char v22[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 15 __for_begin:122 64 8 13 __for_end:122 96 8 15 __for_begin:135 128 8 13 __for_end:135 1"
                        "60 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DungeonEntryExcelConfigMgr::checkSatisfiedCond;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -202116109;
  __for_range = &this->dungeon_entry_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::DungeonEntryExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_39;
    }
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::DungeonEntryExcelConfig>(v19);
    dungeon_entry_config = (std::tuple_element<1,const std::pair<unsigned int const,data::DungeonEntryExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DungeonEntryExcelConfig>(v19);
    p_cond_comb = &dungeon_entry_config->cond_comb;
    v7 = (((_BYTE)dungeon_entry_config + 60) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_cond_comb >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_cond_comb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_cond_comb >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_cond_comb);
    }
    cond_comb = dungeon_entry_config->cond_comb;
    if ( !cond_comb )
    {
      if ( std::vector<data::DungeonEntrySatisfiedCond>::empty(&dungeon_entry_config->satisfied_cond)
        || (v9 = std::vector<data::DungeonEntrySatisfiedCond>::operator[](&dungeon_entry_config->satisfied_cond, 0LL),
            DungeonEntryExcelConfigMgr::checkSingleSatisfiedCond(this, txt_config_mgr, v9)) )
      {
        v2 = -1;
        v11 = 0;
        goto LABEL_39;
      }
      goto LABEL_37;
    }
    if ( cond_comb < 0 || (unsigned int)(cond_comb - 1) > 1 )
      break;
    __for_range_0 = &dungeon_entry_config->satisfied_cond;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v7);
    *(std::vector<data::DungeonEntrySatisfiedCond>::const_iterator *)(v3 + 96) = std::vector<data::DungeonEntrySatisfiedCond>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v7);
    *(std::vector<data::DungeonEntrySatisfiedCond>::const_iterator *)(v3 + 128) = std::vector<data::DungeonEntrySatisfiedCond>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::DungeonEntrySatisfiedCond const*,std::vector<data::DungeonEntrySatisfiedCond>>(
              (const __gnu_cxx::__normal_iterator<const data::DungeonEntrySatisfiedCond*,std::vector<data::DungeonEntrySatisfiedCond> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<const data::DungeonEntrySatisfiedCond*,std::vector<data::DungeonEntrySatisfiedCond> > *)(v3 + 128)) )
    {
      v12 = __gnu_cxx::__normal_iterator<data::DungeonEntrySatisfiedCond const*,std::vector<data::DungeonEntrySatisfiedCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::DungeonEntrySatisfiedCond*,std::vector<data::DungeonEntrySatisfiedCond> > *const)(v3 + 96));
      if ( DungeonEntryExcelConfigMgr::checkSingleSatisfiedCond(this, txt_config_mgr, v12) )
      {
        v2 = -1;
        v13 = 0;
        goto LABEL_32;
      }
      __gnu_cxx::__normal_iterator<data::DungeonEntrySatisfiedCond const*,std::vector<data::DungeonEntrySatisfiedCond>>::operator++((__gnu_cxx::__normal_iterator<const data::DungeonEntrySatisfiedCond*,std::vector<data::DungeonEntrySatisfiedCond> > *const)(v3 + 96));
    }
    v13 = 1;
LABEL_32:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v13 != 1 )
    {
      v11 = 0;
      goto LABEL_39;
    }
LABEL_37:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonEntryExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/DungeonEntryExcelConfig.cpp",
    "checkSatisfiedCond",
    144);
  v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v14, (const char (*)[26])byte_1AC6AFE0);
  common::milog::MiLogStream::operator<<<data::LogicType,(data::LogicType*)0>(v15, &dungeon_entry_config->cond_comb);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v11 = 0;
LABEL_39:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 152: range 0000000013A97D84-0000000013A98030
int32_t __cdecl DungeonEntryExcelConfigMgr::checkSingleSatisfiedCond(
        DungeonEntryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::DungeonEntrySatisfiedCond *cond)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  data::DungeonEntrySatisfiedConditionType type; // eax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DungeonEntryExcelConfigMgr::checkSingleSatisfiedCond;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  type = cond->type;
  if ( type )
  {
    if ( type == DUNGEON_ENTRY_CONDITION_QUEST )
    {
      p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      if ( data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, cond->param1) )
      {
        result = 0;
      }
      else
      {
        if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 32, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 32),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DungeonEntryExcelConfig.cpp",
          "checkSingleSatisfiedCond",
          160);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 32),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])byte_1AC6B060);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &cond->param1);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 32));
        result = -1;
      }
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  if ( v12 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 173: range 0000000013A98032-0000000013A98211
uint32_t __fastcall DungeonEntryExcelConfigMgr::findDungeonEntryConfigId(
        const DungeonEntryExcelConfigMgr *const this,
        __int64 scene_id,
        uint32_t point_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *p_scene_dungeon_entry_id_map; // rdx
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *v7; // rdx
  bool v8; // al
  uint32_t result; // eax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::pointer v10; // rax
  char v12[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 scene_id:172 48 4 12 point_id:172 64 8 12 map_iter:174 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DungeonEntryExcelConfigMgr::findDungeonEntryConfigId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = scene_id;
  *(_DWORD *)(v3 + 48) = point_id;
  p_scene_dungeon_entry_id_map = &this->scene_dungeon_entry_id_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, scene_id);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                               p_scene_dungeon_entry_id_map,
                                                                                               (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->scene_dungeon_entry_id_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v3 + 64));
    result = common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,unsigned int>>(
               &v10->second,
               (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48),
               0);
  }
  if ( v12 == (char *)v3 )
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

// Line 183: range 0000000013A98212-0000000013A9825B
const data::DungeonEntryExcelConfig *__cdecl DungeonEntryExcelConfigMgr::findDungeonEntryConfig(
        const DungeonEntryExcelConfigMgr *const this,
        uint32_t scene_id,
        uint32_t point_id)
{
  uint32_t dungeon_entry_config_id; // [rsp+1Ch] [rbp-4h]

  dungeon_entry_config_id = DungeonEntryExcelConfigMgr::findDungeonEntryConfigId(this, scene_id, point_id);
  if ( dungeon_entry_config_id )
    return data::DungeonEntryDataConfigMgrBase::findDungeonEntryExcelConfig(this, dungeon_entry_config_id);
  else
    return 0LL;
};

// Line 193: range 0000000013A9825C-0000000013A982F4
bool __cdecl DungeonEntryExcelConfigMgr::isDungeonEntryDailyDungeon(
        const DungeonEntryExcelConfigMgr *const this,
        uint32_t scene_id,
        uint32_t point_id)
{
  int type; // eax
  const data::DungeonEntryExcelConfig *config_ptr; // [rsp+18h] [rbp-8h]

  config_ptr = DungeonEntryExcelConfigMgr::findDungeonEntryConfig(this, scene_id, point_id);
  if ( !config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->type);
  }
  type = config_ptr->type;
  if ( type <= 5 )
    return type > 0;
  return type == 8;
};

// Line 215: range 0000000013A982F6-0000000013A9835A
bool __cdecl DungeonEntryExcelConfigMgr::isExploreDungeonEntry(
        const data::DungeonEntryExcelConfig *dungeon_entry_config)
{
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_entry_config->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dungeon_entry_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_entry_config->type >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&dungeon_entry_config->type);
  }
  return (unsigned int)(dungeon_entry_config->type - 1) <= 5;
};

// Line 233: range 0000000013A9835C-0000000013A9842B
bool __fastcall DungeonEntryExcelConfigMgr::isWeeklyBossDungeon(
        const DungeonEntryExcelConfigMgr *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 dungeon_id:232";
  *(_QWORD *)(v2 + 16) = DungeonEntryExcelConfigMgr::isWeeklyBossDungeon;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = dungeon_id;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             &this->trial_dungeon_id_set,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
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
