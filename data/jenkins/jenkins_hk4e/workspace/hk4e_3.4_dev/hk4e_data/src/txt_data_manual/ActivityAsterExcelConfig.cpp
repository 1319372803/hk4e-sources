// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityAsterExcelConfig.cpp

// Line 22: range 0000000012AAE200-0000000012AAEB68
int32_t __cdecl ActivityAsterExcelConfigMgr::checkConfig(
        ActivityAsterExcelConfigMgr *const this,
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
  char v13[512]; // [rsp+10h] [rbp-200h] BYREF

  v2 = (common::milog::MiLogStream *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"7 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityAsterExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  if ( ActivityAsterExcelConfigMgr::checkAsterLittleConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
      "checkConfig",
      25);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v5,
      (const char (*)[38])"[ASTER] checkAsterLittleConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityAsterExcelConfigMgr::checkAsterMissionConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
      "checkConfig",
      31);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v7,
      (const char (*)[39])"[ASTER] checkAsterMissionConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityAsterExcelConfigMgr::checkAsterMidConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
      "checkConfig",
      37);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v8,
      (const char (*)[35])"[ASTER] checkAsterMidConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityAsterExcelConfigMgr::checkAsterMidGroupsConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
      "checkConfig",
      43);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v9,
      (const char (*)[41])"[ASTER] checkAsterMidGroupsConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( ActivityAsterExcelConfigMgr::checkAsterMidDifficultyConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[9], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
      "checkConfig",
      49);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      v10,
      (const char (*)[45])"[ASTER] checkAsterMidDifficultyConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( ActivityAsterExcelConfigMgr::checkAsterPreviewConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
      "checkConfig",
      55);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v11,
      (const char (*)[39])"[ASTER] checkAsterPreviewConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else if ( ActivityAsterExcelConfigMgr::checkAsterStageConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[13] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[13], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
      "checkConfig",
      61);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v12,
      (const char (*)[37])"[ASTER] checkAsterStageConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 69: range 0000000012AAEB6A-0000000012AAF4D2
int32_t __cdecl ActivityAsterExcelConfigMgr::rewriteConfig(
        ActivityAsterExcelConfigMgr *const this,
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
  char v13[512]; // [rsp+10h] [rbp-200h] BYREF

  v2 = (common::milog::MiLogStream *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"7 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityAsterExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  if ( ActivityAsterExcelConfigMgr::rewriteAsterLittleConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
      "rewriteConfig",
      72);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v5,
      (const char (*)[40])"[ASTER] rewriteAsterLittleConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityAsterExcelConfigMgr::rewriteAsterMissionConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
      "rewriteConfig",
      78);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v7,
      (const char (*)[41])"[ASTER] rewriteAsterMissionConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityAsterExcelConfigMgr::rewriteAsterMidConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
      "rewriteConfig",
      84);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v8,
      (const char (*)[37])"[ASTER] rewriteAsterMidConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityAsterExcelConfigMgr::rewriteAsterMidGroupsConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
      "rewriteConfig",
      90);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      v9,
      (const char (*)[43])"[ASTER] rewriteAsterMidGroupsConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( ActivityAsterExcelConfigMgr::rewriteAsterMidDifficultyConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[9], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
      "rewriteConfig",
      96);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      v10,
      (const char (*)[47])"[ASTER] rewriteAsterMidDifficultyConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( ActivityAsterExcelConfigMgr::rewriteAsterPreviewConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
      "rewriteConfig",
      102);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v11,
      (const char (*)[41])"[ASTER] rewriteAsterPreviewConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else if ( ActivityAsterExcelConfigMgr::rewriteAsterStageConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[13] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[13], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
      "rewriteConfig",
      108);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v12,
      (const char (*)[39])"[ASTER] rewriteAsterStageConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 116: range 0000000012AAF4D4-0000000012AAFB5A
int32_t __cdecl ActivityAsterExcelConfigMgr::checkAsterLittleConfig(
        ActivityAsterExcelConfigMgr *const this,
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
  data::AsterMissionExcelConfigMap *p_aster_mission_excel_config_map; // rdx
  data::AsterMissionExcelConfigMap *v12; // rdx
  bool v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-18Ch]
  data::AsterLittleExcelConfigMap *__for_range; // [rsp+18h] [rbp-188h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false>::reference v22; // [rsp+20h] [rbp-180h]
  std::tuple_element<0,std::pair<unsigned int const,data::AsterLittleExcelConfig> >::type *stage_id; // [rsp+28h] [rbp-178h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-168h]
  char v25[352]; // [rsp+40h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 14 mission_id:120 64 8 15 __for_begin:118 96 8 13 __for_end:118 128 8 15 __for_begin:120 "
                        "160 8 13 __for_end:120 192 8 9 <unknown> 224 8 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityAsterExcelConfigMgr::checkAsterLittleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -202116109;
  ret = 0;
  __for_range = &this->aster_little_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false> *)(v2 + 96)) )
      break;
    v22 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false> *const)(v2 + 64));
    stage_id = std::get<0ul,unsigned int const,data::AsterLittleExcelConfig>(v22);
    __for_range_0 = &std::get<1ul,unsigned int const,data::AsterLittleExcelConfig>(v22)->mission_vec;
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
      LOBYTE(v6) = v10 != 0;
      if ( v10 != 0 && v10 <= 3 )
        __asan_report_store4(v2 + 48, v6);
      *(_DWORD *)(v2 + 48) = v9;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      p_aster_mission_excel_config_map = &this->aster_mission_excel_config_map;
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 224, v6);
      *(std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::end(p_aster_mission_excel_config_map);
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      v12 = &this->aster_mission_excel_config_map;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, v6);
      *(std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::find(
                                                                                                  v12,
                                                                                                  (const std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::key_type *)(v2 + 48));
      v13 = std::__detail::operator==<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false> *)(v2 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false> *)(v2 + 224));
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( v13 )
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
          "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
          "checkAsterLittleConfig",
          124);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v14, (const char (*)[29])byte_1AA1B000);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, stage_id);
        v17 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v16, (const char (*)[23])byte_1AA1B040);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])byte_1AA1B080);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v25 == (char *)v2 )
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

// Line 134: range 0000000012AAFB5C-0000000012AB00C2
int32_t __cdecl ActivityAsterExcelConfigMgr::checkAsterMissionConfig(
        ActivityAsterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_phase; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  data::AsterMissionExcelConfigMap *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false,false>::reference v13; // [rsp+28h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AsterMissionExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-108h]
  char v15[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:136 64 8 13 __for_end:136 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityAsterExcelConfigMgr::checkAsterMissionConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->aster_mission_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false> *)(v2 + 64)) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::AsterMissionExcelConfig>(v13);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AsterMissionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AsterMissionExcelConfig>(v13);
    p_phase = &excel_config->phase;
    if ( *(_BYTE *)(((unsigned __int64)p_phase >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_phase & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_phase >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_phase);
    }
    if ( !data::isValidAsterPhase(excel_config->phase) )
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
        "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
        "checkAsterMissionConfig",
        140);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v6, (const char (*)[45])byte_1AA1B160);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &excel_config->phase);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->watcher_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->watcher_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->watcher_id);
    }
    if ( !ActivityAsterExcelConfigMgr::isWatcherValid(this, txt_config_mgr, excel_config->watcher_id) )
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
        "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
        "checkAsterMissionConfig",
        146);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v8, (const char (*)[49])byte_1AA1B1C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->watcher_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v15 == (char *)v2 )
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

// Line 155: range 0000000012AB00C4-0000000012AB0628
int32_t __cdecl ActivityAsterExcelConfigMgr::checkAsterMidConfig(
        ActivityAsterExcelConfigMgr *const this,
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
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-14Ch]
  data::AsterMidExcelConfigMap *__for_range; // [rsp+18h] [rbp-148h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidExcelConfig>,false,false>::reference v18; // [rsp+20h] [rbp-140h]
  std::tuple_element<0,std::pair<unsigned int const,data::AsterMidExcelConfig> >::type *id; // [rsp+28h] [rbp-138h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-128h]
  char v21[288]; // [rsp+40h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 11 camp_id:159 64 8 15 __for_begin:157 96 8 13 __for_end:157 128 8 15 __for_begin:159 160"
                        " 8 13 __for_end:159 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityAsterExcelConfigMgr::checkAsterMidConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->aster_mid_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterMidExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AsterMidExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterMidExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AsterMidExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AsterMidExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMidExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMidExcelConfig>,false> *)(v2 + 96)) )
      break;
    v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::AsterMidExcelConfig>(v18);
    __for_range_0 = &std::get<1ul,unsigned int const,data::AsterMidExcelConfig>(v18)->camp_vec;
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
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::AsterMidGroupsExcelConfig>,unsigned int>(
              &this->aster_mid_groups_excel_config_map,
              (const unsigned int *)(v2 + 48)) )
      {
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
          "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
          "checkAsterMidConfig",
          163);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v11, (const char (*)[48])byte_1AA1B300);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
        v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])byte_1AA1B360);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v21 == (char *)v2 )
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

// Line 173: range 0000000012AB062A-0000000012AB0DAA
int32_t __cdecl ActivityAsterExcelConfigMgr::checkAsterMidGroupsConfig(
        ActivityAsterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_group_id; // rax
  __int64 v6; // rsi
  uint32_t group_id; // ecx
  char v8; // al
  const TxtConfigMgr *v9; // rsi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  char *v12; // rsi
  unsigned int *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-18Ch]
  data::AsterMidGroupsExcelConfigMap *__for_range; // [rsp+18h] [rbp-188h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false,false>::reference v23; // [rsp+20h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AsterMidGroupsExcelConfig> >::type *excel_config; // [rsp+30h] [rbp-170h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-168h]
  char v26[352]; // [rsp+40h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 4 12 group_id:177 48 4 19 battle_group_id:184 64 8 15 __for_begin:175 96 8 13 __for_end:175"
                        " 128 8 15 __for_begin:184 160 8 13 __for_end:184 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityAsterExcelConfigMgr::checkAsterMidGroupsConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  ret = 0;
  __for_range = &this->aster_mid_groups_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterMidGroupsExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AsterMidGroupsExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterMidGroupsExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AsterMidGroupsExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false> *)(v2 + 96)) )
  {
    v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false,false> *const)(v2 + 64));
    std::get<0ul,unsigned int const,data::AsterMidGroupsExcelConfig>(v23);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AsterMidGroupsExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AsterMidGroupsExcelConfig>(v23);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    p_group_id = &excel_config->group_id;
    v6 = (((_BYTE)excel_config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_group_id);
    }
    group_id = excel_config->group_id;
    v8 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(v2 + 32, v6);
    }
    *(_DWORD *)(v2 + 32) = group_id;
    v9 = txt_config_mgr;
    if ( !ActivityAsterExcelConfigMgr::isGroupIdValid(this, txt_config_mgr, *(_DWORD *)(v2 + 32)) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
        "checkAsterMidGroupsConfig",
        180);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v10, (const char (*)[45])byte_1AA1B4A0);
      v9 = (const TxtConfigMgr *)(v2 + 32);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &excel_config->battle_group_vec;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v9);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v9);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v12 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v13 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v14 = (int *)v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      v16 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v12) = v16 != 0;
        __asan_report_store4(v2 + 48, v12);
      }
      *(_DWORD *)(v2 + 48) = v15;
      if ( !ActivityAsterExcelConfigMgr::isGroupIdValid(this, txt_config_mgr, *(_DWORD *)(v2 + 48)) )
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
          "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
          "checkAsterMidGroupsConfig",
          188);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v17, (const char (*)[45])byte_1AA1B4A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v26 == (char *)v2 )
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

// Line 198: range 0000000012AB0DAC-0000000012AB1164
int32_t __cdecl ActivityAsterExcelConfigMgr::checkAsterMidDifficultyConfig(
        ActivityAsterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
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
  data::AsterMidDifficultyExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidDifficultyExcelConfig>,false,false>::reference v12; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::AsterMidDifficultyExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AsterMidDifficultyExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-C8h]
  char v15[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:201 64 8 13 __for_end:201 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityAsterExcelConfigMgr::checkAsterMidDifficultyConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->aster_mid_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterMidDifficultyExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::AsterMidDifficultyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterMidDifficultyExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AsterMidDifficultyExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AsterMidDifficultyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMidDifficultyExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMidDifficultyExcelConfig>,false> *)(v2 + 64)) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidDifficultyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidDifficultyExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::AsterMidDifficultyExcelConfig>(v12);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AsterMidDifficultyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AsterMidDifficultyExcelConfig>(v12);
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->drop_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->drop_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->drop_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                            txt_config_mgr,
                            excel_config->drop_id,
                            ITEM_LIMIT_ACTIVITY_ASTER_DROP) != 1 )
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
        "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
        "checkAsterMidDifficultyConfig",
        205);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1AA1B5A0);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &excel_config->drop_id);
      v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])byte_1AA1B5E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidDifficultyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidDifficultyExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 214: range 0000000012AB1166-0000000012AB18A4
int32_t __cdecl ActivityAsterExcelConfigMgr::checkAsterPreviewConfig(
        ActivityAsterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::tuple_element<0,std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig> >::type *special_reward_id; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  char *v10; // rsi
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-18Ch]
  data::AsterActivityPerviewExcelConfigMap *__for_range; // [rsp+18h] [rbp-188h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>,false,false>::reference v21; // [rsp+20h] [rbp-180h]
  std::tuple_element<0,std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig> >::type *id; // [rsp+28h] [rbp-178h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig> >::type *excel_config; // [rsp+30h] [rbp-170h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-168h]
  char v25[352]; // [rsp+40h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 14 watcher_id:224 64 8 15 __for_begin:216 96 8 13 __for_end:216 128 8 15 __for_begin:224 "
                        "160 8 13 __for_end:224 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityAsterExcelConfigMgr::checkAsterPreviewConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  ret = 0;
  __for_range = &this->aster_activity_perview_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterActivityPerviewExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AsterActivityPerviewExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterActivityPerviewExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AsterActivityPerviewExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>,false> *)(v2 + 96)) )
  {
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::AsterActivityPerviewExcelConfig>(v21);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AsterActivityPerviewExcelConfig>(v21);
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->special_reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->special_reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->special_reward_id);
    }
    special_reward_id = (std::tuple_element<0,std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig> >::type *)excel_config->special_reward_id;
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            (uint32_t)special_reward_id,
                            ITEM_LIMIT_ACTIVITY_ASTER_REWARD) != 1 )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
        "checkAsterPreviewConfig",
        220);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v6, (const char (*)[38])byte_1AA1B700);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &excel_config->special_reward_id);
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])byte_1AA1B5E0);
      special_reward_id = id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &excel_config->watcher_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, special_reward_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, special_reward_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v10 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v11 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v12 = (int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
      v14 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v10) = v14 != 0;
        __asan_report_store4(v2 + 48, v10);
      }
      *(_DWORD *)(v2 + 48) = v13;
      if ( !ActivityAsterExcelConfigMgr::isWatcherValid(this, txt_config_mgr, *(_DWORD *)(v2 + 48)) )
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
          "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
          "checkAsterPreviewConfig",
          228);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v15, (const char (*)[49])byte_1AA1B760);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v25 == (char *)v2 )
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

// Line 238: range 0000000012AB18A6-0000000012AB1DCE
int32_t __cdecl ActivityAsterExcelConfigMgr::checkAsterStageConfig(
        ActivityAsterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  data::AsterStageExcelConfigMap *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterStageExcelConfig>,false,false>::reference v12; // [rsp+28h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AsterStageExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-108h]
  char v14[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:240 64 8 13 __for_end:240 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityAsterExcelConfigMgr::checkAsterStageConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->aster_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterStageExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::AsterStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterStageExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AsterStageExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AsterStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterStageExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterStageExcelConfig>,false> *)(v2 + 64)) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterStageExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::AsterStageExcelConfig>(v12);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AsterStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AsterStageExcelConfig>(v12);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::NewActivityExcelConfig> const,unsigned int>(
            &txt_config_mgr->new_activity_config_mgr.new_activity_excel_config_map,
            &excel_config->activity_id) )
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
        "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
        "checkAsterStageConfig",
        244);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v5, (const char (*)[28])byte_1AA1B860);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &excel_config->activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->chapter_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->chapter_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->chapter_id);
    }
    if ( !data::isValidAsterPhase(excel_config->chapter_id) )
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
        "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
        "checkAsterStageConfig",
        250);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AA1B8A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &excel_config->chapter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterStageExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v14 == (char *)v2 )
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

// Line 259: range 0000000012AB1DD0-0000000012AB322B
int32_t __cdecl ActivityAsterExcelConfigMgr::rewriteAsterLittleConfig(
        ActivityAsterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_watcher_id; // rsi
  unsigned int *v7; // rax
  const unsigned int *v8; // r8
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // edx
  int v15; // eax
  unsigned int *v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  data::AsterMissionExcelConfigMap *p_aster_mission_excel_config_map; // rdx
  data::AsterMissionExcelConfigMap *v21; // rdx
  bool v22; // al
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // edx
  std::set<unsigned int> *v29; // r15
  int v30; // edx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v34; // rax
  __int64 v35; // rsi
  std::vector<unsigned int>::reference v36; // rax
  uint32_t *v37; // rdx
  uint32_t v38; // ecx
  char v39; // al
  __int64 v40; // rsi
  std::vector<unsigned int>::reference v41; // rax
  uint32_t *v42; // rdx
  uint32_t v43; // ecx
  char v44; // dl
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  data::AsterLittleExcelConfigMap *__for_range; // [rsp+20h] [rbp-420h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false>::reference v50; // [rsp+28h] [rbp-418h]
  std::tuple_element<0,std::pair<unsigned int const,data::AsterLittleExcelConfig> >::type *stage_id; // [rsp+30h] [rbp-410h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AsterLittleExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-408h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-400h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-3F8h]
  data::AsterLittleExcelConfigMap *__for_range_2; // [rsp+50h] [rbp-3F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false>::reference v56; // [rsp+58h] [rbp-3E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::AsterLittleExcelConfig> >::type *stage_id_0; // [rsp+60h] [rbp-3E0h]
  char v58[976]; // [rsp+70h] [rbp-3D0h] BYREF

  v3 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(928LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "20 32 4 17 next_stage_id:271 48 4 14 mission_id:281 64 8 15 __for_begin:263 96 8 13 __for_end:26"
                        "3 128 8 15 __for_begin:271 160 8 13 __for_end:271 192 8 15 __for_begin:281 224 8 13 __for_end:28"
                        "1 256 8 8 iter:283 288 8 9 <unknown> 320 8 15 __for_begin:293 352 8 13 __for_end:293 384 24 19 f"
                        "irst_stage_vec:260 448 24 18 last_stage_vec:261 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <"
                        "unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 56 17 pre_stage_map:262";
  *(_QWORD *)(v3 + 16) = ActivityAsterExcelConfigMgr::rewriteAsterLittleConfig;
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
  v5[536862731] = -218959360;
  v5[536862732] = -234881024;
  v5[536862733] = -218959118;
  v5[536862734] = -234881024;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218103808;
  v5[536862748] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 384));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 448));
  std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 832));
  __for_range = &this->aster_little_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_watcher_id = (uint32_t *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false> *)(v3 + 96)) )
      break;
    v50 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false> *const)(v3 + 64));
    stage_id = std::get<0ul,unsigned int const,data::AsterLittleExcelConfig>(v50);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AsterLittleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AsterLittleExcelConfig>(v50);
    if ( std::vector<unsigned int>::empty(&excel_config->next_stage_id_vec) )
    {
      p_watcher_id = stage_id;
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v3 + 448), stage_id);
    }
    else
    {
      __for_range_0 = &excel_config->next_stage_id_vec;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, p_watcher_id);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, p_watcher_id);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        p_watcher_id = (uint32_t *)(v3 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
        {
          v14 = 1;
          goto LABEL_28;
        }
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
        v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
        v9 = (int *)v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        v10 = *v9;
        v11 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
        if ( v11 != 0 && v11 <= 3 )
        {
          LOBYTE(p_watcher_id) = v11 != 0;
          __asan_report_store4(v3 + 32, p_watcher_id);
        }
        *(_DWORD *)(v3 + 32) = v10;
        v12 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
                (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 832),
                (unsigned int *)(v3 + 32),
                stage_id,
                (unsigned int *)(v3 + 32),
                v8);
        if ( !v12.second )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      }
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
        "rewriteAsterLittleConfig",
        275);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      p_watcher_id = (uint32_t *)byte_1AA1BB00;
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v13, (const char (*)[51])byte_1AA1BB00);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
LABEL_28:
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v14 != 1 )
      {
        v15 = 0;
        goto LABEL_57;
      }
    }
    __for_range_1 = &excel_config->mission_vec;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, p_watcher_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, p_watcher_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      p_watcher_id = (uint32_t *)(v3 + 224);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224)) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v16 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
      v17 = (int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v18 = *v17;
      v19 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(p_watcher_id) = v19 != 0;
      if ( v19 != 0 && v19 <= 3 )
        __asan_report_store4(v3 + 48, p_watcher_id);
      *(_DWORD *)(v3 + 48) = v18;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      p_aster_mission_excel_config_map = &this->aster_mission_excel_config_map;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, p_watcher_id);
      *(std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::iterator *)(v3 + 256) = std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::find(
                                                                                                  p_aster_mission_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::key_type *)(v3 + 48));
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      v21 = &this->aster_mission_excel_config_map;
      if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 288, v3 + 48);
      *(std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::iterator *)(v3 + 288) = std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::end(v21);
      v22 = std::__detail::operator==<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false> *)(v3 + 256),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false> *)(v3 + 288));
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
      if ( v22 )
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
          "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
          "rewriteAsterLittleConfig",
          286);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v24 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v23, (const char (*)[29])byte_1AA1B000);
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, stage_id);
        v26 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v25, (const char (*)[23])byte_1AA1B040);
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v3 + 48));
        p_watcher_id = (uint32_t *)byte_1AA1B080;
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v27, (const char (*)[10])byte_1AA1B080);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
        *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v28 = 0;
      }
      else
      {
        v29 = std::map<unsigned int,std::set<unsigned int>>::operator[](&this->aster_little_watcher_set_map_, stage_id);
        p_watcher_id = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false,false> *const)(v3 + 256))->second.watcher_id;
        std::set<unsigned int>::insert(v29, p_watcher_id);
        v28 = 1;
      }
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      if ( v28 != 1 )
      {
        v30 = 0;
        goto LABEL_53;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
    }
    v30 = 1;
LABEL_53:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v30 != 1 )
    {
      v15 = 0;
      goto LABEL_57;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false> *const)(v3 + 64));
  }
  v15 = 1;
LABEL_57:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v15 == 1 )
  {
    __for_range_2 = &this->aster_little_excel_config_map;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, p_watcher_id);
    *(std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::iterator *)(v3 + 320) = std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 352, p_watcher_id);
    *(std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::iterator *)(v3 + 352) = std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::end(__for_range_2);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false> *)(v3 + 320),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false> *)(v3 + 352)) )
    {
      v56 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false> *const)(v3 + 320));
      stage_id_0 = std::get<0ul,unsigned int const,data::AsterLittleExcelConfig>(v56);
      std::get<1ul,unsigned int const,data::AsterLittleExcelConfig>(v56);
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
              (std::unordered_map<unsigned int,unsigned int> *)(v3 + 832),
              stage_id_0) )
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v3 + 384), stage_id_0);
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false> *const)(v3 + 320));
    }
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 384))
      || std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 384)) > 1 )
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
        "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
        "rewriteAsterLittleConfig",
        304);
      v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 640),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v32, (const char (*)[51])byte_1AA1BB60);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
      *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
    }
    else if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 448))
           || std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 448)) > 1 )
    {
      *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 704, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 704),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
        "rewriteAsterLittleConfig",
        310);
      v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 704),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v34, (const char (*)[51])byte_1AA1BBC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
      *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
    }
    else
    {
      v35 = 0LL;
      v36 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 384), 0LL);
      v37 = v36;
      if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v36);
      }
      v38 = *v37;
      v39 = *(_BYTE *)(((unsigned __int64)&this->aster_little_first_stage_id_ >> 3) + 0x7FFF8000);
      if ( v39 != 0 && v39 <= 3 )
      {
        LOBYTE(v35) = v39 != 0;
        __asan_report_store4(&this->aster_little_first_stage_id_, v35);
      }
      this->aster_little_first_stage_id_ = v38;
      v40 = 0LL;
      v41 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 448), 0LL);
      v42 = v41;
      if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v41);
      }
      v43 = *v42;
      v44 = *(_BYTE *)(((unsigned __int64)&this->aster_little_last_stage_id_ >> 3) + 0x7FFF8000);
      if ( v44 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v44 )
      {
        LOBYTE(v40) = v44 != 0;
        __asan_report_store4(&this->aster_little_last_stage_id_, v40);
      }
      this->aster_little_last_stage_id_ = v43;
      *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 768, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 768),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
        "rewriteAsterLittleConfig",
        317);
      v45 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              (common::milog::MiLogStream *const)(v3 + 768),
              (const char (*)[44])byte_1AA1BC20);
      v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v45,
              &this->aster_little_first_stage_id_);
      v47 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v46, (const char (*)[22])byte_1AA1BC80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &this->aster_little_last_stage_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
      *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
    }
  }
  std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 832));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 448));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 384));
  if ( v58 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF806C) = 0LL;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8070) = -168430091;
  }
  return v2;
};

// Line 323: range 0000000012AB322C-0000000012AB35F1
int32_t __cdecl ActivityAsterExcelConfigMgr::rewriteAsterMissionConfig(
        ActivityAsterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  std::set<unsigned int> *v12; // rax
  int32_t result; // eax
  data::AsterMissionExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false,false>::reference v15; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AsterMissionExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v17[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:324 64 8 13 __for_end:324 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityAsterExcelConfigMgr::rewriteAsterMissionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->aster_mission_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AsterMissionExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::AsterMissionExcelConfig>(v15);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AsterMissionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AsterMissionExcelConfig>(v15);
    v7 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->watcher_phase_map_,
           &excel_config->watcher_id,
           &excel_config->phase,
           &excel_config->watcher_id,
           v6);
    if ( !v7.second )
      break;
    std::set<unsigned int>::insert(&this->aster_watcher_set_, &excel_config->watcher_id);
    v12 = std::map<unsigned int,std::set<unsigned int>>::operator[](&this->phase_watcher_set_map_, &excel_config->phase);
    std::set<unsigned int>::insert(v12, &excel_config->watcher_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMissionExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
    "rewriteAsterMissionConfig",
    328);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v8, (const char (*)[40])byte_1AA1BD60);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->watcher_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])byte_1AA1BDC0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_16:
  if ( v11 == 1 )
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

// Line 340: range 0000000012AB35F2-0000000012AB37E0
int32_t __cdecl ActivityAsterExcelConfigMgr::rewriteAsterMidConfig(
        ActivityAsterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::AsterMidExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidExcelConfig>,false,false>::reference v7; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::AsterMidExcelConfig> >::type *refresh_id; // [rsp+20h] [rbp-90h]
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMidExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMidExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:341 64 8 13 __for_end:341";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMidExcelConfig>,false>::__node_type *)ActivityAsterExcelConfigMgr::rewriteAsterMidConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->aster_mid_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::AsterMidExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::AsterMidExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AsterMidExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidExcelConfig>,false,false>::operator*(v2 + 4);
    refresh_id = std::get<0ul,unsigned int const,data::AsterMidExcelConfig>(v7);
    std::get<1ul,unsigned int const,data::AsterMidExcelConfig>(v7);
    std::vector<unsigned int>::push_back(&this->aster_mid_refresh_id_vec_, refresh_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMidExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 350: range 0000000012AB37E2-0000000012AB3CDF
int32_t __cdecl ActivityAsterExcelConfigMgr::rewriteAsterMidGroupsConfig(
        ActivityAsterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::tuple_element<0,std::pair<unsigned int const,data::AsterMidGroupsExcelConfig> >::type v5; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  std::tuple_element<0,std::pair<unsigned int const,data::AsterMidGroupsExcelConfig> >::type *v7; // rdx
  char v8; // cl
  uint32_t *p_group_id; // rsi
  char *v10; // rsi
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  std::tuple_element<0,std::pair<unsigned int const,data::AsterMidGroupsExcelConfig> >::type v15; // r14d
  char *v16; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v17; // rax
  std::tuple_element<0,std::pair<unsigned int const,data::AsterMidGroupsExcelConfig> >::type *v18; // rdx
  char v19; // cl
  int32_t result; // eax
  data::AsterMidGroupsExcelConfigMap *__for_range; // [rsp+18h] [rbp-118h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false,false>::reference v22; // [rsp+20h] [rbp-110h]
  std::tuple_element<0,std::pair<unsigned int const,data::AsterMidGroupsExcelConfig> >::type *camp_id; // [rsp+28h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AsterMidGroupsExcelConfig> >::type *excel_config; // [rsp+30h] [rbp-100h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-F8h]
  char v26[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 19 battle_group_id:354 64 8 15 __for_begin:351 96 8 13 __for_end:351 128 8 15 __for_begin"
                        ":354 160 8 13 __for_end:354";
  *(_QWORD *)(v2 + 16) = ActivityAsterExcelConfigMgr::rewriteAsterMidGroupsConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202116352;
  __for_range = &this->aster_mid_groups_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterMidGroupsExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AsterMidGroupsExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterMidGroupsExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AsterMidGroupsExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false> *)(v2 + 96)) )
  {
    v22 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false,false> *const)(v2 + 64));
    camp_id = std::get<0ul,unsigned int const,data::AsterMidGroupsExcelConfig>(v22);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AsterMidGroupsExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AsterMidGroupsExcelConfig>(v22);
    if ( *(_BYTE *)(((unsigned __int64)camp_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)camp_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)camp_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(camp_id);
    }
    v5 = *camp_id;
    p_group_id = &excel_config->group_id;
    v6 = std::map<unsigned int,unsigned int>::operator[](&this->aster_mid_group_camp_map_, &excel_config->group_id);
    v7 = v6;
    v8 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
    LOBYTE(p_group_id) = v8 != 0;
    if ( v8 != 0 && (char)(((unsigned __int8)v6 & 7) + 3) >= v8 )
      __asan_report_store4(v6, p_group_id);
    *v7 = v5;
    __for_range_0 = &excel_config->battle_group_vec;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, p_group_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, p_group_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v10 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v11 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v12 = (int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
      v14 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v10) = v14 != 0;
        __asan_report_store4(v2 + 48, v10);
      }
      *(_DWORD *)(v2 + 48) = v13;
      if ( *(_BYTE *)(((unsigned __int64)camp_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)camp_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)camp_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(camp_id);
      }
      v15 = *camp_id;
      v16 = (char *)(v2 + 48);
      v17 = std::map<unsigned int,unsigned int>::operator[](
              &this->aster_mid_group_camp_map_,
              (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      v18 = v17;
      v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
      {
        LOBYTE(v16) = v19 != 0;
        __asan_report_store4(v17, v16);
      }
      *v18 = v15;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = 0;
  if ( v26 == (char *)v2 )
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

// Line 364: range 0000000012AB3CE0-0000000012AB3CF2
int32_t __cdecl ActivityAsterExcelConfigMgr::rewriteAsterMidDifficultyConfig(
        ActivityAsterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 369: range 0000000012AB3CF4-0000000012AB4057
int32_t __cdecl ActivityAsterExcelConfigMgr::rewriteAsterPreviewConfig(
        ActivityAsterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::AsterActivityPerviewExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::AsterActivityPerviewExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:370 64 8 13 __for_end:370 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityAsterExcelConfigMgr::rewriteAsterPreviewConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->aster_activity_perview_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterActivityPerviewExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::AsterActivityPerviewExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AsterActivityPerviewExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AsterActivityPerviewExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::AsterActivityPerviewExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AsterActivityPerviewExcelConfig>(v14);
    v7 = std::map<unsigned int,data::AsterActivityPerviewExcelConfig>::emplace<unsigned int const&,data::AsterActivityPerviewExcelConfig const&>(
           &this->activity_aster_preview_map_,
           &excel_config->activity_id,
           excel_config,
           (const unsigned int *)&this->activity_aster_preview_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
    "rewriteAsterPreviewConfig",
    374);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v8, (const char (*)[41])byte_1AA1BF40);
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

// Line 383: range 0000000012AB4058-0000000012AB426F
int32_t __cdecl ActivityAsterExcelConfigMgr::rewriteAsterStageConfig(
        ActivityAsterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterStageExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::AsterStageExcelConfig> *v5; // rdi
  const data::AsterStageExcelConfig *v6; // r8
  int32_t result; // eax
  data::AsterStageExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterStageExcelConfig>,false,false>::reference v10; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AsterStageExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-88h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterStageExcelConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterStageExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterStageExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterStageExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:384 64 8 13 __for_end:384";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterStageExcelConfig>,false>::__node_type *)ActivityAsterExcelConfigMgr::rewriteAsterStageConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->aster_stage_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::AsterStageExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::AsterStageExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AsterStageExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterStageExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::AsterStageExcelConfig>(v10);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AsterStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AsterStageExcelConfig>(v10);
    v5 = std::map<unsigned int,std::map<unsigned int,data::AsterStageExcelConfig>>::operator[](
           &this->activity_aster_phase_map_,
           &excel_config->activity_id);
    std::map<unsigned int,data::AsterStageExcelConfig>::emplace<unsigned int const&,data::AsterStageExcelConfig const&>(
      v5,
      &excel_config->chapter_id,
      excel_config,
      &excel_config->chapter_id,
      v6);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AsterStageExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterStageExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 393: range 0000000012AB4270-0000000012AB4512
__int64 __fastcall ActivityAsterExcelConfigMgr::findAsterLittleNextStageId(
        const ActivityAsterExcelConfigMgr *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::AsterLittleExcelConfigMap *p_aster_little_excel_config_map; // rdx
  data::AsterLittleExcelConfigMap *v6; // rdx
  bool v7; // al
  unsigned int v8; // r14d
  unsigned __int64 v9; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false>::pointer v10; // rax
  std::vector<unsigned int>::reference v11; // rax
  unsigned int *v12; // rdx
  __int64 result; // rax
  char v14[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 stage_id:392 64 8 8 iter:394 96 8 9 <unknown> 128 24 21 next_stage_id_vec:400";
  *(_QWORD *)(v2 + 16) = ActivityAsterExcelConfigMgr::findAsterLittleNextStageId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_aster_little_excel_config_map = &this->aster_little_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::find(
                                                                                                  p_aster_little_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->aster_little_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AsterLittleExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = 0;
  }
  else
  {
    v9 = ((v2 + 128) >> 3) + 2147450880;
    *(_WORD *)v9 = 0;
    *(_BYTE *)(v9 + 2) = 0;
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AsterLittleExcelConfig>,false,false> *const)(v2 + 64));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128), &v10->second.next_stage_id_vec);
    if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 128)) )
    {
      v11 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 128), 0LL);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v8 = *v12;
    }
    else
    {
      v8 = 0;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
  }
  result = v8;
  if ( v14 == (char *)v2 )
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

// Line 411: range 0000000012AB4514-0000000012AB46EC
__int64 __fastcall ActivityAsterExcelConfigMgr::getAsterLittleStageWatcherSet(
        const ActivityAsterExcelConfigMgr *const this,
        __int64 stage_id,
        std::set<unsigned int> *watcher_set)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,std::set<unsigned int>> *p_aster_little_watcher_set_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool v8; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::pointer v9; // rax
  __int64 result; // rax
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 stage_id:410 64 8 8 iter:412 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityAsterExcelConfigMgr::getAsterLittleStageWatcherSet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = stage_id;
  p_aster_little_watcher_set_map = &this->aster_little_watcher_set_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, stage_id);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_aster_little_watcher_set_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->aster_little_watcher_set_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 64));
    std::set<unsigned int>::operator=(watcher_set, &v9->second);
  }
  result = 0LL;
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

// Line 422: range 0000000012AB46EE-0000000012AB471E
int32_t __cdecl ActivityAsterExcelConfigMgr::getAsterWatcherSet(
        const ActivityAsterExcelConfigMgr *const this,
        std::set<unsigned int> *watcher_set)
{
  std::set<unsigned int>::operator=(watcher_set, &this->aster_watcher_set_);
  return 0;
};

// Line 428: range 0000000012AB4720-0000000012AB48F8
__int64 __fastcall ActivityAsterExcelConfigMgr::getPhaseWatcherSet(
        const ActivityAsterExcelConfigMgr *const this,
        __int64 phase,
        std::set<unsigned int> *watcher_set)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,std::set<unsigned int>> *p_phase_watcher_set_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool v8; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::pointer v9; // rax
  __int64 result; // rax
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 9 phase:427 64 8 8 iter:429 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityAsterExcelConfigMgr::getPhaseWatcherSet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = phase;
  p_phase_watcher_set_map = &this->phase_watcher_set_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, phase);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_phase_watcher_set_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->phase_watcher_set_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 64));
    std::set<unsigned int>::operator=(watcher_set, &v9->second);
  }
  result = 0LL;
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

// Line 438: range 0000000012AB48FA-0000000012AB4AF5
__int64 __fastcall ActivityAsterExcelConfigMgr::getPhaseByWatcher(
        const ActivityAsterExcelConfigMgr *const this,
        __int64 watcher_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_watcher_phase_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 watcher_id:437 64 8 8 iter:439 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityAsterExcelConfigMgr::getPhaseByWatcher;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = watcher_id;
  p_watcher_phase_map = &this->watcher_phase_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, watcher_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_watcher_phase_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->watcher_phase_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
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

// Line 449: range 0000000012AB4AF6-0000000012AB4B9F
uint32_t __cdecl ActivityAsterExcelConfigMgr::randomAsterMidRefreshId(const ActivityAsterExcelConfigMgr *const this)
{
  int v2; // eax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v3; // rax
  uint32_t *v4; // rdx
  unsigned int select_index; // [rsp+18h] [rbp-8h]

  if ( std::vector<unsigned int>::empty(&this->aster_mid_refresh_id_vec_) )
    return 0;
  v2 = std::vector<unsigned int>::size(&this->aster_mid_refresh_id_vec_);
  select_index = common::tools::RandomUtils::rand<unsigned int>(0, v2 - 1);
  v3 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                             &this->aster_mid_refresh_id_vec_,
                                                                                             select_index);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  return *v4;
};

// Line 465: range 0000000012AB4BA0-0000000012AB4D9B
__int64 __fastcall ActivityAsterExcelConfigMgr::getAsterMidCampIdByGroupId(
        const ActivityAsterExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_aster_mid_group_camp_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:464 64 8 8 iter:466 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityAsterExcelConfigMgr::getAsterMidCampIdByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_aster_mid_group_camp_map = &this->aster_mid_group_camp_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_aster_mid_group_camp_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->aster_mid_group_camp_map_;
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

// Line 475: range 0000000012AB4D9C-0000000012AB4F5D
const data::AsterActivityPerviewExcelConfig *__fastcall ActivityAsterExcelConfigMgr::findAsterPreviewConfig(
        const ActivityAsterExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::AsterActivityPerviewExcelConfig> *p_activity_aster_preview_map; // rdx
  std::map<unsigned int,data::AsterActivityPerviewExcelConfig> *v6; // rdx
  bool v7; // al
  const data::AsterActivityPerviewExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:474 64 8 8 iter:476 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityAsterExcelConfigMgr::findAsterPreviewConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_activity_aster_preview_map = &this->activity_aster_preview_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,data::AsterActivityPerviewExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::AsterActivityPerviewExcelConfig>::find(
                                                                                                 p_activity_aster_preview_map,
                                                                                                 (const std::map<unsigned int,data::AsterActivityPerviewExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_aster_preview_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::AsterActivityPerviewExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::AsterActivityPerviewExcelConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::AsterActivityPerviewExcelConfig> > *const)(v2 + 64))->second;
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

// Line 486: range 0000000012AB4F5E-0000000012AB5281
__int64 __fastcall ActivityAsterExcelConfigMgr::getAsterPhaseOpenDay(
        const ActivityAsterExcelConfigMgr *const this,
        __int64 activity_id,
        uint32_t phase)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::map<unsigned int,data::AsterStageExcelConfig>> *p_activity_aster_phase_map; // rdx
  std::map<unsigned int,std::map<unsigned int,data::AsterStageExcelConfig>> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  bool v10; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::AsterStageExcelConfig> >::pointer v11; // rax
  std::map<unsigned int,data::AsterStageExcelConfig> *aster_phase_map; // [rsp+18h] [rbp-E8h]
  char v14[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 15 activity_id:485 48 4 9 phase:485 64 8 8 iter:487 96 8 9 <unknown> 128 8 14 phase_iter:"
                        "494 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityAsterExcelConfigMgr::getAsterPhaseOpenDay;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = activity_id;
  *(_DWORD *)(v3 + 48) = phase;
  p_activity_aster_phase_map = &this->activity_aster_phase_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, activity_id);
  *(std::map<unsigned int,std::map<unsigned int,data::AsterStageExcelConfig>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,data::AsterStageExcelConfig>>::find(p_activity_aster_phase_map, (const std::map<unsigned int,std::map<unsigned int,data::AsterStageExcelConfig>>::key_type *)(v3 + 32));
  v7 = &this->activity_aster_phase_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::map<unsigned int,data::AsterStageExcelConfig>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,data::AsterStageExcelConfig>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::AsterStageExcelConfig> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::AsterStageExcelConfig> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    aster_phase_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::AsterStageExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::AsterStageExcelConfig> > > *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,data::AsterStageExcelConfig>::const_iterator *)(v3 + 128) = std::map<unsigned int,data::AsterStageExcelConfig>::find(
                                                                                          aster_phase_map,
                                                                                          (const std::map<unsigned int,data::AsterStageExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,data::AsterStageExcelConfig>::const_iterator *)(v3 + 160) = std::map<unsigned int,data::AsterStageExcelConfig>::end(aster_phase_map);
    v10 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::AsterStageExcelConfig> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::AsterStageExcelConfig> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      result = 0LL;
    }
    else
    {
      v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::AsterStageExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::AsterStageExcelConfig> > *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v11->second.openday >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v11->second.openday >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v11->second.openday);
      }
      result = v11->second.openday;
    }
  }
  if ( v14 == (char *)v3 )
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

// Line 504: range 0000000012AB5282-0000000012AB59E3
__int64 __fastcall ActivityAsterExcelConfigMgr::isGroupIdValid(
        const ActivityAsterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t group_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  int SceneIdByGroupId; // edx
  char v8; // al
  uint32_t DefaultWorldMainSceneId; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  __int64 v17; // rsi
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  LuaConfigMgr *lua_config_mgr; // [rsp+28h] [rbp-178h]
  const SceneScriptConfig *scene_config_ptr; // [rsp+30h] [rbp-170h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+38h] [rbp-168h]
  char v29[352]; // [rsp+40h] [rbp-160h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 12 scene_id:506 48 4 12 group_id:503 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unkno"
                        "wn> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityAsterExcelConfigMgr::isGroupIdValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 48) = group_id;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  v6 = *(unsigned int *)(v3 + 48);
  SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, v6);
  v8 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(v3 + 32, v6);
  }
  *(_DWORD *)(v3 + 32) = SceneIdByGroupId;
  DefaultWorldMainSceneId = TxtConfigMgr::getDefaultWorldMainSceneId(txt_config_mgr);
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v3 + 32);
  if ( DefaultWorldMainSceneId == *(_DWORD *)(v3 + 32) )
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 32);
    scene_config_ptr = LuaConfigMgr::findSceneScriptConfig(lua_config_mgr, *(unsigned int *)(v3 + 32));
    if ( scene_config_ptr )
    {
      v17 = *(unsigned int *)(v3 + 48);
      group_info_config_ptr = SceneScriptConfig::findGroupInfoConfig(scene_config_ptr, v17);
      if ( group_info_config_ptr )
      {
        if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&group_info_config_ptr->is_dynamic_load, v17, &group_info_config_ptr->is_dynamic_load);
        if ( !group_info_config_ptr->is_dynamic_load )
        {
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
            "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
            "isGroupIdValid",
            527);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v21,
                  (const char (*)[19])"[ASTER] group_id: ");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v23, (const char (*)[33])byte_1AA1C340);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
          result = 0LL;
        }
        else
        {
          result = 1LL;
        }
      }
      else
      {
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
          "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
          "isGroupIdValid",
          522);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v18,
                (const char (*)[19])"[ASTER] group_id: ");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])byte_1AA1C2C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        result = 0LL;
      }
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
        "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
        "isGroupIdValid",
        515);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v14,
              (const char (*)[19])"[ASTER] scene_id: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])byte_1AA1C2C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      result = 0LL;
    }
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
      "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
      "isGroupIdValid",
      509);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 64),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v10, (const char (*)[19])"[ASTER] scene_id: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1AA1C2C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = 0LL;
  }
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
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

// Line 535: range 0000000012AB59E4-0000000012AB5D6D
__int64 __fastcall ActivityAsterExcelConfigMgr::isWatcherValid(
        const ActivityAsterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t watcher_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  char v12[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 watcher_id:534 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityAsterExcelConfigMgr::isWatcherValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = watcher_id;
  if ( data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
         &txt_config_mgr->new_activity_config_mgr,
         *(unsigned int *)(v3 + 48)) )
  {
    if ( WatcherExcelConfigMgr::findWatcherConfig(&txt_config_mgr->watcher_config_mgr, *(_DWORD *)(v3 + 48)) )
    {
      result = 1LL;
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
        "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
        "isWatcherValid",
        544);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v9, (const char (*)[30])byte_1AA1C420);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      result = 0LL;
    }
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
      "./src/txt_data_manual/ActivityAsterExcelConfig.cpp",
      "isWatcherValid",
      538);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v6, (const char (*)[30])byte_1AA1C420);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = 0LL;
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
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
