// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp

// Line 20: range 0000000012C29C5C-0000000012C2A34C
int32_t __cdecl ActivityFungusFighterExcelConfigMgr::rewriteConfig(
        ActivityFungusFighterExcelConfigMgr *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityFungusFighterExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  if ( ActivityFungusFighterExcelConfigMgr::rewriteFungusExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
      "rewriteConfig",
      24);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v5,
      (const char (*)[41])"rewriteFungusCultivateExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityFungusFighterExcelConfigMgr::rewriteFungusBaseExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
      "rewriteConfig",
      30);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v7,
      (const char (*)[36])"rewriteFungusBaseExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityFungusFighterExcelConfigMgr::rewriteFungusCultivateExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
      "rewriteConfig",
      36);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v8,
      (const char (*)[41])"rewriteFungusCultivateExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityFungusFighterExcelConfigMgr::rewriteFungusPlotDungeonExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
      "rewriteConfig",
      42);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      v9,
      (const char (*)[43])"rewriteFungusPlotDungeonExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( ActivityFungusFighterExcelConfigMgr::rewriteFungusTraningDungeonExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
      "rewriteConfig",
      48);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      v10,
      (const char (*)[46])"rewriteFungusTraningDungeonExcelConfig failed");
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

// Line 55: range 0000000012C2A34E-0000000012C2ACB6
int32_t __cdecl ActivityFungusFighterExcelConfigMgr::checkConfig(
        ActivityFungusFighterExcelConfigMgr *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityFungusFighterExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  if ( ActivityFungusFighterExcelConfigMgr::checkFungusConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
      "checkConfig",
      59);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v5, (const char (*)[25])"checkFungusConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityFungusFighterExcelConfigMgr::checkFungusCampConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
      "checkConfig",
      65);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v7,
      (const char (*)[29])"checkFungusCampConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityFungusFighterExcelConfigMgr::checkFungusNameConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
      "checkConfig",
      71);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v8,
      (const char (*)[29])"checkFungusNameConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityFungusFighterExcelConfigMgr::checkFungusCultivateConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
      "checkConfig",
      77);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v9,
      (const char (*)[34])"checkFungusCultivateConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( ActivityFungusFighterExcelConfigMgr::checkFungusPlotDungeonExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
      "checkConfig",
      83);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v10,
      (const char (*)[41])"checkFungusPlotDungeonExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( ActivityFungusFighterExcelConfigMgr::checkFungusBaseExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
      "checkConfig",
      89);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v11,
      (const char (*)[34])"checkFungusBaseExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else if ( ActivityFungusFighterExcelConfigMgr::checkFungusTrainingDungeonExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
      "checkConfig",
      95);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      v12,
      (const char (*)[45])"checkFungusTrainingDungeonExcelConfig failed");
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

// Line 102: range 0000000012C2ACB8-0000000012C2B047
int32_t __cdecl ActivityFungusFighterExcelConfigMgr::checkFungusConfig(
        ActivityFungusFighterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::FungusExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::reference v10; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::FungusExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  char v12[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:104 64 8 13 __for_end:104 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::checkFungusConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->fungus_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::FungusExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FungusExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FungusExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusExcelConfig>,false> *)(v2 + 64)) )
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::FungusExcelConfig>(v10);
    std::get<1ul,unsigned int const,data::FungusExcelConfig>(v10);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( !ActivityFungusFighterExcelConfigMgr::findFungusCultivateExcelConfigByFungusId(this, *id) )
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
        "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
        "checkFungusConfig",
        108);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v5, (const char (*)[35])byte_1AA58800);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v12 == (char *)v2 )
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

// Line 116: range 0000000012C2B048-0000000012C2B405
int32_t __cdecl ActivityFungusFighterExcelConfigMgr::checkFungusCampConfig(
        ActivityFungusFighterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  ActivityFungusFighterExcelConfigMgr *v5; // rcx
  uint32_t *p_camp_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::FungusExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::reference v14; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::FungusExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FungusExcelConfig> >::type *fungus_config; // [rsp+38h] [rbp-C8h]
  char v17[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:118 64 8 13 __for_end:118 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::checkFungusCampConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->fungus_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::FungusExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FungusExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FungusExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusExcelConfig>,false> *)(v2 + 64)) )
  {
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::FungusExcelConfig>(v14);
    fungus_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FungusExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FungusExcelConfig>(v14);
    v5 = this;
    p_camp_id = &fungus_config->camp_id;
    if ( *(_BYTE *)(((unsigned __int64)p_camp_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_camp_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_camp_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_camp_id);
    }
    if ( !data::ActivityFungusFighterExcelConfigMgrBase::findFungusCampExcelConfig(v5, fungus_config->camp_id) )
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
        "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
        "checkFungusCampConfig",
        122);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v7, (const char (*)[25])byte_1AA58900);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &fungus_config->camp_id);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])byte_1AA58940);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v17 == (char *)v2 )
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

// Line 130: range 0000000012C2B406-0000000012C2B911
int32_t __cdecl ActivityFungusFighterExcelConfigMgr::checkFungusNameConfig(
        ActivityFungusFighterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  ActivityFungusFighterExcelConfigMgr *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  data::FungusExcelConfigMap *__for_range; // [rsp+20h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::reference v15; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,data::FungusExcelConfig> >::type *id; // [rsp+30h] [rbp-120h]
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-110h]
  const unsigned int *name_id; // [rsp+48h] [rbp-108h]
  char v19[256]; // [rsp+50h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:132 64 8 13 __for_end:132 96 8 15 __for_begin:134 128 8 13 __for_end:134 1"
                        "60 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::checkFungusNameConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->fungus_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::FungusExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FungusExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FungusExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusExcelConfig>,false> *)(v2 + 64)) )
      break;
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::FungusExcelConfig>(v15);
    __for_range_0 = &std::get<1ul,unsigned int const,data::FungusExcelConfig>(v15)->name_id_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 96) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128)) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
      name_id = v6;
      v7 = this;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      if ( !data::ActivityFungusFighterExcelConfigMgrBase::findFungusNameExcelConfig(v7, *name_id) )
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
          "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
          "checkFungusNameConfig",
          138);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v8, (const char (*)[25])byte_1AA58A40);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, name_id);
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])byte_1AA58940);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v19 == (char *)v2 )
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

// Line 147: range 0000000012C2B912-0000000012C2BCA1
int32_t __cdecl ActivityFungusFighterExcelConfigMgr::checkFungusCultivateConfig(
        ActivityFungusFighterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::FungusExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::reference v10; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::FungusExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  char v12[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:149 64 8 13 __for_end:149 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::checkFungusCultivateConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->fungus_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::FungusExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FungusExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FungusExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusExcelConfig>,false> *)(v2 + 64)) )
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::FungusExcelConfig>(v10);
    std::get<1ul,unsigned int const,data::FungusExcelConfig>(v10);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( !ActivityFungusFighterExcelConfigMgr::findFungusCultivateExcelConfigByFungusId(this, *id) )
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
        "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
        "checkFungusCultivateConfig",
        153);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v5, (const char (*)[33])byte_1AA58B20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v12 == (char *)v2 )
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

// Line 161: range 0000000012C2BCA2-0000000012C2CBEA
int32_t __cdecl ActivityFungusFighterExcelConfigMgr::checkFungusPlotDungeonExcelConfig(
        ActivityFungusFighterExcelConfigMgr *const this,
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
  const data::DungeonExcelConfigMgrBase *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  std::tuple_element<0,std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig> >::type *v20; // rsi
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  char *v25; // rsi
  unsigned int *v26; // rax
  int *v27; // rdx
  int v28; // ecx
  char v29; // al
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::vector<unsigned int>::size_type v42; // rax
  int32_t ret; // [rsp+1Ch] [rbp-2D4h]
  DungeonExcelConfigMgr *dungeon_config_mgr; // [rsp+20h] [rbp-2D0h]
  data::FungusPlotDungeonExcelConfigMap *__for_range; // [rsp+28h] [rbp-2C8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>,false,false>::reference v47; // [rsp+30h] [rbp-2C0h]
  std::tuple_element<0,std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig> >::type *plot_stage_id; // [rsp+38h] [rbp-2B8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig> >::type *excel_config; // [rsp+40h] [rbp-2B0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-2A8h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+50h] [rbp-2A0h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+58h] [rbp-298h]
  char v53[656]; // [rsp+60h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 32 4 13 fungus_id:166 48 4 13 fungus_id:186 64 8 15 __for_begin:164 96 8 13 __for_end:164 128"
                        " 8 15 __for_begin:166 160 8 13 __for_end:166 192 8 15 __for_begin:186 224 8 13 __for_end:186 256"
                        " 8 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::checkFungusPlotDungeonExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
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
  v4[536862738] = -202116109;
  ret = 0;
  dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
  __for_range = &this->fungus_plot_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusPlotDungeonExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FungusPlotDungeonExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusPlotDungeonExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FungusPlotDungeonExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>,false> *)(v2 + 96)) )
      break;
    v47 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>,false,false> *const)(v2 + 64));
    plot_stage_id = std::get<0ul,unsigned int const,data::FungusPlotDungeonExcelConfig>(v47);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FungusPlotDungeonExcelConfig>(v47);
    __for_range_0 = &excel_config->valid_fungus_id_list;
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
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
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
      if ( !data::ActivityFungusFighterExcelConfigMgrBase::findFungusExcelConfig(this, *(unsigned int *)(v2 + 32)) )
      {
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
          "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
          "checkFungusPlotDungeonExcelConfig",
          170);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v11, (const char (*)[53])byte_1AA58D20);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 32));
        v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v13, (const char (*)[18])byte_1AA58D80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, plot_stage_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    v15 = dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->dungeon_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->dungeon_id);
    }
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(v15, excel_config->dungeon_id);
    if ( dungeon_config_ptr )
    {
      v20 = (std::tuple_element<0,std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig> >::type *)((((_BYTE)dungeon_config_ptr + 12) & 7u) + 3);
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->type);
      }
      if ( dungeon_config_ptr->type != DUNGEON_FUNGUS_FIGHTER_PLOT )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
          "checkFungusPlotDungeonExcelConfig",
          183);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v21, (const char (*)[78])byte_1AA58E40);
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &excel_config->dungeon_id);
        v24 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v23, (const char (*)[18])byte_1AA58D80);
        v20 = plot_stage_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, plot_stage_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __for_range_1 = &excel_config->locked_fungus_id_list;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, v20);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 224, v20);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 224) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v25 = (char *)(v2 + 224);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 224)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v26 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
        v27 = (int *)v26;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v26);
        }
        v28 = *v27;
        v29 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v29 != 0 && v29 <= 3 )
        {
          LOBYTE(v25) = v29 != 0;
          __asan_report_store4(v2 + 48, v25);
        }
        *(_DWORD *)(v2 + 48) = v28;
        if ( !common::tools::MiscUtils::isContains<unsigned int>(
                &excel_config->valid_fungus_id_list,
                (const unsigned int *)(v2 + 48)) )
        {
          *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 480, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 480),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
            "checkFungusPlotDungeonExcelConfig",
            190);
          v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 480),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v31 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(v30, (const char (*)[77])byte_1AA58EC0);
          v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &excel_config->dungeon_id);
          v33 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v32, (const char (*)[18])byte_1AA58D80);
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, plot_stage_id);
          v35 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v34,
                  (const char (*)[14])", fungus_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
          *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( std::vector<unsigned int>::size(&excel_config->locked_fungus_id_list) > 4 )
      {
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
          "checkFungusPlotDungeonExcelConfig",
          197);
        v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v37 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(v36, (const char (*)[81])byte_1AA58F80);
        v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &excel_config->dungeon_id);
        v39 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v38, (const char (*)[18])byte_1AA58D80);
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, plot_stage_id);
        v41 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])byte_1AA59000);
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        v42 = std::vector<unsigned int>::size(&excel_config->locked_fungus_id_list);
        if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
          v42 = __asan_report_store8(v2 + 256, byte_1AA59000);
        *(_QWORD *)(v2 + 256) = v42;
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v41,
          (const unsigned __int64 *)(v2 + 256));
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
        "checkFungusPlotDungeonExcelConfig",
        177);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(v16, (const char (*)[72])byte_1AA58DC0);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &excel_config->dungeon_id);
      v19 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v18, (const char (*)[18])byte_1AA58D80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, plot_stage_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>,false,false> *const)(v2 + 64));
  }
  if ( v53 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return ret;
};

// Line 206: range 0000000012C2CBEC-0000000012C2D67F
int32_t __cdecl ActivityFungusFighterExcelConfigMgr::checkFungusBaseExcelConfig(
        ActivityFungusFighterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  uint32_t skill_limit; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-1ECh]
  data::FungusBaseExcelConfigMap *__for_range; // [rsp+20h] [rbp-1E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusBaseExcelConfig>,false,false>::reference v22; // [rsp+28h] [rbp-1D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::FungusBaseExcelConfig> >::type *activity_id; // [rsp+30h] [rbp-1D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FungusBaseExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-1C8h]
  char v25[448]; // [rsp+40h] [rbp-1C0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 15 __for_begin:209 64 8 13 __for_end:209 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::checkFungusBaseExcelConfig;
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
  __for_range = &this->fungus_base_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusBaseExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::FungusBaseExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusBaseExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FungusBaseExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FungusBaseExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusBaseExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusBaseExcelConfig>,false> *)(v2 + 64)) )
  {
    v22 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusBaseExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusBaseExcelConfig>,false,false> *const)(v2 + 32));
    activity_id = std::get<0ul,unsigned int const,data::FungusBaseExcelConfig>(v22);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FungusBaseExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FungusBaseExcelConfig>(v22);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(activity_id);
    }
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(p_new_activity_config_mgr, *activity_id) )
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
        "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
        "checkFungusBaseExcelConfig",
        213);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v6, (const char (*)[57])byte_1AA59120);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->skill_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->skill_limit >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->skill_limit);
    }
    if ( !excel_config->skill_limit )
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
        "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
        "checkFungusBaseExcelConfig",
        218);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(v8, (const char (*)[65])byte_1AA59180);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->skill_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->skill_limit >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->skill_limit);
    }
    skill_limit = excel_config->skill_limit;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->initial_skill_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->initial_skill_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->initial_skill_count);
    }
    if ( skill_limit < excel_config->initial_skill_count )
    {
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
        "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
        "checkFungusBaseExcelConfig",
        223);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(v11, (const char (*)[80])byte_1AA59200);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &excel_config->skill_limit);
      v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])byte_1AA59280);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &excel_config->initial_skill_count);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->fungus_fighter_team_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->fungus_fighter_team_num >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->fungus_fighter_team_num);
    }
    if ( !excel_config->fungus_fighter_team_num )
    {
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
        "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
        "checkFungusBaseExcelConfig",
        229);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(v15, (const char (*)[65])byte_1AA592C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( (unsigned __int8)std::string::empty() )
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
        "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
        "checkFungusBaseExcelConfig",
        234);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v17, (const char (*)[55])byte_1AA59340);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusBaseExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusBaseExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v25 == (char *)v2 )
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

// Line 242: range 0000000012C2D680-0000000012C2F49E
int32_t __cdecl ActivityFungusFighterExcelConfigMgr::checkFungusTrainingDungeonExcelConfig(
        ActivityFungusFighterExcelConfigMgr *const this,
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
  const data::DungeonExcelConfigMgrBase *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  const data::GalleryExcelConfigMgrBase *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  char *fungus_group_id; // rsi
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r15
  std::vector<unsigned int>::size_type v32; // rax
  char *v33; // rsi
  unsigned int *v34; // rax
  int *v35; // rdx
  int v36; // ecx
  char v37; // al
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  __int64 transfer_point_config_id; // rsi
  char v43; // al
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  int32_t ret; // [rsp+14h] [rbp-55Ch]
  DungeonExcelConfigMgr *dungeon_config_mgr; // [rsp+18h] [rbp-558h]
  GalleryExcelConfigMgr *gallery_config_mgr; // [rsp+20h] [rbp-550h]
  LuaConfigMgr *lua_config_mgr; // [rsp+28h] [rbp-548h]
  data::FungusTrainingDungeonExcelConfigMap *__for_range; // [rsp+30h] [rbp-540h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig>,false,false>::reference v64; // [rsp+38h] [rbp-538h]
  std::tuple_element<0,std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig> >::type *dungeon_id; // [rsp+40h] [rbp-530h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig> >::type *excel_config; // [rsp+48h] [rbp-528h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-520h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+58h] [rbp-518h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+60h] [rbp-510h]
  const GroupScriptConfig *group_config_ptr; // [rsp+68h] [rbp-508h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+70h] [rbp-500h]
  data::FungusExcelConfigMap *__for_range_2; // [rsp+78h] [rbp-4F8h]
  const GroupScriptConfig *gallery_group_config_ptr; // [rsp+80h] [rbp-4F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::reference v74; // [rsp+88h] [rbp-4E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FungusExcelConfig> >::type *fungus_config; // [rsp+98h] [rbp-4D8h]
  char v76[1232]; // [rsp+A0h] [rbp-4D0h] BYREF

  v2 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1184LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "24 32 4 13 fungus_id:249 48 4 13 config_id:302 64 8 15 __for_begin:247 96 8 13 __for_end:247 128"
                        " 8 15 __for_begin:249 160 8 13 __for_end:249 192 8 9 <unknown> 224 8 15 __for_begin:302 256 8 13"
                        " __for_end:302 288 8 15 __for_begin:322 320 8 13 __for_end:322 352 32 9 <unknown> 416 32 9 <unkn"
                        "own> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unkno"
                        "wn> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unkno"
                        "wn> 1120 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::checkFungusTrainingDungeonExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -218959118;
  v4[536862754] = -218959118;
  v4[536862756] = -202116109;
  ret = 0;
  dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
  gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->fungus_training_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusTrainingDungeonExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FungusTrainingDungeonExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusTrainingDungeonExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FungusTrainingDungeonExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig>,false> *)(v2 + 96)) )
      break;
    v64 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig>,false,false> *const)(v2 + 64));
    dungeon_id = std::get<0ul,unsigned int const,data::FungusTrainingDungeonExcelConfig>(v64);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FungusTrainingDungeonExcelConfig>(v64);
    __for_range_0 = &excel_config->valid_fungus_id_list;
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
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
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
      if ( !data::ActivityFungusFighterExcelConfigMgrBase::findFungusExcelConfig(this, *(unsigned int *)(v2 + 32)) )
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
          "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
          "checkFungusTrainingDungeonExcelConfig",
          253);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v11, (const char (*)[53])byte_1AA59600);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    v13 = dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dungeon_id);
    }
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(v13, *dungeon_id);
    if ( dungeon_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->type);
      }
      if ( dungeon_config_ptr->type != DUNGEON_FUNGUS_FIGHTER_TRAINING )
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
          "checkFungusTrainingDungeonExcelConfig",
          266);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v16, (const char (*)[78])byte_1AA596E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, dungeon_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->round_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->round_count >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&excel_config->round_count);
      }
      if ( !excel_config->round_count )
      {
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
          "checkFungusTrainingDungeonExcelConfig",
          271);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(v18, (const char (*)[66])byte_1AA59760);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, dungeon_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      v20 = gallery_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->gallery_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&excel_config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&excel_config->gallery_id);
      }
      gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(v20, excel_config->gallery_id);
      if ( gallery_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gallery_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&gallery_config_ptr->type);
        }
        if ( gallery_config_ptr->type != GALLERY_TYPE_FUNGUS_FIGHTING_TRAINING )
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
            "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
            "checkFungusTrainingDungeonExcelConfig",
            283);
          v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 672),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v24 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(v23, (const char (*)[82])byte_1AA59860);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &excel_config->gallery_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        if ( *(_BYTE *)(((unsigned __int64)&excel_config->fungus_group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)excel_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->fungus_group_id >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&excel_config->fungus_group_id);
        }
        fungus_group_id = (char *)excel_config->fungus_group_id;
        group_config_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, (uint32_t)fungus_group_id);
        if ( group_config_ptr )
        {
          if ( std::vector<unsigned int>::size(&excel_config->point_config_id_list) <= 3 )
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
              "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
              "checkFungusTrainingDungeonExcelConfig",
              297);
            v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 800),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v29 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
                    v28,
                    (const char (*)[75])byte_1AA59960);
            v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, dungeon_id);
            v31 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v30,
                    (const char (*)[22])byte_1AA599E0);
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
            v32 = std::vector<unsigned int>::size(&excel_config->point_config_id_list);
            if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
              v32 = __asan_report_store8(v2 + 192, byte_1AA599E0);
            *(_QWORD *)(v2 + 192) = v32;
            fungus_group_id = (char *)(v2 + 192);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v31,
              (const unsigned __int64 *)(v2 + 192));
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          __for_range_1 = &excel_config->point_config_id_list;
          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 224, fungus_group_id);
          *(std::vector<unsigned int>::const_iterator *)(v2 + 224) = std::vector<unsigned int>::begin(__for_range_1);
          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 256, fungus_group_id);
          *(std::vector<unsigned int>::const_iterator *)(v2 + 256) = std::vector<unsigned int>::end(__for_range_1);
          while ( 1 )
          {
            v33 = (char *)(v2 + 256);
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 224),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 256)) )
              break;
            *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
            v34 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 224));
            v35 = (int *)v34;
            if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v34);
            }
            v36 = *v35;
            v37 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
            if ( v37 != 0 && v37 <= 3 )
            {
              LOBYTE(v33) = v37 != 0;
              __asan_report_store4(v2 + 48, v33);
            }
            *(_DWORD *)(v2 + 48) = v36;
            if ( !GroupScriptConfig::findPointConfig(group_config_ptr, *(unsigned int *)(v2 + 48)) )
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
                "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
                "checkFungusTrainingDungeonExcelConfig",
                306);
              v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 864),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v39 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                      v38,
                      (const char (*)[77])byte_1AA59A20);
              v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v39,
                      &excel_config->fungus_group_id);
              v41 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v40,
                      (const char (*)[13])", config_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v41,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
              *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 224));
          }
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
          if ( *(_BYTE *)(((unsigned __int64)&excel_config->transfer_point_config_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&excel_config->transfer_point_config_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&excel_config->transfer_point_config_id);
          }
          transfer_point_config_id = excel_config->transfer_point_config_id;
          if ( GroupScriptConfig::findPointConfig(group_config_ptr, transfer_point_config_id) )
            goto LABEL_89;
          if ( *(_BYTE *)(((unsigned __int64)&excel_config->training_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&excel_config->training_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&excel_config->training_type);
          }
          if ( excel_config->training_type != FUNGUS_TRAINING_DUNGEON_ATTACK )
LABEL_89:
            v43 = 0;
          else
            v43 = 1;
          if ( v43 )
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
              "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
              "checkFungusTrainingDungeonExcelConfig",
              316);
            v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 928),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v45 = common::milog::MiLogStream::operator<<<char [89],(char *[89])0>(
                    v44,
                    (const char (*)[89])byte_1AA59AE0);
            v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v45,
                    &excel_config->fungus_group_id);
            v47 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v46,
                    (const char (*)[13])", config_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v47,
              &excel_config->transfer_point_config_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            __for_range_2 = &this->fungus_excel_config_map;
            *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 288, transfer_point_config_id);
            *(std::unordered_map<unsigned int,data::FungusExcelConfig>::iterator *)(v2 + 288) = std::unordered_map<unsigned int,data::FungusExcelConfig>::begin(__for_range_2);
            *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 320, transfer_point_config_id);
            *(std::unordered_map<unsigned int,data::FungusExcelConfig>::iterator *)(v2 + 320) = std::unordered_map<unsigned int,data::FungusExcelConfig>::end(__for_range_2);
            while ( std::__detail::operator!=<std::pair<unsigned int const,data::FungusExcelConfig>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusExcelConfig>,false> *)(v2 + 288),
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusExcelConfig>,false> *)(v2 + 320)) )
            {
              v74 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false> *const)(v2 + 288));
              std::get<0ul,unsigned int const,data::FungusExcelConfig>(v74);
              fungus_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FungusExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FungusExcelConfig>(v74);
              if ( *(_BYTE *)(((unsigned __int64)&fungus_config->config_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&fungus_config->config_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&fungus_config->config_id);
              }
              if ( !GroupScriptConfig::findMonsterConfig(group_config_ptr, fungus_config->config_id) )
              {
                *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 992, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 992),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
                  "checkFungusTrainingDungeonExcelConfig",
                  326);
                v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 992),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v49 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                        v48,
                        (const char (*)[72])byte_1AA59B60);
                v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v49,
                        &excel_config->fungus_group_id);
                v51 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v50,
                        (const char (*)[13])", config_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &fungus_config->config_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
                *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
              std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false> *const)(v2 + 288));
            }
            *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
            if ( *(_BYTE *)(((unsigned __int64)&excel_config->training_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&excel_config->training_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&excel_config->training_type);
            }
            if ( excel_config->training_type == FUNGUS_TRAINING_DUNGEON_DEFEND )
            {
              if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&gallery_config_ptr->control_group_id);
              }
              gallery_group_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                           lua_config_mgr,
                                           gallery_config_ptr->control_group_id);
              if ( gallery_group_config_ptr )
              {
                if ( *(_BYTE *)(((unsigned __int64)&excel_config->defend_config_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)excel_config + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->defend_config_id >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(&excel_config->defend_config_id);
                }
                if ( !GroupScriptConfig::findGadgetConfig(gallery_group_config_ptr, excel_config->defend_config_id) )
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
                    "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
                    "checkFungusTrainingDungeonExcelConfig",
                    344);
                  v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1120),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v55 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
                          v54,
                          (const char (*)[83])byte_1AA59C60);
                  v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v55,
                          &gallery_config_ptr->control_group_id);
                  v57 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                          v56,
                          (const char (*)[13])", config_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v57,
                    &excel_config->defend_config_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
                  *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
              }
              else
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
                  "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
                  "checkFungusTrainingDungeonExcelConfig",
                  338);
                v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1056),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v53 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                        v52,
                        (const char (*)[71])byte_1AA59BE0);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v53,
                  &gallery_config_ptr->control_group_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
                *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 736, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 736),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
            "checkFungusTrainingDungeonExcelConfig",
            290);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 736),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v27 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(v26, (const char (*)[65])byte_1AA598E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &excel_config->fungus_group_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
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
          "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
          "checkFungusTrainingDungeonExcelConfig",
          277);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(v21, (const char (*)[66])byte_1AA597E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &excel_config->gallery_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
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
        "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
        "checkFungusTrainingDungeonExcelConfig",
        260);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(v14, (const char (*)[72])byte_1AA59660);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig>,false,false> *const)(v2 + 64));
  }
  if ( v76 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF808C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 148) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1184LL, v76);
  }
  return ret;
};

// Line 355: range 0000000012C2F4A0-0000000012C2F661
const data::FungusExcelConfig *__fastcall ActivityFungusFighterExcelConfigMgr::findFungusExcelConfigByCaptureMonsterId(
        const ActivityFungusFighterExcelConfigMgr *const this,
        __int64 capture_monster_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::FungusExcelConfig> *p_capture_monster_id_2_fungus_config_map; // rdx
  std::unordered_map<unsigned int,data::FungusExcelConfig> *v6; // rdx
  bool v7; // al
  const data::FungusExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 22 capture_monster_id:354 64 8 8 iter:356 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::findFungusExcelConfigByCaptureMonsterId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = capture_monster_id;
  p_capture_monster_id_2_fungus_config_map = &this->capture_monster_id_2_fungus_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, capture_monster_id);
  *(std::unordered_map<unsigned int,data::FungusExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FungusExcelConfig>::find(
                                                                                             p_capture_monster_id_2_fungus_config_map,
                                                                                             (const std::unordered_map<unsigned int,data::FungusExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->capture_monster_id_2_fungus_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::FungusExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FungusExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::FungusExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 365: range 0000000012C2F662-0000000012C2F823
const data::FungusCultivateExcelConfig *__fastcall ActivityFungusFighterExcelConfigMgr::findFungusCultivateExcelConfigByFungusId(
        const ActivityFungusFighterExcelConfigMgr *const this,
        __int64 fungus_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::FungusCultivateExcelConfig> *p_fungus_id_2_cultivate_config_map; // rdx
  std::unordered_map<unsigned int,data::FungusCultivateExcelConfig> *v6; // rdx
  bool v7; // al
  const data::FungusCultivateExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 fungus_id:364 64 8 8 iter:366 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::findFungusCultivateExcelConfigByFungusId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = fungus_id;
  p_fungus_id_2_cultivate_config_map = &this->fungus_id_2_cultivate_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, fungus_id);
  *(std::unordered_map<unsigned int,data::FungusCultivateExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FungusCultivateExcelConfig>::find(p_fungus_id_2_cultivate_config_map, (const std::unordered_map<unsigned int,data::FungusCultivateExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->fungus_id_2_cultivate_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::FungusCultivateExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FungusCultivateExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::FungusCultivateExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusCultivateExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusCultivateExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FungusCultivateExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FungusCultivateExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 375: range 0000000012C2F824-0000000012C2F9E5
const data::FungusPlotDungeonExcelConfig *__fastcall ActivityFungusFighterExcelConfigMgr::findFungusPlotDungeonExcelConfigByDungeonId(
        const ActivityFungusFighterExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::FungusPlotDungeonExcelConfig> *p_plot_dungeon_id_2_plot_config_map; // rdx
  std::map<unsigned int,data::FungusPlotDungeonExcelConfig> *v6; // rdx
  bool v7; // al
  const data::FungusPlotDungeonExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:374 64 8 8 iter:376 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::findFungusPlotDungeonExcelConfigByDungeonId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_plot_dungeon_id_2_plot_config_map = &this->plot_dungeon_id_2_plot_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::map<unsigned int,data::FungusPlotDungeonExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::FungusPlotDungeonExcelConfig>::find(
                                                                                              p_plot_dungeon_id_2_plot_config_map,
                                                                                              (const std::map<unsigned int,data::FungusPlotDungeonExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->plot_dungeon_id_2_plot_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::FungusPlotDungeonExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::FungusPlotDungeonExcelConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig> > *const)(v2 + 64))->second;
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

// Line 385: range 0000000012C2F9E6-0000000012C2FBA7
const std::vector<unsigned int> *__fastcall ActivityFungusFighterExcelConfigMgr::findFungusTrainingDungeonIdVecByStageId(
        const ActivityFungusFighterExcelConfigMgr *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::vector<unsigned int>> *p_training_stage_2_dungeon_id_vec_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 stage_id:384 64 8 8 iter:386 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::findFungusTrainingDungeonIdVecByStageId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_training_stage_2_dungeon_id_vec_map = &this->training_stage_2_dungeon_id_vec_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                                     p_training_stage_2_dungeon_id_vec_map,
                                                                                     (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->training_stage_2_dungeon_id_vec_map_;
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

// Line 395: range 0000000012C2FBA8-0000000012C2FDC5
const std::set<unsigned int> *__fastcall ActivityFungusFighterExcelConfigMgr::findFungusIdSetByCampId(
        const ActivityFungusFighterExcelConfigMgr *const this,
        const std::set<unsigned int> *camp_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::set<unsigned int>> *p_camp_id_2_fungus_id_set_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 11 camp_id:394 64 8 8 iter:397 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::findFungusIdSetByCampId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)camp_id;
  if ( !(_BYTE)`guard variable for'ActivityFungusFighterExcelConfigMgr::findFungusIdSetByCampId(unsigned int)::empty_set
    && __cxa_guard_acquire(&`guard variable for'ActivityFungusFighterExcelConfigMgr::findFungusIdSetByCampId(unsigned int)::empty_set) )
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)&ActivityFungusFighterExcelConfigMgr::findFungusIdSetByCampId(unsigned int)const::empty_set);
    __cxa_guard_release(&`guard variable for'ActivityFungusFighterExcelConfigMgr::findFungusIdSetByCampId(unsigned int)::empty_set);
    camp_id = &ActivityFungusFighterExcelConfigMgr::findFungusIdSetByCampId(unsigned int)const::empty_set;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::set<unsigned int>::~set,
      (void *)&ActivityFungusFighterExcelConfigMgr::findFungusIdSetByCampId(unsigned int)const::empty_set,
      &_dso_handle);
  }
  p_camp_id_2_fungus_id_set_map = &this->camp_id_2_fungus_id_set_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, camp_id);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_camp_id_2_fungus_id_set_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->camp_id_2_fungus_id_set_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v2 + 64))->second;
  else
    result = &ActivityFungusFighterExcelConfigMgr::findFungusIdSetByCampId(unsigned int)const::empty_set;
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

// Line 406: range 0000000012C2FDC6-0000000012C2FF87
const proto::FungusTrainingPoolPreviewDetail *__fastcall ActivityFungusFighterExcelConfigMgr::findMonsterPoolPreviewByPoolId(
        const ActivityFungusFighterExcelConfigMgr *const this,
        __int64 pool_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail> *p_pool_id_2_detail_info_map; // rdx
  std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail> *v6; // rdx
  bool v7; // al
  const proto::FungusTrainingPoolPreviewDetail *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 pool_id:405 64 8 8 iter:407 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::findMonsterPoolPreviewByPoolId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = pool_id;
  p_pool_id_2_detail_info_map = &this->pool_id_2_detail_info_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, pool_id);
  *(std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>::const_iterator *)(v2 + 64) = std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>::find(
                                                                                                  p_pool_id_2_detail_info_map,
                                                                                                  (const std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>::key_type *)(v2 + 48));
  v6 = &this->pool_id_2_detail_info_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>::const_iterator *)(v2 + 96) = std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::FungusTrainingPoolPreviewDetail> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::FungusTrainingPoolPreviewDetail> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::FungusTrainingPoolPreviewDetail>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::FungusTrainingPoolPreviewDetail> > *const)(v2 + 64))->second;
  else
    result = 0LL;
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

// Line 416: range 0000000012C2FF88-0000000012C3034D
int32_t __cdecl ActivityFungusFighterExcelConfigMgr::rewriteFungusExcelConfig(
        ActivityFungusFighterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::FungusExcelConfig *v5; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  std::set<unsigned int> *v11; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::FungusExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-D8h]
  const unsigned int *id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int const,data::FungusExcelConfig> >::type *fungus_config; // [rsp+38h] [rbp-C8h]
  char v18[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:418 64 8 13 __for_end:418 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::rewriteFungusExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->fungus_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::FungusExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FungusExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FungusExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::FungusExcelConfig>(__in);
    fungus_config = std::get<1ul,unsigned int const,data::FungusExcelConfig>(__in);
    v6 = std::unordered_map<unsigned int,data::FungusExcelConfig>::emplace<unsigned int &,data::FungusExcelConfig&>(
           &this->capture_monster_id_2_fungus_config_map_,
           &fungus_config->capture_monster_id,
           fungus_config,
           (unsigned int *)&this->capture_monster_id_2_fungus_config_map_,
           v5);
    if ( !v6.second )
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
        "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
        "rewriteFungusExcelConfig",
        422);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v7, (const char (*)[34])byte_1AA59EE0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v8,
             &fungus_config->capture_monster_id);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])byte_1AA58940);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v11 = std::map<unsigned int,std::set<unsigned int>>::operator[](
            &this->camp_id_2_fungus_id_set_map_,
            &fungus_config->camp_id);
    std::set<unsigned int>::emplace<unsigned int const&>(v11, id, (const unsigned int *)v11);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 431: range 0000000012C3034E-0000000012C312F6
int32_t __cdecl ActivityFungusFighterExcelConfigMgr::rewriteFungusBaseExcelConfig(
        ActivityFungusFighterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
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
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  MonsterScriptConfig *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rsi
  unsigned int *v24; // rax
  google::protobuf::uint32 *v25; // rdx
  unsigned __int64 v26; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-308h]
  const LuaConfigMgr *lua_config_mgr; // [rsp+20h] [rbp-300h]
  data::FungusBaseExcelConfigMap *__for_range; // [rsp+28h] [rbp-2F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusBaseExcelConfig>,false,false>::reference v31; // [rsp+30h] [rbp-2F0h]
  std::tuple_element<0,std::pair<unsigned int const,data::FungusBaseExcelConfig> >::type *activity_id; // [rsp+38h] [rbp-2E8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-2D8h]
  std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>::mapped_type *pool_detail_info; // [rsp+50h] [rbp-2D0h]
  const std::map<unsigned int,MonsterScriptConfig> *pool_map_ptr; // [rsp+58h] [rbp-2C8h]
  std::map<unsigned int,MonsterScriptConfig> *__for_range_2; // [rsp+68h] [rbp-2B8h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::reference v37; // [rsp+70h] [rbp-2B0h]
  std::tuple_element<0,std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_id; // [rsp+78h] [rbp-2A8h]
  std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_config_0; // [rsp+80h] [rbp-2A0h]
  proto::FungusTrainingMonsterPreviewDetail *monster_info; // [rsp+88h] [rbp-298h]
  const std::set<unsigned int> *__for_range_3; // [rsp+90h] [rbp-290h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::reference v42; // [rsp+98h] [rbp-288h]
  std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_config; // [rsp+A8h] [rbp-278h]
  char v44[624]; // [rsp+B0h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 32 4 11 pool_id:436 48 8 15 __for_begin:434 80 8 13 __for_end:434 112 8 15 __for_begin:436 14"
                        "4 8 13 __for_end:436 176 8 15 __for_begin:454 208 8 13 __for_end:454 240 8 15 __for_begin:469 27"
                        "2 8 13 __for_end:469 304 8 15 __for_begin:473 336 8 13 __for_end:473 368 32 9 <unknown> 432 32 9"
                        " <unknown> 496 48 35 monster_id_to_script_config_map:445";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::rewriteFungusBaseExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
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
  v4[536862728] = -234881024;
  v4[536862729] = 62194;
  v4[536862729] = -234881024;
  v4[536862730] = 62194;
  v4[536862730] = -234881024;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862737] = -202116109;
  ret = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->fungus_base_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusBaseExcelConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::FungusBaseExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusBaseExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::FungusBaseExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FungusBaseExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusBaseExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusBaseExcelConfig>,false> *)(v2 + 80)) )
      break;
    v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusBaseExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusBaseExcelConfig>,false,false> *const)(v2 + 48));
    activity_id = std::get<0ul,unsigned int const,data::FungusBaseExcelConfig>(v31);
    __for_range_0 = &std::get<1ul,unsigned int const,data::FungusBaseExcelConfig>(v31)->pool_id_list;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 112) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 144) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v2 + 144);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 112),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 144)) )
        break;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 112));
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
      if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>,unsigned int>(
              &this->pool_id_2_detail_info_map_,
              (const unsigned int *)(v2 + 32)) )
      {
        pool_detail_info = std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>::operator[](
                             &this->pool_id_2_detail_info_map_,
                             (const std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>::key_type *)(v2 + 32));
        v11 = ((v2 + 496) >> 3) + 2147450880;
        *(_DWORD *)v11 = 0;
        *(_WORD *)(v11 + 4) = 0;
        std::map<unsigned int,MonsterScriptConfig>::map((std::map<unsigned int,MonsterScriptConfig> *const)(v2 + 496));
        if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 32);
        v12 = *(unsigned int *)(v2 + 32);
        pool_map_ptr = LuaConfigMgr::findMonsterPoolByPoolId(lua_config_mgr, v12);
        if ( pool_map_ptr )
        {
          *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 176, v12);
          *(std::map<unsigned int,MonsterScriptConfig>::const_iterator *)(v2 + 176) = std::map<unsigned int,MonsterScriptConfig>::begin(pool_map_ptr);
          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 208, v12);
          *(std::map<unsigned int,MonsterScriptConfig>::const_iterator *)(v2 + 208) = std::map<unsigned int,MonsterScriptConfig>::end(pool_map_ptr);
          while ( std::operator!=(
                    (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)(v2 + 176),
                    (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)(v2 + 208)) )
          {
            v42 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)(v2 + 176));
            std::get<0ul,unsigned int const,MonsterScriptConfig>(v42);
            monster_config = (std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *)std::get<1ul,unsigned int const,MonsterScriptConfig>(v42);
            if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,MonsterScriptConfig>,unsigned int>(
                    (std::map<unsigned int,MonsterScriptConfig> *)(v2 + 496),
                    &monster_config->monster_id) )
            {
              v17 = std::map<unsigned int,MonsterScriptConfig>::operator[](
                      (std::map<unsigned int,MonsterScriptConfig> *const)(v2 + 496),
                      &monster_config->monster_id);
              MonsterScriptConfig::operator=(v17, monster_config);
            }
            std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)(v2 + 176));
          }
          *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
          if ( std::map<unsigned int,MonsterScriptConfig>::empty((const std::map<unsigned int,MonsterScriptConfig> *const)(v2 + 496)) )
          {
            *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 432, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 432),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
              "rewriteFungusBaseExcelConfig",
              464);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 432),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    v18,
                    (const char (*)[61])byte_1AA5A180);
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v2 + 32));
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v20,
                    (const char (*)[16])", activity_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, activity_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
            *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 32);
            v22 = *(unsigned int *)(v2 + 32);
            proto::FungusTrainingPoolPreviewDetail::set_pool_id(pool_detail_info, v22);
            __for_range_2 = (std::map<unsigned int,MonsterScriptConfig> *)(v2 + 496);
            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 240, v22);
            *(std::map<unsigned int,MonsterScriptConfig>::iterator *)(v2 + 240) = std::map<unsigned int,MonsterScriptConfig>::begin(__for_range_2);
            *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 272, v22);
            *(std::map<unsigned int,MonsterScriptConfig>::iterator *)(v2 + 272) = std::map<unsigned int,MonsterScriptConfig>::end(__for_range_2);
            while ( std::operator!=(
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)(v2 + 240),
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)(v2 + 272)) )
            {
              v37 = std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)(v2 + 240));
              monster_id = std::get<0ul,unsigned int const,MonsterScriptConfig>(v37);
              monster_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *)std::get<1ul,unsigned int const,MonsterScriptConfig>(v37);
              monster_info = proto::FungusTrainingPoolPreviewDetail::add_monster_preview_detail_list(pool_detail_info);
              if ( *(_BYTE *)(((unsigned __int64)monster_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)monster_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)monster_id >> 3)
                                                                             + 0x7FFF8000) )
              {
                __asan_report_load4(monster_id);
              }
              v23 = *monster_id;
              proto::FungusTrainingMonsterPreviewDetail::set_monster_id(monster_info, v23);
              __for_range_3 = &monster_config_0->affix_set;
              *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 304, v23);
              *(std::set<unsigned int>::iterator *)(v2 + 304) = std::set<unsigned int>::begin(__for_range_3);
              *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 336, v23);
              *(std::set<unsigned int>::iterator *)(v2 + 336) = std::set<unsigned int>::end(__for_range_3);
              while ( std::operator!=(
                        (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 304),
                        (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 336)) )
              {
                v24 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 304));
                v25 = v24;
                if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v24);
                }
                proto::FungusTrainingMonsterPreviewDetail::add_affix_list(monster_info, *v25);
                std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 304));
              }
              *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
              if ( *(_BYTE *)(((unsigned __int64)&monster_config_0->level >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&monster_config_0->level >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&monster_config_0->level);
              }
              proto::FungusTrainingMonsterPreviewDetail::set_level(monster_info, monster_config_0->level);
              std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)(v2 + 240));
            }
            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 368, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 368),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
            "rewriteFungusBaseExcelConfig",
            450);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 368),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v13, (const char (*)[49])byte_1AA5A0E0);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v2 + 32));
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v15,
                  (const char (*)[16])", activity_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, activity_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
          *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        std::map<unsigned int,MonsterScriptConfig>::~map((std::map<unsigned int,MonsterScriptConfig> *const)(v2 + 496));
      }
      v26 = ((v2 + 496) >> 3) + 2147450880;
      *(_DWORD *)v26 = -117901064;
      *(_WORD *)(v26 + 4) = -1800;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 112));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusBaseExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusBaseExcelConfig>,false,false> *const)(v2 + 48));
  }
  result = ret;
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
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
  }
  return result;
};

// Line 485: range 0000000012C312F8-0000000012C31848
int32_t __cdecl ActivityFungusFighterExcelConfigMgr::rewriteFungusCultivateExcelConfig(
        ActivityFungusFighterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::FungusCultivateExcelConfig *v5; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusCultivateExcelConfig>,false,false>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  data::FungusCultivateExcelConfigMap *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusCultivateExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-118h]
  const unsigned int *cultivate_id; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,data::FungusCultivateExcelConfig> >::type *cultivate_config; // [rsp+38h] [rbp-108h]
  char v19[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:487 64 8 13 __for_end:487 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::rewriteFungusCultivateExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->fungus_cultivate_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusCultivateExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::FungusCultivateExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusCultivateExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FungusCultivateExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FungusCultivateExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusCultivateExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusCultivateExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusCultivateExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusCultivateExcelConfig>,false,false> *const)(v2 + 32));
    cultivate_id = std::get<0ul,unsigned int const,data::FungusCultivateExcelConfig>(__in);
    cultivate_config = std::get<1ul,unsigned int const,data::FungusCultivateExcelConfig>(__in);
    v6 = std::unordered_map<unsigned int,data::FungusCultivateExcelConfig>::emplace<unsigned int &,data::FungusCultivateExcelConfig&>(
           &this->fungus_id_2_cultivate_config_map_,
           &cultivate_config->fungus_id,
           cultivate_config,
           (unsigned int *)&this->fungus_id_2_cultivate_config_map_,
           v5);
    if ( !v6.second )
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
        "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
        "rewriteFungusCultivateExcelConfig",
        491);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v7, (const char (*)[36])byte_1AA5A2A0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &cultivate_config->fungus_id);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])byte_1AA5A300);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, cultivate_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&cultivate_config->min_step >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)cultivate_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cultivate_config->min_step >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&cultivate_config->min_step);
    }
    if ( !cultivate_config->min_step )
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
        "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
        "rewriteFungusCultivateExcelConfig",
        496);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v11, (const char (*)[40])byte_1AA5A340);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, cultivate_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusCultivateExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusCultivateExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v19 == (char *)v2 )
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

// Line 504: range 0000000012C3184A-0000000012C31BB5
int32_t __cdecl ActivityFungusFighterExcelConfigMgr::rewriteFungusPlotDungeonExcelConfig(
        ActivityFungusFighterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::FungusPlotDungeonExcelConfig *v5; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig> >,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::FungusPlotDungeonExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>,false,false>::reference v12; // [rsp+28h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-C8h]
  char v14[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:506 64 8 13 __for_end:506 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::rewriteFungusPlotDungeonExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->fungus_plot_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusPlotDungeonExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::FungusPlotDungeonExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusPlotDungeonExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FungusPlotDungeonExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>,false> *)(v2 + 64)) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::FungusPlotDungeonExcelConfig>(v12);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FungusPlotDungeonExcelConfig>(v12);
    v6 = std::map<unsigned int,data::FungusPlotDungeonExcelConfig>::emplace<unsigned int const&,data::FungusPlotDungeonExcelConfig const&>(
           &this->plot_dungeon_id_2_plot_config_map_,
           &excel_config->dungeon_id,
           excel_config,
           (const unsigned int *)&this->plot_dungeon_id_2_plot_config_map_,
           v5);
    if ( !v6.second )
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
        "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
        "rewriteFungusPlotDungeonExcelConfig",
        510);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v7, (const char (*)[50])byte_1AA5A460);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &excel_config->dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusPlotDungeonExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 518: range 0000000012C31BB6-0000000012C32D81
int32_t __cdecl ActivityFungusFighterExcelConfigMgr::rewriteFungusTraningDungeonExcelConfig(
        ActivityFungusFighterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  const unsigned int *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::map<unsigned int,unsigned int>::size_type v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::map<unsigned int,unsigned int>::size_type v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::map<unsigned int,unsigned int>::size_type v27; // rax
  int32_t v28; // r14d
  unsigned __int64 v29; // rax
  char *v30; // rsi
  bool v31; // al
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v36; // rdx
  unsigned int *p_second; // rax
  unsigned int second; // ecx
  char v39; // al
  std::vector<unsigned int> *v40; // rdx
  const unsigned int *v41; // rcx
  std::vector<unsigned int> *v42; // r8
  unsigned __int64 v43; // rax
  int32_t ret; // [rsp+1Ch] [rbp-3D4h]
  data::FungusTrainingDungeonExcelConfigMap *__for_range; // [rsp+20h] [rbp-3D0h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+28h] [rbp-3C8h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v48; // [rsp+30h] [rbp-3C0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *stage_id; // [rsp+38h] [rbp-3B8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *atk_dungeon_id; // [rsp+40h] [rbp-3B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig>,false,false>::reference v51; // [rsp+48h] [rbp-3A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig> >::type *dungeon_id; // [rsp+50h] [rbp-3A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig> >::type *excel_config; // [rsp+58h] [rbp-398h]
  char v54[912]; // [rsp+60h] [rbp-390h] BYREF

  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(864LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "17 48 4 18 dfd_dungeon_id:568 64 8 15 __for_begin:522 96 8 13 __for_end:522 128 8 9 <unknown> 16"
                        "0 8 9 <unknown> 192 8 15 __for_begin:557 224 8 13 __for_end:557 256 8 8 iter:560 288 8 9 <unknow"
                        "n> 320 24 18 dungeon_id_vec:559 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 "
                        "9 <unknown> 640 32 9 <unknown> 704 48 30 stage_id_2_atk_dungeon_map:520 784 48 30 stage_id_2_dfd"
                        "_dungeon_map:521";
  *(_QWORD *)(v2 + 16) = ActivityFungusFighterExcelConfigMgr::rewriteFungusTraningDungeonExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -219021312;
  v4[536862744] = 62194;
  v4[536862746] = -202116109;
  ret = 0;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 704));
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 784));
  __for_range = &this->fungus_training_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusTrainingDungeonExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FungusTrainingDungeonExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FungusTrainingDungeonExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FungusTrainingDungeonExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig>,false> *)(v2 + 96)) )
      break;
    v51 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig>,false,false> *const)(v2 + 64));
    dungeon_id = std::get<0ul,unsigned int const,data::FungusTrainingDungeonExcelConfig>(v51);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FungusTrainingDungeonExcelConfig>(v51);
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->training_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->training_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->training_type);
    }
    if ( excel_config->training_type == FUNGUS_TRAINING_DUNGEON_ATTACK )
    {
      v7 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
             (std::map<unsigned int,unsigned int> *const)(v2 + 704),
             &excel_config->training_stage_id,
             dungeon_id,
             &excel_config->training_stage_id,
             v6);
      if ( !v7.second )
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
          "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
          "rewriteFungusTraningDungeonExcelConfig",
          529);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(v8, (const char (*)[71])byte_1AA5A6C0);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, dungeon_id);
        v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])", stage_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &excel_config->training_stage_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->training_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&excel_config->training_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&excel_config->training_type);
      }
      if ( excel_config->training_type == FUNGUS_TRAINING_DUNGEON_DEFEND )
      {
        v12 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
                (std::map<unsigned int,unsigned int> *const)(v2 + 784),
                &excel_config->training_stage_id,
                dungeon_id,
                &excel_config->training_stage_id,
                v6);
        if ( !v12.second )
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
            "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
            "rewriteFungusTraningDungeonExcelConfig",
            538);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(v13, (const char (*)[71])byte_1AA5A780);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, dungeon_id);
          v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])", stage_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &excel_config->training_stage_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
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
          "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
          "rewriteFungusTraningDungeonExcelConfig",
          545);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v17, (const char (*)[51])byte_1AA5A800);
        v19 = common::milog::MiLogStream::operator<<<data::FungusTrainingDungeonType,(data::FungusTrainingDungeonType*)0>(
                v18,
                &excel_config->training_type);
        v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])", stage_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &excel_config->training_stage_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FungusTrainingDungeonExcelConfig>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  v21 = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v2 + 704));
  if ( v21 == std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v2 + 784)) )
  {
    __for_range_0 = (std::map<unsigned int,unsigned int> *)(v2 + 704);
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v5);
    *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 192) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v5);
    *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 224) = std::map<unsigned int,unsigned int>::end(__for_range_0);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 192),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 224)) )
    {
      v48 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 192));
      stage_id = std::get<0ul,unsigned int const,unsigned int>(v48);
      atk_dungeon_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v48);
      v29 = ((v2 + 320) >> 3) + 2147450880;
      *(_WORD *)v29 = 0;
      *(_BYTE *)(v29 + 2) = 0;
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 320));
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 256, v2 + 224);
      *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 256) = std::map<unsigned int,unsigned int>::find(
                                                                       (std::map<unsigned int,unsigned int> *const)(v2 + 784),
                                                                       stage_id);
      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 288, stage_id);
      *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 288) = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v2 + 784));
      v30 = (char *)(v2 + 288);
      v31 = std::operator==(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 256),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 288));
      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
      if ( v31 )
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
          "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
          "rewriteFungusTraningDungeonExcelConfig",
          563);
        v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 640),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v33 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(v32, (const char (*)[79])byte_1AA5A920);
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, stage_id);
        v35 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v34, (const char (*)[21])byte_1AA5A9A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, atk_dungeon_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v36 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 256));
        p_second = &v36->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        second = v36->second;
        v39 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v39 != 0 && v39 <= 3 )
        {
          LOBYTE(v30) = v39 != 0;
          __asan_report_store4(v2 + 48, v30);
        }
        *(_DWORD *)(v2 + 48) = second;
        std::vector<unsigned int>::emplace_back<unsigned int const&>(
          (std::vector<unsigned int> *const)(v2 + 320),
          atk_dungeon_id,
          atk_dungeon_id);
        std::vector<unsigned int>::emplace_back<unsigned int &>(
          (std::vector<unsigned int> *const)(v2 + 320),
          (unsigned int *)(v2 + 48),
          (unsigned int *)(v2 + 48));
        v40 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v2 + 320));
        std::map<unsigned int,std::vector<unsigned int>>::emplace<unsigned int const&,std::vector<unsigned int>>(
          &this->training_stage_2_dungeon_id_vec_map_,
          stage_id,
          v40,
          v41,
          v42);
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 320));
      v43 = ((v2 + 320) >> 3) + 2147450880;
      *(_WORD *)v43 = -1800;
      *(_BYTE *)(v43 + 2) = -8;
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 192));
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    v28 = ret;
  }
  else
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
      "./src/txt_data_manual/ActivityFungusFighterExcelConfig.cpp",
      "rewriteFungusTraningDungeonExcelConfig",
      553);
    v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 576),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v23 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(v22, (const char (*)[75])byte_1AA5A860);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    v24 = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v2 + 704));
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      v24 = __asan_report_store8(v2 + 128, byte_1AA5A860);
    *(_QWORD *)(v2 + 128) = v24;
    v25 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v23,
            (const unsigned __int64 *)(v2 + 128));
    v26 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v25, (const char (*)[17])byte_1AA5A8E0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    v27 = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v2 + 784));
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      v27 = __asan_report_store8(v2 + 160, byte_1AA5A8E0);
    *(_QWORD *)(v2 + 160) = v27;
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v26, (const unsigned __int64 *)(v2 + 160));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
    v28 = -1;
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 784));
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 704));
  if ( v54 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = -168430091;
  }
  return v28;
};
