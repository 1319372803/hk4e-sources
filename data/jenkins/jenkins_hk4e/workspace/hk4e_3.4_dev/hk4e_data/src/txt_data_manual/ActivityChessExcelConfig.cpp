// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityChessExcelConfig.cpp

// Line 21: range 0000000012AE184A-0000000012AE206C
int32_t __cdecl ActivityChessExcelConfigMgr::checkConfig(
        ActivityChessExcelConfigMgr *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityChessExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  if ( ActivityChessExcelConfigMgr::checkChessPreviewConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "checkConfig",
      24);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v5,
      (const char (*)[39])"[CHESS] checkChessPreviewConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityChessExcelConfigMgr::checkChessLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "checkConfig",
      30);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v7,
      (const char (*)[37])"[CHESS] checkChessLevelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityChessExcelConfigMgr::checkChessMapConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "checkConfig",
      36);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v8,
      (const char (*)[35])"[CHESS] checkChessMapConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityChessExcelConfigMgr::checkChessScheduleConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "checkConfig",
      42);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v9,
      (const char (*)[40])"[CHESS] checkChessScheduleConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( ActivityChessExcelConfigMgr::checkChessGearConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "checkConfig",
      48);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v10,
      (const char (*)[36])"[CHESS] checkChessGearConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( ActivityChessExcelConfigMgr::checkChessCardConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "checkConfig",
      54);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v11,
      (const char (*)[36])"[CHESS] checkChessCardConfig failed");
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

// Line 62: range 0000000012AE206E-0000000012AE275E
int32_t __cdecl ActivityChessExcelConfigMgr::rewriteConfig(
        ActivityChessExcelConfigMgr *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityChessExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  if ( ActivityChessExcelConfigMgr::rewriteChessLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "rewriteConfig",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v5,
      (const char (*)[39])"[CHESS] rewriteChessLevelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityChessExcelConfigMgr::rewriteChessMapConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "rewriteConfig",
      71);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v7,
      (const char (*)[37])"[CHESS] rewriteChessMapConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityChessExcelConfigMgr::rewriteChessScheduleConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "rewriteConfig",
      77);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v8,
      (const char (*)[42])"[CHESS] rewriteChessScheduleConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityChessExcelConfigMgr::rewriteChessGearConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "rewriteConfig",
      83);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v9,
      (const char (*)[38])"[CHESS] rewriteChessGearConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( ActivityChessExcelConfigMgr::rewriteChessCardConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "rewriteConfig",
      89);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v10,
      (const char (*)[38])"[CHESS] rewriteChessCardConfig failed");
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

// Line 97: range 0000000012AE2760-0000000012AE2791
int32_t __cdecl ActivityChessExcelConfigMgr::finalConfig(
        ActivityChessExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return ActivityChessExcelConfigMgr::finalChessCardConfig(this, txt_config_mgr);
};

// Line 104: range 0000000012AE2792-0000000012AE3259
int32_t __cdecl ActivityChessExcelConfigMgr::checkChessPreviewConfig(
        ActivityChessExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  __int64 activity_id; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  char *v12; // rsi
  unsigned int *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int v20; // edx
  ActivityChessExcelConfigMgr *v21; // rcx
  __int64 teach_map_id; // rsi
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int32_t result; // eax
  data::ActivityChessPreviewExcelConfigMap *__for_range; // [rsp+10h] [rbp-220h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false,false>::reference v32; // [rsp+18h] [rbp-218h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-208h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-200h]
  data::ActivityChessMapExcelConfig *map_config_ptr; // [rsp+38h] [rbp-1F8h]
  char v36[496]; // [rsp+40h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 14 watcher_id:113 64 8 15 __for_begin:105 96 8 13 __for_end:105 128 8 15 __for_begin:113 "
                        "160 8 13 __for_end:113 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChessExcelConfigMgr::checkChessPreviewConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -202116109;
  __for_range = &this->activity_chess_preview_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityChessPreviewExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityChessPreviewExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityChessPreviewExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityChessPreviewExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false> *)(v3 + 96)) )
    {
      v11 = 1;
      goto LABEL_48;
    }
    v32 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::ActivityChessPreviewExcelConfig>(v32);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityChessPreviewExcelConfig>(v32);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->activity_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->activity_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->activity_id);
    }
    activity_id = excel_config->activity_id;
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(p_new_activity_config_mgr, activity_id) )
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
        "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
        "checkChessPreviewConfig",
        109);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v8, (const char (*)[43])byte_1AA26A00);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->activity_id);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])byte_1AA207E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      v2 = -1;
      v11 = 0;
      goto LABEL_48;
    }
    __for_range_0 = &excel_config->watcher_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, activity_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, activity_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v12 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v20 = 1;
        goto LABEL_32;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v13 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v14 = (int *)v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      v16 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v12) = v16 != 0;
        __asan_report_store4(v3 + 48, v12);
      }
      *(_DWORD *)(v3 + 48) = v15;
      if ( !data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
              &txt_config_mgr->new_activity_config_mgr,
              *(unsigned int *)(v3 + 48)) )
        break;
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "checkChessPreviewConfig",
      117);
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v18 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            v17,
            (const char (*)[45])"[CHESS] checkChessPreviewConfig watcher_id: ");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])byte_1AA207E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v20 = 0;
LABEL_32:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v20 != 1 )
    {
      v11 = 0;
      goto LABEL_48;
    }
    v21 = this;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->teach_map_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->teach_map_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->teach_map_id);
    }
    teach_map_id = excel_config->teach_map_id;
    map_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessMapExcelConfig(v21, teach_map_id);
    if ( !map_config_ptr )
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
        "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
        "checkChessPreviewConfig",
        125);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v24 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              v23,
              (const char (*)[47])"[CHESS] checkChessPreviewConfig teach_map_id: ");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &excel_config->teach_map_id);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])byte_1AA207E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      v2 = -1;
      v11 = 0;
      goto LABEL_48;
    }
    if ( *(char *)(((unsigned __int64)&map_config_ptr->is_teach_map >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&map_config_ptr->is_teach_map, teach_map_id, &map_config_ptr->is_teach_map);
    if ( !map_config_ptr->is_teach_map )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
    "checkChessPreviewConfig",
    131);
  v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 384),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v27 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          v26,
          (const char (*)[47])"[CHESS] checkChessPreviewConfig teach_map_id: ");
  v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &excel_config->teach_map_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v28, (const char (*)[8])byte_1AA207E0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
  v2 = -1;
  v11 = 0;
LABEL_48:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 140: range 0000000012AE325A-0000000012AE405C
int32_t __cdecl ActivityChessExcelConfigMgr::checkChessLevelConfig(
        ActivityChessExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  uint32_t max_chess_level; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  uint32_t card_count; // r15d
  std::map<unsigned int,unsigned int>::mapped_type *v13; // rax
  uint32_t *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::map<unsigned int,unsigned int>::mapped_type *v21; // rax
  char *v22; // rsi
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  char *v28; // rsi
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r15
  std::vector<unsigned int>::size_type v34; // rax
  int32_t result; // eax
  data::ActivityChessLevelExcelConfig *level_config_ptr; // [rsp+28h] [rbp-2A8h]
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::mapped_type *__for_range; // [rsp+38h] [rbp-298h]
  std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::mapped_type *__for_range_0; // [rsp+48h] [rbp-288h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::reference v39; // [rsp+50h] [rbp-280h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *quality_0; // [rsp+58h] [rbp-278h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *card_id_vec; // [rsp+60h] [rbp-270h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v42; // [rsp+68h] [rbp-268h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *quality; // [rsp+70h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *weight; // [rsp+78h] [rbp-258h]
  char v45[592]; // [rsp+80h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 4 9 level:147 64 8 15 __for_begin:164 96 8 13 __for_end:164 128 8 15 __for_begin:170 160 8"
                        " 13 __for_end:170 192 8 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416"
                        " 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChessExcelConfigMgr::checkChessLevelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_chess_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_chess_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_chess_level_);
  }
  if ( this->max_chess_level_ )
  {
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, txt_config_mgr);
    for ( *(_DWORD *)(v3 + 48) = 1; ; ++*(_DWORD *)(v3 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->max_chess_level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->max_chess_level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->max_chess_level_);
      }
      max_chess_level = this->max_chess_level_;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      if ( max_chess_level < *(_DWORD *)(v3 + 48) )
      {
        v11 = 1;
        goto LABEL_54;
      }
      level_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessLevelExcelConfig(
                           this,
                           *(unsigned int *)(v3 + 48));
      if ( !level_config_ptr )
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkChessLevelConfig",
          152);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 288),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v8, (const char (*)[45])byte_1AA26CC0);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v10, (const char (*)[17])byte_1AA26D20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        v2 = -1;
        v11 = 0;
        goto LABEL_54;
      }
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->card_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_config_ptr->card_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&level_config_ptr->card_count);
      }
      card_count = level_config_ptr->card_count;
      v13 = std::map<unsigned int,unsigned int>::operator[](
              &this->level_2_safe_card_num_map_,
              (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      if ( card_count > *v14 )
        break;
      v22 = (char *)(v3 + 48);
      __for_range = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                      &this->level_2_quality_weight_map_,
                      (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 64, v22);
      *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 64) = std::map<unsigned int,unsigned int>::begin(__for_range);
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v22);
      *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::end(__for_range);
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96)) )
      {
        v42 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
        quality = std::get<0ul,unsigned int const,unsigned int>(v42);
        weight = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v42);
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
          1u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkChessLevelConfig",
          166);
        v23 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[45])byte_1AA26CC0);
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v3 + 48));
        v25 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v24, (const char (*)[17])byte_1AA26DE0);
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, quality);
        v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])byte_1AA26E20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, weight);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      v28 = (char *)(v3 + 48);
      __for_range_0 = std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::operator[](
                        &this->level_2_normal_card_pool_map_,
                        (const std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::key_type *)(v3 + 48));
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v28);
      *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 128) = std::map<unsigned int,std::vector<unsigned int>>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v28);
      *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 160) = std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_0);
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v3 + 128),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v3 + 160)) )
      {
        v39 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v3 + 128));
        quality_0 = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v39);
        card_id_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v39);
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkChessLevelConfig",
          172);
        v29 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[45])byte_1AA26CC0);
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v3 + 48));
        v31 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v30, (const char (*)[17])byte_1AA26DE0);
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, quality_0);
        v33 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v32, (const char (*)[17])byte_1AA26E60);
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        v34 = std::vector<unsigned int>::size(card_id_vec);
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          v34 = __asan_report_store8(v3 + 192, byte_1AA26E60);
        *(_QWORD *)(v3 + 192) = v34;
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v33,
          (const unsigned __int64 *)(v3 + 192));
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v3 + 128));
      }
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "checkChessLevelConfig",
      158);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 352),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v15, (const char (*)[45])byte_1AA26CC0);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
    v18 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v17, (const char (*)[22])byte_1AA26D60);
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &level_config_ptr->card_count);
    v20 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v19, (const char (*)[20])byte_1AA26DA0);
    v21 = std::map<unsigned int,unsigned int>::operator[](
            &this->level_2_safe_card_num_map_,
            (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, v21);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    v2 = -1;
    v11 = 0;
LABEL_54:
    if ( v11 == 1 )
      v2 = 0;
  }
  else
  {
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "checkChessLevelConfig",
      143);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 224),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v6, (const char (*)[57])byte_1AA26C60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    v2 = -1;
  }
  result = v2;
  if ( v45 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
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

// Line 180: range 0000000012AE405E-0000000012AE4463
int32_t __cdecl ActivityChessExcelConfigMgr::checkChessMapConfig(
        ActivityChessExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ActivityChessExcelConfigMgr *v6; // rcx
  char v7; // al
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  int32_t result; // eax
  data::ActivityChessMapExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false,false>::reference v15; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityChessMapExcelConfig> >::type *map_id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityChessMapExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v18[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:181 64 8 13 __for_end:181 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChessExcelConfigMgr::checkChessMapConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->activity_chess_map_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false> *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_24;
    }
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false,false> *const)(v3 + 32));
    map_id = std::get<0ul,unsigned int const,data::ActivityChessMapExcelConfig>(v15);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityChessMapExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityChessMapExcelConfig>(v15);
    if ( *(char *)(((unsigned __int64)&excel_config->is_teach_map >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&excel_config->is_teach_map, v3 + 64, &excel_config->is_teach_map);
    if ( excel_config->is_teach_map )
      goto LABEL_17;
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->prev_map_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->prev_map_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->prev_map_id);
    }
    if ( data::ActivityChessExcelConfigMgrBase::findActivityChessMapExcelConfig(v6, excel_config->prev_map_id) )
LABEL_17:
      v7 = 0;
    else
      v7 = 1;
    if ( v7 )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
    "checkChessMapConfig",
    185);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v8, (const char (*)[60])byte_1AA26F40);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, map_id);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" ,prev_map_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &excel_config->prev_map_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v12 = 0;
LABEL_24:
  if ( v12 == 1 )
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

// Line 194: range 0000000012AE4464-0000000012AE4920
int32_t __cdecl ActivityChessExcelConfigMgr::checkChessScheduleConfig(
        ActivityChessExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  uint32_t max_day_index; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  char v13[240]; // [rsp+10h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 day_index:201 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChessExcelConfigMgr::checkChessScheduleConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_day_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_day_index_);
  }
  if ( this->max_day_index_ )
  {
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, (((_BYTE)this - 52) & 7u) + 3);
    for ( *(_DWORD *)(v3 + 48) = 1; ; ++*(_DWORD *)(v3 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->max_day_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_day_index_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->max_day_index_);
      }
      max_day_index = this->max_day_index_;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      if ( max_day_index < *(_DWORD *)(v3 + 48) )
      {
        v11 = 1;
        goto LABEL_26;
      }
      if ( !data::ActivityChessExcelConfigMgrBase::findActivityChessScheduleExcelConfig(
              this,
              *(unsigned int *)(v3 + 48)) )
        break;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
    }
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "checkChessScheduleConfig",
      205);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v8, (const char (*)[42])byte_1AA270C0);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v10, (const char (*)[17])byte_1AA26D20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    v2 = -1;
    v11 = 0;
LABEL_26:
    if ( v11 == 1 )
      v2 = 0;
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "checkChessScheduleConfig",
      197);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v6, (const char (*)[58])byte_1AA27060);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    v2 = -1;
  }
  result = v2;
  if ( v13 == (char *)v3 )
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

// Line 214: range 0000000012AE4922-0000000012AE54FA
int32_t __cdecl ActivityChessExcelConfigMgr::checkChessGearConfig(
        ActivityChessExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  JsonConfigMgr *p_json_config_mgr; // rcx
  int gadget_id; // edx
  const char *v14; // rsi
  bool v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  char *v21; // rsi
  unsigned int *v22; // rax
  int *v23; // rdx
  int v24; // ecx
  char v25; // al
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-244h]
  data::ActivityChessGearExcelConfigMap *__for_range; // [rsp+20h] [rbp-240h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false>::reference v35; // [rsp+28h] [rbp-238h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityChessGearExcelConfig> >::type *id; // [rsp+30h] [rbp-230h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityChessGearExcelConfig> >::type *config; // [rsp+38h] [rbp-228h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-220h]
  char v39[528]; // [rsp+50h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 4 14 dungeon_id:234 64 8 15 __for_begin:216 96 8 13 __for_end:216 128 8 15 __for_begin:234"
                        " 160 8 13 __for_end:234 192 16 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unkno"
                        "wn> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChessExcelConfigMgr::checkChessGearConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -219021312;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  ret = 0;
  __for_range = &this->activity_chess_gear_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false> *)(v2 + 96)) )
  {
    v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::ActivityChessGearExcelConfig>(v35);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityChessGearExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityChessGearExcelConfig>(v35);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( *id )
    {
      p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->gadget_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->gadget_id);
      }
      if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, config->gadget_id) )
      {
        ret = -1;
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkChessGearConfig",
          227);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 288),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])byte_1AA27280);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
        v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])byte_1AA272C0);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->gadget_id);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])byte_1AA27300);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      }
      *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      p_json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->gadget_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->gadget_id);
      }
      gadget_id = config->gadget_id;
      if ( *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      JsonConfigMgr::findGadgetConfig(
        (const JsonConfigMgr *const)(v2 + 192),
        (const std::unordered_map<unsigned int,std::shared_ptr<data::ConfigGadget>> *)p_json_config_mgr,
        gadget_id);
      v14 = (const char *)(v2 + 192);
      v15 = std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v2 + 192));
      std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 192));
      *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -1800;
      if ( v15 )
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkChessGearConfig",
          232);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])byte_1AA27280);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id);
        v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])byte_1AA27340);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &config->gadget_id);
        v14 = byte_1AA27380;
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v20, (const char (*)[21])byte_1AA27380);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      }
      __for_range_0 = &config->ban_dungeon_list;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, v14);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v14);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v21 = (char *)(v2 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v22 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
        v23 = (int *)v22;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v22);
        }
        v24 = *v23;
        v25 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v25 != 0 && v25 <= 3 )
        {
          LOBYTE(v21) = v25 != 0;
          __asan_report_store4(v2 + 48, v21);
        }
        *(_DWORD *)(v2 + 48) = v24;
        if ( !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                &txt_config_mgr->dungeon_config_mgr,
                *(unsigned int *)(v2 + 48)) )
        {
          ret = -1;
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
            "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
            "checkChessGearConfig",
            240);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 416),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])byte_1AA27280);
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, id);
          v29 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v28, (const char (*)[23])byte_1AA273C0);
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v29,
                  (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v30, (const char (*)[10])byte_1AA27300);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    }
    else
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
        "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
        "checkChessGearConfig",
        220);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 224),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])byte_1AA27240);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v39 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 249: range 0000000012AE54FC-0000000012AE5DDB
int32_t __cdecl ActivityChessExcelConfigMgr::rewriteChessLevelConfig(
        ActivityChessExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t level; // ecx
  common::milog::MiLogStream *v7; // rax
  int v8; // edx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v9; // rax
  int *v10; // rdx
  char v11; // cl
  _BOOL8 v12; // rsi
  int v13; // r14d
  char *v14; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rax
  _DWORD *v16; // rdx
  char v17; // cl
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v18; // rax
  int *v19; // rdx
  char v20; // cl
  __int64 v21; // rsi
  int v22; // r14d
  char *v23; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v24; // rax
  _DWORD *v25; // rdx
  char v26; // cl
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v27; // rax
  int *v28; // rdx
  char v29; // cl
  __int64 v30; // rsi
  int v31; // r14d
  char *v32; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v33; // rax
  _DWORD *v34; // rdx
  char v35; // cl
  common::milog::MiLogStream *v36; // rax
  int32_t result; // eax
  data::ActivityChessLevelExcelConfigMap *__for_range; // [rsp+28h] [rbp-178h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false,false>::reference v39; // [rsp+30h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityChessLevelExcelConfig> >::type *excel_config; // [rsp+40h] [rbp-160h]
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::mapped_type *quality_weight_map; // [rsp+48h] [rbp-158h]
  char v42[336]; // [rsp+50h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 8 15 __for_begin:250 128 8 13 __for_end:"
                        "250 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChessExcelConfigMgr::rewriteChessLevelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->activity_chess_level_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityChessLevelExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityChessLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityChessLevelExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ActivityChessLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false> *)(v3 + 128)) )
    {
      v8 = 1;
      goto LABEL_40;
    }
    v39 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false,false> *const)(v3 + 96));
    std::get<0ul,unsigned int const,data::ActivityChessLevelExcelConfig>(v39);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityChessLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityChessLevelExcelConfig>(v39);
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->level);
    }
    level = excel_config->level;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_chess_level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_chess_level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->max_chess_level_);
    }
    if ( level > this->max_chess_level_ )
      this->max_chess_level_ = excel_config->level;
    if ( std::vector<unsigned int>::size(&excel_config->fortune_list) != 3 )
      break;
    quality_weight_map = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                           &this->level_2_quality_weight_map_,
                           &excel_config->level);
    v9 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               &excel_config->fortune_list,
                                                                                               0LL);
    v10 = (int *)v9;
    v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
    v12 = v11 != 0;
    if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
      __asan_report_load4(v9);
    v13 = *v10;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, v12);
    *(_DWORD *)(v3 + 48) = 0;
    v14 = (char *)(v3 + 48);
    v15 = std::map<unsigned int,unsigned int>::operator[](
            quality_weight_map,
            (std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    v16 = v15;
    v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
    {
      LOBYTE(v14) = v17 != 0;
      __asan_report_store4(v15, v14);
    }
    *v16 = v13;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    v21 = 1LL;
    v18 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                &excel_config->fortune_list,
                                                                                                1uLL);
    v19 = (int *)v18;
    v20 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
    LOBYTE(v21) = v20 != 0;
    if ( v20 != 0 && (char)(((unsigned __int8)v18 & 7) + 3) >= v20 )
      __asan_report_load4(v18);
    v22 = *v19;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 64, v21);
    *(_DWORD *)(v3 + 64) = 1;
    v23 = (char *)(v3 + 64);
    v24 = std::map<unsigned int,unsigned int>::operator[](
            quality_weight_map,
            (std::map<unsigned int,unsigned int>::key_type *)(v3 + 64));
    v25 = v24;
    v26 = *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000);
    if ( v26 != 0 && (char)(((unsigned __int8)v24 & 7) + 3) >= v26 )
    {
      LOBYTE(v23) = v26 != 0;
      __asan_report_store4(v24, v23);
    }
    *v25 = v22;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    v30 = 2LL;
    v27 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                &excel_config->fortune_list,
                                                                                                2uLL);
    v28 = (int *)v27;
    v29 = *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000);
    LOBYTE(v30) = v29 != 0;
    if ( v29 != 0 && (char)(((unsigned __int8)v27 & 7) + 3) >= v29 )
      __asan_report_load4(v27);
    v31 = *v28;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 80, v30);
    *(_DWORD *)(v3 + 80) = 2;
    v32 = (char *)(v3 + 80);
    v33 = std::map<unsigned int,unsigned int>::operator[](
            quality_weight_map,
            (std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
    v34 = v33;
    v35 = *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000);
    if ( v35 != 0 && (char)(((unsigned __int8)v33 & 7) + 3) >= v35 )
    {
      LOBYTE(v32) = v35 != 0;
      __asan_report_store4(v33, v32);
    }
    *v34 = v31;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false,false> *const)(v3 + 96));
  }
  *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
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
    "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
    "rewriteChessLevelConfig",
    259);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 160),
         (const char (*)[16])"[CONFIG_ERROR] ");
  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v7, (const char (*)[35])byte_1AA274E0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v8 = 0;
LABEL_40:
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v8 == 1 )
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
      1u,
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "rewriteChessLevelConfig",
      268);
    v36 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            (common::milog::MiLogStream *const)(v3 + 224),
            (const char (*)[51])"[CHESS] rewriteChessLevelConfig max_chess_level_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &this->max_chess_level_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    v2 = 0;
  }
  result = v2;
  if ( v42 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
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

// Line 273: range 0000000012AE5DDC-0000000012AE6159
int32_t __cdecl ActivityChessExcelConfigMgr::rewriteChessMapConfig(
        ActivityChessExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::ActivityChessMapExcelConfig *v5; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig> >,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::ActivityChessMapExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false,false>::reference v13; // [rsp+28h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityChessMapExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-C8h]
  char v15[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:275 64 8 13 __for_end:275 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChessExcelConfigMgr::rewriteChessMapConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->activity_chess_map_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false> *)(v2 + 64)) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::ActivityChessMapExcelConfig>(v13);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityChessMapExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityChessMapExcelConfig>(v13);
    v6 = std::map<unsigned int,data::ActivityChessMapExcelConfig>::emplace<unsigned int const&,data::ActivityChessMapExcelConfig const&>(
           &this->chess_map_config_map_,
           &excel_config->dungeon_id,
           excel_config,
           (const unsigned int *)&this->chess_map_config_map_,
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
        "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
        "rewriteChessMapConfig",
        279);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v7, (const char (*)[41])byte_1AA27640);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &excel_config->dungeon_id);
      common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])byte_1AA276A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 287: range 0000000012AE615A-0000000012AE6529
int32_t __cdecl ActivityChessExcelConfigMgr::rewriteChessScheduleConfig(
        ActivityChessExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t day; // ecx
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  data::ActivityChessScheduleExcelConfigMap *__for_range; // [rsp+10h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false,false>::reference v9; // [rsp+18h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-C8h]
  char v11[192]; // [rsp+30h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:288 64 8 13 __for_end:288 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChessExcelConfigMgr::rewriteChessScheduleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  __for_range = &this->activity_chess_schedule_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityChessScheduleExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityChessScheduleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityChessScheduleExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessScheduleExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false> *)(v2 + 64)) )
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::ActivityChessScheduleExcelConfig>(v9);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityChessScheduleExcelConfig>(v9);
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->day >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->day >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->day);
    }
    day = excel_config->day;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_day_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_day_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->max_day_index_);
    }
    if ( day > this->max_day_index_ )
      this->max_day_index_ = excel_config->day;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
    "rewriteChessScheduleConfig",
    296);
  v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
         (common::milog::MiLogStream *const)(v2 + 96),
         (const char (*)[52])"[CHESS] rewriteChessScheduleConfig max_day_index_: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->max_day_index_);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 301: range 0000000012AE652A-0000000012AE6F91
int32_t __cdecl ActivityChessExcelConfigMgr::rewriteChessCardConfig(
        ActivityChessExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  __int64 v7; // rsi
  std::vector<data::ChessCardEffect>::reference v8; // rdx
  char v9; // cl
  __int64 v10; // rsi
  uint32_t need_chess_level; // ecx
  char v12; // al
  uint32_t max_chess_level; // ecx
  uint32_t curse_weight; // r14d
  std::map<unsigned int,unsigned int> *v15; // rax
  uint32_t *p_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v17; // rax
  uint32_t *v18; // rdx
  char v19; // cl
  std::map<unsigned int,std::vector<unsigned int>> *p_card_quality_type; // rdi
  __int64 v21; // rsi
  data::ChessCardQualityType card_quality_type; // ecx
  char v23; // al
  std::vector<unsigned int>::size_type card_count; // r15
  __int64 v25; // rsi
  __int64 v26; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v27; // rax
  int i; // [rsp+24h] [rbp-15Ch]
  data::ActivityChessCardExcelConfigMap *__for_range; // [rsp+28h] [rbp-158h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-150h]
  std::tuple_element<1,std::pair<unsigned int const,data::ActivityChessCardExcelConfig> >::type *excel_config; // [rsp+40h] [rbp-140h]
  std::map<unsigned int,std::vector<unsigned int>>::mapped_type *card_id_vec; // [rsp+48h] [rbp-138h]
  char v34[304]; // [rsp+50h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 9 level:322 48 4 9 <unknown> 64 8 15 __for_begin:308 96 8 13 __for_end:308 128 8 9 <unkno"
                        "wn> 160 8 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChessExcelConfigMgr::rewriteChessCardConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_chess_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_chess_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_chess_level_);
  }
  if ( this->max_chess_level_ )
  {
    __for_range = &this->activity_chess_card_excel_config_map;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::end(__for_range);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false> *)(v2 + 64),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false> *)(v2 + 96)) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false,false> *const)(v2 + 64));
      std::get<0ul,unsigned int const,data::ActivityChessCardExcelConfig>(__in);
      excel_config = std::get<1ul,unsigned int const,data::ActivityChessCardExcelConfig>(__in);
      if ( *(char *)(((unsigned __int64)&excel_config->is_disused >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&excel_config->is_disused, v2 + 96, &excel_config->is_disused);
      if ( !excel_config->is_disused )
      {
        if ( *(_BYTE *)(((unsigned __int64)&excel_config->effect.effect_index >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)excel_config - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->effect.effect_index >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_store4(&excel_config->effect.effect_index, (((_BYTE)excel_config - 108) & 7u) + 3);
        }
        excel_config->effect.effect_index = 0;
        for ( i = 0; i < std::vector<data::ChessCardEffect>::size(&excel_config->extra_effect_list); ++i )
        {
          v7 = i;
          v8 = std::vector<data::ChessCardEffect>::operator[](&excel_config->extra_effect_list, i);
          v9 = *(_BYTE *)(((unsigned __int64)&v8->effect_index >> 3) + 0x7FFF8000);
          if ( v9 != 0 && (char)((((_BYTE)v8 + 100) & 7) + 3) >= v9 )
          {
            LOBYTE(v7) = v9 != 0;
            __asan_report_store4(&v8->effect_index, v7);
          }
          v8->effect_index = i + 1;
        }
        common::tools::MiscUtils::removeEmptyElement<data::ChessCardEffect,data::ChessCardEffectType data::ChessCardEffect::*>(
          &excel_config->extra_effect_list,
          (data::ChessCardEffectType *)0x28);
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
        v10 = (((_BYTE)excel_config + 20) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&excel_config->need_chess_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->need_chess_level >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&excel_config->need_chess_level);
        }
        need_chess_level = excel_config->need_chess_level;
        v12 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
        if ( v12 != 0 && v12 <= 3 )
        {
          LOBYTE(v10) = v12 != 0;
          __asan_report_store4(v2 + 32, v10);
        }
        for ( *(_DWORD *)(v2 + 32) = need_chess_level; ; ++*(_DWORD *)(v2 + 32) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->max_chess_level_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->max_chess_level_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->max_chess_level_);
          }
          max_chess_level = this->max_chess_level_;
          if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 32);
          if ( max_chess_level < *(_DWORD *)(v2 + 32) )
            break;
          if ( *(_BYTE *)(((unsigned __int64)&excel_config->card_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&excel_config->card_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&excel_config->card_type);
          }
          if ( excel_config->card_type )
          {
            p_card_quality_type = std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::operator[](
                                    &this->level_2_normal_card_pool_map_,
                                    (const std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::key_type *)(v2 + 32));
            *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
            v21 = (((_BYTE)excel_config + 36) & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)&excel_config->card_quality_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)excel_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->card_quality_type >> 3)
                                                                          + 0x7FFF8000) )
            {
              p_card_quality_type = (std::map<unsigned int,std::vector<unsigned int>> *)&excel_config->card_quality_type;
              __asan_report_load4(&excel_config->card_quality_type);
            }
            card_quality_type = excel_config->card_quality_type;
            v23 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
            if ( v23 != 0 && v23 <= 3 )
            {
              p_card_quality_type = (std::map<unsigned int,std::vector<unsigned int>> *)(v2 + 48);
              LOBYTE(v21) = v23 != 0;
              __asan_report_store4(v2 + 48, v21);
            }
            *(_DWORD *)(v2 + 48) = card_quality_type;
            card_id_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                            p_card_quality_type,
                            (std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
            *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
            if ( *(_BYTE *)(((unsigned __int64)&excel_config->card_count >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&excel_config->card_count >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&excel_config->card_count);
            }
            card_count = excel_config->card_count;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 128, v2 + 48);
            *(std::vector<unsigned int>::iterator *)(v2 + 128) = std::vector<unsigned int>::end(card_id_vec);
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
              (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 128));
            if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
              __asan_report_load8(v2 + 160);
            std::vector<unsigned int>::insert(
              card_id_vec,
              *(std::vector<unsigned int>::const_iterator *)(v2 + 160),
              card_count,
              &excel_config->id);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( *(_BYTE *)(((unsigned __int64)&excel_config->card_quality_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)excel_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->card_quality_type >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4(&excel_config->card_quality_type);
            }
            if ( excel_config->card_quality_type == CARD_QUALITY_NORAML )
            {
              v25 = ((_BYTE)excel_config - 99) & 7;
              v26 = (*(_BYTE *)(((unsigned __int64)&excel_config->is_remove_on_pick >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&excel_config->is_remove_on_pick >> 3) + 0x7FFF8000));
              if ( (_BYTE)v26 )
                __asan_report_load1(&excel_config->is_remove_on_pick, v25, v26);
              if ( !excel_config->is_remove_on_pick )
              {
                v27 = std::map<unsigned int,unsigned int>::operator[](
                        &this->level_2_safe_card_num_map_,
                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
                if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v27);
                }
                ++*v27;
              }
            }
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&excel_config->curse_weight >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&excel_config->curse_weight >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&excel_config->curse_weight);
            }
            curse_weight = excel_config->curse_weight;
            v15 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                    &this->level_2_curse_card_weight_map_,
                    (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v2 + 32));
            p_id = &excel_config->id;
            v17 = std::map<unsigned int,unsigned int>::operator[](v15, &excel_config->id);
            v18 = v17;
            v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
            if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
            {
              LOBYTE(p_id) = v19 != 0;
              __asan_report_store4(v17, p_id);
            }
            *v18 = curse_weight;
          }
          if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 32);
        }
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false,false> *const)(v2 + 64));
    }
    result = 0;
  }
  else
  {
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
      "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
      "rewriteChessCardConfig",
      304);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v5, (const char (*)[60])byte_1AA278C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = -1;
  }
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
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

// Line 345: range 0000000012AE6F92-0000000012AE7235
int32_t __cdecl ActivityChessExcelConfigMgr::rewriteChessGearConfig(
        ActivityChessExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // rdx
  std::insert_iterator<std::set<unsigned int> > v6; // rax
  std::set<unsigned int> *container; // r14
  const std::_Rb_tree_node_base *v8; // r15
  std::vector<unsigned int>::iterator v9; // rax
  std::insert_iterator<std::set<unsigned int> > v10; // rdx
  int32_t result; // eax
  unsigned int *__last; // [rsp+8h] [rbp-D8h]
  data::ActivityChessGearExcelConfigMap *__for_range; // [rsp+20h] [rbp-C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-B8h]
  const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *id; // [rsp+30h] [rbp-B0h]
  std::tuple_element<1,std::pair<unsigned int const,data::ActivityChessGearExcelConfig> >::type *config; // [rsp+38h] [rbp-A8h]
  std::unordered_map<unsigned int,std::set<unsigned int>>::mapped_type *dungeon_set; // [rsp+48h] [rbp-98h]
  char v18[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false> *)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:346 64 8 13 __for_end:346";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false>::__node_type *)ActivityChessExcelConfigMgr::rewriteChessGearConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->activity_chess_gear_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false>::operator*(v2 + 4);
    id = std::get<0ul,unsigned int const,data::ActivityChessGearExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::ActivityChessGearExcelConfig>(__in);
    dungeon_set = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](&this->gear_ban_dungeons_map_, id);
    M_node = std::set<unsigned int>::end(dungeon_set)._M_node;
    v6 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
           dungeon_set,
           (std::_Rb_tree_const_iterator<unsigned int>)M_node);
    container = v6.container;
    v8 = v6.iter._M_node;
    __last = std::vector<unsigned int>::end(&config->ban_dungeon_list)._M_current;
    v9._M_current = std::vector<unsigned int>::begin(&config->ban_dungeon_list)._M_current;
    v10.container = container;
    v10.iter._M_node = v8;
    std::copy<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,std::insert_iterator<std::set<unsigned int>>>(
      v9,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last,
      v10);
    std::set<unsigned int>::insert(&this->tower_gadgets_set_, &config->gadget_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 357: range 0000000012AE7236-0000000012AE73F7
const data::ActivityChessMapExcelConfig *__fastcall ActivityChessExcelConfigMgr::getMapConfigByDungeonId(
        const ActivityChessExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::ActivityChessMapExcelConfig> *p_chess_map_config_map; // rdx
  std::map<unsigned int,data::ActivityChessMapExcelConfig> *v6; // rdx
  bool v7; // al
  const data::ActivityChessMapExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:356 64 8 8 iter:358 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChessExcelConfigMgr::getMapConfigByDungeonId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_chess_map_config_map = &this->chess_map_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::map<unsigned int,data::ActivityChessMapExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::ActivityChessMapExcelConfig>::find(
                                                                                             p_chess_map_config_map,
                                                                                             (const std::map<unsigned int,data::ActivityChessMapExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->chess_map_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::ActivityChessMapExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::ActivityChessMapExcelConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig> > *const)(v2 + 64))->second;
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

// Line 368: range 0000000012AE73F8-0000000012AE75B9
const std::map<unsigned int,std::vector<unsigned int>> *__fastcall ActivityChessExcelConfigMgr::getNormalCardPoolMapByChessLevel(
        const ActivityChessExcelConfigMgr *const this,
        __int64 chess_level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>> *p_level_2_normal_card_pool_map; // rdx
  std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>> *v6; // rdx
  bool v7; // al
  const std::map<unsigned int,std::vector<unsigned int>> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 chess_level:367 64 8 8 iter:369 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChessExcelConfigMgr::getNormalCardPoolMapByChessLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = chess_level;
  p_level_2_normal_card_pool_map = &this->level_2_normal_card_pool_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, chess_level);
  *(std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::find(p_level_2_normal_card_pool_map, (const std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::key_type *)(v2 + 48));
  v6 = &this->level_2_normal_card_pool_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > > *const)(v2 + 64))->second;
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

// Line 379: range 0000000012AE75BA-0000000012AE777B
const std::map<unsigned int,unsigned int> *__fastcall ActivityChessExcelConfigMgr::getQualityWeightMapByChessLevel(
        const ActivityChessExcelConfigMgr *const this,
        __int64 chess_level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *p_level_2_quality_weight_map; // rdx
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *v6; // rdx
  bool v7; // al
  const std::map<unsigned int,unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 chess_level:378 64 8 8 iter:380 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChessExcelConfigMgr::getQualityWeightMapByChessLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = chess_level;
  p_level_2_quality_weight_map = &this->level_2_quality_weight_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, chess_level);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                               p_level_2_quality_weight_map,
                                                                                               (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->level_2_quality_weight_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v2 + 64))->second;
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

// Line 390: range 0000000012AE777C-0000000012AE793D
const std::map<unsigned int,unsigned int> *__fastcall ActivityChessExcelConfigMgr::getCurseCardWeightMapByChessLevel(
        const ActivityChessExcelConfigMgr *const this,
        __int64 chess_level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *p_level_2_curse_card_weight_map; // rdx
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *v6; // rdx
  bool v7; // al
  const std::map<unsigned int,unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 chess_level:389 64 8 8 iter:391 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChessExcelConfigMgr::getCurseCardWeightMapByChessLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = chess_level;
  p_level_2_curse_card_weight_map = &this->level_2_curse_card_weight_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, chess_level);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                               p_level_2_curse_card_weight_map,
                                                                                               (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->level_2_curse_card_weight_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v2 + 64))->second;
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

// Line 401: range 0000000012AE793E-0000000012AE79B0
uint32_t __cdecl ActivityChessExcelConfigMgr::queryMaxTowerNumByDungeonId(
        const ActivityChessExcelConfigMgr *const this,
        uint32_t dungeon_id)
{
  const data::ActivityChessMapExcelConfig *map_config_ptr; // [rsp+18h] [rbp-8h]

  map_config_ptr = ActivityChessExcelConfigMgr::getMapConfigByDungeonId(this, dungeon_id);
  if ( !map_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&map_config_ptr->build_gear_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&map_config_ptr->build_gear_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&map_config_ptr->build_gear_limit);
  }
  return map_config_ptr->build_gear_limit;
};

// Line 411: range 0000000012AE79B2-0000000012AE7BC8
__int64 __fastcall ActivityChessExcelConfigMgr::isTowerBannedInDungeon(
        const ActivityChessExcelConfigMgr *const this,
        uint32_t gear_id,
        uint32_t dungeon_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 result; // rax
  char *v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // rdx
  char v10; // al
  common::tools::transcribe_cv_t_5 *set_pointer; // [rsp+18h] [rbp-A8h]
  char v13[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 1 9 <unknown> 48 2 9 <unknown> 64 2 9 <unknown> 80 4 11 gear_id:410 96 4 14 dungeon_id:410";
  *(_QWORD *)(v3 + 16) = ActivityChessExcelConfigMgr::isTowerBannedInDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234687999;
  v5[536862722] = -234556926;
  v5[536862723] = -202116348;
  *(_DWORD *)(v3 + 80) = gear_id;
  *(_DWORD *)(v3 + 96) = dungeon_id;
  set_pointer = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::set<unsigned int>> const>(
                  &this->gear_ban_dungeons_map_,
                  (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 80));
  if ( set_pointer )
  {
    v7 = (char *)(v3 + 96);
    LOBYTE(v8) = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                   set_pointer,
                   (const unsigned int *)(v3 + 96));
    v9 = v8;
    v10 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( v10 < 0 )
    {
      LOBYTE(v7) = v10 != 0;
      __asan_report_store1(v3 + 32, v7, v9);
    }
    *(_BYTE *)(v3 + 32) = v9;
    std::optional<bool>::optional<bool,true>((std::optional<bool> *const)(v3 + 64), (bool *)(v3 + 32));
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 1 )
      __asan_report_load2(v3 + 64);
    result = *(unsigned __int16 *)(v3 + 64);
  }
  else
  {
    std::optional<bool>::optional((std::optional<bool> *const)(v3 + 48), (std::nullopt_t)(v3 + 80));
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 1 )
      __asan_report_load2(v3 + 48);
    result = *(unsigned __int16 *)(v3 + 48);
  }
  if ( v13 == (char *)v3 )
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

// Line 421: range 0000000012AE7BCA-0000000012AE7BDC
int32_t __cdecl ActivityChessExcelConfigMgr::checkChessCardConfig(
        ActivityChessExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 426: range 0000000012AE7BDE-0000000012AEC2BF
int32_t __cdecl ActivityChessExcelConfigMgr::checkCardEffect(
        const ActivityChessExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr,
        const data::ChessCardEffect *effect)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  unsigned int *v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
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
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
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
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rax
  common::milog::MiLogStream *v116; // rax
  common::milog::MiLogStream *v117; // rax
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // rax
  common::milog::MiLogStream *v121; // rax
  common::milog::MiLogStream *v122; // rax
  common::milog::MiLogStream *v123; // rax
  common::milog::MiLogStream *v124; // rax
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // rax
  common::milog::MiLogStream *v127; // rax
  common::milog::MiLogStream *v128; // rax
  common::milog::MiLogStream *v129; // rax
  common::milog::MiLogStream *v130; // rax
  common::milog::MiLogStream *v131; // rax
  common::milog::MiLogStream *v132; // rax
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rax
  common::milog::MiLogStream *v135; // rax
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // rax
  common::milog::MiLogStream *v140; // rax
  common::milog::MiLogStream *v141; // rax
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // rax
  common::milog::MiLogStream *v144; // rax
  common::milog::MiLogStream *v145; // rax
  common::milog::MiLogStream *v146; // rax
  common::milog::MiLogStream *v147; // rax
  common::milog::MiLogStream *v148; // rax
  common::milog::MiLogStream *v149; // rax
  common::milog::MiLogStream *v150; // rax
  common::milog::MiLogStream *v151; // rax
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v153; // rax
  common::milog::MiLogStream *v154; // rax
  common::milog::MiLogStream *v155; // rax
  common::milog::MiLogStream *v156; // rax
  common::milog::MiLogStream *v157; // rax
  common::milog::MiLogStream *v158; // rax
  common::milog::MiLogStream *v159; // rax
  common::milog::MiLogStream *v160; // rax
  common::milog::MiLogStream *v161; // rax
  common::milog::MiLogStream *v162; // rax
  common::milog::MiLogStream *v163; // rax
  common::milog::MiLogStream *v164; // rax
  common::milog::MiLogStream *v165; // rax
  common::milog::MiLogStream *v166; // rax
  common::milog::MiLogStream *v167; // rax
  common::milog::MiLogStream *v168; // rax
  common::milog::MiLogStream *v169; // rax
  common::milog::MiLogStream *v170; // rax
  common::milog::MiLogStream *v171; // rax
  common::milog::MiLogStream *v172; // rax
  common::milog::MiLogStream *v173; // rax
  common::milog::MiLogStream *v174; // rax
  common::milog::MiLogStream *v175; // rax
  common::milog::MiLogStream *v176; // rax
  common::milog::MiLogStream *v177; // rax
  common::milog::MiLogStream *v178; // rax
  common::milog::MiLogStream *v179; // rax
  common::milog::MiLogStream *v180; // rax
  common::milog::MiLogStream *v181; // rax
  common::milog::MiLogStream *v182; // rax
  common::milog::MiLogStream *v183; // rax
  common::milog::MiLogStream *v184; // rax
  common::milog::MiLogStream *v185; // rax
  common::milog::MiLogStream *v186; // rax
  common::milog::MiLogStream *v187; // rax
  common::milog::MiLogStream *v188; // rax
  common::milog::MiLogStream *v189; // rax
  common::milog::MiLogStream *v190; // rax
  common::milog::MiLogStream *v191; // rax
  common::milog::MiLogStream *v192; // rax
  common::milog::MiLogStream *v193; // rax
  common::milog::MiLogStream *v194; // rax
  common::milog::MiLogStream *v195; // rax
  common::milog::MiLogStream *v196; // rax
  common::milog::MiLogStream *v197; // rax
  common::milog::MiLogStream *v198; // rax
  int32_t ret; // [rsp+2Ch] [rbp-A34h]
  std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-A30h]
  const JsonConfigMgr *json_config_mgr; // [rsp+38h] [rbp-A28h]
  char v205[2592]; // [rsp+40h] [rbp-A20h] BYREF

  v3 = (unsigned __int64)v205;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(2560LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "41 48 4 13 gadget_id:430 64 8 15 __for_begin:430 96 8 13 __for_end:430 128 32 9 <unknown> 192 32"
                        " 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 "
                        "9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9"
                        " <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32"
                        " 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 147"
                        "2 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown>"
                        " 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9 <unkn"
                        "own> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 2368 32 9 <"
                        "unknown> 2432 32 9 <unknown> 2496 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChessExcelConfigMgr::checkCardEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -218959118;
  v5[536862753] = -218959118;
  v5[536862755] = -218959118;
  v5[536862757] = -218959118;
  v5[536862759] = -218959118;
  v5[536862761] = -218959118;
  v5[536862763] = -218959118;
  v5[536862765] = -218959118;
  v5[536862767] = -218959118;
  v5[536862769] = -218959118;
  v5[536862771] = -218959118;
  v5[536862773] = -218959118;
  v5[536862775] = -218959118;
  v5[536862777] = -218959118;
  v5[536862779] = -218959118;
  v5[536862781] = -218959118;
  v5[536862783] = -218959118;
  v5[536862785] = -218959118;
  v5[536862787] = -218959118;
  v5[536862789] = -218959118;
  v5[536862791] = -218959118;
  v5[536862793] = -218959118;
  v5[536862795] = -218959118;
  v5[536862797] = -218959118;
  v5[536862799] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&effect->target_type);
  }
  if ( effect->target_type == CHESS_CARD_TARGET_GADGETS )
  {
    __for_range = &effect->target_param_list;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, txt_config_mgr);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 64) = std::vector<unsigned int>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, txt_config_mgr);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::end(__for_range);
    while ( 1 )
    {
      v6 = (char *)(v3 + 96);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96)) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
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
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
              &this->tower_gadgets_set_,
              (const unsigned int *)(v3 + 48)) )
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          434);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 128),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])byte_1AA27E40);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v13, (const char (*)[27])byte_1AA27E80);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
        *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  }
  json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&effect->effect_type);
  }
  switch ( effect->effect_type )
  {
    case CHESS_CARD_EFFECT_DEFAULT:
    case CHESS_CARD_EFFECT_SET_HOME_HP:
    case CHESS_CARD_EFFECT_MOD_KILL_POINTS:
      break;
    case CHESS_CARD_EFFECT_SET_SGV:
      if ( !JsonConfigMgr::isAbilityStringExist(json_config_mgr, &effect->effect_str_param) )
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          449);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])byte_1AA27EC0);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &effect->effect_index);
        v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])byte_1AA27F00);
        v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &effect->effect_str_param);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])byte_1AA27300);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( !effect->effect_param1 )
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          454);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])byte_1AA27EC0);
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &effect->effect_index);
        v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" sgv:");
        v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, &effect->effect_str_param);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])byte_1AA27F80);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_MOD_COST:
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( !effect->effect_param1 )
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          463);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])byte_1AA27EC0);
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &effect->effect_index);
        v27 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v26, (const char (*)[27])byte_1AA27FC0);
        v28 = common::milog::MiLogStream::operator<<<int,(int *)0>(v27, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v28, (const char (*)[12])byte_1AA28000);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_MOD_REFUND:
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( !effect->effect_param1 )
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          472);
        v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v30 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v29, (const char (*)[8])byte_1AA27EC0);
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &effect->effect_index);
        v32 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v31, (const char (*)[27])byte_1AA28040);
        v33 = common::milog::MiLogStream::operator<<<int,(int *)0>(v32, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v33, (const char (*)[12])byte_1AA28000);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_ADD_GEAR_NUM:
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( !effect->effect_param1 )
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          487);
        v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v34, (const char (*)[8])byte_1AA27EC0);
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &effect->effect_index);
        v37 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v36, (const char (*)[21])byte_1AA28080);
        v38 = common::milog::MiLogStream::operator<<<int,(int *)0>(v37, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v38, (const char (*)[12])byte_1AA28000);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_KILL_GEARS:
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( effect->effect_param1 <= 0 )
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          496);
        v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v40 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v39, (const char (*)[8])byte_1AA27EC0);
        v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &effect->effect_index);
        v42 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v41, (const char (*)[24])byte_1AA280C0);
        v43 = common::milog::MiLogStream::operator<<<int,(int *)0>(v42, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v43, (const char (*)[15])byte_1AA28100);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_GRANT_POINTS:
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( effect->effect_param1 <= 0 )
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          505);
        v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v45 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v44, (const char (*)[8])byte_1AA27EC0);
        v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &effect->effect_index);
        v47 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v46, (const char (*)[18])byte_1AA28140);
        v48 = common::milog::MiLogStream::operator<<<int,(int *)0>(v47, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v48, (const char (*)[15])byte_1AA28100);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_RANDOM_REMOVE:
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( !data::isValidChessCardType(effect->effect_param1) )
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          514);
        v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 640),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v50 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v49, (const char (*)[8])byte_1AA27EC0);
        v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, &effect->effect_index);
        v52 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v51, (const char (*)[21])byte_1AA28180);
        v53 = common::milog::MiLogStream::operator<<<int,(int *)0>(v52, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v53, (const char (*)[11])byte_1AA281C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
        *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&effect->effect_param2);
      }
      if ( effect->effect_param2 <= 0 )
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          519);
        v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 704),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v55 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v54, (const char (*)[8])byte_1AA27EC0);
        v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &effect->effect_index);
        v57 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v56, (const char (*)[18])byte_1AA28200);
        v58 = common::milog::MiLogStream::operator<<<int,(int *)0>(v57, &effect->effect_param2);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v58, (const char (*)[15])byte_1AA28100);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_POINTS_ON_ROUND_END:
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( effect->effect_param1 <= 0 )
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          528);
        v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 768),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v60 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v59, (const char (*)[8])byte_1AA27EC0);
        v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &effect->effect_index);
        v62 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v61, (const char (*)[21])byte_1AA28240);
        v63 = common::milog::MiLogStream::operator<<<int,(int *)0>(v62, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v63, (const char (*)[15])byte_1AA28100);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_SGV_PICK_CARD_LTE:
      if ( !JsonConfigMgr::isAbilityStringExist(json_config_mgr, &effect->effect_str_param) )
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          537);
        v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 832),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v65 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v64, (const char (*)[8])byte_1AA27EC0);
        v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, &effect->effect_index);
        v67 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v66, (const char (*)[15])byte_1AA27F00);
        v68 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v67, &effect->effect_str_param);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v68, (const char (*)[10])byte_1AA27300);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
        *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( !effect->effect_param1 )
      {
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          542);
        v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 896),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v70 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v69, (const char (*)[8])byte_1AA27EC0);
        v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, &effect->effect_index);
        v72 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v71, (const char (*)[6])" sgv:");
        v73 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v72, &effect->effect_str_param);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v73, (const char (*)[15])byte_1AA27F80);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
        *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&effect->effect_param2);
      }
      if ( effect->effect_param2 < 0 )
      {
        *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 960, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 960),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          547);
        v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 960),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v75 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v74, (const char (*)[8])byte_1AA27EC0);
        v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v75, &effect->effect_index);
        v77 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v76, (const char (*)[15])byte_1AA28280);
        v78 = common::milog::MiLogStream::operator<<<int,(int *)0>(v77, &effect->effect_param2);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v78, (const char (*)[15])byte_1AA282C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_MOD_CARD_COST:
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&effect->effect_param2);
      }
      if ( !data::isValidChessCardType(effect->effect_param2) )
      {
        *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1024) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1024, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1024),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          556);
        v79 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1024),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v80 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v79, (const char (*)[8])byte_1AA27EC0);
        v81 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v80, &effect->effect_index);
        v82 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v81, (const char (*)[21])byte_1AA28180);
        v83 = common::milog::MiLogStream::operator<<<int,(int *)0>(v82, &effect->effect_param2);
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v83, (const char (*)[11])byte_1AA281C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
        *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( !effect->effect_param1 )
      {
        *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1088) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1088, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1088),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          561);
        v84 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1088),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v85 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v84, (const char (*)[8])byte_1AA27EC0);
        v86 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v85, &effect->effect_index);
        v87 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v86, (const char (*)[27])byte_1AA28300);
        v88 = common::milog::MiLogStream::operator<<<int,(int *)0>(v87, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v88, (const char (*)[12])byte_1AA28340);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1088));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_CARDS_TYPE_COUNT_NO_COST:
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( !data::isValidChessCardType(effect->effect_param1) )
      {
        *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1152) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1152, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1152),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          570);
        v89 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1152),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v90 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v89, (const char (*)[8])byte_1AA27EC0);
        v91 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v90, &effect->effect_index);
        v92 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v91, (const char (*)[21])byte_1AA28380);
        v93 = common::milog::MiLogStream::operator<<<int,(int *)0>(v92, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v93, (const char (*)[11])byte_1AA281C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1152));
        *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param3);
      }
      if ( !data::isValidChessCardQualityType(effect->effect_param3) )
      {
        *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1216) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1216, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1216),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          575);
        v94 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1216),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v95 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v94, (const char (*)[8])byte_1AA27EC0);
        v96 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v95, &effect->effect_index);
        v97 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v96, (const char (*)[21])byte_1AA283C0);
        v98 = common::milog::MiLogStream::operator<<<int,(int *)0>(v97, &effect->effect_param3);
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v98, (const char (*)[11])byte_1AA281C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1216));
        *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&effect->effect_param2);
      }
      if ( effect->effect_param2 < 0 )
      {
        *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1280) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1280, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1280),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          580);
        v99 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1280),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v100 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v99, (const char (*)[8])byte_1AA27EC0);
        v101 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v100, &effect->effect_index);
        v102 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v101, (const char (*)[15])byte_1AA28400);
        v103 = common::milog::MiLogStream::operator<<<int,(int *)0>(v102, &effect->effect_param2);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v103, (const char (*)[17])byte_1AA28440);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1280));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_MOD_CANDIDATE_CARDS:
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( !effect->effect_param1 )
      {
        *(_DWORD *)(((v3 + 1344) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1344) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1344, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1344),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          589);
        v104 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1344),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v105 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v104, (const char (*)[8])byte_1AA27EC0);
        v106 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v105, &effect->effect_index);
        v107 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v106, (const char (*)[15])byte_1AA28480);
        v108 = common::milog::MiLogStream::operator<<<int,(int *)0>(v107, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v108, (const char (*)[12])byte_1AA28340);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1344));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_MOD_QUALITY_PROB:
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( effect->effect_param1 < 0 )
      {
        *(_DWORD *)(((v3 + 1408) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1408) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1439) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1439) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1408, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1408),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          598);
        v109 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1408),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v110 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v109, (const char (*)[8])byte_1AA27EC0);
        v111 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v110, &effect->effect_index);
        v112 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v111, (const char (*)[18])byte_1AA284C0);
        v113 = common::milog::MiLogStream::operator<<<int,(int *)0>(v112, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v113, (const char (*)[17])byte_1AA28440);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1408));
        *(_DWORD *)(((v3 + 1408) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&effect->effect_param2);
      }
      if ( effect->effect_param2 < 0 )
      {
        *(_DWORD *)(((v3 + 1472) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1472) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1472, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1472),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          603);
        v114 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1472),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v115 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v114, (const char (*)[8])byte_1AA27EC0);
        v116 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v115, &effect->effect_index);
        v117 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v116, (const char (*)[17])byte_1AA28500);
        v118 = common::milog::MiLogStream::operator<<<int,(int *)0>(v117, &effect->effect_param2);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v118, (const char (*)[17])byte_1AA28440);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1472));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_FREE_CARD_REFRESH:
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( effect->effect_param1 <= 0 )
      {
        *(_DWORD *)(((v3 + 1536) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1536) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1567) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1567) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1536, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1536),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          612);
        v119 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1536),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v120 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v119, (const char (*)[8])byte_1AA27EC0);
        v121 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v120, &effect->effect_index);
        v122 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v121, (const char (*)[15])byte_1AA28540);
        v123 = common::milog::MiLogStream::operator<<<int,(int *)0>(v122, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v123, (const char (*)[15])byte_1AA28100);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1536));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_MOD_REFRESH_COST:
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( !effect->effect_param1 )
      {
        *(_DWORD *)(((v3 + 1600) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1600) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1600, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1600),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          621);
        v124 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1600),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v125 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v124, (const char (*)[8])byte_1AA27EC0);
        v126 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v125, &effect->effect_index);
        v127 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v126, (const char (*)[33])byte_1AA28580);
        v128 = common::milog::MiLogStream::operator<<<int,(int *)0>(v127, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v128, (const char (*)[12])byte_1AA28000);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1600));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_CARDS_COUNT_STACK_SGV:
      if ( !JsonConfigMgr::isAbilityStringExist(json_config_mgr, &effect->effect_str_param) )
      {
        *(_DWORD *)(((v3 + 1664) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1664) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1695) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1695) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1664, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1664),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          630);
        v129 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1664),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v130 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v129, (const char (*)[8])byte_1AA27EC0);
        v131 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v130, &effect->effect_index);
        v132 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v131, (const char (*)[15])byte_1AA27F00);
        v133 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v132, &effect->effect_str_param);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v133, (const char (*)[10])byte_1AA27300);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1664));
        *(_DWORD *)(((v3 + 1664) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( !effect->effect_param1 )
      {
        *(_DWORD *)(((v3 + 1728) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1728) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1759) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 1759) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1728, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1728),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          635);
        v134 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1728),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v135 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v134, (const char (*)[8])byte_1AA27EC0);
        v136 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v135, &effect->effect_index);
        v137 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v136, (const char (*)[6])" sgv:");
        v138 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v137, &effect->effect_str_param);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v138, (const char (*)[27])byte_1AA285E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1728));
        *(_DWORD *)(((v3 + 1728) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&effect->effect_param2);
      }
      if ( effect->effect_param2 <= 0 )
      {
        *(_DWORD *)(((v3 + 1792) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1792) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1823) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1823) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1792, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1792),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          640);
        v139 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1792),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v140 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v139, (const char (*)[8])byte_1AA27EC0);
        v141 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v140, &effect->effect_index);
        v142 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v141, (const char (*)[15])byte_1AA28620);
        v143 = common::milog::MiLogStream::operator<<<int,(int *)0>(v142, &effect->effect_param2);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v143, (const char (*)[15])byte_1AA28100);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1792));
        *(_DWORD *)(((v3 + 1792) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param3);
      }
      if ( effect->effect_param3 <= 0 )
      {
        *(_DWORD *)(((v3 + 1856) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1856) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1887) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1887) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1856, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1856),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          645);
        v144 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1856),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v145 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v144, (const char (*)[8])byte_1AA27EC0);
        v146 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v145, &effect->effect_index);
        v147 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v146, (const char (*)[15])byte_1AA28660);
        v148 = common::milog::MiLogStream::operator<<<int,(int *)0>(v147, &effect->effect_param3);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v148, (const char (*)[15])byte_1AA28100);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1856));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_POINTS_STACK_SGV:
      if ( !JsonConfigMgr::isAbilityStringExist(json_config_mgr, &effect->effect_str_param) )
      {
        *(_DWORD *)(((v3 + 1920) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1920) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1951) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1951) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1920, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1920),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          654);
        v149 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1920),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v150 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v149, (const char (*)[8])byte_1AA27EC0);
        v151 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v150, &effect->effect_index);
        v152 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v151, (const char (*)[15])byte_1AA27F00);
        v153 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v152, &effect->effect_str_param);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v153, (const char (*)[10])byte_1AA27300);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1920));
        *(_DWORD *)(((v3 + 1920) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&effect->effect_param2);
      }
      if ( !effect->effect_param2 )
      {
        *(_DWORD *)(((v3 + 1984) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1984) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 2015) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 2015) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1984, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1984),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          659);
        v154 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1984),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v155 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v154, (const char (*)[8])byte_1AA27EC0);
        v156 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v155, &effect->effect_index);
        v157 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v156, (const char (*)[6])" sgv:");
        v158 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v157, &effect->effect_str_param);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v158, (const char (*)[27])byte_1AA285E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1984));
        *(_DWORD *)(((v3 + 1984) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( effect->effect_param1 <= 0 )
      {
        *(_DWORD *)(((v3 + 2048) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 2048) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 2079) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 2079) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 2048, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 2048),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          664);
        v159 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 2048),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v160 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v159, (const char (*)[8])byte_1AA27EC0);
        v161 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v160, &effect->effect_index);
        v162 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v161, (const char (*)[24])byte_1AA286A0);
        v163 = common::milog::MiLogStream::operator<<<int,(int *)0>(v162, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v163, (const char (*)[15])byte_1AA28100);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2048));
        *(_DWORD *)(((v3 + 2048) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param3);
      }
      if ( effect->effect_param3 <= 0 )
      {
        *(_DWORD *)(((v3 + 2112) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 2112) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 2143) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 2143) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 2112, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 2112),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          669);
        v164 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 2112),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v165 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v164, (const char (*)[8])byte_1AA27EC0);
        v166 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v165, &effect->effect_index);
        v167 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v166, (const char (*)[15])byte_1AA28620);
        v168 = common::milog::MiLogStream::operator<<<int,(int *)0>(v167, &effect->effect_param3);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v168, (const char (*)[15])byte_1AA28100);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2112));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_CARD_TYPE_STACK_SGV:
      if ( !JsonConfigMgr::isAbilityStringExist(json_config_mgr, &effect->effect_str_param) )
      {
        *(_DWORD *)(((v3 + 2176) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 2176) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 2207) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 2207) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 2176, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 2176),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          678);
        v169 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 2176),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v170 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v169, (const char (*)[8])byte_1AA27EC0);
        v171 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v170, &effect->effect_index);
        v172 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v171, (const char (*)[15])byte_1AA27F00);
        v173 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v172, &effect->effect_str_param);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v173, (const char (*)[10])byte_1AA27300);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2176));
        *(_DWORD *)(((v3 + 2176) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)effect + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effect->effect_param2 >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&effect->effect_param2);
      }
      if ( !effect->effect_param2 )
      {
        *(_DWORD *)(((v3 + 2240) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 2240) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 2271) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 2271) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 2240, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 2240),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          683);
        v174 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 2240),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v175 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v174, (const char (*)[8])byte_1AA27EC0);
        v176 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v175, &effect->effect_index);
        v177 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v176, (const char (*)[6])" sgv:");
        v178 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v177, &effect->effect_str_param);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v178, (const char (*)[27])byte_1AA285E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2240));
        *(_DWORD *)(((v3 + 2240) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( !data::isValidChessCardType(effect->effect_param1) )
      {
        *(_DWORD *)(((v3 + 2304) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 2304) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 2335) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 2335) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 2304, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 2304),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          688);
        v179 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 2304),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v180 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v179, (const char (*)[8])byte_1AA27EC0);
        v181 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v180, &effect->effect_index);
        v182 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v181, (const char (*)[21])byte_1AA28380);
        v183 = common::milog::MiLogStream::operator<<<int,(int *)0>(v182, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v183, (const char (*)[11])byte_1AA281C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2304));
        *(_DWORD *)(((v3 + 2304) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param3 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param3);
      }
      if ( effect->effect_param3 <= 0 )
      {
        *(_DWORD *)(((v3 + 2368) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 2368) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 2399) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 2399) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 2368, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 2368),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          693);
        v184 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 2368),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v185 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v184, (const char (*)[8])byte_1AA27EC0);
        v186 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v185, &effect->effect_index);
        v187 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v186, (const char (*)[15])byte_1AA28620);
        v188 = common::milog::MiLogStream::operator<<<int,(int *)0>(v187, &effect->effect_param3);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v188, (const char (*)[15])byte_1AA28100);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2368));
        ret = -1;
      }
      break;
    case CHESS_CARD_EFFECT_CARD_TYPE_FORCE_CURSE:
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( !data::isValidChessCardType(effect->effect_param1) )
      {
        *(_DWORD *)(((v3 + 2432) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 2432) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 2463) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 2463) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 2432, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 2432),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "checkCardEffect",
          702);
        v189 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 2432),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v190 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v189, (const char (*)[8])byte_1AA27EC0);
        v191 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v190, &effect->effect_index);
        v192 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v191, (const char (*)[21])byte_1AA28380);
        v193 = common::milog::MiLogStream::operator<<<int,(int *)0>(v192, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v193, (const char (*)[11])byte_1AA281C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2432));
        ret = -1;
      }
      break;
    default:
      *(_DWORD *)(((v3 + 2496) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 2496) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 2527) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 2527) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 2496, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 2496),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
        "checkCardEffect",
        709);
      v194 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 2496),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v195 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v194, (const char (*)[8])byte_1AA27EC0);
      v196 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v195, &effect->effect_index);
      v197 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v196, (const char (*)[9])byte_1AA286E0);
      v198 = common::milog::MiLogStream::operator<<<data::ChessCardEffectType,(data::ChessCardEffectType*)0>(
               v197,
               &effect->effect_type);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v198, (const char (*)[10])byte_1AA1B080);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2496));
      ret = -1;
      break;
  }
  if ( v205 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8054) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF805C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF806C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8074) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF807C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8084) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8094) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF809C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80A4) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80AC) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80B4) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80BC) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80C4) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80CC) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80D4) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80DC) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80E4) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80EC) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80F4) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80FC) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8104) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF810C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8114) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF811C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8124) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF812C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8134) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF813C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 2560LL, v205);
  }
  return ret;
};

// Line 717: range 0000000012AEC2C0-0000000012AEC94F
int32_t __cdecl ActivityChessExcelConfigMgr::finalChessCardConfig(
        ActivityChessExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  TxtConfigMgr *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  std::vector<data::ChessCardEffect>::size_type v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-14Ch]
  data::ActivityChessCardExcelConfigMap *__for_range; // [rsp+18h] [rbp-148h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false,false>::reference v19; // [rsp+20h] [rbp-140h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityChessCardExcelConfig> >::type *id; // [rsp+28h] [rbp-138h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityChessCardExcelConfig> >::type *config; // [rsp+30h] [rbp-130h]
  const data::ChessCardEffect *effect; // [rsp+38h] [rbp-128h]
  char v23[288]; // [rsp+40h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:719 64 8 13 __for_end:719 96 8 5 i:726 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChessExcelConfigMgr::finalChessCardConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->activity_chess_card_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false> *)(v2 + 64)) )
  {
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::ActivityChessCardExcelConfig>(v19);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityChessCardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityChessCardExcelConfig>(v19);
    v5 = txt_config_mgr;
    if ( ActivityChessExcelConfigMgr::checkCardEffect(this, txt_config_mgr, &config->effect) )
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
        "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
        "finalChessCardConfig",
        723);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])byte_1AA28840);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
      v5 = (TxtConfigMgr *)byte_1AA28880;
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v8, (const char (*)[24])byte_1AA28880);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    for ( *(_QWORD *)(v2 + 96) = 0LL; ; ++*(_QWORD *)(v2 + 96) )
    {
      v9 = std::vector<data::ChessCardEffect>::size(&config->extra_effect_list);
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 96);
      if ( v9 <= *(_QWORD *)(v2 + 96) )
        break;
      effect = std::vector<data::ChessCardEffect>::operator[](&config->extra_effect_list, *(_QWORD *)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_type);
      }
      if ( effect->effect_type && ActivityChessExcelConfigMgr::checkCardEffect(this, txt_config_mgr, effect) )
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
          "./src/txt_data_manual/ActivityChessExcelConfig.cpp",
          "finalChessCardConfig",
          735);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])byte_1AA28840);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
        v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])byte_1AA288C0);
        v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v13,
                (const unsigned __int64 *)(v2 + 96));
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])byte_1AA28900);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 96);
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v23 == (char *)v2 )
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
