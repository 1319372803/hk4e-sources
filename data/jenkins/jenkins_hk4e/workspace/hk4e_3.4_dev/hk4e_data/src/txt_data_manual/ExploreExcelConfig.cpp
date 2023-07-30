// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ExploreExcelConfig.cpp

// Line 20: range 0000000013ABED08-0000000013ABF5C9
int32_t __cdecl ExploreExcelConfigMgr::checkConfig(
        ExploreExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  uint32_t *p_total_exp; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1C4h]
  data::ExploreExcelConfigMap *__for_range; // [rsp+20h] [rbp-1C0h]
  data::ExploreAreaTotalExpExcelConfigMap *__for_range_0; // [rsp+28h] [rbp-1B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExploreAreaTotalExpExcelConfig>,false,false>::reference v23; // [rsp+30h] [rbp-1B0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ExploreAreaTotalExpExcelConfig> >::type *area_id; // [rsp+38h] [rbp-1A8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExploreAreaTotalExpExcelConfig> >::type *exp_config; // [rsp+40h] [rbp-1A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExploreExcelConfig>,false,false>::reference __in; // [rsp+48h] [rbp-198h]
  const unsigned int *id; // [rsp+50h] [rbp-190h]
  char v28[384]; // [rsp+60h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 14 __for_begin:22 64 8 12 __for_end:22 96 8 14 __for_begin:31 128 8 12 __for_end:31 160 3"
                        "2 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ExploreExcelConfigMgr::checkConfig;
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
  __for_range = &this->explore_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExploreExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ExploreExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExploreExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ExploreExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ExploreExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExploreExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExploreExcelConfig>,false> *)(v2 + 64)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExploreExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExploreExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::ExploreExcelConfig>(__in);
    std::get<1ul,unsigned int const,data::ExploreExcelConfig>(__in);
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, *id) )
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
        "./src/txt_data_manual/ExploreExcelConfig.cpp",
        "checkConfig",
        26);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v7, (const char (*)[40])byte_1AC77260);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])byte_1AC65560);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExploreExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExploreExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->explore_area_total_exp_excel_config_map;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::unordered_map<unsigned int,data::ExploreAreaTotalExpExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ExploreAreaTotalExpExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,data::ExploreAreaTotalExpExcelConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::ExploreAreaTotalExpExcelConfig>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ExploreAreaTotalExpExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExploreAreaTotalExpExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExploreAreaTotalExpExcelConfig>,false> *)(v2 + 128)) )
  {
    v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExploreAreaTotalExpExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExploreAreaTotalExpExcelConfig>,false,false> *const)(v2 + 96));
    area_id = std::get<0ul,unsigned int const,data::ExploreAreaTotalExpExcelConfig>(v23);
    exp_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExploreAreaTotalExpExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExploreAreaTotalExpExcelConfig>(v23);
    p_total_exp = &exp_config->total_exp;
    if ( *(_BYTE *)(((unsigned __int64)p_total_exp >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_total_exp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_total_exp >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_total_exp);
    }
    if ( !exp_config->total_exp )
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
        "./src/txt_data_manual/ExploreExcelConfig.cpp",
        "checkConfig",
        35);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])"area_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, area_id);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v13, (const char (*)[20])byte_1AC77300);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_world_area_config_mgr = &txt_config_mgr->world_area_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)area_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)area_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)area_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(area_id);
    }
    if ( !WorldAreaExcelConfigMgr::findFirstLevelWorldAreaConfig(p_world_area_config_mgr, *area_id) )
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
        "./src/txt_data_manual/ExploreExcelConfig.cpp",
        "checkConfig",
        40);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])"area_id:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, area_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])byte_1AC59EA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExploreAreaTotalExpExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExploreAreaTotalExpExcelConfig>,false,false> *const)(v2 + 96));
  }
  result = ret;
  if ( v28 == (char *)v2 )
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

// Line 49: range 0000000013ABF5CA-0000000013ABF5DC
int32_t __cdecl ExploreExcelConfigMgr::rewriteConfig(ExploreExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 54: range 0000000013ABF5DE-0000000013ABF653
uint32_t __cdecl ExploreExcelConfigMgr::getExploreMaterialPoint(
        const ExploreExcelConfigMgr *const this,
        uint32_t material_id)
{
  const data::ExploreExcelConfig *conf_ptr; // [rsp+18h] [rbp-8h]

  conf_ptr = data::ExploreExcelConfigMgrBase::findExploreExcelConfig(this, material_id);
  if ( !conf_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&conf_ptr->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)conf_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&conf_ptr->exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&conf_ptr->exp);
  }
  return conf_ptr->exp;
};

// Line 62: range 0000000013ABF654-0000000013ABF6C9
uint32_t __cdecl ExploreExcelConfigMgr::getDungeonBelongLevel1AreaId(
        const ExploreExcelConfigMgr *const this,
        uint32_t dungeon_id)
{
  const data::DungeonMapAreaExcelConfig *conf_ptr; // [rsp+18h] [rbp-8h]

  conf_ptr = data::ExploreExcelConfigMgrBase::findDungeonMapAreaExcelConfig(this, dungeon_id);
  if ( !conf_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&conf_ptr->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)conf_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&conf_ptr->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&conf_ptr->area_id);
  }
  return conf_ptr->area_id;
};
