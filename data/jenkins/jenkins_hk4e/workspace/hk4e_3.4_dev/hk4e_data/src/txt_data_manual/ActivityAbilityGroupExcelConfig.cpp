// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityAbilityGroupExcelConfig.cpp

// Line 24: range 0000000012AA822E-0000000012AA8289
int32_t __cdecl ActivityAbilityGroupExcelConfigMgr::rewriteConfig(
        ActivityAbilityGroupExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  if ( ActivityAbilityGroupExcelConfigMgr::rewriteIndexAbilityGroupRuleConfigData(this, txt_config_mgr)
    || ActivityAbilityGroupExcelConfigMgr::rewriteActivityAbilityGroupRuleConfigData(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 34: range 0000000012AA828A-0000000012AA82E5
int32_t __cdecl ActivityAbilityGroupExcelConfigMgr::checkConfig(
        ActivityAbilityGroupExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  if ( ActivityAbilityGroupExcelConfigMgr::checkIndexAbilityGroupRuleConfigData(this, txt_config_mgr)
    || ActivityAbilityGroupExcelConfigMgr::checkActivityAbilityGroupRuleConfigData(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 44: range 0000000012AA82E6-0000000012AA89EB
int32_t __cdecl ActivityAbilityGroupExcelConfigMgr::rewriteIndexAbilityGroupRuleConfigData(
        ActivityAbilityGroupExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // edx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned __int64 v11; // rax
  std::string *p_ability_group_name; // rsi
  uint32_t avatar_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t weapon_id; // ecx
  char v17; // dl
  data::ActivityAbilityGroupRuleConfig *v18; // rax
  unsigned __int64 v19; // rax
  int v20; // eax
  int32_t result; // eax
  data::ActivityAbilityGroupExcelConfigVec *__for_range; // [rsp+10h] [rbp-180h]
  const data::ActivityAbilityGroupExcelConfig *group_config; // [rsp+18h] [rbp-178h]
  char v24[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 8 14 __for_begin:45 80 8 12 __for_end:45 112 32 9 <unknown> 176 32 9 <unknown> 240 40 14 rule_config:57";
  *(_QWORD *)(v3 + 16) = ActivityAbilityGroupExcelConfigMgr::rewriteIndexAbilityGroupRuleConfigData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  __for_range = &this->activity_ability_group_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::vector<data::ActivityAbilityGroupExcelConfig>::iterator *)(v3 + 48) = std::vector<data::ActivityAbilityGroupExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::vector<data::ActivityAbilityGroupExcelConfig>::iterator *)(v3 + 80) = std::vector<data::ActivityAbilityGroupExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::ActivityAbilityGroupExcelConfig *,std::vector<data::ActivityAbilityGroupExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::ActivityAbilityGroupExcelConfig*,std::vector<data::ActivityAbilityGroupExcelConfig> > *)(v3 + 48),
            (const __gnu_cxx::__normal_iterator<data::ActivityAbilityGroupExcelConfig*,std::vector<data::ActivityAbilityGroupExcelConfig> > *)(v3 + 80)) )
  {
    group_config = __gnu_cxx::__normal_iterator<data::ActivityAbilityGroupExcelConfig *,std::vector<data::ActivityAbilityGroupExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ActivityAbilityGroupExcelConfig*,std::vector<data::ActivityAbilityGroupExcelConfig> > *const)(v3 + 48));
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>,unsigned int>(
           &this->idx_to_rule_map,
           &group_config->index) )
    {
      *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 112, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 112),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityAbilityGroupExcelConfig.cpp",
        "rewriteIndexAbilityGroupRuleConfigData",
        49);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 112),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])byte_1AA19380);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &group_config->index);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
      *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
    }
    else if ( (unsigned __int8)std::string::empty() )
    {
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityAbilityGroupExcelConfig.cpp",
        "rewriteIndexAbilityGroupRuleConfigData",
        54);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 176),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v9, (const char (*)[39])byte_1AA193C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &group_config->index);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
    }
    else
    {
      v11 = ((v3 + 240) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      p_ability_group_name = &group_config->ability_group_name;
      std::string::basic_string(v3 + 240, &group_config->ability_group_name);
      if ( *(_BYTE *)(((unsigned __int64)&group_config->avatar_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&group_config->avatar_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&group_config->avatar_id);
      }
      avatar_id = group_config->avatar_id;
      v14 = *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(p_ability_group_name) = v14 != 0;
        __asan_report_store4(v3 + 272, p_ability_group_name);
      }
      *(_DWORD *)(v3 + 272) = avatar_id;
      v15 = (((_BYTE)group_config + 52) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&group_config->weapon_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)group_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_config->weapon_id >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&group_config->weapon_id);
      }
      weapon_id = group_config->weapon_id;
      v17 = *(_BYTE *)(((v3 + 276) >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)(((v3 - 16 + 36) & 7) + 3) >= v17 )
      {
        LOBYTE(v15) = v17 != 0;
        __asan_report_store4(v3 + 276, v15);
      }
      *(_DWORD *)(v3 + 276) = weapon_id;
      v18 = std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>::operator[](
              &this->idx_to_rule_map,
              &group_config->index);
      data::ActivityAbilityGroupRuleConfig::operator=(v18, (const data::ActivityAbilityGroupRuleConfig *)(v3 + 240));
      data::ActivityAbilityGroupRuleConfig::~ActivityAbilityGroupRuleConfig((data::ActivityAbilityGroupRuleConfig *const)(v3 + 240));
      v8 = 1;
    }
    v19 = ((v3 + 240) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    if ( v8 != 1 )
    {
      v20 = 0;
      goto LABEL_31;
    }
    __gnu_cxx::__normal_iterator<data::ActivityAbilityGroupExcelConfig *,std::vector<data::ActivityAbilityGroupExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ActivityAbilityGroupExcelConfig*,std::vector<data::ActivityAbilityGroupExcelConfig> > *const)(v3 + 48));
  }
  v20 = 1;
LABEL_31:
  if ( v20 == 1 )
    v2 = 0;
  result = v2;
  if ( v24 == (char *)v3 )
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

// Line 66: range 0000000012AA89EC-0000000012AA8E05
int32_t __cdecl ActivityAbilityGroupExcelConfigMgr::rewriteActivityAbilityGroupRuleConfigData(
        ActivityAbilityGroupExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_activity_id; // rax
  unsigned __int64 v6; // rax
  std::string *p_ability_group_name; // rsi
  uint32_t avatar_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t weapon_id; // ecx
  char v12; // dl
  std::vector<data::ActivityAbilityGroupRuleConfig> *v13; // rax
  unsigned __int64 v14; // rax
  int32_t result; // eax
  data::ActivityAbilityGroupExcelConfigVec *__for_range; // [rsp+10h] [rbp-F0h]
  const data::ActivityAbilityGroupExcelConfig *group_config; // [rsp+18h] [rbp-E8h]
  char v18[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 8 14 __for_begin:67 80 8 12 __for_end:67 112 40 14 rule_config:71";
  *(_QWORD *)(v2 + 16) = ActivityAbilityGroupExcelConfigMgr::rewriteActivityAbilityGroupRuleConfigData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  __for_range = &this->activity_ability_group_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::vector<data::ActivityAbilityGroupExcelConfig>::iterator *)(v2 + 48) = std::vector<data::ActivityAbilityGroupExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::vector<data::ActivityAbilityGroupExcelConfig>::iterator *)(v2 + 80) = std::vector<data::ActivityAbilityGroupExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::ActivityAbilityGroupExcelConfig *,std::vector<data::ActivityAbilityGroupExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::ActivityAbilityGroupExcelConfig*,std::vector<data::ActivityAbilityGroupExcelConfig> > *)(v2 + 48),
            (const __gnu_cxx::__normal_iterator<data::ActivityAbilityGroupExcelConfig*,std::vector<data::ActivityAbilityGroupExcelConfig> > *)(v2 + 80)) )
  {
    group_config = __gnu_cxx::__normal_iterator<data::ActivityAbilityGroupExcelConfig *,std::vector<data::ActivityAbilityGroupExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ActivityAbilityGroupExcelConfig*,std::vector<data::ActivityAbilityGroupExcelConfig> > *const)(v2 + 48));
    p_activity_id = &group_config->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_activity_id);
    }
    if ( group_config->activity_id )
    {
      v6 = ((v2 + 112) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_BYTE *)(v6 + 4) = 0;
      p_ability_group_name = &group_config->ability_group_name;
      std::string::basic_string(v2 + 112, &group_config->ability_group_name);
      if ( *(_BYTE *)(((unsigned __int64)&group_config->avatar_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&group_config->avatar_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&group_config->avatar_id);
      }
      avatar_id = group_config->avatar_id;
      v9 = *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000);
      if ( v9 != 0 && v9 <= 3 )
      {
        LOBYTE(p_ability_group_name) = v9 != 0;
        __asan_report_store4(v2 + 144, p_ability_group_name);
      }
      *(_DWORD *)(v2 + 144) = avatar_id;
      v10 = (((_BYTE)group_config + 52) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&group_config->weapon_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)group_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_config->weapon_id >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&group_config->weapon_id);
      }
      weapon_id = group_config->weapon_id;
      v12 = *(_BYTE *)(((v2 + 148) >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)(((v2 - 108) & 7) + 3) >= v12 )
      {
        LOBYTE(v10) = v12 != 0;
        __asan_report_store4(v2 + 148, v10);
      }
      *(_DWORD *)(v2 + 148) = weapon_id;
      v13 = std::unordered_map<unsigned int,std::vector<data::ActivityAbilityGroupRuleConfig>>::operator[](
              &this->activity_id_to_rule_map,
              &group_config->activity_id);
      std::vector<data::ActivityAbilityGroupRuleConfig>::push_back(
        v13,
        (const std::vector<data::ActivityAbilityGroupRuleConfig>::value_type *)(v2 + 112));
      data::ActivityAbilityGroupRuleConfig::~ActivityAbilityGroupRuleConfig((data::ActivityAbilityGroupRuleConfig *const)(v2 + 112));
      v14 = ((v2 + 112) >> 3) + 2147450880;
      *(_DWORD *)v14 = -117901064;
      *(_BYTE *)(v14 + 4) = -8;
    }
    __gnu_cxx::__normal_iterator<data::ActivityAbilityGroupExcelConfig *,std::vector<data::ActivityAbilityGroupExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ActivityAbilityGroupExcelConfig*,std::vector<data::ActivityAbilityGroupExcelConfig> > *const)(v2 + 48));
  }
  result = 0;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 81: range 0000000012AA8E06-0000000012AA918A
int32_t __cdecl ActivityAbilityGroupExcelConfigMgr::checkIndexAbilityGroupRuleConfigData(
        ActivityAbilityGroupExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  int32_t result; // eax
  JsonConfigMgr *json_config_mgr; // [rsp+10h] [rbp-100h]
  std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig> *__for_range; // [rsp+18h] [rbp-F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig>,false,false>::reference v14; // [rsp+20h] [rbp-F0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig> >::type *idx; // [rsp+28h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig> >::type *rule_config; // [rsp+30h] [rbp-E0h]
  char v17[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:83 64 8 12 __for_end:83 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityAbilityGroupExcelConfigMgr::checkIndexAbilityGroupRuleConfigData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
  __for_range = &this->idx_to_rule_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig>,false,false> *const)(v3 + 32));
    idx = std::get<0ul,unsigned int const,data::ActivityAbilityGroupRuleConfig>(v14);
    rule_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityAbilityGroupRuleConfig>(v14);
    if ( !JsonConfigMgr::findAbilityGroupConfig(json_config_mgr, &rule_config->ability_group_name) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityAbilityGroupExcelConfig.cpp",
    "checkIndexAbilityGroupRuleConfigData",
    88);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v6, (const char (*)[45])byte_1AA19520);
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, idx);
  v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])byte_1AA19580);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &rule_config->ability_group_name);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_16:
  if ( v10 == 1 )
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

// Line 96: range 0000000012AA918C-0000000012AA919E
int32_t __cdecl ActivityAbilityGroupExcelConfigMgr::checkActivityAbilityGroupRuleConfigData(
        ActivityAbilityGroupExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 102: range 0000000012AA91A0-0000000012AA9296
const std::vector<data::ActivityAbilityGroupRuleConfig> *__fastcall ActivityAbilityGroupExcelConfigMgr::findAbilityGroupRuleConfigVecByActivityId(
        const ActivityAbilityGroupExcelConfigMgr *const this,
        uint32_t activity_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::vector<data::ActivityAbilityGroupRuleConfig> *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 activity_id:101";
  *(_QWORD *)(v2 + 16) = ActivityAbilityGroupExcelConfigMgr::findAbilityGroupRuleConfigVecByActivityId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = activity_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<data::ActivityAbilityGroupRuleConfig>> const,unsigned int>(
         &this->activity_id_to_rule_map,
         (const unsigned int *)(v2 + 32)) )
  {
    result = std::unordered_map<unsigned int,std::vector<data::ActivityAbilityGroupRuleConfig>>::at(
               &this->activity_id_to_rule_map,
               (const std::unordered_map<unsigned int,std::vector<data::ActivityAbilityGroupRuleConfig>>::key_type *)(v2 + 32));
  }
  else
  {
    result = 0LL;
  }
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

// Line 114: range 0000000012AA9298-0000000012AA938E
const data::ActivityAbilityGroupRuleConfig *__fastcall ActivityAbilityGroupExcelConfigMgr::findAbilityGroupRuleConfigByIndex(
        const ActivityAbilityGroupExcelConfigMgr *const this,
        uint32_t index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const data::ActivityAbilityGroupRuleConfig *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 index:113";
  *(_QWORD *)(v2 + 16) = ActivityAbilityGroupExcelConfigMgr::findAbilityGroupRuleConfigByIndex;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = index;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig> const,unsigned int>(
         &this->idx_to_rule_map,
         (const unsigned int *)(v2 + 32)) )
  {
    result = std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>::at(
               &this->idx_to_rule_map,
               (const std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>::key_type *)(v2 + 32));
  }
  else
  {
    result = 0LL;
  }
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
