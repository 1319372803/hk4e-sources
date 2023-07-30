// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp

// Line 20: range 0000000012E36C9A-0000000012E36CBE
int32_t __cdecl ActivityTreasureMapExcelConfigMgr::checkConfig(
        ActivityTreasureMapExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return ActivityTreasureMapExcelConfigMgr::checkTreasureMapConfig(this, txt_config_mgr);
};

// Line 25: range 0000000012E36CC0-0000000012E385F7
int32_t __cdecl ActivityTreasureMapExcelConfigMgr::checkTreasureMapConfig(
        ActivityTreasureMapExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::TreasureMapRegionExcelConfigMap *p_treasure_map_region_excel_config_map; // rcx
  int v7; // edi
  char v8; // al
  data::TreasureMapRegionExcelConfigMap *v9; // rdx
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false>::pointer v13; // rax
  uint32_t *p_unlock_day; // rax
  common::milog::MiLogStream *v15; // rdi
  common::milog::MiLogStream *p_mp_type_id; // rdi
  common::milog::MiLogStream *p_mp_group_id; // rdi
  common::milog::MiLogStream *v18; // rdi
  uint32_t *p_fragment_bonus_id; // rsi
  std::vector<unsigned int> *v20; // rcx
  int v21; // edi
  char v22; // al
  data::TreasureMapBonusRegionExcelConfigMap *p_treasure_map_bonus_region_excel_config_map; // rcx
  int v24; // edi
  char v25; // al
  data::TreasureMapBonusRegionExcelConfigMap *v26; // rdx
  bool v27; // al
  common::milog::MiLogStream *v28; // rax
  int v29; // edx
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>::pointer v30; // rax
  uint32_t *p_fragment_num; // rax
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_bonus_to_fragment_regions_map; // rcx
  int v33; // edi
  char v34; // al
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v35; // rdx
  bool v36; // al
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v37; // rax
  common::milog::MiLogStream *v38; // rdi
  common::milog::MiLogStream *v39; // rcx
  std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::size_type v40; // r14
  common::milog::MiLogStream *v41; // rax
  int32_t ret; // [rsp+14h] [rbp-41Ch]
  uint32_t prev_unlock_day; // [rsp+18h] [rbp-418h]
  uint32_t region_num; // [rsp+1Ch] [rbp-414h]
  size_t i; // [rsp+20h] [rbp-410h]
  size_t i_0; // [rsp+28h] [rbp-408h]
  data::BonusTreasureSolutionExcelConfigMap *__for_range; // [rsp+30h] [rbp-400h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false,false>::reference v50; // [rsp+38h] [rbp-3F8h]
  std::tuple_element<0,std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig> >::type *id; // [rsp+40h] [rbp-3F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig> >::type *solution_config; // [rsp+48h] [rbp-3E8h]
  data::TreasureMapBonusRegionExcelConfig *bonus_config; // [rsp+50h] [rbp-3E0h]
  const data::TreasureMapRegionExcelConfig *region_config; // [rsp+58h] [rbp-3D8h]
  char v55[976]; // [rsp+60h] [rbp-3D0h] BYREF

  v3 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(928LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "21 32 4 9 <unknown> 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 8 7 iter:31 128 8 9 <u"
                        "nknown> 160 8 7 iter:73 192 8 9 <unknown> 224 8 16 fragment_iter:82 256 8 9 <unknown> 288 8 14 _"
                        "_for_begin:96 320 8 12 __for_end:96 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544"
                        " 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityTreasureMapExcelConfigMgr::checkTreasureMapConfig;
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
  ret = 0;
  prev_unlock_day = 1;
  for ( i = 1LL;
        i <= std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::size(&this->treasure_map_region_excel_config_map);
        ++i )
  {
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    p_treasure_map_region_excel_config_map = &this->treasure_map_region_excel_config_map;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    v7 = i;
    v8 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
    LOBYTE(txt_config_mgr) = v8 != 0;
    if ( v8 != 0 && v8 <= 3 )
    {
      v7 = v3 + 32;
      __asan_report_store4(v3 + 32, txt_config_mgr);
    }
    *(_DWORD *)(v3 + 32) = v7;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::find(
                                                                                                    p_treasure_map_region_excel_config_map,
                                                                                                    (const std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::key_type *)(v3 + 32));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    v9 = &this->treasure_map_region_excel_config_map;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 32);
    *(std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::end(v9);
    v10 = std::__detail::operator==<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false> *)(v3 + 128));
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
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
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "checkTreasureMapConfig",
        34);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      txt_config_mgr = (const TxtConfigMgr *)&byte_1AAB08E0;
      common::milog::MiLogStream::operator()(v11, &byte_1AAB08E0, i);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
    }
    else
    {
      v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false> *const)(v3 + 96));
      region_config = &v13->second;
      p_unlock_day = &v13->second.unlock_day;
      if ( *(_BYTE *)(((unsigned __int64)p_unlock_day >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_unlock_day & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_unlock_day >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(p_unlock_day);
      }
      if ( prev_unlock_day <= region_config->unlock_day )
      {
        if ( *(_BYTE *)(((unsigned __int64)&region_config->unlock_day >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)region_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->unlock_day >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&region_config->unlock_day);
        }
        prev_unlock_day = region_config->unlock_day;
        if ( *(_BYTE *)(((unsigned __int64)&region_config->mp_type_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)region_config - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->mp_type_id >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&region_config->mp_type_id);
        }
        if ( !region_config->mp_type_id )
          goto LABEL_37;
        if ( *(_BYTE *)(((unsigned __int64)&region_config->mp_group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)region_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->mp_group_id >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&region_config->mp_group_id);
        }
        if ( region_config->mp_group_id )
        {
LABEL_37:
          txt_config_mgr = (const TxtConfigMgr *)((((_BYTE)region_config - 60) & 7u) + 3);
          if ( *(_BYTE *)(((unsigned __int64)&region_config->mp_type_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)region_config - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->mp_type_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&region_config->mp_type_id);
          }
          if ( region_config->mp_type_id )
            goto LABEL_48;
          txt_config_mgr = (const TxtConfigMgr *)((((_BYTE)region_config - 92) & 7u) + 3);
          if ( *(_BYTE *)(((unsigned __int64)&region_config->mp_group_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)region_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->mp_group_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&region_config->mp_group_id);
          }
          if ( !region_config->mp_group_id )
          {
LABEL_48:
            if ( *(_BYTE *)(((unsigned __int64)&region_config->fragment_bonus_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&region_config->fragment_bonus_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&region_config->fragment_bonus_id);
            }
            if ( !region_config->fragment_bonus_id )
              goto LABEL_60;
            if ( data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapBonusRegionExcelConfig(
                   this,
                   region_config->fragment_bonus_id) )
            {
              p_fragment_bonus_id = &region_config->fragment_bonus_id;
              v20 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                      &this->bonus_to_fragment_regions_map,
                      &region_config->fragment_bonus_id);
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
              v21 = i;
              v22 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
              if ( v22 != 0 && v22 <= 3 )
              {
                v21 = v3 + 48;
                LOBYTE(p_fragment_bonus_id) = v22 != 0;
                __asan_report_store4(v3 + 48, p_fragment_bonus_id);
              }
              *(_DWORD *)(v3 + 48) = v21;
              txt_config_mgr = (const TxtConfigMgr *)(v3 + 48);
              std::vector<unsigned int>::push_back(v20, (std::vector<unsigned int>::value_type *)(v3 + 48));
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
LABEL_60:
              v12 = 2;
              goto LABEL_61;
            }
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
              "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
              "checkTreasureMapConfig",
              62);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 608),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            if ( *(_BYTE *)(((unsigned __int64)&region_config->fragment_bonus_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&region_config->fragment_bonus_id >> 3) + 0x7FFF8000) <= 3 )
            {
              v18 = (common::milog::MiLogStream *)&region_config->fragment_bonus_id;
              __asan_report_load4(&region_config->fragment_bonus_id);
            }
            txt_config_mgr = (const TxtConfigMgr *)&byte_1AAB0AA0;
            common::milog::MiLogStream::operator()(v18, &byte_1AAB0AA0, i, region_config->fragment_bonus_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
            v12 = 1;
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
              "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
              "checkTreasureMapConfig",
              54);
            p_mp_group_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v3 + 544),
                              (const char (*)[16])"[CONFIG_ERROR] ");
            if ( *(_BYTE *)(((unsigned __int64)&region_config->mp_group_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)region_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->mp_group_id >> 3)
                                                                           + 0x7FFF8000) )
            {
              p_mp_group_id = (common::milog::MiLogStream *)&region_config->mp_group_id;
              __asan_report_load4(&region_config->mp_group_id);
            }
            txt_config_mgr = (const TxtConfigMgr *)&byte_1AAB0A20;
            common::milog::MiLogStream::operator()(p_mp_group_id, &byte_1AAB0A20, i, region_config->mp_group_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v12 = 0;
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
            "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
            "checkTreasureMapConfig",
            48);
          p_mp_type_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v3 + 480),
                           (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((unsigned __int64)&region_config->mp_type_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)region_config - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->mp_type_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            p_mp_type_id = (common::milog::MiLogStream *)&region_config->mp_type_id;
            __asan_report_load4(&region_config->mp_type_id);
          }
          txt_config_mgr = (const TxtConfigMgr *)&byte_1AAB09A0;
          common::milog::MiLogStream::operator()(p_mp_type_id, &byte_1AAB09A0, i, region_config->mp_type_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v12 = 0;
        }
      }
      else
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
          "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
          "checkTreasureMapConfig",
          41);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((unsigned __int64)&region_config->unlock_day >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)region_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->unlock_day >> 3)
                                                                       + 0x7FFF8000) )
        {
          v15 = (common::milog::MiLogStream *)&region_config->unlock_day;
          __asan_report_load4(&region_config->unlock_day);
        }
        txt_config_mgr = (const TxtConfigMgr *)&byte_1AAB0920;
        common::milog::MiLogStream::operator()(v15, &byte_1AAB0920, i, region_config->unlock_day, prev_unlock_day);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
      }
    }
LABEL_61:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v12 )
      goto LABEL_114;
  }
  for ( i_0 = 1LL;
        i_0 <= std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::size(&this->treasure_map_bonus_region_excel_config_map);
        ++i_0 )
  {
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    p_treasure_map_bonus_region_excel_config_map = &this->treasure_map_bonus_region_excel_config_map;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
    v24 = i_0;
    v25 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
    LOBYTE(txt_config_mgr) = v25 != 0;
    if ( v25 != 0 && v25 <= 3 )
    {
      v24 = v3 + 64;
      __asan_report_store4(v3 + 64, txt_config_mgr);
    }
    *(_DWORD *)(v3 + 64) = v24;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::find(p_treasure_map_bonus_region_excel_config_map, (const std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::key_type *)(v3 + 64));
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    v26 = &this->treasure_map_bonus_region_excel_config_map;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v3 + 64);
    *(std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::end(v26);
    v27 = std::__detail::operator==<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false> *)(v3 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false> *)(v3 + 192));
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v27 )
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
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "checkTreasureMapConfig",
        76);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 672),
              (const char (*)[16])"[CONFIG_ERROR] ");
      txt_config_mgr = (const TxtConfigMgr *)&byte_1AAB0B20;
      common::milog::MiLogStream::operator()(v28, &byte_1AAB0B20, i_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v29 = 0;
    }
    else
    {
      v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false> *const)(v3 + 160));
      bonus_config = &v30->second;
      p_fragment_num = &v30->second.fragment_num;
      txt_config_mgr = (const TxtConfigMgr *)(((unsigned __int8)p_fragment_num & 7u) + 3);
      if ( *(_BYTE *)(((unsigned __int64)p_fragment_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_fragment_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_fragment_num >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(p_fragment_num);
      }
      if ( bonus_config->fragment_num )
      {
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        p_bonus_to_fragment_regions_map = &this->bonus_to_fragment_regions_map;
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        v33 = i_0;
        v34 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
        LOBYTE(txt_config_mgr) = v34 != 0;
        if ( v34 != 0 && v34 <= 3 )
        {
          v33 = v3 + 80;
          __asan_report_store4(v3 + 80, txt_config_mgr);
        }
        *(_DWORD *)(v3 + 80) = v33;
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 224, txt_config_mgr);
        *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                                p_bonus_to_fragment_regions_map,
                                                                                                (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 80));
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        region_num = 0;
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        v35 = &this->bonus_to_fragment_regions_map;
        if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 256, v3 + 80);
        *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 256) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v35);
        txt_config_mgr = (const TxtConfigMgr *)(v3 + 256);
        v36 = std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 224),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 256));
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
        if ( v36 )
        {
          v37 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 224));
          region_num = std::vector<unsigned int>::size(&v37->second);
        }
        if ( !region_num )
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
            "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
            "checkTreasureMapConfig",
            90);
          v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 736),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((unsigned __int64)&bonus_config->fragment_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)bonus_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_config->fragment_num >> 3)
                                                                        + 0x7FFF8000) )
          {
            v38 = (common::milog::MiLogStream *)&bonus_config->fragment_num;
            __asan_report_load4(&bonus_config->fragment_num);
          }
          txt_config_mgr = (const TxtConfigMgr *)&byte_1AAB0B80;
          common::milog::MiLogStream::operator()(v38, &byte_1AAB0B80, i_0, bonus_config->fragment_num);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
          *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      }
      v29 = 1;
    }
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v29 != 1 )
      goto LABEL_114;
  }
  __for_range = &this->bonus_treasure_solution_excel_config_map;
  *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 288, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>::iterator *)(v3 + 288) = std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>::begin(__for_range);
  *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 320, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>::iterator *)(v3 + 320) = std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false> *)(v3 + 288),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false> *)(v3 + 320)) )
  {
    v50 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false,false> *const)(v3 + 288));
    id = std::get<0ul,unsigned int const,data::BonusTreasureSolutionExcelConfig>(v50);
    solution_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BonusTreasureSolutionExcelConfig>(v50);
    if ( std::vector<unsigned int>::size(&solution_config->solution) != 9 )
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
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "checkTreasureMapConfig",
        100);
      v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 800),
              (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      common::milog::MiLogStream::operator()(v39, &byte_1AAB0BE0, *id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
      *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false,false> *const)(v3 + 288));
  }
  *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
  v40 = std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>::size(&this->bonus_treasure_solution_excel_config_map);
  if ( v40 < std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::size(&this->treasure_map_bonus_region_excel_config_map) )
  {
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
      "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
      "checkTreasureMapConfig",
      109);
    v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 864),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v41, (const char (*)[60])byte_1AAB0C40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
    ret = -1;
  }
  v2 = ret;
LABEL_114:
  if ( v55 == (char *)v3 )
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

// Line 117: range 0000000012E385F8-0000000012E3860A
int32_t __cdecl ActivityTreasureMapExcelConfigMgr::rewriteConfig(
        ActivityTreasureMapExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 122: range 0000000012E3860C-0000000012E3DBDF
int32_t __cdecl ActivityTreasureMapExcelConfigMgr::finalConfig(
        ActivityTreasureMapExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  data::NewActivityExcelConfigMgrBase *v6; // rdx
  ActivityTreasureMapExcelConfigMgr *v7; // rdx
  common::milog::MiLogStream *p_schedule_id; // rdi
  uint32_t schedule_id; // edx
  char *v10; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t *p_activity_id; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rcx
  common::milog::MiLogStream *v15; // rcx
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *p_guide_child_quest_id; // rdi
  __int64 guide_child_quest_id; // rcx
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *p_reward_worktop_gadget_id; // rdi
  __int64 reward_worktop_gadget_id; // rcx
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *p_token_material_id; // rdi
  __int64 token_material_id; // rcx
  DropExcelConfigMgr *p_drop_config_mgr; // rcx
  common::milog::MiLogStream *p_unit_token_drop_id; // rdi
  __int64 unit_token_drop_id; // rcx
  DropExcelConfigMgr *v28; // rcx
  common::milog::MiLogStream *p_mp_reward_id; // rdi
  __int64 mp_reward_id; // rcx
  common::milog::MiLogStream *v31; // rcx
  MaterialExcelConfigMgr *v32; // rcx
  common::milog::MiLogStream *p_detector_material_id; // rdi
  __int64 detector_material_id; // rcx
  char *v35; // rsi
  const data::TreasureMapBonusRegionExcelConfig **v36; // r8
  uint32_t *p_unlock_region_id; // rax
  __int64 unlock_region_id; // rsi
  common::milog::MiLogStream *v40; // rdi
  __int64 v41; // rcx
  std::unordered_map<unsigned int,const data::TreasureMapBonusRegionExcelConfig*> *p_bonus_region_unlock_map; // rcx
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,const data::TreasureMapBonusRegionExcelConfig*>,false,false>,bool> v43; // rax
  const unsigned int *v44; // r8
  common::milog::MiLogStream *v45; // rdi
  __int64 v46; // rcx
  std::unordered_map<unsigned int,unsigned int> *p_group_to_bonus_map; // rcx
  const unsigned int *p_group_id; // rsi
  common::milog::MiLogStream *v49; // r15
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v50; // rdx
  unsigned int *p_second; // rax
  unsigned int second; // esi
  __int64 group_id; // rcx
  DropExcelConfigMgr *v54; // rcx
  common::milog::MiLogStream *p_reward_id; // rdi
  __int64 reward_id; // rcx
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v58; // rdi
  __int64 v59; // rcx
  common::milog::MiLogStream *v60; // rcx
  uint32_t mp_token_threshold; // ecx
  common::milog::MiLogStream *p_mp_token_threshold; // rdi
  uint32_t v63; // esi
  __int64 token_num; // rcx
  char *v65; // rsi
  unsigned int *v66; // rax
  int *v67; // rdx
  int v68; // ecx
  char v69; // al
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v70; // rax
  common::milog::MiLogStream *v71; // rdi
  __int64 v72; // rcx
  LuaConfigMgr *v73; // rcx
  const unsigned int *v74; // r8
  common::milog::MiLogStream *v75; // rdi
  __int64 v76; // rcx
  std::unordered_map<unsigned int,unsigned int> *p_group_to_region_map; // rcx
  common::milog::MiLogStream *v78; // r15
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v79; // rdx
  unsigned int *v80; // rax
  unsigned int v81; // esi
  __int64 v82; // rcx
  unsigned __int64 v83; // rax
  char *v84; // rsi
  unsigned int *v85; // rax
  int *v86; // rdx
  int v87; // ecx
  char v88; // al
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v89; // rax
  common::milog::MiLogStream *v90; // rdi
  __int64 v91; // rcx
  LuaConfigMgr *v92; // rcx
  const unsigned int *v93; // r8
  common::milog::MiLogStream *v94; // rdi
  __int64 v95; // rcx
  common::milog::MiLogStream *v96; // r15
  std::vector<unsigned int>::size_type v97; // rcx
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v99; // rax
  const char *v100; // rsi
  common::milog::MiLogStream *v101; // r15
  std::vector<unsigned int>::size_type v102; // rcx
  common::milog::MiLogStream *v103; // r15
  std::vector<unsigned int>::size_type v104; // rcx
  const unsigned int *v105; // r15
  const unsigned int *v106; // rcx
  unsigned int *v107; // rax
  uint32_t *v108; // rdx
  std::vector<unsigned int>::size_type v109; // rcx
  common::milog::MiLogStream *v110; // r15
  std::vector<unsigned int>::size_type v111; // rcx
  common::milog::MiLogStream *v112; // r15
  std::vector<unsigned int>::size_type v113; // rcx
  const unsigned int *v114; // r15
  std::vector<unsigned int>::const_iterator v115; // rax
  common::milog::MiLogStream *p_token_num; // rdi
  uint32_t v117; // ecx
  const unsigned int *v118; // r8
  std::unordered_map<unsigned int,unsigned int> *v119; // rcx
  const unsigned int *p_mp_group_id; // rsi
  common::milog::MiLogStream *v121; // r15
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v122; // rdx
  unsigned int *v123; // rax
  unsigned int v124; // esi
  __int64 mp_group_id; // rcx
  LuaConfigMgr *v126; // rcx
  common::milog::MiLogStream *v127; // rdi
  __int64 v128; // rcx
  DropExcelConfigMgr *v129; // rcx
  common::milog::MiLogStream *p_misc_drop_id; // rdi
  __int64 misc_drop_id; // rcx
  unsigned __int64 v132; // rax
  int v133; // eax
  int32_t v134; // ebx
  uint32_t __first2; // [rsp+8h] [rbp-C28h]
  const unsigned int *__first2a; // [rsp+8h] [rbp-C28h]
  bool has_error; // [rsp+2Bh] [rbp-C05h]
  uint32_t total_spot_num; // [rsp+2Ch] [rbp-C04h]
  uint32_t max_spot_token_num; // [rsp+30h] [rbp-C00h]
  uint32_t total_token_num; // [rsp+34h] [rbp-BFCh]
  NewActivityExcelConfigMgr *activity_config_mgr; // [rsp+38h] [rbp-BF8h]
  data::NewActivityScheduleExcelConfigMap *__for_range; // [rsp+40h] [rbp-BF0h]
  data::TreasureMapExcelConfigMap *__for_range_0; // [rsp+48h] [rbp-BE8h]
  data::TreasureMapBonusRegionExcelConfigMap *__for_range_1; // [rsp+50h] [rbp-BE0h]
  data::TreasureMapRegionExcelConfigMap *__for_range_2; // [rsp+58h] [rbp-BD8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false>::reference v149; // [rsp+60h] [rbp-BD0h]
  std::tuple_element<0,std::pair<unsigned int const,data::TreasureMapRegionExcelConfig> >::type *region_id; // [rsp+68h] [rbp-BC8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapRegionExcelConfig> >::type *region_config; // [rsp+70h] [rbp-BC0h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::mapped_type *group_set; // [rsp+78h] [rbp-BB8h]
  const std::vector<unsigned int> *__for_range_3; // [rsp+80h] [rbp-BB0h]
  const std::vector<unsigned int> *__for_range_4; // [rsp+88h] [rbp-BA8h]
  std::unordered_map<unsigned int,std::vector<const data::TreasureMapRegionExcelConfig*>>::mapped_type *region_configs; // [rsp+90h] [rbp-BA0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>::reference v156; // [rsp+B0h] [rbp-B80h]
  std::tuple_element<0,std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> >::type *bonus_id; // [rsp+B8h] [rbp-B78h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> >::type *bonus_config; // [rsp+C0h] [rbp-B70h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false,false>::reference v159; // [rsp+D0h] [rbp-B60h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapExcelConfig> >::type *config; // [rsp+E0h] [rbp-B50h]
  data::NewActivityExcelConfig *new_activity_config_ptr; // [rsp+E8h] [rbp-B48h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false>::reference v162; // [rsp+F8h] [rbp-B38h]
  std::tuple_element<1,const std::pair<unsigned int const,data::NewActivityScheduleExcelConfig> >::type *activity_schedule_config; // [rsp+108h] [rbp-B28h]
  data::NewActivityExcelConfig *activity_config_ptr; // [rsp+110h] [rbp-B20h]
  char v165[2832]; // [rsp+120h] [rbp-B10h] BYREF

  v2 = (unsigned __int64)v165;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2784LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "53 48 4 12 group_id:273 64 4 12 group_id:297 80 8 15 __for_begin:127 112 8 13 __for_end:127 144 "
                        "8 15 __for_begin:144 176 8 13 __for_end:144 208 8 15 __for_begin:221 240 8 13 __for_end:221 272 "
                        "8 9 <unknown> 304 8 15 __for_begin:257 336 8 13 __for_end:257 368 8 15 __for_begin:273 400 8 13 "
                        "__for_end:273 432 8 15 __for_begin:297 464 8 13 __for_end:297 496 8 9 <unknown> 528 8 9 <unknown"
                        "> 560 16 7 res:234 592 16 7 res:287 624 16 7 res:372 656 32 9 <unknown> 720 32 9 <unknown> 784 3"
                        "2 9 <unknown> 848 32 9 <unknown> 912 32 9 <unknown> 976 32 9 <unknown> 1040 32 9 <unknown> 1104 "
                        "32 9 <unknown> 1168 32 9 <unknown> 1232 32 9 <unknown> 1296 32 9 <unknown> 1360 32 9 <unknown> 1"
                        "424 32 9 <unknown> 1488 32 9 <unknown> 1552 32 9 <unknown> 1616 32 9 <unknown> 1680 32 9 <unknow"
                        "n> 1744 32 9 <unknown> 1808 32 9 <unknown> 1872 32 9 <unknown> 1936 32 9 <unknown> 2000 32 9 <un"
                        "known> 2064 32 9 <unknown> 2128 32 9 <unknown> 2192 32 9 <unknown> 2256 32 9 <unknown> 2320 32 9"
                        " <unknown> 2384 32 9 <unknown> 2448 32 9 <unknown> 2512 32 9 <unknown> 2576 32 9 <unknown> 2640 "
                        "32 9 <unknown> 2704 48 20 backup_group_set:296";
  *(_QWORD *)(v2 + 16) = ActivityTreasureMapExcelConfigMgr::finalConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
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
  v4[536862735] = -234881024;
  v4[536862736] = 62194;
  v4[536862736] = -234881024;
  v4[536862737] = 62194;
  v4[536862738] = 62194;
  v4[536862739] = 62194;
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
  v4[536862753] = -219021312;
  v4[536862754] = 62194;
  v4[536862755] = -219021312;
  v4[536862756] = 62194;
  v4[536862757] = -219021312;
  v4[536862758] = 62194;
  v4[536862759] = -219021312;
  v4[536862760] = 62194;
  v4[536862761] = -219021312;
  v4[536862762] = 62194;
  v4[536862763] = -219021312;
  v4[536862764] = 62194;
  v4[536862765] = -219021312;
  v4[536862766] = 62194;
  v4[536862767] = -219021312;
  v4[536862768] = 62194;
  v4[536862769] = -219021312;
  v4[536862770] = 62194;
  v4[536862771] = -219021312;
  v4[536862772] = 62194;
  v4[536862773] = -219021312;
  v4[536862774] = 62194;
  v4[536862775] = -219021312;
  v4[536862776] = 62194;
  v4[536862777] = -219021312;
  v4[536862778] = 62194;
  v4[536862779] = -219021312;
  v4[536862780] = 62194;
  v4[536862781] = -219021312;
  v4[536862782] = 62194;
  v4[536862783] = -219021312;
  v4[536862784] = 62194;
  v4[536862785] = -219021312;
  v4[536862786] = 62194;
  v4[536862787] = -219021312;
  v4[536862788] = 62194;
  v4[536862789] = -219021312;
  v4[536862790] = 62194;
  v4[536862791] = -219021312;
  v4[536862792] = 62194;
  v4[536862793] = -219021312;
  v4[536862794] = 62194;
  v4[536862795] = -219021312;
  v4[536862796] = 62194;
  v4[536862797] = -219021312;
  v4[536862798] = 62194;
  v4[536862799] = -219021312;
  v4[536862800] = 62194;
  v4[536862801] = -219021312;
  v4[536862802] = 62194;
  v4[536862803] = -219021312;
  v4[536862804] = 62194;
  v4[536862806] = -202116109;
  has_error = 0;
  activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
  __for_range = &txt_config_mgr->new_activity_config_mgr.new_activity_schedule_excel_config_map;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig>::iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 112);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false> *)(v2 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false> *)(v2 + 112)) )
      break;
    v162 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false> *const)(v2 + 80));
    std::get<0ul,unsigned int const,data::NewActivityScheduleExcelConfig>(v162);
    activity_schedule_config = (std::tuple_element<1,const std::pair<unsigned int const,data::NewActivityScheduleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::NewActivityScheduleExcelConfig>(v162);
    v6 = activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&activity_schedule_config->activity_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&activity_schedule_config->activity_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&activity_schedule_config->activity_id);
    }
    activity_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
                            v6,
                            activity_schedule_config->activity_id);
    if ( activity_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&activity_config_ptr->activity_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)activity_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_config_ptr->activity_type >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&activity_config_ptr->activity_type);
      }
      if ( activity_config_ptr->activity_type == NEW_ACTIVITY_TREASURE_MAP )
      {
        v7 = this;
        if ( *(_BYTE *)(((unsigned __int64)&activity_schedule_config->activity_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&activity_schedule_config->activity_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&activity_schedule_config->activity_id);
        }
        if ( !data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(
                v7,
                activity_schedule_config->activity_id) )
        {
          has_error = 1;
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
            "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
            "finalConfig",
            139);
          p_schedule_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 656),
                            (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((unsigned __int64)&activity_schedule_config->schedule_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&activity_schedule_config->schedule_id >> 3) + 0x7FFF8000) <= 3 )
          {
            p_schedule_id = (common::milog::MiLogStream *)&activity_schedule_config->schedule_id;
            __asan_report_load4(&activity_schedule_config->schedule_id);
          }
          schedule_id = activity_schedule_config->schedule_id;
          if ( *(_BYTE *)(((unsigned __int64)&activity_schedule_config->activity_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&activity_schedule_config->activity_id >> 3) + 0x7FFF8000) <= 3 )
          {
            p_schedule_id = (common::milog::MiLogStream *)&activity_schedule_config->activity_id;
            __asan_report_load4(&activity_schedule_config->activity_id);
          }
          common::milog::MiLogStream::operator()(
            p_schedule_id,
            &byte_1AAB1100,
            activity_schedule_config->activity_id,
            schedule_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 656));
          *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false> *const)(v2 + 80));
  }
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->treasure_map_excel_config_map;
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 144, v5);
  *(std::unordered_map<unsigned int,data::TreasureMapExcelConfig>::iterator *)(v2 + 144) = std::unordered_map<unsigned int,data::TreasureMapExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 176, v5);
  *(std::unordered_map<unsigned int,data::TreasureMapExcelConfig>::iterator *)(v2 + 176) = std::unordered_map<unsigned int,data::TreasureMapExcelConfig>::end(__for_range_0);
  while ( 1 )
  {
    v10 = (char *)(v2 + 176);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false> *)(v2 + 176)) )
      break;
    v159 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false,false> *const)(v2 + 144));
    std::get<0ul,unsigned int const,data::TreasureMapExcelConfig>(v159);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TreasureMapExcelConfig>(v159);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    p_activity_id = &config->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_activity_id);
    }
    new_activity_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
                                p_new_activity_config_mgr,
                                config->activity_id);
    if ( new_activity_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&new_activity_config_ptr->activity_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)new_activity_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&new_activity_config_ptr->activity_type >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&new_activity_config_ptr->activity_type);
      }
      if ( new_activity_config_ptr->activity_type == NEW_ACTIVITY_TREASURE_MAP )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->treasure_days >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->treasure_days >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->treasure_days);
        }
        if ( !config->treasure_days )
        {
          has_error = 1;
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
            "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
            "finalConfig",
            167);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 848),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&config->activity_id);
          }
          common::milog::MiLogStream::operator()(v15, &byte_1AAB1260, config->activity_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 848));
          *(_DWORD *)(((v2 + 848) >> 3) + 0x7FFF8000) = -117901064;
        }
        p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config->guide_child_quest_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->guide_child_quest_id >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->guide_child_quest_id);
        }
        if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, config->guide_child_quest_id) )
        {
          has_error = 1;
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
            "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
            "finalConfig",
            175);
          p_guide_child_quest_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                     (common::milog::MiLogStream *const)(v2 + 912),
                                     (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((unsigned __int64)&config->guide_child_quest_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->guide_child_quest_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            p_guide_child_quest_id = (common::milog::MiLogStream *)&config->guide_child_quest_id;
            __asan_report_load4(&config->guide_child_quest_id);
          }
          guide_child_quest_id = config->guide_child_quest_id;
          if ( *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            p_guide_child_quest_id = (common::milog::MiLogStream *)&config->activity_id;
            __asan_report_load4(&config->activity_id);
          }
          common::milog::MiLogStream::operator()(
            p_guide_child_quest_id,
            &byte_1AAB12C0,
            config->activity_id,
            guide_child_quest_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 912));
          *(_DWORD *)(((v2 + 912) >> 3) + 0x7FFF8000) = -117901064;
        }
        p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config->reward_worktop_gadget_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->reward_worktop_gadget_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->reward_worktop_gadget_id);
        }
        if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                p_gadget_config_mgr,
                config->reward_worktop_gadget_id) )
        {
          has_error = 1;
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
            "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
            "finalConfig",
            182);
          p_reward_worktop_gadget_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                         (common::milog::MiLogStream *const)(v2 + 976),
                                         (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((unsigned __int64)&config->reward_worktop_gadget_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->reward_worktop_gadget_id >> 3) + 0x7FFF8000) <= 3 )
          {
            p_reward_worktop_gadget_id = (common::milog::MiLogStream *)&config->reward_worktop_gadget_id;
            __asan_report_load4(&config->reward_worktop_gadget_id);
          }
          reward_worktop_gadget_id = config->reward_worktop_gadget_id;
          if ( *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            p_reward_worktop_gadget_id = (common::milog::MiLogStream *)&config->activity_id;
            __asan_report_load4(&config->activity_id);
          }
          common::milog::MiLogStream::operator()(
            p_reward_worktop_gadget_id,
            &byte_1AAB1340,
            config->activity_id,
            reward_worktop_gadget_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 976));
          *(_DWORD *)(((v2 + 976) >> 3) + 0x7FFF8000) = -117901064;
        }
        p_material_config_mgr = &txt_config_mgr->material_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config->token_material_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->token_material_id >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->token_material_id);
        }
        if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                p_material_config_mgr,
                config->token_material_id) )
        {
          has_error = 1;
          *(_DWORD *)(((v2 + 1040) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1040) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1071) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 79) & 7) >= *(_BYTE *)(((v2 + 1071) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1040, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1040),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
            "finalConfig",
            189);
          p_token_material_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 1040),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((unsigned __int64)&config->token_material_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->token_material_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            p_token_material_id = (common::milog::MiLogStream *)&config->token_material_id;
            __asan_report_load4(&config->token_material_id);
          }
          token_material_id = config->token_material_id;
          if ( *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            p_token_material_id = (common::milog::MiLogStream *)&config->activity_id;
            __asan_report_load4(&config->activity_id);
          }
          common::milog::MiLogStream::operator()(
            p_token_material_id,
            &byte_1AAB13C0,
            config->activity_id,
            token_material_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1040));
          *(_DWORD *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -117901064;
        }
        p_drop_config_mgr = &txt_config_mgr->drop_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config->unit_token_drop_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->unit_token_drop_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->unit_token_drop_id);
        }
        if ( !data::DropExcelConfigMgrBase::findDropExcelConfig(p_drop_config_mgr, config->unit_token_drop_id) )
        {
          has_error = 1;
          *(_DWORD *)(((v2 + 1104) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1104) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1135) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 1135) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1104, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1104),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
            "finalConfig",
            196);
          p_unit_token_drop_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                   (common::milog::MiLogStream *const)(v2 + 1104),
                                   (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((unsigned __int64)&config->unit_token_drop_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->unit_token_drop_id >> 3) + 0x7FFF8000) <= 3 )
          {
            p_unit_token_drop_id = (common::milog::MiLogStream *)&config->unit_token_drop_id;
            __asan_report_load4(&config->unit_token_drop_id);
          }
          unit_token_drop_id = config->unit_token_drop_id;
          if ( *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            p_unit_token_drop_id = (common::milog::MiLogStream *)&config->activity_id;
            __asan_report_load4(&config->activity_id);
          }
          common::milog::MiLogStream::operator()(
            p_unit_token_drop_id,
            &byte_1AAB1440,
            config->activity_id,
            unit_token_drop_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1104));
          *(_DWORD *)(((v2 + 1104) >> 3) + 0x7FFF8000) = -117901064;
        }
        v28 = &txt_config_mgr->drop_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config->mp_reward_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->mp_reward_id >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->mp_reward_id);
        }
        if ( !data::DropExcelConfigMgrBase::findDropExcelConfig(v28, config->mp_reward_id) )
        {
          has_error = 1;
          *(_DWORD *)(((v2 + 1168) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1168) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1199) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 1199) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1168, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1168),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
            "finalConfig",
            203);
          p_mp_reward_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                             (common::milog::MiLogStream *const)(v2 + 1168),
                             (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((unsigned __int64)&config->mp_reward_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->mp_reward_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            p_mp_reward_id = (common::milog::MiLogStream *)&config->mp_reward_id;
            __asan_report_load4(&config->mp_reward_id);
          }
          mp_reward_id = config->mp_reward_id;
          if ( *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            p_mp_reward_id = (common::milog::MiLogStream *)&config->activity_id;
            __asan_report_load4(&config->activity_id);
          }
          common::milog::MiLogStream::operator()(p_mp_reward_id, &byte_1AAB14C0, config->activity_id, mp_reward_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1168));
          *(_DWORD *)(((v2 + 1168) >> 3) + 0x7FFF8000) = -117901064;
        }
        if ( *(_BYTE *)(((unsigned __int64)&config->host_reward_limit >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->host_reward_limit >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->host_reward_limit);
        }
        if ( !config->host_reward_limit )
        {
          has_error = 1;
          *(_DWORD *)(((v2 + 1232) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1232) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1263) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 1263) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1232, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1232),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
            "finalConfig",
            210);
          v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1232),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&config->activity_id);
          }
          common::milog::MiLogStream::operator()(v31, &byte_1AAB1540, config->activity_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1232));
          *(_DWORD *)(((v2 + 1232) >> 3) + 0x7FFF8000) = -117901064;
        }
        v32 = &txt_config_mgr->material_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config->detector_material_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->detector_material_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->detector_material_id);
        }
        if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(v32, config->detector_material_id) )
        {
          has_error = 1;
          *(_DWORD *)(((v2 + 1296) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1296) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1327) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 79) & 7) >= *(_BYTE *)(((v2 + 1327) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1296, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1296),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
            "finalConfig",
            217);
          p_detector_material_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                     (common::milog::MiLogStream *const)(v2 + 1296),
                                     (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((unsigned __int64)&config->detector_material_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->detector_material_id >> 3) + 0x7FFF8000) <= 3 )
          {
            p_detector_material_id = (common::milog::MiLogStream *)&config->detector_material_id;
            __asan_report_load4(&config->detector_material_id);
          }
          detector_material_id = config->detector_material_id;
          if ( *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            p_detector_material_id = (common::milog::MiLogStream *)&config->activity_id;
            __asan_report_load4(&config->activity_id);
          }
          common::milog::MiLogStream::operator()(
            p_detector_material_id,
            &byte_1AAB15C0,
            config->activity_id,
            detector_material_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1296));
          *(_DWORD *)(((v2 + 1296) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
      {
        has_error = 1;
        *(_DWORD *)(((v2 + 784) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 784) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 815) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 79) & 7) >= *(_BYTE *)(((v2 + 815) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 784, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 784),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
          "finalConfig",
          159);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 784),
                (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->activity_id);
        }
        common::milog::MiLogStream::operator()(v14, &byte_1AAB1200, config->activity_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 784));
        *(_DWORD *)(((v2 + 784) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
    {
      has_error = 1;
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
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "finalConfig",
        151);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 720),
              (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->activity_id);
      }
      common::milog::MiLogStream::operator()(v13, &byte_1AAB1180, config->activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 720));
      *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false,false> *const)(v2 + 144));
  }
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
  __for_range_1 = &this->treasure_map_bonus_region_excel_config_map;
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 208, v10);
  *(std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::iterator *)(v2 + 208) = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::begin(__for_range_1);
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 240, v10);
  *(std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::iterator *)(v2 + 240) = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::end(__for_range_1);
  while ( 1 )
  {
    v35 = (char *)(v2 + 240);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false> *)(v2 + 208),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false> *)(v2 + 240)) )
      break;
    v156 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false> *const)(v2 + 208));
    bonus_id = std::get<0ul,unsigned int const,data::TreasureMapBonusRegionExcelConfig>(v156);
    bonus_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TreasureMapBonusRegionExcelConfig>(v156);
    p_unlock_region_id = &bonus_config->unlock_region_id;
    unlock_region_id = (((_BYTE)bonus_config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_unlock_region_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_unlock_region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_unlock_region_id >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(p_unlock_region_id);
    }
    if ( bonus_config->unlock_region_id )
    {
      unlock_region_id = bonus_config->unlock_region_id;
      if ( !data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(this, unlock_region_id) )
      {
        has_error = 1;
        *(_DWORD *)(((v2 + 1360) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1360) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1391) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 1391) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1360, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1360),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
          "finalConfig",
          226);
        v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1360),
                (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((unsigned __int64)&bonus_config->unlock_region_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)bonus_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_config->unlock_region_id >> 3)
                                                                      + 0x7FFF8000) )
        {
          v40 = (common::milog::MiLogStream *)&bonus_config->unlock_region_id;
          __asan_report_load4(&bonus_config->unlock_region_id);
        }
        v41 = bonus_config->unlock_region_id;
        if ( *(_BYTE *)(((unsigned __int64)bonus_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)bonus_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bonus_id >> 3) + 0x7FFF8000) )
        {
          v40 = (common::milog::MiLogStream *)bonus_id;
          __asan_report_load4(bonus_id);
        }
        unlock_region_id = (__int64)&byte_1AAB1640;
        common::milog::MiLogStream::operator()(v40, &byte_1AAB1640, *bonus_id, v41);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1360));
        *(_DWORD *)(((v2 + 1360) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    p_bonus_region_unlock_map = &this->bonus_region_unlock_map;
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 272, unlock_region_id);
    *(_QWORD *)(v2 + 272) = bonus_config;
    v43 = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig const*>::emplace<unsigned int const&,data::TreasureMapBonusRegionExcelConfig const*>(
            p_bonus_region_unlock_map,
            &bonus_config->unlock_region_id,
            (const data::TreasureMapBonusRegionExcelConfig **)(v2 + 272),
            (const unsigned int *)p_bonus_region_unlock_map,
            v36);
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
    if ( !v43.second )
    {
      has_error = 1;
      *(_DWORD *)(((v2 + 1424) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1424) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1455) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 1455) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1424, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1424),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "finalConfig",
        231);
      v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1424),
              (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)&bonus_config->unlock_region_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)bonus_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_config->unlock_region_id >> 3)
                                                                    + 0x7FFF8000) )
      {
        v45 = (common::milog::MiLogStream *)&bonus_config->unlock_region_id;
        __asan_report_load4(&bonus_config->unlock_region_id);
      }
      v46 = bonus_config->unlock_region_id;
      if ( *(_BYTE *)(((unsigned __int64)bonus_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)bonus_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bonus_id >> 3) + 0x7FFF8000) )
      {
        v45 = (common::milog::MiLogStream *)bonus_id;
        __asan_report_load4(bonus_id);
      }
      common::milog::MiLogStream::operator()(v45, &byte_1AAB16C0, *bonus_id, v46);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1424));
      *(_DWORD *)(((v2 + 1424) >> 3) + 0x7FFF8000) = -117901064;
    }
    *(_WORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
    p_group_to_bonus_map = &this->group_to_bonus_map;
    p_group_id = &bonus_config->group_id;
    if ( *(_WORD *)(((v2 + 560) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    *(std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> *)(v2 + 560) = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(p_group_to_bonus_map, p_group_id, bonus_id, (const unsigned int *)p_group_to_bonus_map, v44);
    if ( *(char *)(((v2 + 568) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(v2 + 568, p_group_id, v2 + 568);
    if ( *(_BYTE *)(v2 + 568) != 1 )
    {
      has_error = 1;
      *(_DWORD *)(((v2 + 1488) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1488) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1519) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 1519) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1488, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1488),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "finalConfig",
        238);
      v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1488),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v50 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 560));
      p_second = &v50->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      second = v50->second;
      if ( *(_BYTE *)(((unsigned __int64)&bonus_config->group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&bonus_config->group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&bonus_config->group_id);
      }
      group_id = bonus_config->group_id;
      if ( *(_BYTE *)(((unsigned __int64)bonus_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)bonus_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bonus_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(bonus_id);
      }
      common::milog::MiLogStream::operator()(v49, &byte_1AAB1740, *bonus_id, group_id, second);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1488));
      *(_DWORD *)(((v2 + 1488) >> 3) + 0x7FFF8000) = -117901064;
    }
    v54 = &txt_config_mgr->drop_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&bonus_config->reward_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)bonus_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_config->reward_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&bonus_config->reward_id);
    }
    if ( !data::DropExcelConfigMgrBase::findDropExcelConfig(v54, bonus_config->reward_id) )
    {
      has_error = 1;
      *(_DWORD *)(((v2 + 1552) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1552) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1583) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 79) & 7) >= *(_BYTE *)(((v2 + 1583) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1552, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1552),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "finalConfig",
        245);
      p_reward_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1552),
                      (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)&bonus_config->reward_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)bonus_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_config->reward_id >> 3)
                                                                    + 0x7FFF8000) )
      {
        p_reward_id = (common::milog::MiLogStream *)&bonus_config->reward_id;
        __asan_report_load4(&bonus_config->reward_id);
      }
      reward_id = bonus_config->reward_id;
      if ( *(_BYTE *)(((unsigned __int64)bonus_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)bonus_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bonus_id >> 3) + 0x7FFF8000) )
      {
        p_reward_id = (common::milog::MiLogStream *)bonus_id;
        __asan_report_load4(bonus_id);
      }
      common::milog::MiLogStream::operator()(p_reward_id, &byte_1AAB17E0, *bonus_id, reward_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1552));
      *(_DWORD *)(((v2 + 1552) >> 3) + 0x7FFF8000) = -117901064;
    }
    p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&bonus_config->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&bonus_config->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&bonus_config->group_id);
    }
    if ( !LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, bonus_config->group_id) )
    {
      *(_DWORD *)(((v2 + 1616) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1616) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1647) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 1647) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1616, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1616),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "finalConfig",
        251);
      v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1616),
              (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)&bonus_config->group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&bonus_config->group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v58 = (common::milog::MiLogStream *)&bonus_config->group_id;
        __asan_report_load4(&bonus_config->group_id);
      }
      v59 = bonus_config->group_id;
      if ( *(_BYTE *)(((unsigned __int64)bonus_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)bonus_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bonus_id >> 3) + 0x7FFF8000) )
      {
        v58 = (common::milog::MiLogStream *)bonus_id;
        __asan_report_load4(bonus_id);
      }
      common::milog::MiLogStream::operator()(v58, &byte_1AAB1860, *bonus_id, v59);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1616));
      *(_DWORD *)(((v2 + 1616) >> 3) + 0x7FFF8000) = -117901064;
      has_error = 1;
    }
    *(_WORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -1800;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false> *const)(v2 + 208));
  }
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
  __for_range_2 = &this->treasure_map_region_excel_config_map;
  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 304, v35);
  *(std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::iterator *)(v2 + 304) = std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::begin(__for_range_2);
  *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 336, v35);
  *(std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::iterator *)(v2 + 336) = std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::end(__for_range_2);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false> *)(v2 + 304),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false> *)(v2 + 336)) )
  {
    v149 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false> *const)(v2 + 304));
    region_id = std::get<0ul,unsigned int const,data::TreasureMapRegionExcelConfig>(v149);
    region_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapRegionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TreasureMapRegionExcelConfig>(v149);
    if ( *(_BYTE *)(((unsigned __int64)&region_config->token_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region_config->token_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&region_config->token_num);
    }
    if ( !region_config->token_num )
    {
      *(_DWORD *)(((v2 + 1680) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1680) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1711) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 1711) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1680, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1680),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "finalConfig",
        261);
      v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1680),
              (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(region_id);
      }
      common::milog::MiLogStream::operator()(v60, &byte_1AAB18C0, *region_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1680));
      *(_DWORD *)(((v2 + 1680) >> 3) + 0x7FFF8000) = -117901064;
      has_error = 1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&region_config->mp_token_threshold >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region_config->mp_token_threshold >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&region_config->mp_token_threshold);
    }
    mp_token_threshold = region_config->mp_token_threshold;
    if ( *(_BYTE *)(((unsigned __int64)&region_config->token_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region_config->token_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&region_config->token_num);
    }
    if ( mp_token_threshold >= region_config->token_num )
    {
      *(_DWORD *)(((v2 + 1744) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1744) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1775) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 1775) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1744, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1744),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "finalConfig",
        267);
      p_mp_token_threshold = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                               (common::milog::MiLogStream *const)(v2 + 1744),
                               (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)&region_config->mp_token_threshold >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&region_config->mp_token_threshold >> 3) + 0x7FFF8000) <= 3 )
      {
        p_mp_token_threshold = (common::milog::MiLogStream *)&region_config->mp_token_threshold;
        __asan_report_load4(&region_config->mp_token_threshold);
      }
      v63 = region_config->mp_token_threshold;
      if ( *(_BYTE *)(((unsigned __int64)&region_config->token_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&region_config->token_num >> 3) + 0x7FFF8000) <= 3 )
      {
        p_mp_token_threshold = (common::milog::MiLogStream *)&region_config->token_num;
        __asan_report_load4(&region_config->token_num);
      }
      token_num = region_config->token_num;
      if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
      {
        p_mp_token_threshold = (common::milog::MiLogStream *)region_id;
        __asan_report_load4(region_id);
      }
      common::milog::MiLogStream::operator()(p_mp_token_threshold, &byte_1AAB1920, *region_id, token_num, v63);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1744));
      *(_DWORD *)(((v2 + 1744) >> 3) + 0x7FFF8000) = -117901064;
      has_error = 1;
    }
    group_set = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                  &this->region_groups_map,
                  region_id);
    __for_range_3 = &region_config->group_list;
    *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 368, region_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 368) = std::vector<unsigned int>::begin(__for_range_3);
    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 400, region_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 400) = std::vector<unsigned int>::end(__for_range_3);
    while ( 1 )
    {
      v65 = (char *)(v2 + 400);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 368),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 400)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v66 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 368));
      v67 = (int *)v66;
      if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v66 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v66);
      }
      v68 = *v67;
      v69 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v69 != 0 && v69 <= 3 )
      {
        LOBYTE(v65) = v69 != 0;
        __asan_report_store4(v2 + 48, v65);
      }
      *(_DWORD *)(v2 + 48) = v68;
      v70 = std::unordered_set<unsigned int>::insert(
              group_set,
              (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
      if ( !v70.second )
      {
        *(_DWORD *)(((v2 + 1808) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1808) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1839) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 79) & 7) >= *(_BYTE *)(((v2 + 1839) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1808, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1808),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
          "finalConfig",
          277);
        v71 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1808),
                (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        {
          v71 = (common::milog::MiLogStream *)(v2 + 48);
          __asan_report_load4(v2 + 48);
        }
        v72 = *(unsigned int *)(v2 + 48);
        if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
        {
          v71 = (common::milog::MiLogStream *)region_id;
          __asan_report_load4(region_id);
        }
        common::milog::MiLogStream::operator()(v71, &byte_1AAB19A0, *region_id, v72);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1808));
        *(_DWORD *)(((v2 + 1808) >> 3) + 0x7FFF8000) = -117901064;
        has_error = 1;
      }
      else
      {
        v73 = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 48);
        if ( !LuaConfigMgr::findGroupScriptConfig(v73, *(_DWORD *)(v2 + 48)) )
        {
          *(_DWORD *)(((v2 + 1872) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1872) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1903) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 1903) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1872, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1872),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
            "finalConfig",
            284);
          v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1872),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          {
            v75 = (common::milog::MiLogStream *)(v2 + 48);
            __asan_report_load4(v2 + 48);
          }
          v76 = *(unsigned int *)(v2 + 48);
          if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
          {
            v75 = (common::milog::MiLogStream *)region_id;
            __asan_report_load4(region_id);
          }
          common::milog::MiLogStream::operator()(v75, &byte_1AAB1A00, *region_id, v76);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1872));
          *(_DWORD *)(((v2 + 1872) >> 3) + 0x7FFF8000) = -117901064;
          has_error = 1;
        }
        *(_WORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = 0;
        p_group_to_region_map = &this->group_to_region_map;
        if ( *(_WORD *)(((v2 + 592) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        *(std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> *)(v2 + 592) = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(p_group_to_region_map, (unsigned int *)(v2 + 48), region_id, (unsigned int *)p_group_to_region_map, v74);
        if ( *(char *)(((v2 + 600) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(v2 + 600, v2 + 48, v2 + 600);
        if ( *(_BYTE *)(v2 + 600) != 1 )
        {
          *(_DWORD *)(((v2 + 1936) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1936) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1967) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 1967) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1936, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1936),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
            "finalConfig",
            290);
          v78 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1936),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v79 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 592));
          v80 = &v79->second;
          if ( *(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v80 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v80);
          }
          v81 = v79->second;
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 48);
          v82 = *(unsigned int *)(v2 + 48);
          if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(region_id);
          }
          common::milog::MiLogStream::operator()(v78, &byte_1AAB1A60, *region_id, v82, v81);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1936));
          *(_DWORD *)(((v2 + 1936) >> 3) + 0x7FFF8000) = -117901064;
          has_error = 1;
        }
      }
      *(_WORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = -1800;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 368));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
    v83 = ((v2 + 2704) >> 3) + 2147450880;
    *(_DWORD *)v83 = 0;
    *(_WORD *)(v83 + 4) = 0;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 2704));
    __for_range_4 = &region_config->backup_group_list;
    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 432, v65);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 432) = std::vector<unsigned int>::begin(__for_range_4);
    *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 464, v65);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 464) = std::vector<unsigned int>::end(__for_range_4);
    while ( 1 )
    {
      v84 = (char *)(v2 + 464);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 432),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 464)) )
        break;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
      v85 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 432));
      v86 = (int *)v85;
      if ( *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v85 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v85);
      }
      v87 = *v86;
      v88 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
      if ( v88 != 0 && v88 <= 3 )
      {
        LOBYTE(v84) = v88 != 0;
        __asan_report_store4(v2 + 64, v84);
      }
      *(_DWORD *)(v2 + 64) = v87;
      v89 = std::set<unsigned int>::insert(
              (std::set<unsigned int> *const)(v2 + 2704),
              (const std::set<unsigned int>::value_type *)(v2 + 64));
      if ( !v89.second )
      {
        *(_DWORD *)(((v2 + 2000) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 2000) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 2031) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 2031) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 2000, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 2000),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
          "finalConfig",
          301);
        v90 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 2000),
                (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        {
          v90 = (common::milog::MiLogStream *)(v2 + 64);
          __asan_report_load4(v2 + 64);
        }
        v91 = *(unsigned int *)(v2 + 64);
        if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
        {
          v90 = (common::milog::MiLogStream *)region_id;
          __asan_report_load4(region_id);
        }
        common::milog::MiLogStream::operator()(v90, &byte_1AAB1B00, *region_id, v91);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2000));
        *(_DWORD *)(((v2 + 2000) >> 3) + 0x7FFF8000) = -117901064;
        has_error = 1;
      }
      else
      {
        v92 = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
        if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 64);
        if ( !LuaConfigMgr::findGroupScriptConfig(v92, *(_DWORD *)(v2 + 64)) )
        {
          *(_DWORD *)(((v2 + 2064) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 2064) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 2095) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 79) & 7) >= *(_BYTE *)(((v2 + 2095) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 2064, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 2064),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
            "finalConfig",
            308);
          v94 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 2064),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
          {
            v94 = (common::milog::MiLogStream *)(v2 + 64);
            __asan_report_load4(v2 + 64);
          }
          v95 = *(unsigned int *)(v2 + 64);
          if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
          {
            v94 = (common::milog::MiLogStream *)region_id;
            __asan_report_load4(region_id);
          }
          common::milog::MiLogStream::operator()(v94, &byte_1AAB1B60, *region_id, v95);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2064));
          *(_DWORD *)(((v2 + 2064) >> 3) + 0x7FFF8000) = -117901064;
          has_error = 1;
        }
        std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
          &this->group_to_region_map,
          (unsigned int *)(v2 + 64),
          region_id,
          (unsigned int *)&this->group_to_region_map,
          v93);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 432));
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
    if ( std::vector<unsigned int>::size(&region_config->spot_num_list) != 3 )
    {
      *(_DWORD *)(((v2 + 2128) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 2128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 2159) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 2159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 2128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 2128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "finalConfig",
        322);
      v96 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 2128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v97 = std::vector<unsigned int>::size(&region_config->spot_num_list);
      if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(region_id);
      }
      common::milog::MiLogStream::operator()(v96, &byte_1AAB1BC0, *region_id, v97);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2128));
      *(_DWORD *)(((v2 + 2128) >> 3) + 0x7FFF8000) = -117901064;
      has_error = 1;
    }
    M_current = std::vector<unsigned int>::end(&region_config->spot_num_list)._M_current;
    v99._M_current = std::vector<unsigned int>::begin(&region_config->spot_num_list)._M_current;
    v100 = (const char *)M_current;
    total_spot_num = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,int>(
                       v99,
                       (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                       0);
    if ( total_spot_num > std::vector<unsigned int>::size(&region_config->group_list) )
    {
      *(_DWORD *)(((v2 + 2192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 2192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 2223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 2223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 2192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 2192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "finalConfig",
        330);
      v101 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 2192),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v102 = std::vector<unsigned int>::size(&region_config->group_list);
      if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(region_id);
      }
      v100 = &byte_1AAB1C40;
      common::milog::MiLogStream::operator()(v101, &byte_1AAB1C40, *region_id, v102, total_spot_num);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2192));
      *(_DWORD *)(((v2 + 2192) >> 3) + 0x7FFF8000) = -117901064;
      has_error = 1;
    }
    if ( std::vector<unsigned int>::size(&region_config->token_num_list) != 3 )
    {
      *(_DWORD *)(((v2 + 2256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 2256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 2287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 2287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 2256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 2256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "finalConfig",
        337);
      v103 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 2256),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v104 = std::vector<unsigned int>::size(&region_config->token_num_list);
      if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(region_id);
      }
      v100 = &byte_1AAB1CA0;
      common::milog::MiLogStream::operator()(v103, &byte_1AAB1CA0, *region_id, v104);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2256));
      *(_DWORD *)(((v2 + 2256) >> 3) + 0x7FFF8000) = -117901064;
      has_error = 1;
    }
    *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
    v105 = std::vector<unsigned int>::end(&region_config->token_num_list)._M_current;
    v106 = std::vector<unsigned int>::begin(&region_config->token_num_list)._M_current;
    if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 496, v100);
    *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 496) = std::max_element<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
                                                                                                    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v106,
                                                                                                    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v105);
    v107 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 496));
    v108 = v107;
    if ( *(_BYTE *)(((unsigned __int64)v107 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v107 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v107 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v107);
    }
    max_spot_token_num = *v108;
    *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
    v109 = std::vector<unsigned int>::size(&region_config->backup_group_list) * max_spot_token_num;
    if ( *(_BYTE *)(((unsigned __int64)&region_config->token_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region_config->token_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&region_config->token_num);
    }
    if ( v109 < region_config->token_num )
    {
      *(_DWORD *)(((v2 + 2320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 2320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 2351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 79) & 7) >= *(_BYTE *)(((v2 + 2351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 2320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 2320),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "finalConfig",
        347);
      v110 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 2320),
               (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)&region_config->token_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&region_config->token_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&region_config->token_num);
      }
      __first2 = region_config->token_num;
      v111 = std::vector<unsigned int>::size(&region_config->token_num_list);
      if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(region_id);
      }
      common::milog::MiLogStream::operator()(v110, &byte_1AAB1D20, *region_id, v111, max_spot_token_num, __first2);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2320));
      *(_DWORD *)(((v2 + 2320) >> 3) + 0x7FFF8000) = -117901064;
      has_error = 1;
    }
    if ( std::vector<unsigned int>::size(&region_config->misc_drop_prob_list) != 3 )
    {
      *(_DWORD *)(((v2 + 2384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 2384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 2415) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 2415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 2384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 2384),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "finalConfig",
        354);
      v112 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 2384),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v113 = std::vector<unsigned int>::size(&region_config->misc_drop_prob_list);
      if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(region_id);
      }
      common::milog::MiLogStream::operator()(v112, &byte_1AAB1DA0, *region_id, v113);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2384));
      *(_DWORD *)(((v2 + 2384) >> 3) + 0x7FFF8000) = -117901064;
      has_error = 1;
    }
    __first2a = std::vector<unsigned int>::begin(&region_config->token_num_list)._M_current;
    v114 = std::vector<unsigned int>::end(&region_config->spot_num_list)._M_current;
    v115._M_current = std::vector<unsigned int>::begin(&region_config->spot_num_list)._M_current;
    total_token_num = std::inner_product<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,int>(
                        v115,
                        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v114,
                        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__first2a,
                        0);
    if ( *(_BYTE *)(((unsigned __int64)&region_config->token_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region_config->token_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&region_config->token_num);
    }
    if ( total_token_num < region_config->token_num )
    {
      *(_DWORD *)(((v2 + 2448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 2448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 2479) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 2479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 2448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 2448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "finalConfig",
        363);
      p_token_num = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 2448),
                      (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)&region_config->token_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&region_config->token_num >> 3) + 0x7FFF8000) <= 3 )
      {
        p_token_num = (common::milog::MiLogStream *)&region_config->token_num;
        __asan_report_load4(&region_config->token_num);
      }
      v117 = region_config->token_num;
      if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
      {
        p_token_num = (common::milog::MiLogStream *)region_id;
        __asan_report_load4(region_id);
      }
      common::milog::MiLogStream::operator()(p_token_num, &byte_1AAB1E20, *region_id, total_token_num, v117);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2448));
      *(_DWORD *)(((v2 + 2448) >> 3) + 0x7FFF8000) = -117901064;
      has_error = 1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&region_config->mp_type_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)region_config - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->mp_type_id >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&region_config->mp_type_id);
    }
    if ( region_config->mp_type_id )
    {
      region_configs = std::unordered_map<unsigned int,std::vector<data::TreasureMapRegionExcelConfig const*>>::operator[](
                         &this->mp_type_to_region_configs_map,
                         &region_config->mp_type_id);
      *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 528, &region_config->mp_type_id);
      *(_QWORD *)(v2 + 528) = region_config;
      std::vector<data::TreasureMapRegionExcelConfig const*>::push_back(
        region_configs,
        (std::vector<const data::TreasureMapRegionExcelConfig*>::value_type *)(v2 + 528));
      *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
      *(_WORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = 0;
      v119 = &this->group_to_region_map;
      p_mp_group_id = &region_config->mp_group_id;
      if ( *(_WORD *)(((v2 + 624) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      *(std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> *)(v2 + 624) = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(v119, p_mp_group_id, region_id, (const unsigned int *)v119, v118);
      if ( *(char *)(((v2 + 632) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(v2 + 632, p_mp_group_id, v2 + 632);
      if ( *(_BYTE *)(v2 + 632) != 1 )
      {
        *(_DWORD *)(((v2 + 2512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 2512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 2543) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 2543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 2512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 2512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
          "finalConfig",
          375);
        v121 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 2512),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v122 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 624));
        v123 = &v122->second;
        if ( *(_BYTE *)(((unsigned __int64)v123 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v123 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v123 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v123);
        }
        v124 = v122->second;
        if ( *(_BYTE *)(((unsigned __int64)&region_config->mp_group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)region_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->mp_group_id >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&region_config->mp_group_id);
        }
        mp_group_id = region_config->mp_group_id;
        if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(region_id);
        }
        common::milog::MiLogStream::operator()(v121, &byte_1AAB1A60, *region_id, mp_group_id, v124);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2512));
        *(_DWORD *)(((v2 + 2512) >> 3) + 0x7FFF8000) = -117901064;
        has_error = 1;
      }
      v126 = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&region_config->mp_group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)region_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->mp_group_id >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&region_config->mp_group_id);
      }
      if ( !LuaConfigMgr::findGroupScriptConfig(v126, region_config->mp_group_id) )
      {
        *(_DWORD *)(((v2 + 2576) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 2576) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 2607) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 79) & 7) >= *(_BYTE *)(((v2 + 2607) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 2576, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 2576),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
          "finalConfig",
          382);
        v127 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 2576),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((unsigned __int64)&region_config->mp_group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)region_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config->mp_group_id >> 3)
                                                                       + 0x7FFF8000) )
        {
          v127 = (common::milog::MiLogStream *)&region_config->mp_group_id;
          __asan_report_load4(&region_config->mp_group_id);
        }
        v128 = region_config->mp_group_id;
        if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
        {
          v127 = (common::milog::MiLogStream *)region_id;
          __asan_report_load4(region_id);
        }
        common::milog::MiLogStream::operator()(v127, &byte_1AAB1EA0, *region_id, v128);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2576));
        *(_DWORD *)(((v2 + 2576) >> 3) + 0x7FFF8000) = -117901064;
        has_error = 1;
      }
      *(_WORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = -1800;
    }
    v129 = &txt_config_mgr->drop_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&region_config->misc_drop_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region_config->misc_drop_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&region_config->misc_drop_id);
    }
    if ( !data::DropExcelConfigMgrBase::findDropExcelConfig(v129, region_config->misc_drop_id) )
    {
      has_error = 1;
      *(_DWORD *)(((v2 + 2640) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 2640) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 2671) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 2671) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 2640, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 2640),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTreasureMapExcelConfig.cpp",
        "finalConfig",
        391);
      p_misc_drop_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v2 + 2640),
                         (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)&region_config->misc_drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&region_config->misc_drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        p_misc_drop_id = (common::milog::MiLogStream *)&region_config->misc_drop_id;
        __asan_report_load4(&region_config->misc_drop_id);
      }
      misc_drop_id = region_config->misc_drop_id;
      if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) )
      {
        p_misc_drop_id = (common::milog::MiLogStream *)region_id;
        __asan_report_load4(region_id);
      }
      common::milog::MiLogStream::operator()(p_misc_drop_id, &byte_1AAB1F00, *region_id, misc_drop_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2640));
      *(_DWORD *)(((v2 + 2640) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 2704));
    v132 = ((v2 + 2704) >> 3) + 2147450880;
    *(_DWORD *)v132 = -117901064;
    *(_WORD *)(v132 + 4) = -1800;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false> *const)(v2 + 304));
  }
  if ( has_error )
    v133 = -1;
  else
    v133 = 0;
  v134 = v133;
  if ( v165 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8154) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 348) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2784LL, v165);
  }
  return v134;
};

// Line 399: range 0000000012E3DBE0-0000000012E3DDC2
const data::TreasureMapBonusRegionExcelConfig *__fastcall ActivityTreasureMapExcelConfigMgr::getUnlockBonusByRegionId(
        const ActivityTreasureMapExcelConfigMgr *const this,
        __int64 region_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,const data::TreasureMapBonusRegionExcelConfig*> *p_bonus_region_unlock_map; // rdx
  std::unordered_map<unsigned int,const data::TreasureMapBonusRegionExcelConfig*> *v6; // rdx
  bool v7; // al
  const data::TreasureMapBonusRegionExcelConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,const data::TreasureMapBonusRegionExcelConfig*>,false,false>::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 region_id:398 64 8 8 iter:400 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityTreasureMapExcelConfigMgr::getUnlockBonusByRegionId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = region_id;
  p_bonus_region_unlock_map = &this->bonus_region_unlock_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, region_id);
  *(std::unordered_map<unsigned int,const data::TreasureMapBonusRegionExcelConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig const*>::find(p_bonus_region_unlock_map, (const std::unordered_map<unsigned int,const data::TreasureMapBonusRegionExcelConfig*>::key_type *)(v2 + 48));
  v6 = &this->bonus_region_unlock_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,const data::TreasureMapBonusRegionExcelConfig*>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig const*>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig const*>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::TreasureMapBonusRegionExcelConfig*>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::TreasureMapBonusRegionExcelConfig*>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig const*>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,const data::TreasureMapBonusRegionExcelConfig*>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v9->second);
    result = v9->second;
  }
  if ( v10 == (char *)v2 )
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

// Line 409: range 0000000012E3DDC4-0000000012E3E12A
std::set<const data::TreasureMapRegionExcelConfig*> *__cdecl ActivityTreasureMapExcelConfigMgr::randomSelectMpRegionConfigs(
        std::set<const data::TreasureMapRegionExcelConfig*> *retstr,
        const ActivityTreasureMapExcelConfigMgr *const this,
        std::mt19937 *rand_genatator)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  std::_Rb_tree_const_iterator<const data::TreasureMapRegionExcelConfig*>::_Base_ptr M_node; // rdx
  std::insert_iterator<std::set<const data::TreasureMapRegionExcelConfig*> > v8; // rax
  std::set<const data::TreasureMapRegionExcelConfig*> *container; // r14
  const std::_Rb_tree_node_base *v10; // r15
  std::vector<const data::TreasureMapRegionExcelConfig*>::iterator v11; // rax
  std::insert_iterator<std::set<const data::TreasureMapRegionExcelConfig*> > v12; // rdx
  unsigned __int64 v13; // rax
  const data::TreasureMapRegionExcelConfig **__last; // [rsp+10h] [rbp-110h]
  std::unordered_map<unsigned int,std::vector<const data::TreasureMapRegionExcelConfig*>> *__for_range; // [rsp+30h] [rbp-F0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<const data::TreasureMapRegionExcelConfig*> >,false,false>::reference v18; // [rsp+38h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<const data::TreasureMapRegionExcelConfig*> > >::type *configs_vec; // [rsp+48h] [rbp-D8h]
  char v20[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:411 64 8 13 __for_end:411 96 24 20 rand_configs_vec:413";
  *(_QWORD *)(v3 + 16) = ActivityTreasureMapExcelConfigMgr::randomSelectMpRegionConfigs;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  std::set<data::TreasureMapRegionExcelConfig const*>::set(retstr);
  __for_range = &this->mp_type_to_region_configs_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, this);
  *(std::unordered_map<unsigned int,std::vector<const data::TreasureMapRegionExcelConfig*>>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::vector<data::TreasureMapRegionExcelConfig const*>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,std::vector<const data::TreasureMapRegionExcelConfig*>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<data::TreasureMapRegionExcelConfig const*>>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::TreasureMapRegionExcelConfig const*>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<const data::TreasureMapRegionExcelConfig*> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<const data::TreasureMapRegionExcelConfig*> >,false> *)(v3 + 64)) )
  {
    v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::TreasureMapRegionExcelConfig const*>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<const data::TreasureMapRegionExcelConfig*> >,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,std::vector<data::TreasureMapRegionExcelConfig const*>>(v18);
    configs_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<const data::TreasureMapRegionExcelConfig*> > >::type *)std::get<1ul,unsigned int const,std::vector<data::TreasureMapRegionExcelConfig const*>>(v18);
    v6 = ((v3 + 96) >> 3) + 2147450880;
    *(_WORD *)v6 = 0;
    *(_BYTE *)(v6 + 2) = 0;
    std::vector<data::TreasureMapRegionExcelConfig const*>::vector((std::vector<const data::TreasureMapRegionExcelConfig*> *const)(v3 + 96));
    common::tools::RandomUtils::randomSelect<data::TreasureMapRegionExcelConfig const*>(
      configs_vec,
      (std::vector<const data::TreasureMapRegionExcelConfig*> *)(v3 + 96),
      1u,
      rand_genatator);
    M_node = std::set<data::TreasureMapRegionExcelConfig const*>::begin(retstr)._M_node;
    v8 = std::inserter<std::set<data::TreasureMapRegionExcelConfig const*>,std::_Rb_tree_const_iterator<data::TreasureMapRegionExcelConfig const*>>(
           retstr,
           (std::_Rb_tree_const_iterator<const data::TreasureMapRegionExcelConfig*>)M_node);
    container = v8.container;
    v10 = v8.iter._M_node;
    __last = std::vector<data::TreasureMapRegionExcelConfig const*>::end((std::vector<const data::TreasureMapRegionExcelConfig*> *const)(v3 + 96))._M_current;
    v11._M_current = std::vector<data::TreasureMapRegionExcelConfig const*>::begin((std::vector<const data::TreasureMapRegionExcelConfig*> *const)(v3 + 96))._M_current;
    v12.container = container;
    v12.iter._M_node = v10;
    std::copy<__gnu_cxx::__normal_iterator<data::TreasureMapRegionExcelConfig const**,std::vector<data::TreasureMapRegionExcelConfig const*>>,std::insert_iterator<std::set<data::TreasureMapRegionExcelConfig const*>>>(
      v11,
      (__gnu_cxx::__normal_iterator<const data::TreasureMapRegionExcelConfig**,std::vector<const data::TreasureMapRegionExcelConfig*> >)__last,
      v12);
    std::vector<data::TreasureMapRegionExcelConfig const*>::~vector((std::vector<const data::TreasureMapRegionExcelConfig*> *const)(v3 + 96));
    v13 = ((v3 + 96) >> 3) + 2147450880;
    *(_WORD *)v13 = -1800;
    *(_BYTE *)(v13 + 2) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::TreasureMapRegionExcelConfig const*>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<const data::TreasureMapRegionExcelConfig*> >,false,false> *const)(v3 + 32));
  }
  if ( v20 == (char *)v3 )
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
  return retstr;
};

// Line 421: range 0000000012E3E12C-0000000012E3E311
bool __fastcall ActivityTreasureMapExcelConfigMgr::isRegionHasSpotGroup(
        const ActivityTreasureMapExcelConfigMgr *const this,
        __int64 region_id,
        uint32_t group_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *p_region_groups_map; // rdx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *v7; // rdx
  bool v8; // al
  bool result; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false>::pointer v10; // rax
  char v12[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 13 region_id:420 48 4 12 group_id:420 64 8 15 region_iter:422 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityTreasureMapExcelConfigMgr::isRegionHasSpotGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = region_id;
  *(_DWORD *)(v3 + 48) = group_id;
  p_region_groups_map = &this->region_groups_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, region_id);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(p_region_groups_map, (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->region_groups_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v3 + 64));
    result = std::unordered_set<unsigned int>::count(
               &v10->second,
               (const std::unordered_set<unsigned int>::key_type *)(v3 + 48)) != 0;
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

// Line 431: range 0000000012E3E312-0000000012E3E50D
__int64 __fastcall ActivityTreasureMapExcelConfigMgr::getRegionByGroupID(
        const ActivityTreasureMapExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_group_to_region_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:430 64 8 8 iter:432 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityTreasureMapExcelConfigMgr::getRegionByGroupID;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_to_region_map = &this->group_to_region_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_group_to_region_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->group_to_region_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  else
  {
    result = 0LL;
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

// Line 441: range 0000000012E3E50E-0000000012E3E709
__int64 __fastcall ActivityTreasureMapExcelConfigMgr::getBonusIDByGroupID(
        const ActivityTreasureMapExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_group_to_bonus_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:440 64 8 8 iter:442 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityTreasureMapExcelConfigMgr::getBonusIDByGroupID;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_to_bonus_map = &this->group_to_bonus_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_group_to_bonus_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->group_to_bonus_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  else
  {
    result = 0LL;
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

// Line 451: range 0000000012E3E70A-0000000012E3F17F
void __cdecl ActivityTreasureMapExcelConfigMgr::randomSelectRegionBonusFragments(
        const ActivityTreasureMapExcelConfigMgr *const this,
        std::mt19937 *rand_genatator,
        std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *region_bonus_fragments_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_bonus_to_fragment_regions_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v12; // rax
  char *v13; // rsi
  char *v14; // rsi
  unsigned int *v15; // rax
  int *v16; // rdx
  int v17; // ecx
  char v18; // al
  std::pair<unsigned int,unsigned int> *v19; // rax
  char *v20; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v21; // rax
  int *v22; // rdx
  int v23; // ecx
  char v24; // al
  unsigned int *p_second; // rax
  unsigned __int64 v26; // rax
  uint32_t region_num; // [rsp+20h] [rbp-220h]
  int extra; // [rsp+24h] [rbp-21Ch]
  data::TreasureMapBonusRegionExcelConfigMap *__for_range; // [rsp+28h] [rbp-218h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>::reference v32; // [rsp+30h] [rbp-210h]
  std::tuple_element<0,std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> >::type *bonus_id; // [rsp+38h] [rbp-208h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> >::type *bonus_config; // [rsp+40h] [rbp-200h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-1F8h]
  std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-1F0h]
  std::pair<unsigned int,unsigned int> *fragment_pair; // [rsp+58h] [rbp-1E8h]
  char v38[480]; // [rsp+60h] [rbp-1E0h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 4 8 base:464 64 4 13 region_id:468 80 4 13 region_id:472 96 8 15 __for_begin:452 128 8 13 "
                        "__for_end:452 160 8 8 iter:454 192 8 9 <unknown> 224 8 15 __for_begin:468 256 8 13 __for_end:468"
                        " 288 8 9 <unknown> 320 8 15 __for_begin:472 352 8 13 __for_end:472 384 24 14 result_vec:466";
  *(_QWORD *)(v3 + 16) = ActivityTreasureMapExcelConfigMgr::randomSelectRegionBonusFragments;
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
  v5[536862731] = -218959360;
  v5[536862732] = -218103808;
  v5[536862733] = -202116109;
  __for_range = &this->treasure_map_bonus_region_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, rand_genatator);
  *(std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, rand_genatator);
  *(std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false> *)(v3 + 128)) )
  {
    v32 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false> *const)(v3 + 96));
    bonus_id = std::get<0ul,unsigned int const,data::TreasureMapBonusRegionExcelConfig>(v32);
    bonus_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TreasureMapBonusRegionExcelConfig>(v32);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    p_bonus_to_fragment_regions_map = &this->bonus_to_fragment_regions_map;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 128);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                                  p_bonus_to_fragment_regions_map,
                                                                                                  bonus_id);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    v7 = &this->bonus_to_fragment_regions_map;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, bonus_id);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 192) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v7);
    v8 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 160),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 192));
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( !v8 )
    {
      v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 160));
      region_num = std::vector<unsigned int>::size(&v9->second);
      if ( region_num )
      {
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((unsigned __int64)&bonus_config->fragment_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)bonus_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_config->fragment_num >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&bonus_config->fragment_num);
        }
        v10 = bonus_config->fragment_num / region_num;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 48, v10);
        *(_DWORD *)(v3 + 48) = v10;
        extra = bonus_config->fragment_num % region_num;
        v11 = ((v3 + 384) >> 3) + 2147450880;
        *(_WORD *)v11 = 0;
        *(_BYTE *)(v11 + 2) = 0;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 384));
        v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 160));
        v13 = (char *)(v3 + 384);
        common::tools::RandomUtils::randomSelect<unsigned int>(
          &v12->second,
          (std::vector<unsigned int> *)(v3 + 384),
          extra,
          rand_genatator);
        __for_range_0 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 160))->second;
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 224, v13);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 256, v13);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          v14 = (char *)(v3 + 256);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256)) )
            break;
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          v15 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
          v16 = (int *)v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v15);
          }
          v17 = *v16;
          v18 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
          LOBYTE(v14) = v18 != 0;
          if ( v18 != 0 && v18 <= 3 )
            __asan_report_store4(v3 + 64, v14);
          *(_DWORD *)(v3 + 64) = v17;
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 288, v14);
          *(std::pair<unsigned int,unsigned int> *)(v3 + 288) = std::make_pair<unsigned int const&,unsigned int &>(
                                                                  bonus_id,
                                                                  (unsigned int *)(v3 + 48));
          v19 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
                  region_bonus_fragments_map,
                  (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 64));
          std::pair<unsigned int,unsigned int>::operator=(
            v19,
            (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)(v3 + 288));
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
        }
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
        __for_range_1 = (std::vector<unsigned int> *)(v3 + 384);
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 320, v14);
        *(std::vector<unsigned int>::iterator *)(v3 + 320) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 352, v14);
        *(std::vector<unsigned int>::iterator *)(v3 + 352) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v20 = (char *)(v3 + 352);
          if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 320),
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 352)) )
            break;
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
          v21 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 320));
          v22 = (int *)v21;
          if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v21);
          }
          v23 = *v22;
          v24 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
          if ( v24 != 0 && v24 <= 3 )
          {
            LOBYTE(v20) = v24 != 0;
            __asan_report_store4(v3 + 80, v20);
          }
          *(_DWORD *)(v3 + 80) = v23;
          fragment_pair = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
                            region_bonus_fragments_map,
                            (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 80));
          p_second = &fragment_pair->second;
          if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_second);
          }
          ++fragment_pair->second;
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 320));
        }
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 384));
      }
    }
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    v26 = ((v3 + 384) >> 3) + 2147450880;
    *(_WORD *)v26 = -1800;
    *(_BYTE *)(v26 + 2) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false> *const)(v3 + 96));
  }
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
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
  }
};
