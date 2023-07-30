// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityFleurFairExcelConfig.cpp

// Line 21: range 0000000012C1F17E-0000000012C1F9A0
int32_t __cdecl ActivityFleurFairExcelConfigMgr::checkConfig(
        ActivityFleurFairExcelConfigMgr *const this,
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
  char v12[448]; // [rsp+10h] [rbp-1C0h] BYREF

  v2 = (common::milog::MiLogStream *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"6 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityFleurFairExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  if ( ActivityFleurFairExcelConfigMgr::checkFleurFairPreviewConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
      "checkConfig",
      24);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      v5,
      (const char (*)[48])"[FLEUR_FAIR] checkFleurFairPreviewConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityFleurFairExcelConfigMgr::checkFleurFairChapterConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
      "checkConfig",
      30);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      v7,
      (const char (*)[48])"[FLEUR_FAIR] checkFleurFairChapterConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityFleurFairExcelConfigMgr::checkFleurFairMinigameConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
      "checkConfig",
      36);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      v8,
      (const char (*)[49])"[FLEUR_FAIR] checkFleurFairMinigameConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityFleurFairExcelConfigMgr::checkFleurFairDungeonConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
      "checkConfig",
      42);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      v9,
      (const char (*)[48])"[FLEUR_FAIR] checkFleurFairDungeonConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( ActivityFleurFairExcelConfigMgr::checkFleurFairDungeonStatConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
      "checkConfig",
      48);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      v10,
      (const char (*)[52])"[FLEUR_FAIR] checkFleurFairDungeonStatConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( ActivityFleurFairExcelConfigMgr::checkFleurFairBuffEnergyStatConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
      "checkConfig",
      54);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      v11,
      (const char (*)[55])"[FLEUR_FAIR] checkFleurFairBuffEnergyStatConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v12 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 62: range 0000000012C1F9A2-0000000012C201C4
int32_t __cdecl ActivityFleurFairExcelConfigMgr::rewriteConfig(
        ActivityFleurFairExcelConfigMgr *const this,
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
  char v12[448]; // [rsp+10h] [rbp-1C0h] BYREF

  v2 = (common::milog::MiLogStream *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"6 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityFleurFairExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  if ( ActivityFleurFairExcelConfigMgr::rewriteFleurFairPreviewConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
      "rewriteConfig",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      v5,
      (const char (*)[50])"[FLEUR_FAIR] rewriteFleurFairPreviewConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityFleurFairExcelConfigMgr::rewriteFleurFairChapterConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
      "rewriteConfig",
      71);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      v7,
      (const char (*)[50])"[FLEUR_FAIR] rewriteFleurFairChapterConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityFleurFairExcelConfigMgr::rewriteFleurFairMinigameConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
      "rewriteConfig",
      77);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      v8,
      (const char (*)[51])"[FLEUR_FAIR] rewriteFleurFairMinigameConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityFleurFairExcelConfigMgr::rewriteFleurFairDungeonConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
      "rewriteConfig",
      83);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      v9,
      (const char (*)[50])"[FLEUR_FAIR] rewriteFleurFairDungeonConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( ActivityFleurFairExcelConfigMgr::rewriteFleurFairDungeonStatConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
      "rewriteConfig",
      89);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      v10,
      (const char (*)[54])"[FLEUR_FAIR] rewriteFleurFairDungeonStatConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( ActivityFleurFairExcelConfigMgr::rewriteFleurFairBuffEnergyStatConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
      "rewriteConfig",
      95);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
      v11,
      (const char (*)[57])"[FLEUR_FAIR] rewriteFleurFairBuffEnergyStatConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v12 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 103: range 0000000012C201C6-0000000012C2055E
int32_t __cdecl ActivityFleurFairExcelConfigMgr::checkFleurFairPreviewConfig(
        ActivityFleurFairExcelConfigMgr *const this,
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
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::FleurFairPreviewExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairPreviewExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:104 64 8 13 __for_end:104 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityFleurFairExcelConfigMgr::checkFleurFairPreviewConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->fleur_fair_preview_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairPreviewExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::FleurFairPreviewExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairPreviewExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FleurFairPreviewExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_18;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::FleurFairPreviewExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairPreviewExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FleurFairPreviewExcelConfig>(v14);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    p_activity_id = &excel_config->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_activity_id);
    }
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
            p_new_activity_config_mgr,
            excel_config->activity_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
    "checkFleurFairPreviewConfig",
    108);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v8, (const char (*)[40])byte_1AA56900);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->activity_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])byte_1AA207E0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_18:
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

// Line 117: range 0000000012C20560-0000000012C20572
int32_t __cdecl ActivityFleurFairExcelConfigMgr::checkFleurFairChapterConfig(
        ActivityFleurFairExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 122: range 0000000012C20574-0000000012C20C5B
int32_t __cdecl ActivityFleurFairExcelConfigMgr::checkFleurFairMinigameConfig(
        ActivityFleurFairExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // edx
  int v16; // edx
  int32_t result; // eax
  data::FleurFairMiniGameExcelConfigMap *__for_range; // [rsp+18h] [rbp-198h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false,false>::reference v20; // [rsp+20h] [rbp-190h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-178h]
  char v22[368]; // [rsp+40h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 14 watcher_id:126 48 8 15 __for_begin:124 80 8 13 __for_end:124 112 8 15 __for_begin:126 "
                        "144 8 13 __for_end:126 176 32 9 <unknown> 240 48 18 gallery_id_set:123";
  *(_QWORD *)(v3 + 16) = ActivityFleurFairExcelConfigMgr::checkFleurFairMinigameConfig;
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
  v5[536862729] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 240));
  __for_range = &this->fleur_fair_mini_game_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairMiniGameExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::FleurFairMiniGameExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairMiniGameExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::FleurFairMiniGameExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false> *)(v3 + 80)) )
      break;
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false,false> *const)(v3 + 48));
    std::get<0ul,unsigned int const,data::FleurFairMiniGameExcelConfig>(v20);
    __for_range_0 = &std::get<1ul,unsigned int const,data::FleurFairMiniGameExcelConfig>(v20)->watcher_id_list;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 112) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 144) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 144);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 112),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 144)) )
      {
        v15 = 1;
        goto LABEL_26;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 112));
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
      if ( !data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
              &txt_config_mgr->new_activity_config_mgr,
              *(unsigned int *)(v3 + 32)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 112));
    }
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
      "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
      "checkFleurFairMinigameConfig",
      130);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 176),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v12, (const char (*)[45])byte_1AA56A60);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])byte_1AA207E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v15 = 0;
LABEL_26:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v15 != 1 )
    {
      v16 = 0;
      goto LABEL_30;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false,false> *const)(v3 + 48));
  }
  v16 = 1;
LABEL_30:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v16 == 1 )
    v2 = 0;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 240));
  result = v2;
  if ( v22 == (char *)v3 )
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

// Line 140: range 0000000012C20C5C-0000000012C22531
int32_t __cdecl ActivityFleurFairExcelConfigMgr::checkFleurFairDungeonConfig(
        ActivityFleurFairExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  uint32_t *p_activity_id; // rsi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  const char *v15; // rsi
  unsigned int *v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // edx
  const char *v24; // rsi
  unsigned int *v25; // rax
  int *v26; // rdx
  int v27; // ecx
  char v28; // al
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int v32; // edx
  unsigned __int64 v33; // rax
  char *v34; // rsi
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v37; // rdx
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  common::milog::MiLogStream *v41; // rax
  int v42; // edx
  unsigned __int64 v43; // rax
  int v44; // edx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  bool v49; // [rsp+Ch] [rbp-504h]
  _BOOL4 v50; // [rsp+Ch] [rbp-504h]
  data::FleurFairDungeonExcelConfigMap *__for_range; // [rsp+20h] [rbp-4F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false,false>::reference v53; // [rsp+28h] [rbp-4E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> >::type *id; // [rsp+30h] [rbp-4E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-4D8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-4C8h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-4C0h]
  const std::vector<std::string> *__for_range_2; // [rsp+58h] [rbp-4B8h]
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >::reference gallery_weight_str; // [rsp+60h] [rbp-4B0h]
  std::map<unsigned int,unsigned int> *__for_range_3; // [rsp+68h] [rbp-4A8h]
  const unsigned int *gallery_id; // [rsp+70h] [rbp-4A0h]
  char v62[1168]; // [rsp+80h] [rbp-490h] BYREF

  v3 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1120LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "25 48 1 9 <unknown> 64 1 9 <unknown> 80 4 14 watcher_id:156 96 4 14 gallery_id:165 112 8 15 __fo"
                        "r_begin:141 144 8 13 __for_end:141 176 8 15 __for_begin:156 208 8 13 __for_end:156 240 8 15 __fo"
                        "r_begin:165 272 8 13 __for_end:165 304 8 15 __for_begin:174 336 8 13 __for_end:174 368 8 9 <unkn"
                        "own> 400 8 15 __for_begin:183 432 8 13 __for_end:183 464 32 9 <unknown> 528 32 9 <unknown> 592 3"
                        "2 9 <unknown> 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unknown> 848 32 9 <unknown> 912 32"
                        " 9 <unknown> 976 32 9 <unknown> 1040 48 22 gallery_weight_map:176";
  *(_QWORD *)(v3 + 16) = ActivityFleurFairExcelConfigMgr::checkFleurFairDungeonConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = 61956;
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
  v5[536862731] = -234881024;
  v5[536862732] = 62194;
  v5[536862732] = -234881024;
  v5[536862733] = 62194;
  v5[536862733] = -234881024;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862739] = -219021312;
  v5[536862740] = 62194;
  v5[536862741] = -219021312;
  v5[536862742] = 62194;
  v5[536862743] = -219021312;
  v5[536862744] = 62194;
  v5[536862745] = -219021312;
  v5[536862746] = 62194;
  v5[536862747] = -219021312;
  v5[536862748] = 62194;
  v5[536862749] = -219021312;
  v5[536862750] = 62194;
  v5[536862751] = -219021312;
  v5[536862752] = 62194;
  v5[536862754] = -202116109;
  __for_range = &this->fleur_fair_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairDungeonExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::FleurFairDungeonExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 144, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairDungeonExcelConfig>::iterator *)(v3 + 144) = std::unordered_map<unsigned int,data::FleurFairDungeonExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false> *)(v3 + 112),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false> *)(v3 + 144)) )
    {
      v10 = 1;
      goto LABEL_99;
    }
    v53 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false,false> *const)(v3 + 112));
    id = std::get<0ul,unsigned int const,data::FleurFairDungeonExcelConfig>(v53);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FleurFairDungeonExcelConfig>(v53);
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->dungeon_id);
    }
    if ( !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, excel_config->dungeon_id) )
    {
      *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 464, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 464),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
        "checkFleurFairDungeonConfig",
        146);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 464),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v7, (const char (*)[44])byte_1AA56D40);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &excel_config->dungeon_id);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AA207E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
      v2 = -1;
      v10 = 0;
      goto LABEL_99;
    }
    p_activity_id = &excel_config->activity_id;
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::NewActivityExcelConfig> const,unsigned int>(
            &txt_config_mgr->new_activity_config_mgr.new_activity_excel_config_map,
            &excel_config->activity_id) )
    {
      *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 528, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 528),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
        "checkFleurFairDungeonConfig",
        152);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 528),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v12, (const char (*)[46])byte_1AA56DA0);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &excel_config->activity_id);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])byte_1AA207E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
      v2 = -1;
      v10 = 0;
      goto LABEL_99;
    }
    __for_range_0 = &excel_config->watcher_id_list;
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, p_activity_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 176) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 208, p_activity_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 208) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v15 = (const char *)(v3 + 208);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 176),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 208)) )
      {
        v23 = 1;
        goto LABEL_36;
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v16 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 176));
      v17 = (int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v18 = *v17;
      v19 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( v19 != 0 && v19 <= 3 )
      {
        LOBYTE(v15) = v19 != 0;
        __asan_report_store4(v3 + 80, v15);
      }
      *(_DWORD *)(v3 + 80) = v18;
      if ( !data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
              &txt_config_mgr->new_activity_config_mgr,
              *(unsigned int *)(v3 + 80)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 176));
    }
    *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 592) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 592, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 592),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
      "checkFleurFairDungeonConfig",
      160);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 592),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v21 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v20, (const char (*)[48])byte_1AA56E00);
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 80));
    v15 = byte_1AA207E0;
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])byte_1AA207E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 592));
    *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v23 = 0;
LABEL_36:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( v23 != 1 )
    {
      v10 = 0;
      goto LABEL_99;
    }
    __for_range_1 = &excel_config->mini_game_list;
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 240, v15);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 240) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 272, v15);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 272) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v24 = (const char *)(v3 + 272);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 240),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 272)) )
      {
        v32 = 1;
        goto LABEL_54;
      }
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
      v25 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 240));
      v26 = (int *)v25;
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v25);
      }
      v27 = *v26;
      v28 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
      if ( v28 != 0 && v28 <= 3 )
      {
        LOBYTE(v24) = v28 != 0;
        __asan_report_store4(v3 + 96, v24);
      }
      *(_DWORD *)(v3 + 96) = v27;
      if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
              &txt_config_mgr->gallery_config_mgr,
              *(unsigned int *)(v3 + 96)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 240));
    }
    *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 656) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 656, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 656),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
      "checkFleurFairDungeonConfig",
      169);
    v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 656),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v30 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v29, (const char (*)[48])byte_1AA56E60);
    v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 96));
    v24 = byte_1AA207E0;
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v31, (const char (*)[8])byte_1AA207E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 656));
    *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v32 = 0;
LABEL_54:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
    if ( v32 != 1 )
    {
      v10 = 0;
      goto LABEL_99;
    }
    __for_range_2 = &excel_config->gallery_config;
    *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 304, v24);
    *(std::vector<std::string>::const_iterator *)(v3 + 304) = std::vector<std::string>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 336, v24);
    *(std::vector<std::string>::const_iterator *)(v3 + 336) = std::vector<std::string>::end(__for_range_2);
    while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 304),
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 336)) )
    {
      gallery_weight_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 304));
      v33 = ((v3 + 1040) >> 3) + 2147450880;
      *(_DWORD *)v33 = 0;
      *(_WORD *)(v33 + 4) = 0;
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 1040));
      *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 784),
        ":",
        (const std::allocator<char> *)(v3 + 64));
      *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 720),
        ";",
        (const std::allocator<char> *)(v3 + 48));
      v34 = (char *)(v3 + 720);
      v49 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
              gallery_weight_str,
              (const std::string *)(v3 + 720),
              (const std::string *)(v3 + 784),
              (std::map<unsigned int,unsigned int> *)(v3 + 1040),
              0) != 0;
      std::string::~string((void *)(v3 + 720));
      *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 48);
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      std::string::~string((void *)(v3 + 784));
      *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 64);
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v49 )
      {
        *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 848) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 879) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 879) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 848, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 848),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
          "checkFleurFairDungeonConfig",
          179);
        v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 848),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v36 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v35, (const char (*)[63])byte_1AA56EC0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 848));
        *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v50 = 0;
      }
      else
      {
        __for_range_3 = (std::map<unsigned int,unsigned int> *)(v3 + 1040);
        *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 400, v34);
        *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 400) = std::map<unsigned int,unsigned int>::begin(__for_range_3);
        *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 432, v34);
        *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 432) = std::map<unsigned int,unsigned int>::end(__for_range_3);
        while ( 1 )
        {
          if ( !std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 400),
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 432)) )
          {
            v42 = 1;
            goto LABEL_84;
          }
          *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
          v37 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 400));
          if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 368, v3 + 432);
          if ( ((unsigned __int8)v37 & 7) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v37->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v37 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v37->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v37, 8LL);
          }
          *(std::pair<unsigned int const,unsigned int> *)(v3 + 368) = *v37;
          gallery_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 368));
          std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 368));
          p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)gallery_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)gallery_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gallery_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(gallery_id);
          }
          if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, *gallery_id) )
            break;
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 400));
        }
        *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 912) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 943) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 943) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 912, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 912),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
          "checkFleurFairDungeonConfig",
          187);
        v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 912),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v40 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v39, (const char (*)[48])byte_1AA56E60);
        v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, gallery_id);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v41, (const char (*)[8])byte_1AA207E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 912));
        *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v42 = 0;
LABEL_84:
        *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = -8;
        v50 = v42 == 1;
      }
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 1040));
      v43 = ((v3 + 1040) >> 3) + 2147450880;
      *(_DWORD *)v43 = -117901064;
      *(_WORD *)(v43 + 4) = -1800;
      if ( !v50 )
      {
        v44 = 0;
        goto LABEL_89;
      }
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 304));
    }
    v44 = 1;
LABEL_89:
    *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
    if ( v44 != 1 )
    {
      v10 = 0;
      goto LABEL_99;
    }
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->success_reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->success_reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->success_reward_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            excel_config->success_reward_id,
                            ITEM_LIMTT_ACTIVITY_FLEUR_FAIR_REWARD) != 1 )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false,false> *const)(v3 + 112));
  }
  *(_DWORD *)(((v3 + 976) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 976) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 1007) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 1007) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 976, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 976),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
    "checkFleurFairDungeonConfig",
    195);
  v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 976),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v46 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v45, (const char (*)[34])byte_1AA56F20);
  v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &excel_config->success_reward_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v47, (const char (*)[8])byte_1AA207E0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 976));
  v2 = -1;
  v10 = 0;
LABEL_99:
  if ( v10 == 1 )
    v2 = 0;
  if ( v62 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1120LL, v62);
  }
  return v2;
};

// Line 204: range 0000000012C22532-0000000012C228E4
int32_t __cdecl ActivityFleurFairExcelConfigMgr::checkFleurFairDungeonStatConfig(
        ActivityFleurFairExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_gallery_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::FleurFairDungeonStatExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:205 64 8 13 __for_end:205 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityFleurFairExcelConfigMgr::checkFleurFairDungeonStatConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->fleur_fair_dungeon_stat_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairDungeonStatExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::FleurFairDungeonStatExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairDungeonStatExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FleurFairDungeonStatExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_22;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::FleurFairDungeonStatExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FleurFairDungeonStatExcelConfig>(v14);
    p_gallery_id = &excel_config->gallery_id;
    if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gallery_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_gallery_id);
    }
    if ( excel_config->gallery_id
      && !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
            &txt_config_mgr->gallery_config_mgr,
            excel_config->gallery_id) )
    {
      break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
    "checkFleurFairDungeonStatConfig",
    210);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v8, (const char (*)[48])byte_1AA57020);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->gallery_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])byte_1AA207E0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_22:
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

// Line 219: range 0000000012C228E6-0000000012C22C80
int32_t __cdecl ActivityFleurFairExcelConfigMgr::checkFleurFairBuffEnergyStatConfig(
        ActivityFleurFairExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  uint32_t *p_gallery_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::FleurFairBuffEnergyStatExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:220 64 8 13 __for_end:220 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityFleurFairExcelConfigMgr::checkFleurFairBuffEnergyStatConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->fleur_fair_buff_energy_stat_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairBuffEnergyStatExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::FleurFairBuffEnergyStatExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairBuffEnergyStatExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FleurFairBuffEnergyStatExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_18;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>(v14);
    p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
    p_gallery_id = &excel_config->gallery_id;
    if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gallery_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_gallery_id);
    }
    if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, excel_config->gallery_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
    "checkFleurFairBuffEnergyStatConfig",
    224);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v8, (const char (*)[52])byte_1AA57140);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->gallery_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])byte_1AA207E0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_18:
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

// Line 233: range 0000000012C22C82-0000000012C22FE3
int32_t __cdecl ActivityFleurFairExcelConfigMgr::rewriteFleurFairPreviewConfig(
        ActivityFleurFairExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::FleurFairPreviewExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::FleurFairPreviewExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairPreviewExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:234 64 8 13 __for_end:234 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityFleurFairExcelConfigMgr::rewriteFleurFairPreviewConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->fleur_fair_preview_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairPreviewExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::FleurFairPreviewExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairPreviewExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FleurFairPreviewExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::FleurFairPreviewExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairPreviewExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FleurFairPreviewExcelConfig>(v14);
    v7 = std::map<unsigned int,data::FleurFairPreviewExcelConfig>::emplace<unsigned int const&,data::FleurFairPreviewExcelConfig const&>(
           &this->fleur_fair_preview_map_,
           &excel_config->activity_id,
           excel_config,
           (const unsigned int *)&this->fleur_fair_preview_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
    "rewriteFleurFairPreviewConfig",
    238);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v8, (const char (*)[40])byte_1AA56900);
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

// Line 247: range 0000000012C22FE4-0000000012C23345
int32_t __cdecl ActivityFleurFairExcelConfigMgr::rewriteFleurFairChapterConfig(
        ActivityFleurFairExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::FleurFairChapterExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::FleurFairChapterExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairChapterExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:248 64 8 13 __for_end:248 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityFleurFairExcelConfigMgr::rewriteFleurFairChapterConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->fleur_fair_chapter_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairChapterExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::FleurFairChapterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairChapterExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FleurFairChapterExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::FleurFairChapterExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairChapterExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FleurFairChapterExcelConfig>(v14);
    v7 = std::map<unsigned int,data::FleurFairChapterExcelConfig>::emplace<unsigned int const&,data::FleurFairChapterExcelConfig const&>(
           &this->fleur_fair_chapter_map_,
           &excel_config->chapter_id,
           excel_config,
           (const unsigned int *)&this->fleur_fair_chapter_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
    "rewriteFleurFairChapterConfig",
    252);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v8, (const char (*)[40])byte_1AA572E0);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->chapter_id);
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

// Line 261: range 0000000012C23346-0000000012C23938
int32_t __cdecl ActivityFleurFairExcelConfigMgr::rewriteFleurFairMinigameConfig(
        ActivityFleurFairExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::vector<unsigned int>::const_iterator v6; // rax
  const unsigned int *v7; // r8
  int mini_game_type; // eax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  const unsigned int *__last; // [rsp+8h] [rbp-148h]
  data::FleurFairMiniGameExcelConfigMap *__for_range; // [rsp+20h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false,false>::reference v20; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig> >::type *id; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-118h]
  char v23[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:262 64 8 13 __for_end:262 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityFleurFairExcelConfigMgr::rewriteFleurFairMinigameConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->fleur_fair_mini_game_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairMiniGameExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::FleurFairMiniGameExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairMiniGameExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FleurFairMiniGameExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false> *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_30;
    }
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::FleurFairMiniGameExcelConfig>(v20);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FleurFairMiniGameExcelConfig>(v20);
    __last = std::vector<unsigned int>::end(&excel_config->watcher_id_list)._M_current;
    v6._M_current = std::vector<unsigned int>::begin(&excel_config->watcher_id_list)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      &this->minigame_watcher_set,
      v6,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__last);
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->config_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->config_id);
    }
    if ( !excel_config->config_id )
      goto LABEL_28;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->mini_game_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->mini_game_type >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->mini_game_type);
    }
    mini_game_type = excel_config->mini_game_type;
    if ( mini_game_type > 2 )
      break;
    if ( mini_game_type > 0 )
    {
      v9 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
             &this->gallery_id_2_mini_game_id_map_,
             &excel_config->config_id,
             id,
             (const unsigned int *)&this->gallery_id_2_mini_game_id_map_,
             v7);
      if ( !v9.second )
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
          "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
          "rewriteFleurFairMinigameConfig",
          274);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 96),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v10, (const char (*)[43])byte_1AA573E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &excel_config->config_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
        v2 = -1;
        v12 = 0;
        goto LABEL_30;
      }
    }
LABEL_28:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false,false> *const)(v3 + 32));
  }
  if ( mini_game_type != 3 )
    goto LABEL_28;
  v13 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
          &this->music_game_id_2_mini_game_id_map_,
          &excel_config->config_id,
          id,
          (const unsigned int *)&this->music_game_id_2_mini_game_id_map_,
          v7);
  if ( v13.second )
    goto LABEL_28;
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
    "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
    "rewriteFleurFairMinigameConfig",
    283);
  v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v15 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v14, (const char (*)[39])byte_1AA57440);
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &excel_config->config_id);
  common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])byte_1AA574A0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v12 = 0;
LABEL_30:
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

// Line 297: range 0000000012C2393A-0000000012C24F4B
int32_t __cdecl ActivityFleurFairExcelConfigMgr::rewriteFleurFairDungeonConfig(
        ActivityFleurFairExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,data::FleurFairDungeonExcelConfig> *v6; // rax
  data::FleurFairDungeonExcelConfig *v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  bool v10; // r15
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int v13; // r15d
  unsigned __int64 v14; // rax
  int v15; // edx
  _BOOL4 v16; // r15d
  std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>> *v17; // rax
  std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>::mapped_type *v18; // rax
  std::vector<unsigned int>::size_type v19; // r15
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v24; // rax
  int *v25; // rdx
  int v26; // ecx
  char v27; // al
  unsigned __int64 v28; // rax
  char *v29; // rsi
  bool v30; // r15
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  int v33; // r15d
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  char *v36; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v37; // rax
  int *v38; // rdx
  int v39; // ecx
  char v40; // al
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  int v45; // edx
  std::vector<unsigned int> *v46; // rax
  unsigned __int64 v47; // rax
  int v48; // r15d
  std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>> *v49; // rax
  std::map<unsigned int,std::vector<unsigned int>> *v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  int v53; // eax
  uint32_t idx; // [rsp+2Ch] [rbp-4D4h]
  data::FleurFairDungeonExcelConfigMap *__for_range; // [rsp+30h] [rbp-4D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false,false>::reference v58; // [rsp+38h] [rbp-4C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> >::type *id; // [rsp+40h] [rbp-4C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> >::type *excel_config; // [rsp+48h] [rbp-4B8h]
  const std::vector<std::string> *__for_range_0; // [rsp+50h] [rbp-4B0h]
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >::reference gallery_weight_str; // [rsp+58h] [rbp-4A8h]
  std::vector<std::string>::const_reference ability_group_str; // [rsp+60h] [rbp-4A0h]
  std::vector<unsigned int> *__for_range_1; // [rsp+68h] [rbp-498h]
  char v65[1168]; // [rsp+70h] [rbp-490h] BYREF

  v3 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1120LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "23 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 16 energy_grade:323 112 4 20 ability_"
                        "group_id:336 128 8 15 __for_begin:298 160 8 13 __for_end:298 192 8 15 __for_begin:303 224 8 13 _"
                        "_for_end:303 256 8 15 __for_begin:336 288 8 13 __for_end:336 320 24 22 gallery_weight_vec:302 38"
                        "4 24 24 ability_group_id_vec:325 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32"
                        " 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 48 "
                        "22 gallery_weight_map:305 1040 48 29 grade_2_ability_group_map:320";
  *(_QWORD *)(v3 + 16) = ActivityFleurFairExcelConfigMgr::rewriteFleurFairDungeonConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234753535;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -234881024;
  v5[536862731] = -218959118;
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
  v5[536862751] = -219021312;
  v5[536862752] = 62194;
  v5[536862754] = -202116109;
  __for_range = &this->fleur_fair_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairDungeonExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::FleurFairDungeonExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairDungeonExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::FleurFairDungeonExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false> *)(v3 + 160)) )
  {
    v58 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false,false> *const)(v3 + 128));
    id = std::get<0ul,unsigned int const,data::FleurFairDungeonExcelConfig>(v58);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FleurFairDungeonExcelConfig>(v58);
    v6 = std::map<unsigned int,std::map<unsigned int,data::FleurFairDungeonExcelConfig>>::operator[](
           &this->dungeon_section_config_map_,
           &excel_config->activity_id);
    v7 = std::map<unsigned int,data::FleurFairDungeonExcelConfig>::operator[](v6, &excel_config->section_id);
    data::FleurFairDungeonExcelConfig::operator=(v7, excel_config);
    v8 = ((v3 + 320) >> 3) + 2147450880;
    *(_WORD *)v8 = 0;
    *(_BYTE *)(v8 + 2) = 0;
    std::vector<std::map<unsigned int,unsigned int>>::vector((std::vector<std::map<unsigned int,unsigned int>> *const)(v3 + 320));
    __for_range_0 = &excel_config->gallery_config;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, excel_config);
    *(std::vector<std::string>::const_iterator *)(v3 + 192) = std::vector<std::string>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, excel_config);
    *(std::vector<std::string>::const_iterator *)(v3 + 224) = std::vector<std::string>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 192),
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 224)) )
    {
      gallery_weight_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 192));
      v9 = ((v3 + 960) >> 3) + 2147450880;
      *(_DWORD *)v9 = 0;
      *(_WORD *)(v9 + 4) = 0;
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 960));
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 512),
        ":",
        (const std::allocator<char> *)(v3 + 64));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 448),
        ";",
        (const std::allocator<char> *)(v3 + 48));
      v10 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
              gallery_weight_str,
              (const std::string *)(v3 + 448),
              (const std::string *)(v3 + 512),
              (std::map<unsigned int,unsigned int> *)(v3 + 960),
              0) != 0;
      std::string::~string((void *)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 48);
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      std::string::~string((void *)(v3 + 512));
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 64);
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
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
          "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
          "rewriteFleurFairDungeonConfig",
          308);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v11, (const char (*)[60])byte_1AA57760);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
        *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v13 = 0;
      }
      else
      {
        std::vector<std::map<unsigned int,unsigned int>>::push_back(
          (std::vector<std::map<unsigned int,unsigned int>> *const)(v3 + 320),
          (const std::vector<std::map<unsigned int,unsigned int>>::value_type *)(v3 + 960));
        v13 = 1;
      }
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 960));
      v14 = ((v3 + 960) >> 3) + 2147450880;
      *(_DWORD *)v14 = -117901064;
      *(_WORD *)(v14 + 4) = -1800;
      if ( v13 != 1 )
      {
        v15 = 0;
        goto LABEL_25;
      }
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 192));
    }
    v15 = 1;
LABEL_25:
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v15 == 1 )
    {
      v17 = std::map<unsigned int,std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>>::operator[](
              &this->gallery_config_map_,
              &excel_config->activity_id);
      v18 = std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>::operator[](
              v17,
              &excel_config->section_id);
      std::vector<std::map<unsigned int,unsigned int>>::operator=(
        v18,
        (const std::vector<std::map<unsigned int,unsigned int>> *)(v3 + 320));
      v19 = std::vector<unsigned int>::size(&excel_config->energy_grade_list);
      if ( v19 == std::vector<std::string>::size(&excel_config->ability_group_config) )
      {
        v22 = ((v3 + 1040) >> 3) + 2147450880;
        *(_DWORD *)v22 = 0;
        *(_WORD *)(v22 + 4) = 0;
        std::map<unsigned int,std::vector<unsigned int>>::map((std::map<unsigned int,std::vector<unsigned int>> *const)(v3 + 1040));
        for ( idx = 0; idx < std::vector<unsigned int>::size(&excel_config->energy_grade_list); ++idx )
        {
          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
          v23 = idx;
          v24 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&excel_config->energy_grade_list, idx);
          v25 = (int *)v24;
          if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v24);
          }
          v26 = *v25;
          v27 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
          if ( v27 != 0 && v27 <= 3 )
          {
            LOBYTE(v23) = v27 != 0;
            __asan_report_store4(v3 + 96, v23);
          }
          *(_DWORD *)(v3 + 96) = v26;
          ability_group_str = std::vector<std::string>::operator[](&excel_config->ability_group_config, idx);
          v28 = ((v3 + 384) >> 3) + 2147450880;
          *(_WORD *)v28 = 0;
          *(_BYTE *)(v28 + 2) = 0;
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 384));
          *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 80);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 704),
            ",",
            (const std::allocator<char> *)(v3 + 80));
          v29 = (char *)(v3 + 704);
          v30 = common::tools::StringUtils::splitToList<unsigned int>(
                  ability_group_str,
                  (const std::string *)(v3 + 704),
                  (std::vector<unsigned int> *)(v3 + 384),
                  0) != 0;
          std::string::~string((void *)(v3 + 704));
          *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 80);
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( v30 )
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
              "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
              "rewriteFleurFairDungeonConfig",
              328);
            v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 768),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v32 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                    v31,
                    (const char (*)[63])byte_1AA57840);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
            *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v33 = 0;
          }
          else if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 384)) )
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
              "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
              "rewriteFleurFairDungeonConfig",
              333);
            v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 832),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v35 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                    v34,
                    (const char (*)[63])byte_1AA57840);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
            *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v33 = 0;
          }
          else
          {
            __for_range_1 = (std::vector<unsigned int> *)(v3 + 384);
            *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 256, v29);
            *(std::vector<unsigned int>::iterator *)(v3 + 256) = std::vector<unsigned int>::begin(__for_range_1);
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 288, v29);
            *(std::vector<unsigned int>::iterator *)(v3 + 288) = std::vector<unsigned int>::end(__for_range_1);
            while ( 1 )
            {
              v36 = (char *)(v3 + 288);
              if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 256),
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 288)) )
              {
                v45 = 1;
                goto LABEL_61;
              }
              *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
              v37 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 256));
              v38 = (int *)v37;
              if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v37);
              }
              v39 = *v38;
              v40 = *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000);
              if ( v40 != 0 && v40 <= 3 )
              {
                LOBYTE(v36) = v40 != 0;
                __asan_report_store4(v3 + 112, v36);
              }
              *(_DWORD *)(v3 + 112) = v39;
              if ( !ActivityAbilityGroupExcelConfigMgr::findAbilityGroupRuleConfigByIndex(
                      &txt_config_mgr->activity_ability_group_config_mgr,
                      *(_DWORD *)(v3 + 112)) )
                break;
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 256));
            }
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
              "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
              "rewriteFleurFairDungeonConfig",
              340);
            v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 896),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v42 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                    v41,
                    (const char (*)[59])byte_1AA578A0);
            v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, id);
            v44 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v43,
                    (const char (*)[21])" ,ability_group_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v44,
              (const unsigned int *)(v3 + 112));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
            *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v45 = 0;
LABEL_61:
            *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
            if ( v45 == 1 )
            {
              v46 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                      (std::map<unsigned int,std::vector<unsigned int>> *const)(v3 + 1040),
                      (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 96));
              std::vector<unsigned int>::operator=(v46, (const std::vector<unsigned int> *)(v3 + 384));
              v33 = 1;
            }
            else
            {
              v33 = 0;
            }
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 384));
          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
          v47 = ((v3 + 384) >> 3) + 2147450880;
          *(_WORD *)v47 = -1800;
          *(_BYTE *)(v47 + 2) = -8;
          if ( v33 != 1 )
          {
            v48 = 0;
            goto LABEL_68;
          }
        }
        v49 = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>>::operator[](
                &this->ability_group_config_map_,
                &excel_config->activity_id);
        v50 = std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::operator[](
                v49,
                &excel_config->section_id);
        std::map<unsigned int,std::vector<unsigned int>>::operator=(
          v50,
          (const std::map<unsigned int,std::vector<unsigned int>> *)(v3 + 1040));
        v48 = 1;
LABEL_68:
        std::map<unsigned int,std::vector<unsigned int>>::~map((std::map<unsigned int,std::vector<unsigned int>> *const)(v3 + 1040));
        v16 = v48 == 1;
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
          "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
          "rewriteFleurFairDungeonConfig",
          317);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 640),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [87],(char *[87])0>(v20, (const char (*)[87])byte_1AA577C0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
        *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v16 = 0;
      }
    }
    else
    {
      v16 = 0;
    }
    std::vector<std::map<unsigned int,unsigned int>>::~vector((std::vector<std::map<unsigned int,unsigned int>> *const)(v3 + 320));
    v51 = ((v3 + 320) >> 3) + 2147450880;
    *(_WORD *)v51 = -1800;
    *(_BYTE *)(v51 + 2) = -8;
    v52 = ((v3 + 1040) >> 3) + 2147450880;
    *(_DWORD *)v52 = -117901064;
    *(_WORD *)(v52 + 4) = -1800;
    if ( !v16 )
    {
      v53 = 0;
      goto LABEL_73;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false,false> *const)(v3 + 128));
  }
  v53 = 1;
LABEL_73:
  if ( v53 == 1 )
    v2 = 0;
  if ( v65 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1120LL, v65);
  }
  return v2;
};

// Line 353: range 0000000012C24F4C-0000000012C265E7
int32_t __cdecl ActivityFleurFairExcelConfigMgr::rewriteFleurFairDungeonStatConfig(
        ActivityFleurFairExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::FleurFairDungeonStatType stat_type; // eax
  _BOOL4 v7; // eax
  unsigned __int64 v8; // rax
  std::vector<std::string>::const_reference v9; // rax
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int v13; // r15d
  std::any *v14; // rax
  unsigned __int64 v15; // rdx
  int v16; // eax
  _BOOL4 v17; // eax
  _DWORD *v18; // rax
  unsigned __int64 v19; // rax
  const std::string *v20; // rax
  char *v21; // rsi
  bool v22; // r15
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  int v25; // r15d
  unsigned __int64 v26; // rax
  bool v27; // r15
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  int v30; // r15d
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  __int64 v33; // rsi
  std::vector<unsigned int>::reference v34; // rax
  int *v35; // rdx
  int v36; // ecx
  char v37; // al
  __int64 v38; // rsi
  std::vector<unsigned int>::reference v39; // rax
  int *v40; // rdx
  int v41; // ecx
  char v42; // al
  std::unordered_set<unsigned int> *v43; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  unsigned __int64 v47; // rax
  int v48; // edx
  const std::string *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  std::any *v52; // rax
  _DWORD *v53; // rdx
  unsigned __int64 v54; // rdx
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  data::FleurFairDungeonStatExcelConfigMap *__for_range; // [rsp+20h] [rbp-4C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false,false>::reference v59; // [rsp+28h] [rbp-4B8h]
  std::tuple_element<0,std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig> >::type *id; // [rsp+30h] [rbp-4B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-4A8h]
  std::vector<std::string> *__for_range_0; // [rsp+40h] [rbp-4A0h]
  const std::string *group_monster_str; // [rsp+48h] [rbp-498h]
  char v64[1168]; // [rsp+50h] [rbp-490h] BYREF

  v3 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1120LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "21 48 1 9 <unknown> 64 1 9 <unknown> 80 4 12 group_id:402 96 4 13 config_id:403 112 8 15 __for_b"
                        "egin:354 144 8 13 __for_end:354 176 8 15 __for_begin:389 208 8 13 __for_end:389 240 24 25 group_"
                        "monster_str_vec:383 304 24 11 tmp_vec:391 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknow"
                        "n> 560 32 9 <unknown> 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 9 <unknown"
                        "> 880 32 9 <unknown> 944 40 9 param:365 1024 64 9 param:382";
  *(_QWORD *)(v3 + 16) = ActivityFleurFairExcelConfigMgr::rewriteFleurFairDungeonStatConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = 61956;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862728] = -218959360;
  v5[536862729] = 62194;
  v5[536862730] = -218959360;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862738] = -219021312;
  v5[536862739] = 62194;
  v5[536862740] = -219021312;
  v5[536862741] = 62194;
  v5[536862742] = -219021312;
  v5[536862743] = 62194;
  v5[536862744] = -219021312;
  v5[536862745] = 62194;
  v5[536862746] = -219021312;
  v5[536862747] = 62194;
  v5[536862748] = -219021312;
  v5[536862749] = 62194;
  v5[536862750] = -234881024;
  v5[536862751] = -218959118;
  v5[536862754] = -202116109;
  __for_range = &this->fleur_fair_dungeon_stat_excel_config_map;
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairDungeonStatExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::FleurFairDungeonStatExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 144, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FleurFairDungeonStatExcelConfig>::iterator *)(v3 + 144) = std::unordered_map<unsigned int,data::FleurFairDungeonStatExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false> *)(v3 + 112),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false> *)(v3 + 144)) )
    {
      v16 = 1;
      goto LABEL_77;
    }
    v59 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false,false> *const)(v3 + 112));
    id = std::get<0ul,unsigned int const,data::FleurFairDungeonStatExcelConfig>(v59);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FleurFairDungeonStatExcelConfig>(v59);
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->stat_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->stat_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->stat_type);
    }
    stat_type = excel_config->stat_type;
    if ( stat_type == FLEUR_FAIR_DUNGEON_STAT_GROUP_VARIABLE )
    {
      if ( std::vector<std::string>::size(&excel_config->stat_param_list) > 1 )
      {
        v8 = ((v3 + 944) >> 3) + 2147450880;
        *(_DWORD *)v8 = 0;
        *(_BYTE *)(v8 + 4) = 0;
        FleurFairDungeonStatGroupVariableParam::FleurFairDungeonStatGroupVariableParam((FleurFairDungeonStatGroupVariableParam *const)(v3 + 944));
        v9 = std::vector<std::string>::operator[](&excel_config->stat_param_list, 0LL);
        std::string::operator=(v3 + 944, v9);
        v10 = std::vector<std::string>::operator[](&excel_config->stat_param_list, 1uLL);
        if ( common::tools::StringUtils::strToNum<int>(v10, (int *)(v3 + 976), 1) )
        {
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
            "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
            "rewriteFleurFairDungeonStatConfig",
            369);
          v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 368),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v12 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v11, (const char (*)[57])byte_1AA57B60);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
          *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v13 = 0;
        }
        else
        {
          v14 = std::map<unsigned int,std::any>::operator[](&this->dungeon_stat_param_map, id);
          std::any::operator=<FleurFairDungeonStatGroupVariableParam &>(
            v14,
            (FleurFairDungeonStatGroupVariableParam *)(v3 + 944));
          v13 = 1;
        }
        FleurFairDungeonStatGroupVariableParam::~FleurFairDungeonStatGroupVariableParam((FleurFairDungeonStatGroupVariableParam *const)(v3 + 944));
        v7 = v13 != 0;
      }
      else
      {
        v2 = -1;
        v7 = 0;
      }
      v15 = ((v3 + 944) >> 3) + 2147450880;
      *(_DWORD *)v15 = -117901064;
      *(_BYTE *)(v15 + 4) = -8;
      if ( !v7 )
      {
        v16 = 0;
        goto LABEL_77;
      }
      goto LABEL_75;
    }
    if ( stat_type != FLEUR_FAIR_DUNGEON_STAT_MONSTER_HURT )
      break;
    if ( std::vector<std::string>::size(&excel_config->stat_param_list) > 1 )
    {
      v18 = (_DWORD *)(((v3 + 1024) >> 3) + 2147450880);
      *v18 = 0;
      v18[1] = 0;
      FleurFairDungeonStatMonsterHurtParam::FleurFairDungeonStatMonsterHurtParam((FleurFairDungeonStatMonsterHurtParam *const)(v3 + 1024));
      v19 = ((v3 + 240) >> 3) + 2147450880;
      *(_WORD *)v19 = 0;
      *(_BYTE *)(v19 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 240));
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 432),
        ";",
        (const std::allocator<char> *)(v3 + 48));
      v20 = std::vector<std::string>::operator[](&excel_config->stat_param_list, 0LL);
      v21 = (char *)(v3 + 432);
      v22 = common::tools::StringUtils::splitToList(
              v20,
              (const std::string *)(v3 + 432),
              (std::vector<std::string> *)(v3 + 240),
              0) != 0;
      std::string::~string((void *)(v3 + 432));
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 48);
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v22 )
      {
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
          "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
          "rewriteFleurFairDungeonStatConfig",
          386);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 496),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v24 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v23, (const char (*)[57])byte_1AA57B60);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
        *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v25 = 0;
      }
      else
      {
        __for_range_0 = (std::vector<std::string> *)(v3 + 240);
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 176, v21);
        *(std::vector<std::string>::iterator *)(v3 + 176) = std::vector<std::string>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 208, v21);
        *(std::vector<std::string>::iterator *)(v3 + 208) = std::vector<std::string>::end(__for_range_0);
        while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 176),
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 208)) )
        {
          group_monster_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 176));
          v26 = ((v3 + 304) >> 3) + 2147450880;
          *(_WORD *)v26 = 0;
          *(_BYTE *)(v26 + 2) = 0;
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 304));
          *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 64);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 560),
            ":",
            (const std::allocator<char> *)(v3 + 64));
          v27 = common::tools::StringUtils::splitToList<unsigned int>(
                  group_monster_str,
                  (const std::string *)(v3 + 560),
                  (std::vector<unsigned int> *)(v3 + 304),
                  0) != 0;
          std::string::~string((void *)(v3 + 560));
          *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 64);
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
          if ( v27 )
          {
            *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 624) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 624, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 624),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
              "rewriteFleurFairDungeonStatConfig",
              394);
            v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 624),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v29 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                    v28,
                    (const char (*)[57])byte_1AA57B60);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
            *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v30 = 0;
          }
          else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 304)) == 2 )
          {
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            v33 = 0LL;
            v34 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 304), 0LL);
            v35 = (int *)v34;
            if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v34);
            }
            v36 = *v35;
            v37 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
            if ( v37 != 0 && v37 <= 3 )
            {
              LOBYTE(v33) = v37 != 0;
              __asan_report_store4(v3 + 80, v33);
            }
            *(_DWORD *)(v3 + 80) = v36;
            *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
            v38 = 1LL;
            v39 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 304), 1uLL);
            v40 = (int *)v39;
            if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v39);
            }
            v41 = *v40;
            v42 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
            if ( v42 != 0 && v42 <= 3 )
            {
              LOBYTE(v38) = v42 != 0;
              __asan_report_store4(v3 + 96, v38);
            }
            *(_DWORD *)(v3 + 96) = v41;
            v43 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                    (std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *const)(v3 + 1024),
                    (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v3 + 80));
            v44 = std::unordered_set<unsigned int>::emplace<unsigned int &>(
                    v43,
                    (unsigned int *)(v3 + 96),
                    (unsigned int *)v43);
            if ( !v44.second )
            {
              *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 752) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 752, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 752),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
                "rewriteFleurFairDungeonStatConfig",
                406);
              v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 752),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v46 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                      v45,
                      (const char (*)[57])byte_1AA57B60);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 752));
              *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v30 = 0;
            }
            else
            {
              v30 = 1;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 688) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 688, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 688),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
              "rewriteFleurFairDungeonStatConfig",
              399);
            v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 688),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v32 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                    v31,
                    (const char (*)[57])byte_1AA57B60);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 688));
            *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v30 = 0;
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 304));
          v47 = ((v3 + 304) >> 3) + 2147450880;
          *(_WORD *)v47 = -1800;
          *(_BYTE *)(v47 + 2) = -8;
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( v30 != 1 )
          {
            v48 = 0;
            goto LABEL_62;
          }
          __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 176));
        }
        v48 = 1;
LABEL_62:
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
        if ( v48 == 1 )
        {
          v49 = std::vector<std::string>::operator[](&excel_config->stat_param_list, 1uLL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v49, (unsigned int *)(v3 + 1080), 1) )
          {
            *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 816) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 816, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 816),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
              "rewriteFleurFairDungeonStatConfig",
              412);
            v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 816),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v51 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                    v50,
                    (const char (*)[57])byte_1AA57B60);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 816));
            *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v25 = 0;
          }
          else
          {
            v52 = std::map<unsigned int,std::any>::operator[](&this->dungeon_stat_param_map, id);
            std::any::operator=<FleurFairDungeonStatMonsterHurtParam &>(
              v52,
              (FleurFairDungeonStatMonsterHurtParam *)(v3 + 1024));
            v25 = 1;
          }
        }
        else
        {
          v25 = 0;
        }
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 240));
      FleurFairDungeonStatMonsterHurtParam::~FleurFairDungeonStatMonsterHurtParam((FleurFairDungeonStatMonsterHurtParam *const)(v3 + 1024));
      v17 = v25 != 0;
    }
    else
    {
      v2 = -1;
      v17 = 0;
    }
    v53 = (_DWORD *)(((v3 + 1024) >> 3) + 2147450880);
    *v53 = -117901064;
    v53[1] = -117901064;
    v54 = ((v3 + 240) >> 3) + 2147450880;
    *(_WORD *)v54 = -1800;
    *(_BYTE *)(v54 + 2) = -8;
    if ( !v17 )
    {
      v16 = 0;
      goto LABEL_77;
    }
LABEL_75:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false,false> *const)(v3 + 112));
  }
  *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 880) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 911) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 911) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 880, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 880),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityFleurFairExcelConfig.cpp",
    "rewriteFleurFairDungeonStatConfig",
    421);
  v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 880),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v56 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v55, (const char (*)[44])byte_1AA57BC0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 880));
  v2 = -1;
  v16 = 0;
LABEL_77:
  if ( v16 == 1 )
    v2 = 0;
  if ( v64 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1120LL, v64);
  }
  return v2;
};

// Line 431: range 0000000012C265E8-0000000012C267F4
int32_t __cdecl ActivityFleurFairExcelConfigMgr::rewriteFleurFairBuffEnergyStatConfig(
        ActivityFleurFairExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int> *v5; // rdx
  int32_t result; // eax
  data::FleurFairBuffEnergyStatExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false,false>::reference v8; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig> >::type *id; // [rsp+20h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:432 64 8 13 __for_end:432";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false>::__node_type *)ActivityFleurFairExcelConfigMgr::rewriteFleurFairBuffEnergyStatConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->fleur_fair_buff_energy_stat_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::FleurFairBuffEnergyStatExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::FleurFairBuffEnergyStatExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false,false>::operator*(v2 + 4);
    id = std::get<0ul,unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>(v8);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>(v8);
    v5 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
           &this->buff_energy_stat_map_,
           &excel_config->gallery_id);
    std::vector<unsigned int>::push_back(v5, id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairBuffEnergyStatExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 441: range 0000000012C267F6-0000000012C269E8
__int64 __fastcall ActivityFleurFairExcelConfigMgr::getActivityStayTime(
        const ActivityFleurFairExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::FleurFairPreviewExcelConfig> *p_fleur_fair_preview_map; // rdx
  std::map<unsigned int,data::FleurFairPreviewExcelConfig> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig> >::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:440 64 8 8 iter:442 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFleurFairExcelConfigMgr::getActivityStayTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_fleur_fair_preview_map = &this->fleur_fair_preview_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,data::FleurFairPreviewExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::FleurFairPreviewExcelConfig>::find(
                                                                                             p_fleur_fair_preview_map,
                                                                                             (const std::map<unsigned int,data::FleurFairPreviewExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->fleur_fair_preview_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::FleurFairPreviewExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::FleurFairPreviewExcelConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairPreviewExcelConfig> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second.activity_stay_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->second.activity_stay_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v9->second.activity_stay_time);
    }
    result = v9->second.activity_stay_time;
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

// Line 452: range 0000000012C269EA-0000000012C26BDC
__int64 __fastcall ActivityFleurFairExcelConfigMgr::getOpenDayByChapterId(
        const ActivityFleurFairExcelConfigMgr *const this,
        __int64 chapter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::FleurFairChapterExcelConfig> *p_fleur_fair_chapter_map; // rdx
  std::map<unsigned int,data::FleurFairChapterExcelConfig> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig> >::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 chapter_id:451 64 8 8 iter:453 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFleurFairExcelConfigMgr::getOpenDayByChapterId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = chapter_id;
  p_fleur_fair_chapter_map = &this->fleur_fair_chapter_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, chapter_id);
  *(std::map<unsigned int,data::FleurFairChapterExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::FleurFairChapterExcelConfig>::find(
                                                                                             p_fleur_fair_chapter_map,
                                                                                             (const std::map<unsigned int,data::FleurFairChapterExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->fleur_fair_chapter_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::FleurFairChapterExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::FleurFairChapterExcelConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second.open_day >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->second.open_day >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v9->second.open_day);
    }
    result = v9->second.open_day;
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

// Line 463: range 0000000012C26BDE-0000000012C26D9F
const std::map<unsigned int,data::FleurFairDungeonExcelConfig> *__fastcall ActivityFleurFairExcelConfigMgr::getFleurFairDungeonSectionConfigMap(
        const ActivityFleurFairExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::map<unsigned int,data::FleurFairDungeonExcelConfig>> *p_dungeon_section_config_map; // rdx
  std::map<unsigned int,std::map<unsigned int,data::FleurFairDungeonExcelConfig>> *v6; // rdx
  bool v7; // al
  const std::map<unsigned int,data::FleurFairDungeonExcelConfig> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:462 64 8 8 iter:464 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFleurFairExcelConfigMgr::getFleurFairDungeonSectionConfigMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_dungeon_section_config_map = &this->dungeon_section_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,std::map<unsigned int,data::FleurFairDungeonExcelConfig>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,data::FleurFairDungeonExcelConfig>>::find(p_dungeon_section_config_map, (const std::map<unsigned int,std::map<unsigned int,data::FleurFairDungeonExcelConfig>>::key_type *)(v2 + 48));
  v6 = &this->dungeon_section_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<unsigned int,data::FleurFairDungeonExcelConfig>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<unsigned int,data::FleurFairDungeonExcelConfig>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::FleurFairDungeonExcelConfig> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::FleurFairDungeonExcelConfig> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::FleurFairDungeonExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::FleurFairDungeonExcelConfig> > > *const)(v2 + 64))->second;
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

// Line 474: range 0000000012C26DA0-0000000012C26F99
const data::FleurFairDungeonExcelConfig *__fastcall ActivityFleurFairExcelConfigMgr::getFleurFairDungeonSectionConfig(
        const ActivityFleurFairExcelConfigMgr *const this,
        uint32_t activity_id,
        uint32_t section_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const data::FleurFairDungeonExcelConfig *result; // rax
  bool v7; // al
  const std::map<unsigned int,data::FleurFairDungeonExcelConfig> *dungeon_section_config_map_ptr; // [rsp+10h] [rbp-B0h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 section_id:473 64 8 8 iter:482 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityFleurFairExcelConfigMgr::getFleurFairDungeonSectionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = section_id;
  dungeon_section_config_map_ptr = ActivityFleurFairExcelConfigMgr::getFleurFairDungeonSectionConfigMap(
                                     this,
                                     activity_id);
  if ( dungeon_section_config_map_ptr )
  {
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, activity_id);
    *(std::map<unsigned int,data::FleurFairDungeonExcelConfig>::const_iterator *)(v3 + 64) = std::map<unsigned int,data::FleurFairDungeonExcelConfig>::find(
                                                                                               dungeon_section_config_map_ptr,
                                                                                               (const std::map<unsigned int,data::FleurFairDungeonExcelConfig>::key_type *)(v3 + 48));
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 48);
    *(std::map<unsigned int,data::FleurFairDungeonExcelConfig>::const_iterator *)(v3 + 96) = std::map<unsigned int,data::FleurFairDungeonExcelConfig>::end(dungeon_section_config_map_ptr);
    v7 = std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> >::_Self *)(v3 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> >::_Self *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v7 )
      result = 0LL;
    else
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> > *const)(v3 + 64))->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v10 == (char *)v3 )
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

// Line 492: range 0000000012C26F9A-0000000012C27287
const std::map<unsigned int,std::vector<unsigned int>> *__fastcall ActivityFleurFairExcelConfigMgr::getFleurFairDungeonAbilityGroupMap(
        const ActivityFleurFairExcelConfigMgr *const this,
        __int64 activity_id,
        uint32_t section_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>> *p_ability_group_config_map; // rdx
  std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>> *v7; // rdx
  bool v8; // al
  const std::map<unsigned int,std::vector<unsigned int>> *result; // rax
  std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>> *p_second; // rdx
  std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>> *v11; // rdx
  bool v12; // al
  char v14[224]; // [rsp+10h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 15 activity_id:491 48 4 14 section_id:491 64 8 17 activity_iter:493 96 8 9 <unknown> 128 "
                        "8 16 section_iter:499 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityFleurFairExcelConfigMgr::getFleurFairDungeonAbilityGroupMap;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = activity_id;
  *(_DWORD *)(v3 + 48) = section_id;
  p_ability_group_config_map = &this->ability_group_config_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, activity_id);
  *(std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>>::find(p_ability_group_config_map, (const std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>>::key_type *)(v3 + 32));
  v7 = &this->ability_group_config_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>> > > *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::const_iterator *)(v3 + 128) = std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::find(p_second, (const std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v11 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>> > > *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::const_iterator *)(v3 + 160) = std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::end(v11);
    v12 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
      result = 0LL;
    else
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > > *const)(v3 + 128))->second;
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

// Line 509: range 0000000012C27288-0000000012C27575
const std::vector<std::map<unsigned int,unsigned int>> *__fastcall ActivityFleurFairExcelConfigMgr::getFleurFairDungeonGalleryWeightVec(
        const ActivityFleurFairExcelConfigMgr *const this,
        __int64 activity_id,
        uint32_t section_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>> *p_gallery_config_map; // rdx
  std::map<unsigned int,std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>> *v7; // rdx
  bool v8; // al
  const std::vector<std::map<unsigned int,unsigned int>> *result; // rax
  std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>> *p_second; // rdx
  std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>> *v11; // rdx
  bool v12; // al
  char v14[224]; // [rsp+10h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 15 activity_id:508 48 4 14 section_id:508 64 8 17 activity_iter:510 96 8 9 <unknown> 128 "
                        "8 16 section_iter:516 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityFleurFairExcelConfigMgr::getFleurFairDungeonGalleryWeightVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = activity_id;
  *(_DWORD *)(v3 + 48) = section_id;
  p_gallery_config_map = &this->gallery_config_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, activity_id);
  *(std::map<unsigned int,std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>>::find(p_gallery_config_map, (const std::map<unsigned int,std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>>::key_type *)(v3 + 32));
  v7 = &this->gallery_config_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>> > > *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>::const_iterator *)(v3 + 128) = std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>::find(p_second, (const std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v11 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>> > > *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>::const_iterator *)(v3 + 160) = std::map<unsigned int,std::vector<std::map<unsigned int,unsigned int>>>::end(v11);
    v12 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::map<unsigned int,unsigned int>> > >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::map<unsigned int,unsigned int>> > >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
      result = 0LL;
    else
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::map<unsigned int,unsigned int>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::map<unsigned int,unsigned int>> > > *const)(v3 + 128))->second;
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

// Line 526: range 0000000012C27576-0000000012C27771
__int64 __fastcall ActivityFleurFairExcelConfigMgr::findMiniGameIdByGalleryId(
        const ActivityFleurFairExcelConfigMgr *const this,
        __int64 gallery_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_gallery_id_2_mini_game_id_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gallery_id:525 64 8 8 iter:527 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFleurFairExcelConfigMgr::findMiniGameIdByGalleryId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gallery_id;
  p_gallery_id_2_mini_game_id_map = &this->gallery_id_2_mini_game_id_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gallery_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_gallery_id_2_mini_game_id_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->gallery_id_2_mini_game_id_map_;
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

// Line 536: range 0000000012C27772-0000000012C2796D
__int64 __fastcall ActivityFleurFairExcelConfigMgr::findMiniGameIdByMusicInfoId(
        const ActivityFleurFairExcelConfigMgr *const this,
        __int64 music_info_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_music_game_id_2_mini_game_id_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 17 music_info_id:535 64 8 8 iter:537 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFleurFairExcelConfigMgr::findMiniGameIdByMusicInfoId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = music_info_id;
  p_music_game_id_2_mini_game_id_map = &this->music_game_id_2_mini_game_id_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, music_info_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_music_game_id_2_mini_game_id_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->music_game_id_2_mini_game_id_map_;
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

// Line 546: range 0000000012C2796E-0000000012C27B2F
const std::vector<unsigned int> *__fastcall ActivityFleurFairExcelConfigMgr::getFleurFairBuffEnergyStatIdVec(
        const ActivityFleurFairExcelConfigMgr *const this,
        __int64 gallery_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::vector<unsigned int>> *p_buff_energy_stat_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gallery_id:545 64 8 8 iter:547 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFleurFairExcelConfigMgr::getFleurFairBuffEnergyStatIdVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gallery_id;
  p_buff_energy_stat_map = &this->buff_energy_stat_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gallery_id);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                                     p_buff_energy_stat_map,
                                                                                     (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->buff_energy_stat_map_;
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

// Line 557: range 0000000012C27B30-0000000012C27E84
__int64 __fastcall ActivityFleurFairExcelConfigMgr::isContainsDungeonWatcher(
        const ActivityFleurFairExcelConfigMgr *const this,
        __int64 watcher_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  const unsigned int *M_current; // r14
  const unsigned int *v7; // rcx
  bool v8; // al
  int v9; // eax
  __int64 result; // rax
  unsigned __int8 v11; // [rsp+3h] [rbp-12Dh]
  data::FleurFairDungeonExcelConfigMap *__for_range; // [rsp+18h] [rbp-118h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false,false>::reference v13; // [rsp+20h] [rbp-110h]
  std::vector<unsigned int> *watcher_id_vec; // [rsp+38h] [rbp-F8h]
  char v15[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 14 watcher_id:556 64 8 15 __for_begin:558 96 8 13 __for_end:558 128 8 9 <unknown> 160 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityFleurFairExcelConfigMgr::isContainsDungeonWatcher;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202116352;
  *(_DWORD *)(v2 + 48) = watcher_id;
  __for_range = &this->fleur_fair_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, watcher_id);
  *(std::unordered_map<unsigned int,data::FleurFairDungeonExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FleurFairDungeonExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, watcher_id);
  *(std::unordered_map<unsigned int,data::FleurFairDungeonExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FleurFairDungeonExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false> *)(v2 + 96)) )
      break;
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false,false> *const)(v2 + 64));
    std::get<0ul,unsigned int const,data::FleurFairDungeonExcelConfig>(v13);
    watcher_id_vec = &std::get<1ul,unsigned int const,data::FleurFairDungeonExcelConfig>(v13)->watcher_id_list;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(watcher_id_vec);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    M_current = std::vector<unsigned int>::end(watcher_id_vec)._M_current;
    v7 = std::vector<unsigned int>::begin(watcher_id_vec)._M_current;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v7,
                                                                                                    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                    (const unsigned int *)(v2 + 48));
    v8 = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
           (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
           (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      v11 = 1;
      v9 = 0;
      goto LABEL_18;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>,false,false> *const)(v2 + 64));
  }
  v9 = 1;
LABEL_18:
  if ( v9 == 1 )
    v11 = 0;
  result = v11;
  if ( v15 == (char *)v2 )
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
