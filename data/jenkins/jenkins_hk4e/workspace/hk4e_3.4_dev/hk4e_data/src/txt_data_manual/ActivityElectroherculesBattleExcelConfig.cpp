// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityElectroherculesBattleExcelConfig.cpp

// Line 20: range 0000000012B07622-0000000012B0795E
int32_t __cdecl ActivityElectroherculesBattleExcelConfigMgr::checkConfig(
        ActivityElectroherculesBattleExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
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
  *(_QWORD *)(v2 + 16) = ActivityElectroherculesBattleExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivityElectroherculesBattleExcelConfigMgr::checkElectroherculesStageExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityElectroherculesBattleExcelConfig.cpp",
      "checkConfig",
      23);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v5, (const char (*)[62])byte_1AA2E6E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( ActivityElectroherculesBattleExcelConfigMgr::checkElectroherculesLevelExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityElectroherculesBattleExcelConfig.cpp",
      "checkConfig",
      28);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(v6, (const char (*)[67])byte_1AA2E740);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
  }
  result = 0;
  if ( v8 == (char *)v2 )
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

// Line 35: range 0000000012B07960-0000000012B07E69
int32_t __cdecl ActivityElectroherculesBattleExcelConfigMgr::rewriteConfig(
        ActivityElectroherculesBattleExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  data::ElectroherculesBattleLevelExcelConfigMap *p_electrohercules_battle_level_excel_config_map; // rdx
  data::ElectroherculesBattleLevelExcelConfigMap *v7; // rdx
  bool v8; // al
  unsigned int *p_level_id; // r15
  data::ElectroherculesBattleLevelDifficulty *p_level_difficulty; // rdx
  std::tuple<unsigned int,data::ElectroherculesBattleLevelDifficulty> *v11; // rcx
  unsigned int *v12; // r8
  int32_t result; // eax
  data::ElectroherculesBattleStageExcelConfigMap *__for_range; // [rsp+30h] [rbp-160h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false,false>::reference v15; // [rsp+38h] [rbp-158h]
  std::tuple_element<0,std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig> >::type *stage_id; // [rsp+40h] [rbp-150h]
  std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-140h]
  const unsigned int *level_id; // [rsp+58h] [rbp-138h]
  char v19[304]; // [rsp+60h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 14 __for_begin:37 64 8 12 __for_end:37 96 8 14 __for_begin:39 128 8 12 __for_end:39 160 8"
                        " 7 iter:41 192 8 9 <unknown> 224 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityElectroherculesBattleExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -202116352;
  __for_range = &this->electrohercules_battle_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ElectroherculesBattleStageExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ElectroherculesBattleStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ElectroherculesBattleStageExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ElectroherculesBattleStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false> *)(v2 + 64)) )
      break;
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false,false> *const)(v2 + 32));
    stage_id = std::get<0ul,unsigned int const,data::ElectroherculesBattleStageExcelConfig>(v15);
    __for_range_0 = &std::get<1ul,unsigned int const,data::ElectroherculesBattleStageExcelConfig>(v15)->level_id_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 96) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128)) )
    {
      level_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      p_electrohercules_battle_level_excel_config_map = &this->electrohercules_battle_level_excel_config_map;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v2 + 128);
      *(std::unordered_map<unsigned int,data::ElectroherculesBattleLevelExcelConfig>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,data::ElectroherculesBattleLevelExcelConfig>::find(p_electrohercules_battle_level_excel_config_map, level_id);
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      v7 = &this->electrohercules_battle_level_excel_config_map;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, level_id);
      *(std::unordered_map<unsigned int,data::ElectroherculesBattleLevelExcelConfig>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,data::ElectroherculesBattleLevelExcelConfig>::end(v7);
      v8 = std::__detail::operator!=<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false> *)(v2 + 160),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false> *)(v2 + 192));
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v8 )
      {
        p_level_id = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false,false> *const)(v2 + 160))->second.level_id;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        p_level_difficulty = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false,false> *const)(v2 + 160))->second.level_difficulty;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, v2 + 192);
        std::make_tuple<unsigned int const&,data::ElectroherculesBattleLevelDifficulty &>(
          (const unsigned int *)(v2 + 224),
          (data::ElectroherculesBattleLevelDifficulty *)stage_id,
          (const unsigned int *)p_level_difficulty,
          (data::ElectroherculesBattleLevelDifficulty *)stage_id);
        std::unordered_map<std::tuple<unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int> const,unsigned int>>>::emplace<std::tuple<unsigned int,data::ElectroherculesBattleLevelDifficulty>,unsigned int &>(
          &this->difficulty_level_map_,
          (std::tuple<unsigned int,data::ElectroherculesBattleLevelDifficulty> *)(v2 + 224),
          p_level_id,
          v11,
          v12);
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      }
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
  if ( v19 == (char *)v2 )
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

// Line 52: range 0000000012B07E6A-0000000012B08506
int32_t __cdecl ActivityElectroherculesBattleExcelConfigMgr::checkElectroherculesStageExcelConfig(
        const ActivityElectroherculesBattleExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
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
  data::ElectroherculesBattleLevelExcelConfigMap *p_electrohercules_battle_level_excel_config_map; // rdx
  data::ElectroherculesBattleLevelExcelConfigMap *v13; // rdx
  bool v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // edx
  int v20; // edx
  int v21; // eax
  int32_t result; // eax
  data::ElectroherculesBattleStageExcelConfigMap *__for_range; // [rsp+18h] [rbp-198h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false,false>::reference v24; // [rsp+20h] [rbp-190h]
  std::tuple_element<0,std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig> >::type *id; // [rsp+28h] [rbp-188h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-178h]
  char v27[368]; // [rsp+40h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 11 level_id:55 64 8 14 __for_begin:53 96 8 12 __for_end:53 128 8 14 __for_begin:55 160 8 "
                        "12 __for_end:55 192 8 20 level_config_iter:57 224 8 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityElectroherculesBattleExcelConfigMgr::checkElectroherculesStageExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -202116109;
  __for_range = &this->electrohercules_battle_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ElectroherculesBattleStageExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ElectroherculesBattleStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ElectroherculesBattleStageExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ElectroherculesBattleStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false> *)(v3 + 96)) )
      break;
    v24 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::ElectroherculesBattleStageExcelConfig>(v24);
    __for_range_0 = &std::get<1ul,unsigned int const,data::ElectroherculesBattleStageExcelConfig>(v24)->level_id_list;
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
      p_electrohercules_battle_level_excel_config_map = &this->electrohercules_battle_level_excel_config_map;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v7);
      *(std::unordered_map<unsigned int,data::ElectroherculesBattleLevelExcelConfig>::const_iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::ElectroherculesBattleLevelExcelConfig>::find(p_electrohercules_battle_level_excel_config_map, (const std::unordered_map<unsigned int,data::ElectroherculesBattleLevelExcelConfig>::key_type *)(v3 + 48));
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      v13 = &this->electrohercules_battle_level_excel_config_map;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v3 + 48);
      *(std::unordered_map<unsigned int,data::ElectroherculesBattleLevelExcelConfig>::const_iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::ElectroherculesBattleLevelExcelConfig>::end(v13);
      v14 = std::__detail::operator==<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false> *)(v3 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false> *)(v3 + 224));
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
          "./src/txt_data_manual/ActivityElectroherculesBattleExcelConfig.cpp",
          "checkElectroherculesStageExcelConfig",
          60);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v15, (const char (*)[45])byte_1AA2E980);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
        v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])", level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v19 = 0;
      }
      else
      {
        v19 = 1;
      }
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v19 != 1 )
      {
        v20 = 0;
        goto LABEL_33;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    v20 = 1;
LABEL_33:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v20 != 1 )
    {
      v21 = 0;
      goto LABEL_37;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false,false> *const)(v3 + 64));
  }
  v21 = 1;
LABEL_37:
  if ( v21 == 1 )
    v2 = 0;
  result = v2;
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 70: range 0000000012B08508-0000000012B09086
int32_t __cdecl ActivityElectroherculesBattleExcelConfigMgr::checkElectroherculesLevelExcelConfig(
        const ActivityElectroherculesBattleExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  LuaConfigMgr *v10; // rcx
  __int64 group_id; // rsi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-1FCh]
  data::ElectroherculesBattleLevelExcelConfigMap *__for_range; // [rsp+18h] [rbp-1F8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false,false>::reference v33; // [rsp+20h] [rbp-1F0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig> >::type *id; // [rsp+28h] [rbp-1E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig> >::type *level_excel_config; // [rsp+30h] [rbp-1E0h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+40h] [rbp-1D0h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+48h] [rbp-1C8h]
  char v38[448]; // [rsp+50h] [rbp-1C0h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 14 __for_begin:72 64 8 12 __for_end:72 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unk"
                        "nown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityElectroherculesBattleExcelConfigMgr::checkElectroherculesLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  ret = 0;
  __for_range = &this->electrohercules_battle_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ElectroherculesBattleLevelExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ElectroherculesBattleLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ElectroherculesBattleLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ElectroherculesBattleLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    v33 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::ElectroherculesBattleLevelExcelConfig>(v33);
    level_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ElectroherculesBattleLevelExcelConfig>(v33);
    p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&level_excel_config->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_excel_config->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&level_excel_config->group_id);
    }
    if ( LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, level_excel_config->group_id) )
    {
      v10 = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&level_excel_config->group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_excel_config->group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&level_excel_config->group_id);
      }
      group_id = level_excel_config->group_id;
      group_info_config_ptr = LuaConfigMgr::findGroupInfoConfig(v10, group_id);
      if ( group_info_config_ptr )
      {
        if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(
            &group_info_config_ptr->is_dynamic_load,
            group_id,
            &group_info_config_ptr->is_dynamic_load);
        if ( !group_info_config_ptr->is_dynamic_load )
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
            "./src/txt_data_manual/ActivityElectroherculesBattleExcelConfig.cpp",
            "checkElectroherculesLevelExcelConfig",
            91);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v16, (const char (*)[44])byte_1AA2EBA0);
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  &level_excel_config->group_id);
          v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])", level_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
          p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&level_excel_config->gallery_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_excel_config->gallery_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&level_excel_config->gallery_id);
          }
          gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                                 p_gallery_config_mgr,
                                 level_excel_config->gallery_id);
          if ( gallery_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)gallery_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4(&gallery_config_ptr->type);
            }
            if ( gallery_config_ptr->type != GALLERY_TYPE_ELECTROHERCULES_BATTLE )
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
                "./src/txt_data_manual/ActivityElectroherculesBattleExcelConfig.cpp",
                "checkElectroherculesLevelExcelConfig",
                106);
              v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 352),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v26 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                      v25,
                      (const char (*)[52])byte_1AA2EC60);
              v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v26,
                      &level_excel_config->gallery_id);
              v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v27,
                      (const char (*)[12])", level_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
              *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
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
              "./src/txt_data_manual/ActivityElectroherculesBattleExcelConfig.cpp",
              "checkElectroherculesLevelExcelConfig",
              100);
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 288),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v22 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    v21,
                    (const char (*)[43])"findGalleryExcelConfig failed, gallery_id:");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    &level_excel_config->gallery_id);
            v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v23,
                    (const char (*)[12])", level_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
            *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
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
          "./src/txt_data_manual/ActivityElectroherculesBattleExcelConfig.cpp",
          "checkElectroherculesLevelExcelConfig",
          85);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                v12,
                (const char (*)[38])"findGroupInfoConfig failed, group_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &level_excel_config->group_id);
        v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])", level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
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
        "./src/txt_data_manual/ActivityElectroherculesBattleExcelConfig.cpp",
        "checkElectroherculesLevelExcelConfig",
        78);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             v6,
             (const char (*)[40])"findGroupScriptConfig failed, group_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &level_excel_config->group_id);
      v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])", level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ElectroherculesBattleLevelExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 116: range 0000000012B09088-0000000012B0932B
const data::ElectroherculesBattleLevelExcelConfig *__fastcall ActivityElectroherculesBattleExcelConfigMgr::findLevelConfigByStageAndDifficulty(
        const ActivityElectroherculesBattleExcelConfigMgr *const this,
        __int64 stage_id,
        uint32_t difficulty)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<std::tuple<unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int>,unsigned int> > > *p_difficulty_level_map; // rdx
  bool v7; // al
  const data::ElectroherculesBattleLevelExcelConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<const std::tuple<unsigned int,unsigned int>,unsigned int>,false,true>::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v12[208]; // [rsp+10h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 12 stage_id:115 48 4 14 difficulty:115 64 8 14 level_iter:117 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityElectroherculesBattleExcelConfigMgr::findLevelConfigByStageAndDifficulty;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 32) = stage_id;
  *(_DWORD *)(v3 + 48) = difficulty;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, stage_id);
  std::make_tuple<unsigned int &,unsigned int &>(
    (unsigned int *)(v3 + 96),
    (unsigned int *)(v3 + 32),
    (unsigned int *)(v3 + 48),
    (unsigned int *)(v3 + 32));
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v3 + 32);
  *(std::unordered_map<std::tuple<unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int>,unsigned int> > >::const_iterator *)(v3 + 64) = std::unordered_map<std::tuple<unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int> const,unsigned int>>>::find(&this->difficulty_level_map_, (const std::unordered_map<std::tuple<unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int>,unsigned int> > >::key_type *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_difficulty_level_map = &this->difficulty_level_map_;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v3 + 96);
  *(std::unordered_map<std::tuple<unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int>,unsigned int> > >::const_iterator *)(v3 + 128) = std::unordered_map<std::tuple<unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int> const,unsigned int>>>::end(p_difficulty_level_map);
  v7 = std::__detail::operator==<std::pair<std::tuple<unsigned int,unsigned int> const,unsigned int>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::tuple<unsigned int,unsigned int>,unsigned int>,true> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const std::tuple<unsigned int,unsigned int>,unsigned int>,true> *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<std::tuple<unsigned int,unsigned int> const,unsigned int>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::tuple<unsigned int,unsigned int>,unsigned int>,false,true> *const)(v3 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = data::ActivityElectroherculesBattleExcelConfigMgrBase::findElectroherculesBattleLevelExcelConfig(
               this,
               v9->second);
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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
