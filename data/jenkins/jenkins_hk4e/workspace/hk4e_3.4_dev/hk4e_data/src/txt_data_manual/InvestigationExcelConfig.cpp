// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/InvestigationExcelConfig.cpp

// Line 19: range 00000000144913E0-0000000014491608
int32_t __cdecl InvestigationExcelConfigMgr::checkConfig(
        InvestigationExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = InvestigationExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( InvestigationExcelConfigMgr::checkInvestigationConfig(this, txt_config_mgr)
    || InvestigationExcelConfigMgr::checkInvestigationTargetConfig(this, txt_config_mgr)
    || InvestigationExcelConfigMgr::checkInvestigationMonsterConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/InvestigationExcelConfig.cpp",
      "checkConfig",
      24);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v6, (const char (*)[52])byte_1AD86020);
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

// Line 31: range 000000001449160A-0000000014491F81
int32_t __cdecl InvestigationExcelConfigMgr::checkInvestigationConfig(
        InvestigationExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  const char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  int v18; // eax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int32_t result; // eax
  data::InvestigationConfigMap *__for_range; // [rsp+18h] [rbp-1D8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false>::reference v30; // [rsp+20h] [rbp-1D0h]
  std::tuple_element<0,std::pair<unsigned int const,data::InvestigationConfig> >::type *id; // [rsp+28h] [rbp-1C8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::InvestigationConfig> >::type *config; // [rsp+30h] [rbp-1C0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1B8h]
  char v34[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 10 next_id:34 64 8 14 __for_begin:32 96 8 12 __for_end:32 128 8 14 __for_begin:34 160 8 1"
                        "2 __for_end:34 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = InvestigationExcelConfigMgr::checkInvestigationConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -202116109;
  __for_range = &this->investigation_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InvestigationConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::InvestigationConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InvestigationConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::InvestigationConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::InvestigationConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationConfig>,false> *)(v3 + 96)) )
    {
      v18 = 1;
      goto LABEL_45;
    }
    v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::InvestigationConfig>(v30);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::InvestigationConfig> >::type *)std::get<1ul,unsigned int const,data::InvestigationConfig>(v30);
    __for_range_0 = &config->next_investigation_id_list;
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
      v7 = (const char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v17 = 1;
        goto LABEL_26;
      }
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
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v7) = v11 != 0;
        __asan_report_store4(v3 + 48, v7);
      }
      *(_DWORD *)(v3 + 48) = v10;
      if ( !data::InvestigationExcelConfigMgrBase::findInvestigationConfig(this, *(unsigned int *)(v3 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/InvestigationExcelConfig.cpp",
      "checkInvestigationConfig",
      38);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 192),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])byte_1AD86180);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v14, (const char (*)[16])byte_1AD861C0);
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
    v7 = byte_1AD86200;
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])byte_1AD86200);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v17 = 0;
LABEL_26:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v18 = 0;
      goto LABEL_45;
    }
    if ( *(char *)(((unsigned __int64)&config->is_reward_empty >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->is_reward_empty, v7, &config->is_reward_empty);
    if ( !config->is_reward_empty )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&config->reward_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->reward_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->reward_id);
    }
    if ( config->reward_id )
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
        "./src/txt_data_manual/InvestigationExcelConfig.cpp",
        "checkInvestigationConfig",
        46);
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])byte_1AD86180);
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, id);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v21, (const char (*)[24])byte_1AD86240);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      v2 = -1;
      v18 = 0;
      goto LABEL_45;
    }
LABEL_43:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false> *const)(v3 + 64));
  }
  if ( *(_BYTE *)(((unsigned __int64)&config->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&config->reward_id);
  }
  if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                          txt_config_mgr,
                          config->reward_id,
                          ITEM_LIMIT_INVESTIGATION) == 1 )
    goto LABEL_43;
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
    "./src/txt_data_manual/InvestigationExcelConfig.cpp",
    "checkInvestigationConfig",
    54);
  v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 320),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])byte_1AD86180);
  v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, id);
  v25 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v24, (const char (*)[19])byte_1AD86280);
  v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &config->reward_id);
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])byte_1AD86200);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
  v2 = -1;
  v18 = 0;
LABEL_45:
  if ( v18 == 1 )
    v2 = 0;
  result = v2;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
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

// Line 63: range 0000000014491F82-0000000014492561
int32_t __cdecl InvestigationExcelConfigMgr::checkInvestigationTargetConfig(
        InvestigationExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  InvestigationExcelConfigMgr *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  data::InvestigationTargetConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false>::reference __in; // [rsp+18h] [rbp-128h]
  const unsigned int *id; // [rsp+20h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,data::InvestigationTargetConfig> >::type *config; // [rsp+28h] [rbp-118h]
  char v23[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 14 __for_begin:64 64 8 12 __for_end:64 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = InvestigationExcelConfigMgr::checkInvestigationTargetConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->investigation_target_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InvestigationTargetConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::InvestigationTargetConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InvestigationTargetConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::InvestigationTargetConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::InvestigationTargetConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationTargetConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationTargetConfig>,false> *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_27;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::InvestigationTargetConfig>(__in);
    config = std::get<1ul,unsigned int const,data::InvestigationTargetConfig>(__in);
    if ( *(char *)(((unsigned __int64)&config->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->is_disuse, v3 + 64, &config->is_disuse);
    if ( !config->is_disuse )
    {
      v6 = this;
      if ( *(_BYTE *)(((unsigned __int64)&config->investigation_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->investigation_id >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&config->investigation_id);
      }
      if ( !data::InvestigationExcelConfigMgrBase::findInvestigationConfig(v6, config->investigation_id) )
      {
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
          "./src/txt_data_manual/InvestigationExcelConfig.cpp",
          "checkInvestigationTargetConfig",
          72);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v7, (const char (*)[20])byte_1AD86360);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])byte_1AD863A0);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->investigation_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])byte_1AD86200);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
        v2 = -1;
        v12 = 0;
        goto LABEL_27;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->reward_id);
      }
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              config->reward_id,
                              ITEM_LIMIT_INVESTIGATION) != 1 )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/InvestigationExcelConfig.cpp",
    "checkInvestigationTargetConfig",
    77);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v13, (const char (*)[20])byte_1AD86360);
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
  v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v15, (const char (*)[19])byte_1AD86280);
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->reward_id);
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])byte_1AD86200);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v12 = 0;
LABEL_27:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 85: range 00000000144926AC-0000000014494103
int32_t __cdecl InvestigationExcelConfigMgr::checkInvestigationMonsterConfig(
        InvestigationExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rcx
  uint32_t *p_city_id; // rax
  __int64 city_id; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  _BOOL4 v14; // edx
  unsigned __int64 v15; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  char *v29; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v30; // rax
  int *v31; // rdx
  int v32; // ecx
  char v33; // al
  __int64 v34; // rsi
  int SceneIdByGroupId; // edx
  char v36; // al
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  int v39; // eax
  __int64 v40; // rsi
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  unsigned int *M_current; // rcx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rdx
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  int v52; // edx
  unsigned __int64 v53; // rax
  uint32_t *p_unlock_parent_quest_id; // rsi
  char *v55; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v56; // rax
  int *v57; // rdx
  int v58; // ecx
  char v59; // al
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rdx
  int map_mark_create_type; // eax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *Condition; // rax
  common::milog::MiLogStream *v68; // rdx
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rdx
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rax
  int v75; // eax
  char v77; // [rsp+0h] [rbp-4D0h]
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __lastb; // [rsp+8h] [rbp-4C8h]
  int __last; // [rsp+8h] [rbp-4C8h]
  unsigned int *__lasta; // [rsp+8h] [rbp-4C8h]
  int32_t ret; // [rsp+2Ch] [rbp-4A4h]
  LuaConfigMgr *lua_config_mgr; // [rsp+30h] [rbp-4A0h]
  data::InvestigationMonsterConfigMap *__for_range; // [rsp+38h] [rbp-498h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false>::reference __in; // [rsp+40h] [rbp-490h]
  const unsigned int *id; // [rsp+48h] [rbp-488h]
  std::tuple_element<1,std::pair<unsigned int const,data::InvestigationMonsterConfig> >::type *config; // [rsp+50h] [rbp-480h]
  std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-478h]
  std::vector<unsigned int> *__for_range_1; // [rsp+60h] [rbp-470h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+68h] [rbp-468h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+70h] [rbp-460h]
  std::vector<unsigned int> *__for_range_2; // [rsp+78h] [rbp-458h]
  char v93[1104]; // [rsp+80h] [rbp-450h] BYREF
  std::pair<unsigned int const,unsigned int> v94; // 0:rsi.8

  v3 = (unsigned __int64)v93;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1056LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "23 32 4 11 group_id:96 48 4 12 group_id:106 64 4 12 scene_id:108 80 4 19 parent_quest_id:137 96 "
                        "8 14 __for_begin:88 128 8 12 __for_end:88 160 8 14 __for_begin:96 192 8 12 __for_end:96 224 8 15"
                        " __for_begin:106 256 8 13 __for_end:106 288 8 8 pred:122 320 8 15 __for_begin:137 352 8 13 __for"
                        "_end:137 384 24 30 unlock_parent_quest_id_vec:132 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9"
                        " <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 "
                        "<unknown> 960 56 18 group_count_map:95";
  *(_QWORD *)(v3 + 16) = InvestigationExcelConfigMgr::checkInvestigationMonsterConfig;
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
  v5[536862731] = -218959360;
  v5[536862732] = -234881024;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -218103808;
  v5[536862752] = -202116109;
  ret = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->investigation_monster_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false> *)(v3 + 128)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false> *const)(v3 + 96));
    id = std::get<0ul,unsigned int const,data::InvestigationMonsterConfig>(__in);
    config = std::get<1ul,unsigned int const,data::InvestigationMonsterConfig>(__in);
    p_world_area_config_mgr = &txt_config_mgr->world_area_config_mgr;
    p_city_id = &config->city_id;
    if ( *(_BYTE *)(((unsigned __int64)p_city_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_city_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_city_id);
    }
    city_id = config->city_id;
    if ( WorldAreaExcelConfigMgr::findCityConfig(p_world_area_config_mgr, city_id) )
    {
      v15 = ((v3 + 960) >> 3) + 2147450880;
      *(_DWORD *)v15 = 0;
      *(_WORD *)(v15 + 4) = 0;
      *(_BYTE *)(v15 + 6) = 0;
      std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 960));
      __for_range_0 = &config->group_id_list;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, city_id);
      *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, city_id);
      *(std::vector<unsigned int>::iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v94 = (std::pair<unsigned int const,unsigned int>)(v3 + 192);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 192)) )
          break;
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
        v16 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 160));
        v17 = (int *)v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        v18 = *v17;
        v19 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
        if ( v19 != 0 && v19 <= 3 )
        {
          LOBYTE(v94.first) = v19 != 0;
          __asan_report_store4(v3 + 32, v94);
        }
        *(_DWORD *)(v3 + 32) = v18;
        v20 = std::unordered_map<unsigned int,unsigned int>::operator[](
                (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 960),
                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        ++*v20;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 160));
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      __lastb._M_current = (unsigned int *)std::unordered_map<unsigned int,unsigned int>::size((const std::unordered_map<unsigned int,unsigned int> *const)(v3 + 960));
      if ( __lastb._M_current != (unsigned int *)std::vector<unsigned int>::size(&config->group_id_list) )
      {
        common::tools::MiscUtils::erase_if<unsigned int,unsigned int,InvestigationExcelConfigMgr::checkInvestigationMonsterConfig(TxtConfigMgr const&)::{lambda(std::pair<unsigned int const,unsigned int>)#1}>(
          (std::unordered_map<unsigned int,unsigned int> *)(v3 + 960),
          v94,
          v21,
          v22,
          v23,
          v24,
          v77);
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
          "./src/txt_data_manual/InvestigationExcelConfig.cpp",
          "checkInvestigationMonsterConfig",
          103);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v25, (const char (*)[16])byte_1AD866C0);
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, id);
        v28 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v27,
                (const char (*)[21])" duplicate group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
          v28,
          (const std::unordered_map<unsigned int,unsigned int> *)(v3 + 960));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        __last = 0;
        goto LABEL_106;
      }
      __for_range_1 = &config->group_id_list;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v94);
      *(std::vector<unsigned int>::iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v94);
      *(std::vector<unsigned int>::iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v29 = (char *)(v3 + 256);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 224),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 256)) )
          break;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v30 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 224));
        v31 = (int *)v30;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v30);
        }
        v32 = *v31;
        v33 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v33 != 0 && v33 <= 3 )
        {
          LOBYTE(v29) = v33 != 0;
          __asan_report_store4(v3 + 48, v29);
        }
        *(_DWORD *)(v3 + 48) = v32;
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        v34 = *(unsigned int *)(v3 + 48);
        SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, v34);
        v36 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
        if ( v36 != 0 && v36 <= 3 )
        {
          LOBYTE(v34) = v36 != 0;
          __asan_report_store4(v3 + 64, v34);
        }
        *(_DWORD *)(v3 + 64) = SceneIdByGroupId;
        scene_script_config_ptr = LuaConfigMgr::findSceneScriptConfig(lua_config_mgr, *(unsigned int *)(v3 + 64));
        if ( scene_script_config_ptr )
        {
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          v40 = *(unsigned int *)(v3 + 48);
          group_script_config_ptr = SceneScriptConfig::findGroupScriptConfig(scene_script_config_ptr, v40);
          if ( group_script_config_ptr )
          {
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 288, v40);
            *(_QWORD *)(v3 + 288) = group_script_config_ptr;
            __lasta = std::vector<unsigned int>::end(&config->monster_id_list)._M_current;
            M_current = std::vector<unsigned int>::begin(&config->monster_id_list)._M_current;
            if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
              __asan_report_load8(v3 + 288);
            if ( std::none_of<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,InvestigationExcelConfigMgr::checkInvestigationMonsterConfig(TxtConfigMgr const&)::{lambda(unsigned int)#2}>(
                   (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                   (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__lasta,
                   *(InvestigationExcelConfigMgr::checkInvestigationMonsterConfig::<lambda(uint32_t)> *)(v3 + 288)) )
            {
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
                "./src/txt_data_manual/InvestigationExcelConfig.cpp",
                "checkInvestigationMonsterConfig",
                128);
              v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 704),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v47,
                      (const char (*)[16])byte_1AD866C0);
              v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, id);
              v50 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v49,
                      (const char (*)[12])byte_1AD867E0);
              v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v50,
                      (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v51, (const char (*)[37])byte_1AD86820);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
              *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v39 = 0;
            }
            else
            {
              v39 = 1;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 640, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 640),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/InvestigationExcelConfig.cpp",
              "checkInvestigationMonsterConfig",
              118);
            v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 640),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v42 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v41,
                    (const char (*)[14])byte_1AD86640);
            v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, id);
            v44 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v43,
                    (const char (*)[18])byte_1AD867A0);
            v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v44,
                    (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v45, (const char (*)[7])byte_1AD86200);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
            *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v39 = 0;
          }
        }
        else
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
            "./src/txt_data_manual/InvestigationExcelConfig.cpp",
            "checkInvestigationMonsterConfig",
            112);
          v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 576),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v38 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  v37,
                  (const char (*)[38])"findSceneScriptConfig fail, scene_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
          *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v39 = 0;
        }
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
        if ( v39 != 1 )
        {
          v52 = 0;
          goto LABEL_68;
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 224));
      }
      v52 = 1;
LABEL_68:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      if ( v52 != 1 )
      {
        __last = 0;
LABEL_106:
        std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 960));
        v14 = __last == 1;
        goto LABEL_107;
      }
      v53 = ((v3 + 384) >> 3) + 2147450880;
      *(_WORD *)v53 = 0;
      *(_BYTE *)(v53 + 2) = 0;
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)(v3 + 384),
        &config->unlock_wq_parent_quest_id_list);
      p_unlock_parent_quest_id = (uint32_t *)((((_BYTE)config + 100) & 7u) + 3);
      if ( *(_BYTE *)(((unsigned __int64)&config->unlock_parent_quest_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->unlock_parent_quest_id >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&config->unlock_parent_quest_id);
      }
      if ( config->unlock_parent_quest_id )
      {
        p_unlock_parent_quest_id = &config->unlock_parent_quest_id;
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v3 + 384),
          &config->unlock_parent_quest_id);
      }
      __for_range_2 = (std::vector<unsigned int> *)(v3 + 384);
      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 320, p_unlock_parent_quest_id);
      *(std::vector<unsigned int>::iterator *)(v3 + 320) = std::vector<unsigned int>::begin(__for_range_2);
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 352, p_unlock_parent_quest_id);
      *(std::vector<unsigned int>::iterator *)(v3 + 352) = std::vector<unsigned int>::end(__for_range_2);
      while ( 1 )
      {
        v55 = (char *)(v3 + 352);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 320),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 352)) )
          break;
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        v56 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 320));
        v57 = (int *)v56;
        if ( *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v56 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v56);
        }
        v58 = *v57;
        v59 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
        if ( v59 != 0 && v59 <= 3 )
        {
          LOBYTE(v55) = v59 != 0;
          __asan_report_store4(v3 + 80, v55);
        }
        *(_DWORD *)(v3 + 80) = v58;
        if ( !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(
                &txt_config_mgr->quest_config_mgr,
                *(unsigned int *)(v3 + 80)) )
        {
          *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 768, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 768),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/InvestigationExcelConfig.cpp",
            "checkInvestigationMonsterConfig",
            141);
          v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 768),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v61 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  v60,
                  (const char (*)[48])"findMainQuestExcelConfig fail, parent_quest_id:");
          v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v61,
                  (const unsigned int *)(v3 + 80));
          v63 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  v62,
                  (const char (*)[25])" InvestigationMonsterId:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
          *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 320));
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((unsigned __int64)&config->map_mark_create_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->map_mark_create_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->map_mark_create_type);
      }
      map_mark_create_type = config->map_mark_create_type;
      if ( map_mark_create_type > 1 )
      {
        if ( map_mark_create_type != 2 )
          goto LABEL_102;
        if ( *(_BYTE *)(((unsigned __int64)&config->map_mark_create_condition.condition_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->map_mark_create_condition.condition_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->map_mark_create_condition.condition_type);
        }
        if ( config->map_mark_create_condition.condition_type > (unsigned int)PlayerLevelGE )
        {
          *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 832) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 832, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 832),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/InvestigationExcelConfig.cpp",
            "checkInvestigationMonsterConfig",
            158);
          v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 832),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v66 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  v65,
                  (const char (*)[50])"invalid map_mark_create_condition.condition_type:");
          Condition = common::milog::MiLogStream::operator<<<data::InvestigationMonsterMapMarkCreateConditionType,(data::InvestigationMonsterMapMarkCreateConditionType*)0>(
                        v66,
                        &config->map_mark_create_condition.condition_type);
          v68 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  Condition,
                  (const char (*)[25])" InvestigationMonsterId:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
          *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else if ( map_mark_create_type < 0 )
      {
LABEL_102:
        *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 896) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 896, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 896),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/InvestigationExcelConfig.cpp",
          "checkInvestigationMonsterConfig",
          165);
        v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 896),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v70 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v69,
                (const char (*)[30])"invalid map_mark_create_type:");
        v71 = common::milog::MiLogStream::operator<<<data::InvestigationMonsterMapMarkCreateType,(data::InvestigationMonsterMapMarkCreateType*)0>(
                v70,
                &config->map_mark_create_type);
        v72 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v71,
                (const char (*)[25])" InvestigationMonsterId:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
        *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 384));
      __last = 1;
      goto LABEL_106;
    }
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
      "./src/txt_data_manual/InvestigationExcelConfig.cpp",
      "checkInvestigationMonsterConfig",
      92);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 448),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])byte_1AD86640);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
    v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v11, (const char (*)[19])byte_1AD86680);
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->city_id);
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])byte_1AD86200);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
    *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v14 = 0;
LABEL_107:
    v73 = ((v3 + 960) >> 3) + 2147450880;
    *(_DWORD *)v73 = -117901064;
    *(_WORD *)(v73 + 4) = -1800;
    *(_BYTE *)(v73 + 6) = -8;
    v74 = ((v3 + 384) >> 3) + 2147450880;
    *(_WORD *)v74 = -1800;
    *(_BYTE *)(v74 + 2) = -8;
    if ( !v14 )
    {
      v75 = 0;
      goto LABEL_111;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false> *const)(v3 + 96));
  }
  v75 = 1;
LABEL_111:
  if ( v75 == 1 )
    v2 = ret;
  if ( v93 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF807C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 132) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1056LL, v93);
  }
  return v2;
};

// Line 102: range 0000000014492562-000000001449265F
__int64 __fastcall InvestigationExcelConfigMgr::checkInvestigationMonsterConfig(TxtConfigMgr const&)::{lambda(std::pair<unsigned int const,unsigned int>)#1}::operator()(
        const InvestigationExcelConfigMgr::checkInvestigationMonsterConfig::<lambda(std::pair<unsigned int const, unsigned int>)> *const __closure,
        std::pair<unsigned int const,unsigned int> pr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // rax
  unsigned int v6; // edx
  char v8[80]; // [rsp+10h] [rbp-50h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 pr:102";
  *(_QWORD *)(v2 + 16) = InvestigationExcelConfigMgr::checkInvestigationMonsterConfig(TxtConfigMgr const&)::{lambda(std::pair<unsigned int const,unsigned int>)#1}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::pair<unsigned int const,unsigned int> *)(v2 + 32) = pr;
  if ( *(_BYTE *)(((v2 + 36) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 36) & 7) + 3) >= *(_BYTE *)(((v2 + 36) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2 + 36);
  }
  v6 = *((_DWORD *)v4 - 7);
  LOBYTE(v6) = v6 == 1;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(v5 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(v5 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v6;
};

// Line 122: range 0000000014492660-00000000144926AB
bool __cdecl InvestigationExcelConfigMgr::checkInvestigationMonsterConfig(TxtConfigMgr const&)::{lambda(unsigned int)#2}::operator()(
        const InvestigationExcelConfigMgr::checkInvestigationMonsterConfig::<lambda(uint32_t)> *const __closure,
        uint32_t id)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  return GroupScriptConfig::findMonsterConfigByMonsterId(__closure->__group_script_config_ptr, id) != 0LL;
};

// Line 175: range 0000000014494104-000000001449432C
int32_t __cdecl InvestigationExcelConfigMgr::rewriteConfig(
        InvestigationExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = InvestigationExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( InvestigationExcelConfigMgr::rewriteInvestigation(this, txt_config_mgr)
    || InvestigationExcelConfigMgr::rewriteInvestigationTarget(this, txt_config_mgr)
    || InvestigationExcelConfigMgr::rewriteInvestigationMonster(this, txt_config_mgr) )
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
      "./src/txt_data_manual/InvestigationExcelConfig.cpp",
      "rewriteConfig",
      180);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v6, (const char (*)[52])byte_1AD869C0);
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

// Line 187: range 000000001449432E-0000000014494996
int32_t __cdecl InvestigationExcelConfigMgr::rewriteInvestigation(
        InvestigationExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  char *v7; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int v19; // edx
  unsigned int v20; // r14d
  char *v21; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v22; // rax
  unsigned int *v23; // rdx
  char v24; // cl
  int v25; // eax
  int32_t result; // eax
  data::InvestigationConfigMap *__for_range; // [rsp+28h] [rbp-158h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false>::reference __in; // [rsp+30h] [rbp-150h]
  std::tuple_element<0,std::pair<unsigned int const,data::InvestigationConfig> >::type *id; // [rsp+38h] [rbp-148h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-138h]
  char v31[304]; // [rsp+50h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 11 next_id:190 64 8 15 __for_begin:188 96 8 13 __for_end:188 128 8 15 __for_begin:190 160"
                        " 8 13 __for_end:190 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = InvestigationExcelConfigMgr::rewriteInvestigation;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  __for_range = &this->investigation_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InvestigationConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::InvestigationConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InvestigationConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::InvestigationConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::InvestigationConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationConfig>,false> *)(v3 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::InvestigationConfig>(__in);
    __for_range_0 = &std::get<1ul,unsigned int const,data::InvestigationConfig>(__in)->next_investigation_id_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<unsigned int>::iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v19 = 1;
        goto LABEL_30;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v7) = v11 != 0;
        __asan_report_store4(v3 + 48, v7);
      }
      *(_DWORD *)(v3 + 48) = v10;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
             &this->pre_investigation_map_,
             (const unsigned int *)(v3 + 48)) )
      {
        break;
      }
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      v20 = *id;
      v21 = (char *)(v3 + 48);
      v22 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->pre_investigation_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      v23 = v22;
      v24 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
      if ( v24 != 0 && (char)(((unsigned __int8)v22 & 7) + 3) >= v24 )
      {
        LOBYTE(v21) = v24 != 0;
        __asan_report_store4(v22, v21);
      }
      *v23 = v20;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
    }
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
      4u,
      "./src/txt_data_manual/InvestigationExcelConfig.cpp",
      "rewriteInvestigation",
      194);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 192),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])byte_1AD86B00);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v14, (const char (*)[39])byte_1AD86B40);
    v16 = std::unordered_map<unsigned int,unsigned int>::operator[](
            &this->pre_investigation_map_,
            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, v16);
    v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])byte_1AD86BA0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v19 = 0;
LABEL_30:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v19 != 1 )
    {
      v25 = 0;
      goto LABEL_34;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false> *const)(v3 + 64));
  }
  v25 = 1;
LABEL_34:
  if ( v25 == 1 )
    v2 = 0;
  result = v2;
  if ( v31 == (char *)v3 )
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

// Line 204: range 0000000014494998-0000000014494DB7
int32_t __cdecl InvestigationExcelConfigMgr::rewriteInvestigationTarget(
        InvestigationExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rdi
  data::WatcherConfig *v6; // rcx
  std::tuple_element<0,std::pair<unsigned int const,data::InvestigationTargetConfig> >::type *v7; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  std::vector<unsigned int> *v10; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::InvestigationTargetConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false>::reference __in; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::InvestigationTargetConfig> >::type *target_id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int const,data::InvestigationTargetConfig> >::type *target_config; // [rsp+38h] [rbp-C8h]
  char v19[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:206 64 8 13 __for_end:206 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = InvestigationExcelConfigMgr::rewriteInvestigationTarget;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->investigation_target_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InvestigationTargetConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::InvestigationTargetConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InvestigationTargetConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InvestigationTargetConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::InvestigationTargetConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationTargetConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationTargetConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false> *const)(v2 + 32));
    target_id = std::get<0ul,unsigned int const,data::InvestigationTargetConfig>(__in);
    target_config = std::get<1ul,unsigned int const,data::InvestigationTargetConfig>(__in);
    p_watcher_config_mgr = &txt_config_mgr->watcher_config_mgr;
    v6 = (data::WatcherConfig *)target_config;
    if ( *(_BYTE *)(((unsigned __int64)target_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)target_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_id >> 3) + 0x7FFF8000) )
    {
      p_watcher_config_mgr = (WatcherExcelConfigMgr *)target_id;
      __asan_report_load4(target_id);
    }
    v7 = (std::tuple_element<0,std::pair<unsigned int const,data::InvestigationTargetConfig> >::type *)*target_id;
    if ( WatcherExcelConfigMgr::addWatcherConfig(p_watcher_config_mgr, (uint32_t)v7, v6) )
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
        "./src/txt_data_manual/InvestigationExcelConfig.cpp",
        "rewriteInvestigationTarget",
        210);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             v8,
             (const char (*)[36])"addWatcherConfig failed, target_id:");
      v7 = target_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, target_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(char *)(((unsigned __int64)&target_config->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&target_config->is_disuse, v7, &target_config->is_disuse);
    if ( !target_config->is_disuse )
    {
      v10 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
              &this->investigation_to_target_map_,
              &target_config->investigation_id);
      std::vector<unsigned int>::push_back(v10, target_id);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v19 == (char *)v2 )
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

// Line 223: range 0000000014494DB8-00000000144968ED
int32_t __cdecl InvestigationExcelConfigMgr::rewriteInvestigationMonster(
        InvestigationExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_exist_group_variable; // rsi
  unsigned __int64 v6; // rax
  unsigned int *M_current; // r15
  unsigned int *v8; // rsi
  char *v9; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rax
  int *v11; // rdx
  int v12; // ecx
  char v13; // al
  __int64 v14; // rsi
  int SceneIdByGroupId; // edx
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v29; // rax
  char *v30; // rsi
  char *v31; // rsi
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  char *v40; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v41; // rax
  int *v42; // rdx
  int v43; // ecx
  char v44; // al
  uint32_t *p_monster_id; // rax
  uint32_t monster_id; // ecx
  std::unordered_map<unsigned int,data::MonsterCategory> *p_investigation_monster_to_catogory_map; // rdx
  std::unordered_map<unsigned int,data::MonsterCategory> *v48; // rdx
  bool v49; // al
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterCategory>,false,false>::pointer v50; // rdx
  data::MonsterCategory *p_second; // rax
  data::MonsterCategory second; // ecx
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // r15
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterCategory>,false,false>::pointer v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  data::MonsterCategory monster_category; // r15d
  char *v61; // rsi
  std::unordered_map<unsigned int,data::MonsterCategory>::mapped_type *v62; // rax
  data::MonsterCategory *v63; // rdx
  char v64; // cl
  unsigned __int64 v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  int32_t ret; // [rsp+1Ch] [rbp-544h]
  const LuaConfigMgr *lua_config_mgr; // [rsp+20h] [rbp-540h]
  data::InvestigationMonsterConfigMap *__for_range; // [rsp+28h] [rbp-538h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false>::reference __in; // [rsp+30h] [rbp-530h]
  const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::key_type *investigation_monster_id; // [rsp+38h] [rbp-528h]
  std::tuple_element<1,std::pair<unsigned int const,data::InvestigationMonsterConfig> >::type *config; // [rsp+40h] [rbp-520h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-518h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+50h] [rbp-510h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+58h] [rbp-508h]
  std::vector<unsigned int> *monster_config_id_vec; // [rsp+60h] [rbp-500h]
  const std::unordered_map<unsigned int,MonsterScriptConfig> *__for_range_1; // [rsp+68h] [rbp-4F8h]
  std::vector<unsigned int> *__for_range_2; // [rsp+70h] [rbp-4F0h]
  const std::unordered_map<unsigned int,MonsterScriptConfig> *__for_range_3; // [rsp+78h] [rbp-4E8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::reference v83; // [rsp+80h] [rbp-4E0h]
  std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_script_config_0; // [rsp+90h] [rbp-4D0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::reference v85; // [rsp+98h] [rbp-4C8h]
  std::tuple_element<0,std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_config_id; // [rsp+A0h] [rbp-4C0h]
  std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_script_config; // [rsp+A8h] [rbp-4B8h]
  char v88[1200]; // [rsp+B0h] [rbp-4B0h] BYREF

  v2 = (unsigned __int64)v88;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1152LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "29 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 12 group_id:232 128"
                        " 4 12 scene_id:234 144 4 14 monster_id:264 160 8 21 old_iterate_count:224 192 8 21 new_iterate_c"
                        "ount:225 224 8 15 __for_begin:228 256 8 13 __for_end:228 288 8 15 __for_begin:232 320 8 13 __for"
                        "_end:232 352 8 15 __for_begin:250 384 8 13 __for_end:250 416 8 15 __for_begin:264 448 8 13 __for"
                        "_end:264 480 8 15 __for_begin:267 512 8 13 __for_end:267 544 8 8 iter:275 576 8 9 <unknown> 608 "
                        "32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 3"
                        "2 9 <unknown> 992 32 9 <unknown> 1056 56 18 monster_id_set:231";
  *(_QWORD *)(v2 + 16) = InvestigationExcelConfigMgr::rewriteInvestigationMonster;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234556927;
  v4[536862724] = -234556924;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862733] = -218959360;
  v4[536862734] = -218959360;
  v4[536862735] = -218959360;
  v4[536862736] = -218959360;
  v4[536862737] = -218959360;
  v4[536862738] = -218959360;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -218959118;
  v4[536862754] = -218103808;
  v4[536862755] = -202116109;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, txt_config_mgr);
  *(_QWORD *)(v2 + 160) = 0LL;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, txt_config_mgr);
  *(_QWORD *)(v2 + 192) = 0LL;
  ret = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->investigation_monster_config_map;
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 224, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 256, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::iterator *)(v2 + 256) = std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false> *)(v2 + 224),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false> *)(v2 + 256)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false> *const)(v2 + 224));
    investigation_monster_id = std::get<0ul,unsigned int const,data::InvestigationMonsterConfig>(__in);
    config = std::get<1ul,unsigned int const,data::InvestigationMonsterConfig>(__in);
    *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 608),
      off_1AD86F60,
      (const std::allocator<char> *)(v2 + 48));
    p_exist_group_variable = (__int64)&config->exist_group_variable;
    if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
    {
      p_exist_group_variable = 32LL;
      __asan_report_store_n(v2 + 672, 32LL);
    }
    common::tools::StringUtils::trim(
      (std::string *)(v2 + 672),
      (const std::string *)p_exist_group_variable,
      (const std::string *)(v2 + 608),
      1);
    std::string::operator=(&config->exist_group_variable, v2 + 672);
    std::string::~string((void *)(v2 + 672));
    *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
    std::string::~string((void *)(v2 + 608));
    *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    v6 = ((v2 + 1056) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_WORD *)(v6 + 4) = 0;
    *(_BYTE *)(v6 + 6) = 0;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
    std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v2 + 96));
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    M_current = std::vector<unsigned int>::end(&config->monster_id_list)._M_current;
    v8 = std::vector<unsigned int>::begin(&config->monster_id_list)._M_current;
    std::unordered_set<unsigned int>::unordered_set<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      (std::unordered_set<unsigned int> *const)(v2 + 1056),
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v8,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
      0LL,
      (const std::unordered_set<unsigned int>::hasher *)(v2 + 64),
      (const std::unordered_set<unsigned int>::key_equal *)(v2 + 80),
      (const std::unordered_set<unsigned int>::allocator_type *)(v2 + 96));
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    __for_range_0 = &config->group_id_list;
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 288, v8);
    *(std::vector<unsigned int>::iterator *)(v2 + 288) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 320, v8);
    *(std::vector<unsigned int>::iterator *)(v2 + 320) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v9 = (char *)(v2 + 320);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 288),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 320)) )
        break;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
      v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 288));
      v11 = (int *)v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      v12 = *v11;
      v13 = *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v9) = v13 != 0;
        __asan_report_store4(v2 + 112, v9);
      }
      *(_DWORD *)(v2 + 112) = v12;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 4;
      v14 = *(unsigned int *)(v2 + 112);
      SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, v14);
      v16 = *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v14) = v16 != 0;
        __asan_report_store4(v2 + 128, v14);
      }
      *(_DWORD *)(v2 + 128) = SceneIdByGroupId;
      scene_script_config_ptr = LuaConfigMgr::findSceneScriptConfig(lua_config_mgr, *(unsigned int *)(v2 + 128));
      if ( scene_script_config_ptr )
      {
        if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 112);
        group_script_config_ptr = SceneScriptConfig::findGroupScriptConfig(
                                    scene_script_config_ptr,
                                    *(unsigned int *)(v2 + 112));
        if ( group_script_config_ptr )
        {
          v29 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::operator[](
                  &this->investigation_monster_config_ids_map,
                  investigation_monster_id);
          v30 = (char *)(v2 + 112);
          monster_config_id_vec = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                                    v29,
                                    (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 112));
          __for_range_1 = &group_script_config_ptr->monster_config_map;
          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 352, v30);
          *(std::unordered_map<unsigned int,MonsterScriptConfig>::const_iterator *)(v2 + 352) = std::unordered_map<unsigned int,MonsterScriptConfig>::begin(__for_range_1);
          *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 384, v30);
          *(std::unordered_map<unsigned int,MonsterScriptConfig>::const_iterator *)(v2 + 384) = std::unordered_map<unsigned int,MonsterScriptConfig>::end(__for_range_1);
          while ( 1 )
          {
            v31 = (char *)(v2 + 384);
            if ( !std::__detail::operator!=<std::pair<unsigned int const,MonsterScriptConfig>,false>(
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v2 + 352),
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v2 + 384)) )
              break;
            v85 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v2 + 352));
            monster_config_id = std::get<0ul,unsigned int const,MonsterScriptConfig>(v85);
            monster_script_config = (std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *)std::get<1ul,unsigned int const,MonsterScriptConfig>(v85);
            if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                   (std::unordered_set<unsigned int> *)(v2 + 1056),
                   &monster_script_config->monster_id) )
            {
              if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
                __asan_report_load8(v2 + 192);
              ++*(_QWORD *)(v2 + 192);
              std::vector<unsigned int>::push_back(monster_config_id_vec, monster_config_id);
            }
            std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v2 + 352));
          }
          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
          if ( std::vector<unsigned int>::empty(monster_config_id_vec) )
          {
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 864) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 864, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 864),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/InvestigationExcelConfig.cpp",
              "rewriteInvestigationMonster",
              260);
            v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 864),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v33 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    v32,
                    (const char (*)[28])"group has no monster_id in ");
            v34 = common::milog::MiLogStream::operator<<<unsigned int>(v33, &config->monster_id_list);
            v35 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v34,
                    (const char (*)[12])"! scene_id:");
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v35,
                    (const unsigned int *)(v2 + 128));
            v37 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v36, (const char (*)[11])" group_id:");
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v37,
                    (const unsigned int *)(v2 + 112));
            v39 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    v38,
                    (const char (*)[27])" investigation_monster_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, investigation_monster_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            __for_range_2 = &config->monster_id_list;
            *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 416, v31);
            *(std::vector<unsigned int>::iterator *)(v2 + 416) = std::vector<unsigned int>::begin(__for_range_2);
            *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 448, v31);
            *(std::vector<unsigned int>::iterator *)(v2 + 448) = std::vector<unsigned int>::end(__for_range_2);
            while ( 1 )
            {
              v40 = (char *)(v2 + 448);
              if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 416),
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 448)) )
                break;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 4;
              v41 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 416));
              v42 = (int *)v41;
              if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v41);
              }
              v43 = *v42;
              v44 = *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000);
              LOBYTE(v40) = v44 != 0;
              if ( v44 != 0 && v44 <= 3 )
                __asan_report_store4(v2 + 144, v40);
              *(_DWORD *)(v2 + 144) = v43;
              if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
                __asan_report_load8(v2 + 160);
              ++*(_QWORD *)(v2 + 160);
              __for_range_3 = &group_script_config_ptr->monster_config_map;
              *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 480, v40);
              *(std::unordered_map<unsigned int,MonsterScriptConfig>::const_iterator *)(v2 + 480) = std::unordered_map<unsigned int,MonsterScriptConfig>::begin(__for_range_3);
              *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 512, v40);
              *(std::unordered_map<unsigned int,MonsterScriptConfig>::const_iterator *)(v2 + 512) = std::unordered_map<unsigned int,MonsterScriptConfig>::end(__for_range_3);
              while ( std::__detail::operator!=<std::pair<unsigned int const,MonsterScriptConfig>,false>(
                        (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v2 + 480),
                        (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v2 + 512)) )
              {
                v83 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v2 + 480));
                std::get<0ul,unsigned int const,MonsterScriptConfig>(v83);
                monster_script_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *)std::get<1ul,unsigned int const,MonsterScriptConfig>(v83);
                p_monster_id = &monster_script_config_0->monster_id;
                if ( *(_BYTE *)(((unsigned __int64)p_monster_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_monster_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_monster_id >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_load4(p_monster_id);
                }
                monster_id = monster_script_config_0->monster_id;
                if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_load4(v2 + 144);
                if ( monster_id == *(_DWORD *)(v2 + 144) )
                {
                  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
                    __asan_report_load8(v2 + 160);
                  ++*(_QWORD *)(v2 + 160);
                }
                std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v2 + 480));
              }
              *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
              p_investigation_monster_to_catogory_map = &this->investigation_monster_to_catogory_map_;
              if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 544, v2 + 512);
              *(std::unordered_map<unsigned int,data::MonsterCategory>::iterator *)(v2 + 544) = std::unordered_map<unsigned int,data::MonsterCategory>::find(
                                                                                                  p_investigation_monster_to_catogory_map,
                                                                                                  (const std::unordered_map<unsigned int,data::MonsterCategory>::key_type *)(v2 + 144));
              *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
              v48 = &this->investigation_monster_to_catogory_map_;
              if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 576, v2 + 144);
              *(std::unordered_map<unsigned int,data::MonsterCategory>::iterator *)(v2 + 576) = std::unordered_map<unsigned int,data::MonsterCategory>::end(v48);
              v49 = std::__detail::operator!=<std::pair<unsigned int const,data::MonsterCategory>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterCategory>,false> *)(v2 + 544),
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterCategory>,false> *)(v2 + 576));
              *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
              if ( v49 )
              {
                v50 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterCategory>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterCategory>,false,false> *const)(v2 + 544));
                p_second = &v50->second;
                if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_load4(p_second);
                }
                second = v50->second;
                if ( *(_BYTE *)(((unsigned __int64)&config->monster_category >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&config->monster_category >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&config->monster_category);
                }
                if ( second != config->monster_category )
                {
                  *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 928, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 928),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/InvestigationExcelConfig.cpp",
                    "rewriteInvestigationMonster",
                    280);
                  v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 928),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v54 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                          v53,
                          (const char (*)[23])"investigation monster ");
                  v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v54,
                          (const unsigned int *)(v2 + 144));
                  v56 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                          v55,
                          (const char (*)[19])" has two category ");
                  v57 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterCategory>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterCategory>,false,false> *const)(v2 + 544));
                  v58 = common::milog::MiLogStream::operator<<<data::MonsterCategory,(data::MonsterCategory*)0>(
                          v56,
                          &v57->second);
                  v59 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v58, (const char (*)[6])" and ");
                  common::milog::MiLogStream::operator<<<data::MonsterCategory,(data::MonsterCategory*)0>(
                    v59,
                    &config->monster_category);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
                  *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&config->monster_category >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&config->monster_category >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&config->monster_category);
                }
                monster_category = config->monster_category;
                v61 = (char *)(v2 + 144);
                v62 = std::unordered_map<unsigned int,data::MonsterCategory>::operator[](
                        &this->investigation_monster_to_catogory_map_,
                        (const std::unordered_map<unsigned int,data::MonsterCategory>::key_type *)(v2 + 144));
                v63 = v62;
                v64 = *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000);
                if ( v64 != 0 && (char)(((unsigned __int8)v62 & 7) + 3) >= v64 )
                {
                  LOBYTE(v61) = v64 != 0;
                  __asan_report_store4(v62, v61);
                }
                *v63 = monster_category;
              }
              *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 416));
            }
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 800, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 800),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/InvestigationExcelConfig.cpp",
            "rewriteInvestigationMonster",
            245);
          v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 800),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v24 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  v23,
                  (const char (*)[38])"findGroupScriptConfig fail, scene_id:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v2 + 128));
          v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v25, (const char (*)[11])" group_id:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v2 + 112));
          v28 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  v27,
                  (const char (*)[27])" investigation_monster_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, investigation_monster_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 736, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 736),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/InvestigationExcelConfig.cpp",
          "rewriteInvestigationMonster",
          238);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 736),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                v17,
                (const char (*)[40])"findSceneScriptConfig failed, scene_id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v2 + 128));
        v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" group_id:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v2 + 112));
        v22 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                v21,
                (const char (*)[27])" investigation_monster_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, investigation_monster_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 288));
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 1056));
    v65 = ((v2 + 1056) >> 3) + 2147450880;
    *(_DWORD *)v65 = -117901064;
    *(_WORD *)(v65 + 4) = -1800;
    *(_BYTE *)(v65 + 6) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false> *const)(v2 + 224));
  }
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
  if ( !ret )
  {
    *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 992, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 992),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/txt_data_manual/InvestigationExcelConfig.cpp",
      "rewriteInvestigationMonster",
      293);
    v66 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            (common::milog::MiLogStream *const)(v2 + 992),
            (const char (*)[19])"old_iterate_count:");
    v67 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v66,
            (const unsigned __int64 *)(v2 + 160));
    v68 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v67,
            (const char (*)[20])" new_iterate_count:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v68, (const unsigned __int64 *)(v2 + 192));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
  }
  if ( v88 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 124) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1152LL, v88);
  }
  return ret;
};

// Line 299: range 00000000144968EE-0000000014496B0B
const std::vector<unsigned int> *__fastcall InvestigationExcelConfigMgr::getInvestigationTargetVec(
        const InvestigationExcelConfigMgr *const this,
        std::vector<unsigned int> *investigation_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_investigation_to_target_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v6; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 20 investigation_id:298 64 8 8 iter:301 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = InvestigationExcelConfigMgr::getInvestigationTargetVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)investigation_id;
  if ( !(_BYTE)`guard variable for'InvestigationExcelConfigMgr::getInvestigationTargetVec(unsigned int)::dummy_vec
    && __cxa_guard_acquire(&`guard variable for'InvestigationExcelConfigMgr::getInvestigationTargetVec(unsigned int)::dummy_vec) )
  {
    std::vector<unsigned int>::vector(&InvestigationExcelConfigMgr::getInvestigationTargetVec(unsigned int)const::dummy_vec);
    __cxa_guard_release(&`guard variable for'InvestigationExcelConfigMgr::getInvestigationTargetVec(unsigned int)::dummy_vec);
    investigation_id = &InvestigationExcelConfigMgr::getInvestigationTargetVec(unsigned int)const::dummy_vec;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
      &InvestigationExcelConfigMgr::getInvestigationTargetVec(unsigned int)const::dummy_vec,
      &_dso_handle);
  }
  p_investigation_to_target_map = &this->investigation_to_target_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, investigation_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_investigation_to_target_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->investigation_to_target_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &InvestigationExcelConfigMgr::getInvestigationTargetVec(unsigned int)const::dummy_vec;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64))->second;
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

// Line 310: range 0000000014496B0C-0000000014496B35
uint32_t __cdecl InvestigationExcelConfigMgr::getInvestigationTotalProgress(
        const InvestigationExcelConfigMgr *const this,
        uint32_t investigation_id)
{
  const std::vector<unsigned int> *InvestigationTargetVec; // rax

  InvestigationTargetVec = InvestigationExcelConfigMgr::getInvestigationTargetVec(
                             this,
                             (std::vector<unsigned int> *)investigation_id);
  return std::vector<unsigned int>::size(InvestigationTargetVec);
};

// Line 315: range 0000000014496B36-0000000014496D31
__int64 __fastcall InvestigationExcelConfigMgr::getPreInvestigationId(
        const InvestigationExcelConfigMgr *const this,
        __int64 investigation_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_pre_investigation_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 20 investigation_id:314 64 8 8 iter:316 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = InvestigationExcelConfigMgr::getPreInvestigationId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = investigation_id;
  p_pre_investigation_map = &this->pre_investigation_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, investigation_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_pre_investigation_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->pre_investigation_map_;
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

// Line 325: range 0000000014496D32-0000000014496F2D
__int64 __fastcall InvestigationExcelConfigMgr::getInvestigateionMonsterCategory(
        const InvestigationExcelConfigMgr *const this,
        __int64 monster_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::MonsterCategory> *p_investigation_monster_to_catogory_map; // rdx
  std::unordered_map<unsigned int,data::MonsterCategory> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterCategory>,false,false>::pointer v9; // rdx
  data::MonsterCategory *p_second; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 monster_id:324 64 8 8 iter:326 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = InvestigationExcelConfigMgr::getInvestigateionMonsterCategory;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = monster_id;
  p_investigation_monster_to_catogory_map = &this->investigation_monster_to_catogory_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, monster_id);
  *(std::unordered_map<unsigned int,data::MonsterCategory>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MonsterCategory>::find(
                                                                                           p_investigation_monster_to_catogory_map,
                                                                                           (const std::unordered_map<unsigned int,data::MonsterCategory>::key_type *)(v2 + 48));
  v6 = &this->investigation_monster_to_catogory_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MonsterCategory>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MonsterCategory>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MonsterCategory>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterCategory>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterCategory>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterCategory>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterCategory>,false,false> *const)(v2 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = (unsigned int)v9->second;
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
