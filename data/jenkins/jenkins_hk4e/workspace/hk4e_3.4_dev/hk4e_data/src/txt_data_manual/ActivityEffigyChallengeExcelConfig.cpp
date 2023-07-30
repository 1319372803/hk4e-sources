// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp

// Line 20: range 0000000012AFF550-0000000012AFFAFA
int32_t __cdecl ActivityEffigyChallengeExcelConfigMgr::checkConfig(
        ActivityEffigyChallengeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityEffigyChallengeExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( ActivityEffigyChallengeExcelConfigMgr::checkEffigyChallengeConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
      "checkConfig",
      23);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      v5,
      (const char (*)[43])"[EFFIGY] checkEffigyChallengeConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityEffigyChallengeExcelConfigMgr::checkEffigyDifficultyConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
      "checkConfig",
      29);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v7,
      (const char (*)[44])"[EFFIGY] checkEffigyDifficultyConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityEffigyChallengeExcelConfigMgr::checkEffigyRewardConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
      "checkConfig",
      35);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v8,
      (const char (*)[40])"[EFFIGY] checkEffigyRewardConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityEffigyChallengeExcelConfigMgr::checkEffigyLimitingCondition(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
      "checkConfig",
      41);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      v9,
      (const char (*)[45])"[EFFIGY] checkEffigyLimitingCondition failed");
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

// Line 49: range 0000000012AFFAFC-0000000012AFFCDF
int32_t __cdecl ActivityEffigyChallengeExcelConfigMgr::rewriteConfig(
        ActivityEffigyChallengeExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityEffigyChallengeExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityEffigyChallengeExcelConfigMgr::rewriteEffigyDifficultyConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
      "rewriteConfig",
      52);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      v5,
      (const char (*)[46])"[EFFIGY] rewriteEffigyDifficultyConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v7 == (char *)v2 )
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

// Line 60: range 0000000012AFFCE0-0000000012B008BB
int32_t __cdecl ActivityEffigyChallengeExcelConfigMgr::checkEffigyChallengeConfig(
        ActivityEffigyChallengeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  uint32_t dungeon_id; // ecx
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t *p_day_index; // rsi
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  uint32_t first_pass_reward_id; // ecx
  char v29; // al
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  int v35; // edx
  int32_t result; // eax
  data::EffigyChallengeExcelConfigMap *__for_range; // [rsp+18h] [rbp-278h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeExcelConfig>,false,false>::reference v39; // [rsp+20h] [rbp-270h]
  std::tuple_element<0,std::pair<unsigned int const,data::EffigyChallengeExcelConfig> >::type *id; // [rsp+28h] [rbp-268h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EffigyChallengeExcelConfig> >::type *excel_config; // [rsp+30h] [rbp-260h]
  char v42[592]; // [rsp+40h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 4 13 dungeon_id:66 48 4 12 reward_id:84 64 8 14 __for_begin:64 96 8 12 __for_end:64 128 32"
                        " 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 48 17 dungeon_id_set:6"
                        "2 464 48 16 day_index_set:63";
  *(_QWORD *)(v3 + 16) = ActivityEffigyChallengeExcelConfigMgr::checkEffigyChallengeConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862736] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 384));
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 464));
  __for_range = &this->effigy_challenge_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EffigyChallengeExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::EffigyChallengeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EffigyChallengeExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::EffigyChallengeExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::EffigyChallengeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyChallengeExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyChallengeExcelConfig>,false> *)(v3 + 96)) )
      break;
    v39 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::EffigyChallengeExcelConfig>(v39);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::EffigyChallengeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EffigyChallengeExcelConfig>(v39);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->dungeon_id);
    }
    dungeon_id = excel_config->dungeon_id;
    v8 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(v3 + 32, v6);
    }
    *(_DWORD *)(v3 + 32) = dungeon_id;
    if ( data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
           &txt_config_mgr->dungeon_config_mgr,
           *(unsigned int *)(v3 + 32)) )
    {
      v15 = std::set<unsigned int>::emplace<unsigned int &>(
              (std::set<unsigned int> *const)(v3 + 384),
              (unsigned int *)(v3 + 32),
              (unsigned int *)(v3 + 32));
      if ( !v15.second )
      {
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
          "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
          "checkEffigyChallengeConfig",
          76);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v16, (const char (*)[24])byte_1AA2CE20);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id);
        v19 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v18, (const char (*)[21])byte_1AA2CE60);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])byte_1AA1BDC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
      }
      else
      {
        p_day_index = &excel_config->day_index;
        v22 = std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 464), &excel_config->day_index);
        if ( !v22.second )
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
            "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
            "checkEffigyChallengeConfig",
            81);
          v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v24 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v23, (const char (*)[24])byte_1AA2CE20);
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, id);
          v26 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v25, (const char (*)[22])byte_1AA2CEA0);
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &excel_config->day_index);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v27, (const char (*)[8])byte_1AA1BDC0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
          *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
        }
        else
        {
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((unsigned __int64)&excel_config->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&excel_config->first_pass_reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&excel_config->first_pass_reward_id);
          }
          first_pass_reward_id = excel_config->first_pass_reward_id;
          v29 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          if ( v29 != 0 && v29 <= 3 )
          {
            LOBYTE(p_day_index) = v29 != 0;
            __asan_report_store4(v3 + 48, p_day_index);
          }
          *(_DWORD *)(v3 + 48) = first_pass_reward_id;
          if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                                  txt_config_mgr,
                                  *(_DWORD *)(v3 + 48),
                                  ITEM_LIMIT_ACTIVITY_EFFIGY_REWARD) != 1 )
          {
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
              "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
              "checkEffigyChallengeConfig",
              87);
            v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v31 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    v30,
                    (const char (*)[24])byte_1AA2CE20);
            v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, id);
            v33 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    v32,
                    (const char (*)[27])byte_1AA2CEE0);
            v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v33,
                    (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v34, (const char (*)[11])byte_1AA281C0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
            *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v14 = 0;
          }
          else
          {
            v14 = 1;
          }
        }
      }
    }
    else
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
        "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
        "checkEffigyChallengeConfig",
        70);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v9, (const char (*)[24])byte_1AA2CE20);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v11, (const char (*)[21])byte_1AA2CE60);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])byte_1AA281C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v14 != 1 )
    {
      v35 = 0;
      goto LABEL_39;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeExcelConfig>,false,false> *const)(v3 + 64));
  }
  v35 = 1;
LABEL_39:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v35 == 1 )
    v2 = 0;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 464));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 384));
  result = v2;
  if ( v42 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 96: range 0000000012B008BC-0000000012B00FB2
int32_t __cdecl ActivityEffigyChallengeExcelConfigMgr::checkEffigyDifficultyConfig(
        ActivityEffigyChallengeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_challenge_id; // rax
  __int64 v7; // rsi
  uint32_t challenge_id; // ecx
  char v9; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // eax
  __int64 v16; // rsi
  data::EffigyDifficulty monster_difficulty; // ecx
  char v18; // al
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // eax
  int32_t result; // eax
  data::EffigyDifficultyExcelConfigMap *__for_range; // [rsp+10h] [rbp-150h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyDifficultyExcelConfig>,false,false>::reference v28; // [rsp+18h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,data::EffigyDifficultyExcelConfig> >::type *id; // [rsp+20h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EffigyDifficultyExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-138h]
  char v31[304]; // [rsp+30h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 15 challenge_id:99 48 4 17 difficulty_id:106 64 8 14 __for_begin:97 96 8 12 __for_end:97 "
                        "128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityEffigyChallengeExcelConfigMgr::checkEffigyDifficultyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  __for_range = &this->effigy_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EffigyDifficultyExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::EffigyDifficultyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EffigyDifficultyExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::EffigyDifficultyExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::EffigyDifficultyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyDifficultyExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyDifficultyExcelConfig>,false> *)(v3 + 96)) )
  {
    v28 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyDifficultyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyDifficultyExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::EffigyDifficultyExcelConfig>(v28);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::EffigyDifficultyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EffigyDifficultyExcelConfig>(v28);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    p_challenge_id = &excel_config->challenge_id;
    v7 = (((_BYTE)excel_config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_challenge_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_challenge_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_challenge_id);
    }
    challenge_id = excel_config->challenge_id;
    v9 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v7) = v9 != 0;
      __asan_report_store4(v3 + 32, v7);
    }
    *(_DWORD *)(v3 + 32) = challenge_id;
    if ( data::ActivityEffigyChallengeExcelConfigMgrBase::findEffigyChallengeExcelConfig(
           this,
           *(unsigned int *)(v3 + 32)) )
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v16 = (((_BYTE)excel_config + 20) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->monster_difficulty >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->monster_difficulty >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&excel_config->monster_difficulty);
      }
      monster_difficulty = excel_config->monster_difficulty;
      v18 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v18 != 0 && v18 <= 3 )
      {
        LOBYTE(v16) = v18 != 0;
        __asan_report_store4(v3 + 48, v16);
      }
      *(_DWORD *)(v3 + 48) = monster_difficulty;
      if ( !data::isValidEffigyDifficulty(*(_DWORD *)(v3 + 48)) )
        goto LABEL_26;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      if ( *(_DWORD *)(v3 + 48) )
        v19 = 0;
      else
LABEL_26:
        v19 = 1;
      if ( v19 )
      {
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
          "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
          "checkEffigyDifficultyConfig",
          109);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v20, (const char (*)[24])byte_1AA2D000);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
        v23 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v22, (const char (*)[25])byte_1AA2D080);
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v24, (const char (*)[11])byte_1AA281C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v15 = 0;
      }
      else
      {
        v15 = 1;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
        "checkEffigyDifficultyConfig",
        102);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v10, (const char (*)[24])byte_1AA2D000);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
      v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v12, (const char (*)[25])byte_1AA2D040);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])byte_1AA281C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v15 = 0;
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v15 != 1 )
    {
      v25 = 0;
      goto LABEL_37;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyDifficultyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyDifficultyExcelConfig>,false,false> *const)(v3 + 64));
  }
  v25 = 1;
LABEL_37:
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

// Line 118: range 0000000012B00FB4-0000000012B01415
int32_t __cdecl ActivityEffigyChallengeExcelConfigMgr::checkEffigyRewardConfig(
        ActivityEffigyChallengeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  uint32_t reward_id; // ecx
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // edx
  int v15; // eax
  int32_t result; // eax
  data::EffigyRewardExcelConfigMap *__for_range; // [rsp+10h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyRewardExcelConfig>,false,false>::reference v19; // [rsp+18h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,data::EffigyRewardExcelConfig> >::type *id; // [rsp+20h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EffigyRewardExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-F8h]
  char v22[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 13 reward_id:121 64 8 15 __for_begin:119 96 8 13 __for_end:119 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityEffigyChallengeExcelConfigMgr::checkEffigyRewardConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  __for_range = &this->effigy_reward_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EffigyRewardExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::EffigyRewardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EffigyRewardExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::EffigyRewardExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::EffigyRewardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyRewardExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyRewardExcelConfig>,false> *)(v3 + 96)) )
      break;
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyRewardExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyRewardExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::EffigyRewardExcelConfig>(v19);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::EffigyRewardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EffigyRewardExcelConfig>(v19);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->reward_id);
    }
    reward_id = excel_config->reward_id;
    v8 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(v3 + 48, v6);
    }
    *(_DWORD *)(v3 + 48) = reward_id;
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            *(_DWORD *)(v3 + 48),
                            ITEM_LIMIT_ACTIVITY_EFFIGY_REWARD) != 1 )
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
        "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
        "checkEffigyRewardConfig",
        124);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v9, (const char (*)[24])byte_1AA2D160);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v11, (const char (*)[21])byte_1AA2D1A0);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])byte_1AA281C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
    }
    else
    {
      v14 = 1;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v14 != 1 )
    {
      v15 = 0;
      goto LABEL_23;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyRewardExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyRewardExcelConfig>,false,false> *const)(v3 + 64));
  }
  v15 = 1;
LABEL_23:
  if ( v15 == 1 )
    v2 = 0;
  result = v2;
  if ( v22 == (char *)v3 )
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

// Line 133: range 0000000012B01416-0000000012B01E31
int32_t __cdecl ActivityEffigyChallengeExcelConfigMgr::checkEffigyLimitingCondition(
        ActivityEffigyChallengeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::EffigyCondition *p_condition_type; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int32_t result; // eax
  data::EffigyLimitingConditionExcelConfigMap *__for_range; // [rsp+18h] [rbp-1F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyLimitingConditionExcelConfig>,false,false>::reference v22; // [rsp+20h] [rbp-1F0h]
  std::tuple_element<0,std::pair<unsigned int const,data::EffigyLimitingConditionExcelConfig> >::type *id; // [rsp+28h] [rbp-1E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EffigyLimitingConditionExcelConfig> >::type *excel_config; // [rsp+30h] [rbp-1E0h]
  const std::vector<data::DungeonLevelEntityConfig> *level_config_vec_ptr; // [rsp+38h] [rbp-1D8h]
  char v26[464]; // [rsp+40h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 15 __for_begin:134 64 8 13 __for_end:134 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityEffigyChallengeExcelConfigMgr::checkEffigyLimitingCondition;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  __for_range = &this->effigy_limiting_condition_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EffigyLimitingConditionExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::EffigyLimitingConditionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EffigyLimitingConditionExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::EffigyLimitingConditionExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::EffigyLimitingConditionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyLimitingConditionExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyLimitingConditionExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_50;
    }
    v22 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyLimitingConditionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyLimitingConditionExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::EffigyLimitingConditionExcelConfig>(v22);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::EffigyLimitingConditionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EffigyLimitingConditionExcelConfig>(v22);
    p_condition_type = &excel_config->condition_type;
    if ( *(_BYTE *)(((unsigned __int64)p_condition_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_condition_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_condition_type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(p_condition_type);
    }
    if ( excel_config->condition_type == EFFIGY_CONDITION_TIME_LIMIT )
    {
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->condition_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&excel_config->condition_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&excel_config->condition_param1);
      }
      if ( !excel_config->condition_param1 )
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
          "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
          "checkEffigyLimitingCondition",
          140);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v7, (const char (*)[44])byte_1AA2D2C0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
        v2 = -1;
        v9 = 0;
        goto LABEL_50;
      }
      goto LABEL_48;
    }
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->condition_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->condition_type >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->condition_type);
    }
    if ( excel_config->condition_type == EFFIGY_CONDITION_LEVEL_CONFIG )
    {
      p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->condition_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&excel_config->condition_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&excel_config->condition_param1);
      }
      level_config_vec_ptr = DungeonExcelConfigMgr::findDungeonLevelConfigVec(
                               p_dungeon_config_mgr,
                               excel_config->condition_param1);
      if ( !level_config_vec_ptr || std::vector<data::DungeonLevelEntityConfig>::empty(level_config_vec_ptr) )
      {
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
          "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
          "checkEffigyLimitingCondition",
          149);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v12, (const char (*)[34])byte_1AA2D320);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        v2 = -1;
        v9 = 0;
        goto LABEL_50;
      }
      goto LABEL_48;
    }
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->condition_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->condition_type >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->condition_type);
    }
    if ( excel_config->condition_type != EFFIGY_CONDITION_MONSTER_CONFIG )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->condition_param1 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->condition_param1 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->condition_param1);
    }
    if ( !excel_config->condition_param1 )
    {
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
        "checkEffigyLimitingCondition",
        158);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v14, (const char (*)[44])byte_1AA2D380);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      v2 = -1;
      v9 = 0;
      goto LABEL_50;
    }
    if ( std::vector<unsigned int>::empty(&excel_config->condition_param2) )
    {
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
        "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
        "checkEffigyLimitingCondition",
        163);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v16, (const char (*)[60])byte_1AA2D3E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v2 = -1;
      v9 = 0;
      goto LABEL_50;
    }
LABEL_48:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyLimitingConditionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyLimitingConditionExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
    "checkEffigyLimitingCondition",
    169);
  v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 352),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v19 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v18, (const char (*)[40])byte_1AA2D440);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
  v2 = -1;
  v9 = 0;
LABEL_50:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
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

// Line 178: range 0000000012B01E32-0000000012B0258C
int32_t __cdecl ActivityEffigyChallengeExcelConfigMgr::rewriteEffigyDifficultyConfig(
        ActivityEffigyChallengeExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_challenge_id; // rax
  __int64 v7; // rsi
  uint32_t challenge_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::EffigyDifficulty monster_difficulty; // ecx
  char v12; // al
  std::pair<unsigned int,unsigned int> *v13; // rcx
  const data::EffigyDifficultyExcelConfig *v14; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig> >,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  int v18; // edx
  common::milog::MiLogStream *v19; // r14
  std::map<std::pair<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig>::size_type v20; // rax
  int32_t result; // eax
  data::EffigyDifficultyExcelConfigMap *__for_range; // [rsp+20h] [rbp-190h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyDifficultyExcelConfig>,false,false>::reference v23; // [rsp+28h] [rbp-188h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EffigyDifficultyExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-178h]
  char v25[368]; // [rsp+40h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 16 challenge_id:181 48 4 17 difficulty_id:182 64 8 15 __for_begin:179 96 8 13 __for_end:1"
                        "79 128 8 9 <unknown> 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityEffigyChallengeExcelConfigMgr::rewriteEffigyDifficultyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  __for_range = &this->effigy_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EffigyDifficultyExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::EffigyDifficultyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EffigyDifficultyExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::EffigyDifficultyExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::EffigyDifficultyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyDifficultyExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyDifficultyExcelConfig>,false> *)(v3 + 96)) )
  {
    v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyDifficultyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyDifficultyExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::EffigyDifficultyExcelConfig>(v23);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::EffigyDifficultyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EffigyDifficultyExcelConfig>(v23);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    p_challenge_id = &excel_config->challenge_id;
    v7 = (((_BYTE)excel_config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_challenge_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_challenge_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_challenge_id);
    }
    challenge_id = excel_config->challenge_id;
    v9 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v7) = v9 != 0;
      __asan_report_store4(v3 + 32, v7);
    }
    *(_DWORD *)(v3 + 32) = challenge_id;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    v10 = (((_BYTE)excel_config + 20) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->monster_difficulty >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->monster_difficulty >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->monster_difficulty);
    }
    monster_difficulty = excel_config->monster_difficulty;
    v12 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(v10) = v12 != 0;
    if ( v12 != 0 && v12 <= 3 )
      __asan_report_store4(v3 + 48, v10);
    *(_DWORD *)(v3 + 48) = monster_difficulty;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v10);
    *(std::pair<unsigned int,unsigned int> *)(v3 + 128) = std::make_pair<unsigned int &,unsigned int &>(
                                                            (unsigned int *)(v3 + 32),
                                                            (unsigned int *)(v3 + 48));
    v15 = std::map<std::pair<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig>::emplace<std::pair<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig const&>(
            &this->effigy_difficulty_map_,
            (std::pair<unsigned int,unsigned int> *)(v3 + 128),
            excel_config,
            v13,
            v14);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( !v15.second )
    {
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
        "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
        "rewriteEffigyDifficultyConfig",
        185);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        v16,
        (const char (*)[51])"[EFFIGY] challenge_id and difficulty_id duplicated");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v17 = 0;
    }
    else
    {
      v17 = 1;
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v18 = 0;
      goto LABEL_29;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyDifficultyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyDifficultyExcelConfig>,false,false> *const)(v3 + 64));
  }
  v18 = 1;
LABEL_29:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v18 == 1 )
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
      1u,
      "./src/txt_data_manual/ActivityEffigyChallengeExcelConfig.cpp",
      "rewriteEffigyDifficultyConfig",
      190);
    v19 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[39])"[EFFIGY] effigy_difficulty_map_ size: ");
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v20 = std::map<std::pair<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig>::size(&this->effigy_difficulty_map_);
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      v20 = __asan_report_store8(v3 + 160, "[EFFIGY] effigy_difficulty_map_ size: ");
    *(_QWORD *)(v3 + 160) = v20;
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v19, (const unsigned __int64 *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    v2 = 0;
  }
  result = v2;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
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

// Line 195: range 0000000012B0258E-0000000012B02787
bool __fastcall ActivityEffigyChallengeExcelConfigMgr::isConditionIdAvailable(
        const ActivityEffigyChallengeExcelConfigMgr *const this,
        uint32_t challenge_id,
        uint32_t condition_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool result; // al
  const unsigned int *M_current; // r14
  const unsigned int *v8; // rcx
  const data::EffigyChallengeExcelConfig *effigy_challenge_config_ptr; // [rsp+10h] [rbp-C0h]
  const std::vector<unsigned int> *condition_id_vec; // [rsp+18h] [rbp-B8h]
  char v12[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 16 condition_id:194 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityEffigyChallengeExcelConfigMgr::isConditionIdAvailable;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = condition_id;
  effigy_challenge_config_ptr = data::ActivityEffigyChallengeExcelConfigMgrBase::findEffigyChallengeExcelConfig(
                                  this,
                                  challenge_id);
  if ( effigy_challenge_config_ptr )
  {
    condition_id_vec = &effigy_challenge_config_ptr->limiting_condition_vec;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, challenge_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::end(condition_id_vec);
    M_current = std::vector<unsigned int>::end(condition_id_vec)._M_current;
    v8 = std::vector<unsigned int>::begin(condition_id_vec)._M_current;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, challenge_id);
    *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                   (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v8,
                                                                                                   (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                   (const unsigned int *)(v3 + 48));
    result = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
               (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
               (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96));
  }
  else
  {
    result = 0;
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

// Line 207: range 0000000012B02788-0000000012B029DF
const data::EffigyDifficultyExcelConfig *__fastcall ActivityEffigyChallengeExcelConfigMgr::findEffigyDifficultyConfig(
        const ActivityEffigyChallengeExcelConfigMgr *const this,
        __int64 challenge_id,
        uint32_t difficulty_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<std::pair<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig> *p_effigy_difficulty_map; // rdx
  bool v7; // al
  const data::EffigyDifficultyExcelConfig *result; // rax
  char v10[208]; // [rsp+10h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 16 challenge_id:206 48 4 17 difficulty_id:206 64 8 8 iter:208 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityEffigyChallengeExcelConfigMgr::findEffigyDifficultyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 32) = challenge_id;
  *(_DWORD *)(v3 + 48) = difficulty_id;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, challenge_id);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v3 + 32),
                                                         (unsigned int *)(v3 + 48));
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v3 + 48);
  *(std::map<std::pair<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig>::const_iterator *)(v3 + 64) = std::map<std::pair<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig>::find(&this->effigy_difficulty_map_, (const std::map<std::pair<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig>::key_type *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_effigy_difficulty_map = &this->effigy_difficulty_map_;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v3 + 96);
  *(std::map<std::pair<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig>::const_iterator *)(v3 + 128) = std::map<std::pair<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig>::end(p_effigy_difficulty_map);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig> >::_Self *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::EffigyDifficultyExcelConfig> > *const)(v3 + 64))->second;
  if ( v10 == (char *)v3 )
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

// Line 218: range 0000000012B029E0-0000000012B029FF
uint32_t __cdecl ActivityEffigyChallengeExcelConfigMgr::getEffigyLimitingConditionNum(
        const ActivityEffigyChallengeExcelConfigMgr *const this)
{
  return std::unordered_map<unsigned int,data::EffigyLimitingConditionExcelConfig>::size(&this->effigy_limiting_condition_excel_config_map);
};
