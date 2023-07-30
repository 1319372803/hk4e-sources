// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp

// Line 19: range 0000000012C79EFE-0000000012C7A998
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::checkConfig(
        ActivityMichiaeMatsuriExcelConfigMgr *const this,
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
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  char v14[576]; // [rsp+10h] [rbp-240h] BYREF

  v2 = (common::milog::MiLogStream *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"8 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityMichiaeMatsuriExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -202116109;
  if ( ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriOverallConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "checkConfig",
      22);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
      v5,
      (const char (*)[56])"[Michiae_Matsuri] checkMichiaeMatsuriOverallConfig fail");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriStageConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "checkConfig",
      27);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      v7,
      (const char (*)[54])"[Michiae_Matsuri] checkMichiaeMatsuriStageConfig fail");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriAntiErosionConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "checkConfig",
      32);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      v8,
      (const char (*)[60])"[Michiae_Matsuri] checkMichiaeMatsuriAntiErosionConfig fail");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriErosionAreaConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "checkConfig",
      37);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      v9,
      (const char (*)[60])"[Michiae_Matsuri] checkMichiaeMatsuriErosionAreaConfig fail");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriBattleSkillConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[9], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "checkConfig",
      42);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      v10,
      (const char (*)[60])"[Michiae_Matsuri] checkMichiaeMatsuriBattleSkillConfig fail");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriBossChallengeConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[11] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[11].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[11].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[11], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "checkConfig",
      47);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
      v11,
      (const char (*)[62])"[Michiae_Matsuri] checkMichiaeMatsuriBossChallengeConfig fail");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else if ( ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriDarkChallengeConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[13] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[13], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "checkConfig",
      52);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
      v12,
      (const char (*)[62])"[Michiae_Matsuri] checkMichiaeMatsuriDarkChallengeConfig fail");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    result = -1;
  }
  else if ( ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriRadarPosMarkGadgetConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[15] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[15].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[15].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[15], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "checkConfig",
      57);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 15,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
      v13,
      (const char (*)[67])"[Michiae_Matsuri] checkMichiaeMatsuriRadarPosMarkGadgetConfig fail");
    common::milog::MiLogStream::~MiLogStream(v2 + 15);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v14 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 64: range 0000000012C7A99A-0000000012C7B08A
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::rewriteConfig(
        ActivityMichiaeMatsuriExcelConfigMgr *const this,
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
  common::milog::MiLogStream *v10; // rax
  char v11[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (common::milog::MiLogStream *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"5 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityMichiaeMatsuriExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  if ( ActivityMichiaeMatsuriExcelConfigMgr::rewriteMichiaeMatsuriOverallConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "rewriteConfig",
      67);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
      v5,
      (const char (*)[58])"[Michiae_Matsuri] rewriteMichiaeMatsuriOverallConfig fail");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityMichiaeMatsuriExcelConfigMgr::rewriteDarkChallengeConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "rewriteConfig",
      72);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      v7,
      (const char (*)[50])"[Michiae_Matsuri] rewriteDarkChallengeConfig fail");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityMichiaeMatsuriExcelConfigMgr::rewriteBattleSkillConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "rewriteConfig",
      77);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      v8,
      (const char (*)[48])"[Michiae_Matsuri] rewriteBattleSkillConfig fail");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityMichiaeMatsuriExcelConfigMgr::rewriteBossChallengeConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 1) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "rewriteConfig",
      82);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      v9,
      (const char (*)[50])"[Michiae_Matsuri] rewriteBossChallengeConfig fail");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( ActivityMichiaeMatsuriExcelConfigMgr::rewriteChestAndChallengeRadarMarkPositionConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[9], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "rewriteConfig",
      87);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
      v10,
      (const char (*)[71])"[Michiae_Matsuri] rewriteChestAndChallengeRadarMarkPositionConfig fail");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v11 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 94: range 0000000012C7B08C-0000000012C7B3EF
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::rewriteMichiaeMatsuriOverallConfig(
        ActivityMichiaeMatsuriExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::MichiaeOverallExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::MichiaeOverallExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeOverallExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:95 64 8 12 __for_end:95 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::rewriteMichiaeMatsuriOverallConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->michiae_overall_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeOverallExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::MichiaeOverallExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeOverallExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MichiaeOverallExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::MichiaeOverallExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeOverallExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MichiaeOverallExcelConfig>(v14);
    v7 = std::map<unsigned int,data::MichiaeOverallExcelConfig>::emplace<unsigned int const&,data::MichiaeOverallExcelConfig const&>(
           &this->michiae_preview_config_map_,
           &excel_config->activity_id,
           excel_config,
           (const unsigned int *)&this->michiae_preview_config_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
    "rewriteMichiaeMatsuriOverallConfig",
    99);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v8, (const char (*)[45])byte_1AA69820);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->activity_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])byte_1AA1BDC0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_16:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 107: range 0000000012C7B3F0-0000000012C7B753
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::rewriteDarkChallengeConfig(
        ActivityMichiaeMatsuriExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::MichiaeDarkChallengeExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::MichiaeDarkChallengeExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:108 64 8 13 __for_end:108 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::rewriteDarkChallengeConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->michiae_dark_challenge_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeDarkChallengeExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::MichiaeDarkChallengeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeDarkChallengeExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MichiaeDarkChallengeExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::MichiaeDarkChallengeExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MichiaeDarkChallengeExcelConfig>(v14);
    v7 = std::map<unsigned int,data::MichiaeDarkChallengeExcelConfig>::emplace<unsigned int const&,data::MichiaeDarkChallengeExcelConfig const&>(
           &this->michiae_dark_challenge_config_map_,
           &excel_config->group_id,
           excel_config,
           (const unsigned int *)&this->michiae_dark_challenge_config_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
    "rewriteDarkChallengeConfig",
    112);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         v8,
         (const char (*)[44])"[Michiae_Matsuri] dark challenge group_id: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->group_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])byte_1AA1BDC0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_16:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 120: range 0000000012C7B754-0000000012C7BAB5
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::rewriteBattleSkillConfig(
        ActivityMichiaeMatsuriExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::MichiaeBattleSkillExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::MichiaeBattleSkillExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:121 64 8 13 __for_end:121 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::rewriteBattleSkillConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->michiae_battle_skill_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeBattleSkillExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::MichiaeBattleSkillExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeBattleSkillExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MichiaeBattleSkillExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::MichiaeBattleSkillExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MichiaeBattleSkillExcelConfig>(v14);
    v7 = std::map<unsigned int,data::MichiaeBattleSkillExcelConfig>::emplace<unsigned int const&,data::MichiaeBattleSkillExcelConfig const&>(
           &this->michiae_battle_skill_config_map_,
           &excel_config->skill_id,
           excel_config,
           (const unsigned int *)&this->michiae_battle_skill_config_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
    "rewriteBattleSkillConfig",
    125);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         v8,
         (const char (*)[42])"[Michiae_Matsuri] battle skill skill_id: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->skill_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])byte_1AA1BDC0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_16:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 133: range 0000000012C7BAB6-0000000012C7BE19
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::rewriteBossChallengeConfig(
        ActivityMichiaeMatsuriExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::MichiaeBossChallengeExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::MichiaeBossChallengeExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:134 64 8 13 __for_end:134 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::rewriteBossChallengeConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->michiae_boss_challenge_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeBossChallengeExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::MichiaeBossChallengeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeBossChallengeExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MichiaeBossChallengeExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::MichiaeBossChallengeExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MichiaeBossChallengeExcelConfig>(v14);
    v7 = std::map<unsigned int,data::MichiaeBossChallengeExcelConfig>::emplace<unsigned int const&,data::MichiaeBossChallengeExcelConfig const&>(
           &this->michiae_boss_challenge_config_map_,
           &excel_config->level_id,
           excel_config,
           (const unsigned int *)&this->michiae_boss_challenge_config_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
    "rewriteBossChallengeConfig",
    138);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         v8,
         (const char (*)[44])"[Michiae_Matsuri] boss challenge level_id: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->level_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])byte_1AA1BDC0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_16:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 146: range 0000000012C7BE1A-0000000012C7D17F
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::rewriteChestAndChallengeRadarMarkPositionConfig(
        ActivityMichiaeMatsuriExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  const unsigned int *M_current; // r15
  const unsigned int *v8; // rsi
  uint32_t *p_activity_scene_id; // rax
  HK4EDesignConfig *Config; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  unsigned __int64 v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  common::milog::MiLogStream *v16; // r15
  std::map<std::pair<unsigned int,unsigned int>,Vector3>::size_type v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::map<std::pair<unsigned int,unsigned int>,Vector3> *v20; // r15
  std::map<std::pair<unsigned int,unsigned int>,Vector3> *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // r15d
  common::milog::MiLogStream *v26; // r15
  std::map<unsigned int,std::pair<Vector3,unsigned int>>::size_type v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::map<unsigned int,std::pair<Vector3,unsigned int>> *v30; // r15
  std::map<unsigned int,std::pair<Vector3,unsigned int>> *v31; // rax
  unsigned __int64 v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rax
  _BOOL4 v37; // r15d
  unsigned __int64 v38; // rax
  int v39; // eax
  uint32_t scene_id; // [rsp+24h] [rbp-43Ch]
  data::MichiaeRadarExcelConfigMap *__for_range; // [rsp+28h] [rbp-438h]
  std::__detail::_Node_iterator<std::pair<const data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>,false,false>::reference v44; // [rsp+30h] [rbp-430h]
  std::tuple_element<0,std::pair<const data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig> >::type *type; // [rsp+38h] [rbp-428h]
  std::tuple_element<1,const std::pair<const data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig> >::type *excel_config; // [rsp+40h] [rbp-420h]
  std::map<unsigned int,data::MichiaeOverallExcelConfig> *__for_range_0; // [rsp+48h] [rbp-418h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig> >::reference v48; // [rsp+50h] [rbp-410h]
  std::tuple_element<0,std::pair<unsigned int const,data::MichiaeOverallExcelConfig> >::type *activity_id; // [rsp+58h] [rbp-408h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeOverallExcelConfig> >::type *preview_config; // [rsp+60h] [rbp-400h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+68h] [rbp-3F8h]
  char v52[1008]; // [rsp+70h] [rbp-3F0h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(960LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "19 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 8 15 __for_begin:147 128 8 13 __for_end"
                        ":147 160 8 15 __for_begin:150 192 8 13 __for_end:150 224 8 9 <unknown> 256 8 9 <unknown> 288 8 9"
                        " <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 "
                        "<unknown> 640 32 9 <unknown> 704 48 13 chest_map:166 784 48 17 challenge_map:181 864 56 17 gadget_id_set:149";
  *(_QWORD *)(v3 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::rewriteChestAndChallengeRadarMarkPositionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234753535;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -219021312;
  v5[536862744] = 62194;
  v5[536862746] = -218959118;
  v5[536862748] = -218103808;
  v5[536862749] = -202116109;
  __for_range = &this->michiae_radar_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<data::MichiaeMatsuriRadarMarkType const,data::MichiaeRadarExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<const data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>,false> *)(v3 + 128)) )
  {
    v44 = std::__detail::_Node_iterator<std::pair<data::MichiaeMatsuriRadarMarkType const,data::MichiaeRadarExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>,false,false> *const)(v3 + 96));
    type = std::get<0ul,data::MichiaeMatsuriRadarMarkType const,data::MichiaeRadarExcelConfig>(v44);
    excel_config = (std::tuple_element<1,const std::pair<const data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig> >::type *)std::get<1ul,data::MichiaeMatsuriRadarMarkType const,data::MichiaeRadarExcelConfig>(v44);
    v6 = ((v3 + 864) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_WORD *)(v6 + 4) = 0;
    *(_BYTE *)(v6 + 6) = 0;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 80));
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
    M_current = std::vector<unsigned int>::end(&excel_config->gadget_id_list)._M_current;
    v8 = std::vector<unsigned int>::begin(&excel_config->gadget_id_list)._M_current;
    std::unordered_set<unsigned int>::unordered_set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      (std::unordered_set<unsigned int> *const)(v3 + 864),
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v8,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
      0LL,
      (const std::unordered_set<unsigned int>::hasher *)(v3 + 48),
      (const std::unordered_set<unsigned int>::key_equal *)(v3 + 64),
      (const std::unordered_set<unsigned int>::allocator_type *)(v3 + 80));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 80));
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    __for_range_0 = &this->michiae_preview_config_map_;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    *(std::map<unsigned int,data::MichiaeOverallExcelConfig>::iterator *)(v3 + 160) = std::map<unsigned int,data::MichiaeOverallExcelConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v8);
    *(std::map<unsigned int,data::MichiaeOverallExcelConfig>::iterator *)(v3 + 192) = std::map<unsigned int,data::MichiaeOverallExcelConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig> >::_Self *)(v3 + 160),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig> >::_Self *)(v3 + 192)) )
      {
        v12 = 1;
        goto LABEL_58;
      }
      v48 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig> > *const)(v3 + 160));
      activity_id = std::get<0ul,unsigned int const,data::MichiaeOverallExcelConfig>(v48);
      preview_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeOverallExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MichiaeOverallExcelConfig>(v48);
      p_activity_scene_id = &preview_config->activity_scene_id;
      if ( *(_BYTE *)(((unsigned __int64)p_activity_scene_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_activity_scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_scene_id >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(p_activity_scene_id);
      }
      scene_id = preview_config->activity_scene_id;
      Config = TxtConfigMgr::getConfig(txt_config_mgr);
      scene_script_config_ptr = LuaConfigMgr::findSceneScriptConfig(&Config->lua_config_mgr, scene_id);
      if ( !scene_script_config_ptr )
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
          "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
          "rewriteChestAndChallengeRadarMarkPositionConfig",
          157);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [109],(char *[109])0>(
          v11,
          (const char (*)[109])"[Michiae_Matsuri] rewriteChestAndChallengeRadarMarkPositionConfig failed, scene_script_co"
                               "nfig_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
        goto LABEL_58;
      }
      if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(type);
      }
      if ( *type == MICHIAE_MATSURI_RADAR_MARK_TYPE_CHEST )
      {
        v13 = ((v3 + 704) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_WORD *)(v13 + 4) = 0;
        std::map<std::pair<unsigned int,unsigned int>,Vector3>::map((std::map<std::pair<unsigned int,unsigned int>,Vector3> *const)(v3 + 704));
        if ( ActivityMichiaeMatsuriExcelConfigMgr::getChestPostionFromSceneScript(
               this,
               scene_script_config_ptr,
               (const std::unordered_set<unsigned int> *)(v3 + 864),
               (MichiaeChestGroupConfigToPosMap *)(v3 + 704)) )
        {
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
            "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
            "rewriteChestAndChallengeRadarMarkPositionConfig",
            170);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            v14,
            (const char (*)[54])"[Michiae_Matsuri] getChestPostionFromSceneScript fail");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
          *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        else
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
            1u,
            "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
            "rewriteChestAndChallengeRadarMarkPositionConfig",
            173);
          v16 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[42])"[Michiae Matsuri] number of radar chest: ");
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          v17 = std::map<std::pair<unsigned int,unsigned int>,Vector3>::size((const std::map<std::pair<unsigned int,unsigned int>,Vector3> *const)(v3 + 704));
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            v17 = __asan_report_store8(v3 + 224, "[Michiae Matsuri] number of radar chest: ");
          *(_QWORD *)(v3 + 224) = v17;
          v18 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v16,
                  (const unsigned __int64 *)(v3 + 224));
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v18,
                  (const char (*)[16])", activity id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, activity_id);
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v20 = std::move<std::map<std::pair<unsigned int,unsigned int>,Vector3> &>((std::map<std::pair<unsigned int,unsigned int>,Vector3> *)(v3 + 704));
          v21 = std::map<unsigned int,std::map<std::pair<unsigned int,unsigned int>,Vector3>>::operator[](
                  &this->michiae_chest_group_config_to_pos_map_,
                  activity_id);
          std::map<std::pair<unsigned int,unsigned int>,Vector3>::operator=(v21, v20);
          v15 = 1;
        }
        std::map<std::pair<unsigned int,unsigned int>,Vector3>::~map((std::map<std::pair<unsigned int,unsigned int>,Vector3> *const)(v3 + 704));
        v22 = ((v3 + 704) >> 3) + 2147450880;
        *(_DWORD *)v22 = -117901064;
        *(_WORD *)(v22 + 4) = -1800;
        if ( !v15 )
        {
          v12 = 0;
          goto LABEL_58;
        }
        goto LABEL_56;
      }
      if ( *type != MICHIAE_MATSURI_RADAR_MARK_TYPE_CHALLENGE )
        break;
      v23 = ((v3 + 784) >> 3) + 2147450880;
      *(_DWORD *)v23 = 0;
      *(_WORD *)(v23 + 4) = 0;
      std::map<unsigned int,std::pair<Vector3,unsigned int>>::map((std::map<unsigned int,std::pair<Vector3,unsigned int>> *const)(v3 + 784));
      if ( ActivityMichiaeMatsuriExcelConfigMgr::getChallengePostionFromSceneScript(
             this,
             scene_script_config_ptr,
             (const std::unordered_set<unsigned int> *)(v3 + 864),
             (MichiaeChallengeGroupToPosMap *)(v3 + 784)) )
      {
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
          "rewriteChestAndChallengeRadarMarkPositionConfig",
          184);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
          v24,
          (const char (*)[58])"[Michiae_Matsuri] getChallengePostionFromSceneScript fail");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v25 = 0;
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
          1u,
          "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
          "rewriteChestAndChallengeRadarMarkPositionConfig",
          187);
        v26 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                (common::milog::MiLogStream *const)(v3 + 576),
                (const char (*)[46])"[Michiae Matsuri] number of radar challenge: ");
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        v27 = std::map<unsigned int,std::pair<Vector3,unsigned int>>::size((const std::map<unsigned int,std::pair<Vector3,unsigned int>> *const)(v3 + 784));
        if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
          v27 = __asan_report_store8(v3 + 256, "[Michiae Matsuri] number of radar challenge: ");
        *(_QWORD *)(v3 + 256) = v27;
        v28 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v26,
                (const unsigned __int64 *)(v3 + 256));
        v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v28,
                (const char (*)[16])", activity id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, activity_id);
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
        *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
        v30 = std::move<std::map<unsigned int,std::pair<Vector3,unsigned int>> &>((std::map<unsigned int,std::pair<Vector3,unsigned int>> *)(v3 + 784));
        v31 = std::map<unsigned int,std::map<unsigned int,std::pair<Vector3,unsigned int>>>::operator[](
                &this->michiae_challenge_group_to_pos_map_,
                activity_id);
        std::map<unsigned int,std::pair<Vector3,unsigned int>>::operator=(v31, v30);
        v25 = 1;
      }
      std::map<unsigned int,std::pair<Vector3,unsigned int>>::~map((std::map<unsigned int,std::pair<Vector3,unsigned int>> *const)(v3 + 784));
      v32 = ((v3 + 784) >> 3) + 2147450880;
      *(_DWORD *)v32 = -117901064;
      *(_WORD *)(v32 + 4) = -1800;
      if ( !v25 )
      {
        v12 = 0;
        goto LABEL_58;
      }
LABEL_56:
      std::_Rb_tree_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig> > *const)(v3 + 160));
    }
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
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "rewriteChestAndChallengeRadarMarkPositionConfig",
      194);
    v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 640),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v34 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            v33,
            (const char (*)[37])"[Michiae_Matsuri] wrong radar type: ");
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    v35 = ((unsigned __int8)type & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(type);
    }
    v36 = (__int64)data::enumValToStr(*type, v35);
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      v36 = __asan_report_store8(v3 + 288, v35);
    *(_QWORD *)(v3 + 288) = v36;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v34, (const char *const *)(v3 + 288));
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
    *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v12 = 0;
LABEL_58:
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    v37 = v12 == 1;
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 864));
    v38 = ((v3 + 864) >> 3) + 2147450880;
    *(_DWORD *)v38 = -117901064;
    *(_WORD *)(v38 + 4) = -1800;
    *(_BYTE *)(v38 + 6) = -8;
    if ( !v37 )
    {
      v39 = 0;
      goto LABEL_62;
    }
    std::__detail::_Node_iterator<std::pair<data::MichiaeMatsuriRadarMarkType const,data::MichiaeRadarExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>,false,false> *const)(v3 + 96));
  }
  v39 = 1;
LABEL_62:
  if ( v39 == 1 )
    v2 = 0;
  if ( v52 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v2;
};

// Line 204: range 0000000012C7D180-0000000012C7D796
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::getChestPostionFromSceneScript(
        const ActivityMichiaeMatsuriExcelConfigMgr *const this,
        const SceneScriptConfig *scene_script_config_ptr,
        const std::unordered_set<unsigned int> *gadget_id_set,
        MichiaeChestGroupConfigToPosMap *chest_map)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  char *v9; // rsi
  unsigned __int64 n; // rax
  std::unordered_map<unsigned int,GroupScriptConfig> *__for_range; // [rsp+20h] [rbp-160h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false>::reference v14; // [rsp+28h] [rbp-158h]
  std::tuple_element<0,std::pair<unsigned int const,GroupScriptConfig> >::type *group_id; // [rsp+30h] [rbp-150h]
  std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_0; // [rsp+40h] [rbp-140h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::reference v17; // [rsp+48h] [rbp-138h]
  std::tuple_element<0,std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id; // [rsp+50h] [rbp-130h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *gadget_script_config; // [rsp+58h] [rbp-128h]
  char v20[288]; // [rsp+60h] [rbp-120h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 8 15 __for_begin:211 64 8 13 __for_end:211 96 8 15 __for_begin:214 128 8 13 __for_end:214 1"
                        "60 8 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::getChestPostionFromSceneScript;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862727] = -202116109;
  if ( scene_script_config_ptr )
  {
    __for_range = &scene_script_config_ptr->group_config_map;
    if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 32, scene_script_config_ptr);
    *(std::unordered_map<unsigned int,GroupScriptConfig>::const_iterator *)(v4 + 32) = std::unordered_map<unsigned int,GroupScriptConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 64, scene_script_config_ptr);
    *(std::unordered_map<unsigned int,GroupScriptConfig>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,GroupScriptConfig>::end(__for_range);
    while ( 1 )
    {
      v9 = (char *)(v4 + 64);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,GroupScriptConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupScriptConfig>,false> *)(v4 + 32),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupScriptConfig>,false> *)(v4 + 64)) )
        break;
      v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false> *const)(v4 + 32));
      group_id = std::get<0ul,unsigned int const,GroupScriptConfig>(v14);
      __for_range_0 = &std::get<1ul,unsigned int const,GroupScriptConfig>(v14)->gadget_config_map;
      *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 96, v9);
      *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(__for_range_0);
      *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 128, v9);
      *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v4 + 128) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_0);
      while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v4 + 96),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v4 + 128)) )
      {
        v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v4 + 96));
        config_id = std::get<0ul,unsigned int const,GadgetScriptConfig>(v17);
        gadget_script_config = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v17);
        if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
               gadget_id_set,
               &gadget_script_config->gadget_id) )
        {
          *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
          std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(
            (std::pair<unsigned int,unsigned int> *const)(v4 + 160),
            group_id,
            config_id);
          n = (unsigned __int64)std::map<std::pair<unsigned int,unsigned int>,Vector3>::operator[](
                                  chest_map,
                                  (std::map<std::pair<unsigned int,unsigned int>,Vector3>::key_type *)(v4 + 160));
          if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(n, 12LL);
          }
          if ( (((unsigned __int8)gadget_script_config + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config->pos >> 3)
                                                                              + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&gadget_script_config->pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&gadget_script_config->pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)gadget_script_config + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&gadget_script_config->pos.z
                                                                                + 3) >> 3)
                                                                              + 0x7FFF8000) )
          {
            n = __asan_report_load_n(&gadget_script_config->pos, 12LL);
          }
          *(_QWORD *)n = *(_QWORD *)&gadget_script_config->pos.x;
          *(float *)(n + 8) = gadget_script_config->pos.z;
          *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
        }
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v4 + 96));
      }
      *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false> *const)(v4 + 32));
    }
    result = 0;
  }
  else
  {
    if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "getChestPostionFromSceneScript",
      207);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [92],(char *[92])0>(
      v7,
      (const char (*)[92])"[Michiae_Matsuri] getChestPostionFromSceneScript failed, scene_script_config_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
    result = -1;
  }
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 227: range 0000000012C7D798-0000000012C7DFA9
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::getChallengePostionFromSceneScript(
        const ActivityMichiaeMatsuriExcelConfigMgr *const this,
        const SceneScriptConfig *scene_script_config_ptr,
        const std::unordered_set<unsigned int> *gadget_id_set,
        MichiaeChallengeGroupToPosMap *challenge_map)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  char *v9; // rsi
  uint32_t *p_gadget_id; // rsi
  bool v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int v17; // edx
  std::map<unsigned int,std::pair<Vector3,unsigned int>>::mapped_type *v18; // rax
  int v19; // eax
  int32_t result; // eax
  std::unordered_map<unsigned int,GroupScriptConfig> *__for_range; // [rsp+20h] [rbp-1F0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false>::reference v24; // [rsp+28h] [rbp-1E8h]
  std::tuple_element<0,std::pair<unsigned int const,GroupScriptConfig> >::type *group_id; // [rsp+30h] [rbp-1E0h]
  std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_0; // [rsp+40h] [rbp-1D0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::reference v27; // [rsp+48h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id; // [rsp+50h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *gadget_script_config; // [rsp+58h] [rbp-1B8h]
  char v30[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(384LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "9 32 8 15 __for_begin:234 64 8 13 __for_end:234 96 8 15 __for_begin:237 128 8 13 __for_end:237 1"
                        "60 8 9 <unknown> 192 8 9 <unknown> 224 16 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::getChallengePostionFromSceneScript;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -219021312;
  v7[536862729] = -218959118;
  v7[536862731] = -202116109;
  if ( !scene_script_config_ptr )
  {
    if ( *(char *)(((v5 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 31) & 7) >= *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "getChallengePostionFromSceneScript",
      230);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v5 + 256),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [96],(char *[96])0>(
      v8,
      (const char (*)[96])"[Michiae_Matsuri] getChallengePostionFromSceneScript failed, scene_script_config_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 256));
    v4 = -1;
    goto LABEL_38;
  }
  __for_range = &scene_script_config_ptr->group_config_map;
  if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 32, scene_script_config_ptr);
  *(std::unordered_map<unsigned int,GroupScriptConfig>::const_iterator *)(v5 + 32) = std::unordered_map<unsigned int,GroupScriptConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, scene_script_config_ptr);
  *(std::unordered_map<unsigned int,GroupScriptConfig>::const_iterator *)(v5 + 64) = std::unordered_map<unsigned int,GroupScriptConfig>::end(__for_range);
  while ( 2 )
  {
    v9 = (char *)(v5 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,GroupScriptConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupScriptConfig>,false> *)(v5 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupScriptConfig>,false> *)(v5 + 64)) )
    {
      v19 = 1;
      goto LABEL_36;
    }
    v24 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false> *const)(v5 + 32));
    group_id = std::get<0ul,unsigned int const,GroupScriptConfig>(v24);
    __for_range_0 = &std::get<1ul,unsigned int const,GroupScriptConfig>(v24)->gadget_config_map;
    *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, v9);
    *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(__for_range_0);
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 128, v9);
    *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v5 + 128) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v5 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v5 + 128)) )
      {
        v17 = 1;
        goto LABEL_32;
      }
      v27 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v5 + 96));
      config_id = std::get<0ul,unsigned int const,GadgetScriptConfig>(v27);
      gadget_script_config = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v27);
      p_gadget_id = &gadget_script_config->gadget_id;
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             gadget_id_set,
             &gadget_script_config->gadget_id) )
      {
        break;
      }
LABEL_30:
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v5 + 96));
    }
    *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 192, p_gadget_id);
    *(std::map<unsigned int,std::pair<Vector3,unsigned int>>::iterator *)(v5 + 192) = std::map<unsigned int,std::pair<Vector3,unsigned int>>::end(challenge_map);
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 160, p_gadget_id);
    *(std::map<unsigned int,std::pair<Vector3,unsigned int>>::iterator *)(v5 + 160) = std::map<unsigned int,std::pair<Vector3,unsigned int>>::find(
                                                                                        challenge_map,
                                                                                        group_id);
    v11 = std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<Vector3,unsigned int> > >::_Self *)(v5 + 160),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<Vector3,unsigned int> > >::_Self *)(v5 + 192));
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( !v11 )
    {
      *(_WORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
      std::pair<Vector3,unsigned int>::pair<Vector3,unsigned int,true>(
        (std::pair<Vector3,unsigned int> *const)(v5 + 224),
        &gadget_script_config->pos,
        &gadget_script_config->gadget_id);
      v18 = std::map<unsigned int,std::pair<Vector3,unsigned int>>::operator[](challenge_map, group_id);
      std::pair<Vector3,unsigned int>::operator=(
        v18,
        (std::conditional<true,std::pair<Vector3,unsigned int>&&,std::__nonesuch_no_braces&&>::type)(v5 + 224));
      *(_WORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = -1800;
      goto LABEL_30;
    }
    *(_DWORD *)(((v5 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "getChallengePostionFromSceneScript",
      244);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v5 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [102],(char *[102])0>(
            v12,
            (const char (*)[102])"[Michiae_Matsuri] getChallengePostionFromSceneScript failed, duplicate challenge gadget in same group");
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])", group_id: ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, group_id);
    v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])" config_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, config_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 320));
    *(_DWORD *)(((v5 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
    v17 = 0;
LABEL_32:
    *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v17 == 1 )
    {
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupScriptConfig>,false,false> *const)(v5 + 32));
      continue;
    }
    break;
  }
  v19 = 0;
LABEL_36:
  if ( v19 == 1 )
    v4 = 0;
LABEL_38:
  result = v4;
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 257: range 0000000012C7DFAA-0000000012C7F015
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriOverallConfig(
        const ActivityMichiaeMatsuriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t *p_activity_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  OfferingExcelConfigMgr *p_offering_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  uint32_t activity_scene_id; // r15d
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  int32_t result; // eax
  LuaConfigMgr *lua_config_mgr; // [rsp+28h] [rbp-2C8h]
  data::MichiaeOverallExcelConfigMap *__for_range; // [rsp+30h] [rbp-2C0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>,false,false>::reference v38; // [rsp+38h] [rbp-2B8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeOverallExcelConfig> >::type *config; // [rsp+48h] [rbp-2A8h]
  const GroupScriptConfig *group_script_ptr; // [rsp+58h] [rbp-298h]
  char v41[656]; // [rsp+60h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 8 15 __for_begin:259 64 8 13 __for_end:259 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <"
                        "unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriOverallConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->michiae_overall_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeOverallExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::MichiaeOverallExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeOverallExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MichiaeOverallExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_68;
    }
    v38 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::MichiaeOverallExcelConfig>(v38);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeOverallExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MichiaeOverallExcelConfig>(v38);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    p_activity_id = &config->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_activity_id);
    }
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
            p_new_activity_config_mgr,
            config->activity_id) )
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
        "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
        "checkMichiaeMatsuriOverallConfig",
        264);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             v8,
             (const char (*)[39])"[Michiae_Matsuri] invalid activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v10 = 0;
      goto LABEL_68;
    }
    p_offering_config_mgr = &txt_config_mgr->offering_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->offering_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->offering_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->offering_id);
    }
    if ( !OfferingExcelConfigMgr::isOfferingIdValid(p_offering_config_mgr, config->offering_id) )
    {
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
        "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
        "checkMichiaeMatsuriOverallConfig",
        269);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              v12,
              (const char (*)[39])"[Michiae_Matsuri] invalid offering_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->offering_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v10 = 0;
      goto LABEL_68;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->pray_effect_range >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->pray_effect_range >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->pray_effect_range);
    }
    if ( config->pray_effect_range <= 0.0 )
      goto LABEL_75;
    if ( *(_BYTE *)(((unsigned __int64)&config->dark_challenge_reward_range >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->dark_challenge_reward_range >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->dark_challenge_reward_range);
    }
    if ( config->dark_challenge_reward_range <= 0.0 )
      goto LABEL_75;
    if ( *(_BYTE *)(((unsigned __int64)&config->boss_challenge_reward_range >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->boss_challenge_reward_range >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->boss_challenge_reward_range);
    }
    if ( config->boss_challenge_reward_range <= 0.0 )
    {
LABEL_75:
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
        "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
        "checkMichiaeMatsuriOverallConfig",
        274);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v14, (const char (*)[50])byte_1AA6A5E0);
      v16 = common::milog::MiLogStream::operator<<<float,(float *)0>(v15, &config->pray_effect_range);
      v17 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v16, (const char (*)[31])byte_1AA6A640);
      v18 = common::milog::MiLogStream::operator<<<float,(float *)0>(v17, &config->dark_challenge_reward_range);
      v19 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v18, (const char (*)[26])byte_1AA6A680);
      common::milog::MiLogStream::operator<<<float,(float *)0>(v19, &config->boss_challenge_reward_range);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      v2 = -1;
      v10 = 0;
      goto LABEL_68;
    }
    p_scene_config_mgr = &txt_config_mgr->scene_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->activity_scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->activity_scene_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->activity_scene_id);
    }
    if ( !data::SceneExcelConfigMgrBase::findSceneExcelConfig(p_scene_config_mgr, config->activity_scene_id) )
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
        "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
        "checkMichiaeMatsuriOverallConfig",
        281);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v22 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              v21,
              (const char (*)[36])"[Michiae_Matsuri] invalid scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config->activity_scene_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v2 = -1;
      v10 = 0;
      goto LABEL_68;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->activity_scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->activity_scene_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->activity_scene_id);
    }
    activity_scene_id = config->activity_scene_id;
    if ( *(_BYTE *)(((unsigned __int64)&config->statue_group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->statue_group_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->statue_group_id);
    }
    if ( activity_scene_id != (unsigned int)LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, config->statue_group_id) )
    {
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
        "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
        "checkMichiaeMatsuriOverallConfig",
        286);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v25 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              v24,
              (const char (*)[28])"[Michiae_Matsuri] group_id:");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &config->statue_group_id);
      v27 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v26,
              (const char (*)[19])", is not in scene:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &config->activity_scene_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      v2 = -1;
      v10 = 0;
      goto LABEL_68;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->statue_group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->statue_group_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->statue_group_id);
    }
    group_script_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, config->statue_group_id);
    if ( !group_script_ptr )
    {
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
        "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
        "checkMichiaeMatsuriOverallConfig",
        292);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v29 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v28, (const char (*)[40])byte_1AA6A7A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &config->statue_group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      v2 = -1;
      v10 = 0;
      goto LABEL_68;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->statue_config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->statue_config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->statue_config_id);
    }
    if ( !GroupScriptConfig::findGadgetConfig(group_script_ptr, config->statue_config_id) )
    {
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
        "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
        "checkMichiaeMatsuriOverallConfig",
        297);
      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v31 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v30, (const char (*)[41])byte_1AA6A800);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &config->statue_config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      v2 = -1;
      v10 = 0;
      goto LABEL_68;
    }
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->crystal_exp_material_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->crystal_exp_material_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->crystal_exp_material_id);
    }
    if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
            p_material_config_mgr,
            config->crystal_exp_material_id) )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
    "checkMichiaeMatsuriOverallConfig",
    302);
  v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 544),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v34 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v33, (const char (*)[47])byte_1AA6A860);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &config->crystal_exp_material_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
  v2 = -1;
  v10 = 0;
LABEL_68:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v41 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 310: range 0000000012C7F016-0000000012C8059F
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriStageConfig(
        const ActivityMichiaeMatsuriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  uint32_t *p_open_day; // rax
  uint32_t v8; // r15d
  std::tuple_element<0,std::pair<unsigned int const,data::MichiaeStageExcelConfig> >::type *v9; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  uint32_t *v11; // rdx
  char v12; // cl
  uint32_t v13; // r15d
  std::tuple_element<0,std::pair<unsigned int const,data::MichiaeStageExcelConfig> >::type *v14; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rax
  uint32_t *v16; // rdx
  char v17; // cl
  uint32_t v18; // r15d
  std::map<unsigned int,unsigned int>::mapped_type *v19; // rax
  uint32_t *v20; // rdx
  char v21; // cl
  std::tuple_element<0,std::pair<unsigned int const,data::MichiaeStageExcelConfig> >::type *v22; // rsi
  unsigned int *v23; // rax
  int *v24; // rdx
  int v25; // ecx
  char v26; // al
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // edx
  int v30; // edx
  char *v31; // rsi
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  int v37; // edx
  char *v38; // rsi
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  int v44; // edx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  int v50; // edx
  int32_t result; // eax
  uint32_t pre_open_day; // [rsp+24h] [rbp-42Ch]
  uint32_t pre_max_offering_level; // [rsp+28h] [rbp-428h]
  uint32_t pre_max_crystal_exp; // [rsp+2Ch] [rbp-424h]
  data::MichiaeStageExcelConfigMap *__for_range; // [rsp+30h] [rbp-420h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeStageExcelConfig>,false,false>::reference v57; // [rsp+38h] [rbp-418h]
  std::tuple_element<0,std::pair<unsigned int const,data::MichiaeStageExcelConfig> >::type *stage_id; // [rsp+40h] [rbp-410h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeStageExcelConfig> >::type *excel_config; // [rsp+48h] [rbp-408h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-400h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+60h] [rbp-3F0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v62; // [rsp+68h] [rbp-3E8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *stage_id_0; // [rsp+70h] [rbp-3E0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *open_day; // [rsp+78h] [rbp-3D8h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+80h] [rbp-3D0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v66; // [rsp+88h] [rbp-3C8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *stage_id_1; // [rsp+90h] [rbp-3C0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *max_offering_level; // [rsp+98h] [rbp-3B8h]
  std::map<unsigned int,unsigned int> *__for_range_3; // [rsp+A0h] [rbp-3B0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v70; // [rsp+A8h] [rbp-3A8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *stage_id_2; // [rsp+B0h] [rbp-3A0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *max_crystal_exp; // [rsp+B8h] [rbp-398h]
  char v73[912]; // [rsp+C0h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v73;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 32 4 14 watcher_id:319 48 8 15 __for_begin:314 80 8 13 __for_end:314 112 8 15 __for_begin:319"
                        " 144 8 13 __for_end:319 176 8 15 __for_begin:330 208 8 13 __for_end:330 240 8 15 __for_begin:340"
                        " 272 8 13 __for_end:340 304 8 15 __for_begin:350 336 8 13 __for_end:350 368 32 9 <unknown> 432 3"
                        "2 9 <unknown> 496 32 9 <unknown> 560 32 9 <unknown> 624 48 25 stage_to_open_day_map:311 704 48 3"
                        "5 stage_to_max_offering_level_map:312 784 48 32 stage_to_max_crystal_exp_map:313";
  *(_QWORD *)(v3 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriStageConfig;
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
  v5[536862728] = -234881024;
  v5[536862729] = 62194;
  v5[536862729] = -234881024;
  v5[536862730] = 62194;
  v5[536862730] = -234881024;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862738] = -219021312;
  v5[536862739] = 62194;
  v5[536862741] = -218959118;
  v5[536862743] = -219021312;
  v5[536862744] = 62194;
  v5[536862746] = -202116109;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 624));
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 704));
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 784));
  __for_range = &this->michiae_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeStageExcelConfig>::const_iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::MichiaeStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeStageExcelConfig>::const_iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::MichiaeStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MichiaeStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeStageExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeStageExcelConfig>,false> *)(v3 + 80)) )
      break;
    v57 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeStageExcelConfig>,false,false> *const)(v3 + 48));
    stage_id = std::get<0ul,unsigned int const,data::MichiaeStageExcelConfig>(v57);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MichiaeStageExcelConfig>(v57);
    p_open_day = &excel_config->open_day;
    if ( *(_BYTE *)(((unsigned __int64)p_open_day >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_open_day & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_open_day >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_open_day);
    }
    v8 = excel_config->open_day;
    v9 = stage_id;
    v10 = std::map<unsigned int,unsigned int>::operator[](
            (std::map<unsigned int,unsigned int> *const)(v3 + 624),
            stage_id);
    v11 = v10;
    v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
    {
      LOBYTE(v9) = v12 != 0;
      __asan_report_store4(v10, v9);
    }
    *v11 = v8;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->max_offering_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->max_offering_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->max_offering_level);
    }
    v13 = excel_config->max_offering_level;
    v14 = stage_id;
    v15 = std::map<unsigned int,unsigned int>::operator[](
            (std::map<unsigned int,unsigned int> *const)(v3 + 704),
            stage_id);
    v16 = v15;
    v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
    {
      LOBYTE(v14) = v17 != 0;
      __asan_report_store4(v15, v14);
    }
    *v16 = v13;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->max_crystal_exp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->max_crystal_exp >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->max_crystal_exp);
    }
    v18 = excel_config->max_crystal_exp;
    v22 = stage_id;
    v19 = std::map<unsigned int,unsigned int>::operator[](
            (std::map<unsigned int,unsigned int> *const)(v3 + 784),
            stage_id);
    v20 = v19;
    v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
    LOBYTE(v22) = v21 != 0;
    if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
      __asan_report_store4(v19, v22);
    *v20 = v18;
    __for_range_0 = &excel_config->watcher_list;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, v22);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 112) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, v22);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 144) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v3 + 144);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 112),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 144)) )
      {
        v29 = 1;
        goto LABEL_38;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v23 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 112));
      v24 = (int *)v23;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v23);
      }
      v25 = *v24;
      v26 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v26 != 0 && v26 <= 3 )
      {
        LOBYTE(v6) = v26 != 0;
        __asan_report_store4(v3 + 32, v6);
      }
      *(_DWORD *)(v3 + 32) = v25;
      if ( !data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
              &txt_config_mgr->new_activity_config_mgr,
              *(unsigned int *)(v3 + 32)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 112));
    }
    *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 368, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 368),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "checkMichiaeMatsuriStageConfig",
      324);
    v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 368),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v28 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(v27, (const char (*)[82])byte_1AA6AAE0);
    v6 = (char *)(v3 + 32);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
    *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v29 = 0;
LABEL_38:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v29 != 1 )
    {
      v30 = 0;
      goto LABEL_42;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeStageExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeStageExcelConfig>,false,false> *const)(v3 + 48));
  }
  v30 = 1;
LABEL_42:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v30 == 1 )
  {
    pre_open_day = 0;
    __for_range_1 = (std::map<unsigned int,unsigned int> *)(v3 + 624);
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, v6);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 176) = std::map<unsigned int,unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 208, v6);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 208) = std::map<unsigned int,unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v31 = (char *)(v3 + 208);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 176),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 208)) )
      {
        v37 = 1;
        goto LABEL_59;
      }
      v62 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 176));
      stage_id_0 = std::get<0ul,unsigned int const,unsigned int>(v62);
      v32 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v62);
      open_day = v32;
      if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v32);
      }
      if ( pre_open_day > *open_day )
        break;
      if ( *(_BYTE *)(((unsigned __int64)open_day >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)open_day & 7) + 3) >= *(_BYTE *)(((unsigned __int64)open_day >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(open_day);
      }
      pre_open_day = *open_day;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 176));
    }
    *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 432, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 432),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "checkMichiaeMatsuriStageConfig",
      334);
    v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 432),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v34 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v33, (const char (*)[61])byte_1AA6AB60);
    v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, stage_id_0);
    v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v35, (const char (*)[16])byte_1AA20400);
    v31 = (char *)open_day;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, open_day);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
    *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v37 = 0;
LABEL_59:
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( v37 == 1 )
    {
      pre_max_offering_level = 0;
      __for_range_2 = (std::map<unsigned int,unsigned int> *)(v3 + 704);
      *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 240, v31);
      *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 240) = std::map<unsigned int,unsigned int>::begin(__for_range_2);
      *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 272, v31);
      *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 272) = std::map<unsigned int,unsigned int>::end(__for_range_2);
      while ( 1 )
      {
        v38 = (char *)(v3 + 272);
        if ( !std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 240),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 272)) )
        {
          v44 = 1;
          goto LABEL_76;
        }
        v66 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 240));
        stage_id_1 = std::get<0ul,unsigned int const,unsigned int>(v66);
        v39 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v66);
        max_offering_level = v39;
        if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v39);
        }
        if ( pre_max_offering_level > *max_offering_level )
          break;
        if ( *(_BYTE *)(((unsigned __int64)max_offering_level >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)max_offering_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_offering_level >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(max_offering_level);
        }
        pre_max_offering_level = *max_offering_level;
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 240));
      }
      *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 496, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 496),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
        "checkMichiaeMatsuriStageConfig",
        344);
      v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 496),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v41 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v40, (const char (*)[61])byte_1AA6ABC0);
      v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, stage_id_1);
      v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v42, (const char (*)[16])byte_1AA6AC20);
      v38 = (char *)max_offering_level;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, max_offering_level);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
      *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v44 = 0;
LABEL_76:
      *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
      if ( v44 == 1 )
      {
        pre_max_crystal_exp = 0;
        __for_range_3 = (std::map<unsigned int,unsigned int> *)(v3 + 784);
        *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 304, v38);
        *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 304) = std::map<unsigned int,unsigned int>::begin(__for_range_3);
        *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 336, v38);
        *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 336) = std::map<unsigned int,unsigned int>::end(__for_range_3);
        while ( 1 )
        {
          if ( !std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 304),
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 336)) )
          {
            v50 = 1;
            goto LABEL_93;
          }
          v70 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 304));
          stage_id_2 = std::get<0ul,unsigned int const,unsigned int>(v70);
          v45 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v70);
          max_crystal_exp = v45;
          if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v45);
          }
          if ( pre_max_crystal_exp > *max_crystal_exp )
            break;
          if ( *(_BYTE *)(((unsigned __int64)max_crystal_exp >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)max_crystal_exp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_crystal_exp >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(max_crystal_exp);
          }
          pre_max_crystal_exp = *max_crystal_exp;
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 304));
        }
        *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 560) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 560, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 560),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
          "checkMichiaeMatsuriStageConfig",
          354);
        v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 560),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v47 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(v46, (const char (*)[67])byte_1AA6AC60);
        v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, stage_id_2);
        v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v48, (const char (*)[16])byte_1AA6AC20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, max_crystal_exp);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
        *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v50 = 0;
LABEL_93:
        *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
        if ( v50 == 1 )
          v2 = 0;
      }
    }
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 784));
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 704));
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 624));
  result = v2;
  if ( v73 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
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

// Line 363: range 0000000012C805A0-0000000012C80FF5
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriAntiErosionConfig(
        const ActivityMichiaeMatsuriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  float *p_crystal_energy_max_limit; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // edx
  char *v16; // rsi
  unsigned int *v17; // rax
  int *v18; // rdx
  int v19; // ecx
  char v20; // al
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // edx
  int32_t result; // eax
  bool is_init_level; // [rsp+13h] [rbp-1DDh]
  uint32_t last_level; // [rsp+14h] [rbp-1DCh]
  data::MichiaeAntiErosionExcelConfigMap *__for_range; // [rsp+18h] [rbp-1D8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeAntiErosionExcelConfig>,false,false>::reference v28; // [rsp+20h] [rbp-1D0h]
  std::tuple_element<0,std::pair<unsigned int const,data::MichiaeAntiErosionExcelConfig> >::type *level; // [rsp+28h] [rbp-1C8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeAntiErosionExcelConfig> >::type *config; // [rsp+30h] [rbp-1C0h]
  std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1B8h]
  char v32[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 9 level:377 48 8 15 __for_begin:365 80 8 13 __for_end:365 112 8 15 __for_begin:377 144 8 "
                        "13 __for_end:377 176 32 9 <unknown> 240 32 9 <unknown> 304 48 22 offering_level_set:364";
  *(_QWORD *)(v3 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriAntiErosionConfig;
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
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862731] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 304));
  __for_range = &this->michiae_anti_erosion_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeAntiErosionExcelConfig>::const_iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::MichiaeAntiErosionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeAntiErosionExcelConfig>::const_iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::MichiaeAntiErosionExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_crystal_energy_max_limit = (float *)(v3 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MichiaeAntiErosionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeAntiErosionExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeAntiErosionExcelConfig>,false> *)(v3 + 80)) )
    {
      v15 = 1;
      goto LABEL_27;
    }
    v28 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeAntiErosionExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeAntiErosionExcelConfig>,false,false> *const)(v3 + 48));
    level = std::get<0ul,unsigned int const,data::MichiaeAntiErosionExcelConfig>(v28);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeAntiErosionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MichiaeAntiErosionExcelConfig>(v28);
    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 304), level);
    if ( *(_BYTE *)(((unsigned __int64)&config->b1 >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->b1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->b1);
    }
    if ( config->b1 < 0.0 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&config->b2 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->b2 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->b2);
    }
    if ( config->b2 < 0.0 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&config->b3 >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->b3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->b3);
    }
    if ( config->b3 < 0.0 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&config->crystal_energy_max_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->crystal_energy_max_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->crystal_energy_max_limit);
    }
    if ( config->crystal_energy_max_limit < 0.0 )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeAntiErosionExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeAntiErosionExcelConfig>,false,false> *const)(v3 + 48));
  }
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
    "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
    "checkMichiaeMatsuriAntiErosionConfig",
    370);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 176),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v7, (const char (*)[59])byte_1AA6AE00);
  v9 = common::milog::MiLogStream::operator<<<float,(float *)0>(v8, &config->b1);
  v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])", b2:");
  v11 = common::milog::MiLogStream::operator<<<float,(float *)0>(v10, &config->b2);
  v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])", b3:");
  v13 = common::milog::MiLogStream::operator<<<float,(float *)0>(v12, &config->b3);
  v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", max:");
  p_crystal_energy_max_limit = &config->crystal_energy_max_limit;
  common::milog::MiLogStream::operator<<<float,(float *)0>(v14, &config->crystal_energy_max_limit);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
  *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v15 = 0;
LABEL_27:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v15 == 1 )
  {
    last_level = 0;
    is_init_level = 1;
    __for_range_0 = (std::set<unsigned int> *)(v3 + 304);
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, p_crystal_energy_max_limit);
    *(std::set<unsigned int>::iterator *)(v3 + 112) = std::set<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, p_crystal_energy_max_limit);
    *(std::set<unsigned int>::iterator *)(v3 + 144) = std::set<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v16 = (char *)(v3 + 144);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 112),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 144)) )
      {
        v23 = 1;
        goto LABEL_47;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v17 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 112));
      v18 = (int *)v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      v19 = *v18;
      v20 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v20 != 0 && v20 <= 3 )
      {
        LOBYTE(v16) = v20 != 0;
        __asan_report_store4(v3 + 32, v16);
      }
      *(_DWORD *)(v3 + 32) = v19;
      if ( !is_init_level && last_level + 1 != *(_DWORD *)(v3 + 32) )
        break;
      is_init_level = 0;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      last_level = *(_DWORD *)(v3 + 32);
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 112));
    }
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 240, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 240),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "checkMichiaeMatsuriAntiErosionConfig",
      382);
    v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 240),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v22 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v21, (const char (*)[60])byte_1AA6AF20);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v23 = 0;
LABEL_47:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v23 == 1 )
      v2 = 0;
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 304));
  result = v2;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 392: range 0000000012C80FF6-0000000012C81459
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriErosionAreaConfig(
        const ActivityMichiaeMatsuriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  float *p_a1; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  int32_t result; // eax
  data::MichiaeErosionAreaExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeErosionAreaExcelConfig>,false,false>::reference v16; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeErosionAreaExcelConfig> >::type *config; // [rsp+28h] [rbp-D8h]
  char v18[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:393 64 8 13 __for_end:393 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriErosionAreaConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->michiae_erosion_area_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeErosionAreaExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::MichiaeErosionAreaExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeErosionAreaExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MichiaeErosionAreaExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MichiaeErosionAreaExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeErosionAreaExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeErosionAreaExcelConfig>,false> *)(v3 + 64)) )
    {
      v13 = 1;
      goto LABEL_24;
    }
    v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeErosionAreaExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeErosionAreaExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::MichiaeErosionAreaExcelConfig>(v16);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeErosionAreaExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MichiaeErosionAreaExcelConfig>(v16);
    p_a1 = &config->a1;
    if ( *(_BYTE *)(((unsigned __int64)p_a1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_a1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_a1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_a1);
    }
    if ( config->a1 < 0.0 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&config->a2 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->a2 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->a2);
    }
    if ( config->a2 < 0.0 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&config->a3 >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->a3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->a3);
    }
    if ( config->a3 < 0.0 )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeErosionAreaExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeErosionAreaExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
    "checkMichiaeMatsuriErosionAreaConfig",
    397);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v7, (const char (*)[59])byte_1AA6B040);
  v9 = common::milog::MiLogStream::operator<<<float,(float *)0>(v8, &config->a1);
  v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])", a2:");
  v11 = common::milog::MiLogStream::operator<<<float,(float *)0>(v10, &config->a2);
  v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])", a3:");
  common::milog::MiLogStream::operator<<<float,(float *)0>(v12, &config->a3);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v13 = 0;
LABEL_24:
  if ( v13 == 1 )
    v2 = 0;
  result = v2;
  if ( v18 == (char *)v3 )
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

// Line 405: range 0000000012C8145A-0000000012C8199E
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriBattleSkillConfig(
        const ActivityMichiaeMatsuriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  uint32_t *p_material_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int32_t result; // eax
  data::MichiaeBattleSkillExcelConfigMap *__for_range; // [rsp+18h] [rbp-138h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>,false,false>::reference v17; // [rsp+20h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >::type *skill_id; // [rsp+28h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >::type *config; // [rsp+30h] [rbp-120h]
  char v20[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:406 64 8 13 __for_end:406 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriBattleSkillConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->michiae_battle_skill_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeBattleSkillExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::MichiaeBattleSkillExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeBattleSkillExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MichiaeBattleSkillExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>,false> *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_24;
    }
    v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>,false,false> *const)(v3 + 32));
    skill_id = std::get<0ul,unsigned int const,data::MichiaeBattleSkillExcelConfig>(v17);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MichiaeBattleSkillExcelConfig>(v17);
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    p_material_id = &config->material_id;
    if ( *(_BYTE *)(((unsigned __int64)p_material_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_material_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_material_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_material_id);
    }
    if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, config->material_id) )
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
        "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
        "checkMichiaeMatsuriBattleSkillConfig",
        412);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
             v8,
             (const char (*)[68])"[Michiae_Matsuri] cannot find corresponding consume item, skill_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, skill_id);
      v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" ,material_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->material_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v12 = 0;
      goto LABEL_24;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->material_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->material_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->material_num);
    }
    if ( !config->material_num )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
    "checkMichiaeMatsuriBattleSkillConfig",
    418);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
          v13,
          (const char (*)[54])"[Michiae_Matsuri] material_num cannot be 0, skill id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, skill_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v12 = 0;
LABEL_24:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v20 == (char *)v3 )
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

// Line 427: range 0000000012C819A0-0000000012C81D3A
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriBossChallengeConfig(
        const ActivityMichiaeMatsuriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  int32_t result; // eax
  data::MichiaeBossChallengeExcelConfigMap *__for_range; // [rsp+18h] [rbp-F8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>,false,false>::reference v12; // [rsp+20h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig> >::type *config; // [rsp+30h] [rbp-E0h]
  char v14[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:428 64 8 13 __for_end:428 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriBossChallengeConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->michiae_boss_challenge_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeBossChallengeExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::MichiaeBossChallengeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeBossChallengeExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MichiaeBossChallengeExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_18;
    }
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::MichiaeBossChallengeExcelConfig>(v12);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MichiaeBossChallengeExcelConfig>(v12);
    p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->group_id);
    }
    if ( !LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, config->group_id) )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
    "checkMichiaeMatsuriBossChallengeConfig",
    434);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
         v7,
         (const char (*)[66])"[Michiae_Matsuri] cannot find group of boss challenge, group_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->group_id);
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

// Line 442: range 0000000012C81D3C-0000000012C829C4
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriDarkChallengeConfig(
        const ActivityMichiaeMatsuriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  _BOOL4 v11; // eax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  __int64 challenge_id; // rsi
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t v18; // ecx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::vector<unsigned int>::size_type v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  char *v27; // rsi
  unsigned int *v28; // rax
  int *v29; // rdx
  int v30; // ecx
  char v31; // al
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  int v36; // edx
  int v37; // eax
  int32_t result; // eax
  __int64 v39; // [rsp+8h] [rbp-258h]
  data::MichiaeDarkChallengeExcelConfigMap *__for_range; // [rsp+20h] [rbp-240h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>,false,false>::reference v42; // [rsp+28h] [rbp-238h]
  std::tuple_element<0,std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig> >::type *id; // [rsp+30h] [rbp-230h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig> >::type *config; // [rsp+38h] [rbp-228h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-218h]
  char v46[528]; // [rsp+50h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 4 21 valid_reward_size:456 48 4 13 reward_id:463 64 8 15 __for_begin:443 96 8 13 __for_end"
                        ":443 128 8 9 <unknown> 160 8 15 __for_begin:463 192 8 13 __for_end:463 224 32 9 <unknown> 288 32"
                        " 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriDarkChallengeConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -202116109;
  __for_range = &this->michiae_dark_challenge_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeDarkChallengeExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MichiaeDarkChallengeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MichiaeDarkChallengeExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MichiaeDarkChallengeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>,false> *)(v3 + 96)) )
  {
    v42 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::MichiaeDarkChallengeExcelConfig>(v42);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MichiaeDarkChallengeExcelConfig>(v42);
    p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->group_id);
    }
    if ( LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, config->group_id) )
    {
      p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->challenge_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->challenge_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->challenge_id);
      }
      challenge_id = config->challenge_id;
      if ( data::DungeonExcelConfigMgrBase::findDungeonChallengeConfig(p_dungeon_config_mgr, challenge_id) )
      {
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
        v18 = PlayerExcelConfigMgr::getMaxValidWorldLevel(&txt_config_mgr->player_config_mgr) + 1;
        v19 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
        LOBYTE(challenge_id) = v19 != 0;
        if ( v19 != 0 && v19 <= 3 )
          __asan_report_store4(v3 + 32, challenge_id);
        *(_DWORD *)(v3 + 32) = v18;
        v39 = *(unsigned int *)(v3 + 32);
        if ( v39 == std::vector<unsigned int>::size(&config->reward_id) )
        {
          __for_range_0 = &config->reward_id;
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 160, challenge_id);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 192, challenge_id);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
          while ( 1 )
          {
            v27 = (char *)(v3 + 192);
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
            {
              v36 = 1;
              goto LABEL_46;
            }
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
            v28 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
            v29 = (int *)v28;
            if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v28);
            }
            v30 = *v29;
            v31 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
            if ( v31 != 0 && v31 <= 3 )
            {
              LOBYTE(v27) = v31 != 0;
              __asan_report_store4(v3 + 48, v27);
            }
            *(_DWORD *)(v3 + 48) = v30;
            if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                                    txt_config_mgr,
                                    *(_DWORD *)(v3 + 48),
                                    ITEM_LIMIT_ACTIVITY_MICHIAE_MATSURI) != 1 )
              break;
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
          }
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
            "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
            "checkMichiaeMatsuriDarkChallengeConfig",
            467);
          v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 416),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v33 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  v32,
                  (const char (*)[37])"[Michiae_Matsuri] invalid reward_id:");
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v33,
                  (const unsigned int *)(v3 + 48));
          v35 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v34, (const char (*)[12])", group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &config->group_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v36 = 0;
LABEL_46:
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
          v11 = v36 == 1;
        }
        else
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
            "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
            "checkMichiaeMatsuriDarkChallengeConfig",
            459);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  v20,
                  (const char (*)[31])"[Michiae_Matsuri] reward size:");
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
          v22 = std::vector<unsigned int>::size(&config->reward_id);
          if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
            v22 = __asan_report_store8(v3 + 128, "[Michiae_Matsuri] reward size:");
          *(_QWORD *)(v3 + 128) = v22;
          v23 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v21,
                  (const unsigned __int64 *)(v3 + 128));
          v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])"should be:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v3 + 32));
          v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v25, (const char (*)[12])", group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &config->group_id);
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v11 = 0;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
          "checkMichiaeMatsuriDarkChallengeConfig",
          453);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                v14,
                (const char (*)[60])"[Michiae_Matsuri]findDungeonChallengeConfig fail, group_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->group_id);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v16,
                (const char (*)[16])", challenge_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &config->challenge_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
    }
    else
    {
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
        "checkMichiaeMatsuriDarkChallengeConfig",
        448);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v7, (const char (*)[43])byte_1AA6B5A0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->group_id);
      v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v9, (const char (*)[23])byte_1AA6B600);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( !v11 )
    {
      v37 = 0;
      goto LABEL_51;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>,false,false> *const)(v3 + 64));
  }
  v37 = 1;
LABEL_51:
  if ( v37 == 1 )
    v2 = 0;
  result = v2;
  if ( v46 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 476: range 0000000012C829C6-0000000012C83ECA
int32_t __cdecl ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriRadarPosMarkGadgetConfig(
        const ActivityMichiaeMatsuriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rax
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  __int64 v14; // rax
  _BOOL4 v15; // edx
  unsigned __int64 v16; // rax
  const unsigned int *M_current; // r15
  const unsigned int *v18; // rsi
  char *v19; // rsi
  LuaConfigMgr *p_lua_config_mgr; // rcx
  __int64 v21; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // eax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // edx
  int v32; // edx
  _BOOL4 v33; // r15d
  unsigned __int64 v34; // rax
  int v35; // eax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rax
  data::MichiaeRadarExcelConfigMap *__for_range; // [rsp+20h] [rbp-450h]
  std::__detail::_Node_const_iterator<std::pair<const data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>,false,false>::reference v43; // [rsp+28h] [rbp-448h]
  std::tuple_element<0,std::pair<const data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig> >::type *type; // [rsp+30h] [rbp-440h]
  std::tuple_element<1,const std::pair<const data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-438h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-430h]
  const unsigned int *gadget_id; // [rsp+48h] [rbp-428h]
  const data::GadgetExcelConfig *gadget_config_ptr; // [rsp+50h] [rbp-420h]
  std::map<unsigned int,std::map<unsigned int,std::pair<Vector3,unsigned int>>> *__for_range_1; // [rsp+58h] [rbp-418h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<Vector3,unsigned int>> > >::reference v50; // [rsp+60h] [rbp-410h]
  const std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,std::pair<Vector3,unsigned int>> > >::type *__for_range_2; // [rsp+78h] [rbp-3F8h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,unsigned int> > >::reference v52; // [rsp+80h] [rbp-3F0h]
  std::tuple_element<0,std::pair<unsigned int const,std::pair<Vector3,unsigned int> > >::type *group_id; // [rsp+88h] [rbp-3E8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+98h] [rbp-3D8h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_3; // [rsp+A0h] [rbp-3D0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::reference v56; // [rsp+A8h] [rbp-3C8h]
  std::tuple_element<0,std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id; // [rsp+B0h] [rbp-3C0h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *gadget_script_config; // [rsp+B8h] [rbp-3B8h]
  char v59[944]; // [rsp+C0h] [rbp-3B0h] BYREF

  v3 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(896LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "21 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 8 15 __for_begin:477 128 8 13 __for_end"
                        ":477 160 8 15 __for_begin:486 192 8 13 __for_end:486 224 8 9 <unknown> 256 8 15 __for_begin:503 "
                        "288 8 13 __for_end:503 320 8 15 __for_begin:505 352 8 13 __for_end:505 384 8 15 __for_begin:515 "
                        "416 8 13 __for_end:515 448 8 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown"
                        "> 672 32 9 <unknown> 736 32 9 <unknown> 800 56 17 gadget_id_set:502";
  *(_QWORD *)(v3 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::checkMichiaeMatsuriRadarPosMarkGadgetConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234753535;
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
  v5[536862733] = -218959360;
  v5[536862734] = -218959360;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218103808;
  v5[536862747] = -202116109;
  __for_range = &this->michiae_radar_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>::const_iterator *)(v3 + 128) = std::unordered_map<data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<data::MichiaeMatsuriRadarMarkType const,data::MichiaeRadarExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<const data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>,false> *)(v3 + 128)) )
    {
      v35 = 1;
      goto LABEL_91;
    }
    v43 = std::__detail::_Node_const_iterator<std::pair<data::MichiaeMatsuriRadarMarkType const,data::MichiaeRadarExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>,false,false> *const)(v3 + 96));
    type = std::get<0ul,data::MichiaeMatsuriRadarMarkType const,data::MichiaeRadarExcelConfig>(v43);
    excel_config = (std::tuple_element<1,const std::pair<const data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig> >::type *)std::get<1ul,data::MichiaeMatsuriRadarMarkType const,data::MichiaeRadarExcelConfig>(v43);
    v6 = ((unsigned __int8)type & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(type);
    }
    if ( *type != MICHIAE_MATSURI_RADAR_MARK_TYPE_CHEST )
      break;
    __for_range_0 = &excel_config->gadget_id_list;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
      {
        v11 = 1;
        goto LABEL_39;
      }
      v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
      gadget_id = v7;
      p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      gadget_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, *gadget_id);
      if ( !gadget_config_ptr )
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
          "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
          "checkMichiaeMatsuriRadarPosMarkGadgetConfig",
          491);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 480),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                v9,
                (const char (*)[58])"[Michiae_Matsuri] cannot find gadget of radar, gadget_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, gadget_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
        goto LABEL_39;
      }
      if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&gadget_config_ptr->type);
      }
      if ( gadget_config_ptr->type != Chest )
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
      "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
      "checkMichiaeMatsuriRadarPosMarkGadgetConfig",
      496);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 544),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [96],(char *[96])0>(
            v12,
            (const char (*)[96])"[Michiae_Matsuri] checkMichiaeMatsuriRadarPosMarkGadgetConfig failed, expect chest rather than ");
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&gadget_config_ptr->type);
    }
    v14 = (__int64)data::enumValToStr(gadget_config_ptr->type);
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      v14 = __asan_report_store8(v3 + 224, (((_BYTE)gadget_config_ptr + 84) & 7u) + 3);
    *(_QWORD *)(v3 + 224) = v14;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v13, (const char *const *)(v3 + 224));
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
    *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v11 = 0;
LABEL_39:
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v11 == 1 )
    {
      v16 = ((v3 + 800) >> 3) + 2147450880;
      *(_DWORD *)v16 = 0;
      *(_WORD *)(v16 + 4) = 0;
      *(_BYTE *)(v16 + 6) = 0;
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 80));
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
      M_current = std::vector<unsigned int>::end(&excel_config->gadget_id_list)._M_current;
      v18 = std::vector<unsigned int>::begin(&excel_config->gadget_id_list)._M_current;
      std::unordered_set<unsigned int>::unordered_set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
        (std::unordered_set<unsigned int> *const)(v3 + 800),
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v18,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
        0LL,
        (const std::unordered_set<unsigned int>::hasher *)(v3 + 48),
        (const std::unordered_set<unsigned int>::key_equal *)(v3 + 64),
        (const std::unordered_set<unsigned int>::allocator_type *)(v3 + 80));
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 80));
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      __for_range_1 = &this->michiae_challenge_group_to_pos_map_;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v18);
      *(std::map<unsigned int,std::map<unsigned int,std::pair<Vector3,unsigned int>>>::const_iterator *)(v3 + 256) = std::map<unsigned int,std::map<unsigned int,std::pair<Vector3,unsigned int>>>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 288, v18);
      *(std::map<unsigned int,std::map<unsigned int,std::pair<Vector3,unsigned int>>>::const_iterator *)(v3 + 288) = std::map<unsigned int,std::map<unsigned int,std::pair<Vector3,unsigned int>>>::end(__for_range_1);
      while ( 1 )
      {
        v19 = (char *)(v3 + 288);
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<Vector3,unsigned int>> > >::_Self *)(v3 + 256),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<Vector3,unsigned int>> > >::_Self *)(v3 + 288)) )
          break;
        v50 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<Vector3,unsigned int>>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<Vector3,unsigned int>> > > *const)(v3 + 256));
        std::get<0ul,unsigned int const,std::map<unsigned int,std::pair<Vector3,unsigned int>>>(v50);
        __for_range_2 = std::get<1ul,unsigned int const,std::map<unsigned int,std::pair<Vector3,unsigned int>>>(v50);
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 320, v19);
        *(std::map<unsigned int,std::pair<Vector3,unsigned int>>::const_iterator *)(v3 + 320) = std::map<unsigned int,std::pair<Vector3,unsigned int>>::begin(__for_range_2);
        *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 352, v19);
        *(std::map<unsigned int,std::pair<Vector3,unsigned int>>::const_iterator *)(v3 + 352) = std::map<unsigned int,std::pair<Vector3,unsigned int>>::end(__for_range_2);
        while ( 1 )
        {
          if ( !std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,unsigned int> > >::_Self *)(v3 + 320),
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,unsigned int> > >::_Self *)(v3 + 352)) )
          {
            v24 = 1;
            goto LABEL_75;
          }
          v52 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,unsigned int>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,unsigned int> > > *const)(v3 + 320));
          group_id = std::get<0ul,unsigned int const,std::pair<Vector3,unsigned int>>(v52);
          std::get<1ul,unsigned int const,std::pair<Vector3,unsigned int>>(v52);
          p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(group_id);
          }
          v21 = *group_id;
          group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, v21);
          if ( !group_script_config_ptr )
            break;
          __for_range_3 = &group_script_config_ptr->gadget_config_map;
          *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 384, v21);
          *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v3 + 384) = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(__for_range_3);
          *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 416, v21);
          *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v3 + 416) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_3);
          while ( 1 )
          {
            if ( !std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v3 + 384),
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v3 + 416)) )
            {
              v31 = 1;
              goto LABEL_71;
            }
            v56 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v3 + 384));
            config_id = std::get<0ul,unsigned int const,GadgetScriptConfig>(v56);
            gadget_script_config = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v56);
            if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                   (std::unordered_set<unsigned int> *)(v3 + 800),
                   &gadget_script_config->gadget_id) )
            {
              break;
            }
            std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v3 + 384));
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
            "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
            "checkMichiaeMatsuriRadarPosMarkGadgetConfig",
            520);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 672),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [90],(char *[90])0>(
                  v25,
                  (const char (*)[90])"[Michiae_Matsuri] checkMichiaeMatsuriRadarPosMarkGadgetConfig failed, challenge group id:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, group_id);
          v28 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  v27,
                  (const char (*)[30])", contains chest, config id: ");
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, config_id);
          v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v29,
                  (const char (*)[14])", gadget_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &gadget_script_config->gadget_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
          *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v31 = 0;
LABEL_71:
          *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
          if ( v31 != 1 )
          {
            v24 = 0;
            goto LABEL_75;
          }
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,unsigned int>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,unsigned int> > > *const)(v3 + 320));
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
          "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
          "checkMichiaeMatsuriRadarPosMarkGadgetConfig",
          511);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [93],(char *[93])0>(
                v22,
                (const char (*)[93])"[Michiae_Matsuri] checkMichiaeMatsuriRadarPosMarkGadgetConfig failed, cannot find group id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, group_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
        *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v24 = 0;
LABEL_75:
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
        if ( v24 != 1 )
        {
          v32 = 0;
          goto LABEL_79;
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<Vector3,unsigned int>>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<Vector3,unsigned int>> > > *const)(v3 + 256));
      }
      v32 = 1;
LABEL_79:
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
      v33 = v32 == 1;
      std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 800));
      v15 = v33;
    }
    else
    {
      v15 = 0;
    }
    v34 = ((v3 + 800) >> 3) + 2147450880;
    *(_DWORD *)v34 = -117901064;
    *(_WORD *)(v34 + 4) = -1800;
    *(_BYTE *)(v34 + 6) = -8;
    if ( !v15 )
    {
      v35 = 0;
      goto LABEL_91;
    }
LABEL_89:
    std::__detail::_Node_const_iterator<std::pair<data::MichiaeMatsuriRadarMarkType const,data::MichiaeRadarExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::MichiaeMatsuriRadarMarkType,data::MichiaeRadarExcelConfig>,false,false> *const)(v3 + 96));
  }
  if ( *type == MICHIAE_MATSURI_RADAR_MARK_TYPE_CHALLENGE )
    goto LABEL_89;
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
    "./src/txt_data_manual/ActivityMichiaeMatsuriExcelConfig.cpp",
    "checkMichiaeMatsuriRadarPosMarkGadgetConfig",
    536);
  v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 736),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v37 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          v36,
          (const char (*)[37])"[Michiae_Matsuri] wrong radar type: ");
  *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
  v38 = ((unsigned __int8)type & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(type);
  }
  v39 = (__int64)data::enumValToStr(*type, v38);
  if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
    v39 = __asan_report_store8(v3 + 448, v38);
  *(_QWORD *)(v3 + 448) = v39;
  common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v37, (const char *const *)(v3 + 448));
  *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
  v2 = -1;
  v35 = 0;
LABEL_91:
  if ( v35 == 1 )
    v2 = 0;
  if ( v59 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
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
  }
  return v2;
};

// Line 545: range 0000000012C83ECC-0000000012C8408D
const data::MichiaeOverallExcelConfig *__fastcall ActivityMichiaeMatsuriExcelConfigMgr::findPreviewExcelConfigByActivityId(
        const ActivityMichiaeMatsuriExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::MichiaeOverallExcelConfig> *p_michiae_preview_config_map; // rdx
  std::map<unsigned int,data::MichiaeOverallExcelConfig> *v6; // rdx
  bool v7; // al
  const data::MichiaeOverallExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:544 64 8 8 iter:546 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::findPreviewExcelConfigByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_michiae_preview_config_map = &this->michiae_preview_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,data::MichiaeOverallExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::MichiaeOverallExcelConfig>::find(
                                                                                           p_michiae_preview_config_map,
                                                                                           (const std::map<unsigned int,data::MichiaeOverallExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->michiae_preview_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::MichiaeOverallExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::MichiaeOverallExcelConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeOverallExcelConfig> > *const)(v2 + 64))->second;
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

// Line 555: range 0000000012C8408E-0000000012C8424F
const data::MichiaeDarkChallengeExcelConfig *__fastcall ActivityMichiaeMatsuriExcelConfigMgr::findDarkChallengeExcelConfigByGroupId(
        const ActivityMichiaeMatsuriExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::MichiaeDarkChallengeExcelConfig> *p_michiae_dark_challenge_config_map; // rdx
  std::map<unsigned int,data::MichiaeDarkChallengeExcelConfig> *v6; // rdx
  bool v7; // al
  const data::MichiaeDarkChallengeExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:554 64 8 8 iter:556 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::findDarkChallengeExcelConfigByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_michiae_dark_challenge_config_map = &this->michiae_dark_challenge_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::map<unsigned int,data::MichiaeDarkChallengeExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::MichiaeDarkChallengeExcelConfig>::find(
                                                                                                 p_michiae_dark_challenge_config_map,
                                                                                                 (const std::map<unsigned int,data::MichiaeDarkChallengeExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->michiae_dark_challenge_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::MichiaeDarkChallengeExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::MichiaeDarkChallengeExcelConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeDarkChallengeExcelConfig> > *const)(v2 + 64))->second;
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

// Line 565: range 0000000012C84250-0000000012C84411
const data::MichiaeBattleSkillExcelConfig *__fastcall ActivityMichiaeMatsuriExcelConfigMgr::findBattleSkillExcelConfigBySkillId(
        const ActivityMichiaeMatsuriExcelConfigMgr *const this,
        __int64 skill_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::MichiaeBattleSkillExcelConfig> *p_michiae_battle_skill_config_map; // rdx
  std::map<unsigned int,data::MichiaeBattleSkillExcelConfig> *v6; // rdx
  bool v7; // al
  const data::MichiaeBattleSkillExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 skill_id:564 64 8 8 iter:566 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::findBattleSkillExcelConfigBySkillId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = skill_id;
  p_michiae_battle_skill_config_map = &this->michiae_battle_skill_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, skill_id);
  *(std::map<unsigned int,data::MichiaeBattleSkillExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::MichiaeBattleSkillExcelConfig>::find(
                                                                                               p_michiae_battle_skill_config_map,
                                                                                               (const std::map<unsigned int,data::MichiaeBattleSkillExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->michiae_battle_skill_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::MichiaeBattleSkillExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::MichiaeBattleSkillExcelConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> > *const)(v2 + 64))->second;
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

// Line 575: range 0000000012C84412-0000000012C845D3
const data::MichiaeBossChallengeExcelConfig *__fastcall ActivityMichiaeMatsuriExcelConfigMgr::findBossChallengeExcelConfigByLevelId(
        const ActivityMichiaeMatsuriExcelConfigMgr *const this,
        __int64 level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::MichiaeBossChallengeExcelConfig> *p_michiae_boss_challenge_config_map; // rdx
  std::map<unsigned int,data::MichiaeBossChallengeExcelConfig> *v6; // rdx
  bool v7; // al
  const data::MichiaeBossChallengeExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 level_id:574 64 8 8 iter:576 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::findBossChallengeExcelConfigByLevelId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  p_michiae_boss_challenge_config_map = &this->michiae_boss_challenge_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::map<unsigned int,data::MichiaeBossChallengeExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::MichiaeBossChallengeExcelConfig>::find(
                                                                                                 p_michiae_boss_challenge_config_map,
                                                                                                 (const std::map<unsigned int,data::MichiaeBossChallengeExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->michiae_boss_challenge_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::MichiaeBossChallengeExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::MichiaeBossChallengeExcelConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBossChallengeExcelConfig> > *const)(v2 + 64))->second;
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

// Line 585: range 0000000012C845D4-0000000012C84795
const MichiaeChestGroupConfigToPosMap *__fastcall ActivityMichiaeMatsuriExcelConfigMgr::findChestPosMapByActivityId(
        const ActivityMichiaeMatsuriExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::map<std::pair<unsigned int,unsigned int>,Vector3>> *p_michiae_chest_group_config_to_pos_map; // rdx
  std::map<unsigned int,std::map<std::pair<unsigned int,unsigned int>,Vector3>> *v6; // rdx
  bool v7; // al
  const MichiaeChestGroupConfigToPosMap *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:584 64 8 8 iter:586 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::findChestPosMapByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_michiae_chest_group_config_to_pos_map = &this->michiae_chest_group_config_to_pos_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,std::map<std::pair<unsigned int,unsigned int>,Vector3>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<std::pair<unsigned int,unsigned int>,Vector3>>::find(p_michiae_chest_group_config_to_pos_map, (const std::map<unsigned int,std::map<std::pair<unsigned int,unsigned int>,Vector3>>::key_type *)(v2 + 48));
  v6 = &this->michiae_chest_group_config_to_pos_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<std::pair<unsigned int,unsigned int>,Vector3>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<std::pair<unsigned int,unsigned int>,Vector3>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<std::pair<unsigned int,unsigned int>,Vector3> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<std::pair<unsigned int,unsigned int>,Vector3> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<std::pair<unsigned int,unsigned int>,Vector3>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<std::pair<unsigned int,unsigned int>,Vector3> > > *const)(v2 + 64))->second;
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

// Line 594: range 0000000012C84796-0000000012C84957
const MichiaeChallengeGroupToPosMap *__fastcall ActivityMichiaeMatsuriExcelConfigMgr::findChallengePosMapByActivityId(
        const ActivityMichiaeMatsuriExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::map<unsigned int,std::pair<Vector3,unsigned int>>> *p_michiae_challenge_group_to_pos_map; // rdx
  std::map<unsigned int,std::map<unsigned int,std::pair<Vector3,unsigned int>>> *v6; // rdx
  bool v7; // al
  const MichiaeChallengeGroupToPosMap *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:593 64 8 8 iter:595 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMichiaeMatsuriExcelConfigMgr::findChallengePosMapByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_michiae_challenge_group_to_pos_map = &this->michiae_challenge_group_to_pos_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,std::map<unsigned int,std::pair<Vector3,unsigned int>>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,std::pair<Vector3,unsigned int>>>::find(p_michiae_challenge_group_to_pos_map, (const std::map<unsigned int,std::map<unsigned int,std::pair<Vector3,unsigned int>>>::key_type *)(v2 + 48));
  v6 = &this->michiae_challenge_group_to_pos_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<unsigned int,std::pair<Vector3,unsigned int>>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<unsigned int,std::pair<Vector3,unsigned int>>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<Vector3,unsigned int>> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<Vector3,unsigned int>> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<Vector3,unsigned int>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<Vector3,unsigned int>> > > *const)(v2 + 64))->second;
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

// Line 604: range 0000000012C84958-0000000012C849EA
std::vector<unsigned int> *__cdecl ActivityMichiaeMatsuriExcelConfigMgr::getAllSkillIdFromConfig(
        std::vector<unsigned int> *retstr,
        const ActivityMichiaeMatsuriExcelConfigMgr *const this)
{
  std::map<unsigned int,data::MichiaeBattleSkillExcelConfig> *p_michiae_battle_skill_config_map; // rsi

  p_michiae_battle_skill_config_map = &this->michiae_battle_skill_config_map_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_michiae_battle_skill_config_map = (std::map<unsigned int,data::MichiaeBattleSkillExcelConfig> *)24;
    __asan_report_store_n(retstr, 24LL);
  }
  common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,data::MichiaeBattleSkillExcelConfig>>(
    retstr,
    p_michiae_battle_skill_config_map);
  return retstr;
};
