// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivitySeaLampExcelConfig.cpp

// Line 20: range 0000000012E03812-0000000012E03AB6
int32_t __cdecl ActivitySeaLampExcelConfigMgr::rewriteConfig(
        ActivitySeaLampExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivitySeaLampExcelConfigMgr::rewriteSectionConfig(this, txt_config_mgr)
    || ActivitySeaLampExcelConfigMgr::rewriteProjectionConfig(this, txt_config_mgr)
    || ActivitySeaLampExcelConfigMgr::rewriteSalvageStageConfig(this, txt_config_mgr)
    || ActivitySeaLampExcelConfigMgr::rewriteSalvageChallengeConfig(this, txt_config_mgr)
    || ActivitySeaLampExcelConfigMgr::rewriteFireworksStageConfig(this, txt_config_mgr)
    || ActivitySeaLampExcelConfigMgr::rewriteFireworksSkillConfig(this, txt_config_mgr)
    || ActivitySeaLampExcelConfigMgr::rewriteSalvageOverAllConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
      "rewriteConfig",
      29);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])"rewriteConfig failed");
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

// Line 36: range 0000000012E03AB8-0000000012E03DE0
int32_t __cdecl ActivitySeaLampExcelConfigMgr::checkConfig(
        ActivitySeaLampExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivitySeaLampExcelConfigMgr::checkSectionConfig(this, txt_config_mgr)
    || ActivitySeaLampExcelConfigMgr::checkProjectionConfig(this, txt_config_mgr)
    || ActivitySeaLampExcelConfigMgr::checkLanternRiteOverallConfig(this, txt_config_mgr)
    || ActivitySeaLampExcelConfigMgr::checkSalvageChallengeConfig(this, txt_config_mgr)
    || ActivitySeaLampExcelConfigMgr::checkSalvageStageConfig(this, txt_config_mgr)
    || ActivitySeaLampExcelConfigMgr::checkFireworksOverallConfig(this, txt_config_mgr)
    || ActivitySeaLampExcelConfigMgr::checkFireworksStageConfig(this, txt_config_mgr)
    || ActivitySeaLampExcelConfigMgr::checkFireworksChallengeConfig(this, txt_config_mgr)
    || ActivitySeaLampExcelConfigMgr::checkFireworksFactorConfig(this, txt_config_mgr)
    || ActivitySeaLampExcelConfigMgr::checkFireworksSkillConfig(this, txt_config_mgr)
    || ActivitySeaLampExcelConfigMgr::checkSalvageOverAllConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
      "checkConfig",
      49);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])"checkConfig failed");
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

// Line 56: range 0000000012E03DE2-0000000012E04738
int32_t __cdecl ActivitySeaLampExcelConfigMgr::rewriteProjectionConfig(
        ActivitySeaLampExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_level_id; // rsi
  const unsigned int *v7; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  char *v15; // rsi
  unsigned int *v16; // rax
  unsigned int *v17; // r8
  int *v18; // rdx
  int v19; // ecx
  char v20; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // eax
  int v25; // ecx
  char v26; // al
  int32_t result; // eax
  uint32_t index; // [rsp+14h] [rbp-1DCh]
  data::LanV2ProjectionLevelExcelConfigMap *__for_range; // [rsp+18h] [rbp-1D8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2ProjectionLevelExcelConfig>,false,false>::reference v30; // [rsp+20h] [rbp-1D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LanV2ProjectionLevelExcelConfig> >::type *config; // [rsp+30h] [rbp-1C0h]
  const std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1B8h]
  char v33[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 12 pre_level:72 48 4 11 level_id:73 64 8 14 __for_begin:57 96 8 12 __for_end:57 128 8 14 "
                        "__for_begin:73 160 8 12 __for_end:73 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySeaLampExcelConfigMgr::rewriteProjectionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -202116109;
  __for_range = &this->lan_v2_projection_level_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV2ProjectionLevelExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::LanV2ProjectionLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV2ProjectionLevelExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::LanV2ProjectionLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_level_id = (uint32_t *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::LanV2ProjectionLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2ProjectionLevelExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2ProjectionLevelExcelConfig>,false> *)(v3 + 96)) )
    {
      v11 = 1;
      goto LABEL_20;
    }
    v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2ProjectionLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2ProjectionLevelExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::LanV2ProjectionLevelExcelConfig>(v30);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::LanV2ProjectionLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LanV2ProjectionLevelExcelConfig>(v30);
    v8 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->projection_level_to_stage_map,
           &config->level_id,
           &config->stage_id,
           &config->level_id,
           v7);
    if ( !v8.second )
    {
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
        "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
        "rewriteProjectionConfig",
        61);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              v9,
              (const char (*)[31])"duplicate projection level_id:");
      p_level_id = &config->level_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
      goto LABEL_20;
    }
    v12 = std::set<unsigned int>::insert(&this->projection_level_set, &config->level_id);
    if ( !v12.second )
      break;
    std::set<unsigned int>::insert(&this->projection_stage_set, &config->stage_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2ProjectionLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2ProjectionLevelExcelConfig>,false,false> *const)(v3 + 64));
  }
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
    "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
    "rewriteProjectionConfig",
    66);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 256),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          v13,
          (const char (*)[31])"duplicate projection level_id:");
  p_level_id = &config->level_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->level_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v11 = 0;
LABEL_20:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v11 == 1 )
  {
    index = 0;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32, p_level_id);
    *(_DWORD *)(v3 + 32) = 0;
    __for_range_0 = &this->projection_level_set;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_level_id);
    *(std::set<unsigned int>::iterator *)(v3 + 128) = std::set<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_level_id);
    *(std::set<unsigned int>::iterator *)(v3 + 160) = std::set<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v15 = (char *)(v3 + 160);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 128),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 160)) )
      {
        v24 = 1;
        goto LABEL_44;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v16 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 128));
      v18 = (int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v19 = *v18;
      v20 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v20 != 0 && v20 <= 3 )
      {
        LOBYTE(v15) = v20 != 0;
        __asan_report_store4(v3 + 48, v15);
      }
      *(_DWORD *)(v3 + 48) = v19;
      if ( index )
      {
        v15 = (char *)(v3 + 48);
        v21 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
                &this->projection_pre_level_map,
                (unsigned int *)(v3 + 48),
                (unsigned int *)(v3 + 32),
                (unsigned int *)&this->projection_pre_level_map,
                v17);
        if ( !v21.second )
          break;
      }
      ++index;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      v25 = *(_DWORD *)(v3 + 48);
      v26 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v26 != 0 && v26 <= 3 )
      {
        LOBYTE(v15) = v26 != 0;
        __asan_report_store4(v3 + 32, v15);
      }
      *(_DWORD *)(v3 + 32) = v25;
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 128));
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
      "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
      "rewriteProjectionConfig",
      79);
    v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v23 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            v22,
            (const char (*)[31])"duplicate projection level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    v2 = -1;
    v24 = 0;
LABEL_44:
    if ( v24 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 90: range 0000000012E0473A-0000000012E0474C
int32_t __cdecl ActivitySeaLampExcelConfigMgr::checkProjectionConfig(
        ActivitySeaLampExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 95: range 0000000012E0474E-0000000012E050B6
int32_t __cdecl ActivitySeaLampExcelConfigMgr::rewriteSectionConfig(
        ActivitySeaLampExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *v6; // rsi
  const data::SeaLampSectionExcelConfig *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::SeaLampSectionExcelConfig> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  uint32_t *p_activity_id; // rsi
  unsigned int *v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // edx
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v27; // rax
  int32_t result; // eax
  data::SeaLampSectionExcelConfigVec *__for_range; // [rsp+10h] [rbp-200h]
  const data::SeaLampSectionExcelConfig *section_config; // [rsp+18h] [rbp-1F8h]
  std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>>::mapped_type *section_config_map; // [rsp+20h] [rbp-1F0h]
  std::map<unsigned int,std::vector<unsigned int>>::mapped_type *mini_parent_quest_vec; // [rsp+28h] [rbp-1E8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-1E0h]
  const data::MainQuestExcelConfig *parent_quest_config_ptr; // [rsp+38h] [rbp-1D8h]
  std::map<unsigned int,std::vector<unsigned int>> *__for_range_1; // [rsp+40h] [rbp-1D0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::reference __in; // [rsp+48h] [rbp-1C8h]
  std::vector<unsigned int> *mini_parent_quest_vec_0; // [rsp+58h] [rbp-1B8h]
  char v39[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 12 quest_id:106 64 8 14 __for_begin:96 96 8 12 __for_end:96 128 8 15 __for_begin:106 160 "
                        "8 13 __for_end:106 192 8 15 __for_begin:118 224 8 13 __for_end:118 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySeaLampExcelConfigMgr::rewriteSectionConfig;
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
  __for_range = &this->sea_lamp_section_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::SeaLampSectionExcelConfig>::iterator *)(v3 + 64) = std::vector<data::SeaLampSectionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::vector<data::SeaLampSectionExcelConfig>::iterator *)(v3 + 96) = std::vector<data::SeaLampSectionExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (const char *)(v3 + 96);
    if ( !__gnu_cxx::operator!=<data::SeaLampSectionExcelConfig *,std::vector<data::SeaLampSectionExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::SeaLampSectionExcelConfig*,std::vector<data::SeaLampSectionExcelConfig> > *)(v3 + 64),
            (const __gnu_cxx::__normal_iterator<data::SeaLampSectionExcelConfig*,std::vector<data::SeaLampSectionExcelConfig> > *)(v3 + 96)) )
    {
      v14 = 1;
      goto LABEL_34;
    }
    section_config = __gnu_cxx::__normal_iterator<data::SeaLampSectionExcelConfig *,std::vector<data::SeaLampSectionExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::SeaLampSectionExcelConfig*,std::vector<data::SeaLampSectionExcelConfig> > *const)(v3 + 64));
    section_config_map = std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>>::operator[](
                           &this->activity_section_config_map,
                           &section_config->activity_id);
    v8 = std::map<unsigned int,data::SeaLampSectionExcelConfig>::emplace<unsigned int const&,data::SeaLampSectionExcelConfig const&>(
           section_config_map,
           &section_config->section_id,
           section_config,
           &section_config->section_id,
           v7);
    if ( !v8.second )
      break;
    p_activity_id = &section_config->activity_id;
    mini_parent_quest_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                              &this->activity_sorted_mini_parent_quest_list_map,
                              &section_config->activity_id);
    __for_range_0 = &section_config->mini_quest_id;
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
      v6 = (const char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v25 = 1;
        goto LABEL_30;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v16 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v17 = (int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v18 = *v17;
      v19 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v19 != 0 && v19 <= 3 )
      {
        LOBYTE(v6) = v19 != 0;
        __asan_report_store4(v3 + 48, v6);
      }
      *(_DWORD *)(v3 + 48) = v18;
      parent_quest_config_ptr = QuestExcelConfigMgr::findParentQuestConfigByChildId(
                                  &txt_config_mgr->quest_config_mgr,
                                  *(_DWORD *)(v3 + 48));
      if ( !parent_quest_config_ptr )
        break;
      std::vector<unsigned int>::push_back(mini_parent_quest_vec, &parent_quest_config_ptr->id);
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
      "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
      "rewriteSectionConfig",
      111);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])"activity_id:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &section_config->activity_id);
    v23 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v22, (const char (*)[19])byte_1AAA60E0);
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
    v6 = byte_1AA1C2C0;
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])byte_1AA1C2C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v25 = 0;
LABEL_30:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v25 != 1 )
    {
      v14 = 0;
      goto LABEL_34;
    }
    __gnu_cxx::__normal_iterator<data::SeaLampSectionExcelConfig *,std::vector<data::SeaLampSectionExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::SeaLampSectionExcelConfig*,std::vector<data::SeaLampSectionExcelConfig> > *const)(v3 + 64));
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
    "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
    "rewriteSectionConfig",
    101);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 256),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])"activity_id:");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &section_config->activity_id);
  v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])"section_id:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &section_config->section_id);
  v6 = byte_1AAA60A0;
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])byte_1AAA60A0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v14 = 0;
LABEL_34:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v14 == 1 )
  {
    __for_range_1 = &this->activity_sorted_mini_parent_quest_list_map;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 192) = std::map<unsigned int,std::vector<unsigned int>>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v6);
    *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 224) = std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_1);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v3 + 192),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v3 + 224)) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v3 + 192));
      std::get<0ul,unsigned int const,std::vector<unsigned int>>(__in);
      mini_parent_quest_vec_0 = std::get<1ul,unsigned int const,std::vector<unsigned int>>(__in);
      M_current = std::vector<unsigned int>::end(mini_parent_quest_vec_0)._M_current;
      v27._M_current = std::vector<unsigned int>::begin(mini_parent_quest_vec_0)._M_current;
      std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
        v27,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v3 + 192));
    }
    v2 = 0;
  }
  result = v2;
  if ( v39 == (char *)v3 )
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

// Line 127: range 0000000012E050B8-0000000012E05D21
int32_t __cdecl ActivitySeaLampExcelConfigMgr::checkSectionConfig(
        const ActivitySeaLampExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  __int64 activity_id; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  char *v10; // rsi
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  __int64 main_quest_id; // rsi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  char *v23; // rsi
  unsigned int *v24; // rax
  int *v25; // rdx
  int v26; // ecx
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-244h]
  data::SeaLampSectionExcelConfigVec *__for_range; // [rsp+20h] [rbp-240h]
  const data::SeaLampSectionExcelConfig *section_config; // [rsp+28h] [rbp-238h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-230h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+38h] [rbp-228h]
  char v38[544]; // [rsp+40h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 4 14 watcher_id:137 48 4 12 quest_id:152 64 8 15 __for_begin:129 96 8 13 __for_end:129 128"
                        " 8 15 __for_begin:137 160 8 13 __for_end:137 192 8 15 __for_begin:152 224 8 13 __for_end:152 256"
                        " 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::checkSectionConfig;
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
  v4[536862733] = -218959118;
  v4[536862735] = -202116109;
  ret = 0;
  __for_range = &this->sea_lamp_section_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::vector<data::SeaLampSectionExcelConfig>::const_iterator *)(v2 + 64) = std::vector<data::SeaLampSectionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::vector<data::SeaLampSectionExcelConfig>::const_iterator *)(v2 + 96) = std::vector<data::SeaLampSectionExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::SeaLampSectionExcelConfig const*,std::vector<data::SeaLampSectionExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::SeaLampSectionExcelConfig*,std::vector<data::SeaLampSectionExcelConfig> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::SeaLampSectionExcelConfig*,std::vector<data::SeaLampSectionExcelConfig> > *)(v2 + 96)) )
  {
    section_config = __gnu_cxx::__normal_iterator<data::SeaLampSectionExcelConfig const*,std::vector<data::SeaLampSectionExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::SeaLampSectionExcelConfig*,std::vector<data::SeaLampSectionExcelConfig> > *const)(v2 + 64));
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&section_config->activity_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&section_config->activity_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&section_config->activity_id);
    }
    activity_id = section_config->activity_id;
    if ( data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(p_new_activity_config_mgr, activity_id) )
    {
      __for_range_0 = &section_config->watcher_id_vec;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, activity_id);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, activity_id);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v10 = (char *)(v2 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
          break;
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
        v11 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
        v12 = (int *)v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        v13 = *v12;
        v14 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
        if ( v14 != 0 && v14 <= 3 )
        {
          LOBYTE(v10) = v14 != 0;
          __asan_report_store4(v2 + 32, v10);
        }
        *(_DWORD *)(v2 + 32) = v13;
        if ( !data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
                &txt_config_mgr->new_activity_config_mgr,
                *(unsigned int *)(v2 + 32)) )
        {
          ret = -1;
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
            "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
            "checkSectionConfig",
            142);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])"WatcherId:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])byte_1AA1C2C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&section_config->main_quest_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)section_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&section_config->main_quest_id >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&section_config->main_quest_id);
      }
      main_quest_id = section_config->main_quest_id;
      if ( data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, main_quest_id) )
      {
        __for_range_1 = &section_config->mini_quest_id;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 192, main_quest_id);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, main_quest_id);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 224) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v23 = (char *)(v2 + 224);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 224)) )
            break;
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
          v24 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
          v25 = (int *)v24;
          if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v24);
          }
          v26 = *v25;
          v27 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
          if ( v27 != 0 && v27 <= 3 )
          {
            LOBYTE(v23) = v27 != 0;
            __asan_report_store4(v2 + 48, v23);
          }
          *(_DWORD *)(v2 + 48) = v26;
          if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(
                  &txt_config_mgr->quest_config_mgr,
                  *(unsigned int *)(v2 + 48)) )
          {
            ret = -1;
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
              "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
              "checkSectionConfig",
              157);
            v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 448),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])"QuestId:");
            v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v29,
                    (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v30, (const char (*)[7])byte_1AA1C2C0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
            *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
        }
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        ret = -1;
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
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "checkSectionConfig",
          149);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v20, (const char (*)[9])"QuestId:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                &section_config->main_quest_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])byte_1AA1C2C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
    {
      ret = -1;
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
        "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
        "checkSectionConfig",
        134);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])"ActivityId:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &section_config->activity_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])byte_1AA1C2C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    }
    __gnu_cxx::__normal_iterator<data::SeaLampSectionExcelConfig const*,std::vector<data::SeaLampSectionExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::SeaLampSectionExcelConfig*,std::vector<data::SeaLampSectionExcelConfig> > *const)(v2 + 64));
  }
  result = ret;
  if ( v38 == (char *)v2 )
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

// Line 166: range 0000000012E05D22-0000000012E07371
int32_t __cdecl ActivitySeaLampExcelConfigMgr::checkLanternRiteOverallConfig(
        ActivitySeaLampExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  data::LanV2OverAllDataExcelConfigMap *p_lan_v2_over_all_data_excel_config_map; // rdx
  data::LanV2OverAllDataExcelConfigMap *v9; // rdx
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2OverAllDataExcelConfig>,false,false>::pointer v12; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t *p_activity_id; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  __int64 v20; // rsi
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  char *v23; // rsi
  unsigned int *v24; // rax
  int *v25; // rdx
  int v26; // ecx
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // edx
  __int64 clothes_reward_id; // rsi
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  char *v34; // rsi
  unsigned int *v35; // rax
  int *v36; // rdx
  int v37; // ecx
  char v38; // al
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  int v41; // edx
  char *v42; // rsi
  unsigned int *v43; // rax
  int *v44; // rdx
  int v45; // ecx
  char v46; // al
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  int v49; // eax
  int32_t result; // eax
  const data::LanV2OverAllDataExcelConfig *overall_config; // [rsp+18h] [rbp-438h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+20h] [rbp-430h]
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-428h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-420h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+38h] [rbp-418h]
  char v57[1040]; // [rsp+40h] [rbp-410h] BYREF

  v3 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(992LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "21 48 4 14 watcher_id:200 64 4 11 card_id:213 80 4 17 exhibition_id:221 96 8 14 first_iter:177 1"
                        "28 8 9 <unknown> 160 8 15 __for_begin:200 192 8 13 __for_end:200 224 8 15 __for_begin:213 256 8 "
                        "13 __for_end:213 288 8 15 __for_begin:221 320 8 13 __for_end:221 352 32 9 <unknown> 416 32 9 <un"
                        "known> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unk"
                        "nown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySeaLampExcelConfigMgr::checkLanternRiteOverallConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
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
  if ( std::unordered_map<unsigned int,data::LanV2OverAllDataExcelConfig>::empty(&this->lan_v2_over_all_data_excel_config_map) )
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
      "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
      "checkLanternRiteOverallConfig",
      169);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 352),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v6, (const char (*)[51])byte_1AAA6540);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    v2 = -1;
  }
  else if ( std::unordered_map<unsigned int,data::LanV2OverAllDataExcelConfig>::size(&this->lan_v2_over_all_data_excel_config_map) == 1 )
  {
    p_lan_v2_over_all_data_excel_config_map = &this->lan_v2_over_all_data_excel_config_map;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::LanV2OverAllDataExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::LanV2OverAllDataExcelConfig>::begin(p_lan_v2_over_all_data_excel_config_map);
    v9 = &this->lan_v2_over_all_data_excel_config_map;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::LanV2OverAllDataExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::LanV2OverAllDataExcelConfig>::end(v9);
    v10 = std::__detail::operator==<std::pair<unsigned int const,data::LanV2OverAllDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2OverAllDataExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2OverAllDataExcelConfig>,false> *)(v3 + 128));
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
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
        "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
        "checkLanternRiteOverallConfig",
        180);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v11, (const char (*)[57])byte_1AAA65A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      v2 = -1;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2OverAllDataExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2OverAllDataExcelConfig>,false,false> *const)(v3 + 96));
      overall_config = &v12->second;
      p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
      p_activity_id = &v12->second.activity_id;
      if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(p_activity_id);
      }
      if ( data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
             p_new_activity_config_mgr,
             overall_config->activity_id) )
      {
        p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&overall_config->boss_dungeon_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&overall_config->boss_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&overall_config->boss_dungeon_id);
        }
        dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                               p_dungeon_config_mgr,
                               overall_config->boss_dungeon_id);
        if ( dungeon_config_ptr )
        {
          v20 = (((_BYTE)dungeon_config_ptr + 12) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&dungeon_config_ptr->type);
          }
          if ( dungeon_config_ptr->type == DUNGEON_MINI_ELDRITCH )
          {
            __for_range = &overall_config->clothes_watcher_id_list;
            *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 160, v20);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range);
            *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 192, v20);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range);
            while ( 1 )
            {
              v23 = (char *)(v3 + 192);
              if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
              {
                v30 = 1;
                goto LABEL_54;
              }
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
              v24 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
              v25 = (int *)v24;
              if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v24);
              }
              v26 = *v25;
              v27 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
              if ( v27 != 0 && v27 <= 3 )
              {
                LOBYTE(v23) = v27 != 0;
                __asan_report_store4(v3 + 48, v23);
              }
              *(_DWORD *)(v3 + 48) = v26;
              if ( !WatcherExcelConfigMgr::findWatcherConfig(&txt_config_mgr->watcher_config_mgr, *(_DWORD *)(v3 + 48)) )
                break;
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
            }
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
              "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
              "checkLanternRiteOverallConfig",
              204);
            v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 736),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v29 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                    v28,
                    (const char (*)[58])byte_1AAA6760);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
            *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v30 = 0;
LABEL_54:
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
            if ( v30 == 1 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&overall_config->clothes_reward_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&overall_config->clothes_reward_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&overall_config->clothes_reward_id);
              }
              clothes_reward_id = overall_config->clothes_reward_id;
              if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                                      txt_config_mgr,
                                      clothes_reward_id,
                                      ITEM_LIMIT_ACTIVITY_LANTERN_RITE) != 1 )
              {
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
                  "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
                  "checkLanternRiteOverallConfig",
                  210);
                v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 800),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v33 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                        v32,
                        (const char (*)[67])byte_1AAA67C0);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v33,
                  &overall_config->clothes_reward_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
                v2 = -1;
              }
              else
              {
                __for_range_0 = &overall_config->boss_card_id_list;
                *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 224, clothes_reward_id);
                *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_0);
                *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 256, clothes_reward_id);
                *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_0);
                while ( 1 )
                {
                  v34 = (char *)(v3 + 256);
                  if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                          (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
                          (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256)) )
                  {
                    v41 = 1;
                    goto LABEL_77;
                  }
                  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
                  v35 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
                  v36 = (int *)v35;
                  if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v35);
                  }
                  v37 = *v36;
                  v38 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
                  if ( v38 != 0 && v38 <= 3 )
                  {
                    LOBYTE(v34) = v38 != 0;
                    __asan_report_store4(v3 + 64, v34);
                  }
                  *(_DWORD *)(v3 + 64) = v37;
                  if ( !data::ExhibitionExcelConfigMgrBase::findExhibitionCardExcelConfig(
                          &txt_config_mgr->exhibition_config_mgr,
                          *(unsigned int *)(v3 + 64)) )
                    break;
                  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
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
                  "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
                  "checkLanternRiteOverallConfig",
                  217);
                v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 864),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v40 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                        v39,
                        (const char (*)[65])byte_1AAA6840);
                v34 = (char *)(v3 + 64);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v40,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
                *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v41 = 0;
LABEL_77:
                *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
                if ( v41 == 1 )
                {
                  __for_range_1 = &overall_config->boss_exhibition_id_list;
                  *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v3 + 288, v34);
                  *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_1);
                  *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v3 + 320, v34);
                  *(std::vector<unsigned int>::const_iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_1);
                  while ( 1 )
                  {
                    v42 = (char *)(v3 + 320);
                    if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288),
                            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 320)) )
                    {
                      v49 = 1;
                      goto LABEL_94;
                    }
                    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
                    v43 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
                    v44 = (int *)v43;
                    if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v43);
                    }
                    v45 = *v44;
                    v46 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
                    if ( v46 != 0 && v46 <= 3 )
                    {
                      LOBYTE(v42) = v46 != 0;
                      __asan_report_store4(v3 + 80, v42);
                    }
                    *(_DWORD *)(v3 + 80) = v45;
                    if ( !data::ExhibitionExcelConfigMgrBase::findPlayerExhibitionExcelConfig(
                            &txt_config_mgr->exhibition_config_mgr,
                            *(unsigned int *)(v3 + 80)) )
                      break;
                    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
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
                    "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
                    "checkLanternRiteOverallConfig",
                    225);
                  v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 928),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v48 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                          v47,
                          (const char (*)[65])byte_1AAA68C0);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v48,
                    (const unsigned int *)(v3 + 80));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
                  v2 = -1;
                  v49 = 0;
LABEL_94:
                  if ( v49 == 1 )
                    v2 = 0;
                }
              }
            }
          }
          else
          {
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
              "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
              "checkLanternRiteOverallConfig",
              197);
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 672),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v22 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                    v21,
                    (const char (*)[77])byte_1AAA66E0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v22,
              &overall_config->boss_dungeon_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
            v2 = -1;
          }
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
            "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
            "checkLanternRiteOverallConfig",
            192);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 608),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v19 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(v18, (const char (*)[71])byte_1AAA6660);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &overall_config->boss_dungeon_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
          v2 = -1;
        }
      }
      else
      {
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
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "checkLanternRiteOverallConfig",
          186);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v15, (const char (*)[60])byte_1AAA6600);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &overall_config->activity_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        v2 = -1;
      }
    }
  }
  else
  {
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
      "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
      "checkLanternRiteOverallConfig",
      174);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 416),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v7, (const char (*)[57])byte_1AAA65A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    v2 = -1;
  }
  result = v2;
  if ( v57 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
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

// Line 233: range 0000000012E07372-0000000012E08651
int32_t __cdecl ActivitySeaLampExcelConfigMgr::rewriteSalvageStageConfig(
        ActivitySeaLampExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  std::pair<unsigned int,data::SalvagePlayType> *v12; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> >,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  int v18; // edx
  int v19; // edx
  int v20; // eax
  char *v21; // rsi
  unsigned int *v22; // rax
  int *v23; // rdx
  int v24; // ecx
  char v25; // al
  std::pair<unsigned int,data::SalvagePlayType> *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> >,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  int v32; // edx
  int v33; // edx
  char *v34; // rsi
  unsigned int *v35; // rax
  int *v36; // rdx
  int v37; // ecx
  char v38; // al
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  int v41; // eax
  __int64 v42; // rsi
  data::SalvagePlayType play_type; // ecx
  char v44; // al
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  int v47; // edx
  data::SalvageStageDataExcelConfigMap *__for_range; // [rsp+10h] [rbp-380h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageStageDataExcelConfig>,false,false>::reference v50; // [rsp+18h] [rbp-378h]
  std::tuple_element<0,std::pair<unsigned int const,data::SalvageStageDataExcelConfig> >::type *stage_id; // [rsp+20h] [rbp-370h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SalvageStageDataExcelConfig> >::type *config; // [rsp+28h] [rbp-368h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-360h]
  std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::mapped_type *challenge_map; // [rsp+38h] [rbp-358h]
  std::map<data::SalvagePlayType,std::vector<unsigned int>>::mapped_type *challenge_id_vec; // [rsp+40h] [rbp-350h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-348h]
  std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::mapped_type *challenge_map_0; // [rsp+50h] [rbp-340h]
  std::map<data::SalvagePlayType,std::vector<unsigned int>>::mapped_type *challenge_id_vec_0; // [rsp+58h] [rbp-338h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+60h] [rbp-330h]
  data::SalvageChallengeDataExcelConfig *challenge_config_ptr; // [rsp+68h] [rbp-328h]
  std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::mapped_type *challenge_map_1; // [rsp+70h] [rbp-320h]
  std::map<data::SalvagePlayType,std::vector<unsigned int>>::mapped_type *challenge_id_vec_1; // [rsp+78h] [rbp-318h]
  char v63[784]; // [rsp+80h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "22 32 4 13 bundle_id:236 48 4 9 <unknown> 64 4 9 <unknown> 80 4 13 bundle_id:248 96 4 9 <unknown"
                        "> 112 4 9 <unknown> 128 4 16 challenge_id:260 144 4 18 challenge_type:268 160 8 15 __for_begin:2"
                        "34 192 8 13 __for_end:234 224 8 15 __for_begin:236 256 8 13 __for_end:236 288 8 19 type_stage_pa"
                        "ir:238 320 8 15 __for_begin:248 352 8 13 __for_end:248 384 8 19 type_stage_pair:250 416 8 15 __f"
                        "or_begin:260 448 8 13 __for_end:260 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySeaLampExcelConfigMgr::rewriteSalvageStageConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862733] = -218959360;
  v5[536862734] = -218959360;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -202116109;
  __for_range = &this->salvage_stage_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SalvageStageDataExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::SalvageStageDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SalvageStageDataExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::SalvageStageDataExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 192);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::SalvageStageDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageStageDataExcelConfig>,false> *)(v3 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageStageDataExcelConfig>,false> *)(v3 + 192)) )
      break;
    v50 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageStageDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageStageDataExcelConfig>,false,false> *const)(v3 + 160));
    stage_id = std::get<0ul,unsigned int const,data::SalvageStageDataExcelConfig>(v50);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::SalvageStageDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SalvageStageDataExcelConfig>(v50);
    __for_range_0 = &config->land_group_link_list;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 256);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256)) )
        break;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      LOBYTE(v7) = v11 != 0;
      if ( v11 != 0 && v11 <= 3 )
        __asan_report_store4(v3 + 32, v7);
      *(_DWORD *)(v3 + 32) = v10;
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 48, v7);
      *(_DWORD *)(v3 + 48) = 1;
      if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 288, v7);
      *(std::pair<unsigned int,data::SalvagePlayType> *)(v3 + 288) = std::make_pair<unsigned int const&,data::SalvagePlayType>(
                                                                       stage_id,
                                                                       (data::SalvagePlayType *)(v3 + 48));
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v13 = std::unordered_map<unsigned int,std::pair<unsigned int,data::SalvagePlayType>>::emplace<unsigned int &,std::pair<unsigned int,data::SalvagePlayType>&>(
              &this->salvage_bundle_2_stage_play_type_map,
              (unsigned int *)(v3 + 32),
              (std::pair<unsigned int,data::SalvagePlayType> *)(v3 + 288),
              (unsigned int *)&this->salvage_bundle_2_stage_play_type_map,
              v12);
      if ( !v13.second )
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
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "rewriteSalvageStageConfig",
          241);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v14, (const char (*)[34])byte_1AAA6B80);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 32));
        v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" stage_id:");
        v7 = (char *)stage_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, stage_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v18 = 0;
      }
      else
      {
        challenge_map = std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::operator[](
                          &this->salvage_stage_id_2_challenge_map,
                          stage_id);
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 64, stage_id);
        *(_DWORD *)(v3 + 64) = 1;
        challenge_id_vec = std::map<data::SalvagePlayType,std::vector<unsigned int>>::operator[](
                             challenge_map,
                             (std::map<data::SalvagePlayType,std::vector<unsigned int>>::key_type *)(v3 + 64));
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        v7 = (char *)(v3 + 32);
        std::vector<unsigned int>::push_back(challenge_id_vec, (const std::vector<unsigned int>::value_type *)(v3 + 32));
        v18 = 1;
      }
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
      if ( v18 != 1 )
      {
        v19 = 0;
        goto LABEL_35;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
    }
    v19 = 1;
LABEL_35:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v19 != 1 )
    {
      v20 = 0;
      goto LABEL_95;
    }
    __for_range_1 = &config->sea_group_link_list;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, v7);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 320) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 352, v7);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 352) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v21 = (char *)(v3 + 352);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 320),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 352)) )
        break;
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v22 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 320));
      v23 = (int *)v22;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v22);
      }
      v24 = *v23;
      v25 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      LOBYTE(v21) = v25 != 0;
      if ( v25 != 0 && v25 <= 3 )
        __asan_report_store4(v3 + 80, v21);
      *(_DWORD *)(v3 + 80) = v24;
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 96, v21);
      *(_DWORD *)(v3 + 96) = 2;
      if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 384, v21);
      *(std::pair<unsigned int,data::SalvagePlayType> *)(v3 + 384) = std::make_pair<unsigned int const&,data::SalvagePlayType>(
                                                                       stage_id,
                                                                       (data::SalvagePlayType *)(v3 + 96));
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      v27 = std::unordered_map<unsigned int,std::pair<unsigned int,data::SalvagePlayType>>::emplace<unsigned int &,std::pair<unsigned int,data::SalvagePlayType>&>(
              &this->salvage_bundle_2_stage_play_type_map,
              (unsigned int *)(v3 + 80),
              (std::pair<unsigned int,data::SalvagePlayType> *)(v3 + 384),
              (unsigned int *)&this->salvage_bundle_2_stage_play_type_map,
              v26);
      if ( !v27.second )
      {
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
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "rewriteSalvageStageConfig",
          253);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v28, (const char (*)[34])byte_1AAA6B80);
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v3 + 80));
        v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v30, (const char (*)[11])" stage_id:");
        v21 = (char *)stage_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, stage_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v32 = 0;
      }
      else
      {
        challenge_map_0 = std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::operator[](
                            &this->salvage_stage_id_2_challenge_map,
                            stage_id);
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 112, stage_id);
        *(_DWORD *)(v3 + 112) = 2;
        challenge_id_vec_0 = std::map<data::SalvagePlayType,std::vector<unsigned int>>::operator[](
                               challenge_map_0,
                               (std::map<data::SalvagePlayType,std::vector<unsigned int>>::key_type *)(v3 + 112));
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
        v21 = (char *)(v3 + 80);
        std::vector<unsigned int>::push_back(
          challenge_id_vec_0,
          (const std::vector<unsigned int>::value_type *)(v3 + 80));
        v32 = 1;
      }
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
      if ( v32 != 1 )
      {
        v33 = 0;
        goto LABEL_62;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 320));
    }
    v33 = 1;
LABEL_62:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
    if ( v33 != 1 )
    {
      v20 = 0;
      goto LABEL_95;
    }
    __for_range_2 = &config->salvage_challenge_id_list;
    *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 416, v21);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 416) = std::vector<unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 448, v21);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 448) = std::vector<unsigned int>::end(__for_range_2);
    while ( 1 )
    {
      v34 = (char *)(v3 + 448);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 416),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 448)) )
        break;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
      v35 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 416));
      v36 = (int *)v35;
      if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v35);
      }
      v37 = *v36;
      v38 = *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000);
      if ( v38 != 0 && v38 <= 3 )
      {
        LOBYTE(v34) = v38 != 0;
        __asan_report_store4(v3 + 128, v34);
      }
      *(_DWORD *)(v3 + 128) = v37;
      challenge_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findSalvageChallengeDataExcelConfig(
                               this,
                               *(unsigned int *)(v3 + 128));
      if ( challenge_config_ptr )
      {
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 4;
        v42 = (((_BYTE)challenge_config_ptr + 12) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->play_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)challenge_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->play_type >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&challenge_config_ptr->play_type);
        }
        play_type = challenge_config_ptr->play_type;
        v44 = *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000);
        if ( v44 != 0 && v44 <= 3 )
        {
          LOBYTE(v42) = v44 != 0;
          __asan_report_store4(v3 + 144, v42);
        }
        *(_DWORD *)(v3 + 144) = play_type;
        if ( *(_DWORD *)(v3 + 144) )
        {
          challenge_map_1 = std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::operator[](
                              &this->salvage_stage_id_2_challenge_map,
                              stage_id);
          challenge_id_vec_1 = std::map<data::SalvagePlayType,std::vector<unsigned int>>::operator[](
                                 challenge_map_1,
                                 (const std::map<data::SalvagePlayType,std::vector<unsigned int>>::key_type *)(v3 + 144));
          std::vector<unsigned int>::push_back(
            challenge_id_vec_1,
            (const std::vector<unsigned int>::value_type *)(v3 + 128));
          v41 = 1;
        }
        else
        {
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
            "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
            "rewriteSalvageStageConfig",
            271);
          v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 672),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v46 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v45, (const char (*)[56])byte_1AAA6C60);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, (const unsigned int *)(v3 + 128));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
          *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v41 = 0;
        }
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
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "rewriteSalvageStageConfig",
          265);
        v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v40 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(v39, (const char (*)[71])byte_1AAA6BE0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v3 + 128));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
        *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v41 = 0;
      }
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
      if ( v41 != 1 )
      {
        v47 = 0;
        goto LABEL_91;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 416));
    }
    v47 = 1;
LABEL_91:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
    if ( v47 != 1 )
    {
      v20 = 0;
      goto LABEL_95;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageStageDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageStageDataExcelConfig>,false,false> *const)(v3 + 160));
  }
  v20 = 1;
LABEL_95:
  if ( v20 == 1 )
    v2 = 0;
  if ( v63 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = -168430091;
  }
  return v2;
};

// Line 283: range 0000000012E08652-0000000012E09589
int32_t __cdecl ActivitySeaLampExcelConfigMgr::checkSalvageStageConfig(
        const ActivitySeaLampExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> > >::type *v6; // rsi
  std::tuple_element<1,std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> > >::type *v7; // rax
  const ActivitySeaLampExcelConfigMgr *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  ActivityGroupLinksExcelConfigMgr *p_activity_group_links_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  const ActivitySeaLampExcelConfigMgr *v15; // rcx
  __int64 v16; // rsi
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int v19; // eax
  __int64 v20; // rsi
  int v21; // eax
  char *v22; // rsi
  unsigned int *v23; // rax
  int *v24; // rdx
  int v25; // ecx
  char v26; // al
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // edx
  int v30; // eax
  common::milog::MiLogStream *v31; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,std::pair<unsigned int,data::SalvagePlayType>> *__for_range; // [rsp+18h] [rbp-318h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> >,false,false>::reference v35; // [rsp+20h] [rbp-310h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> > >::type *bundle_id; // [rsp+28h] [rbp-308h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> > >::type *type_stage_pair; // [rsp+30h] [rbp-300h]
  std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>> *__for_range_0; // [rsp+38h] [rbp-2F8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>> >,false,false>::reference v39; // [rsp+40h] [rbp-2F0h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>> > >::type *stage_id; // [rsp+48h] [rbp-2E8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>> > >::type *play_type_map; // [rsp+50h] [rbp-2E0h]
  std::_Rb_tree_const_iterator<std::pair<const data::SalvagePlayType,std::vector<unsigned int> > >::reference v42; // [rsp+60h] [rbp-2D0h]
  std::tuple_element<0,std::pair<const data::SalvagePlayType,std::vector<unsigned int> > >::type *play_type; // [rsp+68h] [rbp-2C8h]
  std::tuple_element<1,const std::pair<const data::SalvagePlayType,std::vector<unsigned int> > >::type *challenge_vec; // [rsp+70h] [rbp-2C0h]
  char v45[688]; // [rsp+80h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 48 4 13 bundle_id:311 64 8 15 __for_begin:284 96 8 13 __for_end:284 128 8 15 __for_begin:297 "
                        "160 8 13 __for_end:297 192 8 15 __for_begin:304 224 8 13 __for_end:304 256 8 15 __for_begin:311 "
                        "288 8 13 __for_end:311 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknow"
                        "n> 576 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySeaLampExcelConfigMgr::checkSalvageStageConfig;
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
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -202116109;
  __for_range = &this->salvage_bundle_2_stage_play_type_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,data::SalvagePlayType>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::pair<unsigned int,data::SalvagePlayType>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,data::SalvagePlayType>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::pair<unsigned int,data::SalvagePlayType>>::end(__for_range);
  while ( 1 )
  {
    v6 = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> > >::type *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> >,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> >,false> *)(v3 + 96)) )
    {
      v11 = 1;
      goto LABEL_24;
    }
    v35 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> >,false,false> *const)(v3 + 64));
    bundle_id = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> > >::type *)std::get<0ul,unsigned int const,std::pair<unsigned int,data::SalvagePlayType>>(v35);
    v7 = (std::tuple_element<1,std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> > >::type *)std::get<1ul,unsigned int const,std::pair<unsigned int,data::SalvagePlayType>>(v35);
    type_stage_pair = v7;
    v8 = this;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    if ( !data::ActivitySeaLampExcelConfigMgrBase::findSalvageStageDataExcelConfig(v8, type_stage_pair->first) )
    {
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
        "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
        "checkSalvageStageConfig",
        288);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              v9,
              (const char (*)[48])"[LanternRite] stage config not found, stage_id:");
      v6 = type_stage_pair;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)type_stage_pair);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
      goto LABEL_24;
    }
    p_activity_group_links_config_mgr = &txt_config_mgr->activity_group_links_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(bundle_id);
    }
    if ( !data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
            p_activity_group_links_config_mgr,
            bundle_id->first) )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> >,false,false> *const)(v3 + 64));
  }
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
    "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
    "checkSalvageStageConfig",
    293);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 384),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v13, (const char (*)[47])byte_1AAA6EA0);
  v6 = bundle_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)bundle_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
  *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v11 = 0;
LABEL_24:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v11 != 1 )
    goto LABEL_79;
  __for_range_0 = &this->salvage_stage_id_2_challenge_map;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v6);
  *(std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, v6);
  *(std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::end(__for_range_0);
LABEL_30:
  if ( !std::__detail::operator!=<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>> >,false> *)(v3 + 128),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>> >,false> *)(v3 + 160)) )
  {
    v19 = 1;
    goto LABEL_77;
  }
  v39 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>> >,false,false> *const)(v3 + 128));
  stage_id = std::get<0ul,unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>>>(v39);
  play_type_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>>>(v39);
  v15 = this;
  if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(stage_id);
  }
  v16 = *stage_id;
  if ( data::ActivitySeaLampExcelConfigMgrBase::findSalvageStageDataExcelConfig(v15, v16) )
  {
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v16);
    *(std::map<data::SalvagePlayType,std::vector<unsigned int>>::const_iterator *)(v3 + 192) = std::map<data::SalvagePlayType,std::vector<unsigned int>>::begin(play_type_map);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v16);
    *(std::map<data::SalvagePlayType,std::vector<unsigned int>>::const_iterator *)(v3 + 224) = std::map<data::SalvagePlayType,std::vector<unsigned int>>::end(play_type_map);
    while ( 1 )
    {
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<const data::SalvagePlayType,std::vector<unsigned int> > >::_Self *)(v3 + 192),
              (const std::_Rb_tree_const_iterator<std::pair<const data::SalvagePlayType,std::vector<unsigned int> > >::_Self *)(v3 + 224)) )
      {
        v30 = 1;
        goto LABEL_73;
      }
      v42 = std::_Rb_tree_const_iterator<std::pair<data::SalvagePlayType const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::SalvagePlayType,std::vector<unsigned int> > > *const)(v3 + 192));
      play_type = std::get<0ul,data::SalvagePlayType const,std::vector<unsigned int>>(v42);
      challenge_vec = (std::tuple_element<1,const std::pair<const data::SalvagePlayType,std::vector<unsigned int> > >::type *)std::get<1ul,data::SalvagePlayType const,std::vector<unsigned int>>(v42);
      v20 = ((unsigned __int8)play_type & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)play_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)play_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)play_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(play_type);
      }
      v21 = *play_type;
      if ( *(int *)play_type > 2 )
      {
        if ( (unsigned int)(v21 - 3) > 2 )
        {
LABEL_68:
          *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
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
            "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
            "checkSalvageStageConfig",
            330);
          v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 576),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v31, (const char (*)[46])byte_1AAA6F00);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
          *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v30 = 0;
LABEL_73:
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          if ( v30 != 1 )
          {
            v19 = 0;
            goto LABEL_77;
          }
          std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>> >,false,false> *const)(v3 + 128));
          goto LABEL_30;
        }
      }
      else
      {
        if ( v21 <= 0 )
          goto LABEL_68;
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 256, v20);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::begin(challenge_vec);
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 288, v20);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::end(challenge_vec);
        while ( 1 )
        {
          v22 = (char *)(v3 + 288);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288)) )
          {
            v29 = 1;
            goto LABEL_66;
          }
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          v23 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 256));
          v24 = (int *)v23;
          if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v23);
          }
          v25 = *v24;
          v26 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          if ( v26 != 0 && v26 <= 3 )
          {
            LOBYTE(v22) = v26 != 0;
            __asan_report_store4(v3 + 48, v22);
          }
          *(_DWORD *)(v3 + 48) = v25;
          if ( !data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
                  &txt_config_mgr->activity_group_links_config_mgr,
                  *(unsigned int *)(v3 + 48)) )
            break;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 256));
        }
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "checkSalvageStageConfig",
          315);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v27, (const char (*)[47])byte_1AAA6EA0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v29 = 0;
LABEL_66:
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
        if ( v29 != 1 )
        {
          v30 = 0;
          goto LABEL_73;
        }
      }
      std::_Rb_tree_const_iterator<std::pair<data::SalvagePlayType const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::SalvagePlayType,std::vector<unsigned int> > > *const)(v3 + 192));
    }
  }
  *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 448, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 448),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
    "checkSalvageStageConfig",
    301);
  v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 448),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v18 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
          v17,
          (const char (*)[48])"[LanternRite] stage config not found, stage_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, stage_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
  v2 = -1;
  v19 = 0;
LABEL_77:
  if ( v19 == 1 )
    v2 = 0;
LABEL_79:
  result = v2;
  if ( v45 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
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
  }
  return result;
};

// Line 340: range 0000000012E0958A-0000000012E099DF
int32_t __cdecl ActivitySeaLampExcelConfigMgr::rewriteSalvageChallengeConfig(
        ActivitySeaLampExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::SalvageChallengeDataExcelConfig *v6; // r8
  data::SalvagePlayType *p_play_type; // rax
  uint32_t *p_gallery_id; // rsi
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int v14; // eax
  uint32_t vehicle_gadget_id; // ecx
  char v16; // al
  int32_t result; // eax
  data::SalvageChallengeDataExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false>::reference v19; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig> >::type *id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig> >::type *config; // [rsp+28h] [rbp-D8h]
  char v22[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:342 64 8 13 __for_end:342 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySeaLampExcelConfigMgr::rewriteSalvageChallengeConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->salvage_challenge_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false> *)(v3 + 64)) )
    {
      v14 = 1;
      goto LABEL_24;
    }
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::SalvageChallengeDataExcelConfig>(v19);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SalvageChallengeDataExcelConfig>(v19);
    p_play_type = &config->play_type;
    if ( *(_BYTE *)(((unsigned __int64)p_play_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_play_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_play_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_play_type);
    }
    if ( config->play_type != SALVAGE_PLAY_TYPE_BOSS )
      break;
LABEL_22:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false> *const)(v3 + 32));
  }
  p_gallery_id = &config->gallery_id;
  v9 = std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::emplace<unsigned int const&,data::SalvageChallengeDataExcelConfig const&>(
         &this->salvage_challenge_info_map,
         &config->gallery_id,
         config,
         (const unsigned int *)&this->salvage_challenge_info_map,
         v6);
  if ( v9.second )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->vehicle_gadget_id);
    }
    vehicle_gadget_id = config->vehicle_gadget_id;
    v16 = *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000);
    if ( v16 != 0 && v16 <= 3 )
    {
      LOBYTE(p_gallery_id) = v16 != 0;
      __asan_report_store4(&this->vehicle_gadget_id, p_gallery_id);
    }
    this->vehicle_gadget_id = vehicle_gadget_id;
    goto LABEL_22;
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
    "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
    "rewriteSalvageChallengeConfig",
    350);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 96),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v10, (const char (*)[35])byte_1AAA7000);
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->gallery_id);
  v13 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v12, (const char (*)[5])" id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v14 = 0;
LABEL_24:
  if ( v14 == 1 )
    v2 = 0;
  result = v2;
  if ( v22 == (char *)v3 )
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

// Line 359: range 0000000012E099E0-0000000012E0B23C
int32_t __cdecl ActivitySeaLampExcelConfigMgr::checkSalvageChallengeConfig(
        ActivitySeaLampExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *p_group_link_id; // rsi
  unsigned int *v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // edx
  int v14; // eax
  ActivityGroupLinksExcelConfigMgr *p_activity_group_links_config_mgr; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  char *v18; // rsi
  data::SalvagePlayType *p_play_type; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  __int64 v22; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v23; // rax
  int *v24; // rdx
  int v25; // ecx
  char v26; // al
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v27; // rax
  int *v28; // rdx
  int v29; // ecx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  __int64 v33; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v34; // rax
  int *v35; // rdx
  int v36; // ecx
  char v37; // al
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  __int64 v41; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v42; // rax
  int *v43; // rdx
  int v44; // ecx
  char v45; // al
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  data::SalvagePlayType *v49; // rax
  uint32_t vehicle_gadget_id; // ecx
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  int v55; // eax
  int32_t ret; // [rsp+1Ch] [rbp-454h]
  data::SalvageChallengeDataExcelConfigMap *__for_range; // [rsp+20h] [rbp-450h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false>::reference v60; // [rsp+28h] [rbp-448h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig> >::type *config; // [rsp+38h] [rbp-438h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-430h]
  LuaConfigMgr *lua_config_mgr; // [rsp+50h] [rbp-420h]
  data::SalvageChallengeDataExcelConfigMap *__for_range_1; // [rsp+58h] [rbp-418h]
  data::SalvageChallengeDataExcelConfigMap *__for_range_2; // [rsp+60h] [rbp-410h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false>::reference v66; // [rsp+68h] [rbp-408h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig> >::type *config_1; // [rsp+78h] [rbp-3F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false>::reference v68; // [rsp+80h] [rbp-3F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig> >::type *config_0; // [rsp+90h] [rbp-3E0h]
  const GroupScriptConfig *group_config_ptr; // [rsp+98h] [rbp-3D8h]
  char v71[976]; // [rsp+A0h] [rbp-3D0h] BYREF

  v3 = (unsigned __int64)v71;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(928LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "21 32 4 19 each_watcher_id:363 48 4 12 group_id:400 64 4 26 player_point_config_id:414 80 4 24 b"
                        "oat_point_config_id:421 96 8 15 __for_begin:361 128 8 13 __for_end:361 160 8 15 __for_begin:363 "
                        "192 8 13 __for_end:363 224 8 15 __for_begin:382 256 8 13 __for_end:382 288 8 15 __for_begin:431 "
                        "320 8 13 __for_end:431 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknow"
                        "n> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySeaLampExcelConfigMgr::checkSalvageChallengeConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -202116109;
  __for_range = &this->salvage_challenge_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_group_link_id = (char *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false> *)(v3 + 128)) )
    {
      v14 = 1;
      goto LABEL_36;
    }
    v60 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false> *const)(v3 + 96));
    std::get<0ul,unsigned int const,data::SalvageChallengeDataExcelConfig>(v60);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SalvageChallengeDataExcelConfig>(v60);
    __for_range_0 = &config->watcher_ids;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_group_link_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, p_group_link_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      p_group_link_id = (char *)(v3 + 192);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
      {
        v13 = 1;
        goto LABEL_26;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(p_group_link_id) = v10 != 0;
        __asan_report_store4(v3 + 32, p_group_link_id);
      }
      *(_DWORD *)(v3 + 32) = v9;
      if ( !data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
              &txt_config_mgr->new_activity_config_mgr,
              *(unsigned int *)(v3 + 32)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
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
      "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
      "checkSalvageChallengeConfig",
      368);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 352),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v12 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v11, (const char (*)[61])byte_1AAA72A0);
    p_group_link_id = (char *)(v3 + 32);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v13 = 0;
LABEL_26:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v13 != 1 )
    {
      v14 = 0;
      goto LABEL_36;
    }
    p_activity_group_links_config_mgr = &txt_config_mgr->activity_group_links_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->group_link_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->group_link_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->group_link_id);
    }
    if ( !data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
            p_activity_group_links_config_mgr,
            config->group_link_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false> *const)(v3 + 96));
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
    "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
    "checkSalvageChallengeConfig",
    374);
  v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 416),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v17 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v16, (const char (*)[47])byte_1AAA6EA0);
  p_group_link_id = (char *)&config->group_link_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &config->group_link_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
  *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v14 = 0;
LABEL_36:
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v14 == 1 )
  {
    ret = 0;
    lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
    __for_range_1 = &this->salvage_challenge_data_excel_config_map;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, p_group_link_id);
    *(std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, p_group_link_id);
    *(std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::iterator *)(v3 + 256) = std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::end(__for_range_1);
    while ( 1 )
    {
      v18 = (char *)(v3 + 256);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false> *)(v3 + 224),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false> *)(v3 + 256)) )
        break;
      v68 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false> *const)(v3 + 224));
      std::get<0ul,unsigned int const,data::SalvageChallengeDataExcelConfig>(v68);
      config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SalvageChallengeDataExcelConfig>(v68);
      p_play_type = &config_0->play_type;
      if ( *(_BYTE *)(((unsigned __int64)p_play_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_play_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_play_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_play_type);
      }
      if ( config_0->play_type != SALVAGE_PLAY_TYPE_BOSS )
      {
        if ( std::vector<unsigned int>::size(&config_0->player_point_config_id) == 2 )
        {
          if ( std::vector<unsigned int>::size(&config_0->boat_point_config_id) == 2 )
          {
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
            v22 = 0LL;
            v23 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&config_0->player_point_config_id, 0LL);
            v24 = (int *)v23;
            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v23);
            }
            v25 = *v24;
            v26 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
            if ( v26 != 0 && v26 <= 3 )
            {
              LOBYTE(v22) = v26 != 0;
              __asan_report_store4(v3 + 48, v22);
            }
            *(_DWORD *)(v3 + 48) = v25;
            v27 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&config_0->boat_point_config_id, 0LL);
            v28 = (int *)v27;
            if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v27);
            }
            v29 = *v28;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            if ( v29 == *(_DWORD *)(v3 + 48) )
            {
              if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 48);
              group_config_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, *(_DWORD *)(v3 + 48));
              if ( group_config_ptr )
              {
                *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
                v33 = 1LL;
                v34 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&config_0->player_point_config_id, 1uLL);
                v35 = (int *)v34;
                if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v34);
                }
                v36 = *v35;
                v37 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
                if ( v37 != 0 && v37 <= 3 )
                {
                  LOBYTE(v33) = v37 != 0;
                  __asan_report_store4(v3 + 64, v33);
                }
                *(_DWORD *)(v3 + 64) = v36;
                if ( GroupScriptConfig::findPointConfig(group_config_ptr, *(unsigned int *)(v3 + 64)) )
                {
                  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
                  v41 = 1LL;
                  v42 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&config_0->boat_point_config_id, 1uLL);
                  v43 = (int *)v42;
                  if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v42);
                  }
                  v44 = *v43;
                  v45 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
                  if ( v45 != 0 && v45 <= 3 )
                  {
                    LOBYTE(v41) = v45 != 0;
                    __asan_report_store4(v3 + 80, v41);
                  }
                  *(_DWORD *)(v3 + 80) = v44;
                  if ( !GroupScriptConfig::findPointConfig(group_config_ptr, *(unsigned int *)(v3 + 80)) )
                  {
                    *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 800, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 800),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
                      "checkSalvageChallengeConfig",
                      424);
                    v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 800),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v47 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                            v46,
                            (const char (*)[22])byte_1AAA7440);
                    v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v47,
                            (const unsigned int *)(v3 + 80));
                    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v48,
                      (const char (*)[11])byte_1AA2E0C0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
                    *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                }
                else
                {
                  *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 736, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 736),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
                    "checkSalvageChallengeConfig",
                    417);
                  v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 736),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v39 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                          v38,
                          (const char (*)[22])byte_1AAA7440);
                  v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v39,
                          (const unsigned int *)(v3 + 64));
                  common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v40,
                    (const char (*)[11])byte_1AA2E0C0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
                  *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
              }
              else
              {
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
                  "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
                  "checkSalvageChallengeConfig",
                  410);
                v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 672),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v32 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v31,
                        (const char (*)[18])byte_1AA2C940);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v32,
                  (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
                *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
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
                "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
                "checkSalvageChallengeConfig",
                403);
              v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 608),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [84],(char *[84])0>(v30, (const char (*)[84])byte_1AAA73C0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
              *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 544, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 544),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
              "checkSalvageChallengeConfig",
              396);
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 544),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v21, (const char (*)[43])byte_1AAA7360);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 480, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 480),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
            "checkSalvageChallengeConfig",
            390);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 480),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v20, (const char (*)[45])byte_1AAA7300);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false> *const)(v3 + 224));
    }
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    __for_range_2 = &this->salvage_challenge_data_excel_config_map;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v18);
    *(std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::iterator *)(v3 + 288) = std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, v18);
    *(std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::iterator *)(v3 + 320) = std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::end(__for_range_2);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false> *)(v3 + 288),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false> *)(v3 + 320)) )
      {
        v55 = 1;
        goto LABEL_108;
      }
      v66 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false> *const)(v3 + 288));
      std::get<0ul,unsigned int const,data::SalvageChallengeDataExcelConfig>(v66);
      config_1 = (std::tuple_element<1,const std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SalvageChallengeDataExcelConfig>(v66);
      v49 = &config_1->play_type;
      if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v49);
      }
      if ( config_1->play_type != SALVAGE_PLAY_TYPE_BOSS )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->vehicle_gadget_id);
        }
        vehicle_gadget_id = this->vehicle_gadget_id;
        if ( *(_BYTE *)(((unsigned __int64)&config_1->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_1->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_1->vehicle_gadget_id);
        }
        if ( vehicle_gadget_id != config_1->vehicle_gadget_id )
          break;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false> *const)(v3 + 288));
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
      "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
      "checkSalvageChallengeConfig",
      439);
    v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 864),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v52 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v51, (const char (*)[33])byte_1AAA7480);
    v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &config_1->vehicle_gadget_id);
    v54 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v53, (const char (*)[5])" vs ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &this->vehicle_gadget_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
    v2 = -1;
    v55 = 0;
LABEL_108:
    if ( v55 == 1 )
      v2 = ret;
  }
  if ( v71 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8070) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8070) = -168430091;
  }
  return v2;
};

// Line 447: range 0000000012E0B23E-0000000012E0B530
const data::SeaLampSectionExcelConfig *__fastcall ActivitySeaLampExcelConfigMgr::findSectionConfig(
        const ActivitySeaLampExcelConfigMgr *const this,
        __int64 activity_id,
        uint32_t section_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>> *p_activity_section_config_map; // rdx
  std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>> *v7; // rdx
  bool v8; // al
  const data::SeaLampSectionExcelConfig *result; // rax
  bool v10; // al
  std::map<unsigned int,data::SeaLampSectionExcelConfig> *section_config_map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 15 activity_id:446 48 4 14 section_id:446 64 8 17 activity_iter:448 96 8 9 <unknown> 128 "
                        "8 16 section_iter:454 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySeaLampExcelConfigMgr::findSectionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = activity_id;
  *(_DWORD *)(v3 + 48) = section_id;
  p_activity_section_config_map = &this->activity_section_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, activity_id);
  *(std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>>::find(p_activity_section_config_map, (const std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>>::key_type *)(v3 + 32));
  v7 = &this->activity_section_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::SeaLampSectionExcelConfig> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::SeaLampSectionExcelConfig> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    section_config_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::SeaLampSectionExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::SeaLampSectionExcelConfig> > > *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,data::SeaLampSectionExcelConfig>::const_iterator *)(v3 + 128) = std::map<unsigned int,data::SeaLampSectionExcelConfig>::find(
                                                                                              section_config_map,
                                                                                              (const std::map<unsigned int,data::SeaLampSectionExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,data::SeaLampSectionExcelConfig>::const_iterator *)(v3 + 160) = std::map<unsigned int,data::SeaLampSectionExcelConfig>::end(section_config_map);
    v10 = std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SeaLampSectionExcelConfig> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SeaLampSectionExcelConfig> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SeaLampSectionExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SeaLampSectionExcelConfig> > *const)(v3 + 128))->second;
    else
      result = 0LL;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 464: range 0000000012E0B532-0000000012E0BA29
void __fastcall ActivitySeaLampExcelConfigMgr::findAllSectionWatcherVec(
        const ActivitySeaLampExcelConfigMgr *const this,
        __int64 activity_id,
        std::vector<unsigned int> *watcher_id_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>> *p_activity_section_config_map; // rdx
  std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>> *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  char *v10; // rsi
  char *v11; // rsi
  unsigned int *v12; // rax
  int *v13; // rdx
  int v14; // ecx
  char v15; // al
  std::map<unsigned int,data::SeaLampSectionExcelConfig> *__for_range; // [rsp+28h] [rbp-148h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SeaLampSectionExcelConfig> >::reference v18; // [rsp+30h] [rbp-140h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-128h]
  char v20[288]; // [rsp+50h] [rbp-120h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 14 watcher_id:473 48 4 15 activity_id:463 64 8 8 iter:465 96 8 9 <unknown> 128 8 15 __for"
                        "_begin:471 160 8 13 __for_end:471 192 8 15 __for_begin:473 224 8 13 __for_end:473";
  *(_QWORD *)(v3 + 16) = ActivitySeaLampExcelConfigMgr::findAllSectionWatcherVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -202116352;
  *(_DWORD *)(v3 + 48) = activity_id;
  p_activity_section_config_map = &this->activity_section_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, activity_id);
  *(std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>>::find(p_activity_section_config_map, (const std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>>::key_type *)(v3 + 48));
  v7 = &this->activity_section_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,data::SeaLampSectionExcelConfig>>::end(v7);
  v8 = (char *)(v3 + 96);
  v9 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::SeaLampSectionExcelConfig> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::SeaLampSectionExcelConfig> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( !v9 )
  {
    __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::SeaLampSectionExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::SeaLampSectionExcelConfig> > > *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v8);
    *(std::map<unsigned int,data::SeaLampSectionExcelConfig>::const_iterator *)(v3 + 128) = std::map<unsigned int,data::SeaLampSectionExcelConfig>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    *(std::map<unsigned int,data::SeaLampSectionExcelConfig>::const_iterator *)(v3 + 160) = std::map<unsigned int,data::SeaLampSectionExcelConfig>::end(__for_range);
    while ( 1 )
    {
      v10 = (char *)(v3 + 160);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SeaLampSectionExcelConfig> >::_Self *)(v3 + 128),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SeaLampSectionExcelConfig> >::_Self *)(v3 + 160)) )
        break;
      v18 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SeaLampSectionExcelConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SeaLampSectionExcelConfig> > *const)(v3 + 128));
      std::get<0ul,unsigned int const,data::SeaLampSectionExcelConfig>(v18);
      __for_range_0 = &std::get<1ul,unsigned int const,data::SeaLampSectionExcelConfig>(v18)->watcher_id_vec;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v10);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v10);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v11 = (char *)(v3 + 224);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224)) )
          break;
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
        v12 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
        v13 = (int *)v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        v14 = *v13;
        v15 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
        if ( v15 != 0 && v15 <= 3 )
        {
          LOBYTE(v11) = v15 != 0;
          __asan_report_store4(v3 + 32, v11);
        }
        *(_DWORD *)(v3 + 32) = v14;
        std::vector<unsigned int>::push_back(watcher_id_vec, (const std::vector<unsigned int>::value_type *)(v3 + 32));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SeaLampSectionExcelConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SeaLampSectionExcelConfig> > *const)(v3 + 128));
    }
  }
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
};

// Line 482: range 0000000012E0BA2A-0000000012E0BC3C
bool __fastcall ActivitySeaLampExcelConfigMgr::isAcitivityMiniParentQuest(
        const ActivitySeaLampExcelConfigMgr *const this,
        __int64 activity_id,
        uint32_t parent_quest_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,std::vector<unsigned int>> *p_activity_sorted_mini_parent_quest_list_map; // rdx
  std::map<unsigned int,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  bool result; // al
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v11; // rax
  std::vector<unsigned int> *mini_parent_quest_vec; // [rsp+18h] [rbp-B8h]
  char v14[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 15 activity_id:481 48 4 19 parent_quest_id:481 64 8 8 iter:483 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySeaLampExcelConfigMgr::isAcitivityMiniParentQuest;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = activity_id;
  *(_DWORD *)(v3 + 48) = parent_quest_id;
  p_activity_sorted_mini_parent_quest_list_map = &this->activity_sorted_mini_parent_quest_list_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, activity_id);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                                     p_activity_sorted_mini_parent_quest_list_map,
                                                                                     (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->activity_sorted_mini_parent_quest_list_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::vector<unsigned int>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    mini_parent_quest_vec = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v3 + 64))->second;
    M_current = std::vector<unsigned int>::end(mini_parent_quest_vec)._M_current;
    v11._M_current = std::vector<unsigned int>::begin(mini_parent_quest_vec)._M_current;
    result = std::binary_search<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
               v11,
               (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
               (const unsigned int *)(v3 + 48));
  }
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

// Line 493: range 0000000012E0BC3E-0000000012E0BDFF
const std::vector<unsigned int> *__fastcall ActivitySeaLampExcelConfigMgr::findActivityMiniParentQuestVec(
        const ActivitySeaLampExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::vector<unsigned int>> *p_activity_sorted_mini_parent_quest_list_map; // rdx
  std::map<unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::vector<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:492 64 8 8 iter:494 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::findActivityMiniParentQuestVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_activity_sorted_mini_parent_quest_list_map = &this->activity_sorted_mini_parent_quest_list_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                                     p_activity_sorted_mini_parent_quest_list_map,
                                                                                     (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->activity_sorted_mini_parent_quest_list_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 64))->second;
  else
    result = 0LL;
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

// Line 503: range 0000000012E0BE00-0000000012E0BFFB
__int64 __fastcall ActivitySeaLampExcelConfigMgr::getProjectionLevelOpenStage(
        const ActivitySeaLampExcelConfigMgr *const this,
        __int64 level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_projection_level_to_stage_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 level_id:502 64 8 8 iter:504 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::getProjectionLevelOpenStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  p_projection_level_to_stage_map = &this->projection_level_to_stage_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_projection_level_to_stage_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->projection_level_to_stage_map;
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

// Line 513: range 0000000012E0BFFC-0000000012E0C1A4
_BOOL8 __fastcall ActivitySeaLampExcelConfigMgr::isHasPreProjectionLevel(
        const ActivitySeaLampExcelConfigMgr *const this,
        __int64 level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_projection_pre_level_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  _BOOL8 result; // rax
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 level_id:512 64 8 8 iter:514 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::isHasPreProjectionLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  p_projection_pre_level_map = &this->projection_pre_level_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_projection_pre_level_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->projection_pre_level_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  result = !std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  if ( v8 == (char *)v2 )
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

// Line 523: range 0000000012E0C1A6-0000000012E0C3A1
__int64 __fastcall ActivitySeaLampExcelConfigMgr::getPreProjectionLevel(
        const ActivitySeaLampExcelConfigMgr *const this,
        __int64 level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_projection_pre_level_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 level_id:522 64 8 8 iter:524 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::getPreProjectionLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  p_projection_pre_level_map = &this->projection_pre_level_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_projection_pre_level_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->projection_pre_level_map;
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

// Line 533: range 0000000012E0C3A2-0000000012E0C68F
const std::vector<unsigned int> *__fastcall ActivitySeaLampExcelConfigMgr::getSalvageBundleVecByStageIdAnaPlayType(
        const ActivitySeaLampExcelConfigMgr *const this,
        __int64 stage_id,
        data::SalvagePlayType play_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>> *p_salvage_stage_id_2_challenge_map; // rdx
  std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>> *v7; // rdx
  bool v8; // al
  const std::vector<unsigned int> *result; // rax
  std::map<data::SalvagePlayType,std::vector<unsigned int>> *p_second; // rdx
  std::map<data::SalvagePlayType,std::vector<unsigned int>> *v11; // rdx
  bool v12; // al
  char v14[224]; // [rsp+10h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 12 stage_id:532 48 4 13 play_type:532 64 8 14 stage_iter:534 96 8 9 <unknown> 128 8 18 pl"
                        "ay_type_iter:539 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySeaLampExcelConfigMgr::getSalvageBundleVecByStageIdAnaPlayType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = stage_id;
  *(_DWORD *)(v3 + 48) = play_type;
  p_salvage_stage_id_2_challenge_map = &this->salvage_stage_id_2_challenge_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, stage_id);
  *(std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::find(p_salvage_stage_id_2_challenge_map, (const std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::key_type *)(v3 + 32));
  v7 = &this->salvage_stage_id_2_challenge_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>> >,false,false> *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<data::SalvagePlayType,std::vector<unsigned int>>::const_iterator *)(v3 + 128) = std::map<data::SalvagePlayType,std::vector<unsigned int>>::find(
                                                                                                 p_second,
                                                                                                 (const std::map<data::SalvagePlayType,std::vector<unsigned int>>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v11 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>> >,false,false> *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<data::SalvagePlayType,std::vector<unsigned int>>::const_iterator *)(v3 + 160) = std::map<data::SalvagePlayType,std::vector<unsigned int>>::end(v11);
    v12 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<const data::SalvagePlayType,std::vector<unsigned int> > >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<const data::SalvagePlayType,std::vector<unsigned int> > >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
      result = 0LL;
    else
      result = &std::_Rb_tree_const_iterator<std::pair<data::SalvagePlayType const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::SalvagePlayType,std::vector<unsigned int> > > *const)(v3 + 128))->second;
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 548: range 0000000012E0C690-0000000012E0C9AC
__int64 __fastcall ActivitySeaLampExcelConfigMgr::findSalvageStagePlayTypeByBundleId(
        const ActivitySeaLampExcelConfigMgr *const this,
        __int64 group_bundle_id,
        std::pair<unsigned int,data::SalvagePlayType> *stage_play_type_pair)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::pair<unsigned int,data::SalvagePlayType>> *p_salvage_bundle_2_stage_play_type_map; // rdx
  std::unordered_map<unsigned int,std::pair<unsigned int,data::SalvagePlayType>> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> >,false,false>::pointer v10; // rdx
  __int64 v11; // rsi
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 19 group_bundle_id:547 64 8 8 iter:549 96 8 9 <unknown> 128 8 14 stage_pair:554 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySeaLampExcelConfigMgr::findSalvageStagePlayTypeByBundleId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 48) = group_bundle_id;
  p_salvage_bundle_2_stage_play_type_map = &this->salvage_bundle_2_stage_play_type_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, group_bundle_id);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,data::SalvagePlayType>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::pair<unsigned int,data::SalvagePlayType>>::find(p_salvage_bundle_2_stage_play_type_map, (const std::unordered_map<unsigned int,std::pair<unsigned int,data::SalvagePlayType>>::key_type *)(v3 + 48));
  v7 = &this->salvage_bundle_2_stage_play_type_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,data::SalvagePlayType>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::pair<unsigned int,data::SalvagePlayType>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,data::SalvagePlayType> >,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    v11 = ((_DWORD)v10 + 11) & 7;
    if ( (((unsigned __int8)v10 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v10->second.second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v10 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->second.second + 3) >> 3) + 0x7FFF8000) )
    {
      v11 = 8LL;
      __asan_report_load_n(&v10->second, 8LL);
    }
    *(std::pair<unsigned int,data::SalvagePlayType> *)(v3 + 128) = v10->second;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v11);
    *(std::pair<unsigned int,data::SalvagePlayType> *)(v3 + 160) = std::make_pair<unsigned int &,data::SalvagePlayType &>(
                                                                     (unsigned int *)(v3 + 128),
                                                                     (data::SalvagePlayType *)(v3 + 132));
    std::pair<unsigned int,data::SalvagePlayType>::operator=(
      stage_play_type_pair,
      (std::conditional<true,std::pair<unsigned int,data::SalvagePlayType>&&,std::__nonesuch_no_braces&&>::type)(v3 + 160));
    result = 0LL;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 560: range 0000000012E0C9AE-0000000012E0CB8C
const data::LanV2OverAllDataExcelConfig *__cdecl ActivitySeaLampExcelConfigMgr::getLanternRiteOverallConfig(
        const ActivitySeaLampExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2OverAllDataExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::LanV2OverAllDataExcelConfig *result; // rax
  data::LanV2OverAllDataExcelConfigMap *p_lan_v2_over_all_data_excel_config_map; // rdx
  data::LanV2OverAllDataExcelConfigMap *v7; // rdx
  bool v8; // al
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2OverAllDataExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2OverAllDataExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2OverAllDataExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2OverAllDataExcelConfig>,false>::__node_type *)"2 32 8 14 first_iter:569 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2OverAllDataExcelConfig>,false>::__node_type *)ActivitySeaLampExcelConfigMgr::getLanternRiteOverallConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( std::unordered_map<unsigned int,data::LanV2OverAllDataExcelConfig>::empty(&this->lan_v2_over_all_data_excel_config_map) )
  {
    result = 0LL;
  }
  else if ( std::unordered_map<unsigned int,data::LanV2OverAllDataExcelConfig>::size(&this->lan_v2_over_all_data_excel_config_map) == 1 )
  {
    p_lan_v2_over_all_data_excel_config_map = &this->lan_v2_over_all_data_excel_config_map;
    if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v2[4], v1);
    v2[4]._M_cur = std::unordered_map<unsigned int,data::LanV2OverAllDataExcelConfig>::begin(p_lan_v2_over_all_data_excel_config_map)._M_cur;
    v7 = &this->lan_v2_over_all_data_excel_config_map;
    if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v2[8], v1);
    v2[8]._M_cur = std::unordered_map<unsigned int,data::LanV2OverAllDataExcelConfig>::end(v7)._M_cur;
    v8 = std::__detail::operator!=<std::pair<unsigned int const,data::LanV2OverAllDataExcelConfig>,false>(
           v2 + 4,
           v2 + 8);
    *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
      result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2OverAllDataExcelConfig>,false,false>::operator->(v2 + 4)->second;
    else
      result = 0LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2OverAllDataExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 579: range 0000000012E0CB8E-0000000012E0CD4F
const data::SalvageChallengeDataExcelConfig *__fastcall ActivitySeaLampExcelConfigMgr::findSalvageChallengeByGalleryId(
        const ActivitySeaLampExcelConfigMgr *const this,
        __int64 gallery_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig> *p_salvage_challenge_info_map; // rdx
  std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig> *v6; // rdx
  bool v7; // al
  const data::SalvageChallengeDataExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gallery_id:578 64 8 8 iter:580 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::findSalvageChallengeByGalleryId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gallery_id;
  p_salvage_challenge_info_map = &this->salvage_challenge_info_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gallery_id);
  *(std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::find(p_salvage_challenge_info_map, (const std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->salvage_challenge_info_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::SalvageChallengeDataExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SalvageChallengeDataExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 590: range 0000000012E0CD50-0000000012E0CFAC
__int64 __fastcall ActivitySeaLampExcelConfigMgr::findChallengeIDByGalleryId(
        const ActivitySeaLampExcelConfigMgr *const this,
        uint32_t gallery_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  const data::SalvageChallengeDataExcelConfig *salvage_challenge_config_ptr; // [rsp+18h] [rbp-A8h]
  char v9[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 gallery_id:589 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::findChallengeIDByGalleryId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = gallery_id;
  salvage_challenge_config_ptr = ActivitySeaLampExcelConfigMgr::findSalvageChallengeByGalleryId(
                                   this,
                                   *(unsigned int *)(v2 + 48));
  if ( salvage_challenge_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&salvage_challenge_config_ptr->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&salvage_challenge_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&salvage_challenge_config_ptr->id);
    }
    result = salvage_challenge_config_ptr->id;
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
      "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
      "findChallengeIDByGalleryId",
      594);
    v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[12])"gallery_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" not found");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v9 == (char *)v2 )
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

// Line 602: range 0000000012E0CFAE-0000000012E0D4F2
__int64 __fastcall ActivitySeaLampExcelConfigMgr::findStageIDByChallengeId(
        const ActivitySeaLampExcelConfigMgr *const this,
        __int64 challenge_id)
{
  std::tuple_element<0,std::pair<unsigned int const,data::SalvageStageDataExcelConfig> >::type v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  int v9; // edx
  int v10; // edx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  data::SalvageStageDataExcelConfigMap *__for_range; // [rsp+18h] [rbp-158h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SalvageStageDataExcelConfig>,false,false>::reference v15; // [rsp+20h] [rbp-150h]
  std::tuple_element<0,std::pair<unsigned int const,data::SalvageStageDataExcelConfig> >::type *stage_id; // [rsp+28h] [rbp-148h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-138h]
  char v18[304]; // [rsp+40h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 16 challenge_id:601 64 8 15 __for_begin:603 96 8 13 __for_end:603 128 8 15 __for_begin:60"
                        "5 160 8 13 __for_end:605 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySeaLampExcelConfigMgr::findStageIDByChallengeId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 48) = challenge_id;
  __for_range = &this->salvage_stage_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, challenge_id);
  *(std::unordered_map<unsigned int,data::SalvageStageDataExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::SalvageStageDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, challenge_id);
  *(std::unordered_map<unsigned int,data::SalvageStageDataExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::SalvageStageDataExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::SalvageStageDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageStageDataExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageStageDataExcelConfig>,false> *)(v3 + 96)) )
      break;
    v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SalvageStageDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SalvageStageDataExcelConfig>,false,false> *const)(v3 + 64));
    stage_id = std::get<0ul,unsigned int const,data::SalvageStageDataExcelConfig>(v15);
    __for_range_0 = &std::get<1ul,unsigned int const,data::SalvageStageDataExcelConfig>(v15)->salvage_challenge_id_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v9 = 1;
        goto LABEL_24;
      }
      v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      if ( *v8 == *(_DWORD *)(v3 + 48) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    v2 = *stage_id;
    v9 = 0;
LABEL_24:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v9 != 1 )
    {
      v10 = 0;
      goto LABEL_28;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SalvageStageDataExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SalvageStageDataExcelConfig>,false,false> *const)(v3 + 64));
  }
  v10 = 1;
LABEL_28:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v10 == 1 )
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
      3u,
      "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
      "findStageIDByChallengeId",
      613);
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
            (common::milog::MiLogStream *const)(v3 + 192),
            (const char (*)[14])"challenge_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" not found");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    v2 = 0;
  }
  result = v2;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
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

// Line 618: range 0000000012E0D4F4-0000000012E0DEA0
__int64 __fastcall ActivitySeaLampExcelConfigMgr::getRangeAdjacentFactor(
        const ActivitySeaLampExcelConfigMgr *const this,
        uint32_t challenge_id,
        uint32_t factor_id,
        uint32_t range,
        std::set<unsigned int> *adjacent_factor_set)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  const unsigned int *M_current; // r14
  const unsigned int *v12; // rcx
  const std::vector<unsigned int> *p_factor_id_list; // rdx
  bool v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  const unsigned int *v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rsi
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // ecx
  const std::set<unsigned int>::value_type *v30; // rax
  uint32_t v31; // esi
  const std::set<unsigned int>::value_type *v32; // rax
  uint32_t offset_index; // [rsp+2Ch] [rbp-1C4h]
  unsigned int left_index; // [rsp+30h] [rbp-1C0h]
  unsigned int right_index; // [rsp+34h] [rbp-1BCh]
  const data::LanV2FireworksChallengeDataExcelConfig *fireworks_challenge_config_ptr; // [rsp+38h] [rbp-1B8h]
  char v40[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v5 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(384LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 48 4 16 factor_index:631 64 4 16 factor_count:632 80 4 16 challenge_id:617 96 4 13 factor_id:"
                        "617 112 4 9 range:617 128 8 8 iter:625 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 3"
                        "20 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ActivitySeaLampExcelConfigMgr::getRangeAdjacentFactor;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -234556924;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862727] = -218959118;
  v7[536862729] = -218959118;
  v7[536862731] = -202116109;
  *(_DWORD *)(v5 + 80) = challenge_id;
  *(_DWORD *)(v5 + 96) = factor_id;
  *(_DWORD *)(v5 + 112) = range;
  v8 = *(unsigned int *)(v5 + 80);
  fireworks_challenge_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksChallengeDataExcelConfig(
                                     this,
                                     v8);
  if ( fireworks_challenge_config_ptr )
  {
    M_current = std::vector<unsigned int>::end(&fireworks_challenge_config_ptr->factor_id_list)._M_current;
    v12 = std::vector<unsigned int>::begin(&fireworks_challenge_config_ptr->factor_id_list)._M_current;
    if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 128, v8);
    *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 128) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v12,
                                                                                                    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                    (const unsigned int *)(v5 + 96));
    p_factor_id_list = &fireworks_challenge_config_ptr->factor_id_list;
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 160, M_current);
    *(std::vector<unsigned int>::const_iterator *)(v5 + 160) = std::vector<unsigned int>::end(p_factor_id_list);
    v14 = __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 128),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 160));
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v14 )
    {
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
        3u,
        "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
        "getRangeAdjacentFactor",
        628);
      v15 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              (common::milog::MiLogStream *const)(v5 + 256),
              (const char (*)[43])"[LanternRite] find factor fail, factor_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 96));
      v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])" challenge_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 256));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
      v18 = std::vector<unsigned int>::begin(&fireworks_challenge_config_ptr->factor_id_list)._M_current;
      if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v5 + 128);
      v19 = (unsigned int)std::distance<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
                            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v18,
                            *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 128));
      if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 48, v19);
      *(_DWORD *)(v5 + 48) = v19;
      *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = 4;
      v20 = (unsigned int)std::vector<unsigned int>::size(&fireworks_challenge_config_ptr->factor_id_list);
      if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 64, v20);
      *(_DWORD *)(v5 + 64) = v20;
      if ( !*(_DWORD *)(v5 + 64) )
        goto LABEL_27;
      if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v5 + 48);
      if ( *(_DWORD *)(v5 + 48) < *(_DWORD *)(v5 + 64) && *(_DWORD *)(v5 + 112) < *(_DWORD *)(v5 + 64) )
      {
        for ( offset_index = 1; offset_index <= *(_DWORD *)(v5 + 112); ++offset_index )
        {
          if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v5 + 48);
          v29 = *(_DWORD *)(v5 + 48);
          if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v5 + 64);
          left_index = (v29 + *(_DWORD *)(v5 + 64) - offset_index) % *(_DWORD *)(v5 + 64);
          if ( left_index != *(_DWORD *)(v5 + 48) && left_index < *(_DWORD *)(v5 + 64) )
          {
            v30 = std::vector<unsigned int>::operator[](&fireworks_challenge_config_ptr->factor_id_list, left_index);
            std::set<unsigned int>::insert(adjacent_factor_set, v30);
          }
          if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v5 + 48);
          v31 = *(_DWORD *)(v5 + 48) + offset_index;
          if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v5 + 64);
          right_index = v31 % *(_DWORD *)(v5 + 64);
          if ( right_index != *(_DWORD *)(v5 + 48) && right_index < *(_DWORD *)(v5 + 64) )
          {
            v32 = std::vector<unsigned int>::operator[](&fireworks_challenge_config_ptr->factor_id_list, right_index);
            std::set<unsigned int>::insert(adjacent_factor_set, v32);
          }
        }
        result = 0LL;
      }
      else
      {
LABEL_27:
        *(_DWORD *)(((v5 + 320) >> 3) + 0x7FFF8000) = 0;
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
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "getRangeAdjacentFactor",
          635);
        v21 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                (common::milog::MiLogStream *const)(v5 + 320),
                (const char (*)[22])"invalid param, range:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v5 + 112));
        v23 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v22, (const char (*)[15])" factor_count:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v5 + 64));
        v25 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v24, (const char (*)[15])" factor_index:");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v5 + 48));
        v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v26, (const char (*)[12])" factor_id:");
        v28 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v27, (const char (*)[15])" challenge_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v5 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 320));
        result = 0xFFFFFFFFLL;
      }
    }
  }
  else
  {
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
      "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
      "getRangeAdjacentFactor",
      622);
    v9 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           (common::milog::MiLogStream *const)(v5 + 192),
           (const char (*)[63])"findLanV2FireworksChallengeDataExcelConfig fail, challenge_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 192));
    result = 0xFFFFFFFFLL;
  }
  if ( v40 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 658: range 0000000012E0DEA2-0000000012E0E801
int32_t __cdecl ActivitySeaLampExcelConfigMgr::checkFireworksOverallConfig(
        const ActivitySeaLampExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v10; // rax
  unsigned int *v11; // rdx
  unsigned int v12; // r14d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v13; // rax
  unsigned int *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v19; // rax
  uint32_t *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v25; // rax
  uint32_t *v26; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-1C8h]
  uint32_t prev_addition_config_range_upper_bound; // [rsp+1Ch] [rbp-1C4h]
  data::LanV2FireworksOverallDataExcelConfigMap *__for_range; // [rsp+20h] [rbp-1C0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksOverallDataExcelConfig>,false,false>::reference v31; // [rsp+28h] [rbp-1B8h]
  std::tuple_element<0,std::pair<unsigned int const,data::LanV2FireworksOverallDataExcelConfig> >::type *schedule_id; // [rsp+30h] [rbp-1B0h]
  std::vector<data::FireElementAdditionConfig> *__for_range_0; // [rsp+40h] [rbp-1A0h]
  const data::FireElementAdditionConfig *addition_config; // [rsp+48h] [rbp-198h]
  char v35[400]; // [rsp+50h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 15 __for_begin:660 64 8 13 __for_end:660 96 8 15 __for_begin:663 128 8 13 __for_end:663 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::checkFireworksOverallConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  ret = 0;
  __for_range = &this->lan_v2_fireworks_overall_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV2FireworksOverallDataExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::LanV2FireworksOverallDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV2FireworksOverallDataExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LanV2FireworksOverallDataExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::LanV2FireworksOverallDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2FireworksOverallDataExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2FireworksOverallDataExcelConfig>,false> *)(v2 + 64)) )
      break;
    v31 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksOverallDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksOverallDataExcelConfig>,false,false> *const)(v2 + 32));
    schedule_id = std::get<0ul,unsigned int const,data::LanV2FireworksOverallDataExcelConfig>(v31);
    prev_addition_config_range_upper_bound = 0;
    __for_range_0 = &std::get<1ul,unsigned int const,data::LanV2FireworksOverallDataExcelConfig>(v31)->fire_element_addition_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<data::FireElementAdditionConfig>::const_iterator *)(v2 + 96) = std::vector<data::FireElementAdditionConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<data::FireElementAdditionConfig>::const_iterator *)(v2 + 128) = std::vector<data::FireElementAdditionConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::FireElementAdditionConfig const*,std::vector<data::FireElementAdditionConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::FireElementAdditionConfig*,std::vector<data::FireElementAdditionConfig> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<const data::FireElementAdditionConfig*,std::vector<data::FireElementAdditionConfig> > *)(v2 + 128)) )
    {
      addition_config = __gnu_cxx::__normal_iterator<data::FireElementAdditionConfig const*,std::vector<data::FireElementAdditionConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::FireElementAdditionConfig*,std::vector<data::FireElementAdditionConfig> > *const)(v2 + 96));
      if ( std::vector<unsigned int>::size(&addition_config->range) == 2 )
      {
        v10 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &addition_config->range,
                                                                                                    0LL);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        v12 = *v11;
        v13 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &addition_config->range,
                                                                                                    1uLL);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        if ( v12 < *v14 )
        {
          v19 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&addition_config->range, 0LL);
          v20 = v19;
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v19);
          }
          if ( prev_addition_config_range_upper_bound <= *v20 )
          {
            v25 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&addition_config->range, 1uLL);
            v26 = v25;
            if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v25);
            }
            prev_addition_config_range_upper_bound = *v26;
          }
          else
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
              "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
              "checkFireworksOverallConfig",
              679);
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 288),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v22 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    v21,
                    (const char (*)[38])byte_1AAA7F60);
            v23 = common::milog::MiLogStream::operator<<<unsigned int>(v22, &addition_config->range);
            v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v23,
                    (const char (*)[14])" schedule_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, schedule_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
            *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 224, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 224),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
            "checkFireworksOverallConfig",
            673);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v15, (const char (*)[41])byte_1AAA7F00);
          v17 = common::milog::MiLogStream::operator<<<unsigned int>(v16, &addition_config->range);
          v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v17,
                  (const char (*)[14])" schedule_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, schedule_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
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
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "checkFireworksOverallConfig",
          667);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v6, (const char (*)[47])byte_1AAA7EA0);
        v8 = common::milog::MiLogStream::operator<<<unsigned int>(v7, &addition_config->range);
        v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<data::FireElementAdditionConfig const*,std::vector<data::FireElementAdditionConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::FireElementAdditionConfig*,std::vector<data::FireElementAdditionConfig> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksOverallDataExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksOverallDataExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 690: range 0000000012E0E802-0000000012E0EF2D
int32_t __cdecl ActivitySeaLampExcelConfigMgr::rewriteFireworksStageConfig(
        ActivitySeaLampExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
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
  const unsigned int *v11; // r8
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-18Ch]
  data::LanV2FireworksStageDataExcelConfigMap *__for_range; // [rsp+18h] [rbp-188h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false,false>::reference v24; // [rsp+20h] [rbp-180h]
  std::tuple_element<0,std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig> >::type *stage_id; // [rsp+28h] [rbp-178h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-168h]
  char v27[352]; // [rsp+40h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 16 challenge_id:694 64 8 15 __for_begin:692 96 8 13 __for_end:692 128 8 15 __for_begin:69"
                        "4 160 8 13 __for_end:694 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::rewriteFireworksStageConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  ret = 0;
  __for_range = &this->lan_v2_fireworks_stage_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV2FireworksStageDataExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LanV2FireworksStageDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV2FireworksStageDataExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::LanV2FireworksStageDataExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false> *)(v2 + 96)) )
      break;
    v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false,false> *const)(v2 + 64));
    stage_id = std::get<0ul,unsigned int const,data::LanV2FireworksStageDataExcelConfig>(v24);
    __for_range_0 = &std::get<1ul,unsigned int const,data::LanV2FireworksStageDataExcelConfig>(v24)->challenge_id_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(v2 + 48, v6);
      }
      *(_DWORD *)(v2 + 48) = v9;
      if ( data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksChallengeDataExcelConfig(
             this,
             *(unsigned int *)(v2 + 48)) )
      {
        v16 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
                &this->fireworks_challenge_stage_map,
                (unsigned int *)(v2 + 48),
                stage_id,
                (unsigned int *)&this->fireworks_challenge_stage_map,
                v11);
        if ( !v16.second )
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
            "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
            "rewriteFireworksStageConfig",
            704);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v17, (const char (*)[53])byte_1AAA8100);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v2 + 48));
          v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, stage_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
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
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "rewriteFireworksStageConfig",
          698);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v12, (const char (*)[53])byte_1AAA80A0);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, stage_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 713: range 0000000012E0EF2E-0000000012E0F498
int32_t __cdecl ActivitySeaLampExcelConfigMgr::checkFireworksStageConfig(
        const ActivitySeaLampExcelConfigMgr *const this,
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
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-14Ch]
  data::LanV2FireworksStageDataExcelConfigMap *__for_range; // [rsp+18h] [rbp-148h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false,false>::reference v19; // [rsp+20h] [rbp-140h]
  std::tuple_element<0,std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig> >::type *stage_id; // [rsp+28h] [rbp-138h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-128h]
  char v22[288]; // [rsp+40h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 12 quest_id:717 64 8 15 __for_begin:715 96 8 13 __for_end:715 128 8 15 __for_begin:717 16"
                        "0 8 13 __for_end:717 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::checkFireworksStageConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->lan_v2_fireworks_stage_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV2FireworksStageDataExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LanV2FireworksStageDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV2FireworksStageDataExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::LanV2FireworksStageDataExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false> *)(v2 + 96)) )
      break;
    v19 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false,false> *const)(v2 + 64));
    stage_id = std::get<0ul,unsigned int const,data::LanV2FireworksStageDataExcelConfig>(v19);
    __for_range_0 = &std::get<1ul,unsigned int const,data::LanV2FireworksStageDataExcelConfig>(v19)->guide_quest_id;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(v2 + 48, v6);
      }
      *(_DWORD *)(v2 + 48) = v9;
      if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(
              &txt_config_mgr->quest_config_mgr,
              *(unsigned int *)(v2 + 48)) )
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
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "checkFireworksStageConfig",
          721);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v11, (const char (*)[55])byte_1AAA8240);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, stage_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false,false> *const)(v2 + 64));
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

// Line 730: range 0000000012E0F49A-0000000012E0FCF1
int32_t __cdecl ActivitySeaLampExcelConfigMgr::checkFireworksChallengeConfig(
        const ActivitySeaLampExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  unsigned __int64 v6; // rax
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  unsigned __int64 v21; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-1ECh]
  data::LanV2FireworksChallengeDataExcelConfigMap *__for_range; // [rsp+18h] [rbp-1E8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksChallengeDataExcelConfig>,false,false>::reference v25; // [rsp+20h] [rbp-1E0h]
  std::tuple_element<0,std::pair<unsigned int const,data::LanV2FireworksChallengeDataExcelConfig> >::type *challenge_id; // [rsp+28h] [rbp-1D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LanV2FireworksChallengeDataExcelConfig> >::type *challenge_config; // [rsp+30h] [rbp-1D0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1C8h]
  char v29[448]; // [rsp+40h] [rbp-1C0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 13 factor_id:735 64 8 15 __for_begin:732 96 8 13 __for_end:732 128 8 15 __for_begin:735 1"
                        "60 8 13 __for_end:735 192 32 9 <unknown> 256 32 9 <unknown> 320 56 17 factor_id_set:734";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::checkFireworksChallengeConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218103808;
  v4[536862732] = -202116109;
  ret = 0;
  __for_range = &this->lan_v2_fireworks_challenge_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV2FireworksChallengeDataExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LanV2FireworksChallengeDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV2FireworksChallengeDataExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::LanV2FireworksChallengeDataExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::LanV2FireworksChallengeDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2FireworksChallengeDataExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2FireworksChallengeDataExcelConfig>,false> *)(v2 + 96)) )
      break;
    v25 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksChallengeDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksChallengeDataExcelConfig>,false,false> *const)(v2 + 64));
    challenge_id = std::get<0ul,unsigned int const,data::LanV2FireworksChallengeDataExcelConfig>(v25);
    challenge_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LanV2FireworksChallengeDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LanV2FireworksChallengeDataExcelConfig>(v25);
    v6 = ((v2 + 320) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_WORD *)(v6 + 4) = 0;
    *(_BYTE *)(v6 + 6) = 0;
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 320));
    __for_range_0 = &challenge_config->factor_id_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v7) = v11 != 0;
        __asan_report_store4(v2 + 48, v7);
      }
      *(_DWORD *)(v2 + 48) = v10;
      if ( data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksFactorDataExcelConfig(
             this,
             *(unsigned int *)(v2 + 48)) )
      {
        v16 = std::unordered_set<unsigned int>::insert(
                (std::unordered_set<unsigned int> *const)(v2 + 320),
                (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
        if ( !v16.second )
        {
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
            "checkFireworksChallengeConfig",
            745);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v17, (const char (*)[50])byte_1AAA8400);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v2 + 48));
          v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v19,
                  (const char (*)[15])" challenge_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, challenge_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 63) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "checkFireworksChallengeConfig",
          739);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v12, (const char (*)[50])byte_1AAA83A0);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])" challenge_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, challenge_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 320));
    v21 = ((v2 + 320) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_WORD *)(v21 + 4) = -1800;
    *(_BYTE *)(v21 + 6) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksChallengeDataExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksChallengeDataExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v29 == (char *)v2 )
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

// Line 754: range 0000000012E0FCF2-0000000012E10517
int32_t __cdecl ActivitySeaLampExcelConfigMgr::checkFireworksFactorConfig(
        const ActivitySeaLampExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v9; // rax
  unsigned int *v10; // rdx
  unsigned int v11; // r14d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v12; // rax
  unsigned int *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v18; // rax
  uint32_t *v19; // rdx
  uint32_t v20; // ecx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  const unsigned int *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-174h]
  data::LanV2FireworksFactorDataExcelConfigMap *__for_range; // [rsp+20h] [rbp-170h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksFactorDataExcelConfig>,false,false>::reference v31; // [rsp+28h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,data::LanV2FireworksFactorDataExcelConfig> >::type *factor_id; // [rsp+30h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LanV2FireworksFactorDataExcelConfig> >::type *factor_config; // [rsp+38h] [rbp-158h]
  char v34[336]; // [rsp+40h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:756 64 8 13 __for_end:756 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::checkFireworksFactorConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->lan_v2_fireworks_factor_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV2FireworksFactorDataExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::LanV2FireworksFactorDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV2FireworksFactorDataExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LanV2FireworksFactorDataExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LanV2FireworksFactorDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2FireworksFactorDataExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2FireworksFactorDataExcelConfig>,false> *)(v2 + 64)) )
  {
    v31 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksFactorDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksFactorDataExcelConfig>,false,false> *const)(v2 + 32));
    factor_id = std::get<0ul,unsigned int const,data::LanV2FireworksFactorDataExcelConfig>(v31);
    factor_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LanV2FireworksFactorDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LanV2FireworksFactorDataExcelConfig>(v31);
    if ( std::vector<unsigned int>::size(&factor_config->perfect_range) == 2 )
    {
      v9 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                 &factor_config->perfect_range,
                                                                                                 0LL);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      v11 = *v10;
      v12 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &factor_config->perfect_range,
                                                                                                  1uLL);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      if ( v11 <= *v13 )
      {
        v18 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &factor_config->perfect_range,
                                                                                                    1uLL);
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        v20 = *v19;
        if ( *(_BYTE *)(((unsigned __int64)&factor_config->factor_length >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&factor_config->factor_length >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&factor_config->factor_length);
        }
        if ( v20 > factor_config->factor_length )
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
            "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
            "checkFireworksFactorConfig",
            772);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v22 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v21, (const char (*)[35])byte_1AAA85E0);
          v23 = std::vector<unsigned int>::operator[](&factor_config->perfect_range, 1uLL);
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, v23);
          v25 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v24, (const char (*)[24])byte_1AAA8640);
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  &factor_config->factor_length);
          v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v26, (const char (*)[12])" factor_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, factor_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
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
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "checkFireworksFactorConfig",
          766);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v14, (const char (*)[47])byte_1AAA8580);
        v16 = common::milog::MiLogStream::operator<<<unsigned int>(v15, &factor_config->perfect_range);
        v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" factor_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, factor_id);
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
        "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
        "checkFireworksFactorConfig",
        760);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v5, (const char (*)[53])byte_1AAA8520);
      v7 = common::milog::MiLogStream::operator<<<unsigned int>(v6, &factor_config->perfect_range);
      v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" factor_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, factor_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksFactorDataExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksFactorDataExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v34 == (char *)v2 )
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

// Line 780: range 0000000012E10518-0000000012E10964
int32_t __cdecl ActivitySeaLampExcelConfigMgr::rewriteFireworksSkillConfig(
        ActivitySeaLampExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t *p_unlock_challenge_id; // rax
  ActivitySeaLampExcelConfigMgr *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  std::unordered_set<unsigned int> *v11; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::LanV2FireworksSkillDataExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false,false>::reference v15; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig> >::type *skill_id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig> >::type *skill_config; // [rsp+38h] [rbp-C8h]
  char v18[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:782 64 8 13 __for_end:782 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::rewriteFireworksSkillConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->lan_v2_fireworks_skill_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV2FireworksSkillDataExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::LanV2FireworksSkillDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV2FireworksSkillDataExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LanV2FireworksSkillDataExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false> *)(v2 + 64)) )
  {
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false,false> *const)(v2 + 32));
    skill_id = std::get<0ul,unsigned int const,data::LanV2FireworksSkillDataExcelConfig>(v15);
    skill_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LanV2FireworksSkillDataExcelConfig>(v15);
    p_unlock_challenge_id = &skill_config->unlock_challenge_id;
    if ( *(_BYTE *)(((unsigned __int64)p_unlock_challenge_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_unlock_challenge_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_unlock_challenge_id >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(p_unlock_challenge_id);
    }
    if ( skill_config->unlock_challenge_id )
    {
      v6 = this;
      if ( *(_BYTE *)(((unsigned __int64)&skill_config->unlock_challenge_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)skill_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config->unlock_challenge_id >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&skill_config->unlock_challenge_id);
      }
      if ( data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksChallengeDataExcelConfig(
             v6,
             skill_config->unlock_challenge_id) )
      {
        v11 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                &this->fireworks_challenge_unlock_skill_map,
                &skill_config->unlock_challenge_id);
        std::unordered_set<unsigned int>::insert(v11, skill_id);
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
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "rewriteFireworksSkillConfig",
          790);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(v7, (const char (*)[65])byte_1AAA8720);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v8,
               &skill_config->unlock_challenge_id);
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" skill_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, skill_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
        *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v18 == (char *)v2 )
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

// Line 800: range 0000000012E10966-0000000012E11630
int32_t __cdecl ActivitySeaLampExcelConfigMgr::checkFireworksSkillConfig(
        const ActivitySeaLampExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t factor_add_value_min; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  data::FireworksReformSkillType skill_type; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-224h]
  data::LanV2FireworksSkillDataExcelConfigMap *__for_range; // [rsp+20h] [rbp-220h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false,false>::reference v30; // [rsp+28h] [rbp-218h]
  std::tuple_element<0,std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig> >::type *skill_id; // [rsp+30h] [rbp-210h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig> >::type *skill_config; // [rsp+38h] [rbp-208h]
  char v33[512]; // [rsp+40h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 8 15 __for_begin:802 64 8 13 __for_end:802 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::checkFireworksSkillConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  ret = 0;
  __for_range = &this->lan_v2_fireworks_skill_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV2FireworksSkillDataExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::LanV2FireworksSkillDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV2FireworksSkillDataExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LanV2FireworksSkillDataExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false> *)(v2 + 64)) )
  {
    v30 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false,false> *const)(v2 + 32));
    skill_id = std::get<0ul,unsigned int const,data::LanV2FireworksSkillDataExcelConfig>(v30);
    skill_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LanV2FireworksSkillDataExcelConfig>(v30);
    if ( *(_BYTE *)(((unsigned __int64)&skill_config->factor_add_value_min >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&skill_config->factor_add_value_min >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&skill_config->factor_add_value_min);
    }
    factor_add_value_min = skill_config->factor_add_value_min;
    if ( *(_BYTE *)(((unsigned __int64)&skill_config->factor_add_value_max >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)skill_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config->factor_add_value_max >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&skill_config->factor_add_value_max);
    }
    if ( factor_add_value_min > skill_config->factor_add_value_max )
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
        "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
        "checkFireworksSkillConfig",
        806);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v6, (const char (*)[35])byte_1AAA88E0);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v7,
             &skill_config->factor_add_value_min);
      v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v8, (const char (*)[21])byte_1AAA8940);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v9,
              &skill_config->factor_add_value_max);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" skill_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, skill_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&skill_config->stamina_value_cost >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&skill_config->stamina_value_cost >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&skill_config->stamina_value_cost);
    }
    if ( !skill_config->stamina_value_cost )
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
        "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
        "checkFireworksSkillConfig",
        811);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v12, (const char (*)[55])byte_1AAA8980);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, skill_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&skill_config->skill_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)skill_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config->skill_type >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&skill_config->skill_type);
    }
    skill_type = skill_config->skill_type;
    if ( skill_type == FIREWORKS_REFORM_SKILL_INSTABLE )
    {
      if ( *(_BYTE *)(((unsigned __int64)&skill_config->lucky_prob >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)skill_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config->lucky_prob >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&skill_config->lucky_prob);
      }
      if ( skill_config->lucky_prob )
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
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "checkFireworksSkillConfig",
          820);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v15, (const char (*)[51])byte_1AAA89E0);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &skill_config->lucky_prob);
        v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" skill_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, skill_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( std::vector<unsigned int>::size(&skill_config->effect_params) <= 2 )
      {
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "checkFireworksSkillConfig",
          825);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v19, (const char (*)[52])byte_1AAA8A40);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, skill_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else if ( skill_type == FIREWORKS_REFORM_SKILL_ADJACENT )
    {
      if ( *(_BYTE *)(((unsigned __int64)&skill_config->lucky_prob >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)skill_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config->lucky_prob >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&skill_config->lucky_prob);
      }
      if ( skill_config->lucky_prob )
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
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "checkFireworksSkillConfig",
          834);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v21, (const char (*)[54])byte_1AAA8AA0);
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &skill_config->lucky_prob);
        v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])" skill_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, skill_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( std::vector<unsigned int>::size(&skill_config->effect_params) <= 1 )
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
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "checkFireworksSkillConfig",
          839);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v26 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v25, (const char (*)[55])byte_1AAA8B00);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, skill_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 852: range 0000000012E11632-0000000012E11AC7
int32_t __cdecl ActivitySeaLampExcelConfigMgr::rewriteSalvageOverAllConfig(
        ActivitySeaLampExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::SalvageOverAllExcelConfigMap *p_salvage_over_all_excel_config_map; // rdx
  data::SalvageOverAllExcelConfigMap *v6; // rdx
  bool v7; // al
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false,false>::pointer v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::vector<std::string>::const_reference v12; // rax
  std::vector<std::string>::const_reference v13; // rax
  const data::SalvageOverAllExcelConfig *overall_config; // [rsp+18h] [rbp-108h]
  char v15[256]; // [rsp+20h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 14 first_iter:853 64 8 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampExcelConfigMgr::rewriteSalvageOverAllConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  p_salvage_over_all_excel_config_map = &this->salvage_over_all_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SalvageOverAllExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::SalvageOverAllExcelConfig>::begin(p_salvage_over_all_excel_config_map);
  v6 = &this->salvage_over_all_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SalvageOverAllExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::SalvageOverAllExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false> *)(v2 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false> *)(v2 + 64));
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
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
      "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
      "rewriteSalvageOverAllConfig",
      856);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v8, (const char (*)[51])byte_1AAA6540);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = -1;
  }
  else
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false,false> *const)(v2 + 32));
    overall_config = &v10->second;
    if ( std::vector<std::string>::size(&v10->second.back_pos_names) == 2 )
    {
      v12 = std::vector<std::string>::operator[](&overall_config->back_pos_names, 0LL);
      std::string::operator=(&this->back_player_pos_name, v12);
      v13 = std::vector<std::string>::operator[](&overall_config->back_pos_names, 1uLL);
      std::string::operator=(&this->back_vehicle_pos_name, v13);
      result = 0;
    }
    else
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
        "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
        "rewriteSalvageOverAllConfig",
        862);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v11, (const char (*)[49])byte_1AAA8C00);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      result = -1;
    }
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 871: range 0000000012E11AC8-0000000012E12A64
int32_t __cdecl ActivitySeaLampExcelConfigMgr::checkSalvageOverAllConfig(
        const ActivitySeaLampExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  data::SalvageOverAllExcelConfigMap *p_salvage_over_all_excel_config_map; // rdx
  data::SalvageOverAllExcelConfigMap *v9; // rdx
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false,false>::pointer v12; // rax
  uint32_t *p_reminder_radius; // rax
  __int64 v14; // rsi
  uint32_t reminder_radius; // ecx
  common::milog::MiLogStream *v16; // rax
  uint32_t region_radius; // ecx
  char v18; // dl
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t DefaultWorldMainSceneId; // edx
  common::milog::MiLogStream *v22; // rax
  const char *v23; // rsi
  common::milog::MiLogStream *v24; // r14
  uint32_t v25; // edx
  char v26; // al
  int v27; // eax
  bool v28; // r15
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  int32_t result; // eax
  const data::SalvageOverAllExcelConfig *overall_config; // [rsp+28h] [rbp-358h]
  LuaConfigMgr *lua_config_mgr; // [rsp+30h] [rbp-350h]
  const std::vector<std::string> *__for_range; // [rsp+38h] [rbp-348h]
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >::reference back_pos_name; // [rsp+40h] [rbp-340h]
  const SceneScriptConfig *scene_config_ptr; // [rsp+48h] [rbp-338h]
  char v39[816]; // [rsp+50h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 48 4 9 <unknown> 64 8 14 first_iter:882 96 8 9 <unknown> 128 8 15 __for_begin:907 160 8 13 __"
                        "for_end:907 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9"
                        " <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySeaLampExcelConfigMgr::checkSalvageOverAllConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -202116109;
  if ( std::unordered_map<unsigned int,data::SalvageOverAllExcelConfig>::empty(&this->salvage_over_all_excel_config_map) )
  {
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
      "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
      "checkSalvageOverAllConfig",
      874);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v6, (const char (*)[51])byte_1AAA6540);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    v2 = -1;
  }
  else if ( std::unordered_map<unsigned int,data::SalvageOverAllExcelConfig>::size(&this->salvage_over_all_excel_config_map) == 1 )
  {
    p_salvage_over_all_excel_config_map = &this->salvage_over_all_excel_config_map;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::SalvageOverAllExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::SalvageOverAllExcelConfig>::begin(p_salvage_over_all_excel_config_map);
    v9 = &this->salvage_over_all_excel_config_map;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::SalvageOverAllExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::SalvageOverAllExcelConfig>::end(v9);
    v10 = std::__detail::operator==<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false> *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
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
        "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
        "checkSalvageOverAllConfig",
        885);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v11, (const char (*)[57])byte_1AAA65A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      v2 = -1;
    }
    else
    {
      v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false,false> *const)(v3 + 64));
      overall_config = &v12->second;
      p_reminder_radius = &v12->second.reminder_radius;
      v14 = ((unsigned __int8)p_reminder_radius & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)p_reminder_radius >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_reminder_radius & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reminder_radius >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(p_reminder_radius);
      }
      reminder_radius = overall_config->reminder_radius;
      if ( *(_BYTE *)(((unsigned __int64)&overall_config->region_radius >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&overall_config->region_radius >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&overall_config->region_radius);
      }
      if ( reminder_radius < overall_config->region_radius )
      {
        if ( *(_BYTE *)(((unsigned __int64)&overall_config->region_radius >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&overall_config->region_radius >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&overall_config->region_radius);
        }
        region_radius = overall_config->region_radius;
        v18 = *(_BYTE *)(((unsigned __int64)&overall_config->destory_radius >> 3) + 0x7FFF8000);
        LOBYTE(v14) = v18 != 0;
        if ( v18 != 0 && (char)((((_BYTE)overall_config + 60) & 7) + 3) >= v18 )
          __asan_report_load4(&overall_config->destory_radius);
        if ( region_radius < overall_config->destory_radius )
        {
          if ( std::vector<std::string>::size(&overall_config->back_pos_names) == 2 )
          {
            lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
            __for_range = &overall_config->back_pos_names;
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 128, v14);
            *(std::vector<std::string>::const_iterator *)(v3 + 128) = std::vector<std::string>::begin(__for_range);
            *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 160, v14);
            *(std::vector<std::string>::const_iterator *)(v3 + 160) = std::vector<std::string>::end(__for_range);
            while ( 1 )
            {
              if ( !__gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
                      (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 128),
                      (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 160)) )
              {
                v27 = 1;
                goto LABEL_58;
              }
              back_pos_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 128));
              DefaultWorldMainSceneId = TxtConfigMgr::getDefaultWorldMainSceneId(txt_config_mgr);
              scene_config_ptr = LuaConfigMgr::findSceneScriptConfig(lua_config_mgr, DefaultWorldMainSceneId);
              if ( !scene_config_ptr )
              {
                *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
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
                  "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
                  "checkSalvageOverAllConfig",
                  912);
                v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 576),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v23 = "[LanternRite] findSceneScriptConfig fails, ";
                v24 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        v22,
                        (const char (*)[44])"[LanternRite] findSceneScriptConfig fails, ");
                *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
                v25 = TxtConfigMgr::getDefaultWorldMainSceneId(txt_config_mgr);
                v26 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
                if ( v26 != 0 && v26 <= 3 )
                {
                  LOBYTE(v23) = v26 != 0;
                  __asan_report_store4(v3 + 48, v23);
                }
                *(_DWORD *)(v3 + 48) = v25;
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v3 + 48));
                *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
                v2 = -1;
                v27 = 0;
                goto LABEL_58;
              }
              *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
              std::string::basic_string(v3 + 640, back_pos_name);
              v28 = SceneScriptConfig::findDummyPointScriptConfig(scene_config_ptr, (std::string *)(v3 + 640)) == 0LL;
              std::string::~string((void *)(v3 + 640));
              *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
              if ( v28 )
                break;
              __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 128));
            }
            *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
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
              "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
              "checkSalvageOverAllConfig",
              917);
            v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 704),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v30 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    v29,
                    (const char (*)[28])"[LanternRite] dummy_point: ");
            v31 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, back_pos_name);
            common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])byte_1AA27300);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
            v2 = -1;
            v27 = 0;
LABEL_58:
            if ( v27 == 1 )
              v2 = 0;
          }
          else
          {
            *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
              "checkSalvageOverAllConfig",
              903);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 512),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              v20,
              (const char (*)[56])"[LanternRite] overall_config.back_pos_names.size() != 2");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
            v2 = -1;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
            "checkSalvageOverAllConfig",
            897);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            v19,
            (const char (*)[46])"[LanternRite] region_radius >= destory_radius");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          v2 = -1;
        }
      }
      else
      {
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
          "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
          "checkSalvageOverAllConfig",
          892);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          v16,
          (const char (*)[47])"[LanternRite] reminder_radius >= region_radius");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        v2 = -1;
      }
    }
  }
  else
  {
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
      "./src/txt_data_manual/ActivitySeaLampExcelConfig.cpp",
      "checkSalvageOverAllConfig",
      879);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 256),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v7, (const char (*)[57])byte_1AAA65A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    v2 = -1;
  }
  result = v2;
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8054) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF805C) = 0;
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
  }
  return result;
};

// Line 925: range 0000000012E12A66-0000000012E12C3A
const data::SalvageOverAllExcelConfig *__cdecl ActivitySeaLampExcelConfigMgr::findSalvageOverAllConfig(
        const ActivitySeaLampExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::SalvageOverAllExcelConfig *result; // rax
  data::SalvageOverAllExcelConfigMap *p_salvage_over_all_excel_config_map; // rdx
  data::SalvageOverAllExcelConfigMap *v7; // rdx
  bool v8; // al
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false>::__node_type *)"2 32 8 14 first_iter:934 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false>::__node_type *)ActivitySeaLampExcelConfigMgr::findSalvageOverAllConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( std::unordered_map<unsigned int,data::SalvageOverAllExcelConfig>::empty(&this->salvage_over_all_excel_config_map) )
  {
    result = 0LL;
  }
  else if ( std::unordered_map<unsigned int,data::SalvageOverAllExcelConfig>::size(&this->salvage_over_all_excel_config_map) == 1 )
  {
    p_salvage_over_all_excel_config_map = &this->salvage_over_all_excel_config_map;
    if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v2[4], v1);
    v2[4]._M_cur = std::unordered_map<unsigned int,data::SalvageOverAllExcelConfig>::begin(p_salvage_over_all_excel_config_map)._M_cur;
    v7 = &this->salvage_over_all_excel_config_map;
    if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v2[8], v1);
    v2[8]._M_cur = std::unordered_map<unsigned int,data::SalvageOverAllExcelConfig>::end(v7)._M_cur;
    v8 = std::__detail::operator!=<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false>(v2 + 4, v2 + 8);
    *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
      result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false,false>::operator->(v2 + 4)->second;
    else
      result = 0LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SalvageOverAllExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};
