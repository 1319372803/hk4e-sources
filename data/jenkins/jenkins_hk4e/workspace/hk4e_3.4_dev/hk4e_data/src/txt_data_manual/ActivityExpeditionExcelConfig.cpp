// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityExpeditionExcelConfig.cpp

// Line 18: range 0000000012C1AA92-0000000012C1AF07
int32_t __cdecl ActivityExpeditionExcelConfigMgr::checkConfig(
        ActivityExpeditionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityExpeditionExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( ActivityExpeditionExcelConfigMgr::checkExpedtionPathConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
      "checkConfig",
      21);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      v5,
      (const char (*)[45])"[EXPEDITION] checkExpedtionPathConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityExpeditionExcelConfigMgr::checkExpeditionDifficultyConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
      "checkConfig",
      27);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      v7,
      (const char (*)[52])"[EXPEDITION] checkExpeditionDifficultyConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityExpeditionExcelConfigMgr::checkExpeditionChallengeConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
      "checkConfig",
      33);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      v8,
      (const char (*)[51])"[EXPEDITION] checkExpeditionChallengeConfig failed");
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

// Line 41: range 0000000012C1AF08-0000000012C1B4B2
int32_t __cdecl ActivityExpeditionExcelConfigMgr::rewriteConfig(
        ActivityExpeditionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  char v10[320]; // [rsp+10h] [rbp-140h] BYREF

  v2 = (common::milog::MiLogStream *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"4 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityExpeditionExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( ActivityExpeditionExcelConfigMgr::rewriteExpeditionPathConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
      "rewriteConfig",
      44);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      v5,
      (const char (*)[48])"[EXPEDITION] rewriteExpeditionPathConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityExpeditionExcelConfigMgr::rewriteExpeditionBonusConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
      "rewriteConfig",
      50);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      v7,
      (const char (*)[49])"[EXPEDITION] rewriteExpeditionBonusConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityExpeditionExcelConfigMgr::rewriteExpeditionMarkConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
      "rewriteConfig",
      56);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      v8,
      (const char (*)[48])"[EXPEDITION] rewriteExpeditionMarkConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityExpeditionExcelConfigMgr::rewriteExpeditionChallengeConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
      "rewriteConfig",
      62);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      v9,
      (const char (*)[53])"[EXPEDITION] rewriteExpeditionChallengeConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v10 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 70: range 0000000012C1B4B4-0000000012C1C8F7
int32_t __cdecl ActivityExpeditionExcelConfigMgr::checkExpedtionPathConfig(
        ActivityExpeditionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  __int64 bonus_reward_id; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  data::ExpeditionDifficultyExcelConfigMap *p_expedition_difficulty_excel_config_map; // rdx
  data::ExpeditionDifficultyExcelConfigMap *v19; // rdx
  const std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::key_type *p_difficulty_id; // rcx
  __int64 v21; // rsi
  char *v22; // rsi
  bool v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::vector<unsigned int>::size_type v29; // rax
  std::vector<unsigned int>::size_type v30; // rcx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r15
  std::vector<unsigned int>::size_type v37; // rcx
  char *v38; // rsi
  unsigned int *v39; // rax
  int *v40; // rdx
  int v41; // ecx
  char v42; // al
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  int v48; // edx
  unsigned __int64 v49; // rax
  ActivityExpeditionExcelConfigMgr *v50; // rsi
  uint32_t ActivityExpeditionContentDuration; // edx
  char v52; // al
  common::milog::MiLogStream *v53; // r14
  std::vector<unsigned int>::size_type v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  std::vector<unsigned int>::size_type v57; // r14
  common::milog::MiLogStream *v58; // rax
  int32_t retcode; // [rsp+2Ch] [rbp-3C4h]
  const std::vector<unsigned int> *reward_level_vec; // [rsp+30h] [rbp-3C0h]
  data::ExpeditionPathExcelConfigMap *__for_range; // [rsp+38h] [rbp-3B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false,false>::reference v64; // [rsp+40h] [rbp-3B0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ExpeditionPathExcelConfig> >::type *id; // [rsp+48h] [rbp-3A8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionPathExcelConfig> >::type *excel_config; // [rsp+50h] [rbp-3A0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-398h]
  char v68[912]; // [rsp+60h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "19 32 4 13 reward_id:102 48 4 20 content_duration:115 64 8 14 __for_begin:73 96 8 12 __for_end:7"
                        "3 128 8 9 <unknown> 160 8 9 <unknown> 192 8 19 level_reward_num:94 224 8 9 <unknown> 256 8 15 __"
                        "for_begin:102 288 8 13 __for_end:102 320 8 9 <unknown> 352 24 15 path_id_vec:114 416 32 9 <unkno"
                        "wn> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknow"
                        "n> 800 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityExpeditionExcelConfigMgr::checkExpedtionPathConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -234881024;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -202116109;
  reward_level_vec = ConstValueExcelConfigMgr::getActivityExpeditionRewardLevelVec(&txt_config_mgr->const_value_config_mgr);
  retcode = 0;
  __for_range = &this->expedition_path_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExpeditionPathExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ExpeditionPathExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExpeditionPathExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ExpeditionPathExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false> *)(v3 + 96)) )
  {
    v64 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::ExpeditionPathExcelConfig>(v64);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionPathExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExpeditionPathExcelConfig>(v64);
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->basic_reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->basic_reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->basic_reward_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            excel_config->basic_reward_id,
                            ITEM_LIMIT_ACTIVITY_EXPEDITION_REWARD) != 1 )
    {
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
        "checkExpedtionPathConfig",
        77);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 416),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v6, (const char (*)[22])byte_1AA559A0);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v8, (const char (*)[27])byte_1AA559E0);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->basic_reward_id);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])byte_1AA281C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->bonus_reward_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)excel_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->bonus_reward_id >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&excel_config->bonus_reward_id);
      }
      bonus_reward_id = excel_config->bonus_reward_id;
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              bonus_reward_id,
                              ITEM_LIMIT_ACTIVITY_EXPEDITION_REWARD) != 1 )
      {
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
          "checkExpedtionPathConfig",
          83);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v13, (const char (*)[22])byte_1AA559A0);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v15, (const char (*)[30])byte_1AA55A20);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                &excel_config->bonus_reward_id);
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])byte_1AA281C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
      else
      {
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        p_expedition_difficulty_excel_config_map = &this->expedition_difficulty_excel_config_map;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, bonus_reward_id);
        *(std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::end(p_expedition_difficulty_excel_config_map);
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
        v19 = &this->expedition_difficulty_excel_config_map;
        p_difficulty_id = &excel_config->difficulty_id;
        v21 = *(unsigned __int8 *)(((v3 + 128) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v21 )
          __asan_report_store8(v3 + 128, v21);
        *(std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::find(v19, p_difficulty_id);
        v22 = (char *)(v3 + 160);
        v23 = std::__detail::operator==<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false> *)(v3 + 128),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false> *)(v3 + 160));
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v23 )
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
            "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
            "checkExpedtionPathConfig",
            89);
          v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v25 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v24, (const char (*)[22])byte_1AA559A0);
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
          v27 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v26, (const char (*)[21])byte_1AA55A60);
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  &excel_config->difficulty_id);
          common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])byte_1AA281C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v11 = 0;
        }
        else
        {
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
          v29 = std::vector<unsigned int>::size(&excel_config->level_reward_list);
          if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
            v29 = __asan_report_store8(v3 + 192, v22);
          *(_QWORD *)(v3 + 192) = v29;
          v30 = std::vector<unsigned int>::size(reward_level_vec) + 1;
          if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_load8(v3 + 192);
          if ( v30 != *(_QWORD *)(v3 + 192) )
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
              "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
              "checkExpedtionPathConfig",
              97);
            v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 608),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v32 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v31,
                    (const char (*)[22])byte_1AA559A0);
            v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, id);
            v34 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    v33,
                    (const char (*)[40])byte_1AA55AA0);
            v35 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v34,
                    (const unsigned __int64 *)(v3 + 192));
            v36 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    v35,
                    (const char (*)[25])byte_1AA55B00);
            *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
            v37 = std::vector<unsigned int>::size(reward_level_vec) + 1;
            if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 224, byte_1AA55B00);
            *(_QWORD *)(v3 + 224) = v37;
            v22 = (char *)(v3 + 224);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v36,
              (const unsigned __int64 *)(v3 + 224));
            *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
            retcode = -1;
          }
          __for_range_0 = &excel_config->level_reward_list;
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 256, v22);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::begin(__for_range_0);
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 288, v22);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::end(__for_range_0);
          while ( 1 )
          {
            v38 = (char *)(v3 + 288);
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288)) )
              break;
            *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
            v39 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 256));
            v40 = (int *)v39;
            if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v39);
            }
            v41 = *v40;
            v42 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
            if ( v42 != 0 && v42 <= 3 )
            {
              LOBYTE(v38) = v42 != 0;
              __asan_report_store4(v3 + 32, v38);
            }
            *(_DWORD *)(v3 + 32) = v41;
            if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                                    txt_config_mgr,
                                    *(_DWORD *)(v3 + 32),
                                    ITEM_LIMIT_ACTIVITY_EXPEDITION_REWARD) != 1 )
            {
              *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 672, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 672),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
                "checkExpedtionPathConfig",
                106);
              v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 672),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v44 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      v43,
                      (const char (*)[22])byte_1AA559A0);
              v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, id);
              v46 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      v45,
                      (const char (*)[27])byte_1AA55B40);
              v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v46,
                      (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v47, (const char (*)[11])byte_1AA281C0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
              *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
              retcode = -1;
            }
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 256));
          }
          *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
          v11 = 1;
        }
      }
    }
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v11 != 1 )
    {
      v48 = 0;
      goto LABEL_60;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false,false> *const)(v3 + 64));
  }
  v48 = 1;
LABEL_60:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v48 == 1 )
  {
    v49 = ((v3 + 352) >> 3) + 2147450880;
    *(_WORD *)v49 = 0;
    *(_BYTE *)(v49 + 2) = 0;
    if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 375) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 119) & 7) >= *(_BYTE *)(((v3 + 375) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 352, 24LL);
    }
    v50 = this;
    ActivityExpeditionExcelConfigMgr::findPathVecByDifficultyId((std::vector<unsigned int> *)(v3 + 352), this, 1u);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    ActivityExpeditionContentDuration = ConstValueExcelConfigMgr::getActivityExpeditionContentDuration(&txt_config_mgr->const_value_config_mgr);
    v52 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v52 != 0 && v52 <= 3 )
    {
      LOBYTE(v50) = v52 != 0;
      __asan_report_store4(v3 + 48, v50);
    }
    *(_DWORD *)(v3 + 48) = ActivityExpeditionContentDuration;
    *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 736, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 736),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
      "checkExpedtionPathConfig",
      116);
    v53 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            (common::milog::MiLogStream *const)(v3 + 736),
            (const char (*)[32])byte_1AA55B80);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    v54 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 352));
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      v54 = __asan_report_store8(v3 + 320, byte_1AA55B80);
    *(_QWORD *)(v3 + 320) = v54;
    v55 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v53,
            (const unsigned __int64 *)(v3 + 320));
    v56 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v55, (const char (*)[29])byte_1AA55BC0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, (const unsigned int *)(v3 + 48));
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
    *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
    v57 = *(unsigned int *)(v3 + 48);
    if ( v57 <= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 352)) )
    {
      v2 = retcode;
    }
    else
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
        "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
        "checkExpedtionPathConfig",
        119);
      v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 800),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(v58, (const char (*)[69])byte_1AA55C00);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
      *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 352));
  }
  if ( v68 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = -168430091;
  }
  return v2;
};

// Line 127: range 0000000012C1C8F8-0000000012C1CC8A
int32_t __cdecl ActivityExpeditionExcelConfigMgr::checkExpeditionDifficultyConfig(
        ActivityExpeditionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t min_refresh_count; // ecx
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  int32_t result; // eax
  data::ExpeditionDifficultyExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false,false>::reference v11; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v13[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:128 64 8 13 __for_end:128 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityExpeditionExcelConfigMgr::checkExpeditionDifficultyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->expedition_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_20;
    }
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ExpeditionDifficultyExcelConfig>(v11);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExpeditionDifficultyExcelConfig>(v11);
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->min_refresh_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->min_refresh_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->min_refresh_count);
    }
    min_refresh_count = excel_config->min_refresh_count;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->max_refresh_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->max_refresh_count >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->max_refresh_count);
    }
    if ( min_refresh_count != excel_config->max_refresh_count )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
    "checkExpeditionDifficultyConfig",
    133);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(v7, (const char (*)[83])byte_1AA55D20);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v8 = 0;
LABEL_20:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v13 == (char *)v3 )
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

// Line 142: range 0000000012C1CC8C-0000000012C1D356
int32_t __cdecl ActivityExpeditionExcelConfigMgr::checkExpeditionChallengeConfig(
        ActivityExpeditionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-194h]
  data::ExpeditionChallengeExcelConfigMap *__for_range; // [rsp+20h] [rbp-190h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false>::reference v19; // [rsp+28h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig> >::type *id; // [rsp+30h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-178h]
  char v22[368]; // [rsp+40h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 8 15 __for_begin:145 80 8 13 __for_end:145 112 32 9 <unknown> 176 32 9 <unknown> 240 48 16 "
                        "group_id_set:144";
  *(_QWORD *)(v2 + 16) = ActivityExpeditionExcelConfigMgr::checkExpeditionChallengeConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862729] = -202116109;
  ret = 0;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 240));
  __for_range = &this->expedition_challenge_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExpeditionChallengeExcelConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::ExpeditionChallengeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExpeditionChallengeExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::ExpeditionChallengeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false> *)(v2 + 80)) )
  {
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false> *const)(v2 + 48));
    id = std::get<0ul,unsigned int const,data::ExpeditionChallengeExcelConfig>(v19);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExpeditionChallengeExcelConfig>(v19);
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->reward_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            excel_config->reward_id,
                            ITEM_LIMIT_ACTIVITY_EXPEDITION_REWARD) != 1 )
    {
      *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 112, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 112),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
        "checkExpeditionChallengeConfig",
        149);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 112),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v5, (const char (*)[22])byte_1AA55E60);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, id);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v7, (const char (*)[21])byte_1AA2D1A0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &excel_config->reward_id);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])byte_1AA281C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 112));
      *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v10 = std::set<unsigned int>::emplace<unsigned int const&>(
            (std::set<unsigned int> *const)(v2 + 240),
            &excel_config->group_id,
            &excel_config->group_id);
    if ( !v10.second )
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
        "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
        "checkExpeditionChallengeConfig",
        155);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 176),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v11, (const char (*)[22])byte_1AA55E60);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
      v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v13, (const char (*)[21])byte_1AA55EA0);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &excel_config->group_id);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])byte_1AA1BDC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false> *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 240));
  result = ret;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
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

// Line 176: range 0000000012C1D358-0000000012C1D82B
int32_t __cdecl ActivityExpeditionExcelConfigMgr::rewriteExpeditionPathConfig(
        ActivityExpeditionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  std::vector<unsigned int> *v9; // rdx
  int32_t result; // eax
  data::ExpeditionPathExcelConfigMap *__for_range; // [rsp+28h] [rbp-158h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false,false>::reference v12; // [rsp+30h] [rbp-150h]
  std::tuple_element<0,std::pair<unsigned int const,data::ExpeditionPathExcelConfig> >::type *id; // [rsp+38h] [rbp-148h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionPathExcelConfig> >::type *excel_config; // [rsp+40h] [rbp-140h]
  std::map<unsigned int,std::vector<unsigned int>>::mapped_type *super_elem_vec; // [rsp+48h] [rbp-138h]
  char v16[304]; // [rsp+50h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 9 <unknown> 64 8 15 __for_begin:177 96 8 13 __for_end:177 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityExpeditionExcelConfigMgr::rewriteExpeditionPathConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  __for_range = &this->expedition_path_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExpeditionPathExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ExpeditionPathExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExpeditionPathExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ExpeditionPathExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false> *)(v3 + 96)) )
    {
      v8 = 1;
      goto LABEL_16;
    }
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::ExpeditionPathExcelConfig>(v12);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionPathExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExpeditionPathExcelConfig>(v12);
    super_elem_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](&this->path_2_super_elem_map_, id);
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 128),
      ";",
      (const std::allocator<char> *)(v3 + 48));
    v6 = common::tools::StringUtils::splitToList<unsigned int>(
           &excel_config->super_element,
           (const std::string *)(v3 + 128),
           super_elem_vec,
           1) != 0;
    std::string::~string((void *)(v3 + 128));
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 48);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v6 )
      break;
    v9 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
           &this->difficulty_2_path_map_,
           &excel_config->difficulty_id);
    std::vector<unsigned int>::push_back(v9, id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
    "rewriteExpeditionPathConfig",
    182);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 192),
         (const char (*)[16])"[CONFIG_ERROR] ");
  common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v7, (const char (*)[38])byte_1AA55FA0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  v2 = -1;
  v8 = 0;
LABEL_16:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 193: range 0000000012C1D82C-0000000012C1DAB3
int32_t __cdecl ActivityExpeditionExcelConfigMgr::rewriteExpeditionBonusConfig(
        ActivityExpeditionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionBonusExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t *p_avatar_level; // rsi
  std::map<unsigned int,float>::mapped_type *v6; // rax
  float *v7; // rdx
  char v8; // cl
  int32_t result; // eax
  float probability; // [rsp+Ch] [rbp-B4h]
  data::ExpeditionBonusExcelConfigMap *__for_range; // [rsp+20h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionBonusExcelConfig>,false,false>::reference v12; // [rsp+28h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionBonusExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-88h]
  char v14[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionBonusExcelConfig>,false,false> *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionBonusExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionBonusExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionBonusExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:194 64 8 13 __for_end:194";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionBonusExcelConfig>,false>::__node_type *)ActivityExpeditionExcelConfigMgr::rewriteExpeditionBonusConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->expedition_bonus_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ExpeditionBonusExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ExpeditionBonusExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ExpeditionBonusExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionBonusExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::ExpeditionBonusExcelConfig>(v12);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionBonusExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExpeditionBonusExcelConfig>(v12);
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->probability >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->probability >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->probability);
    }
    probability = excel_config->probability;
    p_avatar_level = &excel_config->avatar_level;
    v6 = std::map<unsigned int,float>::operator[](&this->avatar_level_2_probability_map_, &excel_config->avatar_level);
    v7 = v6;
    v8 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)(((unsigned __int8)v6 & 7) + 3) >= v8 )
    {
      LOBYTE(p_avatar_level) = v8 != 0;
      __asan_report_store4(v6, p_avatar_level);
    }
    *v7 = probability;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionBonusExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionBonusExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 203: range 0000000012C1DAB4-0000000012C1DCA4
int32_t __cdecl ActivityExpeditionExcelConfigMgr::rewriteExpeditionMarkConfig(
        ActivityExpeditionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionActivityMarkerExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::ExpeditionActivityMarkerExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionActivityMarkerExcelConfig>,false,false>::reference v7; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::ExpeditionActivityMarkerExcelConfig> >::type *id; // [rsp+20h] [rbp-90h]
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionActivityMarkerExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionActivityMarkerExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionActivityMarkerExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionActivityMarkerExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:204 64 8 13 __for_end:204";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionActivityMarkerExcelConfig>,false>::__node_type *)ActivityExpeditionExcelConfigMgr::rewriteExpeditionMarkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->expedition_activity_marker_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ExpeditionActivityMarkerExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ExpeditionActivityMarkerExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ExpeditionActivityMarkerExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionActivityMarkerExcelConfig>,false,false>::operator*(v2 + 4);
    id = std::get<0ul,unsigned int const,data::ExpeditionActivityMarkerExcelConfig>(v7);
    std::get<1ul,unsigned int const,data::ExpeditionActivityMarkerExcelConfig>(v7);
    std::vector<unsigned int>::push_back(&this->mark_id_vec_, id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionActivityMarkerExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionActivityMarkerExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 213: range 0000000012C1DCA6-0000000012C1DF19
std::vector<unsigned int> *__fastcall ActivityExpeditionExcelConfigMgr::findSuperElemVecByPathId(
        std::vector<unsigned int> *retstr,
        const ActivityExpeditionExcelConfigMgr *const this,
        uint32_t path_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,std::vector<unsigned int>> *p_path_2_super_elem_map; // rdx
  std::map<unsigned int,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::pointer v9; // rax
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 path_id:212 64 8 8 iter:214 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityExpeditionExcelConfigMgr::findSuperElemVecByPathId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = path_id;
  p_path_2_super_elem_map = &this->path_2_super_elem_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                                     p_path_2_super_elem_map,
                                                                                     (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->path_2_super_elem_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::vector<unsigned int>>::end(v7);
  v8 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v3 + 64));
    std::vector<unsigned int>::vector(retstr, &v9->second);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<unsigned int>::vector(retstr);
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
  return retstr;
};

// Line 224: range 0000000012C1DF1A-0000000012C1E18D
std::vector<unsigned int> *__fastcall ActivityExpeditionExcelConfigMgr::findPathVecByDifficultyId(
        std::vector<unsigned int> *retstr,
        const ActivityExpeditionExcelConfigMgr *const this,
        uint32_t difficulty_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,std::vector<unsigned int>> *p_difficulty_2_path_map; // rdx
  std::map<unsigned int,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::pointer v9; // rax
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 17 difficulty_id:223 64 8 8 iter:225 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityExpeditionExcelConfigMgr::findPathVecByDifficultyId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = difficulty_id;
  p_difficulty_2_path_map = &this->difficulty_2_path_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                                     p_difficulty_2_path_map,
                                                                                     (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->difficulty_2_path_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::vector<unsigned int>>::end(v7);
  v8 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v3 + 64));
    std::vector<unsigned int>::vector(retstr, &v9->second);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<unsigned int>::vector(retstr);
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
  return retstr;
};

// Line 235: range 0000000012C1E18E-0000000012C1E4A9
// local variable allocation has failed, the output may be wrong!
float __cdecl ActivityExpeditionExcelConfigMgr::findBonusProbabilityByAvatarLevel(
        const ActivityExpeditionExcelConfigMgr *const this,
        uint32_t avatar_level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::reference v5; // rdx
  float result; // xmm0_4
  float probability; // [rsp+14h] [rbp-BCh]
  std::map<unsigned int,float> *__for_range; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<unsigned int const,float> >::type *level; // [rsp+20h] [rbp-B0h]
  float *prob; // [rsp+28h] [rbp-A8h]
  char v11[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 9 <unknown> 64 8 15 __for_begin:237 96 8 13 __for_end:237";
  *(_QWORD *)(v2 + 16) = ActivityExpeditionExcelConfigMgr::findBonusProbabilityByAvatarLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  probability = 0.0;
  __for_range = &this->avatar_level_2_probability_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, *(_QWORD *)&avatar_level);
  *(std::map<unsigned int,float>::const_iterator *)(v2 + 64) = std::map<unsigned int,float>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, *(_QWORD *)&avatar_level);
  *(std::map<unsigned int,float>::const_iterator *)(v2 + 96) = std::map<unsigned int,float>::end(__for_range);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v2 + 64),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v2 + 96)) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)(v2 + 64));
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 32, v2 + 96);
    if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v5, 8LL);
    }
    *(std::pair<unsigned int const,float> *)(v2 + 32) = *v5;
    level = std::get<0ul,unsigned int const,float>((std::pair<unsigned int const,float> *)(v2 + 32));
    prob = std::get<1ul,unsigned int const,float>((std::pair<unsigned int const,float> *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(level);
    }
    if ( avatar_level < *level )
      break;
    if ( *(_BYTE *)(((unsigned __int64)prob >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prob & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prob >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(prob);
    }
    probability = *prob;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)(v2 + 64));
  }
  result = probability;
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

// Line 253: range 0000000012C1E4AA-0000000012C1E84C
__int64 __fastcall ActivityExpeditionExcelConfigMgr::getExpeditionNeedTime(
        const ActivityExpeditionExcelConfigMgr *const this,
        __int64 path_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ExpeditionPathExcelConfigMap *p_expedition_path_excel_config_map; // rdx
  data::ExpeditionPathExcelConfigMap *v6; // rdx
  char *v7; // rsi
  bool v8; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false,false>::pointer v10; // rdx
  uint32_t *p_difficulty_id; // rax
  uint32_t difficulty_id; // ecx
  char v13; // al
  data::ExpeditionDifficultyExcelConfigMap *p_expedition_difficulty_excel_config_map; // rdx
  data::ExpeditionDifficultyExcelConfigMap *v15; // rdx
  bool v16; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false,false>::pointer v17; // rdx
  uint32_t *p_need_hours; // rax
  char v19[224]; // [rsp+10h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 17 difficulty_id:260 48 4 11 path_id:252 64 8 13 path_iter:254 96 8 9 <unknown> 128 8 19 "
                        "difficulty_iter:261 160 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityExpeditionExcelConfigMgr::getExpeditionNeedTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202116352;
  *(_DWORD *)(v2 + 48) = path_id;
  p_expedition_path_excel_config_map = &this->expedition_path_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, path_id);
  *(std::unordered_map<unsigned int,data::ExpeditionPathExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ExpeditionPathExcelConfig>::find(
                                                                                                     p_expedition_path_excel_config_map,
                                                                                                     (const std::unordered_map<unsigned int,data::ExpeditionPathExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->expedition_path_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ExpeditionPathExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ExpeditionPathExcelConfig>::end(v6);
  v7 = (char *)(v2 + 96);
  v8 = std::__detail::operator==<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionPathExcelConfig>,false,false> *const)(v2 + 64));
    p_difficulty_id = &v10->second.difficulty_id;
    if ( *(_BYTE *)(((unsigned __int64)p_difficulty_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_difficulty_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_difficulty_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(p_difficulty_id);
    }
    difficulty_id = v10->second.difficulty_id;
    v13 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v13 != 0;
    if ( v13 != 0 && v13 <= 3 )
      __asan_report_store4(v2 + 32, v7);
    *(_DWORD *)(v2 + 32) = difficulty_id;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    p_expedition_difficulty_excel_config_map = &this->expedition_difficulty_excel_config_map;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v7);
    *(std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::find(p_expedition_difficulty_excel_config_map, (const std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::key_type *)(v2 + 32));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    v15 = &this->expedition_difficulty_excel_config_map;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v2 + 32);
    *(std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::const_iterator *)(v2 + 160) = std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::end(v15);
    v16 = std::__detail::operator==<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false> *)(v2 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false> *)(v2 + 160));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v16 )
    {
      result = 0LL;
    }
    else
    {
      v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false,false> *const)(v2 + 128));
      p_need_hours = &v17->second.need_hours;
      if ( *(_BYTE *)(((unsigned __int64)p_need_hours >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_need_hours & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_need_hours >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(p_need_hours);
      }
      result = 3600 * v17->second.need_hours;
    }
  }
  if ( v19 == (char *)v2 )
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

// Line 271: range 0000000012C1E84E-0000000012C1EA8C
// local variable allocation has failed, the output may be wrong!
const data::ExpeditionChallengeExcelConfig *__cdecl ActivityExpeditionExcelConfigMgr::findExpeditionChallengeExcelConfigByGroupId(
        const ActivityExpeditionExcelConfigMgr *const this,
        uint32_t group_id)
{
  const data::ExpeditionChallengeExcelConfig *v2; // r14
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  const data::ExpeditionChallengeExcelConfig *result; // rax
  data::ExpeditionChallengeExcelConfigMap *__for_range; // [rsp+10h] [rbp-B0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false>::reference v9; // [rsp+18h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-98h]
  char v11[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:272 64 8 13 __for_end:272";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false>::__node_type *)ActivityExpeditionExcelConfigMgr::findExpeditionChallengeExcelConfigByGroupId;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  __for_range = &this->expedition_challenge_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], *(_QWORD *)&group_id);
  v3[4]._M_cur = std::unordered_map<unsigned int,data::ExpeditionChallengeExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], *(_QWORD *)&group_id);
  v3[8]._M_cur = std::unordered_map<unsigned int,data::ExpeditionChallengeExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false>(
            v3 + 4,
            v3 + 8) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false>::operator*(v3 + 4);
    std::get<0ul,unsigned int const,data::ExpeditionChallengeExcelConfig>(v9);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExpeditionChallengeExcelConfig>(v9);
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->group_id);
    }
    if ( group_id == excel_config->group_id )
    {
      v2 = excel_config;
      v6 = 0;
      goto LABEL_16;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false>::operator++(v3 + 4);
  }
  v6 = 1;
LABEL_16:
  if ( v6 == 1 )
    v2 = 0LL;
  result = v2;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 284: range 0000000012C1EA8E-0000000012C1EF98
int32_t __cdecl ActivityExpeditionExcelConfigMgr::rewriteExpeditionChallengeConfig(
        ActivityExpeditionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ExpeditionChallengeExcelConfig **v5; // r8
  uint32_t *p_unlock_time; // rax
  __int64 v7; // rsi
  unsigned int v8; // ecx
  char v9; // al
  std::map<unsigned int,const data::ExpeditionChallengeExcelConfig*> *p_day_2_challenge_config_map; // rcx
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,const data::ExpeditionChallengeExcelConfig*> >,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  data::ExpeditionChallengeExcelConfigMap *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-118h]
  const unsigned int *id; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig> >::type *config; // [rsp+38h] [rbp-108h]
  char v24[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 14 unlock_day:288 64 8 15 __for_begin:286 96 8 13 __for_end:286 128 8 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityExpeditionExcelConfigMgr::rewriteExpeditionChallengeConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->expedition_challenge_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExpeditionChallengeExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ExpeditionChallengeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExpeditionChallengeExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ExpeditionChallengeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false> *)(v2 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::ExpeditionChallengeExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::ExpeditionChallengeExcelConfig>(__in);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    p_unlock_time = &config->unlock_time;
    v7 = (((_BYTE)config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_unlock_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_unlock_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_unlock_time);
    }
    v8 = config->unlock_time / 0x18;
    v9 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v9 != 0;
    if ( v9 != 0 && v9 <= 3 )
      __asan_report_store4(v2 + 48, v7);
    *(_DWORD *)(v2 + 48) = v8;
    p_day_2_challenge_config_map = &this->day_2_challenge_config_map_;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v7);
    *(_QWORD *)(v2 + 128) = config;
    v11 = std::map<unsigned int,data::ExpeditionChallengeExcelConfig const*>::emplace<unsigned int &,data::ExpeditionChallengeExcelConfig*>(
            p_day_2_challenge_config_map,
            (unsigned int *)(v2 + 48),
            (data::ExpeditionChallengeExcelConfig **)(v2 + 128),
            (unsigned int *)p_day_2_challenge_config_map,
            v5);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( !v11.second )
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
        "./src/txt_data_manual/ActivityExpeditionExcelConfig.cpp",
        "rewriteExpeditionChallengeConfig",
        291);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v12, (const char (*)[22])byte_1AA55E60);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
      v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v14, (const char (*)[19])byte_1AA562C0);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->unlock_time);
      v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v16, (const char (*)[17])byte_1AA56300);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 299: range 0000000012C1EF9A-0000000012C1F17C
const data::ExpeditionChallengeExcelConfig *__fastcall ActivityExpeditionExcelConfigMgr::findChallengeConfigByDays(
        const ActivityExpeditionExcelConfigMgr *const this,
        __int64 days)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,const data::ExpeditionChallengeExcelConfig*> *p_day_2_challenge_config_map; // rdx
  std::map<unsigned int,const data::ExpeditionChallengeExcelConfig*> *v6; // rdx
  bool v7; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,const data::ExpeditionChallengeExcelConfig*> >::pointer v8; // rax
  const data::ExpeditionChallengeExcelConfig *result; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 8 days:298 64 8 8 iter:300 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityExpeditionExcelConfigMgr::findChallengeConfigByDays;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = days;
  p_day_2_challenge_config_map = &this->day_2_challenge_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, days);
  *(std::map<unsigned int,const data::ExpeditionChallengeExcelConfig*>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::ExpeditionChallengeExcelConfig const*>::find(p_day_2_challenge_config_map, (const std::map<unsigned int,const data::ExpeditionChallengeExcelConfig*>::key_type *)(v2 + 48));
  v6 = &this->day_2_challenge_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,const data::ExpeditionChallengeExcelConfig*>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::ExpeditionChallengeExcelConfig const*>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,const data::ExpeditionChallengeExcelConfig*> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,const data::ExpeditionChallengeExcelConfig*> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig const*>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,const data::ExpeditionChallengeExcelConfig*> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v8->second);
    result = v8->second;
  }
  else
  {
    result = 0LL;
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
