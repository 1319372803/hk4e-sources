// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/OverflowTransformExcelConfig.cpp

// Line 21: range 000000001462A83C-000000001462AB8E
int32_t __cdecl OverflowTransformExcelConfigMgr::rewriteConfig(
        OverflowTransformExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::OverflowTransformExcelConfig *v5; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::OverflowTransformExcelConfig>,false,false>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-D4h]
  data::OverflowTransformExcelConfigVec *__for_range; // [rsp+20h] [rbp-D0h]
  data::OverflowTransformExcelConfig *config; // [rsp+28h] [rbp-C8h]
  char v13[192]; // [rsp+30h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 14 __for_begin:23 64 8 12 __for_end:23 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = OverflowTransformExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->overflow_transform_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::vector<data::OverflowTransformExcelConfig>::iterator *)(v2 + 32) = std::vector<data::OverflowTransformExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::vector<data::OverflowTransformExcelConfig>::iterator *)(v2 + 64) = std::vector<data::OverflowTransformExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::OverflowTransformExcelConfig *,std::vector<data::OverflowTransformExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::OverflowTransformExcelConfig*,std::vector<data::OverflowTransformExcelConfig> > *)(v2 + 32),
            (const __gnu_cxx::__normal_iterator<data::OverflowTransformExcelConfig*,std::vector<data::OverflowTransformExcelConfig> > *)(v2 + 64)) )
  {
    config = __gnu_cxx::__normal_iterator<data::OverflowTransformExcelConfig *,std::vector<data::OverflowTransformExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::OverflowTransformExcelConfig*,std::vector<data::OverflowTransformExcelConfig> > *const)(v2 + 32));
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &config->transform_results,
      (unsigned int *)8);
    v6 = std::unordered_map<unsigned int,data::OverflowTransformExcelConfig>::emplace<unsigned int &,data::OverflowTransformExcelConfig&>(
           &this->item_config_map,
           &config->transform_id,
           config,
           (unsigned int *)&this->item_config_map,
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
        "./src/txt_data_manual/OverflowTransformExcelConfig.cpp",
        "rewriteConfig",
        28);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v7, (const char (*)[24])byte_1ADC7140);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->transform_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __gnu_cxx::__normal_iterator<data::OverflowTransformExcelConfig *,std::vector<data::OverflowTransformExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::OverflowTransformExcelConfig*,std::vector<data::OverflowTransformExcelConfig> > *const)(v2 + 32));
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

// Line 36: range 000000001462AB90-000000001462ABB4
int32_t __cdecl OverflowTransformExcelConfigMgr::checkConfig(
        OverflowTransformExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return OverflowTransformExcelConfigMgr::checkOverflowTransformConfig(this, txt_config_mgr);
};

// Line 41: range 000000001462ABB6-000000001462C2FD
int32_t __cdecl OverflowTransformExcelConfigMgr::checkOverflowTransformConfig(
        const OverflowTransformExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ItemLimitExcelConfigMgr *p_item_limit_config_mgr; // rcx
  uint32_t *p_transform_id; // rax
  const TxtConfigMgr *p_transform_type; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  ItemLimitExcelConfigMgr *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  __int64 id; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  data::ItemLimitType transform_item_limit_type; // edx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  std::pair<std::_Rb_tree_const_iterator<data::OverflowTransformType>,bool> v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  int32_t ret; // [rsp+14h] [rbp-3ECh]
  std::unordered_map<unsigned int,data::OverflowTransformExcelConfig> *__for_range; // [rsp+18h] [rbp-3E8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OverflowTransformExcelConfig>,false,false>::reference v51; // [rsp+20h] [rbp-3E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::OverflowTransformExcelConfig> >::type *config; // [rsp+30h] [rbp-3D0h]
  const std::vector<data::IdCountConfig> *__for_range_0; // [rsp+38h] [rbp-3C8h]
  const data::IdCountConfig *id_count_config; // [rsp+40h] [rbp-3C0h]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+48h] [rbp-3B8h]
  char v56[944]; // [rsp+50h] [rbp-3B0h] BYREF

  v2 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(896LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 48 8 14 __for_begin:44 80 8 12 __for_end:44 112 8 14 __for_begin:56 144 8 12 __for_end:56 176"
                        " 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 "
                        "32 9 <unknown> 560 32 9 <unknown> 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 4"
                        "8 21 transform_type_set:43";
  *(_QWORD *)(v2 + 16) = OverflowTransformExcelConfigMgr::checkOverflowTransformConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
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
  v4[536862734] = -219021312;
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
  v4[536862747] = -202116109;
  ret = 0;
  std::set<data::OverflowTransformType>::set((std::set<data::OverflowTransformType> *const)(v2 + 816));
  __for_range = &this->item_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OverflowTransformExcelConfig>::const_iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::OverflowTransformExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OverflowTransformExcelConfig>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::OverflowTransformExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::OverflowTransformExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OverflowTransformExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OverflowTransformExcelConfig>,false> *)(v2 + 80)) )
  {
    v51 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OverflowTransformExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OverflowTransformExcelConfig>,false,false> *const)(v2 + 48));
    std::get<0ul,unsigned int const,data::OverflowTransformExcelConfig>(v51);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::OverflowTransformExcelConfig> >::type *)std::get<1ul,unsigned int const,data::OverflowTransformExcelConfig>(v51);
    p_item_limit_config_mgr = &txt_config_mgr->item_limit_config_mgr;
    p_transform_id = &config->transform_id;
    if ( *(_BYTE *)(((unsigned __int64)p_transform_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_transform_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_transform_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(p_transform_id);
    }
    p_transform_type = txt_config_mgr;
    if ( ItemLimitExcelConfigMgr::isItemInOutputLimitConfig(
           p_item_limit_config_mgr,
           txt_config_mgr,
           config->transform_id) )
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
        "./src/txt_data_manual/OverflowTransformExcelConfig.cpp",
        "checkOverflowTransformConfig",
        48);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 176),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v8, (const char (*)[56])byte_1ADC7300);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->transform_id);
      v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v10, (const char (*)[17])" transform_type:");
      p_transform_type = (const TxtConfigMgr *)&config->transform_type;
      common::milog::MiLogStream::operator<<<data::OverflowTransformType,(data::OverflowTransformType*)0>(
        v11,
        &config->transform_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( std::vector<data::IdCountConfig>::empty(&config->transform_results) )
    {
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 15) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/OverflowTransformExcelConfig.cpp",
        "checkOverflowTransformConfig",
        53);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v12, (const char (*)[31])byte_1ADC73A0);
      v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])" transform_type:");
      p_transform_type = (const TxtConfigMgr *)&config->transform_type;
      common::milog::MiLogStream::operator<<<data::OverflowTransformType,(data::OverflowTransformType*)0>(
        v14,
        &config->transform_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &config->transform_results;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, p_transform_type);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 112) = std::vector<data::IdCountConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, p_transform_type);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 144) = std::vector<data::IdCountConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 112),
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 144)) )
    {
      id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v2 + 112));
      v15 = &txt_config_mgr->item_limit_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      if ( ItemLimitExcelConfigMgr::isItemInOutputLimitConfig(v15, txt_config_mgr, id_count_config->id) )
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
          "./src/txt_data_manual/OverflowTransformExcelConfig.cpp",
          "checkOverflowTransformConfig",
          60);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 304),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v16, (const char (*)[59])byte_1ADC73E0);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &id_count_config->id);
        v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v18,
                (const char (*)[17])" transform_type:");
        common::milog::MiLogStream::operator<<<data::OverflowTransformType,(data::OverflowTransformType*)0>(
          v19,
          &config->transform_type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
        *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      p_material_config_mgr = &txt_config_mgr->material_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      id = id_count_config->id;
      material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, id);
      if ( material_config_ptr )
      {
        if ( *(char *)(((unsigned __int64)&material_config_ptr->use_on_gain >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&material_config_ptr->use_on_gain, id, &material_config_ptr->use_on_gain);
        if ( material_config_ptr->use_on_gain )
        {
          *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 432, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/OverflowTransformExcelConfig.cpp",
            "checkOverflowTransformConfig",
            73);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 432),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v27 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v26, (const char (*)[56])byte_1ADC74A0);
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &id_count_config->id);
          v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v28,
                  (const char (*)[17])" transform_type:");
          common::milog::MiLogStream::operator<<<data::OverflowTransformType,(data::OverflowTransformType*)0>(
            v29,
            &config->transform_type);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
          *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        if ( *(_BYTE *)(((unsigned __int64)&config->transform_item_limit_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->transform_item_limit_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->transform_item_limit_type);
        }
        transform_item_limit_type = config->transform_item_limit_type;
        if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&id_count_config->id);
        }
        if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, id_count_config->id, transform_item_limit_type) )
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
            "./src/txt_data_manual/OverflowTransformExcelConfig.cpp",
            "checkOverflowTransformConfig",
            78);
          v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 496),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v32 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  v31,
                  (const char (*)[50])"isItemAllowedByOutputControl check fail, item_id:");
          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &id_count_config->id);
          v34 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v33,
                  (const char (*)[17])" transform_type:");
          common::milog::MiLogStream::operator<<<data::OverflowTransformType,(data::OverflowTransformType*)0>(
            v34,
            &config->transform_type);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
          *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
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
          "./src/txt_data_manual/OverflowTransformExcelConfig.cpp",
          "checkOverflowTransformConfig",
          66);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 368),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v22, (const char (*)[56])byte_1ADC7440);
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &id_count_config->id);
        v25 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v24,
                (const char (*)[17])" transform_type:");
        common::milog::MiLogStream::operator<<<data::OverflowTransformType,(data::OverflowTransformType*)0>(
          v25,
          &config->transform_type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
        *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v2 + 112));
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    v35 = std::set<data::OverflowTransformType>::insert(
            (std::set<data::OverflowTransformType> *const)(v2 + 816),
            &config->transform_type);
    if ( !v35.second )
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
        "./src/txt_data_manual/OverflowTransformExcelConfig.cpp",
        "checkOverflowTransformConfig",
        84);
      v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 560),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v37 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v36, (const char (*)[28])byte_1ADC7560);
      common::milog::MiLogStream::operator<<<data::OverflowTransformType,(data::OverflowTransformType*)0>(
        v37,
        &config->transform_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 560));
      *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->transform_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->transform_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->transform_type);
    }
    if ( config->transform_type == OVERFLOW_TRANSFORM_PLAYER_EXP )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->transform_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->transform_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->transform_id);
      }
      if ( config->transform_id != 102 )
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
          "./src/txt_data_manual/OverflowTransformExcelConfig.cpp",
          "checkOverflowTransformConfig",
          92);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 624),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v39 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v38, (const char (*)[38])byte_1ADC75A0);
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &config->transform_id);
        v41 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v40,
                (const char (*)[17])" transform_type:");
        common::milog::MiLogStream::operator<<<data::OverflowTransformType,(data::OverflowTransformType*)0>(
          v41,
          &config->transform_type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 624));
        *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->transform_base_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->transform_base_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->transform_base_count);
      }
      if ( config->transform_base_count != 1 )
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
          "./src/txt_data_manual/OverflowTransformExcelConfig.cpp",
          "checkOverflowTransformConfig",
          97);
        v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 688),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v43 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v42, (const char (*)[27])byte_1ADC7600);
        v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &config->transform_base_count);
        v45 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v44,
                (const char (*)[17])" transform_type:");
        common::milog::MiLogStream::operator<<<data::OverflowTransformType,(data::OverflowTransformType*)0>(
          v45,
          &config->transform_type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 688));
        *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        3u,
        "./src/txt_data_manual/OverflowTransformExcelConfig.cpp",
        "checkOverflowTransformConfig",
        102);
      v46 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              (common::milog::MiLogStream *const)(v2 + 752),
              (const char (*)[25])byte_1ADC7640);
      common::milog::MiLogStream::operator<<<data::OverflowTransformType,(data::OverflowTransformType*)0>(
        v46,
        &config->transform_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 752));
      *(_DWORD *)(((v2 + 752) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OverflowTransformExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OverflowTransformExcelConfig>,false,false> *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  std::set<data::OverflowTransformType>::~set((std::set<data::OverflowTransformType> *const)(v2 + 816));
  if ( v56 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
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

// Line 110: range 000000001462C2FE-000000001462C4B9
const data::OverflowTransformExcelConfig *__fastcall OverflowTransformExcelConfigMgr::findOverflowTransformConfigByItemId(
        const OverflowTransformExcelConfigMgr *const this,
        __int64 item_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::OverflowTransformExcelConfig> *p_item_config_map; // rdx
  std::unordered_map<unsigned int,data::OverflowTransformExcelConfig> *v6; // rdx
  bool v7; // al
  const data::OverflowTransformExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 item_id:109 64 8 8 iter:111 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = OverflowTransformExcelConfigMgr::findOverflowTransformConfigByItemId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = item_id;
  p_item_config_map = &this->item_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, item_id);
  *(std::unordered_map<unsigned int,data::OverflowTransformExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::OverflowTransformExcelConfig>::find(p_item_config_map, (const std::unordered_map<unsigned int,data::OverflowTransformExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->item_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::OverflowTransformExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::OverflowTransformExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::OverflowTransformExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OverflowTransformExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OverflowTransformExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OverflowTransformExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OverflowTransformExcelConfig>,false,false> *const)(v2 + 64))->second;
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
