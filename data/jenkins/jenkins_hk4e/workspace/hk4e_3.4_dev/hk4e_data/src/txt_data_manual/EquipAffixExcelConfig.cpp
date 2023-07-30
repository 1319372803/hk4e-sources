// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/EquipAffixExcelConfig.cpp

// Line 21: range 0000000013AA71E2-0000000013AA7B6D
int32_t __cdecl EquipAffixExcelConfigMgr::checkConfig(
        EquipAffixExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  size_t v6; // rsi
  std::vector<data::EquipAffixExcelConfig>::reference v7; // rax
  uint32_t level; // r15d
  std::vector<data::EquipAffixExcelConfig>::reference v9; // rax
  char v10; // dl
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::vector<data::EquipAffixExcelConfig>::reference v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // eax
  std::vector<data::EquipAffixExcelConfig>::reference v16; // rax
  char v17; // dl
  char v18; // al
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::vector<data::EquipAffixExcelConfig>::reference v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  int v28; // edx
  int32_t result; // eax
  size_t idx; // [rsp+28h] [rbp-1D8h]
  std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>> *__for_range; // [rsp+30h] [rbp-1D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false,false>::reference __in; // [rsp+38h] [rbp-1C8h]
  const unsigned int *affix_id; // [rsp+40h] [rbp-1C0h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> > >::type *affix_config_vec; // [rsp+48h] [rbp-1B8h]
  JsonConfigMgr *json_config_mgr; // [rsp+50h] [rbp-1B0h]
  std::string *mixin_name; // [rsp+68h] [rbp-198h]
  char v38[400]; // [rsp+70h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 14 __for_begin:22 64 8 12 __for_end:22 96 8 14 __for_begin:40 128 8 12 __for_end:40 160 3"
                        "2 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = EquipAffixExcelConfigMgr::checkConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  __for_range = &this->equip_affix_level_config_map_;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::end(__for_range);
  while ( 1 )
  {
    v6 = v3 + 64;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false> *)(v3 + 64)) )
    {
      v15 = 1;
      goto LABEL_48;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false,false> *const)(v3 + 32));
    affix_id = std::get<0ul,unsigned int const,std::vector<data::EquipAffixExcelConfig>>(__in);
    affix_config_vec = std::get<1ul,unsigned int const,std::vector<data::EquipAffixExcelConfig>>(__in);
    for ( idx = 1LL; idx < std::vector<data::EquipAffixExcelConfig>::size(affix_config_vec); ++idx )
    {
      v7 = std::vector<data::EquipAffixExcelConfig>::operator[](affix_config_vec, idx);
      if ( *(_BYTE *)(((unsigned __int64)&v7->level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v7->level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v7->level);
      }
      level = v7->level;
      v6 = idx - 1;
      v9 = std::vector<data::EquipAffixExcelConfig>::operator[](affix_config_vec, idx - 1);
      v10 = *(_BYTE *)(((unsigned __int64)&v9->level >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v10 != 0;
      if ( v10 != 0 && v10 <= 3 )
        __asan_report_load4(&v9->level);
      if ( level != v9->level + 1 )
      {
        *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
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
          "./src/txt_data_manual/EquipAffixExcelConfig.cpp",
          "checkConfig",
          28);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])"affix_id: ");
        v13 = std::vector<data::EquipAffixExcelConfig>::operator[](affix_config_vec, idx);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v13->id);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])byte_1AC6E420);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        v2 = -1;
        v15 = 0;
        goto LABEL_48;
      }
    }
    if ( std::vector<data::EquipAffixExcelConfig>::empty(affix_config_vec) )
      goto LABEL_26;
    v16 = std::vector<data::EquipAffixExcelConfig>::operator[](affix_config_vec, 0LL);
    v17 = *(_BYTE *)(((unsigned __int64)&v16->level >> 3) + 0x7FFF8000);
    v6 = v17 != 0;
    if ( v17 != 0 && v17 <= 3 )
      __asan_report_load4(&v16->level);
    if ( v16->level )
      v18 = 1;
    else
LABEL_26:
      v18 = 0;
    if ( v18 )
      break;
    json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::vector<data::EquipAffixExcelConfig>::iterator *)(v3 + 96) = std::vector<data::EquipAffixExcelConfig>::begin(affix_config_vec);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<data::EquipAffixExcelConfig>::iterator *)(v3 + 128) = std::vector<data::EquipAffixExcelConfig>::end(affix_config_vec);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::EquipAffixExcelConfig *,std::vector<data::EquipAffixExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<data::EquipAffixExcelConfig*,std::vector<data::EquipAffixExcelConfig> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<data::EquipAffixExcelConfig*,std::vector<data::EquipAffixExcelConfig> > *)(v3 + 128)) )
      {
        v28 = 1;
        goto LABEL_44;
      }
      mixin_name = &__gnu_cxx::__normal_iterator<data::EquipAffixExcelConfig *,std::vector<data::EquipAffixExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::EquipAffixExcelConfig*,std::vector<data::EquipAffixExcelConfig> > *const)(v3 + 96))->open_config;
      if ( !(unsigned __int8)std::string::empty() && !JsonConfigMgr::findTalentMixinConfigs(json_config_mgr, mixin_name) )
        break;
      __gnu_cxx::__normal_iterator<data::EquipAffixExcelConfig *,std::vector<data::EquipAffixExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::EquipAffixExcelConfig*,std::vector<data::EquipAffixExcelConfig> > *const)(v3 + 96));
    }
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
      "./src/txt_data_manual/EquipAffixExcelConfig.cpp",
      "checkConfig",
      47);
    v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 288),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])"affix_id: ");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, affix_id);
    v26 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v25, (const char (*)[23])byte_1AC6E4A0);
    v27 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, mixin_name);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v27, (const char (*)[8])byte_1AC6BF40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v28 = 0;
LABEL_44:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v28 != 1 )
    {
      v15 = 0;
      goto LABEL_48;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false,false> *const)(v3 + 32));
  }
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
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
    "./src/txt_data_manual/EquipAffixExcelConfig.cpp",
    "checkConfig",
    34);
  v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])"affix_id: ");
  v21 = std::vector<data::EquipAffixExcelConfig>::operator[](affix_config_vec, 0LL);
  v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v21->id);
  common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v22, (const char (*)[24])byte_1AC6E460);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v15 = 0;
LABEL_48:
  if ( v15 == 1 )
    v2 = 0;
  result = v2;
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 56: range 0000000013AA7BFE-0000000013AA81AF
int32_t __cdecl EquipAffixExcelConfigMgr::rewriteConfig(
        EquipAffixExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_affix_id; // rsi
  std::vector<data::EquipAffixExcelConfig> *v7; // rdx
  AvatarTalentExcelConfigMgr *p_avatar_talent_config_mgr; // rdi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // edx
  data::EquipAffixExcelConfig *M_current; // r14
  std::vector<data::EquipAffixExcelConfig>::iterator v13; // rax
  EquipAffixExcelConfigMgr::rewriteConfig::<lambda(const data::EquipAffixExcelConfig&, const data::EquipAffixExcelConfig&)> v14; // dl
  int32_t result; // eax
  data::EquipAffixExcelConfigMap *__for_range; // [rsp+10h] [rbp-170h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-168h]
  std::tuple_element<1,std::pair<unsigned int const,data::EquipAffixExcelConfig> >::type *affix_config; // [rsp+28h] [rbp-158h]
  std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>> *__for_range_0; // [rsp+30h] [rbp-150h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false,false>::reference v22; // [rsp+38h] [rbp-148h]
  std::vector<data::EquipAffixExcelConfig> *affix_config_vec; // [rsp+48h] [rbp-138h]
  char v24[304]; // [rsp+50h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 1 10 functor:68 64 8 14 __for_begin:57 96 8 12 __for_end:57 128 8 14 __for_begin:72 160 8 1"
                        "2 __for_end:72 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = EquipAffixExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  __for_range = &this->equip_affix_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EquipAffixExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::EquipAffixExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EquipAffixExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::EquipAffixExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_affix_id = (uint32_t *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false> *)(v3 + 96)) )
    {
      v11 = 1;
      goto LABEL_18;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::EquipAffixExcelConfig>(__in);
    affix_config = std::get<1ul,unsigned int const,data::EquipAffixExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::PropValConfig,data::FightPropType data::PropValConfig::*>(
      &affix_config->add_props,
      (data::FightPropType *)8);
    v7 = std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::operator[](
           &this->equip_affix_level_config_map_,
           &affix_config->id);
    std::vector<data::EquipAffixExcelConfig>::emplace_back<data::EquipAffixExcelConfig&>(
      v7,
      affix_config,
      (data::EquipAffixExcelConfig *)v7);
    p_avatar_talent_config_mgr = &txt_config_mgr->avatar_talent_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&affix_config->id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)affix_config + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&affix_config->id >> 3)
                                                                  + 0x7FFF8000) )
    {
      p_avatar_talent_config_mgr = (AvatarTalentExcelConfigMgr *)&affix_config->id;
      __asan_report_load4(&affix_config->id);
    }
    if ( (unsigned int)AvatarTalentExcelConfigMgr::addOpenConfigIndex(
                         p_avatar_talent_config_mgr,
                         &affix_config->open_config,
                         OPEN_CONFIG_EQUIP_AFFIX,
                         affix_config->id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false,false> *const)(v3 + 64));
  }
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
    "./src/txt_data_manual/EquipAffixExcelConfig.cpp",
    "rewriteConfig",
    63);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 192),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v9, (const char (*)[55])byte_1AC6E580);
  p_affix_id = &affix_config->affix_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &affix_config->affix_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v11 = 0;
LABEL_18:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v11 == 1 )
  {
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
    __for_range_0 = &this->equip_affix_level_config_map_;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_affix_id);
    *(std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_affix_id);
    *(std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false> *)(v3 + 128),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false> *)(v3 + 160)) )
    {
      v22 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false,false> *const)(v3 + 128));
      std::get<0ul,unsigned int const,std::vector<data::EquipAffixExcelConfig>>(v22);
      affix_config_vec = std::get<1ul,unsigned int const,std::vector<data::EquipAffixExcelConfig>>(v22);
      M_current = std::vector<data::EquipAffixExcelConfig>::end(affix_config_vec)._M_current;
      v13._M_current = std::vector<data::EquipAffixExcelConfig>::begin(affix_config_vec)._M_current;
      std::sort<__gnu_cxx::__normal_iterator<data::EquipAffixExcelConfig *,std::vector<data::EquipAffixExcelConfig>>,EquipAffixExcelConfigMgr::rewriteConfig(TxtConfigMgr &)::{lambda(data::EquipAffixExcelConfig const&,data::EquipAffixExcelConfig const&)#1}>(
        v13,
        (__gnu_cxx::__normal_iterator<data::EquipAffixExcelConfig*,std::vector<data::EquipAffixExcelConfig> >)M_current,
        v14);
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false,false> *const)(v3 + 128));
    }
    v2 = 0;
  }
  result = v2;
  if ( v24 == (char *)v3 )
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
  return result;
};

// Line 68: range 0000000013AA7B6E-0000000013AA7BFD
bool __cdecl EquipAffixExcelConfigMgr::rewriteConfig(TxtConfigMgr &)::{lambda(data::EquipAffixExcelConfig const&,data::EquipAffixExcelConfig const&)#1}::operator()(
        const EquipAffixExcelConfigMgr::rewriteConfig::<lambda(const data::EquipAffixExcelConfig&, const data::EquipAffixExcelConfig&)> *const __closure,
        const data::EquipAffixExcelConfig *lhs,
        const data::EquipAffixExcelConfig *rhs)
{
  uint32_t level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&lhs->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&lhs->level);
  }
  level = lhs->level;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rhs->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rhs->level);
  }
  return level < rhs->level;
};

// Line 80: range 0000000013AA81B0-0000000013AA84FD
const data::EquipAffixExcelConfig *__fastcall EquipAffixExcelConfigMgr::findEquipAffixExcelConfig(
        const EquipAffixExcelConfigMgr *const this,
        __int64 affix_id,
        uint32_t level)
{
  const data::EquipAffixExcelConfig *v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>> *p_equip_affix_level_config_map; // rdx
  std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>> *v8; // rdx
  char *v9; // rsi
  bool v10; // al
  int v11; // eax
  const data::EquipAffixExcelConfig *result; // rax
  std::vector<data::EquipAffixExcelConfig> *__for_range; // [rsp+20h] [rbp-100h]
  const data::EquipAffixExcelConfig *affix_config; // [rsp+28h] [rbp-F8h]
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 11 affix_id:79 64 8 7 iter:81 96 8 9 <unknown> 128 8 14 __for_begin:87 160 8 12 __for_end:87";
  *(_QWORD *)(v4 + 16) = EquipAffixExcelConfigMgr::findEquipAffixExcelConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -202116352;
  *(_DWORD *)(v4 + 48) = affix_id;
  p_equip_affix_level_config_map = &this->equip_affix_level_config_map_;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, affix_id);
  *(std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::find(p_equip_affix_level_config_map, (const std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::key_type *)(v4 + 48));
  v8 = &this->equip_affix_level_config_map_;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 48);
  *(std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::end(v8);
  v9 = (char *)(v4 + 96);
  v10 = std::__detail::operator==<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false> *)(v4 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false> *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    v3 = 0LL;
  }
  else
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false,false> *const)(v4 + 64))->second;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, v9);
    *(std::vector<data::EquipAffixExcelConfig>::const_iterator *)(v4 + 128) = std::vector<data::EquipAffixExcelConfig>::begin(__for_range);
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 160, v9);
    *(std::vector<data::EquipAffixExcelConfig>::const_iterator *)(v4 + 160) = std::vector<data::EquipAffixExcelConfig>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::EquipAffixExcelConfig const*,std::vector<data::EquipAffixExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::EquipAffixExcelConfig*,std::vector<data::EquipAffixExcelConfig> > *)(v4 + 128),
              (const __gnu_cxx::__normal_iterator<const data::EquipAffixExcelConfig*,std::vector<data::EquipAffixExcelConfig> > *)(v4 + 160)) )
    {
      affix_config = __gnu_cxx::__normal_iterator<data::EquipAffixExcelConfig const*,std::vector<data::EquipAffixExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::EquipAffixExcelConfig*,std::vector<data::EquipAffixExcelConfig> > *const)(v4 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&affix_config->level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&affix_config->level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&affix_config->level);
      }
      if ( level == affix_config->level )
      {
        v3 = affix_config;
        v11 = 0;
        goto LABEL_22;
      }
      __gnu_cxx::__normal_iterator<data::EquipAffixExcelConfig const*,std::vector<data::EquipAffixExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::EquipAffixExcelConfig*,std::vector<data::EquipAffixExcelConfig> > *const)(v4 + 128));
    }
    v11 = 1;
LABEL_22:
    if ( v11 == 1 )
      v3 = 0LL;
  }
  result = v3;
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 98: range 0000000013AA84FE-0000000013AA8571
uint32_t __cdecl EquipAffixExcelConfigMgr::findEquipAffixIdentId(
        const EquipAffixExcelConfigMgr *const this,
        uint32_t affix_id,
        uint32_t level)
{
  const data::EquipAffixExcelConfig *equip_affix_config_ptr; // [rsp+18h] [rbp-8h]

  equip_affix_config_ptr = EquipAffixExcelConfigMgr::findEquipAffixExcelConfig(this, affix_id, level);
  if ( !equip_affix_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&equip_affix_config_ptr->affix_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&equip_affix_config_ptr->affix_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&equip_affix_config_ptr->affix_id);
  }
  return equip_affix_config_ptr->affix_id;
};

// Line 108: range 0000000013AA8572-0000000013AA87A8
__int64 __fastcall EquipAffixExcelConfigMgr::findEquipAffixMaxLevel(
        const EquipAffixExcelConfigMgr *const this,
        __int64 affix_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>> *p_equip_affix_level_config_map; // rdx
  std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>> *v6; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false,false>::pointer v7; // rax
  bool v8; // dl
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false,false>::pointer v9; // rax
  std::vector<data::EquipAffixExcelConfig>::const_reference v10; // rax
  __int64 result; // rax
  char v12[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 affix_id:107 64 8 8 iter:109 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = EquipAffixExcelConfigMgr::findEquipAffixMaxLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = affix_id;
  p_equip_affix_level_config_map = &this->equip_affix_level_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, affix_id);
  *(std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::find(p_equip_affix_level_config_map, (const std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::key_type *)(v2 + 48));
  v6 = &this->equip_affix_level_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::end(v6);
  v8 = 0;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false,false> *const)(v2 + 64));
    if ( !std::vector<data::EquipAffixExcelConfig>::empty(&v7->second) )
      v8 = 1;
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false,false> *const)(v2 + 64));
    v10 = std::vector<data::EquipAffixExcelConfig>::back(&v9->second);
    if ( *(_BYTE *)(((unsigned __int64)&v10->level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v10->level);
    }
    result = v10->level;
  }
  else
  {
    result = 0LL;
  }
  if ( v12 == (char *)v2 )
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

// Line 118: range 0000000013AA87AA-0000000013AA8989
_BOOL8 __fastcall EquipAffixExcelConfigMgr::isEquipAffixValid(
        const EquipAffixExcelConfigMgr *const this,
        __int64 affix_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>> *p_equip_affix_level_config_map; // rdx
  std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>> *v6; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false,false>::pointer v7; // rax
  bool v8; // al
  _BOOL8 result; // rax
  char v10[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 affix_id:117 64 8 8 iter:119 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = EquipAffixExcelConfigMgr::isEquipAffixValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = affix_id;
  p_equip_affix_level_config_map = &this->equip_affix_level_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, affix_id);
  *(std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::find(p_equip_affix_level_config_map, (const std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::key_type *)(v2 + 48));
  v6 = &this->equip_affix_level_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::end(v6);
  v8 = 0;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::EquipAffixExcelConfig> >,false,false> *const)(v2 + 64));
    if ( !std::vector<data::EquipAffixExcelConfig>::empty(&v7->second) )
      v8 = 1;
  }
  result = v8;
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
