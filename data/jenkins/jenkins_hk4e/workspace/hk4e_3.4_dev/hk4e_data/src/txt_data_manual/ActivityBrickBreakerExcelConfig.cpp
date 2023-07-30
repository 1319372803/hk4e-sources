// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp

// Line 21: range 0000000012AC940E-0000000012AC9653
int32_t __cdecl ActivityBrickBreakerExcelConfigMgr::checkConfig(
        ActivityBrickBreakerExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityBrickBreakerExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityBrickBreakerExcelConfigMgr::checkBrickBreakerWorldLevelExcelConfig(this, txt_config_mgr)
    || ActivityBrickBreakerExcelConfigMgr::checkBrickBreakerDungeonLevelExcelConfig(this, txt_config_mgr)
    || ActivityBrickBreakerExcelConfigMgr::checkBrickBreakerSkillExcelConfig(this, txt_config_mgr)
    || ActivityBrickBreakerExcelConfigMgr::checkBrickBreakerStageExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
      "checkConfig",
      27);
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

// Line 34: range 0000000012AC9654-0000000012ACA0FA
int32_t __cdecl ActivityBrickBreakerExcelConfigMgr::rewriteBrickBreakerStageExcelConfig(
        ActivityBrickBreakerExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  char *v7; // rsi
  const unsigned int *v8; // r8
  unsigned int *v9; // rax
  int *v10; // rdx
  int v11; // ecx
  char v12; // al
  std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig> *p_world_level_group_config_map; // rdx
  std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig> *v14; // rdx
  bool v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  __int64 v18; // rsi
  unsigned int v19; // r14d
  __int64 v20; // rax
  char v21; // dl
  std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false>::pointer v22; // rdx
  char v23; // cl
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+10h] [rbp-220h]
  uint32_t pre_level_group_id; // [rsp+14h] [rbp-21Ch]
  data::BrickBreakerStageExcelConfigMap *__for_range; // [rsp+18h] [rbp-218h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerStageExcelConfig>,false,false>::reference v31; // [rsp+20h] [rbp-210h]
  std::tuple_element<0,std::pair<unsigned int const,data::BrickBreakerStageExcelConfig> >::type *stage_id; // [rsp+28h] [rbp-208h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BrickBreakerStageExcelConfig> >::type *config; // [rsp+30h] [rbp-200h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1F8h]
  char v35[496]; // [rsp+40h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 4 17 level_group_id:45 64 8 14 __for_begin:36 96 8 12 __for_end:36 128 8 14 __for_begin:45"
                        " 160 8 12 __for_end:45 192 8 7 iter:47 224 8 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 3"
                        "84 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBrickBreakerExcelConfigMgr::rewriteBrickBreakerStageExcelConfig;
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
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  ret = 0;
  __for_range = &this->brick_breaker_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BrickBreakerStageExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BrickBreakerStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BrickBreakerStageExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::BrickBreakerStageExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BrickBreakerStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BrickBreakerStageExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BrickBreakerStageExcelConfig>,false> *)(v2 + 96)) )
  {
    v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerStageExcelConfig>,false,false> *const)(v2 + 64));
    stage_id = std::get<0ul,unsigned int const,data::BrickBreakerStageExcelConfig>(v31);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BrickBreakerStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BrickBreakerStageExcelConfig>(v31);
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
            &ActivityBrickBreakerExcelConfigMgr::STAGE_ID_SET,
            stage_id) )
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
        "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
        "rewriteBrickBreakerStageExcelConfig",
        40);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             v5,
             (const char (*)[21])"stage_id is invalid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, stage_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      pre_level_group_id = 0;
      __for_range_0 = &config->world_level_id;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, stage_id);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, stage_id);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v7 = (char *)(v2 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v9 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
        v10 = (int *)v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        v11 = *v10;
        v12 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        LOBYTE(v7) = v12 != 0;
        if ( v12 != 0 && v12 <= 3 )
          __asan_report_store4(v2 + 48, v7);
        *(_DWORD *)(v2 + 48) = v11;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        p_world_level_group_config_map = &this->world_level_group_config_map;
        if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 192, v7);
        *(std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::find(p_world_level_group_config_map, (const std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::key_type *)(v2 + 48));
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        v14 = &this->world_level_group_config_map;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, v2 + 48);
        *(std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::end(v14);
        v15 = std::__detail::operator==<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> *)(v2 + 192),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> *)(v2 + 224));
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
        if ( v15 )
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
            "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
            "rewriteBrickBreakerStageExcelConfig",
            50);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  v16,
                  (const char (*)[28])"find level_group_id failed:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
          v18 = ((unsigned __int8)stage_id & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(stage_id);
          }
          v19 = *stage_id;
          v20 = (__int64)std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false> *const)(v2 + 192));
          v21 = *(_BYTE *)(((unsigned __int64)(v20 + 8) >> 3) + 0x7FFF8000);
          if ( v21 != 0 && v21 <= 3 )
          {
            LOBYTE(v18) = v21 != 0;
            v20 = __asan_report_store4(v20 + 8, v18);
          }
          *(_DWORD *)(v20 + 8) = v19;
          v22 = std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false> *const)(v2 + 192));
          v23 = *(_BYTE *)(((unsigned __int64)&v22->second.pre_level_group_id >> 3) + 0x7FFF8000);
          if ( v23 != 0 && (char)((((_BYTE)v22 + 20) & 7) + 3) >= v23 )
          {
            LOBYTE(v18) = v23 != 0;
            __asan_report_store4(&v22->second.pre_level_group_id, v18);
          }
          v22->second.pre_level_group_id = pre_level_group_id;
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 48);
          pre_level_group_id = *(_DWORD *)(v2 + 48);
        }
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      v24 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
              &this->dungeon_level_to_stage_map,
              &config->dungeon_level,
              stage_id,
              (const unsigned int *)&this->dungeon_level_to_stage_map,
              v8);
      if ( !v24.second )
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
          "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
          "rewriteBrickBreakerStageExcelConfig",
          60);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v26 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                v25,
                (const char (*)[45])"duplicate brick breaker stage dungeon_level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &config->dungeon_level);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerStageExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v35 == (char *)v2 )
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

// Line 69: range 0000000012ACA0FC-0000000012ACB10F
int32_t __cdecl ActivityBrickBreakerExcelConfigMgr::checkBrickBreakerStageExcelConfig(
        ActivityBrickBreakerExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  ActivityBrickBreakerExcelConfigMgr *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  ActivityBrickBreakerExcelConfigMgr *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t *p_pre_level_group_id; // rsi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  char *v24; // rsi
  unsigned int *v25; // rax
  int *v26; // rdx
  int v27; // ecx
  char v28; // al
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  ActivityBrickBreakerExcelConfigMgr *v33; // rcx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-2ECh]
  std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig> *__for_range; // [rsp+18h] [rbp-2E8h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_1; // [rsp+20h] [rbp-2E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v40; // [rsp+28h] [rbp-2D8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *dungeon_level_id; // [rsp+30h] [rbp-2D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false>::reference v42; // [rsp+40h] [rbp-2C0h]
  std::tuple_element<0,std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig> >::type *level_group_id; // [rsp+48h] [rbp-2B8h]
  std::tuple_element<1,const std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig> >::type *config; // [rsp+50h] [rbp-2B0h]
  const std::set<unsigned int> *__for_range_0; // [rsp+58h] [rbp-2A8h]
  char v46[672]; // [rsp+60h] [rbp-2A0h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 4 11 skill_id:97 64 8 14 __for_begin:71 96 8 12 __for_end:71 128 8 14 __for_begin:97 160 8"
                        " 12 __for_end:97 192 8 15 __for_begin:108 224 8 13 __for_end:108 256 32 9 <unknown> 320 32 9 <un"
                        "known> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBrickBreakerExcelConfigMgr::checkBrickBreakerStageExcelConfig;
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
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -202116109;
  ret = 0;
  __for_range = &this->world_level_group_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> *)(v2 + 96)) )
      break;
    v42 = std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false> *const)(v2 + 64));
    level_group_id = std::get<0ul,unsigned int const,BrickBreakerWorldLevelGroupConfig>(v42);
    config = (std::tuple_element<1,const std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig> >::type *)std::get<1ul,unsigned int const,BrickBreakerWorldLevelGroupConfig>(v42);
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
            &ActivityBrickBreakerExcelConfigMgr::STAGE_ID_SET,
            &config->stage_id) )
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
        "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
        "checkBrickBreakerStageExcelConfig",
        75);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             v6,
             (const char (*)[21])"stage_id is invalid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->stage_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      v8 = this;
      if ( *(_BYTE *)(((unsigned __int64)&config->level_pair >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->level_pair >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->level_pair);
      }
      if ( data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerWorldLevelExcelConfig(
             v8,
             config->level_pair.first) )
      {
        v13 = this;
        if ( *(_BYTE *)(((unsigned __int64)&config->level_pair.second >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->level_pair.second >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->level_pair.second);
        }
        if ( data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerWorldLevelExcelConfig(
               v13,
               config->level_pair.second) )
        {
          p_pre_level_group_id = (uint32_t *)((((_BYTE)config + 12) & 7u) + 3);
          if ( *(_BYTE *)(((unsigned __int64)&config->pre_level_group_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->pre_level_group_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&config->pre_level_group_id);
          }
          if ( config->pre_level_group_id
            && (p_pre_level_group_id = &config->pre_level_group_id,
                !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>,unsigned int>(
                   &this->world_level_group_config_map,
                   &config->pre_level_group_id)) )
          {
            *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 448, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 448),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
              "checkBrickBreakerStageExcelConfig",
              93);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 448),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v21 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    v20,
                    (const char (*)[61])"brick breaker world level pre_level_group config failed, id:");
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, level_group_id);
            v23 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v22,
                    (const char (*)[22])", pre_level_group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &config->pre_level_group_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
            *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            __for_range_0 = &config->unlock_skill_set;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 128, p_pre_level_group_id);
            *(std::set<unsigned int>::iterator *)(v2 + 128) = std::set<unsigned int>::begin(__for_range_0);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 160, p_pre_level_group_id);
            *(std::set<unsigned int>::iterator *)(v2 + 160) = std::set<unsigned int>::end(__for_range_0);
            while ( 1 )
            {
              v24 = (char *)(v2 + 160);
              if ( !std::operator!=(
                      (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 128),
                      (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 160)) )
                break;
              *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
              v25 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 128));
              v26 = (int *)v25;
              if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v25);
              }
              v27 = *v26;
              v28 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
              if ( v28 != 0 && v28 <= 3 )
              {
                LOBYTE(v24) = v28 != 0;
                __asan_report_store4(v2 + 48, v24);
              }
              *(_DWORD *)(v2 + 48) = v27;
              if ( !data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerSkillExcelConfig(
                      this,
                      *(unsigned int *)(v2 + 48)) )
              {
                *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 512, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 512),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
                  "checkBrickBreakerStageExcelConfig",
                  101);
                v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 512),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v30 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                        v29,
                        (const char (*)[64])"brick breaker find findBrickBreakerSkillExcelConfig failed, id:");
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, level_group_id);
                v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v31,
                        (const char (*)[12])", skill_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v32,
                  (const unsigned int *)(v2 + 48));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
                *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
              std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 128));
            }
            *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
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
            "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
            "checkBrickBreakerStageExcelConfig",
            87);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  v14,
                  (const char (*)[45])"brick breaker world level config failed, id:");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, level_group_id);
          v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v16,
                  (const char (*)[14])", hard_level:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &config->level_pair.second);
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
          "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
          "checkBrickBreakerStageExcelConfig",
          81);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 320),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                v9,
                (const char (*)[45])"brick breaker world level config failed, id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, level_group_id);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v11,
                (const char (*)[16])", normal_level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v12,
          (const unsigned int *)&config->level_pair);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  __for_range_1 = &this->dungeon_level_to_stage_map;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, v5);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range_1);
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 224, v5);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,unsigned int>::end(__for_range_1);
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 192),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 224)) )
  {
    v40 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 192));
    dungeon_level_id = std::get<0ul,unsigned int const,unsigned int>(v40);
    std::get<1ul,unsigned int const,unsigned int>(v40);
    v33 = this;
    if ( *(_BYTE *)(((unsigned __int64)dungeon_level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_level_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(dungeon_level_id);
    }
    if ( !data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerDungeonLevelExcelConfig(v33, *dungeon_level_id) )
    {
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 576, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 576),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
        "checkBrickBreakerStageExcelConfig",
        112);
      v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 576),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v35 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
              v34,
              (const char (*)[66])"brick breaker findBrickBreakerDungeonLevelExcelConfig failed, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, dungeon_level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 192));
  }
  result = ret;
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
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
  }
  return result;
};

// Line 122: range 0000000012ACB110-0000000012ACBA55
int32_t __cdecl ActivityBrickBreakerExcelConfigMgr::rewriteBrickBreakerSkillExcelConfig(
        ActivityBrickBreakerExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_max_level; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  std::tuple_element<0,std::pair<unsigned int const,data::BrickBreakerSkillExcelConfig> >::type *v8; // rsi
  std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig> *p_world_level_group_config_map; // rdx
  const std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::key_type *p_unlock_world_level; // rcx
  __int64 v11; // rsi
  const std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::key_type *v12; // rsi
  std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig> *v13; // rdx
  bool v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  std::set<unsigned int> *p_unlock_skill_set; // rdx
  char *v19; // rsi
  unsigned int *v20; // rax
  int *v21; // rdx
  int v22; // ecx
  char v23; // al
  std::set<unsigned int> *v24; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-1CCh]
  data::BrickBreakerSkillExcelConfigMap *__for_range; // [rsp+18h] [rbp-1C8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerSkillExcelConfig>,false,false>::reference v28; // [rsp+20h] [rbp-1C0h]
  std::tuple_element<0,std::pair<unsigned int const,data::BrickBreakerSkillExcelConfig> >::type *skill_id; // [rsp+28h] [rbp-1B8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BrickBreakerSkillExcelConfig> >::type *config; // [rsp+30h] [rbp-1B0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1A8h]
  char v32[416]; // [rsp+40h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 4 20 dungeon_level_id:148 64 8 15 __for_begin:124 96 8 13 __for_end:124 128 8 8 iter:138 16"
                        "0 8 9 <unknown> 192 8 15 __for_begin:148 224 8 13 __for_end:148 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBrickBreakerExcelConfigMgr::rewriteBrickBreakerSkillExcelConfig;
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
  __for_range = &this->brick_breaker_skill_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BrickBreakerSkillExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BrickBreakerSkillExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BrickBreakerSkillExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::BrickBreakerSkillExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BrickBreakerSkillExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BrickBreakerSkillExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BrickBreakerSkillExcelConfig>,false> *)(v2 + 96)) )
  {
    v28 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerSkillExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerSkillExcelConfig>,false,false> *const)(v2 + 64));
    skill_id = std::get<0ul,unsigned int const,data::BrickBreakerSkillExcelConfig>(v28);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BrickBreakerSkillExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BrickBreakerSkillExcelConfig>(v28);
    p_max_level = &config->max_level;
    if ( *(_BYTE *)(((unsigned __int64)p_max_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_max_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_max_level);
    }
    if ( !config->max_level )
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
        "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
        "rewriteBrickBreakerSkillExcelConfig",
        128);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             v6,
             (const char (*)[43])"brick breaker skill max level 0, skill_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, skill_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
      goto LABEL_45;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->unlock_world_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->unlock_world_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->unlock_world_level);
    }
    if ( !config->unlock_world_level )
    {
      v8 = skill_id;
      std::set<unsigned int>::insert(&this->default_unlock_skill_set, skill_id);
LABEL_30:
      __for_range_0 = &config->upgrade_dungeon_level_list;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, v8);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 224, v8);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 224) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v19 = (char *)(v2 + 224);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 224)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v20 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
        v21 = (int *)v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        v22 = *v21;
        v23 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v23 != 0 && v23 <= 3 )
        {
          LOBYTE(v19) = v23 != 0;
          __asan_report_store4(v2 + 48, v19);
        }
        *(_DWORD *)(v2 + 48) = v22;
        v24 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                &this->dungeon_level_skill_map,
                (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
        std::set<unsigned int>::insert(v24, skill_id);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((unsigned __int64)&config->advanced_skill_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->advanced_skill_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->advanced_skill_id);
      }
      if ( config->advanced_skill_id )
        std::set<unsigned int>::insert(&this->default_load_skill_set, skill_id);
      goto LABEL_45;
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    p_world_level_group_config_map = &this->world_level_group_config_map;
    p_unlock_world_level = &config->unlock_world_level;
    v11 = *(unsigned __int8 *)(((v2 + 128) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v11 )
      __asan_report_store8(v2 + 128, v11);
    v12 = p_unlock_world_level;
    *(std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::find(
                                                                                                    p_world_level_group_config_map,
                                                                                                    p_unlock_world_level);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    v13 = &this->world_level_group_config_map;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v12);
    *(std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::end(v13);
    v14 = std::__detail::operator==<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> *)(v2 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> *)(v2 + 160));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v14 )
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
        "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
        "rewriteBrickBreakerSkillExcelConfig",
        141);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              v15,
              (const char (*)[54])"find world_level_group_config failed, world_level_id:");
      v8 = &config->unlock_world_level;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->unlock_world_level);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
      v17 = 0;
    }
    else
    {
      p_unlock_skill_set = &std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false> *const)(v2 + 128))->second.unlock_skill_set;
      v8 = skill_id;
      std::set<unsigned int>::insert(p_unlock_skill_set, skill_id);
      v17 = 1;
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v17 == 1 )
      goto LABEL_30;
LABEL_45:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerSkillExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerSkillExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v32 == (char *)v2 )
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

// Line 162: range 0000000012ACBA56-0000000012ACBDE9
int32_t __cdecl ActivityBrickBreakerExcelConfigMgr::checkBrickBreakerSkillExcelConfig(
        ActivityBrickBreakerExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  ActivityBrickBreakerExcelConfigMgr *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v11; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *dungeon_level_id; // [rsp+30h] [rbp-D0h]
  char v13[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:164 64 8 13 __for_end:164 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBrickBreakerExcelConfigMgr::checkBrickBreakerSkillExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->dungeon_level_skill_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64)) )
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 32));
    dungeon_level_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v11);
    std::get<1ul,unsigned int const,std::set<unsigned int>>(v11);
    v5 = this;
    if ( *(_BYTE *)(((unsigned __int64)dungeon_level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_level_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(dungeon_level_id);
    }
    if ( !data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerDungeonLevelExcelConfig(v5, *dungeon_level_id) )
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
        "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
        "checkBrickBreakerSkillExcelConfig",
        168);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
             v6,
             (const char (*)[66])"brick breaker findBrickBreakerDungeonLevelExcelConfig failed, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, dungeon_level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v13 == (char *)v2 )
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

// Line 177: range 0000000012ACBDEA-0000000012ACD511
int32_t __cdecl ActivityBrickBreakerExcelConfigMgr::checkBrickBreakerWorldLevelExcelConfig(
        ActivityBrickBreakerExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  __int64 group_id; // rsi
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  char *v25; // rsi
  unsigned int *v26; // rax
  int *v27; // rdx
  int v28; // ecx
  char v29; // al
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  uint32_t control_group_id; // ecx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  int32_t ret; // [rsp+1Ch] [rbp-3F4h]
  std::unordered_map<unsigned int,BrickBreakerWorldLevelConfig> *__for_range; // [rsp+20h] [rbp-3F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelConfig>,false,false>::reference v56; // [rsp+28h] [rbp-3E8h]
  std::tuple_element<0,std::pair<unsigned int const,BrickBreakerWorldLevelConfig> >::type *id; // [rsp+30h] [rbp-3E0h]
  std::tuple_element<1,const std::pair<unsigned int const,BrickBreakerWorldLevelConfig> >::type *config; // [rsp+38h] [rbp-3D8h]
  const SceneScriptConfig *scene_config_ptr; // [rsp+40h] [rbp-3D0h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+48h] [rbp-3C8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+50h] [rbp-3C0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-3B8h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+60h] [rbp-3B0h]
  char v64[928]; // [rsp+70h] [rbp-3A0h] BYREF

  v2 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(896LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 48 4 12 point_id:215 64 8 15 __for_begin:179 96 8 13 __for_end:179 128 8 15 __for_begin:215 1"
                        "60 8 13 __for_end:215 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown"
                        "> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown>"
                        " 768 32 9 <unknown> 832 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBrickBreakerExcelConfigMgr::checkBrickBreakerWorldLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -202116109;
  ret = 0;
  __for_range = &this->world_level_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,BrickBreakerWorldLevelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,BrickBreakerWorldLevelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,BrickBreakerWorldLevelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,BrickBreakerWorldLevelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,BrickBreakerWorldLevelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelConfig>,false> *)(v2 + 96)) )
  {
    v56 = std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,BrickBreakerWorldLevelConfig>(v56);
    config = (std::tuple_element<1,const std::pair<unsigned int const,BrickBreakerWorldLevelConfig> >::type *)std::get<1ul,unsigned int const,BrickBreakerWorldLevelConfig>(v56);
    p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(config);
    }
    scene_config_ptr = LuaConfigMgr::findSceneScriptConfig(p_lua_config_mgr, config->scene_id);
    if ( scene_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->group_id);
      }
      group_info_config_ptr = SceneScriptConfig::findGroupInfoConfig(scene_config_ptr, config->group_id);
      if ( group_info_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&config->group_id);
        }
        group_id = config->group_id;
        group_script_config_ptr = SceneScriptConfig::findGroupScriptConfig(scene_config_ptr, group_id);
        if ( group_script_config_ptr )
        {
          if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(
              &group_info_config_ptr->is_dynamic_load,
              group_id,
              &group_info_config_ptr->is_dynamic_load);
          if ( !group_info_config_ptr->is_dynamic_load )
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
              "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
              "checkBrickBreakerWorldLevelExcelConfig",
              205);
            v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v20 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                    v19,
                    (const char (*)[69])byte_1AA21940);
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &config->group_id);
            v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v21,
                    (const char (*)[12])", level_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else if ( std::vector<unsigned int>::size(&config->transport_point_vec) > 1 )
          {
            __for_range_0 = &config->transport_point_vec;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 128, group_id);
            *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 160, group_id);
            *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
            while ( 1 )
            {
              v25 = (char *)(v2 + 160);
              if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
                break;
              *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
              v26 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
              v27 = (int *)v26;
              if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v26);
              }
              v28 = *v27;
              v29 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
              if ( v29 != 0 && v29 <= 3 )
              {
                LOBYTE(v25) = v29 != 0;
                __asan_report_store4(v2 + 48, v25);
              }
              *(_DWORD *)(v2 + 48) = v28;
              if ( !GroupScriptConfig::findPointConfig(group_script_config_ptr, *(unsigned int *)(v2 + 48)) )
              {
                *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 512, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 512),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
                  "checkBrickBreakerWorldLevelExcelConfig",
                  220);
                v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 512),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v31 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                        v30,
                        (const char (*)[56])byte_1AA21A40);
                v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, id);
                v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v32,
                        (const char (*)[12])", point_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v33,
                  (const unsigned int *)(v2 + 48));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
                *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
            }
            *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            if ( std::vector<unsigned int>::size(&config->stage_duration_vec) > 3 )
            {
              if ( std::vector<unsigned int>::size(&config->score_param_vec) > 5 )
              {
                p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
                if ( *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&config->gallery_id);
                }
                gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                                       p_gallery_config_mgr,
                                       config->gallery_id);
                if ( gallery_config_ptr )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)gallery_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3)
                                                                                      + 0x7FFF8000) )
                  {
                    __asan_report_load4(&gallery_config_ptr->type);
                  }
                  if ( gallery_config_ptr->type == GALLERY_TYPE_BRICK_BREAKER )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&gallery_config_ptr->control_group_id);
                    }
                    control_group_id = gallery_config_ptr->control_group_id;
                    if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->group_id >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4(&config->group_id);
                    }
                    if ( control_group_id != config->group_id )
                    {
                      *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 832, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 832),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
                        "checkBrickBreakerWorldLevelExcelConfig",
                        254);
                      v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 832),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v49 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
                              v48,
                              (const char (*)[81])byte_1AA21CC0);
                      v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v49,
                              &config->gallery_id);
                      v51 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                              v50,
                              (const char (*)[12])", level_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
                      *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 768, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 768),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
                      "checkBrickBreakerWorldLevelExcelConfig",
                      248);
                    v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 768),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v44 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                            v43,
                            (const char (*)[74])byte_1AA21C40);
                    v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v44,
                            &config->gallery_id);
                    v46 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                            v45,
                            (const char (*)[12])", level_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
                    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                }
                else
                {
                  *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 704, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 704),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
                    "checkBrickBreakerWorldLevelExcelConfig",
                    242);
                  v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 704),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v40 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                          v39,
                          (const char (*)[62])byte_1AA21BE0);
                  v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &config->gallery_id);
                  v42 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v41,
                          (const char (*)[12])", level_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
                  *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
              }
              else
              {
                *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 640, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 640),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
                  "checkBrickBreakerWorldLevelExcelConfig",
                  233);
                v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 640),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v37 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                        v36,
                        (const char (*)[77])byte_1AA21B60);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
                *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
            else
            {
              *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 576, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 576),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
                "checkBrickBreakerWorldLevelExcelConfig",
                227);
              v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 576),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v35 = common::milog::MiLogStream::operator<<<char [85],(char *[85])0>(
                      v34,
                      (const char (*)[85])byte_1AA21AE0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
              *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
          {
            *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 448, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 448),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
              "checkBrickBreakerWorldLevelExcelConfig",
              211);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 448),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v24 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                    v23,
                    (const char (*)[65])byte_1AA219C0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
            *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
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
            "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
            "checkBrickBreakerWorldLevelExcelConfig",
            199);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v15, (const char (*)[50])byte_1AA218E0);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->group_id);
          v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])", level_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
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
          "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
          "checkBrickBreakerWorldLevelExcelConfig",
          192);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v10, (const char (*)[50])byte_1AA218E0);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->group_id);
        v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
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
        "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
        "checkBrickBreakerWorldLevelExcelConfig",
        185);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v6, (const char (*)[50])byte_1AA21880);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->scene_id);
      v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])", level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelConfig>,false,false> *const)(v2 + 64));
  }
  if ( v64 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 112) & 0xFFFFFFF8) >> 3));
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
  }
  return ret;
};

// Line 263: range 0000000012ACD512-0000000012ACD757
int32_t __cdecl ActivityBrickBreakerExcelConfigMgr::rewriteConfig(
        ActivityBrickBreakerExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityBrickBreakerExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityBrickBreakerExcelConfigMgr::rewriteBrickBreakerWorldLevelExcelConfig(this, txt_config_mgr)
    || ActivityBrickBreakerExcelConfigMgr::rewriteBrickBreakerDungeonLevelExcelConfig(this, txt_config_mgr)
    || ActivityBrickBreakerExcelConfigMgr::rewriteBrickBreakerSkillExcelConfig(this, txt_config_mgr)
    || ActivityBrickBreakerExcelConfigMgr::rewriteBrickBreakerStageExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
      "rewriteConfig",
      269);
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

// Line 276: range 0000000012ACD758-0000000012ACED64
int32_t __cdecl ActivityBrickBreakerExcelConfigMgr::rewriteBrickBreakerWorldLevelExcelConfig(
        ActivityBrickBreakerExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  _DWORD *v6; // rax
  uint32_t scene_id; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t group_id; // ecx
  char v11; // dl
  std::vector<unsigned int> *p_duration_list; // rsi
  uint32_t gallery_id; // ecx
  char v14; // al
  std::vector<unsigned int> *p_score_param_list; // rsi
  bool is_hard; // cl
  char v17; // al
  BrickBreakerWorldLevelConfig *v18; // rdx
  const unsigned int *v19; // rcx
  BrickBreakerWorldLevelConfig *v20; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelConfig>,false,false>,bool> v21; // rax
  const unsigned int *v22; // r8
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  uint32_t *p_group_id; // rsi
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  char *v31; // rsi
  data::ElementType *v32; // rax
  int *v33; // rdx
  int v34; // ecx
  char v35; // al
  std::unordered_set<data::ElementType> *v36; // rax
  std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig> *p_world_level_group_config_map; // rdx
  const std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::key_type *p_world_level_id; // rcx
  __int64 v39; // rsi
  const std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::key_type *v40; // rsi
  std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig> *v41; // rdx
  char *v42; // rsi
  bool v43; // al
  _DWORD *v44; // rax
  BrickBreakerWorldLevelGroupConfig *v45; // r8
  __int64 v46; // rsi
  unsigned int v47; // ecx
  char v48; // al
  __int64 v49; // rsi
  unsigned int v50; // ecx
  char v51; // dl
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false>,bool> v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  _DWORD *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rdx
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  __int64 v68; // rsi
  unsigned int v69; // ecx
  char v70; // al
  __int64 v71; // rsi
  unsigned int v72; // ecx
  char v73; // dl
  _DWORD *v74; // rax
  int32_t ret; // [rsp+1Ch] [rbp-384h]
  data::BrickBreakerWorldLevelExcelConfigMap *__for_range; // [rsp+20h] [rbp-380h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig>,false,false>::reference v78; // [rsp+28h] [rbp-378h]
  std::tuple_element<0,std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig> >::type *id; // [rsp+30h] [rbp-370h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig> >::type *config; // [rsp+38h] [rbp-368h]
  const std::vector<data::ElementType> *__for_range_0; // [rsp+40h] [rbp-360h]
  BrickBreakerWorldLevelGroupConfig *level_group_config; // [rsp+48h] [rbp-358h]
  char v83[848]; // [rsp+50h] [rbp-350h] BYREF

  v2 = (unsigned __int64)v83;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 4 15 ban_element:300 64 8 15 __for_begin:278 96 8 13 __for_end:278 128 8 15 __for_begin:30"
                        "0 160 8 13 __for_end:300 192 8 8 iter:309 224 8 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown"
                        "> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 64 22 level_group_config:312 672 "
                        "96 22 world_level_config:280";
  *(_QWORD *)(v2 + 16) = ActivityBrickBreakerExcelConfigMgr::rewriteBrickBreakerWorldLevelExcelConfig;
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
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862740] = -218959118;
  v4[536862744] = -202116109;
  ret = 0;
  __for_range = &this->brick_breaker_world_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BrickBreakerWorldLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BrickBreakerWorldLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BrickBreakerWorldLevelExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::BrickBreakerWorldLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig>,false> *)(v2 + 96)) )
      break;
    v78 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::BrickBreakerWorldLevelExcelConfig>(v78);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BrickBreakerWorldLevelExcelConfig>(v78);
    v6 = (_DWORD *)(((v2 + 672) >> 3) + 2147450880);
    *v6 = 0;
    v6[1] = 0;
    v6[2] = 0;
    BrickBreakerWorldLevelConfig::BrickBreakerWorldLevelConfig((BrickBreakerWorldLevelConfig *const)(v2 + 672));
    if ( *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->scene_id);
    }
    scene_id = config->scene_id;
    v8 = *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v5) = v8 != 0;
      __asan_report_store4(v2 + 672, v5);
    }
    *(_DWORD *)(v2 + 672) = scene_id;
    v9 = (((_BYTE)config + 36) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->group_id);
    }
    group_id = config->group_id;
    v11 = *(_BYTE *)(((v2 + 676) >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((v2 - 92) & 7) + 3) >= v11 )
    {
      LOBYTE(v9) = v11 != 0;
      __asan_report_store4(v2 + 676, v9);
    }
    *(_DWORD *)(v2 + 676) = group_id;
    std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v2 + 680), &config->transport_point_list);
    p_duration_list = &config->duration_list;
    std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v2 + 704), &config->duration_list);
    if ( *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->gallery_id);
    }
    gallery_id = config->gallery_id;
    v14 = *(_BYTE *)(((v2 + 728) >> 3) + 0x7FFF8000);
    if ( v14 != 0 && v14 <= 3 )
    {
      LOBYTE(p_duration_list) = v14 != 0;
      __asan_report_store4(v2 + 728, p_duration_list);
    }
    *(_DWORD *)(v2 + 728) = gallery_id;
    p_score_param_list = &config->score_param_list;
    std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v2 + 736), &config->score_param_list);
    if ( *(char *)(((unsigned __int64)&config->is_hard >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->is_hard, p_score_param_list, &config->is_hard);
    is_hard = config->is_hard;
    v17 = *(_BYTE *)(((v2 + 760) >> 3) + 0x7FFF8000);
    if ( v17 < 0 )
    {
      LOBYTE(p_score_param_list) = v17 != 0;
      __asan_report_store1(v2 + 760, p_score_param_list, v2 + 760);
    }
    *(_BYTE *)(v2 + 760) = is_hard;
    v18 = std::move<BrickBreakerWorldLevelConfig &>((BrickBreakerWorldLevelConfig *)(v2 + 672));
    v21 = std::unordered_map<unsigned int,BrickBreakerWorldLevelConfig>::emplace<unsigned int const&,BrickBreakerWorldLevelConfig>(
            &this->world_level_config_map,
            id,
            v18,
            v19,
            v20);
    if ( !v21.second )
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
        "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
        "rewriteBrickBreakerWorldLevelExcelConfig",
        290);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v24 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v23, (const char (*)[46])byte_1AA21F20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      p_group_id = &config->group_id;
      v26 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
              &this->group_id_2_gallery_map,
              &config->group_id,
              &config->gallery_id,
              &config->group_id,
              v22);
      if ( !v26.second )
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
          "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
          "rewriteBrickBreakerWorldLevelExcelConfig",
          296);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v27, (const char (*)[48])byte_1AA21F80);
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, id);
        v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v29, (const char (*)[13])", group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &config->group_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        __for_range_0 = &config->ban_element_list;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 128, p_group_id);
        *(std::vector<data::ElementType>::const_iterator *)(v2 + 128) = std::vector<data::ElementType>::begin(__for_range_0);
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 160, p_group_id);
        *(std::vector<data::ElementType>::const_iterator *)(v2 + 160) = std::vector<data::ElementType>::end(__for_range_0);
        while ( 1 )
        {
          v31 = (char *)(v2 + 160);
          if ( !__gnu_cxx::operator!=<data::ElementType const*,std::vector<data::ElementType>>(
                  (const __gnu_cxx::__normal_iterator<const data::ElementType*,std::vector<data::ElementType> > *)(v2 + 128),
                  (const __gnu_cxx::__normal_iterator<const data::ElementType*,std::vector<data::ElementType> > *)(v2 + 160)) )
            break;
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
          v32 = (data::ElementType *)__gnu_cxx::__normal_iterator<data::ElementType const*,std::vector<data::ElementType>>::operator*((const __gnu_cxx::__normal_iterator<const data::ElementType*,std::vector<data::ElementType> > *const)(v2 + 128));
          v33 = (int *)v32;
          if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v32);
          }
          v34 = *v33;
          v35 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
          if ( v35 != 0 && v35 <= 3 )
          {
            LOBYTE(v31) = v35 != 0;
            __asan_report_store4(v2 + 48, v31);
          }
          *(_DWORD *)(v2 + 48) = v34;
          if ( *(_DWORD *)(v2 + 48) )
          {
            v36 = std::unordered_map<unsigned int,std::unordered_set<data::ElementType>>::operator[](
                    &this->level_ban_elem_map,
                    id);
            std::unordered_set<data::ElementType>::emplace<data::ElementType&>(
              v36,
              (data::ElementType *)(v2 + 48),
              (data::ElementType *)v36);
          }
          __gnu_cxx::__normal_iterator<data::ElementType const*,std::vector<data::ElementType>>::operator++((__gnu_cxx::__normal_iterator<const data::ElementType*,std::vector<data::ElementType> > *const)(v2 + 128));
        }
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        p_world_level_group_config_map = &this->world_level_group_config_map;
        p_world_level_id = &config->world_level_id;
        v39 = *(unsigned __int8 *)(((v2 + 192) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v39 )
          __asan_report_store8(v2 + 192, v39);
        v40 = p_world_level_id;
        *(std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::find(p_world_level_group_config_map, p_world_level_id);
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        v41 = &this->world_level_group_config_map;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, v40);
        *(std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::end(v41);
        v42 = (char *)(v2 + 224);
        v43 = std::__detail::operator==<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> *)(v2 + 192),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> *)(v2 + 224));
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
        if ( v43 )
        {
          v44 = (_DWORD *)(((v2 + 576) >> 3) + 2147450880);
          *v44 = 0;
          v44[1] = 0;
          BrickBreakerWorldLevelGroupConfig::BrickBreakerWorldLevelGroupConfig((BrickBreakerWorldLevelGroupConfig *const)(v2 + 576));
          if ( *(char *)(((unsigned __int64)&config->is_hard >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&config->is_hard, v42, &config->is_hard);
          if ( config->is_hard )
          {
            v46 = ((unsigned __int8)id & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(id);
            }
            v47 = *id;
            v48 = *(_BYTE *)(((v2 + 584) >> 3) + 0x7FFF8000);
            if ( v48 != 0 && v48 <= 3 )
            {
              LOBYTE(v46) = v48 != 0;
              __asan_report_store4(v2 + 584, v46);
            }
            *(_DWORD *)(v2 + 584) = v47;
          }
          else
          {
            v49 = ((unsigned __int8)id & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(id);
            }
            v50 = *id;
            v51 = *(_BYTE *)(((v2 + 580) >> 3) + 0x7FFF8000);
            if ( v51 != 0 && (char)(((v2 + 68) & 7) + 3) >= v51 )
            {
              LOBYTE(v49) = v51 != 0;
              __asan_report_store4(v2 + 580, v49);
            }
            *(_DWORD *)(v2 + 580) = v50;
          }
          v52 = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::emplace<unsigned int const&,BrickBreakerWorldLevelGroupConfig&>(
                  &this->world_level_group_config_map,
                  &config->world_level_id,
                  (BrickBreakerWorldLevelGroupConfig *)(v2 + 576),
                  (const unsigned int *)&this->world_level_group_config_map,
                  v45);
          if ( !v52.second )
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
              "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
              "rewriteBrickBreakerWorldLevelExcelConfig",
              323);
            v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v54 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
                    v53,
                    (const char (*)[80])byte_1AA22020);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &config->world_level_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          BrickBreakerWorldLevelGroupConfig::~BrickBreakerWorldLevelGroupConfig((BrickBreakerWorldLevelGroupConfig *const)(v2 + 576));
          v55 = (_DWORD *)(((v2 + 576) >> 3) + 2147450880);
          *v55 = -117901064;
          v55[1] = -117901064;
        }
        else
        {
          level_group_config = &std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false> *const)(v2 + 192))->second;
          if ( *(char *)(((unsigned __int64)&config->is_hard >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&config->is_hard, v42, &config->is_hard);
          if ( !config->is_hard )
            goto LABEL_79;
          if ( *(_BYTE *)(((unsigned __int64)&level_group_config->level_pair.second >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&level_group_config->level_pair.second >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&level_group_config->level_pair.second);
          }
          if ( level_group_config->level_pair.second )
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
              "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
              "rewriteBrickBreakerWorldLevelExcelConfig",
              333);
            v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 448),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v57 = common::milog::MiLogStream::operator<<<char [98],(char *[98])0>(
                    v56,
                    (const char (*)[98])byte_1AA220A0);
            v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, &config->world_level_id);
            v59 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v58,
                    (const char (*)[13])", level_id1:");
            v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, id);
            v61 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v60,
                    (const char (*)[13])", level_id2:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v61,
              &level_group_config->level_pair.second);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
            *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
LABEL_79:
            if ( *(char *)(((unsigned __int64)&config->is_hard >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&config->is_hard, v42, &config->is_hard);
            if ( config->is_hard )
              goto LABEL_88;
            v42 = (char *)((((_BYTE)level_group_config + 4) & 7u) + 3);
            if ( *(_BYTE *)(((unsigned __int64)&level_group_config->level_pair >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)level_group_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_group_config->level_pair >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&level_group_config->level_pair);
            }
            if ( level_group_config->level_pair.first )
            {
              *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 512, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 512),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
                "rewriteBrickBreakerWorldLevelExcelConfig",
                339);
              v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 512),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v63 = common::milog::MiLogStream::operator<<<char [98],(char *[98])0>(
                      v62,
                      (const char (*)[98])byte_1AA220A0);
              v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, &config->world_level_id);
              v65 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v64,
                      (const char (*)[13])", level_id1:");
              v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, id);
              v67 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v66,
                      (const char (*)[13])", level_id2:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v67,
                (const unsigned int *)&level_group_config->level_pair);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
              *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
LABEL_88:
              if ( *(char *)(((unsigned __int64)&config->is_hard >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(&config->is_hard, v42, &config->is_hard);
              if ( config->is_hard )
              {
                v68 = ((unsigned __int8)id & 7u) + 3;
                if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(id);
                }
                v69 = *id;
                v70 = *(_BYTE *)(((unsigned __int64)&level_group_config->level_pair.second >> 3) + 0x7FFF8000);
                if ( v70 != 0 && v70 <= 3 )
                {
                  LOBYTE(v68) = v70 != 0;
                  __asan_report_store4(&level_group_config->level_pair.second, v68);
                }
                level_group_config->level_pair.second = v69;
              }
              else
              {
                v71 = ((unsigned __int8)id & 7u) + 3;
                if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(id);
                }
                v72 = *id;
                v73 = *(_BYTE *)(((unsigned __int64)&level_group_config->level_pair >> 3) + 0x7FFF8000);
                if ( v73 != 0 && (char)((((_BYTE)level_group_config + 4) & 7) + 3) >= v73 )
                {
                  LOBYTE(v71) = v73 != 0;
                  __asan_report_store4(&level_group_config->level_pair, v71);
                }
                level_group_config->level_pair.first = v72;
              }
            }
          }
        }
      }
    }
    BrickBreakerWorldLevelConfig::~BrickBreakerWorldLevelConfig((BrickBreakerWorldLevelConfig *const)(v2 + 672));
    v74 = (_DWORD *)(((v2 + 672) >> 3) + 2147450880);
    *v74 = -117901064;
    v74[1] = -117901064;
    v74[2] = -117901064;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig>,false,false> *const)(v2 + 64));
  }
  if ( v83 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return ret;
};

// Line 357: range 0000000012ACED66-0000000012ACF323
int32_t __cdecl ActivityBrickBreakerExcelConfigMgr::rewriteBrickBreakerDungeonLevelExcelConfig(
        ActivityBrickBreakerExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *p_group_id; // rsi
  const unsigned int *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  char *v12; // rsi
  data::ElementType *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  std::unordered_set<data::ElementType> *v17; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-14Ch]
  data::BrickBreakerDungeonLevelExcelConfigMap *__for_range; // [rsp+18h] [rbp-148h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false,false>::reference v21; // [rsp+20h] [rbp-140h]
  std::tuple_element<0,std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig> >::type *id; // [rsp+28h] [rbp-138h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig> >::type *config; // [rsp+30h] [rbp-130h]
  const std::vector<data::ElementType> *__for_range_0; // [rsp+38h] [rbp-128h]
  char v25[288]; // [rsp+40h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 15 ban_element:367 64 8 15 __for_begin:359 96 8 13 __for_end:359 128 8 15 __for_begin:367"
                        " 160 8 13 __for_end:367 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBrickBreakerExcelConfigMgr::rewriteBrickBreakerDungeonLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->brick_breaker_dungeon_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BrickBreakerDungeonLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BrickBreakerDungeonLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BrickBreakerDungeonLevelExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::BrickBreakerDungeonLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false> *)(v2 + 96)) )
  {
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>(v21);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>(v21);
    p_group_id = &config->group_id;
    v7 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->group_id_2_gallery_map,
           p_group_id,
           &config->gallery_id,
           p_group_id,
           v6);
    if ( !v7.second )
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
        "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
        "rewriteBrickBreakerDungeonLevelExcelConfig",
        363);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v8, (const char (*)[45])byte_1AA222C0);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])", group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      __for_range_0 = &config->ban_element_list;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, p_group_id);
      *(std::vector<data::ElementType>::const_iterator *)(v2 + 128) = std::vector<data::ElementType>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, p_group_id);
      *(std::vector<data::ElementType>::const_iterator *)(v2 + 160) = std::vector<data::ElementType>::end(__for_range_0);
      while ( 1 )
      {
        v12 = (char *)(v2 + 160);
        if ( !__gnu_cxx::operator!=<data::ElementType const*,std::vector<data::ElementType>>(
                (const __gnu_cxx::__normal_iterator<const data::ElementType*,std::vector<data::ElementType> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<const data::ElementType*,std::vector<data::ElementType> > *)(v2 + 160)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v13 = (data::ElementType *)__gnu_cxx::__normal_iterator<data::ElementType const*,std::vector<data::ElementType>>::operator*((const __gnu_cxx::__normal_iterator<const data::ElementType*,std::vector<data::ElementType> > *const)(v2 + 128));
        v14 = (int *)v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        v15 = *v14;
        v16 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v16 != 0 && v16 <= 3 )
        {
          LOBYTE(v12) = v16 != 0;
          __asan_report_store4(v2 + 48, v12);
        }
        *(_DWORD *)(v2 + 48) = v15;
        if ( *(_DWORD *)(v2 + 48) )
        {
          v17 = std::unordered_map<unsigned int,std::unordered_set<data::ElementType>>::operator[](
                  &this->level_ban_elem_map,
                  id);
          std::unordered_set<data::ElementType>::emplace<data::ElementType&>(
            v17,
            (data::ElementType *)(v2 + 48),
            (data::ElementType *)v17);
        }
        __gnu_cxx::__normal_iterator<data::ElementType const*,std::vector<data::ElementType>>::operator++((__gnu_cxx::__normal_iterator<const data::ElementType*,std::vector<data::ElementType> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v25 == (char *)v2 )
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

// Line 380: range 0000000012ACF324-0000000012ACFCC9
int32_t __cdecl ActivityBrickBreakerExcelConfigMgr::checkBrickBreakerDungeonLevelExcelConfig(
        ActivityBrickBreakerExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  uint32_t *p_dungeon_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  uint32_t control_group_id; // ecx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1B4h]
  data::BrickBreakerDungeonLevelExcelConfigMap *__for_range; // [rsp+20h] [rbp-1B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false,false>::reference v26; // [rsp+28h] [rbp-1A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig> >::type *id; // [rsp+30h] [rbp-1A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig> >::type *config; // [rsp+38h] [rbp-198h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+48h] [rbp-188h]
  char v30[384]; // [rsp+50h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:382 64 8 13 __for_end:382 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBrickBreakerExcelConfigMgr::checkBrickBreakerDungeonLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  ret = 0;
  __for_range = &this->brick_breaker_dungeon_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BrickBreakerDungeonLevelExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::BrickBreakerDungeonLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BrickBreakerDungeonLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BrickBreakerDungeonLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    v26 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>(v26);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>(v26);
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    p_dungeon_id = &config->dungeon_id;
    if ( *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_dungeon_id);
    }
    if ( data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, config->dungeon_id) )
    {
      p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->gallery_id);
      }
      gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                             p_gallery_config_mgr,
                             config->gallery_id);
      if ( gallery_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gallery_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&gallery_config_ptr->type);
        }
        if ( gallery_config_ptr->type == GALLERY_TYPE_BRICK_BREAKER )
        {
          if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&gallery_config_ptr->control_group_id);
          }
          control_group_id = gallery_config_ptr->control_group_id;
          if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->group_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&config->group_id);
          }
          if ( control_group_id != config->group_id )
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
              "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
              "checkBrickBreakerDungeonLevelExcelConfig",
              407);
            v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 288),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v20 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                    v19,
                    (const char (*)[78])byte_1AA22540);
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &config->gallery_id);
            v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v21,
                    (const char (*)[12])", level_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, id);
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
            "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
            "checkBrickBreakerDungeonLevelExcelConfig",
            401);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(v14, (const char (*)[71])byte_1AA224C0);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->gallery_id);
          v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])", level_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id);
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
          "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
          "checkBrickBreakerDungeonLevelExcelConfig",
          395);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v10, (const char (*)[59])byte_1AA22460);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->gallery_id);
        v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
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
        "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
        "checkBrickBreakerDungeonLevelExcelConfig",
        387);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             v7,
             (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v30 == (char *)v2 )
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

// Line 416: range 0000000012ACFCCA-0000000012ACFE8B
const BrickBreakerWorldLevelConfig *__fastcall ActivityBrickBreakerExcelConfigMgr::findWorldLevelConfig(
        const ActivityBrickBreakerExcelConfigMgr *const this,
        __int64 level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,BrickBreakerWorldLevelConfig> *p_world_level_config_map; // rdx
  std::unordered_map<unsigned int,BrickBreakerWorldLevelConfig> *v6; // rdx
  bool v7; // al
  const BrickBreakerWorldLevelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 level_id:415 64 8 8 iter:417 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBrickBreakerExcelConfigMgr::findWorldLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  p_world_level_config_map = &this->world_level_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::unordered_map<unsigned int,BrickBreakerWorldLevelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,BrickBreakerWorldLevelConfig>::find(
                                                                                                  p_world_level_config_map,
                                                                                                  (const std::unordered_map<unsigned int,BrickBreakerWorldLevelConfig>::key_type *)(v2 + 48));
  v6 = &this->world_level_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,BrickBreakerWorldLevelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,BrickBreakerWorldLevelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,BrickBreakerWorldLevelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 426: range 0000000012ACFE8C-0000000012AD0087
__int64 __fastcall ActivityBrickBreakerExcelConfigMgr::findGalleryIdByGroupId(
        const ActivityBrickBreakerExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_group_id_2_gallery_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:425 64 8 8 iter:427 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBrickBreakerExcelConfigMgr::findGalleryIdByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_id_2_gallery_map = &this->group_id_2_gallery_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_group_id_2_gallery_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->group_id_2_gallery_map;
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

// Line 436: range 0000000012AD0088-0000000012AD02D4
std::unordered_set<data::ElementType> *__fastcall ActivityBrickBreakerExcelConfigMgr::findBanElemSetByLevelId(
        std::unordered_set<data::ElementType> *retstr,
        std::unordered_set<data::ElementType> *this,
        uint32_t level_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::unordered_map<unsigned int,std::unordered_set<data::ElementType>> *p_level_ban_elem_map; // rdx
  const std::unordered_map<unsigned int,std::unordered_set<data::ElementType>> *v7; // rdx
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<data::ElementType> >,false,false>::pointer v9; // rax
  const ActivityBrickBreakerExcelConfigMgr *thisa; // [rsp+10h] [rbp-B0h]
  char v13[160]; // [rsp+20h] [rbp-A0h] BYREF

  thisa = (const ActivityBrickBreakerExcelConfigMgr *)this;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 level_id:435 64 8 8 iter:438 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBrickBreakerExcelConfigMgr::findBanElemSetByLevelId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = level_id;
  if ( !(_BYTE)`guard variable for'ActivityBrickBreakerExcelConfigMgr::findBanElemSetByLevelId(unsigned int)::empty_set
    && __cxa_guard_acquire(&`guard variable for'ActivityBrickBreakerExcelConfigMgr::findBanElemSetByLevelId(unsigned int)::empty_set) )
  {
    std::unordered_set<data::ElementType>::unordered_set(&ActivityBrickBreakerExcelConfigMgr::findBanElemSetByLevelId(unsigned int)const::empty_set);
    __cxa_guard_release(&`guard variable for'ActivityBrickBreakerExcelConfigMgr::findBanElemSetByLevelId(unsigned int)::empty_set);
    this = &ActivityBrickBreakerExcelConfigMgr::findBanElemSetByLevelId(unsigned int)const::empty_set;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_set<data::ElementType>::~unordered_set,
      &ActivityBrickBreakerExcelConfigMgr::findBanElemSetByLevelId(unsigned int)const::empty_set,
      &_dso_handle);
  }
  p_level_ban_elem_map = &thisa->level_ban_elem_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,std::unordered_set<data::ElementType>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_set<data::ElementType>>::find(p_level_ban_elem_map, (const std::unordered_map<unsigned int,std::unordered_set<data::ElementType>>::key_type *)(v3 + 48));
  v7 = &thisa->level_ban_elem_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::unordered_set<data::ElementType>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_set<data::ElementType>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_set<data::ElementType>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<data::ElementType> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<data::ElementType> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    std::unordered_set<data::ElementType>::unordered_set(
      retstr,
      &ActivityBrickBreakerExcelConfigMgr::findBanElemSetByLevelId(unsigned int)const::empty_set);
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<data::ElementType>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<data::ElementType> >,false,false> *const)(v3 + 64));
    std::unordered_set<data::ElementType>::unordered_set(retstr, &v9->second);
  }
  if ( v13 == (char *)v3 )
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
  return retstr;
};

// Line 447: range 0000000012AD02D6-0000000012AD0C9D
__int64 __fastcall ActivityBrickBreakerExcelConfigMgr::findBornPosRot(
        const ActivityBrickBreakerExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t order,
        uint32_t level_id,
        unsigned __int64 born_pos,
        unsigned __int64 born_rot)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  std::vector<unsigned int>::size_type v12; // r14
  common::milog::MiLogStream *v13; // r14
  std::vector<unsigned int>::size_type v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::vector<unsigned int>::size_type v17; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v18; // rax
  int *v19; // rdx
  int v20; // ecx
  char v21; // al
  common::milog::MiLogStream *v22; // rax
  LuaConfigMgr *lua_config_mgr; // [rsp+38h] [rbp-1D8h]
  const BrickBreakerWorldLevelConfig *world_level_config_ptr; // [rsp+40h] [rbp-1D0h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+50h] [rbp-1C0h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+58h] [rbp-1B8h]
  char v31[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v6 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(384LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "8 48 4 18 born_config_id:470 64 4 9 order:446 80 4 12 level_id:446 96 8 9 <unknown> 128 32 9 <un"
                        "known> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ActivityBrickBreakerExcelConfigMgr::findBornPosRot;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -234556924;
  v8[536862723] = -218959360;
  v8[536862725] = -218959118;
  v8[536862727] = -218959118;
  v8[536862729] = -218959118;
  v8[536862731] = -202116109;
  *(_DWORD *)(v6 + 64) = order;
  *(_DWORD *)(v6 + 80) = level_id;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  world_level_config_ptr = ActivityBrickBreakerExcelConfigMgr::findWorldLevelConfig(this, *(unsigned int *)(v6 + 80));
  if ( world_level_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)world_level_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->group_id >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&world_level_config_ptr->group_id);
    }
    group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, world_level_config_ptr->group_id);
    if ( group_script_config_ptr )
    {
      v12 = *(unsigned int *)(v6 + 64);
      if ( v12 < std::vector<unsigned int>::size(&world_level_config_ptr->transport_point_vec) )
      {
        v17 = *(unsigned int *)(v6 + 64);
        v18 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &world_level_config_ptr->transport_point_vec,
                                                                                                    v17);
        v19 = (int *)v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        v20 = *v19;
        v21 = *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000);
        if ( v21 != 0 && v21 <= 3 )
        {
          LOBYTE(v17) = v21 != 0;
          __asan_report_store4(v6 + 48, v17);
        }
        *(_DWORD *)(v6 + 48) = v20;
        point_script_config_ptr = GroupScriptConfig::findPointConfig(
                                    group_script_config_ptr,
                                    *(unsigned int *)(v6 + 48));
        if ( point_script_config_ptr )
        {
          if ( (char)(born_pos & 7) >= *(_BYTE *)((born_pos >> 3) + 0x7FFF8000)
            && *(_BYTE *)((born_pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((born_pos + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((born_pos + 11) & 7) >= *(_BYTE *)(((born_pos + 11) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(born_pos, 12LL);
          }
          if ( (((unsigned __int8)point_script_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3)
                                                                                + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_script_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_script_config_ptr->pos, 12LL);
          }
          *(_QWORD *)born_pos = *(_QWORD *)&point_script_config_ptr->pos.x;
          *(float *)(born_pos + 8) = point_script_config_ptr->pos.z;
          if ( (char)(born_rot & 7) >= *(_BYTE *)((born_rot >> 3) + 0x7FFF8000)
            && *(_BYTE *)((born_rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((born_rot + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((born_rot + 11) & 7) >= *(_BYTE *)(((born_rot + 11) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(born_rot, 12LL);
          }
          if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
          }
          *(_QWORD *)born_rot = *(_QWORD *)&point_script_config_ptr->rot.x;
          *(float *)(born_rot + 8) = point_script_config_ptr->rot.z;
          result = 0LL;
        }
        else
        {
          if ( *(char *)(((v6 + 320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 351) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 351) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 320, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 320),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
            "findBornPosRot",
            474);
          v22 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  (common::milog::MiLogStream *const)(v6 + 320),
                  (const char (*)[56])"[BrickBreaker] findPointConfig failed, born_config_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v6 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 320));
          result = 0xFFFFFFFFLL;
        }
      }
      else
      {
        if ( *(char *)(((v6 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 31) & 7) >= *(_BYTE *)(((v6 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
          "findBornPosRot",
          467);
        v13 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                (common::milog::MiLogStream *const)(v6 + 256),
                (const char (*)[57])"[BrickBreaker] transport_point_vec size too small, size:");
        v14 = std::vector<unsigned int>::size(&world_level_config_ptr->transport_point_vec);
        if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) )
          v14 = __asan_report_store8(v6 + 96, "[BrickBreaker] transport_point_vec size too small, size:");
        *(_QWORD *)(v6 + 96) = v14;
        v15 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v13,
                (const unsigned __int64 *)(v6 + 96));
        v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])" order:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v6 + 64));
        *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 256));
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      if ( *(char *)(((v6 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v6 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v6 - 33) & 7) >= *(_BYTE *)(((v6 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v6 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
        "findBornPosRot",
        461);
      v11 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
              (common::milog::MiLogStream *const)(v6 + 192),
              (const char (*)[61])"[BrickBreaker] findGroupScriptConfig failed, born_group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &world_level_config_ptr->group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    if ( *(char *)(((v6 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 - 97) & 7) >= *(_BYTE *)(((v6 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityBrickBreakerExcelConfig.cpp",
      "findBornPosRot",
      453);
    v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           (common::milog::MiLogStream *const)(v6 + 128),
           (const char (*)[58])"[BrickBreaker] can not find world level config, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v6 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 128));
    result = 0xFFFFFFFFLL;
  }
  if ( v31 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
