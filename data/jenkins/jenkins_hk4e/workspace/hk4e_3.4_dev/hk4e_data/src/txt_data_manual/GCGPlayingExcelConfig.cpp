// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GCGPlayingExcelConfig.cpp

// Line 18: range 000000001441E632-000000001441F5BF
int32_t __cdecl GCGPlayingExcelConfigMgr::rewriteConfig(
        GCGPlayingExcelConfigMgr *const this,
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
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  char v18[832]; // [rsp+10h] [rbp-340h] BYREF

  v2 = (common::milog::MiLogStream *)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"12 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)GCGPlayingExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -202116109;
  if ( GCGPlayingExcelConfigMgr::rewriteGameRewardConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "rewriteConfig",
      19);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v5,
      (const char (*)[32])"rewriteGameRewardConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "rewriteConfig",
      20);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v7,
      (const char (*)[36])"rewriteCharacterLevelConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::rewriteChallengeConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "rewriteConfig",
      21);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v8,
      (const char (*)[31])"rewriteChallengeConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::rewriteMatchConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "rewriteConfig",
      22);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v9,
      (const char (*)[27])"rewriteMatchConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::rewriteMatchRankConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "rewriteConfig",
      23);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v10,
      (const char (*)[31])"rewriteMatchRankConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::rewriteMatchNameConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "rewriteConfig",
      24);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v11,
      (const char (*)[31])"rewriteMatchNameConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::rewriteConstNpcConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "rewriteConfig",
      25);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v12,
      (const char (*)[30])"rewriteConstNpcConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::rewriteWorldLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "rewriteConfig",
      26);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 15,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v13,
      (const char (*)[32])"rewriteWorldLevelConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 15);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::rewriteWeekLevelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[17] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[17].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[17].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[17], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "rewriteConfig",
      27);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 17,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v14,
      (const char (*)[31])"rewriteWeekLevelConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 17);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::rewriteBossLevelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[19] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[19].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[19].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[19], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "rewriteConfig",
      28);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 19,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v15,
      (const char (*)[31])"rewriteBossLevelConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 19);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::rewriteGameGroupConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[21] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[21].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[21].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[21], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "rewriteConfig",
      29);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 21,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v16,
      (const char (*)[31])"rewriteGameGroupConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 21);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::rewriteQuestLevelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[23] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[23].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[23].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[23], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "rewriteConfig",
      30);
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 23,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v17,
      (const char (*)[32])"rewriteQuestLevelConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 23);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v18 == (char *)v2 )
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
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8050) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8058) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8060) = 0;
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
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 35: range 000000001441F5C0-000000001442054D
int32_t __cdecl GCGPlayingExcelConfigMgr::checkConfig(
        GCGPlayingExcelConfigMgr *const this,
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
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  char v18[832]; // [rsp+10h] [rbp-340h] BYREF

  v2 = (common::milog::MiLogStream *)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"12 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)GCGPlayingExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -202116109;
  if ( GCGPlayingExcelConfigMgr::checkCharacterLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "checkConfig",
      36);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v5,
      (const char (*)[34])"checkCharacterLevelConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::checkGameRewardConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "checkConfig",
      37);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v7,
      (const char (*)[30])"checkGameRewardConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::checkChallengeConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "checkConfig",
      38);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v8,
      (const char (*)[29])"checkChallengeConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::checkMatchConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "checkConfig",
      39);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v9, (const char (*)[25])"checkMatchConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::checkMatchRankConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "checkConfig",
      40);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v10,
      (const char (*)[29])"checkMatchRankConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::checkSceneDistributionConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "checkConfig",
      41);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v11,
      (const char (*)[37])"checkSceneDistributionConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::checkConstNpcConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "checkConfig",
      42);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v12,
      (const char (*)[28])"checkConstNpcConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::checkWorldLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "checkConfig",
      43);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 15,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v13,
      (const char (*)[30])"checkWorldLevelConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 15);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::checkWeekLevelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[17] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[17].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[17].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[17], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "checkConfig",
      44);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 17,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v14,
      (const char (*)[29])"checkWeekLevelConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 17);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::checkBossLevelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[19] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[19].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[19].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[19], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "checkConfig",
      45);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 19,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v15,
      (const char (*)[29])"checkBossLevelConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 19);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::checkGameGroupConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[21] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[21].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[21].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[21], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "checkConfig",
      46);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 21,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v16,
      (const char (*)[29])"checkGameGroupConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 21);
    result = -1;
  }
  else if ( GCGPlayingExcelConfigMgr::checkQuestLevelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[23] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[23].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[23].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[23], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "checkConfig",
      47);
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 23,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v17,
      (const char (*)[30])"checkQuestLevelConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 23);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v18 == (char *)v2 )
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
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8050) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8058) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8060) = 0;
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
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 52: range 000000001442054E-0000000014420749
__int64 __fastcall GCGPlayingExcelConfigMgr::getLevelGroupId(
        const GCGPlayingExcelConfigMgr *const this,
        __int64 level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_level_id_2_group_id_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 level_id:51 64 8 7 iter:53 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::getLevelGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  p_level_id_2_group_id_map = &this->level_id_2_group_id_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_level_id_2_group_id_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->level_id_2_group_id_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  else
  {
    result = 0LL;
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

// Line 62: range 000000001442074A-0000000014420967
const std::set<unsigned int> *__fastcall GCGPlayingExcelConfigMgr::getGroupLevelSet(
        const GCGPlayingExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_group_level_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v6; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 11 group_id:61 64 8 7 iter:63 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::getGroupLevelSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_level_map = &this->group_level_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_group_level_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->group_level_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'GCGPlayingExcelConfigMgr::getGroupLevelSet(unsigned int)::dummy_set
      && __cxa_guard_acquire(&`guard variable for'GCGPlayingExcelConfigMgr::getGroupLevelSet(unsigned int)::dummy_set) )
    {
      std::set<unsigned int>::set(&GCGPlayingExcelConfigMgr::getGroupLevelSet(unsigned int)const::dummy_set);
      __cxa_guard_release(&`guard variable for'GCGPlayingExcelConfigMgr::getGroupLevelSet(unsigned int)::dummy_set);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::set<unsigned int>::~set,
        &GCGPlayingExcelConfigMgr::getGroupLevelSet(unsigned int)const::dummy_set,
        &_dso_handle);
    }
    result = &GCGPlayingExcelConfigMgr::getGroupLevelSet(unsigned int)const::dummy_set;
  }
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

// Line 73: range 0000000014420968-0000000014420A13
const std::vector<data::GCGChallengeReward> *__cdecl GCGPlayingExcelConfigMgr::getLevelChallengeRewardVec(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t level_id)
{
  uint32_t level_ida; // [rsp+4h] [rbp-1Ch]
  const data::GCGGameRewardExcelConfig *config_ptr; // [rsp+18h] [rbp-8h]

  level_ida = GCGPlayingExcelConfigMgr::getGroupRedirectLevelId(this, level_id);
  config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(this, level_ida);
  if ( config_ptr )
    return &config_ptr->challenge_reward_list;
  if ( !(_BYTE)`guard variable for'GCGPlayingExcelConfigMgr::getLevelChallengeRewardVec(unsigned int)::dummy_vec )
  {
    if ( __cxa_guard_acquire(&`guard variable for'GCGPlayingExcelConfigMgr::getLevelChallengeRewardVec(unsigned int)::dummy_vec) )
    {
      std::vector<data::GCGChallengeReward>::vector(&GCGPlayingExcelConfigMgr::getLevelChallengeRewardVec(unsigned int)const::dummy_vec);
      __cxa_guard_release(&`guard variable for'GCGPlayingExcelConfigMgr::getLevelChallengeRewardVec(unsigned int)::dummy_vec);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<data::GCGChallengeReward>::~vector,
        &GCGPlayingExcelConfigMgr::getLevelChallengeRewardVec(unsigned int)const::dummy_vec,
        &_dso_handle);
    }
  }
  return &GCGPlayingExcelConfigMgr::getLevelChallengeRewardVec(unsigned int)const::dummy_vec;
};

// Line 86: range 0000000014420A14-0000000014420AB3
uint32_t __cdecl GCGPlayingExcelConfigMgr::getGroupRedirectLevelId(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t level_id)
{
  const data::GCGGameRewardExcelConfig *config_ptr; // [rsp+18h] [rbp-8h]

  config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(this, level_id);
  if ( !config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->group_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->group_id);
  }
  if ( config_ptr->group_id )
    return common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned int,unsigned int>>(
             &this->group_id_2_challenge_level_map_,
             &config_ptr->group_id,
             level_id);
  else
    return level_id;
};

// Line 100: range 0000000014420AB4-0000000014420CD1
const std::set<unsigned int> *__fastcall GCGPlayingExcelConfigMgr::getChallengeSetByLevelId(
        const GCGPlayingExcelConfigMgr *const this,
        __int64 level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::set<unsigned int>> *p_level_challenge_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 11 level_id:99 64 8 8 iter:101 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::getChallengeSetByLevelId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  p_level_challenge_map = &this->level_challenge_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_level_challenge_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->level_challenge_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v2 + 64))->second;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'GCGPlayingExcelConfigMgr::getChallengeSetByLevelId(unsigned int)::empty_set
      && __cxa_guard_acquire(&`guard variable for'GCGPlayingExcelConfigMgr::getChallengeSetByLevelId(unsigned int)::empty_set) )
    {
      std::set<unsigned int>::set(&GCGPlayingExcelConfigMgr::getChallengeSetByLevelId(unsigned int)const::empty_set);
      __cxa_guard_release(&`guard variable for'GCGPlayingExcelConfigMgr::getChallengeSetByLevelId(unsigned int)::empty_set);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::set<unsigned int>::~set,
        &GCGPlayingExcelConfigMgr::getChallengeSetByLevelId(unsigned int)const::empty_set,
        &_dso_handle);
    }
    result = &GCGPlayingExcelConfigMgr::getChallengeSetByLevelId(unsigned int)const::empty_set;
  }
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

// Line 111: range 0000000014420CD2-0000000014420EEF
const std::set<unsigned int> *__fastcall GCGPlayingExcelConfigMgr::getQuestUnlockCharacter(
        const GCGPlayingExcelConfigMgr *const this,
        __int64 quest_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::set<unsigned int>> *p_quest_unlock_character_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 quest_id:110 64 8 8 iter:112 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::getQuestUnlockCharacter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = quest_id;
  p_quest_unlock_character_map = &this->quest_unlock_character_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, quest_id);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_quest_unlock_character_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->quest_unlock_character_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v2 + 64))->second;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'GCGPlayingExcelConfigMgr::getQuestUnlockCharacter(unsigned int)::empty_set
      && __cxa_guard_acquire(&`guard variable for'GCGPlayingExcelConfigMgr::getQuestUnlockCharacter(unsigned int)::empty_set) )
    {
      std::set<unsigned int>::set(&GCGPlayingExcelConfigMgr::getQuestUnlockCharacter(unsigned int)const::empty_set);
      __cxa_guard_release(&`guard variable for'GCGPlayingExcelConfigMgr::getQuestUnlockCharacter(unsigned int)::empty_set);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::set<unsigned int>::~set,
        &GCGPlayingExcelConfigMgr::getQuestUnlockCharacter(unsigned int)const::empty_set,
        &_dso_handle);
    }
    result = &GCGPlayingExcelConfigMgr::getQuestUnlockCharacter(unsigned int)const::empty_set;
  }
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

// Line 122: range 0000000014420EF0-000000001442110D
const std::set<unsigned int> *__fastcall GCGPlayingExcelConfigMgr::getCharacterByCondQuest(
        const GCGPlayingExcelConfigMgr *const this,
        __int64 quest_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::set<unsigned int>> *p_cond_quest_character_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 quest_id:121 64 8 8 iter:123 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::getCharacterByCondQuest;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = quest_id;
  p_cond_quest_character_map = &this->cond_quest_character_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, quest_id);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_cond_quest_character_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->cond_quest_character_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v2 + 64))->second;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'GCGPlayingExcelConfigMgr::getCharacterByCondQuest(unsigned int)::empty_set
      && __cxa_guard_acquire(&`guard variable for'GCGPlayingExcelConfigMgr::getCharacterByCondQuest(unsigned int)::empty_set) )
    {
      std::set<unsigned int>::set(&GCGPlayingExcelConfigMgr::getCharacterByCondQuest(unsigned int)const::empty_set);
      __cxa_guard_release(&`guard variable for'GCGPlayingExcelConfigMgr::getCharacterByCondQuest(unsigned int)::empty_set);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::set<unsigned int>::~set,
        &GCGPlayingExcelConfigMgr::getCharacterByCondQuest(unsigned int)const::empty_set,
        &_dso_handle);
    }
    result = &GCGPlayingExcelConfigMgr::getCharacterByCondQuest(unsigned int)const::empty_set;
  }
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

// Line 133: range 000000001442110E-00000000144211E4
uint32_t __fastcall GCGPlayingExcelConfigMgr::getWorldConfigIdByLevelId(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t result; // eax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:132";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::getWorldConfigIdByLevelId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  result = common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,unsigned int>>(
             &this->world_level_2_config_map_,
             (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32),
             0);
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

// Line 138: range 00000000144211E6-00000000144212B7
bool __fastcall GCGPlayingExcelConfigMgr::isWorldChallengeUnlockQuest(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 quest_id:137";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::isWorldChallengeUnlockQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->world_challenge_unlock_quest_set_,
             (const unsigned int *)(v2 + 32));
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

// Line 143: range 00000000144212B8-0000000014421389
bool __fastcall GCGPlayingExcelConfigMgr::isWorldChallengeUnlockLevel(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:142";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::isWorldChallengeUnlockLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->world_challenge_unlock_level_set_,
             (const unsigned int *)(v2 + 32));
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

// Line 148: range 000000001442138A-000000001442145B
bool __fastcall GCGPlayingExcelConfigMgr::isBossChallengeUnlockQuest(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 quest_id:147";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::isBossChallengeUnlockQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->boss_challenge_unlock_quest_set_,
             (const unsigned int *)(v2 + 32));
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

// Line 153: range 000000001442145C-000000001442152D
bool __fastcall GCGPlayingExcelConfigMgr::isBossChallengeUnlockLevel(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:152";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::isBossChallengeUnlockLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->boss_challenge_unlock_level_set_,
             (const unsigned int *)(v2 + 32));
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

// Line 158: range 000000001442152E-00000000144215FF
bool __fastcall GCGPlayingExcelConfigMgr::isTavernChallengeUnlockLevel(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:157";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::isTavernChallengeUnlockLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->tavern_challenge_unlock_level_set_,
             (const unsigned int *)(v2 + 32));
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

// Line 163: range 0000000014421600-0000000014421866
_BOOL8 __fastcall GCGPlayingExcelConfigMgr::isStandScenePoint(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t scene_point_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  _BOOL8 result; // rax
  const data::GCGScenePointExcelConfig *scene_point_config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 scene_point_id:162 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::isStandScenePoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = scene_point_id;
  scene_point_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGScenePointExcelConfig(
                             this,
                             *(unsigned int *)(v2 + 48));
  if ( scene_point_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&scene_point_config_ptr->motion_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)scene_point_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_point_config_ptr->motion_type >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&scene_point_config_ptr->motion_type);
    }
    result = scene_point_config_ptr->motion_type == POINT_MOTION_STAND;
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "isStandScenePoint",
      167);
    v5 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[52])"findGCGScenePointExcelConfig fails, scene_point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 178: range 0000000014421868-00000000144218D6
bool __cdecl GCGPlayingExcelConfigMgr::isUseStandScenePointNpc(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t npc_id)
{
  const data::GCGWeekLevelExcelConfig *week_level_config_ptr; // [rsp+18h] [rbp-8h]

  week_level_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGWeekLevelExcelConfig(this, npc_id);
  if ( !week_level_config_ptr )
    return 0;
  if ( *(char *)(((unsigned __int64)&week_level_config_ptr->is_use_stand_scene_point >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &week_level_config_ptr->is_use_stand_scene_point,
      npc_id,
      &week_level_config_ptr->is_use_stand_scene_point);
  return week_level_config_ptr->is_use_stand_scene_point;
};

// Line 188: range 00000000144218D8-0000000014421B40
int32_t __cdecl GCGPlayingExcelConfigMgr::getTavernSceneDistributionVec(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t exclude_id,
        std::vector<unsigned int> *result_vec)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false,false> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::vector<unsigned int>::size_type v6; // rsi
  int32_t result; // eax
  data::GCGSceneDistributionExcelConfigMap *__for_range; // [rsp+20h] [rbp-A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false,false>::reference v11; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig> >::type *distribution_id; // [rsp+30h] [rbp-90h]
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false,false> *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:190 64 8 13 __for_end:190";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false>::__node_type *)GCGPlayingExcelConfigMgr::getTavernSceneDistributionVec;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  v6 = std::unordered_map<unsigned int,data::GCGSceneDistributionExcelConfig>::size(&this->gcg_scene_distribution_excel_config_map);
  std::vector<unsigned int>::reserve(result_vec, v6);
  __for_range = &this->gcg_scene_distribution_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], v6);
  v3[4]._M_cur = std::unordered_map<unsigned int,data::GCGSceneDistributionExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], v6);
  v3[8]._M_cur = std::unordered_map<unsigned int,data::GCGSceneDistributionExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false>(
            v3 + 4,
            v3 + 8) )
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false,false>::operator*(v3 + 4);
    distribution_id = std::get<0ul,unsigned int const,data::GCGSceneDistributionExcelConfig>(v11);
    std::get<1ul,unsigned int const,data::GCGSceneDistributionExcelConfig>(v11);
    if ( *(_BYTE *)(((unsigned __int64)distribution_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)distribution_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)distribution_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(distribution_id);
    }
    if ( exclude_id != *distribution_id )
      std::vector<unsigned int>::push_back(result_vec, distribution_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false,false>::operator++(v3 + 4);
  }
  result = 0;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 201: range 0000000014421B42-0000000014421E21
// local variable allocation has failed, the output may be wrong!
const data::GCGWeekRefreshExcelConfig *__cdecl GCGPlayingExcelConfigMgr::getWeekRefreshExcelConfig(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t gcg_level)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWeekRefreshExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // ecx
  const data::GCGWeekRefreshExcelConfig *result; // rax
  const data::GCGWeekRefreshExcelConfig *config_ptr; // [rsp+18h] [rbp-A8h]
  data::GCGWeekRefreshExcelConfigMap *__for_range; // [rsp+20h] [rbp-A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWeekRefreshExcelConfig>,false,false>::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGWeekRefreshExcelConfig> >::type *config; // [rsp+38h] [rbp-88h]
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWeekRefreshExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWeekRefreshExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGWeekRefreshExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGWeekRefreshExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:203 64 8 13 __for_end:203";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGWeekRefreshExcelConfig>,false>::__node_type *)GCGPlayingExcelConfigMgr::getWeekRefreshExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  config_ptr = 0LL;
  __for_range = &this->gcg_week_refresh_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], *(_QWORD *)&gcg_level);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::GCGWeekRefreshExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], *(_QWORD *)&gcg_level);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::GCGWeekRefreshExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGWeekRefreshExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWeekRefreshExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::GCGWeekRefreshExcelConfig>(v9);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGWeekRefreshExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGWeekRefreshExcelConfig>(v9);
    if ( *(_BYTE *)(((unsigned __int64)&config->gcg_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->gcg_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->gcg_level);
    }
    if ( gcg_level >= config->gcg_level )
    {
      if ( config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->gcg_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->gcg_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->gcg_level);
        }
        v5 = config_ptr->gcg_level;
        if ( *(_BYTE *)(((unsigned __int64)&config->gcg_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->gcg_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->gcg_level);
        }
        if ( v5 < config->gcg_level )
          config_ptr = config;
      }
      else
      {
        config_ptr = config;
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWeekRefreshExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = config_ptr;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGWeekRefreshExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 222: range 0000000014421E22-000000001442224F
__int64 __fastcall GCGPlayingExcelConfigMgr::getWeekNpcLevelId(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t npc_id,
        uint32_t gcg_level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  uint32_t level_id; // [rsp+10h] [rbp-100h]
  uint32_t config_gcg_level; // [rsp+14h] [rbp-FCh]
  const data::GCGWeekLevelExcelConfig *config_ptr; // [rsp+18h] [rbp-F8h]
  const std::vector<data::GCGWeekLevelCondConfig> *__for_range; // [rsp+20h] [rbp-F0h]
  const data::GCGWeekLevelCondConfig *level_cond_config; // [rsp+28h] [rbp-E8h]
  char v15[224]; // [rsp+30h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 10 npc_id:221 64 8 15 __for_begin:231 96 8 13 __for_end:231 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GCGPlayingExcelConfigMgr::getWeekNpcLevelId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = npc_id;
  v6 = *(unsigned int *)(v3 + 48);
  config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGWeekLevelExcelConfig(this, v6);
  if ( config_ptr )
  {
    level_id = 0;
    config_gcg_level = 0;
    __for_range = &config_ptr->level_cond_list;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, v6);
    *(std::vector<data::GCGWeekLevelCondConfig>::const_iterator *)(v3 + 64) = std::vector<data::GCGWeekLevelCondConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::vector<data::GCGWeekLevelCondConfig>::const_iterator *)(v3 + 96) = std::vector<data::GCGWeekLevelCondConfig>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::GCGWeekLevelCondConfig const*,std::vector<data::GCGWeekLevelCondConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::GCGWeekLevelCondConfig*,std::vector<data::GCGWeekLevelCondConfig> > *)(v3 + 64),
              (const __gnu_cxx::__normal_iterator<const data::GCGWeekLevelCondConfig*,std::vector<data::GCGWeekLevelCondConfig> > *)(v3 + 96)) )
    {
      level_cond_config = __gnu_cxx::__normal_iterator<data::GCGWeekLevelCondConfig const*,std::vector<data::GCGWeekLevelCondConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGWeekLevelCondConfig*,std::vector<data::GCGWeekLevelCondConfig> > *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&level_cond_config->level_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_cond_config->level_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&level_cond_config->level_id);
      }
      if ( level_cond_config->level_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&level_cond_config->gcg_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_cond_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_cond_config->gcg_level >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&level_cond_config->gcg_level);
        }
        if ( gcg_level >= level_cond_config->gcg_level && config_gcg_level <= level_cond_config->gcg_level )
        {
          if ( *(_BYTE *)(((unsigned __int64)&level_cond_config->level_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&level_cond_config->level_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&level_cond_config->level_id);
          }
          level_id = level_cond_config->level_id;
          config_gcg_level = level_cond_config->gcg_level;
        }
      }
      __gnu_cxx::__normal_iterator<data::GCGWeekLevelCondConfig const*,std::vector<data::GCGWeekLevelCondConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGWeekLevelCondConfig*,std::vector<data::GCGWeekLevelCondConfig> > *const)(v3 + 64));
    }
    result = level_id;
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "getWeekNpcLevelId",
      226);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[43])"findGCGWeekLevelExcelConfig fails, npc_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
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

// Line 247: range 0000000014422250-00000000144222C5
uint32_t __cdecl GCGPlayingExcelConfigMgr::getGameIdByMatchId(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t match_id)
{
  const data::GCGMatchExcelConfig *config_ptr; // [rsp+18h] [rbp-8h]

  config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGMatchExcelConfig(this, match_id);
  if ( !config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->game_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->game_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->game_id);
  }
  return config_ptr->game_id;
};

// Line 257: range 00000000144222C6-0000000014422333
uint32_t __cdecl GCGPlayingExcelConfigMgr::getAIGameIdByMatchId(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t match_id)
{
  const data::GCGMatchExcelConfig *config_ptr; // [rsp+18h] [rbp-8h]

  config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGMatchExcelConfig(this, match_id);
  if ( !config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->ai_game_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->ai_game_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->ai_game_id);
  }
  return config_ptr->ai_game_id;
};

// Line 267: range 0000000014422334-000000001442289A
std::pair<unsigned int,unsigned int> __fastcall GCGPlayingExcelConfigMgr::getScoreRank(
        const GCGPlayingExcelConfigMgr *const this,
        __int64 match_id,
        uint32_t score)
{
  std::pair<unsigned int,unsigned int> second; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>> *p_match_rank_map; // rdx
  std::map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>> *v8; // rdx
  __int64 v9; // rsi
  bool v10; // al
  std::map<unsigned int,std::pair<unsigned int,unsigned int>> *p_second; // rdx
  std::map<unsigned int,std::pair<unsigned int,unsigned int>> *v12; // rdx
  bool v13; // al
  std::map<unsigned int,std::pair<unsigned int,unsigned int>> *v14; // rdx
  bool v15; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::pointer v16; // rdx
  std::pair<unsigned int,unsigned int> *v17; // rax
  int v18; // edx
  std::pair<unsigned int,unsigned int> result; // rax
  char v21[336]; // [rsp+10h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 4 9 <unknown> 48 4 9 <unknown> 64 4 12 match_id:266 80 4 9 score:266 96 8 14 match_iter:26"
                        "8 128 8 9 <unknown> 160 8 13 rank_iter:271 192 8 9 <unknown> 224 8 9 <unknown> 256 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = GCGPlayingExcelConfigMgr::getScoreRank;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -202116352;
  *(_DWORD *)(v4 + 64) = match_id;
  *(_DWORD *)(v4 + 80) = score;
  p_match_rank_map = &this->match_rank_map_;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, match_id);
  *(std::map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::const_iterator *)(v4 + 96) = std::map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::find(p_match_rank_map, (const std::map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::key_type *)(v4 + 64));
  v8 = &this->match_rank_map_;
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 128, v4 + 64);
  *(std::map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::const_iterator *)(v4 + 128) = std::map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::end(v8);
  v9 = v4 + 128;
  v10 = std::operator!=(
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> > >::_Self *)(v4 + 96),
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> > >::_Self *)(v4 + 128));
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( !v10 )
    goto LABEL_22;
  *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
  p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> > > *const)(v4 + 96))->second;
  if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 160, v9);
  *(std::map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v4 + 160) = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::upper_bound(
                                                                                                 p_second,
                                                                                                 (const std::map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v4 + 80));
  *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
  v12 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> > > *const)(v4 + 96))->second;
  if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 192, v4 + 80);
  *(std::map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v4 + 192) = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::begin(v12);
  v9 = v4 + 192;
  v13 = std::operator!=(
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::_Self *)(v4 + 160),
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::_Self *)(v4 + 192));
  *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
  if ( !v13 )
    goto LABEL_20;
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>>::operator--(
    (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > > *const)(v4 + 160),
    0);
  *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
  v14 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> > > *const)(v4 + 96))->second;
  if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 224, 0LL);
  *(std::map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v4 + 224) = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::end(v14);
  v9 = v4 + 224;
  v15 = std::operator!=(
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::_Self *)(v4 + 160),
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::_Self *)(v4 + 224));
  *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
  if ( v15 )
  {
    v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > > *const)(v4 + 160));
    v17 = &v16->second;
    v9 = ((_DWORD)v16 + 11) & 7;
    if ( ((unsigned __int8)v17 & 7) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v17->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v17 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v17->second + 3) >> 3) + 0x7FFF8000) )
    {
      v9 = 8LL;
      __asan_report_load_n(v17, 8LL);
    }
    second = v16->second;
    v18 = 0;
  }
  else
  {
LABEL_20:
    v18 = 1;
  }
  *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( v18 == 1 )
  {
LABEL_22:
    *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 32, v9);
    *(_DWORD *)(v4 + 32) = 0;
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 48, v9);
    *(_DWORD *)(v4 + 48) = 0;
    std::pair<unsigned int,unsigned int>::pair<int,int,true>(
      (std::pair<unsigned int,unsigned int> *const)(v4 + 256),
      (int *)(v4 + 32),
      (int *)(v4 + 48));
    if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v4 + 256);
    second = *(std::pair<unsigned int,unsigned int> *)(v4 + 256);
  }
  result = second;
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 285: range 000000001442289C-0000000014422ACC
// local variable allocation has failed, the output may be wrong!
const data::GCGMatchRankExcelConfig *__cdecl GCGPlayingExcelConfigMgr::findGCGMatchRankExcelConfigByScore(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t match_id,
        uint32_t score)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const GCGPlayingExcelConfigMgr *v6; // rdx
  const data::GCGMatchRankExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 rank_id:286 64 8 9 <unknown> 96 16 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GCGPlayingExcelConfigMgr::findGCGMatchRankExcelConfigByScore;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48, *(_QWORD *)&match_id);
  *(_DWORD *)(v3 + 48) = 0;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, *(_QWORD *)&match_id);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 64) = GCGPlayingExcelConfigMgr::getScoreRank(this, match_id, score);
  if ( *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  std::tie<std::_Swallow_assign const,unsigned int>(
    (const std::_Swallow_assign *)(v3 + 96),
    (unsigned int *)&std::ignore,
    (const std::_Swallow_assign *)(v3 + 48),
    (unsigned int *)&std::ignore);
  std::tuple<std::_Swallow_assign const&,unsigned int &>::operator=<unsigned int,unsigned int>(
    (std::tuple<const std::_Swallow_assign&,unsigned int&> *const)(v3 + 96),
    (std::pair<unsigned int,unsigned int> *)(v3 + 64));
  *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  v6 = this;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v3 + 48);
  result = data::GCGPlayingExcelConfigMgrBase::findGCGMatchRankExcelConfig(v6, *(unsigned int *)(v3 + 48));
  if ( v9 == (char *)v3 )
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

// Line 292: range 0000000014422ACE-0000000014422EA4
const std::string *__fastcall GCGPlayingExcelConfigMgr::getMatchAIRandomName[abi:cxx11](
        const GCGPlayingExcelConfigMgr *const this,
        __int64 is_internal_server)
{
  std::string *p_name; // r14
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<bool,std::vector<unsigned int>> *p_match_ai_name_map; // rdx
  std::map<bool,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  unsigned __int64 v9; // rax
  std::vector<unsigned int>::reference v10; // rax
  uint32_t *v11; // rdx
  std::vector<data::GCGMatchNameExcelConfig>::size_type v12; // r15
  int v13; // r15d
  unsigned __int64 v14; // rax
  const std::string *result; // rax
  uint32_t index; // [rsp+24h] [rbp-FCh]
  std::vector<unsigned int> *name_index_vec; // [rsp+28h] [rbp-F8h]
  char v18[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 1 22 is_internal_server:291 64 8 8 iter:293 96 8 9 <unknown> 128 24 14 result_vec:297";
  *(_QWORD *)(v3 + 16) = GCGPlayingExcelConfigMgr::getMatchAIRandomName[abi:cxx11];
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_BYTE *)(v3 + 48) = is_internal_server;
  p_match_ai_name_map = &this->match_ai_name_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, is_internal_server);
  *(std::map<bool,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::map<bool,std::vector<unsigned int>>::find(
                                                                             p_match_ai_name_map,
                                                                             (const std::map<bool,std::vector<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->match_ai_name_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<bool,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::map<bool,std::vector<unsigned int>>::end(v7);
  v8 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<bool const,std::vector<unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<bool const,std::vector<unsigned int> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( !v8 )
    goto LABEL_25;
  name_index_vec = &std::_Rb_tree_const_iterator<std::pair<bool const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<bool const,std::vector<unsigned int> > > *const)(v3 + 64))->second;
  v9 = ((v3 + 128) >> 3) + 2147450880;
  *(_WORD *)v9 = 0;
  *(_BYTE *)(v9 + 2) = 0;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 128));
  common::tools::RandomUtils::randomSelect<unsigned int>(name_index_vec, (std::vector<unsigned int> *)(v3 + 128), 1u);
  if ( !std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 128)) )
    goto LABEL_14;
  v10 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 128), 0LL);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  index = *v11;
  v12 = *v11;
  if ( v12 < std::vector<data::GCGMatchNameExcelConfig>::size(&this->gcg_match_name_excel_config_vec) )
  {
    p_name = &std::vector<data::GCGMatchNameExcelConfig>::operator[](&this->gcg_match_name_excel_config_vec, index)->name;
    v13 = 0;
  }
  else
  {
LABEL_14:
    v13 = 1;
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 128));
  v14 = ((v3 + 128) >> 3) + 2147450880;
  *(_WORD *)v14 = -1800;
  *(_BYTE *)(v14 + 2) = -8;
  if ( v13 == 1 )
  {
LABEL_25:
    if ( !(_BYTE)`guard variable for'GCGPlayingExcelConfigMgr::getMatchAIRandomName[abi:cxx11](bool)::dummy_str
      && __cxa_guard_acquire(&`guard variable for'GCGPlayingExcelConfigMgr::getMatchAIRandomName[abi:cxx11](bool)::dummy_str) )
    {
      std::string::basic_string(&GCGPlayingExcelConfigMgr::getMatchAIRandomName[abi:cxx11](bool)const::dummy_str);
      __cxa_guard_release(&`guard variable for'GCGPlayingExcelConfigMgr::getMatchAIRandomName[abi:cxx11](bool)::dummy_str);
      __cxa_atexit(
        (void (__fastcall *)(void *))&std::string::~string,
        (void *)&GCGPlayingExcelConfigMgr::getMatchAIRandomName[abi:cxx11](bool)const::dummy_str,
        &_dso_handle);
    }
    p_name = (std::string *)&GCGPlayingExcelConfigMgr::getMatchAIRandomName[abi:cxx11](bool)const::dummy_str;
  }
  result = p_name;
  if ( v18 == (char *)v3 )
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

// Line 313: range 0000000014422EA6-000000001442303E
bool __fastcall GCGPlayingExcelConfigMgr::isQuestInQuestLevel(
        const GCGPlayingExcelConfigMgr *const this,
        __int64 quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_quest_2_quest_level_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool result; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 quest_id:312 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::isQuestInQuestLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = quest_id;
  p_quest_2_quest_level_map = &this->quest_2_quest_level_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, quest_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(p_quest_2_quest_level_map);
  v6 = &this->quest_2_quest_level_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, quest_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        v6,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  if ( v8 == (char *)v2 )
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

// Line 318: range 0000000014423040-000000001442323B
__int64 __fastcall GCGPlayingExcelConfigMgr::getQuestLevelByQuest(
        const GCGPlayingExcelConfigMgr *const this,
        __int64 quest_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_quest_2_quest_level_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 quest_id:317 64 8 8 iter:319 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::getQuestLevelByQuest;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = quest_id;
  p_quest_2_quest_level_map = &this->quest_2_quest_level_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, quest_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_quest_2_quest_level_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->quest_2_quest_level_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
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

// Line 328: range 000000001442323C-0000000014423437
__int64 __fastcall GCGPlayingExcelConfigMgr::getGuideGroupIdByQuest(
        const GCGPlayingExcelConfigMgr *const this,
        __int64 quest_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_quest_2_guide_group_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 quest_id:327 64 8 8 iter:329 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::getGuideGroupIdByQuest;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = quest_id;
  p_quest_2_guide_group_map = &this->quest_2_guide_group_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, quest_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_quest_2_guide_group_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->quest_2_guide_group_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
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

// Line 338: range 0000000014423438-0000000014423633
__int64 __fastcall GCGPlayingExcelConfigMgr::getGuideGroupIdByLevel(
        const GCGPlayingExcelConfigMgr *const this,
        __int64 level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_level_2_guide_group_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 level_id:337 64 8 8 iter:339 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::getGuideGroupIdByLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  p_level_2_guide_group_map = &this->level_2_guide_group_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_level_2_guide_group_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->level_2_guide_group_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
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

// Line 348: range 0000000014423634-0000000014423705
bool __fastcall GCGPlayingExcelConfigMgr::isRepeatableLevel(
        const GCGPlayingExcelConfigMgr *const this,
        uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:347";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::isRepeatableLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             &this->repeatable_level_set_,
             (const unsigned int *)(v2 + 32));
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

// Line 353: range 0000000014423706-0000000014423D97
__int64 __fastcall GCGPlayingExcelConfigMgr::checkLevelUnlockCond(
        const GCGPlayingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        data::GCGLevelUnlockCond cond,
        uint32_t param)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  __int64 v14; // rax
  char v17[400]; // [rsp+20h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 9 param:352 64 8 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = GCGPlayingExcelConfigMgr::checkLevelUnlockCond;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862724] = -218959118;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -202116109;
  *(_DWORD *)(v4 + 48) = param;
  if ( cond == GCG_LEVEL_UNLOCK_QUEST )
  {
    if ( data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(
           &txt_config_mgr->quest_config_mgr,
           *(unsigned int *)(v4 + 48)) )
    {
      goto LABEL_25;
    }
    if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 1) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "checkLevelUnlockCond",
      378);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v4 + 224),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v10, (const char (*)[32])byte_1AD709C0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( cond <= GCG_LEVEL_UNLOCK_QUEST )
    {
      if ( cond == GCG_LEVEL_UNLOCK_NONE )
        goto LABEL_25;
      if ( cond == GCG_LEVEL_UNLOCK_LEVEL )
      {
        if ( GCGGrowthExcelConfigMgr::getMaxLevel(&txt_config_mgr->gcg_growth_config_mgr) < *(_DWORD *)(v4 + 48) )
        {
          if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 96, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 96),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "checkLevelUnlockCond",
            364);
          v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v4 + 96),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v7, (const char (*)[40])byte_1AD70920);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
          result = 0xFFFFFFFFLL;
          goto LABEL_26;
        }
        if ( !*(_DWORD *)(v4 + 48) )
        {
          if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 160, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 160),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "checkLevelUnlockCond",
            369);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v4 + 160),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v9, (const char (*)[30])byte_1AD70980);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
          result = 0xFFFFFFFFLL;
          goto LABEL_26;
        }
LABEL_25:
        result = 0LL;
        goto LABEL_26;
      }
    }
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "checkLevelUnlockCond",
      385);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v4 + 288),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v12, (const char (*)[33])byte_1AD70A00);
    v14 = (__int64)data::enumValToStr(cond, (__int64)byte_1AD70A00);
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      v14 = __asan_report_store8(v4 + 64, byte_1AD70A00);
    *(_QWORD *)(v4 + 64) = v14;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v13, (const char *const *)(v4 + 64));
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 288));
    result = 0xFFFFFFFFLL;
  }
LABEL_26:
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 393: range 0000000014423D98-0000000014423E6B
__int64 __fastcall GCGPlayingExcelConfigMgr::checkAndInsertLevelId(
        GCGPlayingExcelConfigMgr *const this,
        uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v5; // rax
  __int64 result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:392";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::checkAndInsertLevelId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  v5 = std::set<unsigned int>::insert(&this->level_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
  result = *(unsigned int *)&v5.second;
  if ( v7 == (char *)v2 )
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

// Line 398: range 00000000144243F8-0000000014424D01
int32_t __cdecl GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig(
        GCGPlayingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  data::GCGCharacterDynamicLevel *M_current; // r14
  std::vector<data::GCGCharacterDynamicLevel>::iterator v10; // rax
  GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig::<lambda(const auto:23&, const auto:24&)> v11; // dl
  const std::set<unsigned int>::value_type *v12; // rsi
  std::set<unsigned int> *v13; // rdx
  char *v14; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v15; // rax
  int *v16; // rdx
  int v17; // ecx
  char v18; // al
  std::set<unsigned int> *v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  std::set<unsigned int>::value_type v22; // ecx
  char v23; // al
  unsigned __int64 v24; // rax
  int32_t result; // eax
  char txt_config_mgra; // [rsp+0h] [rbp-1C0h]
  data::GCGCharacterLevelExcelConfigMap *__for_range; // [rsp+18h] [rbp-1A8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-1A0h]
  const std::set<unsigned int>::value_type *id; // [rsp+28h] [rbp-198h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig> >::type *config; // [rsp+30h] [rbp-190h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-188h]
  std::vector<data::GCGCharacterDynamicLevel> *__for_range_1; // [rsp+40h] [rbp-180h]
  data::GCGCharacterDynamicLevel *normal_level; // [rsp+48h] [rbp-178h]
  char v34[368]; // [rsp+50h] [rbp-170h] BYREF

  txt_config_mgra = (char)txt_config_mgr;
  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 4 7 ret:399 48 4 12 quest_id:414 64 8 15 __for_begin:400 96 8 13 __for_end:400 128 8 15 __f"
                        "or_begin:414 160 8 13 __for_end:414 192 8 15 __for_begin:437 224 8 13 __for_end:437 256 24 17 rewrite_level:418";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, txt_config_mgr);
  *(_DWORD *)(v2 + 32) = 0;
  __for_range = &this->gcg_character_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGCharacterLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGCharacterLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGCharacterLevelExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGCharacterLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false> *)(v2 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::GCGCharacterLevelExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGCharacterLevelExcelConfig>(__in);
    common::tools::MiscUtils::erase_if<data::GCGCharacterDynamicLevel,GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig(TxtConfigMgr &)::{lambda(data::GCGCharacterDynamicLevel&)#1}>(
      &config->normal_level_list,
      (data::GCGCharacterDynamicLevel *)(v2 + 96),
      v5,
      v6,
      v7,
      v8,
      txt_config_mgra);
    M_current = std::vector<data::GCGCharacterDynamicLevel>::end(&config->normal_level_list)._M_current;
    v10._M_current = std::vector<data::GCGCharacterDynamicLevel>::begin(&config->normal_level_list)._M_current;
    std::sort___gnu_cxx::__normal_iterator_data::GCGCharacterDynamicLevel__std::vector_data::GCGCharacterDynamicLevel____GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig_TxtConfigMgr__::_lambda_const_auto_23__const_auto_24_____(
      v10,
      (__gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel*,std::vector<data::GCGCharacterDynamicLevel> >)M_current,
      v11);
    v12 = (const std::set<unsigned int>::value_type *)((((_BYTE)config + 60) & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)&config->pre_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->pre_quest_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->pre_quest_id);
    }
    if ( config->pre_quest_id )
    {
      if ( *(char *)(((unsigned __int64)&config->is_need_unlock >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&config->is_need_unlock, v12, &config->is_need_unlock);
      if ( !config->is_need_unlock )
      {
        v13 = std::map<unsigned int,std::set<unsigned int>>::operator[](
                &this->quest_unlock_character_map_,
                &config->pre_quest_id);
        v12 = id;
        std::set<unsigned int>::insert(v13, id);
      }
    }
    __for_range_0 = &config->cond_quest_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v12);
    *(std::vector<unsigned int>::iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v12);
    *(std::vector<unsigned int>::iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v14 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v15 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 128));
      v16 = (int *)v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      v17 = *v16;
      v18 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v18 != 0 && v18 <= 3 )
      {
        LOBYTE(v14) = v18 != 0;
        __asan_report_store4(v2 + 48, v14);
      }
      *(_DWORD *)(v2 + 48) = v17;
      v19 = std::map<unsigned int,std::set<unsigned int>>::operator[](
              &this->cond_quest_character_map_,
              (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
      std::set<unsigned int>::insert(v19, id);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    v20 = ((v2 + 256) >> 3) + 2147450880;
    *(_WORD *)v20 = 0;
    *(_BYTE *)(v20 + 2) = 0;
    v21 = ((unsigned __int8)id & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    v22 = *id;
    v23 = *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000);
    LOBYTE(v21) = v23 != 0;
    if ( v23 != 0 && v23 <= 3 )
      __asan_report_store4(v2 + 256, v21);
    *(_DWORD *)(v2 + 256) = v22;
    if ( *(_BYTE *)(((v2 + 264) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 264, v21);
    *(_QWORD *)(v2 + 264) = this;
    if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 272, v21);
    *(_QWORD *)(v2 + 272) = v2 + 32;
    __for_range_1 = &config->normal_level_list;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v21);
    *(std::vector<data::GCGCharacterDynamicLevel>::iterator *)(v2 + 192) = std::vector<data::GCGCharacterDynamicLevel>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v21);
    *(std::vector<data::GCGCharacterDynamicLevel>::iterator *)(v2 + 224) = std::vector<data::GCGCharacterDynamicLevel>::end(__for_range_1);
    while ( __gnu_cxx::operator!=<data::GCGCharacterDynamicLevel *,std::vector<data::GCGCharacterDynamicLevel>>(
              (const __gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel*,std::vector<data::GCGCharacterDynamicLevel> > *)(v2 + 192),
              (const __gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel*,std::vector<data::GCGCharacterDynamicLevel> > *)(v2 + 224)) )
    {
      normal_level = __gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel *,std::vector<data::GCGCharacterDynamicLevel>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel*,std::vector<data::GCGCharacterDynamicLevel> > *const)(v2 + 192));
      std::unordered_set<unsigned int>::insert(&this->valid_group_level_set_, &normal_level->level_id);
      if ( *(_BYTE *)(((unsigned __int64)&normal_level->level_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&normal_level->level_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&normal_level->level_id);
      }
      GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig(TxtConfigMgr &)::{lambda(unsigned int)#3}::operator()(
        (const GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig::<lambda(uint32_t)> *const)(v2 + 256),
        normal_level->level_id);
      __gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel *,std::vector<data::GCGCharacterDynamicLevel>>::operator++((__gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel*,std::vector<data::GCGCharacterDynamicLevel> > *const)(v2 + 192));
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&config->hard_level_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->hard_level_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->hard_level_id);
    }
    GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig(TxtConfigMgr &)::{lambda(unsigned int)#3}::operator()(
      (const GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig::<lambda(uint32_t)> *const)(v2 + 256),
      config->hard_level_id);
    v24 = ((v2 + 256) >> 3) + 2147450880;
    *(_WORD *)v24 = -1800;
    *(_BYTE *)(v24 + 2) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v34 == (char *)v2 )
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
  return result;
};

// Line 402: range 0000000014423E6C-0000000014423EBC
bool __cdecl GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig(TxtConfigMgr &)::{lambda(data::GCGCharacterDynamicLevel &)#1}::operator()(
        const GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig::<lambda(data::GCGCharacterDynamicLevel&)> *const __closure,
        data::GCGCharacterDynamicLevel *level_info)
{
  if ( *(_BYTE *)(((unsigned __int64)&level_info->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&level_info->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&level_info->level_id);
  }
  return level_info->level_id == 0;
};

// Line 406: range 0000000014727100-000000001472719F
bool __cdecl GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig::_lambda_const_auto_23___const_auto_24___::operator()_data::GCGCharacterDynamicLevel_data::GCGCharacterDynamicLevel_(
        const GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig::<lambda(const auto:23&, const auto:24&)> *const __closure,
        const data::GCGCharacterDynamicLevel *lhs,
        const data::GCGCharacterDynamicLevel *rhs)
{
  uint32_t gcg_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->gcg_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->gcg_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->gcg_level);
  }
  gcg_level = lhs->gcg_level;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->gcg_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->gcg_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->gcg_level);
  }
  return gcg_level < rhs->gcg_level;
};

// Line 418: range 0000000014423EBE-00000000144243F7
void __fastcall GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig(TxtConfigMgr &)::{lambda(unsigned int)#3}::operator()(
        const GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig::<lambda(uint32_t)> *const __closure,
        uint32_t level_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rsi
  std::set<unsigned int> *p_tavern_challenge_unlock_level_set; // r14
  const std::set<unsigned int>::value_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  const GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig::<lambda(uint32_t)> *v13; // rsi
  int32_t *ret; // rdx
  char v15; // cl
  data::GCGGameRewardExcelConfig *level_config_ptr; // [rsp+18h] [rbp-108h]
  std::vector<data::GCGLevelCond> *__for_range; // [rsp+20h] [rbp-100h]
  data::GCGLevelCond *cond; // [rsp+28h] [rbp-F8h]
  char v19[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 level_id:418 64 8 15 __for_begin:423 96 8 13 __for_end:423 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig(TxtConfigMgr &)::{lambda(unsigned int)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  v5 = *(unsigned int *)(v2 + 48);
  level_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(__closure->__this, v5);
  if ( level_config_ptr )
  {
    __for_range = &level_config_ptr->cond_list;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v5);
    *(std::vector<data::GCGLevelCond>::iterator *)(v2 + 64) = std::vector<data::GCGLevelCond>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<data::GCGLevelCond>::iterator *)(v2 + 96) = std::vector<data::GCGLevelCond>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::GCGLevelCond *,std::vector<data::GCGLevelCond>>(
              (const __gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *)(v2 + 64),
              (const __gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *)(v2 + 96)) )
    {
      cond = __gnu_cxx::__normal_iterator<data::GCGLevelCond *,std::vector<data::GCGLevelCond>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->type);
      }
      if ( cond->type == FINISH_LEVEL_CHALLENGE && std::vector<unsigned int>::size(&cond->param_list) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__this);
        p_tavern_challenge_unlock_level_set = &__closure->__this->tavern_challenge_unlock_level_set_;
        v8 = std::vector<unsigned int>::operator[](&cond->param_list, 0LL);
        std::set<unsigned int>::insert(p_tavern_challenge_unlock_level_set, v8);
      }
      __gnu_cxx::__normal_iterator<data::GCGLevelCond *,std::vector<data::GCGLevelCond>>::operator++((__gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *const)(v2 + 64));
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  if ( (unsigned __int8)GCGPlayingExcelConfigMgr::checkAndInsertLevelId(__closure->__this, *(_DWORD *)(v2 + 48)) != 1 )
  {
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "operator()",
      433);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v9, (const char (*)[63])byte_1AD70AE0);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" ID: ");
    v13 = __closure;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &__closure->__id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__ret >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__ret);
    ret = __closure->__ret;
    v15 = *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000);
    if ( v15 != 0 && (char)(((unsigned __int8)ret & 7) + 3) >= v15 )
    {
      LOBYTE(v13) = v15 != 0;
      __asan_report_store4(__closure->__ret, v13);
    }
    *ret = -1;
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
};

// Line 448: range 0000000014424DA6-000000001442564E
int32_t __cdecl GCGPlayingExcelConfigMgr::rewriteGameRewardConfig(
        GCGPlayingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::GCGChallengeReward *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  std::set<unsigned int> *v14; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  uint32_t group_id; // r14d
  uint32_t *p_level_id; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v26; // rax
  uint32_t *v27; // rdx
  char v28; // cl
  std::set<unsigned int> *v29; // rax
  uint32_t level_id; // r14d
  uint32_t *p_group_id; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v32; // rax
  uint32_t *v33; // rdx
  char v34; // cl
  int32_t result; // eax
  char txt_config_mgra; // [rsp+0h] [rbp-1A0h]
  char txt_config_mgrb; // [rsp+0h] [rbp-1A0h]
  int32_t ret; // [rsp+1Ch] [rbp-184h]
  data::GCGGameRewardExcelConfigMap *__for_range; // [rsp+20h] [rbp-180h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameRewardExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-178h]
  const std::map<unsigned int,std::set<unsigned int>>::key_type *id; // [rsp+30h] [rbp-170h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGGameRewardExcelConfig> >::type *config; // [rsp+38h] [rbp-168h]
  std::vector<data::GCGChallengeReward> *__for_range_0; // [rsp+40h] [rbp-160h]
  data::GCGChallengeReward *challenge; // [rsp+48h] [rbp-158h]
  char v45[336]; // [rsp+50h] [rbp-150h] BYREF

  txt_config_mgra = (char)txt_config_mgr;
  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:450 64 8 13 __for_end:450 96 8 15 __for_begin:460 128 8 13 __for_end:460 1"
                        "60 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::rewriteGameRewardConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->gcg_game_reward_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGGameRewardExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGGameRewardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGGameRewardExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGGameRewardExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (data::GCGChallengeReward *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GCGGameRewardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGGameRewardExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGGameRewardExcelConfig>,false> *)(v2 + 64)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameRewardExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameRewardExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::GCGGameRewardExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGGameRewardExcelConfig>(__in);
    common::tools::MiscUtils::erase_if<data::GCGChallengeReward,GCGPlayingExcelConfigMgr::rewriteGameRewardConfig(TxtConfigMgr &)::{lambda(data::GCGChallengeReward&)#1}>(
      &config->challenge_reward_list,
      v5,
      v6,
      v7,
      v8,
      v9,
      txt_config_mgra);
    common::tools::MiscUtils::erase_if<data::GCGLevelCond,GCGPlayingExcelConfigMgr::rewriteGameRewardConfig(TxtConfigMgr &)::{lambda(data::GCGLevelCond&)#2}>(
      &config->cond_list,
      (data::GCGLevelCond *)v5,
      v10,
      v11,
      v12,
      v13,
      txt_config_mgrb);
    __for_range_0 = &config->challenge_reward_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<data::GCGChallengeReward>::iterator *)(v2 + 96) = std::vector<data::GCGChallengeReward>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<data::GCGChallengeReward>::iterator *)(v2 + 128) = std::vector<data::GCGChallengeReward>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::GCGChallengeReward *,std::vector<data::GCGChallengeReward>>(
              (const __gnu_cxx::__normal_iterator<data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *)(v2 + 128)) )
    {
      challenge = __gnu_cxx::__normal_iterator<data::GCGChallengeReward *,std::vector<data::GCGChallengeReward>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *const)(v2 + 96));
      v14 = std::map<unsigned int,std::set<unsigned int>>::operator[](&this->level_challenge_map_, id);
      v15 = std::set<unsigned int>::insert(v14, &challenge->challenge_id);
      if ( !v15.second )
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
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "rewriteGameRewardConfig",
          464);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v16, (const char (*)[20])byte_1AD70CE0);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &challenge->challenge_id);
        v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<data::GCGChallengeReward *,std::vector<data::GCGChallengeReward>>::operator++((__gnu_cxx::__normal_iterator<data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( (unsigned __int8)std::string::empty() != 1
      && common::tools::StringUtils::strToNum<unsigned int>(&config->field_id_str, &config->field_id, 1) )
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "rewriteGameRewardConfig",
        472);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v21 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v20, (const char (*)[34])byte_1AD70D20);
      v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &config->field_id_str);
      v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" ID: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->group_id);
    }
    if ( config->group_id )
    {
      group_id = config->group_id;
      p_level_id = &config->level_id;
      v26 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->level_id_2_group_id_map_,
              &config->level_id);
      v27 = v26;
      v28 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
      if ( v28 != 0 && (char)(((unsigned __int8)v26 & 7) + 3) >= v28 )
      {
        LOBYTE(p_level_id) = v28 != 0;
        __asan_report_store4(v26, p_level_id);
      }
      *v27 = group_id;
      v29 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
              &this->group_level_map_,
              &config->group_id);
      std::set<unsigned int>::insert(v29, &config->level_id);
      if ( !std::vector<data::GCGChallengeReward>::empty(&config->challenge_reward_list) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->level_id);
        }
        level_id = config->level_id;
        p_group_id = &config->group_id;
        v32 = std::unordered_map<unsigned int,unsigned int>::operator[](
                &this->group_id_2_challenge_level_map_,
                &config->group_id);
        v33 = v32;
        v34 = *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000);
        if ( v34 != 0 && (char)(((unsigned __int8)v32 & 7) + 3) >= v34 )
        {
          LOBYTE(p_group_id) = v34 != 0;
          __asan_report_store4(v32, p_group_id);
        }
        *v33 = level_id;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameRewardExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameRewardExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v45 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 452: range 0000000014424D02-0000000014424D52
bool __cdecl GCGPlayingExcelConfigMgr::rewriteGameRewardConfig(TxtConfigMgr &)::{lambda(data::GCGChallengeReward &)#1}::operator()(
        const GCGPlayingExcelConfigMgr::rewriteGameRewardConfig::<lambda(data::GCGChallengeReward&)> *const __closure,
        data::GCGChallengeReward *challenge)
{
  if ( *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&challenge->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&challenge->challenge_id);
  }
  return challenge->challenge_id == 0;
};

// Line 456: range 0000000014424D54-0000000014424DA4
bool __cdecl GCGPlayingExcelConfigMgr::rewriteGameRewardConfig(TxtConfigMgr &)::{lambda(data::GCGLevelCond &)#2}::operator()(
        const GCGPlayingExcelConfigMgr::rewriteGameRewardConfig::<lambda(data::GCGLevelCond&)> *const __closure,
        data::GCGLevelCond *cond)
{
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  return cond->type == NONE_2;
};

// Line 490: range 0000000014425650-0000000014427F03
int32_t __cdecl GCGPlayingExcelConfigMgr::rewriteChallengeConfig(
        GCGPlayingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::GCGChallengeType *p_type; // rax
  int type; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  const std::string *v13; // rax
  char *v14; // rsi
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::vector<unsigned int> *v19; // rcx
  int v20; // edi
  unsigned int *v21; // rdx
  char v22; // al
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  _DWORD *v27; // rax
  const std::string *v28; // rax
  char *v29; // rsi
  unsigned __int64 v30; // rax
  char *i; // r14
  _DWORD *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  const std::string *v35; // rax
  unsigned __int64 v36; // rax
  char *v37; // rsi
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  int v40; // eax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  __int64 v43; // rsi
  std::vector<unsigned int>::size_type v44; // rax
  unsigned __int64 *v45; // rdx
  char *v46; // rsi
  char *v47; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v48; // rax
  int *v49; // rdx
  int v50; // ecx
  char v51; // al
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  _DWORD *v54; // rax
  const std::string *v55; // rax
  char *v56; // rsi
  unsigned __int64 v57; // rax
  char *j; // r14
  _DWORD *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // r14
  const std::string *v62; // rax
  char *v63; // rsi
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rdx
  int v66; // eax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rdx
  std::vector<unsigned int> *p_param_vec; // rcx
  int v70; // edi
  unsigned int *v71; // rdx
  char v72; // al
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  bool v79; // [rsp+Fh] [rbp-811h]
  bool v80; // [rsp+Fh] [rbp-811h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-810h]
  std::initializer_list<std::string > v82; // [rsp+20h] [rbp-800h]
  int32_t ret; // [rsp+44h] [rbp-7DCh]
  data::GCGChallengeExcelConfigMap *__for_range; // [rsp+48h] [rbp-7D8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGChallengeExcelConfig>,false,false>::reference __in; // [rsp+50h] [rbp-7D0h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGChallengeExcelConfig> >::type *config; // [rsp+60h] [rbp-7C0h]
  std::vector<std::string> *__for_range_0; // [rsp+68h] [rbp-7B8h]
  std::string *card_type_name; // [rsp+70h] [rbp-7B0h]
  std::vector<unsigned int> *__for_range_1; // [rsp+78h] [rbp-7A8h]
  std::vector<std::string> *__for_range_2; // [rsp+80h] [rbp-7A0h]
  std::string *card_tag_name; // [rsp+88h] [rbp-798h]
  char v92[1936]; // [rsp+90h] [rbp-790h] BYREF

  v2 = (unsigned __int64)v92;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1888LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "42 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 4 16 element_type:524 160 4 9 <unknown> 176 4 13 card_type:562 192 4 9 <unknown> "
                        "208 4 13 card_type:584 224 4 12 tag_type:599 240 4 9 <unknown> 256 8 15 __for_begin:492 288 8 13"
                        " __for_end:492 320 8 15 __for_begin:560 352 8 13 __for_end:560 384 8 9 <unknown> 416 8 15 __for_"
                        "begin:584 448 8 13 __for_end:584 480 8 15 __for_begin:597 512 8 13 __for_end:597 544 24 22 card_"
                        "type_name_vec:551 608 24 9 <unknown> 672 24 17 card_type_vec:559 736 24 21 card_tag_name_vec:589"
                        " 800 24 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown>"
                        " 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unkn"
                        "own> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 64 9 <"
                        "unknown> 1792 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::rewriteChallengeConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234556927;
  v4[536862725] = -234556924;
  v4[536862726] = -234556924;
  v4[536862727] = -234556924;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862733] = -218959360;
  v4[536862734] = -218959360;
  v4[536862735] = -218959360;
  v4[536862736] = -218959360;
  v4[536862737] = -234881024;
  v4[536862738] = -218959118;
  v4[536862739] = -234881024;
  v4[536862740] = -218959118;
  v4[536862741] = -234881024;
  v4[536862742] = -218959118;
  v4[536862743] = -234881024;
  v4[536862744] = -218959118;
  v4[536862745] = -234881024;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -218959118;
  v4[536862754] = -218959118;
  v4[536862756] = -218959118;
  v4[536862758] = -218959118;
  v4[536862760] = -218959118;
  v4[536862762] = -218959118;
  v4[536862764] = -218959118;
  v4[536862766] = -218959118;
  v4[536862768] = -218959118;
  v4[536862770] = -218959118;
  v4[536862772] = -218959118;
  v4[536862775] = -218959118;
  v4[536862778] = -202116109;
  ret = 0;
  __for_range = &this->gcg_challenge_excel_config_map;
  if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 256, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGChallengeExcelConfig>::iterator *)(v2 + 256) = std::unordered_map<unsigned int,data::GCGChallengeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 288, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGChallengeExcelConfig>::iterator *)(v2 + 288) = std::unordered_map<unsigned int,data::GCGChallengeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGChallengeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGChallengeExcelConfig>,false> *)(v2 + 256),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGChallengeExcelConfig>,false> *)(v2 + 288)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGChallengeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGChallengeExcelConfig>,false,false> *const)(v2 + 256));
    std::get<0ul,unsigned int const,data::GCGChallengeExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGChallengeExcelConfig>(__in);
    p_type = &config->type;
    if ( *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_type);
    }
    type = config->type;
    if ( type == 16 )
    {
      std::vector<unsigned int>::clear(&config->param_vec);
      if ( std::vector<std::string>::size(&config->param_list) > 1 )
      {
        v25 = ((v2 + 544) >> 3) + 2147450880;
        *(_WORD *)v25 = 0;
        *(_BYTE *)(v25 + 2) = 0;
        std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 544));
        v26 = ((v2 + 608) >> 3) + 2147450880;
        *(_WORD *)v26 = 0;
        *(_BYTE *)(v26 + 2) = 0;
        v27 = (_DWORD *)(((v2 + 1696) >> 3) + 2147450880);
        *v27 = 0;
        v27[1] = 0;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 48);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1696),
          ",",
          (const std::allocator<char> *)(v2 + 48));
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1728),
          ";",
          (const std::allocator<char> *)(v2 + 64));
        __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1696);
        __l._M_len = 2LL;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 80));
        std::vector<std::string>::vector(
          (std::vector<std::string> *const)(v2 + 608),
          __l,
          (const std::vector<std::string>::allocator_type *)(v2 + 80));
        v28 = std::vector<std::string>::operator[](&config->param_list, 1uLL);
        v29 = (char *)(v2 + 608);
        v79 = common::tools::StringUtils::splitToListBySeps(
                v28,
                (const std::vector<std::string> *)(v2 + 608),
                (std::vector<std::string> *)(v2 + 544),
                0) != 0;
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 608));
        v30 = ((v2 + 608) >> 3) + 2147450880;
        *(_WORD *)v30 = -1800;
        *(_BYTE *)(v30 + 2) = -8;
        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 80));
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        for ( i = (char *)(v2 + 1760); i != (char *)(v2 + 1696); std::string::~string(i) )
          i -= 32;
        v32 = (_DWORD *)(((v2 + 1696) >> 3) + 2147450880);
        *v32 = -117901064;
        v32[1] = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        std::allocator<char>::~allocator(v2 + 48);
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        if ( v79 )
        {
          *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1248, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1248),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "rewriteChallengeConfig",
            554);
          v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1248),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v34 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  v33,
                  (const char (*)[31])"splitToListBySeps fail, param:");
          v35 = std::vector<std::string>::operator[](&config->param_list, 1uLL);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, v35);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
          *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
          v36 = ((v2 + 672) >> 3) + 2147450880;
          *(_WORD *)v36 = 0;
          *(_BYTE *)(v36 + 2) = 0;
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 672));
          __for_range_0 = (std::vector<std::string> *)(v2 + 544);
          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 320, v29);
          *(std::vector<std::string>::iterator *)(v2 + 320) = std::vector<std::string>::begin(__for_range_0);
          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 352, v29);
          *(std::vector<std::string>::iterator *)(v2 + 352) = std::vector<std::string>::end(__for_range_0);
          while ( 1 )
          {
            v37 = (char *)(v2 + 352);
            if ( !__gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                    (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 320),
                    (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 352)) )
              break;
            card_type_name = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 320));
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 176, v37);
            *(_DWORD *)(v2 + 176) = 0;
            if ( !data::enumStrToVal(card_type_name, (data::GCGCardType *)(v2 + 176)) )
            {
              *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1312, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1312),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                "rewriteChallengeConfig",
                565);
              v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1312),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v39 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v38,
                      (const char (*)[13])byte_1AD71200);
              v37 = (char *)card_type_name;
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, card_type_name);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
              *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
              v40 = 0;
            }
            else
            {
              if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 176);
              if ( *(_DWORD *)(v2 + 176) )
              {
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 4;
                if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_load4(v2 + 176);
                v43 = *(unsigned int *)(v2 + 176);
                if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v2 + 192, v43);
                *(_DWORD *)(v2 + 192) = v43;
                v37 = (char *)(v2 + 192);
                std::vector<unsigned int>::emplace_back<unsigned int>(
                  (std::vector<unsigned int> *const)(v2 + 672),
                  (unsigned int *)(v2 + 192),
                  (unsigned int *)(v2 + 192));
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                v40 = 1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1376) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1376, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1376),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                  "rewriteChallengeConfig",
                  571);
                v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1376),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v42 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v41,
                        (const char (*)[13])byte_1AD71200);
                v37 = (char *)card_type_name;
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v42, card_type_name);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
                *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
                v40 = 0;
              }
            }
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            if ( v40 != 1 )
              break;
            __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 320));
          }
          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
          if ( !ret )
          {
            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
            v44 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 672));
            v45 = (unsigned __int64 *)(v2 + 384);
            if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
              v44 = __asan_report_store8(v2 + 384, v37);
            *(_QWORD *)(v2 + 384) = v44;
            v46 = (char *)(v2 + 384);
            std::vector<unsigned int>::emplace_back<unsigned long>(
              &config->param_vec,
              (unsigned __int64 *)(v2 + 384),
              v45);
            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
            __for_range_1 = (std::vector<unsigned int> *)(v2 + 672);
            *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 416, v46);
            *(std::vector<unsigned int>::iterator *)(v2 + 416) = std::vector<unsigned int>::begin(__for_range_1);
            *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 448, v46);
            *(std::vector<unsigned int>::iterator *)(v2 + 448) = std::vector<unsigned int>::end(__for_range_1);
            while ( 1 )
            {
              v47 = (char *)(v2 + 448);
              if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 416),
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 448)) )
                break;
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 4;
              v48 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 416));
              v49 = (int *)v48;
              if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v48);
              }
              v50 = *v49;
              v51 = *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000);
              if ( v51 != 0 && v51 <= 3 )
              {
                LOBYTE(v47) = v51 != 0;
                __asan_report_store4(v2 + 208, v47);
              }
              *(_DWORD *)(v2 + 208) = v50;
              std::vector<unsigned int>::emplace_back<unsigned int &>(
                &config->param_vec,
                (unsigned int *)(v2 + 208),
                (unsigned int *)&config->param_vec);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 416));
            }
            *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
            v52 = ((v2 + 736) >> 3) + 2147450880;
            *(_WORD *)v52 = 0;
            *(_BYTE *)(v52 + 2) = 0;
            std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 736));
            v53 = ((v2 + 800) >> 3) + 2147450880;
            *(_WORD *)v53 = 0;
            *(_BYTE *)(v53 + 2) = 0;
            v54 = (_DWORD *)(((v2 + 1792) >> 3) + 2147450880);
            *v54 = 0;
            v54[1] = 0;
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 96);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1792),
              ",",
              (const std::allocator<char> *)(v2 + 96));
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1824),
              ";",
              (const std::allocator<char> *)(v2 + 112));
            v82._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1792);
            v82._M_len = 2LL;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 128));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 800),
              v82,
              (const std::vector<std::string>::allocator_type *)(v2 + 128));
            v55 = std::vector<std::string>::operator[](&config->param_list, 0LL);
            v56 = (char *)(v2 + 800);
            v80 = common::tools::StringUtils::splitToListBySeps(
                    v55,
                    (const std::vector<std::string> *)(v2 + 800),
                    (std::vector<std::string> *)(v2 + 736),
                    0) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 800));
            v57 = ((v2 + 800) >> 3) + 2147450880;
            *(_WORD *)v57 = -1800;
            *(_BYTE *)(v57 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 128));
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            for ( j = (char *)(v2 + 1856); j != (char *)(v2 + 1792); std::string::~string(j) )
              j -= 32;
            v59 = (_DWORD *)(((v2 + 1792) >> 3) + 2147450880);
            *v59 = -117901064;
            v59[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 96);
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
            if ( v80 )
            {
              *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1440) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1440, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1440),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                "rewriteChallengeConfig",
                592);
              v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1440),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v61 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      v60,
                      (const char (*)[31])"splitToListBySeps fail, param:");
              v62 = std::vector<std::string>::operator[](&config->param_list, 0LL);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v61, v62);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
              *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              __for_range_2 = (std::vector<std::string> *)(v2 + 736);
              *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 480, v56);
              *(std::vector<std::string>::iterator *)(v2 + 480) = std::vector<std::string>::begin(__for_range_2);
              *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 512, v56);
              *(std::vector<std::string>::iterator *)(v2 + 512) = std::vector<std::string>::end(__for_range_2);
              while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                        (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 480),
                        (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 512)) )
              {
                card_tag_name = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 480));
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 4;
                if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v2 + 224, v2 + 512);
                *(_DWORD *)(v2 + 224) = 0;
                v63 = (char *)(v2 + 224);
                if ( !data::enumStrToVal(card_tag_name, (data::GCGTagType *)(v2 + 224)) )
                {
                  *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1504) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1504, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1504),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                    "rewriteChallengeConfig",
                    602);
                  v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1504),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v65 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                          v64,
                          (const char (*)[13])byte_1AD71200);
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v65, card_tag_name);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
                  *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                  v66 = 0;
                }
                else
                {
                  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(v2 + 224);
                  }
                  if ( *(_DWORD *)(v2 + 224) )
                  {
                    p_param_vec = &config->param_vec;
                    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 4;
                    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(v2 + 224);
                    }
                    v70 = *(_DWORD *)(v2 + 224);
                    v71 = (unsigned int *)(v2 + 240);
                    v72 = *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000);
                    if ( v72 != 0 && v72 <= 3 )
                    {
                      v70 = v2 + 240;
                      LOBYTE(v63) = v72 != 0;
                      __asan_report_store4(v2 + 240, v63);
                    }
                    *(_DWORD *)(v2 + 240) = v70;
                    std::vector<unsigned int>::emplace_back<unsigned int>(p_param_vec, (unsigned int *)(v2 + 240), v71);
                    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                    v66 = 1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1568) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1568, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1568),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                      "rewriteChallengeConfig",
                      608);
                    v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1568),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v68 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                            v67,
                            (const char (*)[13])byte_1AD71200);
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v68, card_tag_name);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
                    *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                    v66 = 0;
                  }
                }
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                if ( v66 != 1 )
                  break;
                __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 480));
              }
              *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
            }
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 736));
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 672));
        }
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 544));
      }
      else
      {
        *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1184, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1184),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "rewriteChallengeConfig",
          546);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1184),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v23, (const char (*)[13])byte_1AD711C0);
        common::milog::MiLogStream::operator<<<std::string>(v24, &config->param_list);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
        *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      v73 = ((v2 + 544) >> 3) + 2147450880;
      *(_WORD *)v73 = -1800;
      *(_BYTE *)(v73 + 2) = -8;
      v74 = ((v2 + 672) >> 3) + 2147450880;
      *(_WORD *)v74 = -1800;
      *(_BYTE *)(v74 + 2) = -8;
      v75 = ((v2 + 736) >> 3) + 2147450880;
      *(_WORD *)v75 = -1800;
      *(_BYTE *)(v75 + 2) = -8;
    }
    else
    {
      if ( type > 16 )
        goto LABEL_137;
      if ( type != 13 )
      {
        if ( type <= 13 && (type == 6 || type >= 6 && (unsigned int)(type - 9) <= 1) )
        {
          if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(&config->param_list, &config->param_vec) )
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
              "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
              "rewriteChallengeConfig",
              502);
            v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v2 + 864),
                   (const char (*)[16])"[CONFIG_ERROR] ");
            v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v7, (const char (*)[25])byte_1AD71140);
            common::milog::MiLogStream::operator<<<std::string>(v8, &config->param_list);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            common::tools::MiscUtils::removeEmptyElement<unsigned int>(&config->param_vec);
            if ( std::vector<unsigned int>::empty(&config->param_vec) )
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
                "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                "rewriteChallengeConfig",
                509);
              v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v2 + 928),
                     (const char (*)[16])"[CONFIG_ERROR] ");
              v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      v9,
                      (const char (*)[25])byte_1AD71180);
              common::milog::MiLogStream::operator<<<std::string>(v10, &config->param_list);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          goto LABEL_142;
        }
LABEL_137:
        if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(&config->param_list, &config->param_vec) )
        {
          *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1632) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1663) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1663) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1632, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1632),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "rewriteChallengeConfig",
            620);
          v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1632),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v77 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v76, (const char (*)[25])byte_1AD71140);
          common::milog::MiLogStream::operator<<<std::string>(v77, &config->param_list);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
          *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
          common::tools::MiscUtils::removeEmptyElement<unsigned int>(&config->param_vec);
        }
        goto LABEL_142;
      }
      std::vector<unsigned int>::clear(&config->param_vec);
      if ( std::vector<std::string>::empty(&config->param_list) )
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
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "rewriteChallengeConfig",
          520);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 992),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])byte_1AD711C0);
        common::milog::MiLogStream::operator<<<std::string>(v12, &config->param_list);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
        *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 144, (((_BYTE)config + 12) & 7u) + 3);
        *(_DWORD *)(v2 + 144) = 0;
        v13 = std::vector<std::string>::operator[](&config->param_list, 0LL);
        v14 = (char *)(v2 + 144);
        if ( !data::enumStrToVal(v13, (data::GCGEffectElementType *)(v2 + 144)) )
        {
          *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1056, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1056),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "rewriteChallengeConfig",
            527);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1056),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])byte_1AD71200);
          common::milog::MiLogStream::operator<<<std::string>(v16, &config->param_list);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
          *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
          if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 144);
          if ( *(_DWORD *)(v2 + 144) && *(_DWORD *)(v2 + 144) != 8 )
          {
            v19 = &config->param_vec;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 144);
            v20 = *(_DWORD *)(v2 + 144);
            v21 = (unsigned int *)(v2 + 160);
            v22 = *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000);
            if ( v22 != 0 && v22 <= 3 )
            {
              v20 = v2 + 160;
              LOBYTE(v14) = v22 != 0;
              __asan_report_store4(v2 + 160, v14);
            }
            *(_DWORD *)(v2 + 160) = v20;
            std::vector<unsigned int>::emplace_back<unsigned int>(v19, (unsigned int *)(v2 + 160), v21);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            common::tools::MiscUtils::removeEmptyElement<unsigned int>(&config->param_vec);
          }
          else
          {
            *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1120) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1120, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1120),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
              "rewriteChallengeConfig",
              533);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1120),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v17,
                    (const char (*)[13])byte_1AD71200);
            common::milog::MiLogStream::operator<<<std::string>(v18, &config->param_list);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
            *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
      }
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    }
LABEL_142:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGChallengeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGChallengeExcelConfig>,false,false> *const)(v2 + 256));
  }
  if ( v92 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 236) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1888LL, v92);
  }
  return ret;
};

// Line 632: range 0000000014427F04-00000000144285CD
int32_t __cdecl GCGPlayingExcelConfigMgr::rewriteMatchConfig(
        GCGPlayingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  char *v7; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  __int64 v12; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int v17; // edx
  uint32_t v18; // eax
  char v19; // dl
  std::map<unsigned int,std::pair<unsigned int,unsigned int>> *v20; // rax
  std::pair<unsigned int,unsigned int> *v21; // rax
  int v22; // eax
  int32_t result; // eax
  uint32_t index; // [rsp+1Ch] [rbp-184h]
  data::GCGMatchExcelConfigMap *__for_range; // [rsp+20h] [rbp-180h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGMatchExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-178h]
  const std::map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::key_type *id; // [rsp+30h] [rbp-170h]
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-160h]
  data::GCGMatchRankExcelConfig *rank_config_ptr; // [rsp+48h] [rbp-158h]
  char v30[336]; // [rsp+50h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 8 rank:636 48 4 9 <unknown> 64 8 15 __for_begin:633 96 8 13 __for_end:633 128 8 15 __for_"
                        "begin:636 160 8 13 __for_end:636 192 8 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GCGPlayingExcelConfigMgr::rewriteMatchConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -202116109;
  __for_range = &this->gcg_match_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGMatchExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GCGMatchExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGMatchExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::GCGMatchExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GCGMatchExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGMatchExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGMatchExcelConfig>,false> *)(v3 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGMatchExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGMatchExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::GCGMatchExcelConfig>(__in);
    index = 0;
    __for_range_0 = &std::get<1ul,unsigned int const,data::GCGMatchExcelConfig>(__in)->score_rank_list;
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
        v17 = 1;
        goto LABEL_28;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v7) = v11 != 0;
        __asan_report_store4(v3 + 32, v7);
      }
      *(_DWORD *)(v3 + 32) = v10;
      v12 = *(unsigned int *)(v3 + 32);
      rank_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGMatchRankExcelConfig(this, v12);
      if ( !rank_config_ptr )
        break;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v18 = index++;
      v19 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v19 != 0 && v19 <= 3 )
      {
        LOBYTE(v12) = v19 != 0;
        v18 = __asan_report_store4(v3 + 48, v12);
      }
      *(_DWORD *)(v3 + 48) = v18;
      std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int &,true>(
        (std::pair<unsigned int,unsigned int> *const)(v3 + 192),
        (unsigned int *)(v3 + 48),
        (unsigned int *)(v3 + 32));
      v20 = std::map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::operator[](
              &this->match_rank_map_,
              id);
      v21 = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](v20, &rank_config_ptr->need_score);
      std::pair<unsigned int,unsigned int>::operator=(
        v21,
        (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)(v3 + 192));
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
    }
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
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "rewriteMatchConfig",
      641);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 224),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v14 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v13, (const char (*)[48])byte_1AD71380);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
    v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" ID: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v17 = 0;
LABEL_28:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v22 = 0;
      goto LABEL_32;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGMatchExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGMatchExcelConfig>,false,false> *const)(v3 + 64));
  }
  v22 = 1;
LABEL_32:
  if ( v22 == 1 )
    v2 = 0;
  result = v2;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 651: range 00000000144285CE-00000000144287AE
int32_t __cdecl GCGPlayingExcelConfigMgr::rewriteMatchRankConfig(
        GCGPlayingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::GCGMatchRankExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGMatchRankExcelConfig> >::type *config; // [rsp+28h] [rbp-88h]
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:652 64 8 13 __for_end:652";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false>::__node_type *)GCGPlayingExcelConfigMgr::rewriteMatchRankConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->gcg_match_rank_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::GCGMatchRankExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::GCGMatchRankExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::GCGMatchRankExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGMatchRankExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<unsigned int>(&config->rank_time_list);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 660: range 00000000144287B0-00000000144289C6
int32_t __cdecl GCGPlayingExcelConfigMgr::rewriteMatchNameConfig(
        GCGPlayingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::vector<data::GCGMatchNameExcelConfig>::size_type v5; // r15
  data::GCGMatchNameExcelConfigVec *p_gcg_match_name_excel_config_vec; // rcx
  std::vector<unsigned int> *v7; // rax
  int32_t result; // eax
  data::GCGMatchNameExcelConfig *config; // [rsp+18h] [rbp-78h]
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 5 i:661";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::rewriteMatchNameConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, txt_config_mgr);
  for ( *(_DWORD *)(v2 + 32) = 0; ; ++*(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 32);
    v5 = *(unsigned int *)(v2 + 32);
    if ( v5 >= std::vector<data::GCGMatchNameExcelConfig>::size(&this->gcg_match_name_excel_config_vec) )
      break;
    p_gcg_match_name_excel_config_vec = &this->gcg_match_name_excel_config_vec;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 32);
    config = std::vector<data::GCGMatchNameExcelConfig>::operator[](
               p_gcg_match_name_excel_config_vec,
               *(unsigned int *)(v2 + 32));
    v7 = std::map<bool,std::vector<unsigned int>>::operator[](&this->match_ai_name_map_, &config->is_internal_server);
    std::vector<unsigned int>::push_back(v7, (const std::vector<unsigned int>::value_type *)(v2 + 32));
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 32);
  }
  result = 0;
  if ( v10 == (char *)v2 )
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

// Line 670: range 00000000144289C8-0000000014428D7B
int32_t __cdecl GCGPlayingExcelConfigMgr::rewriteConstNpcConfig(
        GCGPlayingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::GCGSceneConstNpcExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false,false>::reference v12; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig> >::type *config; // [rsp+38h] [rbp-C8h]
  char v15[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:672 64 8 13 __for_end:672 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::rewriteConstNpcConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->gcg_scene_const_npc_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGSceneConstNpcExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGSceneConstNpcExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGSceneConstNpcExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGSceneConstNpcExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false> *)(v2 + 64)) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::GCGSceneConstNpcExcelConfig>(v12);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGSceneConstNpcExcelConfig>(v12);
    if ( *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->level_id);
    }
    if ( (unsigned __int8)GCGPlayingExcelConfigMgr::checkAndInsertLevelId(this, config->level_id) != 1 )
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
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "rewriteConstNpcConfig",
        676);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v5, (const char (*)[63])byte_1AD70AE0);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &config->level_id);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" ID: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v15 == (char *)v2 )
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

// Line 684: range 0000000014428D7C-000000001442949E
int32_t __cdecl GCGPlayingExcelConfigMgr::rewriteWorldLevelConfig(
        GCGPlayingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  uint32_t *p_level_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  unsigned int *v8; // rdx
  char v9; // cl
  GCGPlayingExcelConfigMgr *v10; // rdx
  __int64 level_id; // rsi
  const std::set<unsigned int>::value_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-14Ch]
  data::GCGWorldLevelExcelConfigMap *__for_range; // [rsp+18h] [rbp-148h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-140h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGWorldLevelExcelConfig> >::type *id; // [rsp+28h] [rbp-138h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGWorldLevelExcelConfig> >::type *config; // [rsp+30h] [rbp-130h]
  data::GCGGameRewardExcelConfig *level_config_ptr; // [rsp+38h] [rbp-128h]
  std::vector<data::GCGLevelCond> *__for_range_0; // [rsp+40h] [rbp-120h]
  data::GCGLevelCond *cond; // [rsp+48h] [rbp-118h]
  char v27[272]; // [rsp+50h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:686 64 8 13 __for_end:686 96 8 15 __for_begin:696 128 8 13 __for_end:696 1"
                        "60 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::rewriteWorldLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->gcg_world_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGWorldLevelExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGWorldLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGWorldLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGWorldLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::GCGWorldLevelExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGWorldLevelExcelConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    v5 = *id;
    p_level_id = &config->level_id;
    v7 = std::map<unsigned int,unsigned int>::operator[](&this->world_level_2_config_map_, &config->level_id);
    v8 = v7;
    v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
    {
      LOBYTE(p_level_id) = v9 != 0;
      __asan_report_store4(v7, p_level_id);
    }
    *v8 = v5;
    if ( *(_BYTE *)(((unsigned __int64)&config->unlock_cond >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->unlock_cond >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->unlock_cond);
    }
    if ( config->unlock_cond == GCG_LEVEL_UNLOCK_QUEST )
      std::set<unsigned int>::insert(&this->world_challenge_unlock_quest_set_, &config->unlock_param);
    v10 = this;
    if ( *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->level_id);
    }
    level_id = config->level_id;
    level_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(v10, level_id);
    if ( level_config_ptr )
    {
      __for_range_0 = &level_config_ptr->cond_list;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 96, level_id);
      *(std::vector<data::GCGLevelCond>::iterator *)(v2 + 96) = std::vector<data::GCGLevelCond>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, level_id);
      *(std::vector<data::GCGLevelCond>::iterator *)(v2 + 128) = std::vector<data::GCGLevelCond>::end(__for_range_0);
      while ( __gnu_cxx::operator!=<data::GCGLevelCond *,std::vector<data::GCGLevelCond>>(
                (const __gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *)(v2 + 96),
                (const __gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *)(v2 + 128)) )
      {
        cond = __gnu_cxx::__normal_iterator<data::GCGLevelCond *,std::vector<data::GCGLevelCond>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&cond->type);
        }
        if ( cond->type == FINISH_LEVEL_CHALLENGE && std::vector<unsigned int>::size(&cond->param_list) )
        {
          v13 = std::vector<unsigned int>::operator[](&cond->param_list, 0LL);
          std::set<unsigned int>::insert(&this->world_challenge_unlock_level_set_, v13);
        }
        __gnu_cxx::__normal_iterator<data::GCGLevelCond *,std::vector<data::GCGLevelCond>>::operator++((__gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *const)(v2 + 96));
      }
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->level_id);
    }
    if ( (unsigned __int8)GCGPlayingExcelConfigMgr::checkAndInsertLevelId(this, config->level_id) != 1 )
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
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "rewriteWorldLevelConfig",
        706);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v14, (const char (*)[63])byte_1AD70AE0);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->level_id);
      v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" ID: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v27 == (char *)v2 )
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

// Line 714: range 00000000144294A0-00000000144299CD
int32_t __cdecl GCGPlayingExcelConfigMgr::rewriteWeekLevelConfig(
        GCGPlayingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  data::GCGWeekLevelExcelConfigMap *__for_range; // [rsp+20h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false,false>::reference v13; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGWeekLevelExcelConfig> >::type *id; // [rsp+30h] [rbp-120h]
  std::vector<data::GCGWeekLevelCondConfig> *__for_range_0; // [rsp+40h] [rbp-110h]
  const data::GCGWeekLevelCondConfig *level_cond; // [rsp+48h] [rbp-108h]
  char v17[256]; // [rsp+50h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:716 64 8 13 __for_end:716 96 8 15 __for_begin:718 128 8 13 __for_end:718 1"
                        "60 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::rewriteWeekLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->gcg_week_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGWeekLevelExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGWeekLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGWeekLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGWeekLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false> *)(v2 + 64)) )
      break;
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::GCGWeekLevelExcelConfig>(v13);
    __for_range_0 = &std::get<1ul,unsigned int const,data::GCGWeekLevelExcelConfig>(v13)->level_cond_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<data::GCGWeekLevelCondConfig>::const_iterator *)(v2 + 96) = std::vector<data::GCGWeekLevelCondConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<data::GCGWeekLevelCondConfig>::const_iterator *)(v2 + 128) = std::vector<data::GCGWeekLevelCondConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::GCGWeekLevelCondConfig const*,std::vector<data::GCGWeekLevelCondConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::GCGWeekLevelCondConfig*,std::vector<data::GCGWeekLevelCondConfig> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<const data::GCGWeekLevelCondConfig*,std::vector<data::GCGWeekLevelCondConfig> > *)(v2 + 128)) )
    {
      level_cond = __gnu_cxx::__normal_iterator<data::GCGWeekLevelCondConfig const*,std::vector<data::GCGWeekLevelCondConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGWeekLevelCondConfig*,std::vector<data::GCGWeekLevelCondConfig> > *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&level_cond->level_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_cond->level_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&level_cond->level_id);
      }
      if ( (unsigned __int8)GCGPlayingExcelConfigMgr::checkAndInsertLevelId(this, level_cond->level_id) != 1 )
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
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "rewriteWeekLevelConfig",
          722);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v6, (const char (*)[63])byte_1AD70AE0);
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &level_cond->level_id);
        v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::unordered_set<unsigned int>::insert(&this->repeatable_level_set_, &level_cond->level_id);
      __gnu_cxx::__normal_iterator<data::GCGWeekLevelCondConfig const*,std::vector<data::GCGWeekLevelCondConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGWeekLevelCondConfig*,std::vector<data::GCGWeekLevelCondConfig> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v17 == (char *)v2 )
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

// Line 732: range 00000000144299CE-000000001442A2E3
int32_t __cdecl GCGPlayingExcelConfigMgr::rewriteBossLevelConfig(
        GCGPlayingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::GCGLevelUnlockCond *p_unlock_cond; // rax
  uint32_t *p_unlock_param; // rsi
  __int64 v7; // rsi
  uint32_t normal_level_id; // ecx
  char v9; // dl
  uint32_t hard_level_id; // ecx
  char v11; // dl
  __int64 v12; // rsi
  unsigned int v13; // ecx
  char v14; // al
  __int64 v15; // rsi
  const std::set<unsigned int>::value_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1C4h]
  std::initializer_list<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-1C0h]
  data::GCGBossLevelExcelConfigMap *__for_range; // [rsp+28h] [rbp-1B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-1B0h]
  const unsigned int *id; // [rsp+38h] [rbp-1A8h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGBossLevelExcelConfig> >::type *config; // [rsp+40h] [rbp-1A0h]
  std::initializer_list<unsigned int>::const_iterator __for_end; // [rsp+50h] [rbp-190h]
  data::GCGGameRewardExcelConfig *level_config_ptr; // [rsp+58h] [rbp-188h]
  std::vector<data::GCGLevelCond> *__for_range_1; // [rsp+60h] [rbp-180h]
  data::GCGLevelCond *cond; // [rsp+68h] [rbp-178h]
  char v33[368]; // [rsp+70h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 12 level_id:740 64 8 15 __for_begin:734 96 8 13 __for_end:734 128 8 15 __for_begin:745 16"
                        "0 8 13 __for_end:745 192 8 9 <unknown> 224 16 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::rewriteBossLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -219021312;
  v4[536862729] = -202116109;
  ret = 0;
  __for_range = &this->gcg_boss_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false> *)(v2 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::GCGBossLevelExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGBossLevelExcelConfig>(__in);
    p_unlock_cond = &config->unlock_cond;
    p_unlock_param = (uint32_t *)((((_BYTE)config + 20) & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)p_unlock_cond >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_unlock_cond & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_unlock_cond >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_unlock_cond);
    }
    if ( config->unlock_cond == GCG_LEVEL_UNLOCK_QUEST )
    {
      p_unlock_param = &config->unlock_param;
      std::set<unsigned int>::insert(&this->boss_challenge_unlock_quest_set_, &config->unlock_param);
    }
    if ( *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    *(_QWORD *)(v2 + 224) = 0LL;
    *(_QWORD *)(v2 + 232) = 0LL;
    if ( *(_BYTE *)(((v2 + 232) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 232, p_unlock_param);
    *(_QWORD *)(v2 + 232) = 2LL;
    v7 = (((_BYTE)config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&config->normal_level_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->normal_level_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->normal_level_id);
    }
    normal_level_id = config->normal_level_id;
    v9 = *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((v2 - 64) & 7) + 3) >= v9 )
    {
      LOBYTE(v7) = v9 != 0;
      __asan_report_store4(v2 + 192, v7);
    }
    *(_DWORD *)(v2 + 192) = normal_level_id;
    if ( *(_BYTE *)(((unsigned __int64)&config->hard_level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->hard_level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->hard_level_id);
    }
    hard_level_id = config->hard_level_id;
    v11 = *(_BYTE *)(((v2 + 196) >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v11 != 0;
    if ( v11 != 0 && (char)(((v2 - 60) & 7) + 3) >= v11 )
      __asan_report_store4(v2 + 196, v7);
    *(_DWORD *)(v2 + 196) = hard_level_id;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v7);
    *(_QWORD *)(v2 + 224) = v2 + 192;
    __for_begin = std::initializer_list<unsigned int>::begin((const std::initializer_list<unsigned int> *const)(v2 + 224));
    __for_end = std::initializer_list<unsigned int>::end((const std::initializer_list<unsigned int> *const)(v2 + 224));
    while ( __for_begin != __for_end )
    {
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v12 = ((unsigned __int8)__for_begin & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin);
      }
      v13 = *__for_begin;
      v14 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v12) = v14 != 0;
        __asan_report_store4(v2 + 48, v12);
      }
      *(_DWORD *)(v2 + 48) = v13;
      v15 = *(unsigned int *)(v2 + 48);
      level_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(this, v15);
      if ( level_config_ptr )
      {
        __for_range_1 = &level_config_ptr->cond_list;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 128, v15);
        *(std::vector<data::GCGLevelCond>::iterator *)(v2 + 128) = std::vector<data::GCGLevelCond>::begin(__for_range_1);
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 160, v15);
        *(std::vector<data::GCGLevelCond>::iterator *)(v2 + 160) = std::vector<data::GCGLevelCond>::end(__for_range_1);
        while ( __gnu_cxx::operator!=<data::GCGLevelCond *,std::vector<data::GCGLevelCond>>(
                  (const __gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *)(v2 + 128),
                  (const __gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *)(v2 + 160)) )
        {
          cond = __gnu_cxx::__normal_iterator<data::GCGLevelCond *,std::vector<data::GCGLevelCond>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *const)(v2 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&cond->type);
          }
          if ( cond->type == FINISH_LEVEL_CHALLENGE && std::vector<unsigned int>::size(&cond->param_list) )
          {
            v17 = std::vector<unsigned int>::operator[](&cond->param_list, 0LL);
            std::set<unsigned int>::insert(&this->boss_challenge_unlock_level_set_, v17);
          }
          __gnu_cxx::__normal_iterator<data::GCGLevelCond *,std::vector<data::GCGLevelCond>>::operator++((__gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *const)(v2 + 128));
        }
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      }
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      if ( (unsigned __int8)GCGPlayingExcelConfigMgr::checkAndInsertLevelId(this, *(_DWORD *)(v2 + 48)) != 1 )
      {
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "rewriteBossLevelConfig",
          755);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v18, (const char (*)[63])byte_1AD70AE0);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v2 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      ++__for_begin;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v33 == (char *)v2 )
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
  return result;
};

// Line 764: range 000000001442A2E4-000000001442ABA4
int32_t __cdecl GCGPlayingExcelConfigMgr::rewriteGameGroupConfig(
        GCGPlayingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  unsigned int v11; // r14d
  char *v12; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v13; // rax
  unsigned int *v14; // rdx
  char v15; // cl
  char *v16; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v17; // rax
  int *v18; // rdx
  int v19; // ecx
  char v20; // al
  unsigned int v21; // r14d
  char *v22; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v23; // rax
  unsigned int *v24; // rdx
  char v25; // cl
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1A4h]
  data::GCGGameGroupExcelConfigMap *__for_range; // [rsp+20h] [rbp-1A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameGroupExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-198h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGGameGroupExcelConfig> >::type *id; // [rsp+30h] [rbp-190h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGGameGroupExcelConfig> >::type *config; // [rsp+38h] [rbp-188h]
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-180h]
  std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-178h]
  char v38[368]; // [rsp+50h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 4 12 quest_id:768 48 4 12 level_id:772 64 8 15 __for_begin:766 96 8 13 __for_end:766 128 8 "
                        "15 __for_begin:768 160 8 13 __for_end:768 192 8 15 __for_begin:772 224 8 13 __for_end:772 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::rewriteGameGroupConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -202116109;
  ret = 0;
  __for_range = &this->gcg_game_group_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGGameGroupExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGGameGroupExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGGameGroupExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGGameGroupExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GCGGameGroupExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGGameGroupExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGGameGroupExcelConfig>,false> *)(v2 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameGroupExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameGroupExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::GCGGameGroupExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGGameGroupExcelConfig>(__in);
    __for_range_0 = &config->quest_id_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<unsigned int>::iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<unsigned int>::iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 128));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(v2 + 32, v6);
      }
      *(_DWORD *)(v2 + 32) = v9;
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      v11 = *id;
      v12 = (char *)(v2 + 32);
      v13 = std::map<unsigned int,unsigned int>::operator[](
              &this->quest_2_guide_group_map_,
              (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
      v14 = v13;
      v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
      if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
      {
        LOBYTE(v12) = v15 != 0;
        __asan_report_store4(v13, v12);
      }
      *v14 = v11;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &config->level_list;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v6);
    *(std::vector<unsigned int>::iterator *)(v2 + 192) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v6);
    *(std::vector<unsigned int>::iterator *)(v2 + 224) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v16 = (char *)(v2 + 224);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 192),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 224)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v17 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 192));
      v18 = (int *)v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      v19 = *v18;
      v20 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v20 != 0 && v20 <= 3 )
      {
        LOBYTE(v16) = v20 != 0;
        __asan_report_store4(v2 + 48, v16);
      }
      *(_DWORD *)(v2 + 48) = v19;
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      v21 = *id;
      v22 = (char *)(v2 + 48);
      v23 = std::map<unsigned int,unsigned int>::operator[](
              &this->level_2_guide_group_map_,
              (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      v24 = v23;
      v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
      if ( v25 != 0 && (char)(((unsigned __int8)v23 & 7) + 3) >= v25 )
      {
        LOBYTE(v22) = v25 != 0;
        __asan_report_store4(v23, v22);
      }
      *v24 = v21;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      if ( (unsigned __int8)GCGPlayingExcelConfigMgr::checkAndInsertLevelId(this, *(_DWORD *)(v2 + 48)) != 1 )
      {
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "rewriteGameGroupConfig",
          777);
        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v27 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v26, (const char (*)[63])byte_1AD70AE0);
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v2 + 48));
        v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 192));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameGroupExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameGroupExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v38 == (char *)v2 )
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
  return result;
};

// Line 786: range 000000001442ABA6-000000001442AFFE
int32_t __cdecl GCGPlayingExcelConfigMgr::rewriteQuestLevelConfig(
        GCGPlayingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t level_id; // r14d
  uint32_t *p_quest_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  uint32_t *v8; // rdx
  char v9; // cl
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-F4h]
  data::GCGQuestLevelExcelConfigMap *__for_range; // [rsp+20h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGQuestLevelExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-E8h]
  const unsigned int *id; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGQuestLevelExcelConfig> >::type *config; // [rsp+38h] [rbp-D8h]
  char v20[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:788 64 8 13 __for_end:788 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::rewriteQuestLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->gcg_quest_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGQuestLevelExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGQuestLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGQuestLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGQuestLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGQuestLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGQuestLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGQuestLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGQuestLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGQuestLevelExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::GCGQuestLevelExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGQuestLevelExcelConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->level_id);
    }
    level_id = config->level_id;
    p_quest_id = &config->quest_id;
    v7 = std::map<unsigned int,unsigned int>::operator[](&this->quest_2_quest_level_map_, &config->quest_id);
    v8 = v7;
    v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
    {
      LOBYTE(p_quest_id) = v9 != 0;
      __asan_report_store4(v7, p_quest_id);
    }
    *v8 = level_id;
    if ( *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->level_id);
    }
    if ( (unsigned __int8)GCGPlayingExcelConfigMgr::checkAndInsertLevelId(this, config->level_id) != 1 )
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
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "rewriteQuestLevelConfig",
        793);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v10, (const char (*)[63])byte_1AD70AE0);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->level_id);
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" ID: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGQuestLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGQuestLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v20 == (char *)v2 )
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

// Line 801: range 000000001442B000-000000001442CF71
int32_t __cdecl GCGPlayingExcelConfigMgr::checkCharacterLevelConfig(
        const GCGPlayingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  std::vector<data::GCGCharacterDynamicLevel>::const_reference v18; // rax
  int LevelGroupId; // edx
  char v20; // al
  __int64 level_id; // rsi
  const GCGPlayingExcelConfigMgr *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  uint32_t gcg_level; // r15d
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  int v34; // ecx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  const GCGPlayingExcelConfigMgr *v44; // rcx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rdx
  __int64 pre_quest_id; // rsi
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rdx
  char *v55; // rsi
  unsigned int *v56; // rax
  int *v57; // rdx
  int v58; // ecx
  char v59; // al
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rdx
  int32_t ret; // [rsp+14h] [rbp-50Ch]
  data::GCGCharacterLevelExcelConfigMap *__for_range; // [rsp+18h] [rbp-508h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false,false>::reference v68; // [rsp+20h] [rbp-500h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig> >::type *id; // [rsp+28h] [rbp-4F8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig> >::type *config; // [rsp+30h] [rbp-4F0h]
  const std::vector<data::GCGCharacterDynamicLevel> *__for_range_0; // [rsp+38h] [rbp-4E8h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+40h] [rbp-4E0h]
  const data::GCGCharacterDynamicLevel *normal_level; // [rsp+48h] [rbp-4D8h]
  char v74[1232]; // [rsp+50h] [rbp-4D0h] BYREF

  v2 = (unsigned __int64)v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1184LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "22 48 4 16 cur_group_id:838 64 4 12 quest_id:881 80 8 15 __for_begin:804 112 8 13 __for_end:804 "
                        "144 8 15 __for_begin:839 176 8 13 __for_end:839 208 8 15 __for_begin:881 240 8 13 __for_end:881 "
                        "272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 9 <unknown> 5"
                        "92 32 9 <unknown> 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unknown> 848 32 9 <unknown> 91"
                        "2 32 9 <unknown> 976 32 9 <unknown> 1040 32 9 <unknown> 1104 48 16 group_id_set:803";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::checkCharacterLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
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
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862735] = -219021312;
  v4[536862736] = 62194;
  v4[536862737] = -219021312;
  v4[536862738] = 62194;
  v4[536862739] = -219021312;
  v4[536862740] = 62194;
  v4[536862741] = -219021312;
  v4[536862742] = 62194;
  v4[536862743] = -219021312;
  v4[536862744] = 62194;
  v4[536862745] = -219021312;
  v4[536862746] = 62194;
  v4[536862747] = -219021312;
  v4[536862748] = 62194;
  v4[536862749] = -219021312;
  v4[536862750] = 62194;
  v4[536862751] = -219021312;
  v4[536862752] = 62194;
  v4[536862753] = -219021312;
  v4[536862754] = 62194;
  v4[536862756] = -202116109;
  ret = 0;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 1104));
  __for_range = &this->gcg_character_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGCharacterLevelExcelConfig>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::GCGCharacterLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGCharacterLevelExcelConfig>::const_iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::GCGCharacterLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false> *)(v2 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false> *)(v2 + 112)) )
  {
    v68 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false,false> *const)(v2 + 80));
    id = std::get<0ul,unsigned int const,data::GCGCharacterLevelExcelConfig>(v68);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGCharacterLevelExcelConfig>(v68);
    if ( *(char *)(((unsigned __int64)&config->is_need_unlock >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->is_need_unlock, v2 + 112, &config->is_need_unlock);
    if ( config->is_need_unlock )
    {
      p_material_config_mgr = &txt_config_mgr->material_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->cost_item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->cost_item_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->cost_item_id);
      }
      if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, config->cost_item_id) )
      {
        *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 272) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 272, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 272),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkCharacterLevelConfig",
          810);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 272),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v6, (const char (*)[55])byte_1AD71B20);
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->cost_item_id);
        v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" ID : ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
        *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->cost_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->cost_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->cost_count);
      }
      if ( !config->cost_count )
      {
        *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 336) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 336, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 336),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkCharacterLevelConfig",
          815);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 336),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v10, (const char (*)[29])byte_1AD71B80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
        *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->cost_item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->cost_item_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->cost_item_id);
      }
      if ( config->cost_item_id )
      {
        *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 400) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 400, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 400),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkCharacterLevelConfig",
          823);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 400),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v12, (const char (*)[54])byte_1AD71BC0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
        *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->cost_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->cost_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->cost_count);
      }
      if ( config->cost_count )
      {
        *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 464) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 79) & 7) >= *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 464, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 464),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkCharacterLevelConfig",
          828);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 464),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v14, (const char (*)[54])byte_1AD71BC0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 464));
        *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    if ( std::vector<data::GCGCharacterDynamicLevel>::empty(&config->normal_level_list) )
    {
      *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 528) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 559) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 559) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 528, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 528),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "checkCharacterLevelConfig",
        834);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 528),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v16, (const char (*)[36])byte_1AD71C20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 528));
      *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v18 = std::vector<data::GCGCharacterDynamicLevel>::front(&config->normal_level_list);
      if ( *(_BYTE *)(((unsigned __int64)&v18->level_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v18->level_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v18->level_id);
      }
      level_id = v18->level_id;
      LevelGroupId = GCGPlayingExcelConfigMgr::getLevelGroupId(this, level_id);
      v20 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(level_id) = v20 != 0;
      if ( v20 != 0 && v20 <= 3 )
        __asan_report_store4(v2 + 48, level_id);
      *(_DWORD *)(v2 + 48) = LevelGroupId;
      __for_range_0 = &config->normal_level_list;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 144, level_id);
      *(std::vector<data::GCGCharacterDynamicLevel>::const_iterator *)(v2 + 144) = std::vector<data::GCGCharacterDynamicLevel>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 176, level_id);
      *(std::vector<data::GCGCharacterDynamicLevel>::const_iterator *)(v2 + 176) = std::vector<data::GCGCharacterDynamicLevel>::end(__for_range_0);
      while ( __gnu_cxx::operator!=<data::GCGCharacterDynamicLevel const*,std::vector<data::GCGCharacterDynamicLevel>>(
                (const __gnu_cxx::__normal_iterator<const data::GCGCharacterDynamicLevel*,std::vector<data::GCGCharacterDynamicLevel> > *)(v2 + 144),
                (const __gnu_cxx::__normal_iterator<const data::GCGCharacterDynamicLevel*,std::vector<data::GCGCharacterDynamicLevel> > *)(v2 + 176)) )
      {
        normal_level = __gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel const*,std::vector<data::GCGCharacterDynamicLevel>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGCharacterDynamicLevel*,std::vector<data::GCGCharacterDynamicLevel> > *const)(v2 + 144));
        v22 = this;
        if ( *(_BYTE *)(((unsigned __int64)&normal_level->level_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&normal_level->level_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&normal_level->level_id);
        }
        if ( !data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(v22, normal_level->level_id) )
        {
          *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 592) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 623) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 623) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 592, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 592),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "checkCharacterLevelConfig",
            843);
          v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 592),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v24 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v23, (const char (*)[39])byte_1AD71C80);
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &normal_level->level_id);
          v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 592));
          *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        if ( *(_BYTE *)(((unsigned __int64)&normal_level->gcg_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)normal_level + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&normal_level->gcg_level >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&normal_level->gcg_level);
        }
        gcg_level = normal_level->gcg_level;
        if ( gcg_level > GCGGrowthExcelConfigMgr::getMaxLevel(&txt_config_mgr->gcg_growth_config_mgr) )
        {
          *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 656) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 687) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 687) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 656, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 656),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "checkCharacterLevelConfig",
            848);
          v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 656),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v29 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v28, (const char (*)[45])byte_1AD71CE0);
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &normal_level->level_id);
          v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v30, (const char (*)[16])byte_1AD71D40);
          v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &normal_level->gcg_level);
          v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v32, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 656));
          *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        if ( *(_BYTE *)(((unsigned __int64)&normal_level->level_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&normal_level->level_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&normal_level->level_id);
        }
        v34 = GCGPlayingExcelConfigMgr::getLevelGroupId(this, normal_level->level_id);
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 48);
        if ( v34 != *(_DWORD *)(v2 + 48) )
        {
          *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 720) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 79) & 7) >= *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 720, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 720),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "checkCharacterLevelConfig",
            853);
          v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 720),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v36 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v35, (const char (*)[50])byte_1AD71D80);
          v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &normal_level->level_id);
          v38 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v37, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 720));
          *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel const*,std::vector<data::GCGCharacterDynamicLevel>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGCharacterDynamicLevel*,std::vector<data::GCGCharacterDynamicLevel> > *const)(v2 + 144));
      }
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      if ( *(_DWORD *)(v2 + 48) )
      {
        v41 = std::set<unsigned int>::insert(
                (std::set<unsigned int> *const)(v2 + 1104),
                (const std::set<unsigned int>::value_type *)(v2 + 48));
        if ( !v41.second )
        {
          *(_DWORD *)(((v2 + 848) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 848) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 879) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 879) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 848, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 848),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "checkCharacterLevelConfig",
            867);
          v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 848),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v43 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(v42, (const char (*)[67])byte_1AD71E40);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 848));
          *(_DWORD *)(((v2 + 848) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else if ( std::vector<data::GCGCharacterDynamicLevel>::size(&config->normal_level_list) > 1 )
      {
        *(_DWORD *)(((v2 + 784) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 784) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 815) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 815) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 784, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 784),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkCharacterLevelConfig",
          861);
        v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 784),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v40 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v39, (const char (*)[45])byte_1AD71DE0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 784));
        *(_DWORD *)(((v2 + 784) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      v44 = this;
      if ( *(_BYTE *)(((unsigned __int64)&config->hard_level_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->hard_level_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->hard_level_id);
      }
      if ( !data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(v44, config->hard_level_id) )
      {
        *(_DWORD *)(((v2 + 912) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 912) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 943) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 943) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 912, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 912),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkCharacterLevelConfig",
          872);
        v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 912),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v46 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v45, (const char (*)[39])byte_1AD71EC0);
        v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &config->hard_level_id);
        v48 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v47, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 912));
        *(_DWORD *)(((v2 + 912) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      pre_quest_id = (((_BYTE)config + 60) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->pre_quest_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->pre_quest_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->pre_quest_id);
      }
      if ( config->pre_quest_id )
      {
        pre_quest_id = config->pre_quest_id;
        if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(&txt_config_mgr->quest_config_mgr, pre_quest_id) )
        {
          *(_DWORD *)(((v2 + 976) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 976) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1007) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 79) & 7) >= *(_BYTE *)(((v2 + 1007) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 976, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 976),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "checkCharacterLevelConfig",
            878);
          v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 976),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v52 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v51, (const char (*)[29])byte_1AD71F20);
          v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &config->pre_quest_id);
          v54 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v53, (const char (*)[6])" ID: ");
          pre_quest_id = (__int64)id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 976));
          *(_DWORD *)(((v2 + 976) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      __for_range_1 = &config->cond_quest_list;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 208, pre_quest_id);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 208) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 240, pre_quest_id);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 240) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v55 = (char *)(v2 + 240);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 208),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 240)) )
          break;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
        v56 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 208));
        v57 = (int *)v56;
        if ( *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v56 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v56);
        }
        v58 = *v57;
        v59 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
        if ( v59 != 0 && v59 <= 3 )
        {
          LOBYTE(v55) = v59 != 0;
          __asan_report_store4(v2 + 64, v55);
        }
        *(_DWORD *)(v2 + 64) = v58;
        if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(
                &txt_config_mgr->quest_config_mgr,
                *(unsigned int *)(v2 + 64)) )
        {
          *(_DWORD *)(((v2 + 1040) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1040) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1071) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 1071) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1040, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1040),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "checkCharacterLevelConfig",
            885);
          v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1040),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v61 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v60, (const char (*)[29])byte_1AD71F20);
          v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v61,
                  (const unsigned int *)(v2 + 64));
          v63 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v62, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1040));
          *(_DWORD *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 208));
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false,false> *const)(v2 + 80));
  }
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 1104));
  if ( v74 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF8090) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1184LL, v74);
  }
  return ret;
};

// Line 894: range 000000001442CF72-000000001442EC61
int32_t __cdecl GCGPlayingExcelConfigMgr::checkGameRewardConfig(
        const GCGPlayingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  uint32_t level_id; // ecx
  char v7; // al
  GCGGameExcelConfigMgr *p_gcg_game_config_mgr; // rcx
  __int64 v9; // rsi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  char *v14; // rsi
  const GCGPlayingExcelConfigMgr *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  data::GCGLevelCondType type; // eax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v30; // rax
  uint32_t *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  __int64 v44; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v45; // rax
  int *v46; // rdx
  int v47; // ecx
  char v48; // al
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v49; // rax
  uint32_t *v50; // rdx
  const GCGPlayingExcelConfigMgr *v51; // rdx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rdx
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rdx
  GCGDeckExcelConfigMgr *p_gcg_deck_config_mgr; // rcx
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rdx
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rdx
  uint32_t GroupRedirectLevelId; // ecx
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rdx
  int32_t ret; // [rsp+18h] [rbp-4B8h]
  data::ItemLimitType limit_type; // [rsp+1Ch] [rbp-4B4h]
  uint32_t count; // [rsp+20h] [rbp-4B0h]
  uint32_t level; // [rsp+24h] [rbp-4ACh]
  data::GCGGameRewardExcelConfigMap *__for_range; // [rsp+28h] [rbp-4A8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGGameRewardExcelConfig>,false,false>::reference v81; // [rsp+30h] [rbp-4A0h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGGameRewardExcelConfig> >::type *id; // [rsp+38h] [rbp-498h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGGameRewardExcelConfig> >::type *config; // [rsp+40h] [rbp-490h]
  const std::vector<data::GCGChallengeReward> *__for_range_0; // [rsp+48h] [rbp-488h]
  const std::vector<data::GCGLevelCond> *__for_range_1; // [rsp+50h] [rbp-480h]
  const data::GCGLevelCond *cond; // [rsp+58h] [rbp-478h]
  const data::GCGGameRewardExcelConfig *config_ptr; // [rsp+60h] [rbp-470h]
  const data::GCGChallengeReward *challenge_config; // [rsp+68h] [rbp-468h]
  char v89[1120]; // [rsp+70h] [rbp-460h] BYREF

  v2 = (unsigned __int64)v89;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1088LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "21 32 4 11 game_id:899 48 4 12 level_id:957 64 8 15 __for_begin:896 96 8 13 __for_end:896 128 8 "
                        "15 __for_begin:909 160 8 13 __for_end:909 192 8 15 __for_begin:922 224 8 13 __for_end:922 256 32"
                        " 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 "
                        "9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9"
                        " <unknown> 960 32 9 <unknown> 1024 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::checkGameRewardConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -202116109;
  ret = 0;
  __for_range = &this->gcg_game_reward_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGGameRewardExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGGameRewardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGGameRewardExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGGameRewardExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GCGGameRewardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGGameRewardExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGGameRewardExcelConfig>,false> *)(v2 + 96)) )
      break;
    v81 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGGameRewardExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGGameRewardExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::GCGGameRewardExcelConfig>(v81);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGGameRewardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGGameRewardExcelConfig>(v81);
    limit_type = ITEM_LIMIT_GCG_CHALLENGE_REWARD;
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->level_id);
    }
    level_id = config->level_id;
    v7 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    if ( v7 != 0 && v7 <= 3 )
    {
      LOBYTE(v5) = v7 != 0;
      __asan_report_store4(v2 + 32, v5);
    }
    *(_DWORD *)(v2 + 32) = level_id;
    if ( GCGPlayingExcelConfigMgr::isRepeatableLevel(this, *(_DWORD *)(v2 + 32)) )
      limit_type = ITEM_LIMIT_GCG_REPEATABLE_CHALLENGE_REWARD;
    p_gcg_game_config_mgr = &txt_config_mgr->gcg_game_config_mgr;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 32);
    v9 = *(unsigned int *)(v2 + 32);
    if ( !data::GCGGameExcelConfigMgrBase::findGCGGameExcelConfig(p_gcg_game_config_mgr, v9) )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "checkGameRewardConfig",
        906);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v10, (const char (*)[37])byte_1AD72160);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" ID: ");
      v9 = (__int64)id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &config->challenge_reward_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v9);
    *(std::vector<data::GCGChallengeReward>::const_iterator *)(v2 + 128) = std::vector<data::GCGChallengeReward>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v9);
    *(std::vector<data::GCGChallengeReward>::const_iterator *)(v2 + 160) = std::vector<data::GCGChallengeReward>::end(__for_range_0);
    while ( 1 )
    {
      v14 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>(
              (const __gnu_cxx::__normal_iterator<const data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<const data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *)(v2 + 160)) )
        break;
      challenge_config = __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *const)(v2 + 128));
      v15 = this;
      if ( *(_BYTE *)(((unsigned __int64)&challenge_config->challenge_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&challenge_config->challenge_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&challenge_config->challenge_id);
      }
      if ( !data::GCGPlayingExcelConfigMgrBase::findGCGChallengeExcelConfig(v15, challenge_config->challenge_id) )
      {
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkGameRewardConfig",
          913);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v16, (const char (*)[29])byte_1AD721C0);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                &challenge_config->challenge_id);
        v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&challenge_config->reward_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)challenge_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_config->reward_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&challenge_config->reward_id);
      }
      if ( challenge_config->reward_id
        && (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              challenge_config->reward_id,
                              limit_type) != 1 )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkGameRewardConfig",
          918);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                v21,
                (const char (*)[55])"isValidRewardIdAndMatchItemLimitType fail. reward_id: ");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &challenge_config->reward_id);
        v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &config->cond_list;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v14);
    *(std::vector<data::GCGLevelCond>::const_iterator *)(v2 + 192) = std::vector<data::GCGLevelCond>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v14);
    *(std::vector<data::GCGLevelCond>::const_iterator *)(v2 + 224) = std::vector<data::GCGLevelCond>::end(__for_range_1);
    while ( __gnu_cxx::operator!=<data::GCGLevelCond const*,std::vector<data::GCGLevelCond>>(
              (const __gnu_cxx::__normal_iterator<const data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *)(v2 + 192),
              (const __gnu_cxx::__normal_iterator<const data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *)(v2 + 224)) )
    {
      cond = __gnu_cxx::__normal_iterator<data::GCGLevelCond const*,std::vector<data::GCGLevelCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *const)(v2 + 192));
      if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->type);
      }
      type = cond->type;
      if ( type == GCG_LEVEL )
      {
        if ( std::vector<unsigned int>::size(&cond->param_list) )
        {
          v30 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->param_list, 0LL);
          v31 = v30;
          if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v30);
          }
          if ( *v31 )
          {
            level = *v31;
            if ( level > GCGGrowthExcelConfigMgr::getMaxLevel(&txt_config_mgr->gcg_growth_config_mgr) )
            {
              *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 576, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 576),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                "checkGameRewardConfig",
                943);
              v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 576),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v37 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      v36,
                      (const char (*)[48])byte_1AD722E0);
              v38 = common::milog::MiLogStream::operator<<<unsigned int>(v37, &cond->param_list);
              v39 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v38, (const char (*)[6])" ID: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
              *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
              "checkGameRewardConfig",
              937);
            v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 512),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v33 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    v32,
                    (const char (*)[26])byte_1AD722A0);
            v34 = common::milog::MiLogStream::operator<<<unsigned int>(v33, &cond->param_list);
            v35 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v34, (const char (*)[6])" ID: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "checkGameRewardConfig",
            930);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v27 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v26, (const char (*)[27])byte_1AD72260);
          v28 = common::milog::MiLogStream::operator<<<unsigned int>(v27, &cond->param_list);
          v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else if ( type == FINISH_LEVEL_CHALLENGE )
      {
        if ( std::vector<unsigned int>::size(&cond->param_list) > 1 )
        {
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
          v44 = 0LL;
          v45 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->param_list, 0LL);
          v46 = (int *)v45;
          if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v45);
          }
          v47 = *v46;
          v48 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
          if ( v48 != 0 && v48 <= 3 )
          {
            LOBYTE(v44) = v48 != 0;
            __asan_report_store4(v2 + 48, v44);
          }
          *(_DWORD *)(v2 + 48) = v47;
          v49 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->param_list, 1uLL);
          v50 = v49;
          if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v49);
          }
          count = *v50;
          v51 = this;
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 48);
          config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(v51, *(unsigned int *)(v2 + 48));
          if ( config_ptr )
          {
            if ( count )
            {
              if ( std::vector<data::GCGChallengeReward>::size(&config_ptr->challenge_reward_list) < count )
              {
                *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 832, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 832),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                  "checkGameRewardConfig",
                  974);
                v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 832),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v61 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                        v60,
                        (const char (*)[67])byte_1AD72460);
                v62 = common::milog::MiLogStream::operator<<<unsigned int>(v61, &cond->param_list);
                v63 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v62, (const char (*)[6])" ID: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
                *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
            else
            {
              *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 768, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 768),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                "checkGameRewardConfig",
                968);
              v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 768),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v57 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                      v56,
                      (const char (*)[50])byte_1AD72400);
              v58 = common::milog::MiLogStream::operator<<<unsigned int>(v57, &cond->param_list);
              v59 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v58, (const char (*)[6])" ID: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
              *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
          {
            *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 704, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 704),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
              "checkGameRewardConfig",
              962);
            v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 704),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v53 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    v52,
                    (const char (*)[52])byte_1AD723A0);
            v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v53,
                    (const unsigned int *)(v2 + 48));
            v55 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v54, (const char (*)[6])" ID: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 640, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 640),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "checkGameRewardConfig",
            953);
          v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 640),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v41 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v40, (const char (*)[52])byte_1AD72340);
          v42 = common::milog::MiLogStream::operator<<<unsigned int>(v41, &cond->param_list);
          v43 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v42, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      }
      __gnu_cxx::__normal_iterator<data::GCGLevelCond const*,std::vector<data::GCGLevelCond>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *const)(v2 + 192));
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( (unsigned __int8)std::string::empty() != 1 )
    {
      p_gcg_deck_config_mgr = &txt_config_mgr->gcg_deck_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->field_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->field_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->field_id);
      }
      if ( !data::GCGDeckExcelConfigMgrBase::findGCGDeckFieldExcelConfig(p_gcg_deck_config_mgr, config->field_id) )
      {
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 896) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 896, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 896),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkGameRewardConfig",
          988);
        v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 896),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v66 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v65, (const char (*)[28])byte_1AD724E0);
        v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, &config->field_id);
        v68 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v67, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->group_id);
    }
    if ( config->group_id )
    {
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
              &this->valid_group_level_set_,
              (const unsigned int *)(v2 + 32)) )
      {
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 960, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 960),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkGameRewardConfig",
          996);
        v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 960),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v70 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v69, (const char (*)[54])byte_1AD72520);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 32);
      GroupRedirectLevelId = GCGPlayingExcelConfigMgr::getGroupRedirectLevelId(this, *(_DWORD *)(v2 + 32));
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 32);
      if ( GroupRedirectLevelId != *(_DWORD *)(v2 + 32)
        && !std::vector<data::GCGChallengeReward>::empty(&config->challenge_reward_list) )
      {
        *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1024, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1024),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkGameRewardConfig",
          1003);
        v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1024),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v73 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(v72, (const char (*)[68])byte_1AD72580);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
        *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGGameRewardExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGGameRewardExcelConfig>,false,false> *const)(v2 + 64));
  }
  if ( v89 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 136) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1088LL, v89);
  }
  return ret;
};

// Line 1013: range 000000001442EC62-000000001442EFDF
int32_t __cdecl GCGPlayingExcelConfigMgr::checkChallengeConfig(
        const GCGPlayingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t *p_progress; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::GCGChallengeExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGChallengeExcelConfig>,false,false>::reference v11; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGChallengeExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGChallengeExcelConfig> >::type *config; // [rsp+38h] [rbp-C8h]
  char v14[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 16 __for_begin:1015 64 8 14 __for_end:1015 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::checkChallengeConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->gcg_challenge_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGChallengeExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGChallengeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGChallengeExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGChallengeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGChallengeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGChallengeExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGChallengeExcelConfig>,false> *)(v2 + 64)) )
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGChallengeExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGChallengeExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::GCGChallengeExcelConfig>(v11);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGChallengeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGChallengeExcelConfig>(v11);
    p_progress = &config->progress;
    if ( *(_BYTE *)(((unsigned __int64)p_progress >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_progress & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_progress >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_progress);
    }
    if ( !config->progress )
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
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "checkChallengeConfig",
        1019);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AD726A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGChallengeExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGChallengeExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v14 == (char *)v2 )
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

// Line 1027: range 000000001442EFE0-0000000014430BA1
int32_t __cdecl GCGPlayingExcelConfigMgr::checkMatchConfig(
        const GCGPlayingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGGameExcelConfigMgr *p_gcg_game_config_mgr; // rcx
  uint32_t *p_game_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  __int64 v15; // rsi
  uint32_t min_score; // ecx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  uint32_t max_score; // ecx
  char v24; // al
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  char *v33; // rsi
  unsigned int *v34; // rax
  int *v35; // rdx
  int v36; // ecx
  char v37; // al
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  uint32_t *p_need_score; // rsi
  unsigned int *v43; // rax
  int *v44; // rdx
  int v45; // ecx
  char v46; // al
  uint32_t *v47; // rsi
  unsigned int *v48; // rax
  int *v49; // rdx
  int v50; // ecx
  char v51; // al
  __int64 v52; // rsi
  uint32_t v53; // ecx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  uint32_t v60; // ecx
  char v61; // al
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rdx
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rdx
  char *v70; // rsi
  unsigned int *v71; // rax
  int *v72; // rdx
  int v73; // ecx
  char v74; // al
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rdx
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rdx
  int32_t ret; // [rsp+14h] [rbp-44Ch]
  data::GCGMatchExcelConfigMap *__for_range; // [rsp+18h] [rbp-448h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGMatchExcelConfig>,false,false>::reference v87; // [rsp+20h] [rbp-440h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGMatchExcelConfig> >::type *id; // [rsp+28h] [rbp-438h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGMatchExcelConfig> >::type *config; // [rsp+30h] [rbp-430h]
  const data::GCGGameExcelConfig *game_config_ptr; // [rsp+38h] [rbp-428h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-420h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-418h]
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+50h] [rbp-410h]
  const data::GCGMatchRankExcelConfig *rank_config_ptr; // [rsp+58h] [rbp-408h]
  char v95[1024]; // [rsp+60h] [rbp-400h] BYREF

  v2 = (unsigned __int64)v95;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(992LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "21 32 4 19 rank_min_score:1062 48 4 19 rank_max_score:1063 64 4 9 rank:1064 80 4 14 avatar_id:10"
                        "94 96 8 16 __for_begin:1029 128 8 14 __for_end:1029 160 8 16 __for_begin:1064 192 8 14 __for_end"
                        ":1064 224 8 16 __for_begin:1094 256 8 14 __for_end:1094 288 32 9 <unknown> 352 32 9 <unknown> 41"
                        "6 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736"
                        " 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::checkMatchConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -202116109;
  ret = 0;
  __for_range = &this->gcg_match_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGMatchExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGMatchExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGMatchExcelConfig>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::GCGMatchExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGMatchExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGMatchExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGMatchExcelConfig>,false> *)(v2 + 128)) )
  {
    v87 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGMatchExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGMatchExcelConfig>,false,false> *const)(v2 + 96));
    id = std::get<0ul,unsigned int const,data::GCGMatchExcelConfig>(v87);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGMatchExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGMatchExcelConfig>(v87);
    p_gcg_game_config_mgr = &txt_config_mgr->gcg_game_config_mgr;
    p_game_id = &config->game_id;
    if ( *(_BYTE *)(((unsigned __int64)p_game_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_game_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_game_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_game_id);
    }
    game_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGGameExcelConfig(p_gcg_game_config_mgr, config->game_id);
    if ( game_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&game_config_ptr->game_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&game_config_ptr->game_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&game_config_ptr->game_type);
      }
      if ( game_config_ptr->game_type )
      {
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkMatchConfig",
          1040);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v11, (const char (*)[39])byte_1AD72960);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->game_id);
        v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        v15 = (((_BYTE)config + 76) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&config->min_score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->min_score >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->min_score);
        }
        min_score = config->min_score;
        if ( *(_BYTE *)(((unsigned __int64)&config->base_score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->base_score >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->base_score);
        }
        if ( min_score <= config->base_score )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->max_score >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->max_score >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->max_score);
          }
          max_score = config->max_score;
          v24 = *(_BYTE *)(((unsigned __int64)&config->base_score >> 3) + 0x7FFF8000);
          LOBYTE(v15) = v24 != 0;
          if ( v24 != 0 && v24 <= 3 )
            __asan_report_load4(&config->base_score);
          if ( max_score >= config->base_score )
          {
            if ( std::vector<unsigned int>::empty(&config->score_rank_list) )
            {
              *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 544, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 544),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                "checkMatchConfig",
                1058);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 544),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v31,
                      (const char (*)[33])byte_1AD72AC0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
              *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v2 + 32, v15);
              *(_DWORD *)(v2 + 32) = -1;
              *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v2 + 48, v15);
              *(_DWORD *)(v2 + 48) = 0;
              __for_range_0 = &config->score_rank_list;
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 160, v15);
              *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::begin(__for_range_0);
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 192, v15);
              *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::end(__for_range_0);
              while ( 1 )
              {
                v33 = (char *)(v2 + 192);
                if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160),
                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192)) )
                  break;
                *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
                v34 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 160));
                v35 = (int *)v34;
                if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v34);
                }
                v36 = *v35;
                v37 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
                if ( v37 != 0 && v37 <= 3 )
                {
                  LOBYTE(v33) = v37 != 0;
                  __asan_report_store4(v2 + 64, v33);
                }
                *(_DWORD *)(v2 + 64) = v36;
                rank_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGMatchRankExcelConfig(
                                    this,
                                    *(unsigned int *)(v2 + 64));
                if ( rank_config_ptr )
                {
                  p_need_score = &rank_config_ptr->need_score;
                  v43 = (unsigned int *)std::min<unsigned int>(
                                          (const unsigned int *)(v2 + 32),
                                          &rank_config_ptr->need_score);
                  v44 = (int *)v43;
                  if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v43);
                  }
                  v45 = *v44;
                  v46 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
                  if ( v46 != 0 && v46 <= 3 )
                  {
                    LOBYTE(p_need_score) = v46 != 0;
                    __asan_report_store4(v2 + 32, p_need_score);
                  }
                  *(_DWORD *)(v2 + 32) = v45;
                  v47 = &rank_config_ptr->need_score;
                  v48 = (unsigned int *)std::max<unsigned int>(
                                          (const unsigned int *)(v2 + 48),
                                          &rank_config_ptr->need_score);
                  v49 = (int *)v48;
                  if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v48);
                  }
                  v50 = *v49;
                  v51 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
                  if ( v51 != 0 && v51 <= 3 )
                  {
                    LOBYTE(v47) = v51 != 0;
                    __asan_report_store4(v2 + 48, v47);
                  }
                  *(_DWORD *)(v2 + 48) = v50;
                }
                else
                {
                  *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 608, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 608),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                    "checkMatchConfig",
                    1069);
                  v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 608),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v39 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                          v38,
                          (const char (*)[48])byte_1AD71380);
                  v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v39,
                          (const unsigned int *)(v2 + 64));
                  v41 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v40, (const char (*)[6])" ID: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
                  *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
                __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 160));
              }
              *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
              v52 = (((_BYTE)config + 76) & 7u) + 3;
              if ( *(_BYTE *)(((unsigned __int64)&config->min_score >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->min_score >> 3)
                                                                      + 0x7FFF8000) )
              {
                __asan_report_load4(&config->min_score);
              }
              v53 = config->min_score;
              if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 32);
              if ( v53 >= *(_DWORD *)(v2 + 32) )
              {
                if ( *(_BYTE *)(((unsigned __int64)&config->max_score >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&config->max_score >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&config->max_score);
                }
                v60 = config->max_score;
                v61 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
                LOBYTE(v52) = v61 != 0;
                if ( v61 != 0 && v61 <= 3 )
                  __asan_report_load4(v2 + 48);
                if ( v60 >= *(_DWORD *)(v2 + 48) )
                {
                  if ( std::vector<unsigned int>::empty(&config->ai_profile_pictrue_list) )
                  {
                    *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 800, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 800),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                      "checkMatchConfig",
                      1090);
                    v68 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 800),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v69 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                            v68,
                            (const char (*)[36])byte_1AD72C40);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
                    *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                  else
                  {
                    __for_range_1 = &config->ai_profile_pictrue_list;
                    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v2 + 224, v52);
                    *(std::vector<unsigned int>::const_iterator *)(v2 + 224) = std::vector<unsigned int>::begin(__for_range_1);
                    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v2 + 256, v52);
                    *(std::vector<unsigned int>::const_iterator *)(v2 + 256) = std::vector<unsigned int>::end(__for_range_1);
                    while ( 1 )
                    {
                      v70 = (char *)(v2 + 256);
                      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 224),
                              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 256)) )
                        break;
                      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
                      v71 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 224));
                      v72 = (int *)v71;
                      if ( *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v71 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v71);
                      }
                      v73 = *v72;
                      v74 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
                      if ( v74 != 0 && v74 <= 3 )
                      {
                        LOBYTE(v70) = v74 != 0;
                        __asan_report_store4(v2 + 80, v70);
                      }
                      *(_DWORD *)(v2 + 80) = v73;
                      avatar_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(
                                            &txt_config_mgr->avatar_config_mgr,
                                            *(unsigned int *)(v2 + 80));
                      if ( avatar_config_ptr )
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->use_type >> 3) + 0x7FFF8000) != 0
                          && (char)((((_BYTE)avatar_config_ptr - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->use_type >> 3)
                                                                                           + 0x7FFF8000) )
                        {
                          __asan_report_load4(&avatar_config_ptr->use_type);
                        }
                        if ( avatar_config_ptr->use_type != AVATAR_FORMAL )
                        {
                          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 928, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 928),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                            "checkMatchConfig",
                            1105);
                          v79 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 928),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v80 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                  v79,
                                  (const char (*)[44])byte_1AD72D40);
                          v81 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v80,
                                  (const unsigned int *)(v2 + 80));
                          v82 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                  v81,
                                  (const char (*)[7])"  ID: ");
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v82, id);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
                          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
                          ret = -1;
                        }
                      }
                      else
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
                          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                          "checkMatchConfig",
                          1099);
                        v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 864),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v76 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                v75,
                                (const char (*)[41])byte_1AD72CA0);
                        v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v76,
                                (const unsigned int *)(v2 + 80));
                        v78 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                v77,
                                (const char (*)[7])"  ID: ");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v78, id);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
                        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
                        ret = -1;
                      }
                      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 224));
                    }
                    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
                    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                  }
                }
                else
                {
                  *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 736, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 736),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                    "checkMatchConfig",
                    1084);
                  v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 736),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v63 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          v62,
                          (const char (*)[17])byte_1AD72BC0);
                  v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v63,
                          (const unsigned int *)(v2 + 48));
                  v65 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                          v64,
                          (const char (*)[30])byte_1AD72C00);
                  v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, &config->max_score);
                  v67 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v66, (const char (*)[6])" ID: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
                  *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
              }
              else
              {
                *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 672, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 672),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                  "checkMatchConfig",
                  1078);
                v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 672),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v55 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v54,
                        (const char (*)[17])byte_1AD72B20);
                v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v55,
                        (const unsigned int *)(v2 + 32));
                v57 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        v56,
                        (const char (*)[33])byte_1AD72B60);
                v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, &config->min_score);
                v59 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v58, (const char (*)[6])" ID: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
                *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
          }
          else
          {
            *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 480, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 480),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
              "checkMatchConfig",
              1052);
            v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 480),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v26 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v25,
                    (const char (*)[20])byte_1AD72A40);
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &config->max_score);
            v28 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v27,
                    (const char (*)[18])byte_1AD72A80);
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &config->base_score);
            v30 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v29, (const char (*)[6])" ID: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
            *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 416, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 416),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "checkMatchConfig",
            1046);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 416),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v17, (const char (*)[20])byte_1AD729C0);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->min_score);
          v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v19, (const char (*)[18])byte_1AD72A00);
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &config->base_score);
          v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "checkMatchConfig",
        1034);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v7, (const char (*)[35])byte_1AD72900);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->game_id);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" ID: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGMatchExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGMatchExcelConfig>,false,false> *const)(v2 + 96));
  }
  if ( v95 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 124) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = -168430091;
  }
  return ret;
};

// Line 1115: range 0000000014430BA2-0000000014431EA9
int32_t __cdecl GCGPlayingExcelConfigMgr::checkMatchRankConfig(
        const GCGPlayingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  unsigned int *v7; // rax
  uint32_t *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // edx
  int v12; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int32_t lose_revise_min; // ecx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  __int64 v22; // rsi
  int32_t win_revise_min; // ecx
  char v24; // al
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  __gnu_cxx::__normal_iterator<int const*,std::vector<int> >::reference v33; // rax
  unsigned int *v34; // rdx
  __int64 v35; // rsi
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  int32_t ret; // [rsp+1Ch] [rbp-334h]
  uint32_t cur_time; // [rsp+20h] [rbp-330h]
  data::GCGMatchRankExcelConfigMap *__for_range; // [rsp+28h] [rbp-328h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false,false>::reference v49; // [rsp+30h] [rbp-320h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGMatchRankExcelConfig> >::type *id; // [rsp+38h] [rbp-318h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGMatchRankExcelConfig> >::type *config; // [rsp+40h] [rbp-310h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-308h]
  const std::vector<int> *__for_range_1; // [rsp+50h] [rbp-300h]
  char v54[752]; // [rsp+60h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 48 4 17 card_deck_id:1156 64 8 16 __for_begin:1117 96 8 14 __for_end:1117 128 8 16 __for_begi"
                        "n:1120 160 8 14 __for_end:1120 192 8 16 __for_begin:1156 224 8 14 __for_end:1156 256 32 9 <unkno"
                        "wn> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknow"
                        "n> 640 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GCGPlayingExcelConfigMgr::checkMatchRankConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -202116109;
  ret = 0;
  __for_range = &this->gcg_match_rank_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGMatchRankExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GCGMatchRankExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGMatchRankExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::GCGMatchRankExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false> *)(v3 + 96)) )
      break;
    v49 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::GCGMatchRankExcelConfig>(v49);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGMatchRankExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGMatchRankExcelConfig>(v49);
    cur_time = 0;
    __for_range_0 = &config->rank_time_list;
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
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v11 = 1;
        goto LABEL_24;
      }
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      if ( *v8 <= cur_time )
        break;
      cur_time = *v8;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
      "checkMatchRankConfig",
      1124);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 256),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v9, (const char (*)[48])byte_1AD72F20);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
    v2 = -1;
    v11 = 0;
LABEL_24:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v11 != 1 )
    {
      v12 = 0;
      goto LABEL_86;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->match_ai_time_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->match_ai_time_limit >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->match_ai_time_limit);
    }
    if ( !config->match_ai_time_limit )
      goto LABEL_35;
    if ( *(_BYTE *)(((unsigned __int64)&config->rand_delay >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->rand_delay >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->rand_delay);
    }
    if ( cur_time + config->rand_delay > config->match_ai_time_limit )
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
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "checkMatchRankConfig",
        1132);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [89],(char *[89])0>(v13, (const char (*)[89])byte_1AD72F80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
LABEL_35:
      if ( *(_BYTE *)(((unsigned __int64)&config->lose_revise_min >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->lose_revise_min >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->lose_revise_min);
      }
      lose_revise_min = config->lose_revise_min;
      if ( *(_BYTE *)(((unsigned __int64)&config->lose_revise_max >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->lose_revise_max >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&config->lose_revise_max);
      }
      if ( lose_revise_min <= config->lose_revise_max )
      {
        v22 = (((_BYTE)config + 108) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&config->win_revise_min >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->win_revise_min >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&config->win_revise_min);
        }
        win_revise_min = config->win_revise_min;
        v24 = *(_BYTE *)(((unsigned __int64)&config->win_revise_max >> 3) + 0x7FFF8000);
        LOBYTE(v22) = v24 != 0;
        if ( v24 != 0 && v24 <= 3 )
          __asan_report_load4(&config->win_revise_max);
        if ( win_revise_min <= config->win_revise_max )
        {
          if ( *(char *)(((unsigned __int64)&config->is_only_ai >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&config->is_only_ai, v22, &config->is_only_ai);
          if ( config->is_only_ai )
            goto LABEL_94;
          if ( *(_BYTE *)(((unsigned __int64)&config->match_ai_lose_streak >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->match_ai_lose_streak >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->match_ai_lose_streak);
          }
          if ( config->match_ai_lose_streak )
            goto LABEL_94;
          v22 = (((_BYTE)config + 52) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&config->match_ai_time_limit >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->match_ai_time_limit >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&config->match_ai_time_limit);
          }
          if ( config->match_ai_time_limit )
          {
LABEL_94:
            if ( std::vector<int>::empty(&config->ai_deck_list) )
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
                "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                "checkMatchRankConfig",
                1152);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 512),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      v31,
                      (const char (*)[34])byte_1AD73140);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
              *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              __for_range_1 = &config->ai_deck_list;
              *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 192, v22);
              *(std::vector<int>::const_iterator *)(v3 + 192) = std::vector<int>::begin(__for_range_1);
              *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 224, v22);
              *(std::vector<int>::const_iterator *)(v3 + 224) = std::vector<int>::end(__for_range_1);
              while ( __gnu_cxx::operator!=<int const*,std::vector<int>>(
                        (const __gnu_cxx::__normal_iterator<int const*,std::vector<int> > *)(v3 + 192),
                        (const __gnu_cxx::__normal_iterator<int const*,std::vector<int> > *)(v3 + 224)) )
              {
                *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
                v33 = __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*((const __gnu_cxx::__normal_iterator<int const*,std::vector<int> > *const)(v3 + 192));
                v34 = (unsigned int *)v33;
                if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v33);
                }
                v35 = *v34;
                if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v3 + 48, v35);
                *(_DWORD *)(v3 + 48) = v35;
                if ( data::GCGGameExcelConfigMgrBase::findGCGDeckExcelConfig(
                       &txt_config_mgr->gcg_game_config_mgr,
                       *(unsigned int *)(v3 + 48)) )
                {
                  if ( (unsigned __int8)std::string::empty() )
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
                      "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                      "checkMatchRankConfig",
                      1167);
                    v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 640),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v41 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                            v40,
                            (const char (*)[47])byte_1AD731E0);
                    v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v41,
                            (const unsigned int *)(v3 + 48));
                    v43 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v42, (const char (*)[6])" ID: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
                    *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
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
                    "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                    "checkMatchRankConfig",
                    1161);
                  v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 576),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v37 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                          v36,
                          (const char (*)[32])byte_1AD731A0);
                  v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v37,
                          (const unsigned int *)(v3 + 48));
                  v39 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v38, (const char (*)[6])" ID: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
                  *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
                __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++((__gnu_cxx::__normal_iterator<int const*,std::vector<int> > *const)(v3 + 192));
              }
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
            }
          }
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
            4u,
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "checkMatchRankConfig",
            1144);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v25, (const char (*)[26])byte_1AD730A0);
          v27 = common::milog::MiLogStream::operator<<<int,(int *)0>(v26, &config->win_revise_min);
          v28 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v27, (const char (*)[34])byte_1AD730E0);
          v29 = common::milog::MiLogStream::operator<<<int,(int *)0>(v28, &config->win_revise_max);
          v30 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v29, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
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
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkMatchRankConfig",
          1138);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v16, (const char (*)[26])byte_1AD73000);
        v18 = common::milog::MiLogStream::operator<<<int,(int *)0>(v17, &config->lose_revise_min);
        v19 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v18, (const char (*)[34])byte_1AD73040);
        v20 = common::milog::MiLogStream::operator<<<int,(int *)0>(v19, &config->lose_revise_max);
        v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGMatchRankExcelConfig>,false,false> *const)(v3 + 64));
  }
  v12 = 1;
LABEL_86:
  if ( v12 == 1 )
    v2 = ret;
  if ( v54 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
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
  return v2;
};

// Line 1178: range 0000000014431EAA-000000001443227E
int32_t __cdecl GCGPlayingExcelConfigMgr::checkSceneDistributionConfig(
        const GCGPlayingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  ConstValueExcelConfigMgr *p_const_value_config_mgr; // rcx
  uint32_t *p_invite_scene_point; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::GCGSceneDistributionExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false,false>::reference v15; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig> >::type *config; // [rsp+38h] [rbp-C8h]
  char v18[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 16 __for_begin:1180 64 8 14 __for_end:1180 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::checkSceneDistributionConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->gcg_scene_distribution_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGSceneDistributionExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGSceneDistributionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGSceneDistributionExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGSceneDistributionExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false> *)(v2 + 64)) )
  {
    v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::GCGSceneDistributionExcelConfig>(v15);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGSceneDistributionExcelConfig>(v15);
    p_const_value_config_mgr = &txt_config_mgr->const_value_config_mgr;
    p_invite_scene_point = &config->invite_scene_point;
    if ( *(_BYTE *)(((unsigned __int64)p_invite_scene_point >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_invite_scene_point & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_invite_scene_point >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(p_invite_scene_point);
    }
    if ( !(unsigned int)ConstValueExcelConfigMgr::findGCGCharacterNpcStandPoint(
                          p_const_value_config_mgr,
                          config->invite_scene_point) )
    {
      ret = -1;
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
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "checkSceneDistributionConfig",
        1185);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])byte_1AD732E0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
      v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v9, (const char (*)[24])byte_1AD73320);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->invite_scene_point);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v11, (const char (*)[41])byte_1AD73360);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneDistributionExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v18 == (char *)v2 )
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

// Line 1192: range 0000000014432280-000000001443286B
int32_t __cdecl GCGPlayingExcelConfigMgr::checkConstNpcConfig(
        const GCGPlayingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  const GCGPlayingExcelConfigMgr *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-144h]
  data::GCGSceneConstNpcExcelConfigMap *__for_range; // [rsp+20h] [rbp-140h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false,false>::reference v17; // [rsp+28h] [rbp-138h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig> >::type *id; // [rsp+30h] [rbp-130h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig> >::type *config; // [rsp+38h] [rbp-128h]
  char v20[288]; // [rsp+40h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 18 max_config_id:1194 64 8 16 __for_begin:1195 96 8 14 __for_end:1195 128 32 9 <unknown> "
                        "192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::checkConstNpcConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, txt_config_mgr);
  *(_DWORD *)(v2 + 48) = 1000000;
  __for_range = &this->gcg_scene_const_npc_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGSceneConstNpcExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGSceneConstNpcExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGSceneConstNpcExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGSceneConstNpcExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false> *)(v2 + 96)) )
  {
    v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::GCGSceneConstNpcExcelConfig>(v17);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGSceneConstNpcExcelConfig>(v17);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    v5 = *id;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 48);
    if ( v5 >= *(_DWORD *)(v2 + 48) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "checkConstNpcConfig",
        1200);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v6, (const char (*)[22])byte_1AD73480);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
      v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])byte_1AD734C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    }
    v10 = this;
    if ( *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->level_id);
    }
    if ( !data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(v10, config->level_id) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "checkConstNpcConfig",
        1205);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v11, (const char (*)[25])byte_1AD73500);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->level_id);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v13, (const char (*)[31])byte_1AD73540);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1212: range 000000001443286C-00000000144333C5
int32_t __cdecl GCGPlayingExcelConfigMgr::checkWorldLevelConfig(
        const GCGPlayingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const GCGPlayingExcelConfigMgr *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  uint32_t unlock_param; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  const GCGPlayingExcelConfigMgr *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-1FCh]
  data::GCGWorldLevelExcelConfigMap *__for_range; // [rsp+18h] [rbp-1F8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false,false>::reference v29; // [rsp+20h] [rbp-1F0h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGWorldLevelExcelConfig> >::type *id; // [rsp+28h] [rbp-1E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGWorldLevelExcelConfig> >::type *config; // [rsp+30h] [rbp-1E0h]
  const data::GCGGameRewardExcelConfig *reward_config_ptr; // [rsp+38h] [rbp-1D8h]
  const data::GCGChallengeReward *challenge_reward; // [rsp+40h] [rbp-1D0h]
  const data::GCGChallengeExcelConfig *challenge_config_ptr; // [rsp+48h] [rbp-1C8h]
  char v35[448]; // [rsp+50h] [rbp-1C0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 16 __for_begin:1214 64 8 14 __for_end:1214 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::checkWorldLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  ret = 0;
  __for_range = &this->gcg_world_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGWorldLevelExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGWorldLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGWorldLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGWorldLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    v29 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::GCGWorldLevelExcelConfig>(v29);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGWorldLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGWorldLevelExcelConfig>(v29);
    v5 = this;
    if ( *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->level_id);
    }
    reward_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(v5, config->level_id);
    if ( reward_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->unlock_param >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->unlock_param >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->unlock_param);
      }
      unlock_param = config->unlock_param;
      if ( *(_BYTE *)(((unsigned __int64)&config->unlock_cond >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->unlock_cond >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->unlock_cond);
      }
      if ( (unsigned int)GCGPlayingExcelConfigMgr::checkLevelUnlockCond(
                           this,
                           txt_config_mgr,
                           config->unlock_cond,
                           unlock_param) )
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
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkWorldLevelConfig",
          1225);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1AD736C0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( std::vector<data::GCGChallengeReward>::empty(&reward_config_ptr->challenge_reward_list) )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkWorldLevelConfig",
          1231);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v13, (const char (*)[52])byte_1AD73720);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        challenge_reward = std::vector<data::GCGChallengeReward>::operator[](
                             &reward_config_ptr->challenge_reward_list,
                             0LL);
        v15 = this;
        if ( *(_BYTE *)(((unsigned __int64)&challenge_reward->challenge_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&challenge_reward->challenge_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&challenge_reward->challenge_id);
        }
        challenge_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGChallengeExcelConfig(
                                 v15,
                                 challenge_reward->challenge_id);
        if ( challenge_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)challenge_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->type >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&challenge_config_ptr->type);
          }
          if ( challenge_config_ptr->type != GCG_CHALLENGE_WIN )
          {
            ret = -1;
            *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 352, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 352),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
              "checkWorldLevelConfig",
              1245);
            v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v23 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v22,
                    (const char (*)[18])byte_1AD73780);
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &config->level_id);
            v25 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    v24,
                    (const char (*)[40])byte_1AD73800);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
            *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        else
        {
          ret = -1;
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
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "checkWorldLevelConfig",
            1239);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v16, (const char (*)[18])byte_1AD73780);
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &config->level_id);
          v19 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v18, (const char (*)[29])byte_1AD737C0);
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  &challenge_reward->challenge_id);
          v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
          *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
    }
    else
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
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "checkWorldLevelConfig",
        1219);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v6, (const char (*)[42])byte_1AD73660);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->level_id);
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" ID: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 1253: range 00000000144333C6-0000000014434112
int32_t __cdecl GCGPlayingExcelConfigMgr::checkWeekLevelConfig(
        const GCGPlayingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  unsigned int v6; // ecx
  char v7; // al
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t *p_gcg_level; // rax
  const GCGPlayingExcelConfigMgr *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  const GCGPlayingExcelConfigMgr *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-26Ch]
  data::GCGWeekLevelExcelConfigMap *__for_range; // [rsp+18h] [rbp-268h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false,false>::reference v37; // [rsp+20h] [rbp-260h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGWeekLevelExcelConfig> >::type *id; // [rsp+28h] [rbp-258h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGWeekLevelExcelConfig> >::type *config; // [rsp+30h] [rbp-250h]
  const std::vector<data::GCGWeekLevelCondConfig> *__for_range_0; // [rsp+38h] [rbp-248h]
  const data::GCGWeekLevelCondConfig *level_cond; // [rsp+40h] [rbp-240h]
  const data::GCGGameRewardExcelConfig *reward_config_ptr; // [rsp+48h] [rbp-238h]
  const data::GCGChallengeReward *challenge_reward; // [rsp+50h] [rbp-230h]
  const data::GCGChallengeExcelConfig *challenge_config_ptr; // [rsp+58h] [rbp-228h]
  char v45[544]; // [rsp+60h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 4 18 max_config_id:1255 64 8 16 __for_begin:1256 96 8 14 __for_end:1256 128 8 16 __for_beg"
                        "in:1263 160 8 14 __for_end:1263 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 "
                        "9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::checkWeekLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, txt_config_mgr);
  *(_DWORD *)(v2 + 48) = 1000000;
  __for_range = &this->gcg_week_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGWeekLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGWeekLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGWeekLevelExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGWeekLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false> *)(v2 + 96)) )
  {
    v37 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::GCGWeekLevelExcelConfig>(v37);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGWeekLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGWeekLevelExcelConfig>(v37);
    v5 = (char *)(((unsigned __int8)id & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    v6 = *id;
    v7 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(v5) = v7 != 0;
    if ( v7 != 0 && v7 <= 3 )
      __asan_report_load4(v2 + 48);
    if ( v6 >= *(_DWORD *)(v2 + 48) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "checkWeekLevelConfig",
        1261);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v8, (const char (*)[22])byte_1AD73980);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])byte_1AD734C0);
      v5 = (char *)(v2 + 48);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    }
    __for_range_0 = &config->level_cond_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<data::GCGWeekLevelCondConfig>::const_iterator *)(v2 + 128) = std::vector<data::GCGWeekLevelCondConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<data::GCGWeekLevelCondConfig>::const_iterator *)(v2 + 160) = std::vector<data::GCGWeekLevelCondConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::GCGWeekLevelCondConfig const*,std::vector<data::GCGWeekLevelCondConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::GCGWeekLevelCondConfig*,std::vector<data::GCGWeekLevelCondConfig> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<const data::GCGWeekLevelCondConfig*,std::vector<data::GCGWeekLevelCondConfig> > *)(v2 + 160)) )
    {
      level_cond = __gnu_cxx::__normal_iterator<data::GCGWeekLevelCondConfig const*,std::vector<data::GCGWeekLevelCondConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGWeekLevelCondConfig*,std::vector<data::GCGWeekLevelCondConfig> > *const)(v2 + 128));
      p_gcg_level = &level_cond->gcg_level;
      if ( *(_BYTE *)(((unsigned __int64)p_gcg_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gcg_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gcg_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_gcg_level);
      }
      if ( level_cond->gcg_level )
      {
        v13 = this;
        if ( *(_BYTE *)(((unsigned __int64)&level_cond->level_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&level_cond->level_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&level_cond->level_id);
        }
        reward_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(v13, level_cond->level_id);
        if ( reward_config_ptr )
        {
          if ( std::vector<data::GCGChallengeReward>::size(&reward_config_ptr->challenge_reward_list) == 1 )
          {
            challenge_reward = std::vector<data::GCGChallengeReward>::operator[](
                                 &reward_config_ptr->challenge_reward_list,
                                 0LL);
            v22 = this;
            if ( *(_BYTE *)(((unsigned __int64)&challenge_reward->challenge_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&challenge_reward->challenge_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&challenge_reward->challenge_id);
            }
            challenge_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGChallengeExcelConfig(
                                     v22,
                                     challenge_reward->challenge_id);
            if ( challenge_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)challenge_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->type >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&challenge_config_ptr->type);
              }
              if ( challenge_config_ptr->type != GCG_CHALLENGE_WIN )
              {
                ret = -1;
                *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 448, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 448),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                  "checkWeekLevelConfig",
                  1293);
                v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 448),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v29,
                        (const char (*)[11])byte_1AD739C0);
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, id);
                v32 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v31,
                        (const char (*)[11])byte_1AD73AA0);
                v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &level_cond->level_id);
                common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v33, (const char (*)[26])byte_1AD73AE0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
                *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
              }
            }
            else
            {
              ret = -1;
              *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 384, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 384),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
                "checkWeekLevelConfig",
                1287);
              v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 384),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v23,
                      (const char (*)[11])byte_1AD739C0);
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, id);
              v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v25,
                      (const char (*)[11])byte_1AD73AA0);
              v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &level_cond->level_id);
              v28 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      v27,
                      (const char (*)[29])byte_1AD737C0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                &challenge_reward->challenge_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
              *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
          else
          {
            ret = -1;
            *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 320, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 320),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
              "checkWeekLevelConfig",
              1279);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    v18,
                    (const char (*)[51])byte_1AD73A40);
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
            v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v20,
                    (const char (*)[11])byte_1AD73AA0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &level_cond->level_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
            *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        else
        {
          ret = -1;
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
            "checkWeekLevelConfig",
            1273);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])byte_1AD739C0);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
          v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v16, (const char (*)[29])byte_1AD73A00);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &level_cond->level_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      __gnu_cxx::__normal_iterator<data::GCGWeekLevelCondConfig const*,std::vector<data::GCGWeekLevelCondConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGWeekLevelCondConfig*,std::vector<data::GCGWeekLevelCondConfig> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v45 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
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
  }
  return result;
};

// Line 1301: range 0000000014434114-00000000144348C7
int32_t __cdecl GCGPlayingExcelConfigMgr::checkBossLevelConfig(
        const GCGPlayingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const GCGPlayingExcelConfigMgr *v5; // rcx
  uint32_t *p_normal_level_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  const GCGPlayingExcelConfigMgr *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  uint32_t unlock_param; // ecx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-164h]
  data::GCGBossLevelExcelConfigMap *__for_range; // [rsp+20h] [rbp-160h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false,false>::reference v22; // [rsp+28h] [rbp-158h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGBossLevelExcelConfig> >::type *id; // [rsp+30h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGBossLevelExcelConfig> >::type *config; // [rsp+38h] [rbp-148h]
  char v25[320]; // [rsp+40h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 16 __for_begin:1303 64 8 14 __for_end:1303 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::checkBossLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->gcg_boss_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    v22 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::GCGBossLevelExcelConfig>(v22);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGBossLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGBossLevelExcelConfig>(v22);
    v5 = this;
    p_normal_level_id = &config->normal_level_id;
    if ( *(_BYTE *)(((unsigned __int64)p_normal_level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_normal_level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_normal_level_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(p_normal_level_id);
    }
    if ( !data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(v5, config->normal_level_id) )
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
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "checkBossLevelConfig",
        1307);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v7, (const char (*)[48])byte_1AD73BE0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->normal_level_id);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" ID: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v11 = this;
    if ( *(_BYTE *)(((unsigned __int64)&config->hard_level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->hard_level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->hard_level_id);
    }
    if ( !data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(v11, config->hard_level_id) )
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
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "checkBossLevelConfig",
        1312);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v12, (const char (*)[48])byte_1AD73C40);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->hard_level_id);
      v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" ID: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->unlock_param >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->unlock_param >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->unlock_param);
    }
    unlock_param = config->unlock_param;
    if ( *(_BYTE *)(((unsigned __int64)&config->unlock_cond >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->unlock_cond >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->unlock_cond);
    }
    if ( (unsigned int)GCGPlayingExcelConfigMgr::checkLevelUnlockCond(
                         this,
                         txt_config_mgr,
                         config->unlock_cond,
                         unlock_param) )
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "checkBossLevelConfig",
        1317);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v17, (const char (*)[33])byte_1AD736C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1325: range 00000000144348C8-0000000014434E33
int32_t __cdecl GCGPlayingExcelConfigMgr::checkGameGroupConfig(
        const GCGPlayingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  unsigned int *v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-14Ch]
  data::GCGGameGroupExcelConfigMap *__for_range; // [rsp+18h] [rbp-148h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGGameGroupExcelConfig>,false,false>::reference v19; // [rsp+20h] [rbp-140h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGGameGroupExcelConfig> >::type *id; // [rsp+28h] [rbp-138h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-128h]
  char v22[288]; // [rsp+40h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 13 level_id:1329 64 8 16 __for_begin:1327 96 8 14 __for_end:1327 128 8 16 __for_begin:132"
                        "9 160 8 14 __for_end:1329 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::checkGameGroupConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->gcg_game_group_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGGameGroupExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGGameGroupExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGGameGroupExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGGameGroupExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GCGGameGroupExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGGameGroupExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGGameGroupExcelConfig>,false> *)(v2 + 96)) )
      break;
    v19 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGGameGroupExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGGameGroupExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::GCGGameGroupExcelConfig>(v19);
    __for_range_0 = &std::get<1ul,unsigned int const,data::GCGGameGroupExcelConfig>(v19)->level_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(v2 + 48, v6);
      }
      *(_DWORD *)(v2 + 48) = v9;
      if ( !data::GCGGameExcelConfigMgrBase::findGCGGameExcelConfig(
              &txt_config_mgr->gcg_game_config_mgr,
              *(unsigned int *)(v2 + 48)) )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkGameGroupConfig",
          1334);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v11, (const char (*)[29])byte_1AD73D80);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGGameGroupExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGGameGroupExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1343: range 0000000014434E34-00000000144353F9
int32_t __cdecl GCGPlayingExcelConfigMgr::checkQuestLevelConfig(
        const GCGPlayingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  uint32_t *p_quest_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  const GCGPlayingExcelConfigMgr *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  data::GCGQuestLevelExcelConfigMap *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGQuestLevelExcelConfig>,false,false>::reference v19; // [rsp+28h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGQuestLevelExcelConfig> >::type *id; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGQuestLevelExcelConfig> >::type *config; // [rsp+38h] [rbp-108h]
  char v22[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 16 __for_begin:1345 64 8 14 __for_end:1345 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGPlayingExcelConfigMgr::checkQuestLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->gcg_quest_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGQuestLevelExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGQuestLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGQuestLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGQuestLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGQuestLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGQuestLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGQuestLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    v19 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGQuestLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGQuestLevelExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::GCGQuestLevelExcelConfig>(v19);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGQuestLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGQuestLevelExcelConfig>(v19);
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    p_quest_id = &config->quest_id;
    if ( *(_BYTE *)(((unsigned __int64)p_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_quest_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_quest_id);
    }
    if ( data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, config->quest_id) )
    {
      v11 = this;
      if ( *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->level_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->level_id);
      }
      if ( !data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(v11, config->level_id) )
      {
        ret = -1;
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
          "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
          "checkQuestLevelConfig",
          1356);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v12, (const char (*)[29])byte_1AD73D80);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->level_id);
        v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
    {
      ret = -1;
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
        "./src/txt_data_manual/GCGPlayingExcelConfig.cpp",
        "checkQuestLevelConfig",
        1350);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v7, (const char (*)[17])byte_1AD73E60);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->quest_id);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" ID: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGQuestLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGQuestLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v22 == (char *)v2 )
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
