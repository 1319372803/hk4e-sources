// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityMistTrialExcelConfig.cpp

// Line 18: range 0000000012C8A164-0000000012C8A70E
int32_t __cdecl ActivityMistTrialExcelConfigMgr::checkConfig(
        ActivityMistTrialExcelConfigMgr *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityMistTrialExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( ActivityMistTrialExcelConfigMgr::checkTrialCharacterData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
      "checkConfig",
      21);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v5,
      (const char (*)[31])"checkTrialCharacterData failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityMistTrialExcelConfigMgr::checkMistTrialLevelData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
      "checkConfig",
      26);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v7,
      (const char (*)[31])"checkMistTrialLevelData failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityMistTrialExcelConfigMgr::checkMistTrialWatcherListData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
      "checkConfig",
      31);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v8,
      (const char (*)[37])"checkMistTrialWatcherListData failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityMistTrialExcelConfigMgr::checkMistTrialStatData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
      "checkConfig",
      36);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v9,
      (const char (*)[30])"checkMistTrialStatData failed");
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

// Line 43: range 0000000012C8A710-0000000012C8ACBA
int32_t __cdecl ActivityMistTrialExcelConfigMgr::rewriteConfig(
        ActivityMistTrialExcelConfigMgr *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityMistTrialExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( ActivityMistTrialExcelConfigMgr::rewriteTrialCharacterData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
      "rewriteConfig",
      46);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v5,
      (const char (*)[28])"rewriteCharacterData failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityMistTrialExcelConfigMgr::rewriteMistTrialData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
      "rewriteConfig",
      51);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v7,
      (const char (*)[28])"rewriteMistTrialData failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityMistTrialExcelConfigMgr::rewriteMistStatisticData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
      "rewriteConfig",
      56);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v8,
      (const char (*)[32])"rewriteMistStatisticData failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityMistTrialExcelConfigMgr::rewriteMistTrialWatcherListData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
      "rewriteConfig",
      61);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v9,
      (const char (*)[39])"rewriteMistTrialWatcherListData failed");
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

// Line 68: range 0000000012C8ACBC-0000000012C8B03D
int32_t __cdecl ActivityMistTrialExcelConfigMgr::checkTrialCharacterData(
        ActivityMistTrialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  TrialAvatarExcelConfigMgr *p_trial_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  int32_t result; // eax
  data::ActivityMistTrialAvatarDataExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialAvatarDataExcelConfig>,false,false>::reference v12; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMistTrialAvatarDataExcelConfig> >::type *config; // [rsp+28h] [rbp-D8h]
  char v14[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:69 64 8 12 __for_end:69 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMistTrialExcelConfigMgr::checkTrialCharacterData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->activity_mist_trial_avatar_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityMistTrialAvatarDataExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityMistTrialAvatarDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityMistTrialAvatarDataExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityMistTrialAvatarDataExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityMistTrialAvatarDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialAvatarDataExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialAvatarDataExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_18;
    }
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialAvatarDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialAvatarDataExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ActivityMistTrialAvatarDataExcelConfig>(v12);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMistTrialAvatarDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityMistTrialAvatarDataExcelConfig>(v12);
    p_trial_avatar_config_mgr = &txt_config_mgr->trial_avatar_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->trial_avatar_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->trial_avatar_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->trial_avatar_id);
    }
    if ( !data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
            p_trial_avatar_config_mgr,
            config->trial_avatar_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialAvatarDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialAvatarDataExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
    "checkTrialCharacterData",
    73);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v7, (const char (*)[39])byte_1AA6D180);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->trial_avatar_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_18:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v14 == (char *)v3 )
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

// Line 81: range 0000000012C8B03E-0000000012C8C5E7
int32_t __cdecl ActivityMistTrialExcelConfigMgr::checkMistTrialLevelData(
        ActivityMistTrialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  __int64 v10; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  char *v15; // rsi
  unsigned int *v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int v22; // edx
  char *v23; // rsi
  unsigned int *v24; // rax
  int *v25; // rdx
  int v26; // ecx
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // edx
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  __int64 schedule_id; // rsi
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  char *v35; // rsi
  unsigned int *v36; // rax
  int *v37; // rdx
  int v38; // ecx
  char v39; // al
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  int v42; // edx
  char *v43; // rsi
  unsigned int *v44; // rax
  int *v45; // rdx
  int v46; // ecx
  char v47; // al
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  int v50; // edx
  int32_t result; // eax
  data::ActivityMistTrialLevelDataExcelConfigMap *__for_range; // [rsp+18h] [rbp-3D8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false,false>::reference v54; // [rsp+20h] [rbp-3D0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig> >::type *id; // [rsp+28h] [rbp-3C8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig> >::type *config; // [rsp+30h] [rbp-3C0h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+38h] [rbp-3B8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-3B0h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-3A8h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+50h] [rbp-3A0h]
  const std::vector<unsigned int> *__for_range_3; // [rsp+58h] [rbp-398h]
  char v62[912]; // [rsp+60h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "21 32 4 10 stat_id:96 48 4 19 watcher_list_id:104 64 4 13 avatar_id:117 80 4 22 exhibition_data_"
                        "id:125 96 8 14 __for_begin:82 128 8 12 __for_end:82 160 8 14 __for_begin:96 192 8 12 __for_end:9"
                        "6 224 8 15 __for_begin:104 256 8 13 __for_end:104 288 8 15 __for_begin:117 320 8 13 __for_end:11"
                        "7 352 8 15 __for_begin:125 384 8 13 __for_end:125 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9"
                        " <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMistTrialExcelConfigMgr::checkMistTrialLevelData;
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
  v5[536862732] = -218959360;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -202116109;
  __for_range = &this->activity_mist_trial_level_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityMistTrialLevelDataExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityMistTrialLevelDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityMistTrialLevelDataExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ActivityMistTrialLevelDataExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false> *)(v3 + 128)) )
    {
      v9 = 1;
      goto LABEL_106;
    }
    v54 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false,false> *const)(v3 + 96));
    id = std::get<0ul,unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>(v54);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>(v54);
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->dungeon_id);
    }
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           p_dungeon_config_mgr,
                           config->dungeon_id);
    if ( !dungeon_config_ptr )
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
        "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
        "checkMistTrialLevelData",
        87);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 416),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v7, (const char (*)[28])byte_1AA6D400);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      v2 = -1;
      v9 = 0;
      goto LABEL_106;
    }
    v10 = (((_BYTE)config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->schedule_id);
    }
    if ( config->schedule_id != 5022001 && config->schedule_id != 5054001 )
    {
      v10 = (((_BYTE)dungeon_config_ptr + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->type);
      }
      if ( dungeon_config_ptr->type != DUNGEON_MIST_TRIAL )
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
          "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
          "checkMistTrialLevelData",
          93);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])"dungeon_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->dungeon_id);
        v14 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v13, (const char (*)[45])byte_1AA6D480);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        v2 = -1;
        v9 = 0;
        goto LABEL_106;
      }
    }
    __for_range_0 = &config->statistics_id_list;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v10);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v10);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v15 = (char *)(v3 + 192);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
      {
        v22 = 1;
        goto LABEL_42;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v16 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
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
        LOBYTE(v15) = v19 != 0;
        __asan_report_store4(v3 + 32, v15);
      }
      *(_DWORD *)(v3 + 32) = v18;
      if ( !data::ActivityMistTrialExcelConfigMgrBase::findActivityMistTrialStatisticsListExcelConfig(
              this,
              *(unsigned int *)(v3 + 32)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
    }
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
      "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
      "checkMistTrialLevelData",
      100);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 544),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v21 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v20, (const char (*)[40])byte_1AA6D4E0);
    v15 = (char *)(v3 + 32);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
    *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v22 = 0;
LABEL_42:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v22 != 1 )
    {
      v9 = 0;
      goto LABEL_106;
    }
    __for_range_1 = &config->challenge_mission_watcher_list;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v15);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v15);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v23 = (char *)(v3 + 256);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256)) )
      {
        v30 = 1;
        goto LABEL_60;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v24 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
      v25 = (int *)v24;
      if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v24);
      }
      v26 = *v25;
      v27 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v27 != 0 && v27 <= 3 )
      {
        LOBYTE(v23) = v27 != 0;
        __asan_report_store4(v3 + 48, v23);
      }
      *(_DWORD *)(v3 + 48) = v26;
      if ( !data::ActivityMistTrialExcelConfigMgrBase::findActivityMistTrialWatcherListDataExcelConfig(
              this,
              *(unsigned int *)(v3 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
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
      "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
      "checkMistTrialLevelData",
      108);
    v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 608),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v29 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v28, (const char (*)[53])byte_1AA6D540);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
    *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v30 = 0;
LABEL_60:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v30 != 1 )
    {
      v9 = 0;
      goto LABEL_106;
    }
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->schedule_id);
    }
    schedule_id = config->schedule_id;
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
            p_new_activity_config_mgr,
            schedule_id) )
      break;
    __for_range_2 = &config->trial_avatar_id_list;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, schedule_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, schedule_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_2);
    while ( 1 )
    {
      v35 = (char *)(v3 + 320);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 320)) )
      {
        v42 = 1;
        goto LABEL_84;
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v36 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
      v37 = (int *)v36;
      if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v36);
      }
      v38 = *v37;
      v39 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
      if ( v39 != 0 && v39 <= 3 )
      {
        LOBYTE(v35) = v39 != 0;
        __asan_report_store4(v3 + 64, v35);
      }
      *(_DWORD *)(v3 + 64) = v38;
      if ( !data::ActivityMistTrialExcelConfigMgrBase::findActivityMistTrialAvatarDataExcelConfig(
              this,
              *(unsigned int *)(v3 + 64)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
    }
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
      4u,
      "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
      "checkMistTrialLevelData",
      121);
    v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 736),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v41 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v40, (const char (*)[45])byte_1AA6D600);
    v35 = (char *)(v3 + 64);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
    *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v42 = 0;
LABEL_84:
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( v42 != 1 )
    {
      v9 = 0;
      goto LABEL_106;
    }
    __for_range_3 = &config->battle_statistics_data;
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 352, v35);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 352) = std::vector<unsigned int>::begin(__for_range_3);
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 384, v35);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 384) = std::vector<unsigned int>::end(__for_range_3);
    while ( 1 )
    {
      v43 = (char *)(v3 + 384);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 352),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 384)) )
      {
        v50 = 1;
        goto LABEL_102;
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v44 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 352));
      v45 = (int *)v44;
      if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v44);
      }
      v46 = *v45;
      v47 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( v47 != 0 && v47 <= 3 )
      {
        LOBYTE(v43) = v47 != 0;
        __asan_report_store4(v3 + 80, v43);
      }
      *(_DWORD *)(v3 + 80) = v46;
      if ( !data::ExhibitionExcelConfigMgrBase::findExhibitionListExcelConfig(
              &txt_config_mgr->exhibition_config_mgr,
              *(unsigned int *)(v3 + 80)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 352));
    }
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
      "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
      "checkMistTrialLevelData",
      129);
    v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 800),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v49 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v48, (const char (*)[54])byte_1AA6D660);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
    *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v50 = 0;
LABEL_102:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
    if ( v50 != 1 )
    {
      v9 = 0;
      goto LABEL_106;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false,false> *const)(v3 + 96));
  }
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
    "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
    "checkMistTrialLevelData",
    114);
  v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 672),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v34 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v33, (const char (*)[35])byte_1AA6D5A0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &config->schedule_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
  v2 = -1;
  v9 = 0;
LABEL_106:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v62 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = 0;
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
  return result;
};

// Line 138: range 0000000012C8C5E8-0000000012C8C969
int32_t __cdecl ActivityMistTrialExcelConfigMgr::checkMistTrialWatcherListData(
        ActivityMistTrialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  int32_t result; // eax
  data::ActivityMistTrialWatcherListDataExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false,false>::reference v12; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig> >::type *config; // [rsp+28h] [rbp-D8h]
  char v14[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:139 64 8 13 __for_end:139 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMistTrialExcelConfigMgr::checkMistTrialWatcherListData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->activity_mist_trial_watcher_list_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityMistTrialWatcherListDataExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityMistTrialWatcherListDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityMistTrialWatcherListDataExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityMistTrialWatcherListDataExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_18;
    }
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>(v12);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>(v12);
    p_watcher_config_mgr = &txt_config_mgr->watcher_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->challenge_watcher_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->challenge_watcher_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->challenge_watcher_id);
    }
    if ( !WatcherExcelConfigMgr::findWatcherConfig(p_watcher_config_mgr, config->challenge_watcher_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
    "checkMistTrialWatcherListData",
    143);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v7, (const char (*)[30])byte_1AA6D760);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->challenge_watcher_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_18:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v14 == (char *)v3 )
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

// Line 151: range 0000000012C8C96A-0000000012C8EAFE
int32_t __cdecl ActivityMistTrialExcelConfigMgr::checkMistTrialStatData(
        ActivityMistTrialExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int stat_name; // eax
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  _BOOL4 v10; // eax
  unsigned __int64 v11; // rax
  const std::string *v12; // rax
  char *v13; // rsi
  bool v14; // r15
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  const std::string *v17; // rax
  _BOOL4 v18; // r15d
  common::milog::MiLogStream *v19; // rax
  char *v20; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v21; // rax
  int *v22; // rdx
  int v23; // ecx
  char v24; // al
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int v27; // edx
  unsigned __int64 v28; // rdx
  common::milog::MiLogStream *v29; // rax
  _BOOL4 v30; // eax
  unsigned __int64 v31; // rax
  const std::string *v32; // rax
  char *v33; // rsi
  bool v34; // r15
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  const std::string *v37; // rax
  _BOOL4 v38; // r15d
  char *v39; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v40; // rax
  int *v41; // rdx
  int v42; // ecx
  char v43; // al
  const char *v44; // rax
  bool v45; // r15
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  int v48; // edx
  unsigned __int64 v49; // rdx
  common::milog::MiLogStream *v50; // rax
  _BOOL4 v51; // eax
  unsigned __int64 v52; // rax
  const std::string *v53; // rax
  char *v54; // rsi
  bool v55; // r15
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r14
  const std::string *v58; // rax
  _BOOL4 v59; // r15d
  common::milog::MiLogStream *v60; // rax
  char *v61; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v62; // rax
  int *v63; // rdx
  int v64; // ecx
  char v65; // al
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  int v68; // edx
  unsigned __int64 v69; // rdx
  data::ActivityMistTrialStatisticsListExcelConfigMap *__for_range; // [rsp+28h] [rbp-6D8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialStatisticsListExcelConfig>,false,false>::reference v73; // [rsp+30h] [rbp-6D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMistTrialStatisticsListExcelConfig> >::type *config; // [rsp+40h] [rbp-6C0h]
  std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-6B8h]
  std::vector<unsigned int> *__for_range_2; // [rsp+50h] [rbp-6B0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-6A0h]
  char v78[1680]; // [rsp+70h] [rbp-690h] BYREF

  v3 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1632LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "34 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 13 gadget_id:183 12"
                        "8 4 17 reaction_type:208 144 4 13 gadget_id:236 160 8 15 __for_begin:152 192 8 13 __for_end:152 "
                        "224 8 15 __for_begin:183 256 8 13 __for_end:183 288 8 15 __for_begin:208 320 8 13 __for_end:208 "
                        "352 8 15 __for_begin:236 384 8 13 __for_end:236 416 24 24 weapon_gadget_id_vec:172 480 24 29 ele"
                        "ment_reaction_type_vec:202 544 24 17 gadget_id_vec:225 608 32 9 <unknown> 672 32 9 <unknown> 736"
                        " 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056"
                        " 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> "
                        "1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMistTrialExcelConfigMgr::checkMistTrialStatData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234753535;
  v5[536862723] = -234556927;
  v5[536862724] = -234556924;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862733] = -234881024;
  v5[536862734] = -218959118;
  v5[536862735] = -234881024;
  v5[536862736] = -218959118;
  v5[536862737] = -234881024;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -218959118;
  v5[536862752] = -218959118;
  v5[536862754] = -218959118;
  v5[536862756] = -218959118;
  v5[536862758] = -218959118;
  v5[536862760] = -218959118;
  v5[536862762] = -218959118;
  v5[536862764] = -218959118;
  v5[536862766] = -218959118;
  v5[536862768] = -218959118;
  v5[536862770] = -202116109;
  __for_range = &this->activity_mist_trial_statistics_list_excel_config_map;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityMistTrialStatisticsListExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::ActivityMistTrialStatisticsListExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityMistTrialStatisticsListExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::ActivityMistTrialStatisticsListExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityMistTrialStatisticsListExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialStatisticsListExcelConfig>,false> *)(v3 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialStatisticsListExcelConfig>,false> *)(v3 + 192)) )
    {
      v8 = 1;
      goto LABEL_118;
    }
    v73 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialStatisticsListExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialStatisticsListExcelConfig>,false,false> *const)(v3 + 160));
    std::get<0ul,unsigned int const,data::ActivityMistTrialStatisticsListExcelConfig>(v73);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMistTrialStatisticsListExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityMistTrialStatisticsListExcelConfig>(v73);
    if ( *(_BYTE *)(((unsigned __int64)&config->stat_name >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->stat_name >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->stat_name);
    }
    stat_name = config->stat_name;
    if ( stat_name <= 10 )
      break;
LABEL_116:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialStatisticsListExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialStatisticsListExcelConfig>,false,false> *const)(v3 + 160));
  }
  if ( stat_name >= 9 )
  {
    if ( std::vector<std::string>::size(&config->param) )
    {
      v31 = ((v3 + 480) >> 3) + 2147450880;
      *(_WORD *)v31 = 0;
      *(_BYTE *)(v31 + 2) = 0;
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 480));
      *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 1056),
        ",",
        (const std::allocator<char> *)(v3 + 64));
      v32 = std::vector<std::string>::operator[](&config->param, 0LL);
      v33 = (char *)(v3 + 1056);
      v34 = common::tools::StringUtils::splitToList<unsigned int>(
              v32,
              (const std::string *)(v3 + 1056),
              (std::vector<unsigned int> *)(v3 + 480),
              0) != 0;
      std::string::~string((void *)(v3 + 1056));
      *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 64);
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v34 )
      {
        *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1120) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1151) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1151) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1120, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1120),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
          "checkMistTrialStatData",
          205);
        v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1120),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v36 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v35,
                (const char (*)[21])"splitToList failed, ");
        v37 = std::vector<std::string>::operator[](&config->param, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v36, v37);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1120));
        *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v38 = 0;
      }
      else
      {
        __for_range_1 = (std::vector<unsigned int> *)(v3 + 480);
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 288, v33);
        *(std::vector<unsigned int>::iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 320, v33);
        *(std::vector<unsigned int>::iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v39 = (char *)(v3 + 320);
          if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 288),
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 320)) )
          {
            v48 = 1;
            goto LABEL_80;
          }
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
          v40 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 288));
          v41 = (int *)v40;
          if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v40);
          }
          v42 = *v41;
          v43 = *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000);
          if ( v43 != 0 && v43 <= 3 )
          {
            LOBYTE(v39) = v43 != 0;
            __asan_report_store4(v3 + 128, v39);
          }
          *(_DWORD *)(v3 + 128) = v42;
          *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 80);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 1184),
            byte_1A9D7400,
            (const std::allocator<char> *)(v3 + 80));
          if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 128);
          v44 = data::enumValToStr((data::ElementReactionType)*(_DWORD *)(v3 + 128));
          v45 = std::operator==<char>(v44, (const std::string *)(v3 + 1184));
          std::string::~string((void *)(v3 + 1184));
          *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 80);
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( v45 )
            break;
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 288));
        }
        *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1248) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1248, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1248),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
          "checkMistTrialStatData",
          212);
        v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1248),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v47 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v46, (const char (*)[24])byte_1AA6DC60);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, (const unsigned int *)(v3 + 128));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1248));
        *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v48 = 0;
LABEL_80:
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
        v38 = v48 == 1;
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 480));
      v30 = v38;
    }
    else
    {
      *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 992, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 992),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
        "checkMistTrialStatData",
        199);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 992),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v29, (const char (*)[29])byte_1AA6DC20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
      *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v30 = 0;
    }
    v49 = ((v3 + 480) >> 3) + 2147450880;
    *(_WORD *)v49 = -1800;
    *(_BYTE *)(v49 + 2) = -8;
    if ( !v30 )
    {
      v8 = 0;
      goto LABEL_118;
    }
    goto LABEL_116;
  }
  if ( stat_name == 8 )
  {
    if ( std::vector<std::string>::size(&config->param) )
    {
      v52 = ((v3 + 544) >> 3) + 2147450880;
      *(_WORD *)v52 = 0;
      *(_BYTE *)(v52 + 2) = 0;
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 544));
      *(_DWORD *)(((v3 + 1376) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 1376),
        ",",
        (const std::allocator<char> *)(v3 + 96));
      v53 = std::vector<std::string>::operator[](&config->param, 0LL);
      v54 = (char *)(v3 + 1376);
      v55 = common::tools::StringUtils::splitToList<unsigned int>(
              v53,
              (const std::string *)(v3 + 1376),
              (std::vector<unsigned int> *)(v3 + 544),
              0) != 0;
      std::string::~string((void *)(v3 + 1376));
      *(_DWORD *)(((v3 + 1376) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 96);
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v55 )
      {
        *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1440) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1440, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1440),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
          "checkMistTrialStatData",
          228);
        v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1440),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v57 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v56,
                (const char (*)[21])"splitToList failed, ");
        v58 = std::vector<std::string>::operator[](&config->param, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v57, v58);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1440));
        *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v59 = 0;
      }
      else if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 544)) )
      {
        *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1504) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1504, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1504),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
          "checkMistTrialStatData",
          233);
        v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1504),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v60, (const char (*)[42])byte_1AA6DCE0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1504));
        *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v59 = 0;
      }
      else
      {
        __for_range_2 = (std::vector<unsigned int> *)(v3 + 544);
        *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 352, v54);
        *(std::vector<unsigned int>::iterator *)(v3 + 352) = std::vector<unsigned int>::begin(__for_range_2);
        *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 384, v54);
        *(std::vector<unsigned int>::iterator *)(v3 + 384) = std::vector<unsigned int>::end(__for_range_2);
        while ( 1 )
        {
          v61 = (char *)(v3 + 384);
          if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 352),
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 384)) )
          {
            v68 = 1;
            goto LABEL_112;
          }
          *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 4;
          v62 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 352));
          v63 = (int *)v62;
          if ( *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v62 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v62);
          }
          v64 = *v63;
          v65 = *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000);
          if ( v65 != 0 && v65 <= 3 )
          {
            LOBYTE(v61) = v65 != 0;
            __asan_report_store4(v3 + 144, v61);
          }
          *(_DWORD *)(v3 + 144) = v64;
          if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                  &txt_config_mgr->gadget_config_mgr,
                  *(unsigned int *)(v3 + 144)) )
            break;
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 352));
        }
        *(_DWORD *)(((v3 + 1568) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1568) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1599) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1599) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1568, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1568),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
          "checkMistTrialStatData",
          241);
        v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1568),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v67 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v66, (const char (*)[29])byte_1AA6DBE0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, (const unsigned int *)(v3 + 144));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1568));
        *(_DWORD *)(((v3 + 1568) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v68 = 0;
LABEL_112:
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
        v59 = v68 == 1;
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 544));
      v51 = v59;
    }
    else
    {
      *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1312) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1343) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1343) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1312, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1312),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
        "checkMistTrialStatData",
        222);
      v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1312),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v50, (const char (*)[24])byte_1AA6DCA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1312));
      *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v51 = 0;
    }
    v69 = ((v3 + 544) >> 3) + 2147450880;
    *(_WORD *)v69 = -1800;
    *(_BYTE *)(v69 + 2) = -8;
    if ( !v51 )
    {
      v8 = 0;
      goto LABEL_118;
    }
    goto LABEL_116;
  }
  if ( stat_name != 3 )
  {
    if ( stat_name == 5 )
    {
      if ( std::vector<std::string>::size(&config->param) )
      {
        v11 = ((v3 + 416) >> 3) + 2147450880;
        *(_WORD *)v11 = 0;
        *(_BYTE *)(v11 + 2) = 0;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 416));
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 48);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 736),
          ",",
          (const std::allocator<char> *)(v3 + 48));
        v12 = std::vector<std::string>::operator[](&config->param, 0LL);
        v13 = (char *)(v3 + 736);
        v14 = common::tools::StringUtils::splitToList<unsigned int>(
                v12,
                (const std::string *)(v3 + 736),
                (std::vector<unsigned int> *)(v3 + 416),
                0) != 0;
        std::string::~string((void *)(v3 + 736));
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 48);
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        if ( v14 )
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
            "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
            "checkMistTrialStatData",
            175);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 800),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v15,
                  (const char (*)[21])"splitToList failed, ");
          v17 = std::vector<std::string>::operator[](&config->param, 0LL);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, v17);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
          *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        else if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 416)) )
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
            "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
            "checkMistTrialStatData",
            180);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 864),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v19, (const char (*)[49])byte_1AA6DB40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
          *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        else
        {
          __for_range_0 = (std::vector<unsigned int> *)(v3 + 416);
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 224, v13);
          *(std::vector<unsigned int>::iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_0);
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 256, v13);
          *(std::vector<unsigned int>::iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_0);
          while ( 1 )
          {
            v20 = (char *)(v3 + 256);
            if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 224),
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 256)) )
            {
              v27 = 1;
              goto LABEL_50;
            }
            *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
            v21 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 224));
            v22 = (int *)v21;
            if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v21);
            }
            v23 = *v22;
            v24 = *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000);
            if ( v24 != 0 && v24 <= 3 )
            {
              LOBYTE(v20) = v24 != 0;
              __asan_report_store4(v3 + 112, v20);
            }
            *(_DWORD *)(v3 + 112) = v23;
            if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                    &txt_config_mgr->gadget_config_mgr,
                    *(unsigned int *)(v3 + 112)) )
              break;
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 224));
          }
          *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 928, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 928),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
            "checkMistTrialStatData",
            188);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 928),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v25, (const char (*)[29])byte_1AA6DBE0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 112));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
          *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v27 = 0;
LABEL_50:
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
          v18 = v27 == 1;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 416));
        v10 = v18;
      }
      else
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
          "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
          "checkMistTrialStatData",
          169);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 672),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v9, (const char (*)[49])byte_1AA6DB40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
        *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v10 = 0;
      }
      v28 = ((v3 + 416) >> 3) + 2147450880;
      *(_WORD *)v28 = -1800;
      *(_BYTE *)(v28 + 2) = -8;
      if ( !v10 )
      {
        v8 = 0;
        goto LABEL_118;
      }
    }
    goto LABEL_116;
  }
  if ( std::vector<std::string>::size(&config->param) )
    goto LABEL_116;
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
    "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
    "checkMistTrialStatData",
    160);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 608),
         (const char (*)[16])"[CONFIG_ERROR] ");
  common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v7, (const char (*)[54])byte_1AA6DAE0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
  v2 = -1;
  v8 = 0;
LABEL_118:
  if ( v8 == 1 )
    v2 = 0;
  if ( v78 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80C4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862742) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450960 - (((_DWORD)v5 + 2147450968) & 0xFFFFFFF8) + 124) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1632LL, v78);
  }
  return v2;
};

// Line 255: range 0000000012C8EB00-0000000012C8EB12
int32_t __cdecl ActivityMistTrialExcelConfigMgr::rewriteTrialCharacterData(
        ActivityMistTrialExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 260: range 0000000012C8EB14-0000000012C8FED7
int32_t __cdecl ActivityMistTrialExcelConfigMgr::rewriteMistTrialData(
        ActivityMistTrialExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // edx
  _BOOL4 v14; // eax
  unsigned int *p_dungeon_id; // rcx
  unsigned int *p_schedule_id; // rdx
  __int64 v17; // rsi
  unsigned int *v18; // rsi
  std::map<std::pair<unsigned int,unsigned int>,unsigned int> *p_schedule_dungeon_id_map; // rdx
  std::map<std::pair<unsigned int,unsigned int>,unsigned int> *v20; // rdx
  bool v21; // al
  common::milog::MiLogStream *v22; // rax
  std::vector<unsigned int>::value_type v23; // r15d
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::mapped_type *v24; // rax
  std::vector<unsigned int>::value_type *v25; // rdx
  char v26; // cl
  char *v27; // rsi
  char *v28; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v29; // rax
  int *v30; // rdx
  int v31; // ecx
  char v32; // al
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  int v35; // eax
  uint32_t schedule_id; // ecx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  TrialAvatarExcelConfigMgr *p_trial_avatar_config_mgr; // rcx
  __int64 trial_avatar_id; // rsi
  unsigned int *v47; // r8
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  uint32_t avatar_id; // ecx
  char v53; // al
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v54; // rax
  unsigned int *v55; // r8
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  int v60; // edx
  int v61; // eax
  data::ActivityMistTrialLevelDataExcelConfigMap *__for_range; // [rsp+28h] [rbp-388h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-380h]
  const std::vector<unsigned int>::value_type *id; // [rsp+38h] [rbp-378h]
  std::tuple_element<1,std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig> >::type *config; // [rsp+40h] [rbp-370h]
  std::map<unsigned int,std::vector<unsigned int>>::mapped_type *level_id_vec; // [rsp+48h] [rbp-368h]
  std::map<unsigned int,std::set<unsigned int>>::mapped_type *watcher_set; // [rsp+50h] [rbp-360h]
  std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-358h]
  data::ActivityMistTrialWatcherListDataExcelConfig *watcher_list_config_ptr; // [rsp+60h] [rbp-350h]
  std::vector<unsigned int> *__for_range_1; // [rsp+68h] [rbp-348h]
  data::ActivityMistTrialAvatarDataExcelConfig *mist_trial_avatar_config_ptr; // [rsp+70h] [rbp-340h]
  data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+78h] [rbp-338h]
  char v75[816]; // [rsp+80h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v75;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 48 4 19 watcher_list_id:266 64 4 24 mist_trial_avatar_id:285 80 4 13 avatar_id:305 96 8 15 __"
                        "for_begin:261 128 8 13 __for_end:261 160 8 15 __for_begin:266 192 8 13 __for_end:266 224 8 25 sc"
                        "hedule_dungeon_pair:277 256 8 9 <unknown> 288 8 9 <unknown> 320 8 15 __for_begin:285 352 8 13 __"
                        "for_end:285 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9"
                        " <unknown> 704 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMistTrialExcelConfigMgr::rewriteMistTrialData;
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
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -202116109;
  __for_range = &this->activity_mist_trial_level_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityMistTrialLevelDataExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityMistTrialLevelDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityMistTrialLevelDataExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ActivityMistTrialLevelDataExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false> *)(v3 + 128)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false,false> *const)(v3 + 96));
    id = std::get<0ul,unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>(__in);
    level_id_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                     &this->schedule_level_map,
                     &config->schedule_id);
    std::vector<unsigned int>::push_back(level_id_vec, id);
    watcher_set = std::map<unsigned int,std::set<unsigned int>>::operator[](&this->level_watcher_map, id);
    __for_range_0 = &config->challenge_mission_watcher_list;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, id);
    *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, id);
    *(std::vector<unsigned int>::iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v3 + 192);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 192)) )
      {
        v13 = 1;
        goto LABEL_26;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 160));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(v3 + 48, v6);
      }
      *(_DWORD *)(v3 + 48) = v9;
      watcher_list_config_ptr = data::ActivityMistTrialExcelConfigMgrBase::findActivityMistTrialWatcherListDataExcelConfig(
                                  this,
                                  *(unsigned int *)(v3 + 48));
      if ( !watcher_list_config_ptr )
        break;
      std::set<unsigned int>::insert(watcher_set, &watcher_list_config_ptr->challenge_watcher_id);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 160));
    }
    *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 384, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 384),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
      "rewriteMistTrialData",
      271);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 384),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v12 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            v11,
            (const char (*)[37])"watcher_list_config_ptr is null, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
    *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v13 = 0;
LABEL_26:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v13 == 1 )
    {
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      p_dungeon_id = &config->dungeon_id;
      p_schedule_id = &config->schedule_id;
      v17 = *(unsigned __int8 *)(((v3 + 224) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v17 )
        __asan_report_store8(v3 + 224, v17);
      v18 = p_dungeon_id;
      *(std::pair<unsigned int,unsigned int> *)(v3 + 224) = std::make_pair<unsigned int &,unsigned int &>(
                                                              p_schedule_id,
                                                              p_dungeon_id);
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      p_schedule_dungeon_id_map = &this->schedule_dungeon_id_map;
      if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 288, v18);
      *(std::map<std::pair<unsigned int,unsigned int>,unsigned int>::iterator *)(v3 + 288) = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::end(p_schedule_dungeon_id_map);
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      v20 = &this->schedule_dungeon_id_map;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v18);
      *(std::map<std::pair<unsigned int,unsigned int>,unsigned int>::iterator *)(v3 + 256) = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::find(
                                                                                               v20,
                                                                                               (const std::map<std::pair<unsigned int,unsigned int>,unsigned int>::key_type *)(v3 + 224));
      v21 = std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::_Self *)(v3 + 256),
              (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::_Self *)(v3 + 288));
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
      if ( v21 )
      {
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
          "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
          "rewriteMistTrialData",
          280);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
          v22,
          (const char (*)[50])"rewriteMistTrialData failed, pair already exists.");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
        *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(id);
        }
        v23 = *id;
        v27 = (char *)(v3 + 224);
        v24 = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::operator[](
                &this->schedule_dungeon_id_map,
                (const std::map<std::pair<unsigned int,unsigned int>,unsigned int>::key_type *)(v3 + 224));
        v25 = v24;
        v26 = *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000);
        LOBYTE(v27) = v26 != 0;
        if ( v26 != 0 && (char)(((unsigned __int8)v24 & 7) + 3) >= v26 )
          __asan_report_store4(v24, v27);
        *v25 = v23;
        __for_range_1 = &config->trial_avatar_id_list;
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 320, v27);
        *(std::vector<unsigned int>::iterator *)(v3 + 320) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 352, v27);
        *(std::vector<unsigned int>::iterator *)(v3 + 352) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v28 = (char *)(v3 + 352);
          if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 320),
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 352)) )
            break;
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          v29 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 320));
          v30 = (int *)v29;
          if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v29);
          }
          v31 = *v30;
          v32 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
          if ( v32 != 0 && v32 <= 3 )
          {
            LOBYTE(v28) = v32 != 0;
            __asan_report_store4(v3 + 64, v28);
          }
          *(_DWORD *)(v3 + 64) = v31;
          mist_trial_avatar_config_ptr = data::ActivityMistTrialExcelConfigMgrBase::findActivityMistTrialAvatarDataExcelConfig(
                                           this,
                                           *(unsigned int *)(v3 + 64));
          if ( mist_trial_avatar_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&mist_trial_avatar_config_ptr->schedule_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)mist_trial_avatar_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mist_trial_avatar_config_ptr->schedule_id >> 3)
                                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4(&mist_trial_avatar_config_ptr->schedule_id);
            }
            schedule_id = mist_trial_avatar_config_ptr->schedule_id;
            if ( *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&config->schedule_id);
            }
            if ( schedule_id == config->schedule_id )
            {
              p_trial_avatar_config_mgr = &txt_config_mgr->trial_avatar_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&mist_trial_avatar_config_ptr->trial_avatar_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&mist_trial_avatar_config_ptr->trial_avatar_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&mist_trial_avatar_config_ptr->trial_avatar_id);
              }
              trial_avatar_id = mist_trial_avatar_config_ptr->trial_avatar_id;
              trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                          p_trial_avatar_config_mgr,
                                          trial_avatar_id);
              if ( trial_avatar_config_ptr )
              {
                *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
                if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&trial_avatar_config_ptr->avatar.avatar_id);
                }
                avatar_id = trial_avatar_config_ptr->avatar.avatar_id;
                v53 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
                if ( v53 != 0 && v53 <= 3 )
                {
                  LOBYTE(trial_avatar_id) = v53 != 0;
                  __asan_report_store4(v3 + 80, trial_avatar_id);
                }
                *(_DWORD *)(v3 + 80) = avatar_id;
                v54 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
                        &config->mist_trial_avatar_id_map,
                        (unsigned int *)(v3 + 64),
                        (unsigned int *)(v3 + 80),
                        (unsigned int *)&config->mist_trial_avatar_id_map,
                        v47);
                if ( !v54.second )
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
                    "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
                    "rewriteMistTrialData",
                    308);
                  v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 704),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v57 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                          v56,
                          (const char (*)[32])"duplicate mist_trial_avatar_id:");
                  v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v57,
                          (const unsigned int *)(v3 + 64));
                  v59 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          v58,
                          (const char (*)[17])" trial_level_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
                  *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v35 = 0;
                }
                else
                {
                  std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
                    &config->avatar_id_map,
                    (unsigned int *)(v3 + 80),
                    (unsigned int *)(v3 + 64),
                    (unsigned int *)&config->avatar_id_map,
                    v55);
                  v35 = 1;
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
                  "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
                  "rewriteMistTrialData",
                  302);
                v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 640),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v49 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                        v48,
                        (const char (*)[57])"findTrialAvatarExcelConfig failed, mist_trial_avatar_id:");
                v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v49,
                        (const unsigned int *)(v3 + 64));
                v51 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v50,
                        (const char (*)[18])" trial_avatar_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v51,
                  &mist_trial_avatar_config_ptr->trial_avatar_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
                *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v35 = 0;
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
                "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
                "rewriteMistTrialData",
                295);
              v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 576),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v37,
                      (const char (*)[16])"trial_level_id:");
              v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, id);
              v40 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                      v39,
                      (const char (*)[23])" mist_trial_avatar_id:");
              v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v40,
                      (const unsigned int *)(v3 + 64));
              v42 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v41,
                      (const char (*)[17])" level_schedule:");
              v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &config->schedule_id);
              v44 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      v43,
                      (const char (*)[29])" trial_avatar's schedule_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v44,
                &mist_trial_avatar_config_ptr->schedule_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
              *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v35 = 0;
            }
          }
          else
          {
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
              "./src/txt_data_manual/ActivityMistTrialExcelConfig.cpp",
              "rewriteMistTrialData",
              290);
            v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 512),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v34 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                    v33,
                    (const char (*)[57])"mist_trial_avatar_config_ptr null, mist_trial_avatar_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
            *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v35 = 0;
          }
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( v35 != 1 )
          {
            v60 = 0;
            goto LABEL_83;
          }
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 320));
        }
        v60 = 1;
LABEL_83:
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
        v14 = v60 == 1;
      }
    }
    else
    {
      v14 = 0;
    }
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( !v14 )
    {
      v61 = 0;
      goto LABEL_88;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false,false> *const)(v3 + 96));
  }
  v61 = 1;
LABEL_88:
  if ( v61 == 1 )
    v2 = 0;
  if ( v75 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
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
  }
  return v2;
};

// Line 318: range 0000000012C8FED8-0000000012C900ED
int32_t __cdecl ActivityMistTrialExcelConfigMgr::rewriteMistStatisticData(
        ActivityMistTrialExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::ActivityMistTrialLevelDataExcelConfigMap *__for_range; // [rsp+18h] [rbp-A8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false,false>::reference v7; // [rsp+20h] [rbp-A0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig> >::type *id; // [rsp+28h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig> >::type *config; // [rsp+30h] [rbp-90h]
  std::map<unsigned int,std::vector<unsigned int>>::mapped_type *stat_id_vec; // [rsp+38h] [rbp-88h]
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:319 64 8 13 __for_end:319";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false>::__node_type *)ActivityMistTrialExcelConfigMgr::rewriteMistStatisticData;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->activity_mist_trial_level_data_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ActivityMistTrialLevelDataExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ActivityMistTrialLevelDataExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false,false>::operator*(v2 + 4);
    id = std::get<0ul,unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>(v7);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>(v7);
    stat_id_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                    &this->schedule_stat_map,
                    &config->schedule_id);
    std::vector<unsigned int>::push_back(stat_id_vec, id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialLevelDataExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 328: range 0000000012C900EE-0000000012C90303
int32_t __cdecl ActivityMistTrialExcelConfigMgr::rewriteMistTrialWatcherListData(
        ActivityMistTrialExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::ActivityMistTrialWatcherListDataExcelConfigMap *__for_range; // [rsp+18h] [rbp-A8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false,false>::reference v7; // [rsp+20h] [rbp-A0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig> >::type *id; // [rsp+28h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig> >::type *config; // [rsp+30h] [rbp-90h]
  std::map<unsigned int,std::set<unsigned int>>::mapped_type *watcher_id_set; // [rsp+38h] [rbp-88h]
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:329 64 8 13 __for_end:329";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false>::__node_type *)ActivityMistTrialExcelConfigMgr::rewriteMistTrialWatcherListData;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->activity_mist_trial_watcher_list_data_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ActivityMistTrialWatcherListDataExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ActivityMistTrialWatcherListDataExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false,false>::operator*(v2 + 4);
    id = std::get<0ul,unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>(v7);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>(v7);
    watcher_id_set = std::map<unsigned int,std::set<unsigned int>>::operator[](
                       &this->schedule_watcher_map,
                       &config->schedule_id);
    std::set<unsigned int>::insert(watcher_id_set, id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityMistTrialWatcherListDataExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 338: range 0000000012C90304-0000000012C904C5
const std::vector<unsigned int> *__fastcall ActivityMistTrialExcelConfigMgr::findTrialLevelIdVecByScheduleId(
        const ActivityMistTrialExcelConfigMgr *const this,
        __int64 schedule_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::vector<unsigned int>> *p_schedule_level_map; // rdx
  std::map<unsigned int,std::vector<unsigned int>> *v6; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 15 schedule_id:337 64 8 8 iter:339 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMistTrialExcelConfigMgr::findTrialLevelIdVecByScheduleId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = schedule_id;
  p_schedule_level_map = &this->schedule_level_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, schedule_id);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                                     p_schedule_level_map,
                                                                                     (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->schedule_level_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 64))->second;
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

// Line 348: range 0000000012C904C6-0000000012C90687
const std::vector<unsigned int> *__fastcall ActivityMistTrialExcelConfigMgr::findTrialStatisticIdVecByScheduleId(
        const ActivityMistTrialExcelConfigMgr *const this,
        __int64 schedule_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::vector<unsigned int>> *p_schedule_stat_map; // rdx
  std::map<unsigned int,std::vector<unsigned int>> *v6; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 15 schedule_id:347 64 8 8 iter:349 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMistTrialExcelConfigMgr::findTrialStatisticIdVecByScheduleId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = schedule_id;
  p_schedule_stat_map = &this->schedule_stat_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, schedule_id);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                                     p_schedule_stat_map,
                                                                                     (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->schedule_stat_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 64))->second;
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

// Line 358: range 0000000012C90688-0000000012C90868
bool __fastcall ActivityMistTrialExcelConfigMgr::isContainsWatcher(
        const ActivityMistTrialExcelConfigMgr *const this,
        __int64 schedule_id,
        uint32_t watcher_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,std::set<unsigned int>> *p_schedule_watcher_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool v8; // al
  bool result; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::pointer v10; // rax
  char v12[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 15 schedule_id:357 48 4 14 watcher_id:357 64 8 17 schedule_iter:359 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMistTrialExcelConfigMgr::isContainsWatcher;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = schedule_id;
  *(_DWORD *)(v3 + 48) = watcher_id;
  p_schedule_watcher_map = &this->schedule_watcher_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, schedule_id);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_schedule_watcher_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->schedule_watcher_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 64));
    result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
               &v10->second,
               (const unsigned int *)(v3 + 48));
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

// Line 368: range 0000000012C9086A-0000000012C90A2B
const std::set<unsigned int> *__fastcall ActivityMistTrialExcelConfigMgr::findWatcherIdSetByLevelId(
        const ActivityMistTrialExcelConfigMgr *const this,
        __int64 level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::set<unsigned int>> *p_level_watcher_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 level_id:367 64 8 8 iter:369 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMistTrialExcelConfigMgr::findWatcherIdSetByLevelId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  p_level_watcher_map = &this->level_watcher_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_level_watcher_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->level_watcher_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v2 + 64))->second;
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

// Line 378: range 0000000012C90A2C-0000000012C90C97
__int64 __fastcall ActivityMistTrialExcelConfigMgr::findLevelIdByScheduleIdAndDungeonId(
        const ActivityMistTrialExcelConfigMgr *const this,
        __int64 schedule_id,
        uint32_t dungeon_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<std::pair<unsigned int,unsigned int>,unsigned int> *p_schedule_dungeon_id_map; // rdx
  std::map<std::pair<unsigned int,unsigned int>,unsigned int> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::pointer v10; // rdx
  unsigned int *p_second; // rax
  char v13[192]; // [rsp+10h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 15 schedule_id:377 48 4 14 dungeon_id:377 64 8 25 schedule_dungeon_pair:379 96 8 8 iter:3"
                        "80 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMistTrialExcelConfigMgr::findLevelIdByScheduleIdAndDungeonId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 32) = schedule_id;
  *(_DWORD *)(v3 + 48) = dungeon_id;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, schedule_id);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 64) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v3 + 32),
                                                         (unsigned int *)(v3 + 48));
  p_schedule_dungeon_id_map = &this->schedule_dungeon_id_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<std::pair<unsigned int,unsigned int>,unsigned int>::const_iterator *)(v3 + 96) = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::find(
                                                                                                p_schedule_dungeon_id_map,
                                                                                                (const std::map<std::pair<unsigned int,unsigned int>,unsigned int>::key_type *)(v3 + 64));
  v7 = &this->schedule_dungeon_id_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v3 + 64);
  *(std::map<std::pair<unsigned int,unsigned int>,unsigned int>::const_iterator *)(v3 + 128) = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::_Self *)(v3 + 96),
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::_Self *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > *const)(v3 + 96));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v10->second;
  }
  if ( v13 == (char *)v3 )
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
