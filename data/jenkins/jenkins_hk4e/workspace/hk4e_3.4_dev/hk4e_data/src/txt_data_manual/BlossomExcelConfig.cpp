// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/BlossomExcelConfig.cpp

// Line 22: range 0000000012E93D44-0000000012E94068
int32_t __cdecl BlossomExcelConfigMgr::checkConfig(
        BlossomExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
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
  *(_QWORD *)(v2 + 16) = BlossomExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( BlossomExcelConfigMgr::checkBlossomRefreshExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "checkConfig",
      25);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
      v5,
      (const char (*)[62])"[BlossomExcelConfigMgr] checkBlossomRefreshExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( BlossomExcelConfigMgr::checkBlossomGroupsExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "checkConfig",
      31);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
      v7,
      (const char (*)[61])"[BlossomExcelConfigMgr] checkBlossomGroupsExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
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

// Line 39: range 0000000012E9406A-0000000012E944DF
int32_t __cdecl BlossomExcelConfigMgr::rewriteConfig(BlossomExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (common::milog::MiLogStream *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)BlossomExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( BlossomExcelConfigMgr::rewriteBlossomSectionOrderExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "rewriteConfig",
      43);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
      v5,
      (const char (*)[69])"[BlossomExcelConfigMgr] rewriteBlossomSectionOrderExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( BlossomExcelConfigMgr::rewriteBlossomGroupsExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[3], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "rewriteConfig",
      49);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
      v7,
      (const char (*)[63])"[BlossomExcelConfigMgr] rewriteBlossomGroupsExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( BlossomExcelConfigMgr::rewriteBlossomRefreshExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "rewriteConfig",
      55);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
      v8,
      (const char (*)[64])"[BlossomExcelConfigMgr] rewriteBlossomRefreshExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 63: range 0000000012E944E0-0000000012E96677
int32_t __cdecl BlossomExcelConfigMgr::checkBlossomRefreshExcelConfig(
        BlossomExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  const std::pair<unsigned int const,data::BlossomRefreshExcelConfig> *v6; // rax
  uint32_t *p_city_id; // rax
  __int64 v8; // rsi
  uint32_t city_id; // ecx
  char v10; // al
  data::BlossomOpenExcelConfigMap *p_blossom_open_excel_config_map; // rdx
  data::BlossomOpenExcelConfigMap *v12; // rdx
  bool v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v16; // rax
  __int64 v17; // rsi
  data::BlossomRefreshType refresh_type; // ecx
  char v19; // al
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rsi
  std::tuple_element<0,std::pair<unsigned int const,data::BlossomRefreshExcelConfig> >::type *v26; // rsi
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // edx
  data::BlossomChestExcelConfigMap *p_blossom_chest_excel_config_map; // rdx
  data::BlossomChestExcelConfigMap *v33; // rdx
  const std::unordered_map<unsigned int,data::BlossomChestExcelConfig>::key_type *p_blossom_chest_id; // rcx
  __int64 v35; // rsi
  bool v36; // al
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  std::tuple_element<0,std::pair<unsigned int const,data::BlossomRefreshExcelConfig> >::type *v41; // rsi
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  int v46; // edx
  data::BlossomChestExcelConfigMap *v47; // rdx
  data::BlossomChestExcelConfigMap *v48; // rdx
  const std::unordered_map<unsigned int,data::BlossomChestExcelConfig>::key_type *v49; // rcx
  __int64 v50; // rsi
  bool v51; // al
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  int v61; // edx
  ReviseLevelGrowExcelConfigMgr *p_revise_level_grow_config_mgr; // rcx
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  unsigned __int64 v65; // rax
  int v66; // eax
  _BOOL4 v68; // [rsp+8h] [rbp-6A8h]
  int v69; // [rsp+8h] [rbp-6A8h]
  int32_t v70; // [rsp+Ch] [rbp-6A4h]
  data::ItemLimitType item_limit_type; // [rsp+28h] [rbp-688h]
  data::OpenStateType open_state; // [rsp+2Ch] [rbp-684h]
  data::BlossomRefreshExcelConfigMap *__for_range; // [rsp+30h] [rbp-680h]
  std::tuple_element<0,std::pair<unsigned int const,data::BlossomRefreshExcelConfig> >::type *refresh_id; // [rsp+38h] [rbp-678h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlossomRefreshExcelConfig> >::type *blossom_refresh_excel_config; // [rsp+40h] [rbp-670h]
  const std::vector<data::BlossomRewardExcelConfig> *__for_range_0; // [rsp+50h] [rbp-660h]
  const data::BlossomRewardExcelConfig *blossom_drop; // [rsp+58h] [rbp-658h]
  const std::vector<data::BlossomRewardExcelConfig> *__for_range_1; // [rsp+60h] [rbp-650h]
  const data::BlossomRewardExcelConfig *blossom_drop_0; // [rsp+68h] [rbp-648h]
  const std::vector<data::BlossomRefreshCond> *__for_range_2; // [rsp+70h] [rbp-640h]
  __gnu_cxx::__normal_iterator<const data::BlossomRefreshCond*,std::vector<data::BlossomRefreshCond> >::reference cond; // [rsp+78h] [rbp-638h]
  char v83[1584]; // [rsp+80h] [rbp-630h] BYREF

  v2 = (unsigned __int64)v83;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1536LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "31 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 10 city_id:67 96 4 15 refresh_type:92"
                        " 112 8 14 __for_begin:64 144 8 12 __for_end:64 176 8 9 <unknown> 208 8 9 <unknown> 240 8 15 __fo"
                        "r_begin:103 272 8 13 __for_end:103 304 8 9 <unknown> 336 8 9 <unknown> 368 8 15 __for_begin:121 "
                        "400 8 13 __for_end:121 432 8 9 <unknown> 464 8 9 <unknown> 496 8 15 __for_begin:145 528 8 13 __f"
                        "or_end:145 560 20 9 <unknown> 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 9 "
                        "<unknown> 880 32 9 <unknown> 944 32 9 <unknown> 1008 32 9 <unknown> 1072 32 9 <unknown> 1136 32 "
                        "9 <unknown> 1200 56 24 non_chest_blossom_set:93 1296 168 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BlossomExcelConfigMgr::checkBlossomRefreshExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
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
  v4[536862738] = -218959356;
  v4[536862739] = 62194;
  v4[536862740] = -219021312;
  v4[536862741] = 62194;
  v4[536862742] = -219021312;
  v4[536862743] = 62194;
  v4[536862744] = -219021312;
  v4[536862745] = 62194;
  v4[536862746] = -219021312;
  v4[536862747] = 62194;
  v4[536862748] = -219021312;
  v4[536862749] = 62194;
  v4[536862750] = -219021312;
  v4[536862751] = 62194;
  v4[536862752] = -219021312;
  v4[536862753] = 62194;
  v4[536862754] = -219021312;
  v4[536862755] = 62194;
  v4[536862756] = -219021312;
  v4[536862757] = 62194;
  v4[536862759] = -218959360;
  v4[536862760] = 62194;
  v4[536862765] = -218103808;
  v4[536862766] = -202116109;
  v4[536862767] = -202116109;
  __for_range = &this->blossom_refresh_excel_config_map;
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 144, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::iterator *)(v2 + 144) = std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false> *)(v2 + 112),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false> *)(v2 + 144)) )
  {
    v5 = ((v2 + 1296) >> 3) + 2147450880;
    *(_DWORD *)v5 = 0;
    *(_DWORD *)(v5 + 4) = 0;
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v5 + 12) = 0;
    *(_DWORD *)(v5 + 16) = 0;
    *(_BYTE *)(v5 + 20) = 0;
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false,false> *const)(v2 + 112));
    std::pair<unsigned int const,data::BlossomRefreshExcelConfig>::pair(
      (std::pair<unsigned int const,data::BlossomRefreshExcelConfig> *const)(v2 + 1296),
      v6);
    refresh_id = std::get<0ul,unsigned int const,data::BlossomRefreshExcelConfig>((const std::pair<unsigned int const,data::BlossomRefreshExcelConfig> *)(v2 + 1296));
    blossom_refresh_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlossomRefreshExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlossomRefreshExcelConfig>((const std::pair<unsigned int const,data::BlossomRefreshExcelConfig> *)(v2 + 1296));
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
    p_city_id = &blossom_refresh_excel_config->city_id;
    v8 = (((_BYTE)blossom_refresh_excel_config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_city_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)blossom_refresh_excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_city_id >> 3)
                                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(p_city_id);
    }
    city_id = blossom_refresh_excel_config->city_id;
    v10 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
    LOBYTE(v8) = v10 != 0;
    if ( v10 != 0 && v10 <= 3 )
      __asan_report_store4(v2 + 80, v8);
    *(_DWORD *)(v2 + 80) = city_id;
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    p_blossom_open_excel_config_map = &this->blossom_open_excel_config_map;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, v8);
    *(std::unordered_map<unsigned int,data::BlossomOpenExcelConfig>::iterator *)(v2 + 208) = std::unordered_map<unsigned int,data::BlossomOpenExcelConfig>::end(p_blossom_open_excel_config_map);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    v12 = &this->blossom_open_excel_config_map;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v8);
    *(std::unordered_map<unsigned int,data::BlossomOpenExcelConfig>::iterator *)(v2 + 176) = std::unordered_map<unsigned int,data::BlossomOpenExcelConfig>::find(
                                                                                               v12,
                                                                                               (const std::unordered_map<unsigned int,data::BlossomOpenExcelConfig>::key_type *)(v2 + 80));
    v13 = std::__detail::operator==<std::pair<unsigned int const,data::BlossomOpenExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomOpenExcelConfig>,false> *)(v2 + 176),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomOpenExcelConfig>,false> *)(v2 + 208));
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( v13 )
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
        "./src/txt_data_manual/BlossomExcelConfig.cpp",
        "checkBlossomRefreshExcelConfig",
        70);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 624),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        v14,
        (const char (*)[43])"[BlossomExcelConfigMgr] city_id is invalid");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 624));
      *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = -117901064;
      v70 = -1;
      v68 = 0;
    }
    else
    {
      if ( common::tools::TimeUtils::getTimeByTimeStr(&blossom_refresh_excel_config->refresh_time)
        || !std::operator!=<char>("00:00:00", &blossom_refresh_excel_config->refresh_time) )
      {
        v17 = (((_BYTE)blossom_refresh_excel_config + 100) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&blossom_refresh_excel_config->item_limit_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)blossom_refresh_excel_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&blossom_refresh_excel_config->item_limit_type >> 3)
                                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&blossom_refresh_excel_config->item_limit_type);
        }
        if ( blossom_refresh_excel_config->item_limit_type )
        {
          v17 = (((_BYTE)blossom_refresh_excel_config + 100) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&blossom_refresh_excel_config->item_limit_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)blossom_refresh_excel_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&blossom_refresh_excel_config->item_limit_type >> 3)
                                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&blossom_refresh_excel_config->item_limit_type);
          }
          item_limit_type = blossom_refresh_excel_config->item_limit_type;
        }
        else
        {
          item_limit_type = ITEM_LIMIT_BLOSSOM_CHEST_DROP;
        }
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((unsigned __int64)&blossom_refresh_excel_config->refresh_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&blossom_refresh_excel_config->refresh_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&blossom_refresh_excel_config->refresh_type);
        }
        refresh_type = blossom_refresh_excel_config->refresh_type;
        v19 = *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000);
        LOBYTE(v17) = v19 != 0;
        if ( v19 != 0 && v19 <= 3 )
          __asan_report_store4(v2 + 96, v17);
        *(_DWORD *)(v2 + 96) = refresh_type;
        v20 = ((v2 + 1200) >> 3) + 2147450880;
        *(_DWORD *)v20 = 0;
        *(_WORD *)(v20 + 4) = 0;
        *(_BYTE *)(v20 + 6) = 0;
        v21 = ((v2 + 560) >> 3) + 2147450880;
        *(_WORD *)v21 = 0;
        *(_BYTE *)(v21 + 2) = 4;
        if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 560, v17);
        *(_DWORD *)(v2 + 560) = 4;
        v22 = (((_BYTE)v2 + 52) & 7u) + 3;
        if ( *(_BYTE *)(((v2 + 564) >> 3) + 0x7FFF8000) != 0
          && (char)(((v2 + 52) & 7) + 3) >= *(_BYTE *)(((v2 + 564) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v2 + 564, v22);
        }
        *(_DWORD *)(v2 + 564) = 5;
        if ( *(_BYTE *)(((v2 + 568) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 568) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 568, v22);
        *(_DWORD *)(v2 + 568) = 8;
        v23 = (((_BYTE)v2 + 60) & 7u) + 3;
        if ( *(_BYTE *)(((v2 + 572) >> 3) + 0x7FFF8000) != 0
          && (char)(((v2 + 60) & 7) + 3) >= *(_BYTE *)(((v2 + 572) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v2 + 572, v23);
        }
        *(_DWORD *)(v2 + 572) = 9;
        if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 576, v23);
        *(_DWORD *)(v2 + 576) = 10;
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<data::BlossomRefreshType>::allocator((std::allocator<data::BlossomRefreshType> *const)(v2 + 64));
        std::unordered_set<data::BlossomRefreshType>::unordered_set(
          (std::unordered_set<data::BlossomRefreshType> *const)(v2 + 1200),
          (std::initializer_list<data::BlossomRefreshType>)__PAIR128__(5LL, v2 + 560),
          0LL,
          (const std::unordered_set<data::BlossomRefreshType>::hasher *)(v2 + 32),
          (const std::unordered_set<data::BlossomRefreshType>::key_equal *)(v2 + 48),
          (const std::unordered_set<data::BlossomRefreshType>::allocator_type *)(v2 + 64));
        std::allocator<data::BlossomRefreshType>::~allocator((std::allocator<data::BlossomRefreshType> *const)(v2 + 64));
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
        v24 = ((v2 + 560) >> 3) + 2147450880;
        *(_WORD *)v24 = -1800;
        *(_BYTE *)(v24 + 2) = -8;
        v25 = v2 + 96;
        if ( !common::tools::MiscUtils::isContains<std::unordered_set<data::BlossomRefreshType>,data::BlossomRefreshType>(
                (std::unordered_set<data::BlossomRefreshType> *)(v2 + 1200),
                (const data::BlossomRefreshType *)(v2 + 96)) )
        {
          __for_range_0 = &blossom_refresh_excel_config->drop_vec;
          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 240, v25);
          *(std::vector<data::BlossomRewardExcelConfig>::const_iterator *)(v2 + 240) = std::vector<data::BlossomRewardExcelConfig>::begin(__for_range_0);
          *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 272, v25);
          *(std::vector<data::BlossomRewardExcelConfig>::const_iterator *)(v2 + 272) = std::vector<data::BlossomRewardExcelConfig>::end(__for_range_0);
          while ( 1 )
          {
            v26 = (std::tuple_element<0,std::pair<unsigned int const,data::BlossomRefreshExcelConfig> >::type *)(v2 + 272);
            if ( !__gnu_cxx::operator!=<data::BlossomRewardExcelConfig const*,std::vector<data::BlossomRewardExcelConfig>>(
                    (const __gnu_cxx::__normal_iterator<const data::BlossomRewardExcelConfig*,std::vector<data::BlossomRewardExcelConfig> > *)(v2 + 240),
                    (const __gnu_cxx::__normal_iterator<const data::BlossomRewardExcelConfig*,std::vector<data::BlossomRewardExcelConfig> > *)(v2 + 272)) )
            {
              v31 = 1;
              goto LABEL_66;
            }
            blossom_drop = __gnu_cxx::__normal_iterator<data::BlossomRewardExcelConfig const*,std::vector<data::BlossomRewardExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::BlossomRewardExcelConfig*,std::vector<data::BlossomRewardExcelConfig> > *const)(v2 + 240));
            if ( *(_BYTE *)(((unsigned __int64)&blossom_drop->drop_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&blossom_drop->drop_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&blossom_drop->drop_id);
            }
            if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                                    txt_config_mgr,
                                    blossom_drop->drop_id,
                                    item_limit_type) != 1 )
              break;
            __gnu_cxx::__normal_iterator<data::BlossomRewardExcelConfig const*,std::vector<data::BlossomRewardExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::BlossomRewardExcelConfig*,std::vector<data::BlossomRewardExcelConfig> > *const)(v2 + 240));
          }
          *(_DWORD *)(((v2 + 752) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 752) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 783) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 783) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 752, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 752),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/BlossomExcelConfig.cpp",
            "checkBlossomRefreshExcelConfig",
            107);
          v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 752),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v28 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v27, (const char (*)[35])byte_1AAC22C0);
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &blossom_drop->drop_id);
          v30 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v29, (const char (*)[22])byte_1AAC2320);
          v26 = refresh_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, refresh_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 752));
          *(_DWORD *)(((v2 + 752) >> 3) + 0x7FFF8000) = -117901064;
          v70 = -1;
          v31 = 0;
LABEL_66:
          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
          if ( v31 != 1 )
          {
            v69 = 0;
LABEL_134:
            std::unordered_set<data::BlossomRefreshType>::~unordered_set((std::unordered_set<data::BlossomRefreshType> *const)(v2 + 1200));
            v68 = v69 == 1;
            goto LABEL_135;
          }
          *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
          p_blossom_chest_excel_config_map = &this->blossom_chest_excel_config_map;
          if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 336, v26);
          *(std::unordered_map<unsigned int,data::BlossomChestExcelConfig>::iterator *)(v2 + 336) = std::unordered_map<unsigned int,data::BlossomChestExcelConfig>::end(p_blossom_chest_excel_config_map);
          *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
          v33 = &this->blossom_chest_excel_config_map;
          p_blossom_chest_id = &blossom_refresh_excel_config->blossom_chest_id;
          v35 = *(unsigned __int8 *)(((v2 + 304) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v35 )
            __asan_report_store8(v2 + 304, v35);
          *(std::unordered_map<unsigned int,data::BlossomChestExcelConfig>::iterator *)(v2 + 304) = std::unordered_map<unsigned int,data::BlossomChestExcelConfig>::find(v33, p_blossom_chest_id);
          v25 = v2 + 336;
          v36 = std::__detail::operator==<std::pair<unsigned int const,data::BlossomChestExcelConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomChestExcelConfig>,false> *)(v2 + 304),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomChestExcelConfig>,false> *)(v2 + 336));
          *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
          if ( v36 )
          {
            *(_DWORD *)(((v2 + 816) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 816) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 847) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 847) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 816, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 816),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/BlossomExcelConfig.cpp",
              "checkBlossomRefreshExcelConfig",
              114);
            v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 816),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v38 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    v37,
                    (const char (*)[47])byte_1AAC2360);
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v38,
                    &blossom_refresh_excel_config->blossom_chest_id);
            v40 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v39,
                    (const char (*)[22])byte_1AAC2320);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, refresh_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 816));
            *(_DWORD *)(((v2 + 816) >> 3) + 0x7FFF8000) = -117901064;
            v70 = -1;
            v69 = 0;
            goto LABEL_134;
          }
        }
        if ( *(_BYTE *)(((unsigned __int64)&blossom_refresh_excel_config->reward_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&blossom_refresh_excel_config->reward_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&blossom_refresh_excel_config->reward_type);
        }
        if ( blossom_refresh_excel_config->reward_type == BLOSSOM_REWARD_TYPE_TO_BAG )
        {
          __for_range_1 = &blossom_refresh_excel_config->drop_vec;
          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 368, v25);
          *(std::vector<data::BlossomRewardExcelConfig>::const_iterator *)(v2 + 368) = std::vector<data::BlossomRewardExcelConfig>::begin(__for_range_1);
          *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 400, v25);
          *(std::vector<data::BlossomRewardExcelConfig>::const_iterator *)(v2 + 400) = std::vector<data::BlossomRewardExcelConfig>::end(__for_range_1);
          while ( 1 )
          {
            v41 = (std::tuple_element<0,std::pair<unsigned int const,data::BlossomRefreshExcelConfig> >::type *)(v2 + 400);
            if ( !__gnu_cxx::operator!=<data::BlossomRewardExcelConfig const*,std::vector<data::BlossomRewardExcelConfig>>(
                    (const __gnu_cxx::__normal_iterator<const data::BlossomRewardExcelConfig*,std::vector<data::BlossomRewardExcelConfig> > *)(v2 + 368),
                    (const __gnu_cxx::__normal_iterator<const data::BlossomRewardExcelConfig*,std::vector<data::BlossomRewardExcelConfig> > *)(v2 + 400)) )
            {
              v46 = 1;
              goto LABEL_93;
            }
            blossom_drop_0 = __gnu_cxx::__normal_iterator<data::BlossomRewardExcelConfig const*,std::vector<data::BlossomRewardExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::BlossomRewardExcelConfig*,std::vector<data::BlossomRewardExcelConfig> > *const)(v2 + 368));
            if ( *(_BYTE *)(((unsigned __int64)&blossom_drop_0->drop_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&blossom_drop_0->drop_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&blossom_drop_0->drop_id);
            }
            if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                                    txt_config_mgr,
                                    blossom_drop_0->drop_id,
                                    item_limit_type) != 1 )
              break;
            __gnu_cxx::__normal_iterator<data::BlossomRewardExcelConfig const*,std::vector<data::BlossomRewardExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::BlossomRewardExcelConfig*,std::vector<data::BlossomRewardExcelConfig> > *const)(v2 + 368));
          }
          *(_DWORD *)(((v2 + 880) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 880) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 911) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 911) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 880, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 880),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/BlossomExcelConfig.cpp",
            "checkBlossomRefreshExcelConfig",
            125);
          v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 880),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v43 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v42, (const char (*)[35])byte_1AAC22C0);
          v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &blossom_drop_0->drop_id);
          v45 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v44, (const char (*)[22])byte_1AAC2320);
          v41 = refresh_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, refresh_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 880));
          *(_DWORD *)(((v2 + 880) >> 3) + 0x7FFF8000) = -117901064;
          v70 = -1;
          v46 = 0;
LABEL_93:
          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
          if ( v46 != 1 )
          {
            v69 = 0;
            goto LABEL_134;
          }
          *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
          v47 = &this->blossom_chest_excel_config_map;
          if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 464, v41);
          *(std::unordered_map<unsigned int,data::BlossomChestExcelConfig>::iterator *)(v2 + 464) = std::unordered_map<unsigned int,data::BlossomChestExcelConfig>::end(v47);
          *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
          v48 = &this->blossom_chest_excel_config_map;
          v49 = &blossom_refresh_excel_config->blossom_chest_id;
          v50 = *(unsigned __int8 *)(((v2 + 432) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v50 )
            __asan_report_store8(v2 + 432, v50);
          *(std::unordered_map<unsigned int,data::BlossomChestExcelConfig>::iterator *)(v2 + 432) = std::unordered_map<unsigned int,data::BlossomChestExcelConfig>::find(v48, v49);
          v25 = v2 + 464;
          v51 = std::__detail::operator!=<std::pair<unsigned int const,data::BlossomChestExcelConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomChestExcelConfig>,false> *)(v2 + 432),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomChestExcelConfig>,false> *)(v2 + 464));
          *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
          if ( v51 )
          {
            *(_DWORD *)(((v2 + 944) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 944) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 975) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 975) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 944, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 944),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/BlossomExcelConfig.cpp",
              "checkBlossomRefreshExcelConfig",
              132);
            v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 944),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v53 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                    v52,
                    (const char (*)[78])byte_1AAC23C0);
            v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v53,
                    &blossom_refresh_excel_config->blossom_chest_id);
            v55 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v54,
                    (const char (*)[15])", refresh_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, refresh_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 944));
            *(_DWORD *)(((v2 + 944) >> 3) + 0x7FFF8000) = -117901064;
            v70 = -1;
            v69 = 0;
            goto LABEL_134;
          }
        }
        if ( *(_BYTE *)(((unsigned __int64)&blossom_refresh_excel_config->open_state >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&blossom_refresh_excel_config->open_state >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&blossom_refresh_excel_config->open_state);
        }
        open_state = blossom_refresh_excel_config->open_state;
        if ( open_state
          && (v25 = (unsigned int)open_state,
              !data::OpenStateExcelConfigMgrBase::findOpenStateConfig(
                 &txt_config_mgr->open_state_config_mgr,
                 (unsigned int)open_state)) )
        {
          *(_DWORD *)(((v2 + 1008) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1008) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1039) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 1039) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1008, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1008),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/BlossomExcelConfig.cpp",
            "checkBlossomRefreshExcelConfig",
            141);
          v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1008),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v58 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v57, (const char (*)[60])byte_1AAC2480);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, refresh_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1008));
          *(_DWORD *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -117901064;
          v70 = -1;
          v69 = 0;
        }
        else
        {
          __for_range_2 = &blossom_refresh_excel_config->refresh_cond_vec;
          *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 496, v25);
          *(std::vector<data::BlossomRefreshCond>::const_iterator *)(v2 + 496) = std::vector<data::BlossomRefreshCond>::begin(__for_range_2);
          *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 528, v25);
          *(std::vector<data::BlossomRefreshCond>::const_iterator *)(v2 + 528) = std::vector<data::BlossomRefreshCond>::end(__for_range_2);
          while ( 1 )
          {
            if ( !__gnu_cxx::operator!=<data::BlossomRefreshCond const*,std::vector<data::BlossomRefreshCond>>(
                    (const __gnu_cxx::__normal_iterator<const data::BlossomRefreshCond*,std::vector<data::BlossomRefreshCond> > *)(v2 + 496),
                    (const __gnu_cxx::__normal_iterator<const data::BlossomRefreshCond*,std::vector<data::BlossomRefreshCond> > *)(v2 + 528)) )
            {
              v61 = 1;
              goto LABEL_125;
            }
            cond = __gnu_cxx::__normal_iterator<data::BlossomRefreshCond const*,std::vector<data::BlossomRefreshCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::BlossomRefreshCond*,std::vector<data::BlossomRefreshCond> > *const)(v2 + 496));
            if ( BlossomExcelConfigMgr::checkRefreshCond(this, txt_config_mgr, cond) )
              break;
            __gnu_cxx::__normal_iterator<data::BlossomRefreshCond const*,std::vector<data::BlossomRefreshCond>>::operator++((__gnu_cxx::__normal_iterator<const data::BlossomRefreshCond*,std::vector<data::BlossomRefreshCond> > *const)(v2 + 496));
          }
          *(_DWORD *)(((v2 + 1072) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1072) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1103) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 1103) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1072, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1072),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/BlossomExcelConfig.cpp",
            "checkBlossomRefreshExcelConfig",
            149);
          v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1072),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v60 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v59, (const char (*)[57])byte_1AAC24E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, refresh_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1072));
          *(_DWORD *)(((v2 + 1072) >> 3) + 0x7FFF8000) = -117901064;
          v70 = -1;
          v61 = 0;
LABEL_125:
          *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
          if ( v61 == 1 )
          {
            p_revise_level_grow_config_mgr = &txt_config_mgr->revise_level_grow_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&blossom_refresh_excel_config->revise_level >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&blossom_refresh_excel_config->revise_level >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&blossom_refresh_excel_config->revise_level);
            }
            if ( data::ReviseLevelGrowExcelConfigMgrBase::findReviseLevelGrowExcelConfig(
                   p_revise_level_grow_config_mgr,
                   blossom_refresh_excel_config->revise_level) )
            {
              v69 = 1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1136) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1136) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1167) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 1167) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1136, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1136),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/BlossomExcelConfig.cpp",
                "checkBlossomRefreshExcelConfig",
                157);
              v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1136),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v64 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                      v63,
                      (const char (*)[63])byte_1AAC2540);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, refresh_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1136));
              *(_DWORD *)(((v2 + 1136) >> 3) + 0x7FFF8000) = -117901064;
              v70 = -1;
              v69 = 0;
            }
          }
          else
          {
            v69 = 0;
          }
        }
        goto LABEL_134;
      }
      *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 688) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 688, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 688),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/BlossomExcelConfig.cpp",
        "checkBlossomRefreshExcelConfig",
        78);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 688),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        v16,
        (const char (*)[47])"[BlossomExcelConfigMgr] time format is invalid");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 688));
      *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = -117901064;
      v70 = -1;
      v68 = 0;
    }
LABEL_135:
    std::pair<unsigned int const,data::BlossomRefreshExcelConfig>::~pair((std::pair<unsigned int const,data::BlossomRefreshExcelConfig> *const)(v2 + 1296));
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    v65 = ((v2 + 1200) >> 3) + 2147450880;
    *(_DWORD *)v65 = -117901064;
    *(_WORD *)(v65 + 4) = -1800;
    *(_BYTE *)(v65 + 6) = -8;
    if ( !v68 )
    {
      v66 = 0;
      goto LABEL_139;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false,false> *const)(v2 + 112));
  }
  v66 = 1;
LABEL_139:
  if ( v66 == 1 )
    v70 = 0;
  if ( v83 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF809C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 164) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80BC) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1536LL, v83);
  }
  return v70;
};

// Line 166: range 0000000012E96678-0000000012E9761E
int32_t __cdecl BlossomExcelConfigMgr::checkBlossomGroupsExcelConfig(
        BlossomExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::vector<unsigned int>::const_reference v11; // rax
  unsigned int *v12; // rdx
  __int64 v13; // rsi
  int SceneIdByGroupId; // edx
  char v15; // al
  std::vector<unsigned int>::const_reference v16; // rax
  unsigned int *v17; // rdx
  int v18; // edx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // edx
  uint32_t section_id; // ecx
  char v26; // al
  std::unordered_map<unsigned int,unsigned int> *p_section_2_order_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v28; // rdx
  char *v29; // rsi
  bool v30; // al
  common::milog::MiLogStream *v31; // rax
  const std::vector<unsigned int> *p_next_camp_id_vec; // rdx
  const unsigned int *M_current; // r15
  const unsigned int *v34; // rcx
  bool v35; // al
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  int v38; // eax
  LuaConfigMgr *lua_config_mgr; // [rsp+28h] [rbp-2F8h]
  data::BlossomGroupsExcelConfigMap *__for_range; // [rsp+30h] [rbp-2F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false,false>::reference v43; // [rsp+38h] [rbp-2E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::BlossomGroupsExcelConfig> >::type *id; // [rsp+40h] [rbp-2E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlossomGroupsExcelConfig> >::type *blossom_groups_excel_config; // [rsp+48h] [rbp-2D8h]
  char v46[720]; // [rsp+50h] [rbp-2D0h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 48 4 18 group_scene_id:191 64 4 27 decorate_group_scene_id:194 80 4 14 section_id:203 96 8 15"
                        " __for_begin:168 128 8 13 __for_end:168 160 8 9 <unknown> 192 8 9 <unknown> 224 8 9 <unknown> 25"
                        "6 8 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 "
                        "32 9 <unknown> 608 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BlossomExcelConfigMgr::checkBlossomGroupsExcelConfig;
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
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->blossom_groups_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlossomGroupsExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::BlossomGroupsExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlossomGroupsExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::BlossomGroupsExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false> *)(v3 + 128)) )
  {
    v43 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false,false> *const)(v3 + 96));
    id = std::get<0ul,unsigned int const,data::BlossomGroupsExcelConfig>(v43);
    blossom_groups_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlossomGroupsExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlossomGroupsExcelConfig>(v43);
    if ( std::vector<unsigned int>::empty(&blossom_groups_excel_config->refresh_type_vec) )
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
        "./src/txt_data_manual/BlossomExcelConfig.cpp",
        "checkBlossomGroupsExcelConfig",
        173);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        v6,
        (const char (*)[50])"[BlossomExcelConfigMgr] refresh_type_vec is empty");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v7 = 0;
    }
    else if ( !BlossomExcelConfigMgr::isGroupIdValid(this, txt_config_mgr, &blossom_groups_excel_config->new_group_vec)
           || !BlossomExcelConfigMgr::isGroupIdValid(
                 this,
                 txt_config_mgr,
                 &blossom_groups_excel_config->decorate_group_vec) )
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
        "./src/txt_data_manual/BlossomExcelConfig.cpp",
        "checkBlossomGroupsExcelConfig",
        180);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        v9,
        (const char (*)[46])"[BlossomExcelConfigMgr] some group is invalid");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v7 = 0;
    }
    else if ( std::vector<unsigned int>::size(&blossom_groups_excel_config->new_group_vec) == 1 )
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v11 = std::vector<unsigned int>::operator[](&blossom_groups_excel_config->new_group_vec, 0LL);
      v12 = (unsigned int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
      SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, v13);
      v15 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v15 != 0 && v15 <= 3 )
      {
        LOBYTE(v13) = v15 != 0;
        __asan_report_store4(v3 + 48, v13);
      }
      *(_DWORD *)(v3 + 48) = SceneIdByGroupId;
      if ( std::vector<unsigned int>::empty(&blossom_groups_excel_config->decorate_group_vec) )
        goto LABEL_44;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v16 = std::vector<unsigned int>::operator[](&blossom_groups_excel_config->decorate_group_vec, 0LL);
      v17 = (unsigned int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v13 = *v17;
      v18 = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, v13);
      v19 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
      if ( v19 != 0 && v19 <= 3 )
      {
        LOBYTE(v13) = v19 != 0;
        __asan_report_store4(v3 + 64, v13);
      }
      *(_DWORD *)(v3 + 64) = v18;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      if ( *(_DWORD *)(v3 + 48) == *(_DWORD *)(v3 + 64) )
      {
        v24 = 1;
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
          "./src/txt_data_manual/BlossomExcelConfig.cpp",
          "checkBlossomGroupsExcelConfig",
          197);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                v20,
                (const char (*)[41])"[BlossomExcelConfigMgr] new_group_scene:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v3 + 48));
        v23 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                v22,
                (const char (*)[36])" NOT equal decorate_group_scene_id:");
        v13 = v3 + 64;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v24 = 0;
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v24 == 1 )
      {
LABEL_44:
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((unsigned __int64)&blossom_groups_excel_config->section_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&blossom_groups_excel_config->section_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&blossom_groups_excel_config->section_id);
        }
        section_id = blossom_groups_excel_config->section_id;
        v26 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
        LOBYTE(v13) = v26 != 0;
        if ( v26 != 0 && v26 <= 3 )
          __asan_report_store4(v3 + 80, v13);
        *(_DWORD *)(v3 + 80) = section_id;
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        p_section_2_order_map = &this->section_2_order_map_;
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 192, v13);
        *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,unsigned int>::end(p_section_2_order_map);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        v28 = &this->section_2_order_map_;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, v13);
        *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                   v28,
                                                                                   (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 80));
        v29 = (char *)(v3 + 192);
        v30 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 160),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 192));
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( v30 )
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
            "./src/txt_data_manual/BlossomExcelConfig.cpp",
            "checkBlossomGroupsExcelConfig",
            206);
          v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            v31,
            (const char (*)[46])"[BlossomExcelConfigMgr] section_id is invalid");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v7 = 0;
        }
        else
        {
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          p_next_camp_id_vec = &blossom_groups_excel_config->next_camp_id_vec;
          if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 256, v29);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(p_next_camp_id_vec);
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          M_current = std::vector<unsigned int>::end(&blossom_groups_excel_config->next_camp_id_vec)._M_current;
          v34 = std::vector<unsigned int>::begin(&blossom_groups_excel_config->next_camp_id_vec)._M_current;
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 224, v29);
          *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v34, (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current, id);
          v35 = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256));
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
          if ( v35 )
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
              "./src/txt_data_manual/BlossomExcelConfig.cpp",
              "checkBlossomGroupsExcelConfig",
              214);
            v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 608),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v37 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                    v36,
                    (const char (*)[54])"[BlossomExcelConfigMgr] next_camp_id is invalid, id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v7 = 0;
          }
          else
          {
            v7 = 1;
          }
        }
      }
      else
      {
        v7 = 0;
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
        "./src/txt_data_manual/BlossomExcelConfig.cpp",
        "checkBlossomGroupsExcelConfig",
        187);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        v10,
        (const char (*)[49])"[BlossomExcelConfigMgr] new_group_vec size error");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v7 = 0;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v7 != 1 )
    {
      v38 = 0;
      goto LABEL_69;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false,false> *const)(v3 + 96));
  }
  v38 = 1;
LABEL_69:
  if ( v38 == 1 )
    v2 = 0;
  if ( v46 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = -168430091;
  }
  return v2;
};

// Line 223: range 0000000012E97620-0000000012E97AF1
int32_t __cdecl BlossomExcelConfigMgr::rewriteBlossomSectionOrderExcelConfig(
        BlossomExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  unsigned int *v7; // r8
  uint32_t section_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t order; // ecx
  char v12; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // edx
  int v16; // eax
  int32_t result; // eax
  data::BlossomSectionOrderExcelConfigMap *__for_range; // [rsp+10h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomSectionOrderExcelConfig>,false,false>::reference v19; // [rsp+18h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlossomSectionOrderExcelConfig> >::type *blossom_section_order_excel_config; // [rsp+28h] [rbp-F8h]
  char v21[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 14 section_id:226 48 4 9 order:227 64 8 15 __for_begin:224 96 8 13 __for_end:224 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BlossomExcelConfigMgr::rewriteBlossomSectionOrderExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  __for_range = &this->blossom_section_order_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlossomSectionOrderExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BlossomSectionOrderExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlossomSectionOrderExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::BlossomSectionOrderExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BlossomSectionOrderExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomSectionOrderExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomSectionOrderExcelConfig>,false> *)(v3 + 96)) )
      break;
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomSectionOrderExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomSectionOrderExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::BlossomSectionOrderExcelConfig>(v19);
    blossom_section_order_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlossomSectionOrderExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlossomSectionOrderExcelConfig>(v19);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&blossom_section_order_excel_config->section_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&blossom_section_order_excel_config->section_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&blossom_section_order_excel_config->section_id);
    }
    section_id = blossom_section_order_excel_config->section_id;
    v9 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v6) = v9 != 0;
      __asan_report_store4(v3 + 32, v6);
    }
    *(_DWORD *)(v3 + 32) = section_id;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    v10 = (((_BYTE)blossom_section_order_excel_config + 20) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&blossom_section_order_excel_config->order >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)blossom_section_order_excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&blossom_section_order_excel_config->order >> 3)
                                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&blossom_section_order_excel_config->order);
    }
    order = blossom_section_order_excel_config->order;
    v12 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v12 != 0 && v12 <= 3 )
    {
      LOBYTE(v10) = v12 != 0;
      __asan_report_store4(v3 + 48, v10);
    }
    *(_DWORD *)(v3 + 48) = order;
    v13 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
            &this->section_2_order_map_,
            (unsigned int *)(v3 + 32),
            (unsigned int *)(v3 + 48),
            (unsigned int *)&this->section_2_order_map_,
            v7);
    if ( !v13.second )
    {
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/BlossomExcelConfig.cpp",
        "rewriteBlossomSectionOrderExcelConfig",
        230);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        v14,
        (const char (*)[46])"[BlossomExcelConfigMgr] section_id duplicated");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v15 = 0;
    }
    else
    {
      v15 = 1;
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v15 != 1 )
    {
      v16 = 0;
      goto LABEL_27;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomSectionOrderExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomSectionOrderExcelConfig>,false,false> *const)(v3 + 64));
  }
  v16 = 1;
LABEL_27:
  if ( v16 == 1 )
    v2 = 0;
  result = v2;
  if ( v21 == (char *)v3 )
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

// Line 238: range 0000000012E97D50-0000000012E988B3
int32_t __cdecl BlossomExcelConfigMgr::rewriteBlossomGroupsExcelConfig(
        BlossomExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *v6; // rsi
  uint32_t *p_city_id; // rax
  __int64 v8; // rsi
  uint32_t city_id; // ecx
  char v10; // al
  uint32_t section_id; // ecx
  char v12; // al
  char *v13; // rsi
  unsigned int *M_current; // r14
  unsigned int *v15; // rcx
  bool v16; // al
  std::vector<unsigned int> *v17; // rdx
  std::tuple_element<0,std::pair<unsigned int const,data::BlossomGroupsExcelConfig> >::type *v18; // rsi
  __int64 v19; // rdx
  std::vector<unsigned int> *v20; // rdx
  std::vector<unsigned int> *v21; // rdx
  unsigned int *v22; // rax
  const unsigned int *v23; // r8
  int *v24; // rdx
  int v25; // ecx
  char v26; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // edx
  int v32; // edx
  unsigned int *v33; // r15
  std::vector<unsigned int>::iterator v34; // rax
  int32_t result; // eax
  data::BlossomGroupsExcelConfigMap *__for_range; // [rsp+20h] [rbp-220h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false,false>::reference v37; // [rsp+28h] [rbp-218h]
  std::tuple_element<0,std::pair<unsigned int const,data::BlossomGroupsExcelConfig> >::type *id; // [rsp+30h] [rbp-210h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlossomGroupsExcelConfig> >::type *blossom_groups_excel_config; // [rsp+38h] [rbp-208h]
  std::unordered_map<unsigned int,std::vector<unsigned int>>::mapped_type *section_id_vec; // [rsp+40h] [rbp-200h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-1F8h]
  std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range_1; // [rsp+50h] [rbp-1F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::reference __in; // [rsp+58h] [rbp-1E8h]
  std::vector<unsigned int> *section_id_vec_0; // [rsp+68h] [rbp-1D8h]
  char v45[464]; // [rsp+70h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 4 11 city_id:241 64 4 14 section_id:242 80 4 12 group_id:258 96 8 15 __for_begin:239 128 8"
                        " 13 __for_end:239 160 8 9 <unknown> 192 8 9 <unknown> 224 8 15 __for_begin:258 256 8 13 __for_en"
                        "d:258 288 8 15 __for_begin:268 320 8 13 __for_end:268 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BlossomExcelConfigMgr::rewriteBlossomGroupsExcelConfig;
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
  v5[536862732] = -202116109;
  __for_range = &this->blossom_groups_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlossomGroupsExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::BlossomGroupsExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlossomGroupsExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::BlossomGroupsExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (const char *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false> *)(v3 + 128)) )
      break;
    v37 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false,false> *const)(v3 + 96));
    id = std::get<0ul,unsigned int const,data::BlossomGroupsExcelConfig>(v37);
    blossom_groups_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlossomGroupsExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlossomGroupsExcelConfig>(v37);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    p_city_id = &blossom_groups_excel_config->city_id;
    v8 = (((_BYTE)blossom_groups_excel_config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_city_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)blossom_groups_excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_city_id >> 3)
                                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(p_city_id);
    }
    city_id = blossom_groups_excel_config->city_id;
    v10 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(v8) = v10 != 0;
      __asan_report_store4(v3 + 48, v8);
    }
    *(_DWORD *)(v3 + 48) = city_id;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&blossom_groups_excel_config->section_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&blossom_groups_excel_config->section_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&blossom_groups_excel_config->section_id);
    }
    section_id = blossom_groups_excel_config->section_id;
    v12 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
    if ( v12 != 0 && v12 <= 3 )
    {
      LOBYTE(v8) = v12 != 0;
      __asan_report_store4(v3 + 64, v8);
    }
    *(_DWORD *)(v3 + 64) = section_id;
    v13 = (char *)(v3 + 48);
    section_id_vec = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                       &this->city_2_section_map_,
                       (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v13);
    *(std::vector<unsigned int>::iterator *)(v3 + 192) = std::vector<unsigned int>::end(section_id_vec);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    M_current = std::vector<unsigned int>::end(section_id_vec)._M_current;
    v15 = std::vector<unsigned int>::begin(section_id_vec)._M_current;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v13);
    *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                              (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v15,
                                                                                              (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                              (const unsigned int *)(v3 + 64));
    v16 = __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160),
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 192));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v16 )
      std::vector<unsigned int>::push_back(section_id_vec, (const std::vector<unsigned int>::value_type *)(v3 + 64));
    v17 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
            &this->section_2_camp_map_,
            (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 64));
    std::vector<unsigned int>::push_back(v17, id);
    v18 = (std::tuple_element<0,std::pair<unsigned int const,data::BlossomGroupsExcelConfig> >::type *)(((_BYTE)blossom_groups_excel_config + 121) & 7);
    v19 = (*(_BYTE *)(((unsigned __int64)&blossom_groups_excel_config->is_initial_refresh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&blossom_groups_excel_config->is_initial_refresh >> 3) + 0x7FFF8000));
    if ( (_BYTE)v19 )
      __asan_report_load1(&blossom_groups_excel_config->is_initial_refresh, v18, v19);
    if ( blossom_groups_excel_config->is_initial_refresh )
    {
      v20 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
              &this->section_2_initial_camp_map_,
              (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 64));
      v18 = id;
      std::vector<unsigned int>::push_back(v20, id);
    }
    if ( *(char *)(((unsigned __int64)&blossom_groups_excel_config->is_safe >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&blossom_groups_excel_config->is_safe, v18, &blossom_groups_excel_config->is_safe);
    if ( blossom_groups_excel_config->is_safe )
    {
      v21 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
              &this->section_2_safe_camp_map_,
              (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 64));
      v18 = id;
      std::vector<unsigned int>::push_back(v21, id);
    }
    __for_range_0 = &blossom_groups_excel_config->new_group_vec;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v18);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v18);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (const char *)(v3 + 256);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256)) )
      {
        v31 = 1;
        goto LABEL_48;
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v22 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
      v24 = (int *)v22;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v22);
      }
      v25 = *v24;
      v26 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( v26 != 0 && v26 <= 3 )
      {
        LOBYTE(v6) = v26 != 0;
        __asan_report_store4(v3 + 80, v6);
      }
      *(_DWORD *)(v3 + 80) = v25;
      v27 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
              &this->group_2_camp_map_,
              (unsigned int *)(v3 + 80),
              id,
              (unsigned int *)&this->group_2_camp_map_,
              v23);
      if ( !v27.second )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
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
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "rewriteBlossomGroupsExcelConfig",
      262);
    v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 352),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v29 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            v28,
            (const char (*)[35])"[BlossomExcelConfigMgr] group_id: ");
    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 80));
    v6 = " duplicated";
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v30, (const char (*)[12])" duplicated");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v31 = 0;
LABEL_48:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v31 != 1 )
    {
      v32 = 0;
      goto LABEL_52;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false,false> *const)(v3 + 96));
  }
  v32 = 1;
LABEL_52:
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v32 == 1 )
  {
    __for_range_1 = &this->city_2_section_map_;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v6);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 288) = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, v6);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 320) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range_1);
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 288),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 320)) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 288));
      std::get<0ul,unsigned int const,std::vector<unsigned int>>(__in);
      section_id_vec_0 = std::get<1ul,unsigned int const,std::vector<unsigned int>>(__in);
      v33 = std::vector<unsigned int>::end(section_id_vec_0)._M_current;
      v34._M_current = std::vector<unsigned int>::begin(section_id_vec_0)._M_current;
      std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,BlossomExcelConfigMgr::rewriteBlossomGroupsExcelConfig(TxtConfigMgr &)::{lambda(unsigned int,unsigned int)#1}>(
        v34,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v33,
        (BlossomExcelConfigMgr::rewriteBlossomGroupsExcelConfig::<lambda(uint32_t, uint32_t)>)this);
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 288));
    }
    v2 = 0;
  }
  result = v2;
  if ( v45 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 271: range 0000000012E97AF2-0000000012E97D4F
// local variable allocation has failed, the output may be wrong!
bool __cdecl BlossomExcelConfigMgr::rewriteBlossomGroupsExcelConfig(TxtConfigMgr &)::{lambda(unsigned int,unsigned int)#1}::operator()(
        const BlossomExcelConfigMgr::rewriteBlossomGroupsExcelConfig::<lambda(uint32_t, uint32_t)> *const __closure,
        uint32_t lhs,
        uint32_t rhs)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  char v6; // al
  bool result; // al
  unsigned int v8; // ecx
  char v10[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 l_order:273 64 4 11 r_order:274";
  *(_QWORD *)(v3 + 16) = BlossomExcelConfigMgr::rewriteBlossomGroupsExcelConfig(TxtConfigMgr &)::{lambda(unsigned int,unsigned int)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48, *(_QWORD *)&lhs);
  *(_DWORD *)(v3 + 48) = 0;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 64, *(_QWORD *)&lhs);
  *(_DWORD *)(v3 + 64) = 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( BlossomExcelConfigMgr::getBlossomSectionOrder(__closure->__this, lhs, (uint32_t *)(v3 + 48)) )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( BlossomExcelConfigMgr::getBlossomSectionOrder(__closure->__this, rhs, (uint32_t *)(v3 + 64)) )
LABEL_14:
    v6 = 1;
  else
    v6 = 0;
  if ( v6 )
  {
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
    v8 = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 64);
    result = v8 < *(_DWORD *)(v3 + 64);
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 288: range 0000000012E988B4-0000000012E9968D
int32_t __cdecl BlossomExcelConfigMgr::rewriteBlossomRefreshExcelConfig(
        BlossomExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  const std::pair<unsigned int const,data::BlossomRefreshExcelConfig> *v7; // rsi
  data::BlossomRefreshCondType type; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::vector<unsigned int>::size_type v13; // rax
  int v14; // eax
  const std::set<unsigned int>::value_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *refreshed; // rax
  common::milog::MiLogStream *v19; // r14
  std::vector<unsigned int>::size_type v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::vector<unsigned int>::size_type v25; // rax
  int v26; // edx
  std::vector<unsigned int>::size_type v27; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v28; // rax
  int *v29; // rdx
  int v30; // ecx
  char v31; // al
  _BOOL4 v32; // r15d
  int v33; // eax
  int32_t result; // eax
  uint32_t idx; // [rsp+24h] [rbp-31Ch]
  data::BlossomRefreshExcelConfigMap *__for_range; // [rsp+28h] [rbp-318h]
  std::vector<data::BlossomRefreshCond> *__for_range_0; // [rsp+40h] [rbp-300h]
  const data::BlossomRefreshCond *cond; // [rsp+48h] [rbp-2F8h]
  char v39[752]; // [rsp+50h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 4 20 activity_cond_id:323 48 8 15 __for_begin:289 80 8 13 __for_end:289 112 8 15 __for_beg"
                        "in:291 144 8 13 __for_end:291 176 8 9 <unknown> 208 8 9 <unknown> 240 8 9 <unknown> 272 32 9 <un"
                        "known> 336 32 9 <unknown> 400 32 9 <unknown> 464 168 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BlossomExcelConfigMgr::rewriteBlossomRefreshExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862739] = -218103808;
  v5[536862740] = -202116109;
  v5[536862741] = -202116109;
  __for_range = &this->blossom_refresh_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false> *)(v3 + 80)) )
  {
    v6 = ((v3 + 464) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_DWORD *)(v6 + 4) = 0;
    *(_DWORD *)(v6 + 8) = 0;
    *(_DWORD *)(v6 + 12) = 0;
    *(_DWORD *)(v6 + 16) = 0;
    *(_BYTE *)(v6 + 20) = 0;
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false,false> *const)(v3 + 48));
    std::pair<unsigned int const,data::BlossomRefreshExcelConfig>::pair(
      (std::pair<unsigned int const,data::BlossomRefreshExcelConfig> *const)(v3 + 464),
      v7);
    std::get<0ul,unsigned int const,data::BlossomRefreshExcelConfig>((const std::pair<unsigned int const,data::BlossomRefreshExcelConfig> *)(v3 + 464));
    __for_range_0 = &std::get<1ul,unsigned int const,data::BlossomRefreshExcelConfig>((const std::pair<unsigned int const,data::BlossomRefreshExcelConfig> *)(v3 + 464))->refresh_cond_vec;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, v7);
    *(std::vector<data::BlossomRefreshCond>::const_iterator *)(v3 + 112) = std::vector<data::BlossomRefreshCond>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, v7);
    *(std::vector<data::BlossomRefreshCond>::const_iterator *)(v3 + 144) = std::vector<data::BlossomRefreshCond>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::BlossomRefreshCond const*,std::vector<data::BlossomRefreshCond>>(
              (const __gnu_cxx::__normal_iterator<const data::BlossomRefreshCond*,std::vector<data::BlossomRefreshCond> > *)(v3 + 112),
              (const __gnu_cxx::__normal_iterator<const data::BlossomRefreshCond*,std::vector<data::BlossomRefreshCond> > *)(v3 + 144)) )
      {
        v14 = 1;
        goto LABEL_52;
      }
      cond = __gnu_cxx::__normal_iterator<data::BlossomRefreshCond const*,std::vector<data::BlossomRefreshCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::BlossomRefreshCond*,std::vector<data::BlossomRefreshCond> > *const)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->type);
      }
      type = cond->type;
      if ( type == BLOSSOM_REFRESH_COND_QUEST_FINISH )
        break;
      if ( type == BLOSSOM_REFRESH_COND_ACTIVITY_COND )
      {
        if ( std::vector<unsigned int>::empty(&cond->param) )
        {
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 336, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 336),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/BlossomExcelConfig.cpp",
            "rewriteBlossomRefreshExcelConfig",
            311);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  v16,
                  (const char (*)[36])"[BlossomExcelConfigMgr] cond_type: ");
          refreshed = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
                        v17,
                        &cond->type);
          v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  refreshed,
                  (const char (*)[22])byte_1AAAAD40);
          *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
          v20 = std::vector<unsigned int>::size(&cond->param);
          if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
            v20 = __asan_report_store8(v3 + 208, byte_1AAAAD40);
          *(_QWORD *)(v3 + 208) = v20;
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v19,
            (const unsigned __int64 *)(v3 + 208));
          *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
          goto LABEL_52;
        }
        for ( idx = 0; idx < std::vector<unsigned int>::size(&cond->param); idx += 2 )
        {
          if ( idx + 1 < std::vector<unsigned int>::size(&cond->param) )
          {
            *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
            v27 = idx + 1;
            v28 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->param, v27);
            v29 = (int *)v28;
            if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v28);
            }
            v30 = *v29;
            v31 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
            if ( v31 != 0 && v31 <= 3 )
            {
              LOBYTE(v27) = v31 != 0;
              __asan_report_store4(v3 + 32, v27);
            }
            *(_DWORD *)(v3 + 32) = v30;
            std::set<unsigned int>::insert(
              &this->activity_cond_set_,
              (const std::set<unsigned int>::value_type *)(v3 + 32));
            v26 = 1;
          }
          else
          {
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 400),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/BlossomExcelConfig.cpp",
              "rewriteBlossomRefreshExcelConfig",
              319);
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 400),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v22 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    v21,
                    (const char (*)[36])"[BlossomExcelConfigMgr] cond_type: ");
            v23 = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
                    v22,
                    &cond->type);
            v24 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v23,
                    (const char (*)[22])byte_1AAAAD40);
            *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
            v25 = std::vector<unsigned int>::size(&cond->param);
            if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
              v25 = __asan_report_store8(v3 + 240, byte_1AAAAD40);
            *(_QWORD *)(v3 + 240) = v25;
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v24,
              (const unsigned __int64 *)(v3 + 240));
            *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v26 = 0;
          }
          *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
          if ( v26 != 1 )
          {
            v14 = 0;
            goto LABEL_52;
          }
        }
      }
LABEL_50:
      __gnu_cxx::__normal_iterator<data::BlossomRefreshCond const*,std::vector<data::BlossomRefreshCond>>::operator++((__gnu_cxx::__normal_iterator<const data::BlossomRefreshCond*,std::vector<data::BlossomRefreshCond> > *const)(v3 + 112));
    }
    if ( std::vector<unsigned int>::size(&cond->param) == 1 )
    {
      v15 = std::vector<unsigned int>::operator[](&cond->param, 0LL);
      std::set<unsigned int>::insert(&this->quest_set_, v15);
      goto LABEL_50;
    }
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 111) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 272, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 272),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "rewriteBlossomRefreshExcelConfig",
      299);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 272),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            v9,
            (const char (*)[36])"[BlossomExcelConfigMgr] cond_type: ");
    v11 = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
            v10,
            &cond->type);
    v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v11, (const char (*)[22])byte_1AAAAD40);
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    v13 = std::vector<unsigned int>::size(&cond->param);
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      v13 = __asan_report_store8(v3 + 176, byte_1AAAAD40);
    *(_QWORD *)(v3 + 176) = v13;
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, (const unsigned __int64 *)(v3 + 176));
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v14 = 0;
LABEL_52:
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    v32 = v14 == 1;
    std::pair<unsigned int const,data::BlossomRefreshExcelConfig>::~pair((std::pair<unsigned int const,data::BlossomRefreshExcelConfig> *const)(v3 + 464));
    if ( !v32 )
    {
      v33 = 0;
      goto LABEL_56;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false,false> *const)(v3 + 48));
  }
  v33 = 1;
LABEL_56:
  if ( v33 == 1 )
    v2 = 0;
  result = v2;
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8054) = 0;
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
  }
  return result;
};

// Line 341: range 0000000012E9968E-0000000012E99A0C
__int64 __fastcall BlossomExcelConfigMgr::checkCityBlossomIsOpen(
        const BlossomExcelConfigMgr *const this,
        __int64 city_id,
        uint32_t level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::BlossomOpenExcelConfigMap *p_blossom_open_excel_config_map; // rdx
  data::BlossomOpenExcelConfigMap *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlossomOpenExcelConfig>,false,false>::pointer v10; // rdx
  uint32_t *p_open_level; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlossomOpenExcelConfig>,false,false>::pointer v12; // rdx
  uint32_t *v13; // rax
  char v15[224]; // [rsp+10h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 11 city_id:340 64 8 8 iter:342 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BlossomExcelConfigMgr::checkCityBlossomIsOpen;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = city_id;
  p_blossom_open_excel_config_map = &this->blossom_open_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, city_id);
  *(std::unordered_map<unsigned int,data::BlossomOpenExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BlossomOpenExcelConfig>::find(
                                                                                                  p_blossom_open_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::BlossomOpenExcelConfig>::key_type *)(v3 + 48));
  v7 = &this->blossom_open_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::BlossomOpenExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::BlossomOpenExcelConfig>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,data::BlossomOpenExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomOpenExcelConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomOpenExcelConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "checkCityBlossomIsOpen",
      345);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      (common::milog::MiLogStream *const)(v3 + 128),
      (const char (*)[43])"[BlossomExcelConfigMgr] city_id is invalid");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0LL;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlossomOpenExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlossomOpenExcelConfig>,false,false> *const)(v3 + 64));
    p_open_level = &v10->second.open_level;
    if ( *(_BYTE *)(((unsigned __int64)p_open_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_open_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_open_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_open_level);
    }
    if ( !v10->second.open_level )
      goto LABEL_19;
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlossomOpenExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlossomOpenExcelConfig>,false,false> *const)(v3 + 64));
    v13 = &v12->second.open_level;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    if ( level >= v12->second.open_level )
      result = 1LL;
    else
LABEL_19:
      result = 0LL;
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 353: range 0000000012E99A0E-0000000012E99D88
__int64 __fastcall BlossomExcelConfigMgr::getBlossomSectionOrder(
        const BlossomExcelConfigMgr *const this,
        __int64 section_id,
        unsigned __int64 order)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,unsigned int> *p_section_2_order_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v12; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v15; // dl
  char v17[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 14 section_id:352 64 8 8 iter:354 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BlossomExcelConfigMgr::getBlossomSectionOrder;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = section_id;
  p_section_2_order_map = &this->section_2_order_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, section_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_section_2_order_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  v7 = &this->section_2_order_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v7);
  v8 = (char *)(v3 + 96);
  v9 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "getBlossomSectionOrder",
      357);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 128),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      v10,
      (const char (*)[46])"[BlossomExcelConfigMgr] section_id is invalid");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
    p_second = &v12->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v12->second;
    v15 = *(_BYTE *)((order >> 3) + 0x7FFF8000);
    if ( v15 != 0 && (char)((order & 7) + 3) >= v15 )
    {
      LOBYTE(v8) = v15 != 0;
      __asan_report_store4(order, v8);
    }
    *(_DWORD *)order = second;
    result = 0LL;
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 367: range 0000000012E99D8A-0000000012E9A095
__int64 __fastcall BlossomExcelConfigMgr::getBlossomSectionIdVec(
        const BlossomExcelConfigMgr *const this,
        __int64 city_id,
        std::vector<unsigned int> *section_id_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_city_2_section_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v11; // rax
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 11 city_id:366 64 8 8 iter:368 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BlossomExcelConfigMgr::getBlossomSectionIdVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = city_id;
  p_city_2_section_map = &this->city_2_section_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, city_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_city_2_section_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->city_2_section_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "getBlossomSectionIdVec",
      371);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      v9,
      (const char (*)[43])"[BlossomExcelConfigMgr] city_id is invalid");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
    std::vector<unsigned int>::operator=(section_id_vec, &v11->second);
    result = 0LL;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 381: range 0000000012E9A096-0000000012E9A3A1
__int64 __fastcall BlossomExcelConfigMgr::getBlossomCircleCampIdVec(
        const BlossomExcelConfigMgr *const this,
        __int64 section_id,
        std::vector<unsigned int> *camp_id_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_section_2_camp_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v11; // rax
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 14 section_id:380 64 8 8 iter:382 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BlossomExcelConfigMgr::getBlossomCircleCampIdVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = section_id;
  p_section_2_camp_map = &this->section_2_camp_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, section_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_section_2_camp_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->section_2_camp_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "getBlossomCircleCampIdVec",
      385);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      v9,
      (const char (*)[46])"[BlossomExcelConfigMgr] section_id is invalid");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
    std::vector<unsigned int>::operator=(camp_id_vec, &v11->second);
    result = 0LL;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 395: range 0000000012E9A3A2-0000000012E9A581
__int64 __fastcall BlossomExcelConfigMgr::getBlossomInitialCircleCampIdVec(
        const BlossomExcelConfigMgr *const this,
        __int64 section_id,
        std::vector<unsigned int> *camp_id_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_section_2_initial_camp_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v10; // rax
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 section_id:394 64 8 8 iter:396 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BlossomExcelConfigMgr::getBlossomInitialCircleCampIdVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = section_id;
  p_section_2_initial_camp_map = &this->section_2_initial_camp_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, section_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_section_2_initial_camp_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->section_2_initial_camp_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
    std::vector<unsigned int>::operator=(camp_id_vec, &v10->second);
    result = 0LL;
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

// Line 409: range 0000000012E9A582-0000000012E9A88D
__int64 __fastcall BlossomExcelConfigMgr::getBlossomSafeCircleCampIdVec(
        const BlossomExcelConfigMgr *const this,
        __int64 section_id,
        std::vector<unsigned int> *camp_id_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_section_2_safe_camp_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v11; // rax
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 14 section_id:408 64 8 8 iter:410 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BlossomExcelConfigMgr::getBlossomSafeCircleCampIdVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = section_id;
  p_section_2_safe_camp_map = &this->section_2_safe_camp_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, section_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_section_2_safe_camp_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->section_2_safe_camp_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "getBlossomSafeCircleCampIdVec",
      413);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      v9,
      (const char (*)[46])"[BlossomExcelConfigMgr] section_id is invalid");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
    std::vector<unsigned int>::operator=(camp_id_vec, &v11->second);
    result = 0LL;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 423: range 0000000012E9A88E-0000000012E9ABD9
bool __fastcall BlossomExcelConfigMgr::checkBlossomRefreshTypeIsMatch(
        const BlossomExcelConfigMgr *const this,
        uint32_t circle_camp_id,
        data::BlossomRefreshType refresh_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  bool result; // al
  const std::vector<unsigned int> *p_refresh_type_vec; // rdx
  const unsigned int *M_current; // r14
  const unsigned int *v11; // rcx
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+18h] [rbp-F8h]
  char v14[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 9 <unknown> 48 4 18 circle_camp_id:422 64 8 9 <unknown> 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BlossomExcelConfigMgr::checkBlossomRefreshTypeIsMatch;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = circle_camp_id;
  v6 = *(unsigned int *)(v3 + 48);
  groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(this, v6);
  if ( groups_config_ptr )
  {
    p_refresh_type_vec = &groups_config_ptr->refresh_type_vec;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::end(p_refresh_type_vec);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32, v6);
    *(_DWORD *)(v3 + 32) = refresh_type;
    M_current = std::vector<unsigned int>::end(&groups_config_ptr->refresh_type_vec)._M_current;
    v11 = std::vector<unsigned int>::begin(&groups_config_ptr->refresh_type_vec)._M_current;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, v6);
    *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                   (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v11,
                                                                                                   (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                   (const unsigned int *)(v3 + 32));
    result = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
               (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
               (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96));
  }
  else
  {
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "checkBlossomRefreshTypeIsMatch",
      427);
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[52])"[BlossomExcelConfigMgr] circle_camp_id is invalid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0;
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 437: range 0000000012E9ABDA-0000000012E9AE28
__int64 __fastcall BlossomExcelConfigMgr::getCircleCampIdByGroupId(
        const BlossomExcelConfigMgr *const this,
        __int64 group_id,
        unsigned __int64 circle_camp_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,unsigned int> *p_group_2_camp_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v11; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v14; // dl
  char v16[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 group_id:436 64 8 8 iter:438 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BlossomExcelConfigMgr::getCircleCampIdByGroupId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = group_id;
  p_group_2_camp_map = &this->group_2_camp_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, group_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_group_2_camp_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  v7 = &this->group_2_camp_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v7);
  v8 = (char *)(v3 + 96);
  v9 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
    p_second = &v11->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v11->second;
    v14 = *(_BYTE *)((circle_camp_id >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)((circle_camp_id & 7) + 3) >= v14 )
    {
      LOBYTE(v8) = v14 != 0;
      __asan_report_store4(circle_camp_id, v8);
    }
    *(_DWORD *)circle_camp_id = second;
    result = 0LL;
  }
  if ( v16 == (char *)v3 )
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

// Line 450: range 0000000012E9AE2A-0000000012E9B19F
std::vector<data::BlossomRewardExcelConfig>::const_reference __fastcall BlossomExcelConfigMgr::findBlossomDropReward(
        const BlossomExcelConfigMgr *const this,
        __int64 refresh_id,
        uint32_t world_level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::BlossomRefreshExcelConfigMap *p_blossom_refresh_excel_config_map; // rdx
  data::BlossomRefreshExcelConfigMap *v7; // rdx
  bool refreshed; // al
  common::milog::MiLogStream *v9; // rax
  std::vector<data::BlossomRewardExcelConfig>::const_reference result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false,false>::pointer v11; // rax
  const data::BlossomRefreshExcelConfig *excel_config; // [rsp+18h] [rbp-E8h]
  char v14[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 14 refresh_id:449 64 8 8 iter:451 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BlossomExcelConfigMgr::findBlossomDropReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = refresh_id;
  p_blossom_refresh_excel_config_map = &this->blossom_refresh_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, refresh_id);
  *(std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::find(
                                                                                                     p_blossom_refresh_excel_config_map,
                                                                                                     (const std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::key_type *)(v3 + 48));
  v7 = &this->blossom_refresh_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::end(v7);
  refreshed = std::__detail::operator==<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false> *)(v3 + 64),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( refreshed )
  {
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "findBlossomDropReward",
      454);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      v9,
      (const char (*)[46])"[BlossomExcelConfigMgr] refresh_id is invalid");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0LL;
  }
  else
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false,false> *const)(v3 + 64));
    excel_config = &v11->second;
    if ( std::vector<data::BlossomRewardExcelConfig>::empty(&v11->second.drop_vec) )
    {
      result = 0LL;
    }
    else if ( world_level < std::vector<data::BlossomRewardExcelConfig>::size(&excel_config->drop_vec) )
    {
      result = std::vector<data::BlossomRewardExcelConfig>::operator[](&excel_config->drop_vec, world_level);
    }
    else
    {
      result = std::vector<data::BlossomRewardExcelConfig>::back(&excel_config->drop_vec);
    }
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 474: range 0000000012E9B1A0-0000000012E9B506
__int64 __fastcall BlossomExcelConfigMgr::getBlossomAllGroupIdVec(
        const BlossomExcelConfigMgr *const this,
        uint32_t circle_camp_id,
        std::vector<unsigned int> *group_id_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  const unsigned int *M_current; // r14
  const unsigned int *v10; // rsi
  const unsigned int *v11; // r15
  const unsigned int *v12; // r14
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+28h] [rbp-F8h]
  char v15[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 18 circle_camp_id:473 64 8 9 <unknown> 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BlossomExcelConfigMgr::getBlossomAllGroupIdVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = circle_camp_id;
  groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(this, *(unsigned int *)(v3 + 48));
  if ( groups_config_ptr )
  {
    M_current = std::vector<unsigned int>::end(&groups_config_ptr->new_group_vec)._M_current;
    v10 = std::vector<unsigned int>::begin(&groups_config_ptr->new_group_vec)._M_current;
    std::vector<unsigned int>::assign<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
      group_id_vec,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v10,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
    v11 = std::vector<unsigned int>::end(&groups_config_ptr->decorate_group_vec)._M_current;
    v12 = std::vector<unsigned int>::begin(&groups_config_ptr->decorate_group_vec)._M_current;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, v10);
    *(std::vector<unsigned int>::iterator *)(v3 + 64) = std::vector<unsigned int>::end(group_id_vec);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96),
      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 64));
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 96);
    std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
      group_id_vec,
      *(std::vector<unsigned int>::const_iterator *)(v3 + 96),
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v12,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v11);
    result = 0LL;
  }
  else
  {
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "getBlossomAllGroupIdVec",
      478);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           v6,
           (const char (*)[52])"[BlossomExcelConfigMgr] circle_camp_id is invalid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0xFFFFFFFFLL;
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 489: range 0000000012E9B508-0000000012E9B80C
__int64 __fastcall BlossomExcelConfigMgr::getBlossomGroupIdVec(
        const BlossomExcelConfigMgr *const this,
        uint32_t circle_camp_id,
        std::vector<unsigned int> *group_id_vec,
        unsigned __int64 delay_sec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  __int64 v10; // rsi
  uint32_t delay_unload_sec; // ecx
  char v12; // dl
  const unsigned int *M_current; // r12
  std::vector<unsigned int>::const_iterator v14; // rax
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+28h] [rbp-A8h]
  char v18[160]; // [rsp+30h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 18 circle_camp_id:488 64 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = BlossomExcelConfigMgr::getBlossomGroupIdVec;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862723] = -202116109;
  *(_DWORD *)(v4 + 48) = circle_camp_id;
  groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(this, *(unsigned int *)(v4 + 48));
  if ( groups_config_ptr )
  {
    v10 = (((_BYTE)groups_config_ptr - 124) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&groups_config_ptr->delay_unload_sec >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)groups_config_ptr - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&groups_config_ptr->delay_unload_sec >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&groups_config_ptr->delay_unload_sec);
    }
    delay_unload_sec = groups_config_ptr->delay_unload_sec;
    v12 = *(_BYTE *)((delay_sec >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)((delay_sec & 7) + 3) >= v12 )
    {
      LOBYTE(v10) = v12 != 0;
      __asan_report_store4(delay_sec, v10);
    }
    *(_DWORD *)delay_sec = delay_unload_sec;
    M_current = std::vector<unsigned int>::end(&groups_config_ptr->new_group_vec)._M_current;
    v14._M_current = std::vector<unsigned int>::begin(&groups_config_ptr->new_group_vec)._M_current;
    std::vector<unsigned int>::assign<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
      group_id_vec,
      v14,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
    result = 0LL;
  }
  else
  {
    if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "getBlossomGroupIdVec",
      493);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           v7,
           (const char (*)[52])"[BlossomExcelConfigMgr] circle_camp_id is invalid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    result = 0xFFFFFFFFLL;
  }
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 503: range 0000000012E9B80E-0000000012E9BA77
__int64 __fastcall BlossomExcelConfigMgr::getBlossomDecorateGroupIdVec(
        const BlossomExcelConfigMgr *const this,
        uint32_t circle_camp_id,
        std::vector<unsigned int> *group_id_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  const unsigned int *M_current; // r12
  std::vector<unsigned int>::const_iterator v10; // rax
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+28h] [rbp-A8h]
  char v13[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 18 circle_camp_id:502 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BlossomExcelConfigMgr::getBlossomDecorateGroupIdVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = circle_camp_id;
  groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(this, *(unsigned int *)(v3 + 48));
  if ( groups_config_ptr )
  {
    M_current = std::vector<unsigned int>::end(&groups_config_ptr->decorate_group_vec)._M_current;
    v10._M_current = std::vector<unsigned int>::begin(&groups_config_ptr->decorate_group_vec)._M_current;
    std::vector<unsigned int>::assign<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
      group_id_vec,
      v10,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
    result = 0LL;
  }
  else
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BlossomExcelConfig.cpp",
      "getBlossomDecorateGroupIdVec",
      507);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           v6,
           (const char (*)[52])"[BlossomExcelConfigMgr] circle_camp_id is invalid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = 0xFFFFFFFFLL;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 516: range 0000000012E9BA78-0000000012E9C626
bool __cdecl BlossomExcelConfigMgr::isGroupIdValid(
        const BlossomExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<unsigned int> *group_vec)
{
  bool v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  __int64 v12; // rsi
  int SceneIdByGroupId; // edx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // eax
  std::vector<unsigned int> *v20; // rax
  __int64 v21; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // edx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  bool result; // al
  LuaConfigMgr *lua_config_mgr; // [rsp+20h] [rbp-230h]
  const SceneScriptConfig *scene_config_ptr; // [rsp+30h] [rbp-220h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+38h] [rbp-218h]
  char v37[528]; // [rsp+40h] [rbp-210h] BYREF

  v4 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 4 12 group_id:520 64 4 18 group_scene_id:522 80 8 15 __for_begin:520 112 8 13 __for_end:520"
                        " 144 32 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 48 22 scene_to_group_map:519";
  *(_QWORD *)(v4 + 16) = BlossomExcelConfigMgr::isGroupIdValid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862725] = -219021312;
  v6[536862726] = 62194;
  v6[536862727] = -219021312;
  v6[536862728] = 62194;
  v6[536862729] = -219021312;
  v6[536862730] = 62194;
  v6[536862731] = -219021312;
  v6[536862732] = 62194;
  v6[536862734] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  std::map<unsigned int,std::vector<unsigned int>>::map((std::map<unsigned int,std::vector<unsigned int>> *const)(v4 + 400));
  if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 80, txt_config_mgr);
  *(std::vector<unsigned int>::const_iterator *)(v4 + 80) = std::vector<unsigned int>::begin(group_vec);
  if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 112, txt_config_mgr);
  *(std::vector<unsigned int>::const_iterator *)(v4 + 112) = std::vector<unsigned int>::end(group_vec);
  while ( 1 )
  {
    v7 = (char *)(v4 + 112);
    if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 80),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 112)) )
      break;
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
    v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 80));
    v9 = (int *)v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v10 = *v9;
    v11 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
    if ( v11 != 0 && v11 <= 3 )
    {
      LOBYTE(v7) = v11 != 0;
      __asan_report_store4(v4 + 48, v7);
    }
    *(_DWORD *)(v4 + 48) = v10;
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 4;
    v12 = *(unsigned int *)(v4 + 48);
    SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, v12);
    v14 = *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000);
    if ( v14 != 0 && v14 <= 3 )
    {
      LOBYTE(v12) = v14 != 0;
      __asan_report_store4(v4 + 64, v12);
    }
    *(_DWORD *)(v4 + 64) = SceneIdByGroupId;
    scene_config_ptr = LuaConfigMgr::findSceneScriptConfig(lua_config_mgr, *(unsigned int *)(v4 + 64));
    if ( scene_config_ptr )
    {
      v20 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
              (std::map<unsigned int,std::vector<unsigned int>> *const)(v4 + 400),
              (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v4 + 64));
      std::vector<unsigned int>::push_back(v20, (const std::vector<unsigned int>::value_type *)(v4 + 48));
      if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 48);
      v21 = *(unsigned int *)(v4 + 48);
      group_info_config_ptr = SceneScriptConfig::findGroupInfoConfig(scene_config_ptr, v21);
      if ( group_info_config_ptr )
      {
        if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&group_info_config_ptr->is_dynamic_load, v21, &group_info_config_ptr->is_dynamic_load);
        if ( !group_info_config_ptr->is_dynamic_load )
        {
          *(_DWORD *)(((v4 + 272) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 272) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 303) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 32 + 79) & 7) >= *(_BYTE *)(((v4 + 303) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 272, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 272),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/BlossomExcelConfig.cpp",
            "isGroupIdValid",
            539);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 272),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  v25,
                  (const char (*)[35])"[BlossomExcelConfigMgr] group_id: ");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v27, (const char (*)[33])byte_1AA1C340);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 272));
          *(_DWORD *)(((v4 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v3 = 0;
          v19 = 0;
        }
        else
        {
          v19 = 1;
        }
      }
      else
      {
        *(_DWORD *)(((v4 + 208) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 208) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 239) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 48 + 31) & 7) >= *(_BYTE *)(((v4 + 239) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 208, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 208),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/BlossomExcelConfig.cpp",
          "isGroupIdValid",
          534);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 208),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                v22,
                (const char (*)[36])"[BlossomExcelConfigMgr]  group_id: ");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])byte_1AA1C2C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 208));
        *(_DWORD *)(((v4 + 208) >> 3) + 0x7FFF8000) = -117901064;
        v3 = 0;
        v19 = 0;
      }
    }
    else
    {
      *(_DWORD *)(((v4 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 144) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 175) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 112 + 31) & 7) >= *(_BYTE *)(((v4 + 175) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 144, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 144),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/BlossomExcelConfig.cpp",
        "isGroupIdValid",
        526);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 144),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              v15,
              (const char (*)[36])"[BlossomExcelConfigMgr]  scene_id: ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 64));
      v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v17, (const char (*)[15])byte_1AAC37C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 144));
      *(_DWORD *)(((v4 + 144) >> 3) + 0x7FFF8000) = -117901064;
      v3 = 0;
      v19 = 0;
    }
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v19 != 1 )
    {
      v28 = 0;
      goto LABEL_37;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 80));
  }
  v28 = 1;
LABEL_37:
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( v28 == 1 )
  {
    if ( !std::vector<unsigned int>::empty(group_vec)
      && std::map<unsigned int,std::vector<unsigned int>>::size((const std::map<unsigned int,std::vector<unsigned int>> *const)(v4 + 400)) > 1 )
    {
      *(_DWORD *)(((v4 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 336) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 367) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 111) & 7) >= *(_BYTE *)(((v4 + 367) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 336, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 336),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/BlossomExcelConfig.cpp",
        "isGroupIdValid",
        546);
      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 336),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v31 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v30, (const char (*)[53])byte_1AAC3860);
      common::milog::MiLogStream::operator<<<unsigned int,std::vector<unsigned int>>(
        v31,
        (const std::map<unsigned int,std::vector<unsigned int>> *)(v4 + 400));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 336));
      *(_DWORD *)(((v4 + 336) >> 3) + 0x7FFF8000) = -117901064;
      v3 = 0;
    }
    else
    {
      v3 = 1;
    }
  }
  std::map<unsigned int,std::vector<unsigned int>>::~map((std::map<unsigned int,std::vector<unsigned int>> *const)(v4 + 400));
  result = v3;
  if ( v37 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 554: range 0000000012E9C628-0000000012E9DE90
int32_t __cdecl BlossomExcelConfigMgr::checkRefreshCond(
        const BlossomExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::BlossomRefreshCond *cond)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *refreshed; // rax
  common::milog::MiLogStream *v10; // r14
  std::vector<unsigned int>::size_type v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::vector<unsigned int>::size_type v16; // rax
  std::vector<unsigned int>::const_reference v17; // rax
  _DWORD *v18; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::vector<unsigned int>::size_type v27; // rax
  int v28; // eax
  __int64 v29; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v30; // rax
  int *v31; // rdx
  int v32; // ecx
  char v33; // al
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::vector<unsigned int>::size_type v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  std::vector<unsigned int>::size_type v47; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v48; // rax
  uint32_t *v49; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v50; // rax
  uint32_t *v51; // rdx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // r14
  std::vector<unsigned int>::size_type v59; // rax
  int v60; // eax
  __int64 v61; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v62; // rax
  int *v63; // rdx
  int v64; // ecx
  char v65; // al
  __int64 v66; // rsi
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  uint32_t scene_id; // ecx
  char v71; // al
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  uint32_t idx; // [rsp+28h] [rbp-468h]
  uint32_t activity_id; // [rsp+2Ch] [rbp-464h]
  const data::SceneTagConfig *scene_tag_config_ptr; // [rsp+38h] [rbp-458h]
  char v85[1104]; // [rsp+40h] [rbp-450h] BYREF

  v4 = (unsigned __int64)v85;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1056LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "21 48 4 12 quest_id:600 64 4 16 scene_tag_id:642 80 4 12 scene_id:649 96 8 9 <unknown> 128 8 9 <"
                        "unknown> 160 8 9 <unknown> 192 8 9 <unknown> 224 8 9 <unknown> 256 8 9 <unknown> 288 32 9 <unkno"
                        "wn> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknow"
                        "n> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown"
                        "> 992 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = BlossomExcelConfigMgr::checkRefreshCond;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -218959360;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -218959118;
  v6[536862738] = -218959118;
  v6[536862740] = -218959118;
  v6[536862742] = -218959118;
  v6[536862744] = -218959118;
  v6[536862746] = -218959118;
  v6[536862748] = -218959118;
  v6[536862750] = -218959118;
  v6[536862752] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  switch ( cond->type )
  {
    case BLOSSOM_REFRESH_COND_NONE:
      goto LABEL_97;
    case BLOSSOM_REFRESH_COND_PLAYER_LEVEL_EQUAL_GREATER:
    case BLOSSOM_REFRESH_COND_PLAYER_LEVEL_LESS_THAN:
      if ( std::vector<unsigned int>::size(&cond->param) == 1 )
        goto LABEL_97;
      if ( *(char *)(((v4 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/BlossomExcelConfig.cpp",
        "checkRefreshCond",
        566);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v4 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             v7,
             (const char (*)[36])"[BlossomExcelConfigMgr] cond_type: ");
      refreshed = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
                    v8,
                    &cond->type);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              refreshed,
              (const char (*)[22])byte_1AAAAD40);
      v11 = std::vector<unsigned int>::size(&cond->param);
      if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
        v11 = __asan_report_store8(v4 + 96, byte_1AAAAD40);
      *(_QWORD *)(v4 + 96) = v11;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, (const unsigned __int64 *)(v4 + 96));
      *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 288));
      v3 = -1;
      goto LABEL_98;
    case BLOSSOM_REFRESH_COND_OPEN_STATE:
      if ( std::vector<unsigned int>::size(&cond->param) != 1 )
      {
        if ( *(char *)(((v4 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/BlossomExcelConfig.cpp",
          "checkRefreshCond",
          576);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                v12,
                (const char (*)[36])"[BlossomExcelConfigMgr] cond_type: ");
        v14 = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
                v13,
                &cond->type);
        v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v14, (const char (*)[22])byte_1AAAAD40);
        v16 = std::vector<unsigned int>::size(&cond->param);
        if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
          v16 = __asan_report_store8(v4 + 128, byte_1AAAAD40);
        *(_QWORD *)(v4 + 128) = v16;
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v15,
          (const unsigned __int64 *)(v4 + 128));
        *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
        v3 = -1;
        goto LABEL_98;
      }
      v17 = std::vector<unsigned int>::operator[](&cond->param, 0LL);
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      if ( !*v18
        || data::OpenStateExcelConfigMgrBase::findOpenStateConfig(
             &txt_config_mgr->open_state_config_mgr,
             (unsigned int)*v18) )
      {
        goto LABEL_97;
      }
      if ( *(char *)(((v4 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/BlossomExcelConfig.cpp",
        "checkRefreshCond",
        585);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v21 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              v20,
              (const char (*)[36])"[BlossomExcelConfigMgr] cond_type: ");
      v22 = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
              v21,
              &cond->type);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v22, (const char (*)[14])byte_1AAC3AA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 416));
      v3 = -1;
      goto LABEL_98;
    case BLOSSOM_REFRESH_COND_QUEST_FINISH:
      if ( std::vector<unsigned int>::size(&cond->param) == 1 )
      {
        v29 = 0LL;
        v30 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &cond->param,
                                                                                                    0LL);
        v31 = (int *)v30;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v30);
        }
        v32 = *v31;
        v33 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
        if ( v33 != 0 && v33 <= 3 )
        {
          LOBYTE(v29) = v33 != 0;
          __asan_report_store4(v4 + 48, v29);
        }
        *(_DWORD *)(v4 + 48) = v32;
        if ( data::QuestExcelConfigMgrBase::findQuestExcelConfig(
               &txt_config_mgr->quest_config_mgr,
               *(unsigned int *)(v4 + 48)) )
        {
          v28 = 1;
        }
        else
        {
          if ( *(char *)(((v4 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/BlossomExcelConfig.cpp",
            "checkRefreshCond",
            603);
          v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v35 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  v34,
                  (const char (*)[36])"[BlossomExcelConfigMgr] cond_type: ");
          v36 = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
                  v35,
                  &cond->type);
          v37 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v36, (const char (*)[27])byte_1AAAAD80);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 544));
          v3 = -1;
          v28 = 0;
        }
      }
      else
      {
        if ( *(char *)(((v4 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/BlossomExcelConfig.cpp",
          "checkRefreshCond",
          595);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v24 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                v23,
                (const char (*)[36])"[BlossomExcelConfigMgr] cond_type: ");
        v25 = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
                v24,
                &cond->type);
        v26 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v25, (const char (*)[22])byte_1AAAAD40);
        v27 = std::vector<unsigned int>::size(&cond->param);
        if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
          v27 = __asan_report_store8(v4 + 160, byte_1AAAAD40);
        *(_QWORD *)(v4 + 160) = v27;
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v26,
          (const unsigned __int64 *)(v4 + 160));
        *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
        v3 = -1;
        v28 = 0;
      }
      if ( v28 )
        goto LABEL_97;
      goto LABEL_98;
    case BLOSSOM_REFRESH_COND_ACTIVITY_COND:
      if ( std::vector<unsigned int>::empty(&cond->param) )
      {
        if ( *(char *)(((v4 + 608) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 639) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 639) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 608, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 608),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/BlossomExcelConfig.cpp",
          "checkRefreshCond",
          613);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v39 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                v38,
                (const char (*)[36])"[BlossomExcelConfigMgr] cond_type: ");
        v40 = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
                v39,
                &cond->type);
        v41 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v40, (const char (*)[22])byte_1AAAAD40);
        v42 = std::vector<unsigned int>::size(&cond->param);
        if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
          v42 = __asan_report_store8(v4 + 192, byte_1AAAAD40);
        *(_QWORD *)(v4 + 192) = v42;
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v41,
          (const unsigned __int64 *)(v4 + 192));
        *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 608));
        v3 = -1;
        goto LABEL_98;
      }
      idx = 0;
      break;
    case BLOSSOM_REFRESH_COND_SCENE_TAG_ADDED:
      if ( std::vector<unsigned int>::empty(&cond->param) )
      {
        if ( *(char *)(((v4 + 800) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 831) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 831) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 800, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 800),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/BlossomExcelConfig.cpp",
          "checkRefreshCond",
          639);
        v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 800),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v56 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                v55,
                (const char (*)[36])"[BlossomExcelConfigMgr] cond_type: ");
        v57 = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
                v56,
                &cond->type);
        v58 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v57, (const char (*)[22])byte_1AAAAD40);
        v59 = std::vector<unsigned int>::size(&cond->param);
        if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
          v59 = __asan_report_store8(v4 + 256, byte_1AAAAD40);
        *(_QWORD *)(v4 + 256) = v59;
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v58,
          (const unsigned __int64 *)(v4 + 256));
        *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 800));
        v3 = -1;
        v60 = 0;
      }
      else
      {
        v61 = 0LL;
        v62 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &cond->param,
                                                                                                    0LL);
        v63 = (int *)v62;
        if ( *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v62 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v62);
        }
        v64 = *v63;
        v65 = *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000);
        if ( v65 != 0 && v65 <= 3 )
        {
          LOBYTE(v61) = v65 != 0;
          __asan_report_store4(v4 + 64, v61);
        }
        *(_DWORD *)(v4 + 64) = v64;
        v66 = *(unsigned int *)(v4 + 64);
        scene_tag_config_ptr = data::SceneExcelConfigMgrBase::findSceneTagConfig(&txt_config_mgr->scene_config_mgr, v66);
        if ( scene_tag_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&scene_tag_config_ptr->scene_id);
          }
          scene_id = scene_tag_config_ptr->scene_id;
          v71 = *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000);
          if ( v71 != 0 && v71 <= 3 )
          {
            LOBYTE(v66) = v71 != 0;
            __asan_report_store4(v4 + 80, v66);
          }
          *(_DWORD *)(v4 + 80) = scene_id;
          if ( !SceneExcelConfigMgr::isPlayerWorldScene(&txt_config_mgr->scene_config_mgr, *(_DWORD *)(v4 + 80)) )
          {
            if ( *(char *)(((v4 + 928) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 959) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 959) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 928, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 928),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/BlossomExcelConfig.cpp",
              "checkRefreshCond",
              652);
            v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v4 + 928),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v73 = common::milog::MiLogStream::operator<<<char [91],(char *[91])0>(
                    v72,
                    (const char (*)[91])byte_1AAC3B60);
            v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v73,
                    (const unsigned int *)(v4 + 64));
            v75 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v74,
                    (const char (*)[13])" ,scene_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v75, (const unsigned int *)(v4 + 80));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 928));
            v3 = -1;
            v60 = 0;
          }
          else
          {
            v60 = 1;
          }
        }
        else
        {
          if ( *(char *)(((v4 + 864) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 895) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 895) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 864, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 864),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/BlossomExcelConfig.cpp",
            "checkRefreshCond",
            646);
          v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 864),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v68 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  v67,
                  (const char (*)[36])"[BlossomExcelConfigMgr] cond_type: ");
          v69 = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
                  v68,
                  &cond->type);
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v69, (const char (*)[25])byte_1AAC3B20);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 864));
          v3 = -1;
          v60 = 0;
        }
      }
      if ( v60 )
        goto LABEL_97;
      goto LABEL_98;
    default:
      if ( *(char *)(((v4 + 992) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 1023) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 1023) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 992, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 992),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/BlossomExcelConfig.cpp",
        "checkRefreshCond",
        659);
      v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 992),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v77 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              v76,
              (const char (*)[36])"[BlossomExcelConfigMgr] cond_type: ");
      v78 = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
              v77,
              &cond->type);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v78, (const char (*)[14])byte_1AAAAE20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 992));
      v3 = -1;
      goto LABEL_98;
  }
  while ( 1 )
  {
    if ( idx >= std::vector<unsigned int>::size(&cond->param) )
    {
LABEL_97:
      v3 = 0;
      goto LABEL_98;
    }
    if ( idx + 1 >= std::vector<unsigned int>::size(&cond->param) )
    {
      if ( *(char *)(((v4 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/BlossomExcelConfig.cpp",
        "checkRefreshCond",
        621);
      v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 672),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v44 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              v43,
              (const char (*)[36])"[BlossomExcelConfigMgr] cond_type: ");
      v45 = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
              v44,
              &cond->type);
      v46 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v45, (const char (*)[22])byte_1AAAAD40);
      v47 = std::vector<unsigned int>::size(&cond->param);
      if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
        v47 = __asan_report_store8(v4 + 224, byte_1AAAAD40);
      *(_QWORD *)(v4 + 224) = v47;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v46,
        (const unsigned __int64 *)(v4 + 224));
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 672));
      v3 = -1;
      goto LABEL_98;
    }
    v48 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                &cond->param,
                                                                                                idx);
    v49 = v48;
    if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v48);
    }
    activity_id = *v49;
    v50 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                &cond->param,
                                                                                                idx + 1);
    v51 = v50;
    if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v50);
    }
    if ( !NewActivityExcelConfigMgr::isActivityContainsCondId(
            &txt_config_mgr->new_activity_config_mgr,
            activity_id,
            *v51) )
      break;
    idx += 2;
  }
  if ( *(char *)(((v4 + 736) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 767) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 767) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 736, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v4 + 736),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/BlossomExcelConfig.cpp",
    "checkRefreshCond",
    628);
  v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v4 + 736),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v53 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          v52,
          (const char (*)[36])"[BlossomExcelConfigMgr] cond_type: ");
  v54 = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
          v53,
          &cond->type);
  common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v54, (const char (*)[32])byte_1AAC3AE0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 736));
  v3 = -1;
LABEL_98:
  if ( v85 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8050) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8058) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8060) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8068) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8070) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8078) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8080) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1056LL, v85);
  }
  return v3;
};

// Line 665: range 0000000012EAACED-0000000012EAAD01
void __cdecl GLOBAL__sub_I_merge_merge_AbilityOverrideExcelConfig_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 665: range 0000000012EAA10F-0000000012EAACEC
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::ios_base::Init *v5; // rsi
  const boost::system::error_category *system_category; // rdx
  const boost::system::error_category *netdb_category; // rdx
  const boost::system::error_category *addrinfo_category; // rdx
  const boost::system::error_category *misc_category; // rdx
  char v10; // cl
  char v11; // cl
  char v12; // cl
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  _BYTE *v16; // rcx
  char v17; // dl
  const std::set<unsigned int> *v18; // rsi
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  char v21; // dl
  __int64 v22; // rdx
  const char *v23; // rcx
  std::initializer_list<unsigned int> __l; // [rsp+0h] [rbp-1B0h]
  std::initializer_list<unsigned int> v25; // [rsp+10h] [rbp-1A0h]
  std::initializer_list<unsigned int> v26; // [rsp+20h] [rbp-190h]
  char v27[368]; // [rsp+40h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 12 9 <unknown> 192 12 9 <unknown> 224 12 9 <un"
                        "known> 256 28 9 <unknown>";
  *(_QWORD *)(v2 + 16) = __static_initialization_and_destruction_0;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -219020288;
  v4[536862726] = -219020288;
  v4[536862727] = -219020288;
  v4[536862728] = 0x4000000;
  v4[536862729] = -202116109;
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_AbilityOverrideExcelConfig.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      v5 = &std::__ioinit;
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)&std::__ioinit);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)&std::__ioinit);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)&std::__ioinit);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        __asan_report_store8(&boost::asio::error::system_category, &std::__ioinit);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        __asan_report_store8(&boost::asio::error::netdb_category, &std::__ioinit);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        __asan_report_store8(&boost::asio::error::addrinfo_category, &std::__ioinit);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        __asan_report_store8(&boost::asio::error::misc_category, &std::__ioinit);
      boost::asio::error::misc_category = misc_category;
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, &std::__ioinit);
      *(_DWORD *)(v2 + 256) = 204;
      v10 = *(_BYTE *)(((v2 + 260) >> 3) + 0x7FFF8000);
      LOBYTE(v5) = v10 != 0;
      if ( v10 != 0 && (char)(((v2 + 4) & 7) + 3) >= v10 )
        __asan_report_store4(v2 + 260, v5);
      *(_DWORD *)(v2 + 260) = 206;
      if ( *(_BYTE *)(((v2 + 264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 264) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 264, v5);
      *(_DWORD *)(v2 + 264) = 304;
      v11 = *(_BYTE *)(((v2 + 268) >> 3) + 0x7FFF8000);
      LOBYTE(v5) = v11 != 0;
      if ( v11 != 0 && (char)(((v2 + 12) & 7) + 3) >= v11 )
        __asan_report_store4(v2 + 268, v5);
      *(_DWORD *)(v2 + 268) = 313;
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, v5);
      *(_DWORD *)(v2 + 272) = 934;
      v12 = *(_BYTE *)(((v2 + 276) >> 3) + 0x7FFF8000);
      LOBYTE(v5) = v12 != 0;
      if ( v12 != 0 && (char)(((v2 + 20) & 7) + 3) >= v12 )
        __asan_report_store4(v2 + 276, v5);
      *(_DWORD *)(v2 + 276) = 1004;
      if ( *(_BYTE *)(((v2 + 280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 280) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 280, v5);
      *(_DWORD *)(v2 + 280) = 1006;
      std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v2 + 64));
      std::unordered_set<unsigned int>::unordered_set(
        (std::unordered_set<unsigned int> *const)&AchievementExcelConfigMgr::stage_achievement_trigger_type_allow_set,
        (std::initializer_list<unsigned int>)__PAIR128__(7LL, v2 + 256),
        0LL,
        (const std::unordered_set<unsigned int>::hasher *)(v2 + 32),
        (const std::unordered_set<unsigned int>::key_equal *)(v2 + 48),
        (const std::unordered_set<unsigned int>::allocator_type *)(v2 + 64));
      std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_set<unsigned int>::~unordered_set,
        (void *)&AchievementExcelConfigMgr::stage_achievement_trigger_type_allow_set,
        &_dso_handle);
      *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1024;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, &AchievementExcelConfigMgr::stage_achievement_trigger_type_allow_set);
      *(_DWORD *)(v2 + 160) = 1;
      v13 = (((_BYTE)v2 - 92) & 7u) + 3;
      if ( *(_BYTE *)(((v2 + 164) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 92) & 7) + 3) >= *(_BYTE *)(((v2 + 164) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 164, v13);
      }
      *(_DWORD *)(v2 + 164) = 2;
      if ( *(_BYTE *)(((v2 + 168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 168, v13);
      *(_DWORD *)(v2 + 168) = 3;
      __l._M_array = (std::initializer_list<unsigned int>::iterator)(v2 + 160);
      __l._M_len = 3LL;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v2 + 96));
      std::set<unsigned int>::set(
        (std::set<unsigned int> *const)&ActivityBrickBreakerExcelConfigMgr::STAGE_ID_SET,
        __l,
        (const std::less<unsigned int> *)(v2 + 80),
        (const std::set<unsigned int>::allocator_type *)(v2 + 96));
      std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v2 + 96));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::set<unsigned int>::~set,
        (void *)&ActivityBrickBreakerExcelConfigMgr::STAGE_ID_SET,
        &_dso_handle);
      *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1024;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, &ActivityBrickBreakerExcelConfigMgr::STAGE_ID_SET);
      *(_DWORD *)(v2 + 192) = 1;
      v14 = (((_BYTE)v2 - 60) & 7u) + 3;
      if ( *(_BYTE *)(((v2 + 196) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 60) & 7) + 3) >= *(_BYTE *)(((v2 + 196) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 196, v14);
      }
      *(_DWORD *)(v2 + 196) = 2;
      if ( *(_BYTE *)(((v2 + 200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 200) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 200, v14);
      *(_DWORD *)(v2 + 200) = 3;
      v25._M_array = (std::initializer_list<unsigned int>::iterator)(v2 + 192);
      v25._M_len = 3LL;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v2 + 112));
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)&ActivityIrodoriExcelConfigMgr::master_difficulty_vec,
        v25,
        (const std::vector<unsigned int>::allocator_type *)(v2 + 112));
      std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v2 + 112));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
        (void *)&ActivityIrodoriExcelConfigMgr::master_difficulty_vec,
        &_dso_handle);
      *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1024;
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, &ActivityIrodoriExcelConfigMgr::master_difficulty_vec);
      *(_DWORD *)(v2 + 224) = 1;
      v15 = (((_BYTE)v2 - 32 + 4) & 7u) + 3;
      if ( *(_BYTE *)(((v2 + 228) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 32 + 4) & 7) + 3) >= *(_BYTE *)(((v2 + 228) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 228, v15);
      }
      *(_DWORD *)(v2 + 228) = 2;
      if ( *(_BYTE *)(((v2 + 232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 232) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 232, v15);
      *(_DWORD *)(v2 + 232) = 3;
      v26._M_array = (std::initializer_list<unsigned int>::iterator)(v2 + 224);
      v26._M_len = 3LL;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
      std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v2 + 144));
      std::set<unsigned int>::set(
        (std::set<unsigned int> *const)&ActivityVintageMarketExcelConfigMgr::STORE_ID_SET,
        v26,
        (const std::less<unsigned int> *)(v2 + 128),
        (const std::set<unsigned int>::allocator_type *)(v2 + 144));
      std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v2 + 144));
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -1800;
      v18 = &ActivityVintageMarketExcelConfigMgr::STORE_ID_SET;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::set<unsigned int>::~set,
        (void *)&ActivityVintageMarketExcelConfigMgr::STORE_ID_SET,
        &_dso_handle);
      v16 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      v17 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                     + 0x7FFF8000);
      LOBYTE(v18) = v17 != 0;
      v19 = (v17 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v17);
      if ( (_BYTE)v19 )
        __asan_report_load1(
          &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
          v18,
          v19);
      if ( !*v16 )
      {
        v20 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v21 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v18) = v21 != 0;
        v22 = (v21 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v21);
        if ( (_BYTE)v22 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v18,
            v22);
        *v20 = 1;
        v23 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v18);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v23;
      }
    }
    __asan_after_dynamic_init();
  }
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
};
