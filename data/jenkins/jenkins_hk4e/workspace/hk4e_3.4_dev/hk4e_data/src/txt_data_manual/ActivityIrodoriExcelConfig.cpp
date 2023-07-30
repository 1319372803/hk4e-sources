// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityIrodoriExcelConfig.cpp

// Line 27: range 0000000012C56C6C-0000000012C57981
int32_t __cdecl ActivityIrodoriExcelConfigMgr::checkConfig(
        ActivityIrodoriExcelConfigMgr *const this,
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
  char v16[704]; // [rsp+10h] [rbp-2C0h] BYREF

  v2 = (common::milog::MiLogStream *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"10 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityIrodoriExcelConfigMgr::checkConfig;
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
  v4[536862740] = -202116109;
  if ( ActivityIrodoriExcelConfigMgr::checkIrodoriFlowerGroupExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "checkConfig",
      30);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v5,
      (const char (*)[42])"checkIrodoriFlowerGroupExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::checkIrodoriFlowerThemeExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "checkConfig",
      35);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v7,
      (const char (*)[42])"checkIrodoriFlowerThemeExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::checkIrodoriChessGearExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "checkConfig",
      40);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v8,
      (const char (*)[40])"checkIrodoriChessGearExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::checkIrodoriChessLevelExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "checkConfig",
      45);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v9,
      (const char (*)[41])"checkIrodoriChessLevelExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::checkIrodoriChessMapExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "checkConfig",
      50);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v10,
      (const char (*)[39])"checkIrodoriChessMapExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::checkIrodoriChessMapPointExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "checkConfig",
      55);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v11,
      (const char (*)[44])"checkIrodoriChessMapPointExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::checkIrodoriChessDisorderExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "checkConfig",
      60);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v12,
      (const char (*)[44])"checkIrodoriChessDisorderExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::checkIrodoriChessCardExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[15] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[15].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[15].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[15], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "checkConfig",
      65);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 15,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v13,
      (const char (*)[40])"checkIrodoriChessCardExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 15);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::checkIrodoriPoetryExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "checkConfig",
      70);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 17,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v14,
      (const char (*)[37])"checkIrodoriPoetryExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 17);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::checkIrodoriMasterLevelExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "checkConfig",
      75);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 19,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v15,
      (const char (*)[42])"checkIrodoriMasterLevelExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 19);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v16 == (char *)v2 )
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
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 82: range 0000000012C57982-0000000012C58562
int32_t __cdecl ActivityIrodoriExcelConfigMgr::rewriteConfig(
        ActivityIrodoriExcelConfigMgr *const this,
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
  char v15[640]; // [rsp+10h] [rbp-280h] BYREF

  v2 = (common::milog::MiLogStream *)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"9 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityIrodoriExcelConfigMgr::rewriteConfig;
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
  v4[536862738] = -202116109;
  if ( ActivityIrodoriExcelConfigMgr::rewriteIrodoriFlowerGroupExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "rewriteConfig",
      85);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v5,
      (const char (*)[44])"rewriteIrodoriFlowerGroupExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::rewriteIrodoriFlowerThemeExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "rewriteConfig",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v7,
      (const char (*)[44])"rewriteIrodoriFlowerThemeExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::rewriteIrodoriChessGearExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "rewriteConfig",
      95);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v8,
      (const char (*)[42])"rewriteIrodoriChessGearExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::rewriteIrodoriChessLevelExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "rewriteConfig",
      100);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      v9,
      (const char (*)[43])"rewriteIrodoriChessLevelExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::rewriteIrodoriChessMapExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "rewriteConfig",
      105);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v10,
      (const char (*)[41])"rewriteIrodoriChessMapExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::rewriteIrodoriChessMapPointExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "rewriteConfig",
      110);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      v11,
      (const char (*)[46])"rewriteIrodoriChessMapPointExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::rewriteIrodoriChessDisorderExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "rewriteConfig",
      115);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      v12,
      (const char (*)[46])"rewriteIrodoriChessDisorderExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::rewriteIrodoriChessCardExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[15] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[15].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 1) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[15].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[15], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "rewriteConfig",
      120);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 15,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v13,
      (const char (*)[42])"rewriteIrodoriChessCardExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 15);
    result = -1;
  }
  else if ( ActivityIrodoriExcelConfigMgr::rewriteIrodoriPoetryExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "rewriteConfig",
      125);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 17,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v14,
      (const char (*)[39])"rewriteIrodoriPoetryExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 17);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v15 == (char *)v2 )
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
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 132: range 0000000012C58564-0000000012C594A9
int32_t __cdecl ActivityIrodoriExcelConfigMgr::finalConfig(
        ActivityIrodoriExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  char *v7; // rsi
  uint32_t activity_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v11; // rax
  unsigned int *v12; // rdx
  __int64 v13; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v14; // rax
  int *v15; // rdx
  char v16; // cl
  _BOOL8 v17; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v18; // rax
  int *v19; // rdx
  int v20; // r14d
  char *v21; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v22; // rax
  _DWORD *v23; // rdx
  char v24; // cl
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  bool is_open_chess_cond; // [rsp+1Bh] [rbp-2E5h]
  int32_t ret; // [rsp+1Ch] [rbp-2E4h]
  uint32_t chess_open_cond_count; // [rsp+20h] [rbp-2E0h]
  NewActivityExcelConfigMgr *new_activity_config_mgr; // [rsp+28h] [rbp-2D8h]
  data::NewActivityScheduleExcelConfigMap *__for_range; // [rsp+30h] [rbp-2D0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false>::reference v37; // [rsp+38h] [rbp-2C8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::NewActivityScheduleExcelConfig> >::type *activity_schedule_config; // [rsp+48h] [rbp-2B8h]
  const data::NewActivityExcelConfig *activity_config_ptr; // [rsp+50h] [rbp-2B0h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+60h] [rbp-2A0h]
  const data::NewActivityCondExcelConfig *cond_config_ptr; // [rsp+68h] [rbp-298h]
  const std::vector<data::NewActivityCond> *__for_range_1; // [rsp+70h] [rbp-290h]
  const data::NewActivityCond *cond; // [rsp+78h] [rbp-288h]
  const std::vector<data::NewActivityExec> *__for_range_2; // [rsp+80h] [rbp-280h]
  const data::NewActivityExec *exec; // [rsp+88h] [rbp-278h]
  char v46[624]; // [rsp+90h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 4 15 activity_id:144 64 8 15 __for_begin:142 96 8 13 __for_end:142 128 8 15 __for_begin:15"
                        "2 160 8 13 __for_end:152 192 8 15 __for_begin:159 224 8 13 __for_end:159 256 8 15 __for_begin:17"
                        "4 288 8 13 __for_end:174 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::finalConfig;
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
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  if ( ActivityIrodoriExcelConfigMgr::finalIrodoriChessCardExcelConfig(this, txt_config_mgr) )
  {
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "finalConfig",
      135);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v5,
      (const char (*)[40])"finalIrodoriChessCardExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    result = -1;
  }
  else
  {
    ret = 0;
    new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    __for_range = &txt_config_mgr->new_activity_config_mgr.new_activity_schedule_excel_config_map;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig>::end(__for_range);
    while ( 1 )
    {
      v7 = (char *)(v2 + 96);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false> *)(v2 + 64),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false> *)(v2 + 96)) )
        break;
      v37 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false> *const)(v2 + 64));
      std::get<0ul,unsigned int const,data::NewActivityScheduleExcelConfig>(v37);
      activity_schedule_config = (std::tuple_element<1,const std::pair<unsigned int const,data::NewActivityScheduleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::NewActivityScheduleExcelConfig>(v37);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((unsigned __int64)&activity_schedule_config->activity_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&activity_schedule_config->activity_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&activity_schedule_config->activity_id);
      }
      activity_id = activity_schedule_config->activity_id;
      v9 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v9 != 0 && v9 <= 3 )
      {
        LOBYTE(v7) = v9 != 0;
        __asan_report_store4(v2 + 48, v7);
      }
      *(_DWORD *)(v2 + 48) = activity_id;
      activity_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
                              new_activity_config_mgr,
                              *(unsigned int *)(v2 + 48));
      if ( activity_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&activity_config_ptr->activity_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)activity_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_config_ptr->activity_type >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&activity_config_ptr->activity_type);
        }
        if ( activity_config_ptr->activity_type == NEW_ACTIVITY_IRODORI )
        {
          chess_open_cond_count = 0;
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 48);
          v10 = *(unsigned int *)(v2 + 48);
          __for_range_0 = NewActivityExcelConfigMgr::getActivityCondSet(new_activity_config_mgr, v10);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 128, v10);
          *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 128) = std::unordered_set<unsigned int>::begin(__for_range_0);
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 160, v10);
          *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 160) = std::unordered_set<unsigned int>::end(__for_range_0);
          while ( std::__detail::operator!=<unsigned int,false>(
                    (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 128),
                    (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 160)) )
          {
            v11 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)(v2 + 128));
            v12 = (unsigned int *)v11;
            if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v11);
            }
            v13 = *v12;
            cond_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityCondExcelConfig(
                                new_activity_config_mgr,
                                v13);
            if ( cond_config_ptr )
            {
              __for_range_1 = &cond_config_ptr->cond;
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 192, v13);
              *(std::vector<data::NewActivityCond>::const_iterator *)(v2 + 192) = std::vector<data::NewActivityCond>::begin(__for_range_1);
              *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 224, v13);
              *(std::vector<data::NewActivityCond>::const_iterator *)(v2 + 224) = std::vector<data::NewActivityCond>::end(__for_range_1);
              while ( __gnu_cxx::operator!=<data::NewActivityCond const*,std::vector<data::NewActivityCond>>(
                        (const __gnu_cxx::__normal_iterator<const data::NewActivityCond*,std::vector<data::NewActivityCond> > *)(v2 + 192),
                        (const __gnu_cxx::__normal_iterator<const data::NewActivityCond*,std::vector<data::NewActivityCond> > *)(v2 + 224)) )
              {
                cond = __gnu_cxx::__normal_iterator<data::NewActivityCond const*,std::vector<data::NewActivityCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::NewActivityCond*,std::vector<data::NewActivityCond> > *const)(v2 + 192));
                if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&cond->type);
                }
                if ( cond->type == NEW_ACTIVITY_COND_DAYS_GREAT_EQUAL && std::vector<int>::size(&cond->param) )
                {
                  v14 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                            &cond->param,
                                                                                            0LL);
                  v15 = v14;
                  v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
                  v17 = v16 != 0;
                  if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
                    __asan_report_load4(v14);
                  if ( *v15 > 0 )
                  {
                    is_open_chess_cond = 0;
                    __for_range_2 = &cond_config_ptr->meet_exec;
                    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v2 + 256, v17);
                    *(std::vector<data::NewActivityExec>::const_iterator *)(v2 + 256) = std::vector<data::NewActivityExec>::begin(__for_range_2);
                    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v2 + 288, v17);
                    *(std::vector<data::NewActivityExec>::const_iterator *)(v2 + 288) = std::vector<data::NewActivityExec>::end(__for_range_2);
                    while ( __gnu_cxx::operator!=<data::NewActivityExec const*,std::vector<data::NewActivityExec>>(
                              (const __gnu_cxx::__normal_iterator<const data::NewActivityExec*,std::vector<data::NewActivityExec> > *)(v2 + 256),
                              (const __gnu_cxx::__normal_iterator<const data::NewActivityExec*,std::vector<data::NewActivityExec> > *)(v2 + 288)) )
                    {
                      exec = __gnu_cxx::__normal_iterator<data::NewActivityExec const*,std::vector<data::NewActivityExec>>::operator*((const __gnu_cxx::__normal_iterator<const data::NewActivityExec*,std::vector<data::NewActivityExec> > *const)(v2 + 256));
                      if ( *(_BYTE *)(((unsigned __int64)&exec->type >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&exec->type >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&exec->type);
                      }
                      if ( exec->type == NEW_ACTIVITY_ACTION_OPEN_IRODORI_CHESS_STAGE )
                      {
                        is_open_chess_cond = 1;
                        break;
                      }
                      __gnu_cxx::__normal_iterator<data::NewActivityExec const*,std::vector<data::NewActivityExec>>::operator++((__gnu_cxx::__normal_iterator<const data::NewActivityExec*,std::vector<data::NewActivityExec> > *const)(v2 + 256));
                    }
                    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                    if ( is_open_chess_cond )
                    {
                      ++chess_open_cond_count;
                      v18 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                                &cond->param,
                                                                                                0LL);
                      v19 = v18;
                      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v18);
                      }
                      v20 = *v19;
                      v21 = (char *)(v2 + 48);
                      v22 = std::unordered_map<unsigned int,unsigned int>::operator[](
                              &this->activity_id_to_chess_open_day_map_,
                              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
                      v23 = v22;
                      v24 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
                      if ( v24 != 0 && (char)(((unsigned __int8)v22 & 7) + 3) >= v24 )
                      {
                        LOBYTE(v21) = v24 != 0;
                        __asan_report_store4(v22, v21);
                      }
                      *v23 = v20;
                    }
                  }
                }
                __gnu_cxx::__normal_iterator<data::NewActivityCond const*,std::vector<data::NewActivityCond>>::operator++((__gnu_cxx::__normal_iterator<const data::NewActivityCond*,std::vector<data::NewActivityCond> > *const)(v2 + 192));
              }
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
            }
            std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)(v2 + 128));
          }
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
          if ( chess_open_cond_count > 1 )
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
              "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
              "finalConfig",
              192);
            v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])byte_1AA62860);
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v26,
                    (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(v27, (const char (*)[69])byte_1AA628A0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          if ( !chess_open_cond_count )
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
              "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
              "finalConfig",
              197);
            v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 448),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v29 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v28, (const char (*)[8])byte_1AA62860);
            v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v29,
                    (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v30, (const char (*)[60])byte_1AA62920);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
            *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false> *const)(v2 + 64));
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
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
      1u,
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "finalConfig",
      201);
    v31 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            (common::milog::MiLogStream *const)(v2 + 512),
            (const char (*)[40])byte_1AA62980);
    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v31, &this->activity_id_to_chess_open_day_map_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
    result = ret;
  }
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
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

// Line 206: range 0000000012C594AA-0000000012C59CEC
int32_t __cdecl ActivityIrodoriExcelConfigMgr::checkIrodoriFlowerGroupExcelConfig(
        const ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  unsigned __int64 v7; // rax
  std::pair<std::_Rb_tree_const_iterator<std::string >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  _BOOL4 v17; // r15d
  unsigned __int64 v18; // rax
  int v19; // eax
  int32_t result; // eax
  data::IrodoriFlowerGroupExcelConfigMap *__for_range; // [rsp+28h] [rbp-1E8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig>,false,false>::reference v23; // [rsp+30h] [rbp-1E0h]
  std::tuple_element<0,std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig> >::type *group_id; // [rsp+38h] [rbp-1D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig> >::type *group_excel_config; // [rsp+40h] [rbp-1D0h]
  const std::vector<data::IrodoriFlowerConfig> *__for_range_0; // [rsp+48h] [rbp-1C8h]
  const data::IrodoriFlowerConfig *flower_config; // [rsp+50h] [rbp-1C0h]
  char v28[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 8 15 __for_begin:207 80 8 13 __for_end:207 112 8 15 __for_begin:210 144 8 13 __for_end:210 "
                        "176 32 9 <unknown> 240 32 9 <unknown> 304 48 23 check_duplicate_set:209";
  *(_QWORD *)(v3 + 16) = ActivityIrodoriExcelConfigMgr::checkIrodoriFlowerGroupExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
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
  __for_range = &this->irodori_flower_group_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriFlowerGroupExcelConfig>::const_iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::IrodoriFlowerGroupExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriFlowerGroupExcelConfig>::const_iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::IrodoriFlowerGroupExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig>,false> *)(v3 + 80)) )
      break;
    v23 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig>,false,false> *const)(v3 + 48));
    group_id = std::get<0ul,unsigned int const,data::IrodoriFlowerGroupExcelConfig>(v23);
    group_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig> >::type *)std::get<1ul,unsigned int const,data::IrodoriFlowerGroupExcelConfig>(v23);
    v7 = ((v3 + 304) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_WORD *)(v7 + 4) = 0;
    std::set<std::string>::set((std::set<std::string> *const)(v3 + 304));
    __for_range_0 = &group_excel_config->flower_list;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, v6);
    *(std::vector<data::IrodoriFlowerConfig>::const_iterator *)(v3 + 112) = std::vector<data::IrodoriFlowerConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, v6);
    *(std::vector<data::IrodoriFlowerConfig>::const_iterator *)(v3 + 144) = std::vector<data::IrodoriFlowerConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::IrodoriFlowerConfig const*,std::vector<data::IrodoriFlowerConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IrodoriFlowerConfig*,std::vector<data::IrodoriFlowerConfig> > *)(v3 + 112),
              (const __gnu_cxx::__normal_iterator<const data::IrodoriFlowerConfig*,std::vector<data::IrodoriFlowerConfig> > *)(v3 + 144)) )
      {
        v13 = 1;
        goto LABEL_28;
      }
      flower_config = __gnu_cxx::__normal_iterator<data::IrodoriFlowerConfig const*,std::vector<data::IrodoriFlowerConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IrodoriFlowerConfig*,std::vector<data::IrodoriFlowerConfig> > *const)(v3 + 112));
      v8 = std::set<std::string>::emplace<std::string const&>(
             (std::set<std::string> *const)(v3 + 304),
             &flower_config->slot_identifier,
             &flower_config->slot_identifier);
      if ( !v8.second )
      {
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriFlowerGroupExcelConfig",
          214);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 176),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v9, (const char (*)[36])byte_1AA62B00);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, group_id);
        v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v11, (const char (*)[19])byte_1AA62B60);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &flower_config->slot_identifier);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v13 = 0;
        goto LABEL_28;
      }
      p_home_config_mgr = &txt_config_mgr->home_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&flower_config->config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&flower_config->config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&flower_config->config_id);
      }
      if ( !data::HomeWorldExcelConfigMgrBase::findCusmtomGadgetConfigIdExcelConfig(
              p_home_config_mgr,
              flower_config->config_id) )
        break;
      __gnu_cxx::__normal_iterator<data::IrodoriFlowerConfig const*,std::vector<data::IrodoriFlowerConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IrodoriFlowerConfig*,std::vector<data::IrodoriFlowerConfig> > *const)(v3 + 112));
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
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "checkIrodoriFlowerGroupExcelConfig",
      220);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 240),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v16 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v15, (const char (*)[51])byte_1AA62BA0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &flower_config->config_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v13 = 0;
LABEL_28:
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    v17 = v13 == 1;
    std::set<std::string>::~set((std::set<std::string> *const)(v3 + 304));
    v18 = ((v3 + 304) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_WORD *)(v18 + 4) = -1800;
    if ( !v17 )
    {
      v19 = 0;
      goto LABEL_32;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig>,false,false> *const)(v3 + 48));
  }
  v19 = 1;
LABEL_32:
  if ( v19 == 1 )
    v2 = 0;
  result = v2;
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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

// Line 229: range 0000000012C59CEE-0000000012C5A4C9
int32_t __cdecl ActivityIrodoriExcelConfigMgr::checkIrodoriFlowerThemeExcelConfig(
        const ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  uint32_t *p_gadget_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const ActivityIrodoriExcelConfigMgr *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  data::IrodoriFlowerThemeExcelConfigMap *__for_range; // [rsp+10h] [rbp-1E0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false,false>::reference v19; // [rsp+18h] [rbp-1D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig> >::type *theme_excel_config; // [rsp+28h] [rbp-1C8h]
  char v21[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 15 __for_begin:231 64 8 13 __for_end:231 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 56 23 check_duplicate_set:230";
  *(_QWORD *)(v3 + 16) = ActivityIrodoriExcelConfigMgr::checkIrodoriFlowerThemeExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 288));
  __for_range = &this->irodori_flower_theme_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriFlowerThemeExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::IrodoriFlowerThemeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriFlowerThemeExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::IrodoriFlowerThemeExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_28;
    }
    v19 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::IrodoriFlowerThemeExcelConfig>(v19);
    theme_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::IrodoriFlowerThemeExcelConfig>(v19);
    p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
    p_gadget_id = &theme_excel_config->gadget_id;
    if ( *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_gadget_id);
    }
    if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, theme_excel_config->gadget_id) )
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
        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
        "checkIrodoriFlowerThemeExcelConfig",
        236);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v8, (const char (*)[57])byte_1AA62D00);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &theme_excel_config->gadget_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
      goto LABEL_28;
    }
    v11 = std::unordered_set<unsigned int>::emplace<unsigned int const&>(
            (std::unordered_set<unsigned int> *const)(v3 + 288),
            &theme_excel_config->gadget_id,
            &theme_excel_config->gadget_id);
    if ( !v11.second )
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
        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
        "checkIrodoriFlowerThemeExcelConfig",
        241);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v12, (const char (*)[35])byte_1AA62D60);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &theme_excel_config->gadget_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
      goto LABEL_28;
    }
    v14 = this;
    if ( *(_BYTE *)(((unsigned __int64)&theme_excel_config->flower_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&theme_excel_config->flower_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&theme_excel_config->flower_group_id);
    }
    if ( !data::ActivityIrodoriExcelConfigMgrBase::findIrodoriFlowerGroupExcelConfig(
            v14,
            theme_excel_config->flower_group_id) )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
    "checkIrodoriFlowerThemeExcelConfig",
    247);
  v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v15, (const char (*)[36])byte_1AA62DC0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &theme_excel_config->flower_group_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v10 = 0;
LABEL_28:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v10 == 1 )
    v2 = 0;
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 288));
  result = v2;
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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

// Line 255: range 0000000012C5A4CA-0000000012C5A747
int32_t __cdecl ActivityIrodoriExcelConfigMgr::rewriteIrodoriFlowerThemeExcelConfig(
        ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::tuple_element<0,std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig> >::type v5; // r14d
  uint32_t *p_gadget_id; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v7; // rax
  std::tuple_element<0,std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig> >::type *v8; // rdx
  char v9; // cl
  int32_t result; // eax
  data::IrodoriFlowerThemeExcelConfigMap *__for_range; // [rsp+10h] [rbp-B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false,false>::reference v12; // [rsp+18h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig> >::type *theme_id; // [rsp+20h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig> >::type *theme_excel_config; // [rsp+28h] [rbp-98h]
  char v15[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false,false> *)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:256 64 8 13 __for_end:256";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false>::__node_type *)ActivityIrodoriExcelConfigMgr::rewriteIrodoriFlowerThemeExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->irodori_flower_theme_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::IrodoriFlowerThemeExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::IrodoriFlowerThemeExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false,false>::operator*(v2 + 4);
    theme_id = std::get<0ul,unsigned int const,data::IrodoriFlowerThemeExcelConfig>(v12);
    theme_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::IrodoriFlowerThemeExcelConfig>(v12);
    if ( *(_BYTE *)(((unsigned __int64)theme_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)theme_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)theme_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(theme_id);
    }
    v5 = *theme_id;
    p_gadget_id = &theme_excel_config->gadget_id;
    v7 = std::unordered_map<unsigned int,unsigned int>::operator[](
           &this->gadget_id_theme_id_map_,
           &theme_excel_config->gadget_id);
    v8 = v7;
    v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
    {
      LOBYTE(p_gadget_id) = v9 != 0;
      __asan_report_store4(v7, p_gadget_id);
    }
    *v8 = v5;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriFlowerThemeExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 264: range 0000000012C5A748-0000000012C5AB35
int32_t __cdecl ActivityIrodoriExcelConfigMgr::rewriteIrodoriFlowerGroupExcelConfig(
        ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_group_id; // rsi
  uint32_t config_id; // r14d
  std::string *p_slot_identifier; // rsi
  std::map<std::string,unsigned int>::mapped_type *v8; // rax
  uint32_t *v9; // rdx
  char v10; // cl
  int32_t result; // eax
  data::IrodoriFlowerGroupExcelConfigMap *__for_range; // [rsp+18h] [rbp-108h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig> >::type *group_config; // [rsp+30h] [rbp-F0h]
  std::map<unsigned int,std::map<std::string,unsigned int>>::mapped_type *answer_map; // [rsp+38h] [rbp-E8h]
  std::vector<data::IrodoriFlowerConfig> *__for_range_0; // [rsp+40h] [rbp-E0h]
  const data::IrodoriFlowerConfig *config; // [rsp+48h] [rbp-D8h]
  char v18[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:265 64 8 13 __for_end:265 96 8 15 __for_begin:269 128 8 13 __for_end:269";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::rewriteIrodoriFlowerGroupExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  __for_range = &this->irodori_flower_group_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriFlowerGroupExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::IrodoriFlowerGroupExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriFlowerGroupExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::IrodoriFlowerGroupExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::IrodoriFlowerGroupExcelConfig>(__in);
    group_config = std::get<1ul,unsigned int const,data::IrodoriFlowerGroupExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::IrodoriFlowerConfig,unsigned int data::IrodoriFlowerConfig::*>(
      &group_config->flower_list,
      (unsigned int *)0x28);
    p_group_id = &group_config->group_id;
    answer_map = std::map<unsigned int,std::map<std::string,unsigned int>>::operator[](
                   &this->group_answer_map_,
                   &group_config->group_id);
    __for_range_0 = &group_config->flower_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, p_group_id);
    *(std::vector<data::IrodoriFlowerConfig>::iterator *)(v2 + 96) = std::vector<data::IrodoriFlowerConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, p_group_id);
    *(std::vector<data::IrodoriFlowerConfig>::iterator *)(v2 + 128) = std::vector<data::IrodoriFlowerConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::IrodoriFlowerConfig *,std::vector<data::IrodoriFlowerConfig>>(
              (const __gnu_cxx::__normal_iterator<data::IrodoriFlowerConfig*,std::vector<data::IrodoriFlowerConfig> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<data::IrodoriFlowerConfig*,std::vector<data::IrodoriFlowerConfig> > *)(v2 + 128)) )
    {
      config = __gnu_cxx::__normal_iterator<data::IrodoriFlowerConfig *,std::vector<data::IrodoriFlowerConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::IrodoriFlowerConfig*,std::vector<data::IrodoriFlowerConfig> > *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&config->config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->config_id);
      }
      config_id = config->config_id;
      p_slot_identifier = &config->slot_identifier;
      v8 = std::map<std::string,unsigned int>::operator[](answer_map, &config->slot_identifier);
      v9 = v8;
      v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
      {
        LOBYTE(p_slot_identifier) = v10 != 0;
        __asan_report_store4(v8, p_slot_identifier);
      }
      *v9 = config_id;
      __gnu_cxx::__normal_iterator<data::IrodoriFlowerConfig *,std::vector<data::IrodoriFlowerConfig>>::operator++((__gnu_cxx::__normal_iterator<data::IrodoriFlowerConfig*,std::vector<data::IrodoriFlowerConfig> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriFlowerGroupExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
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

// Line 278: range 0000000012C5AB36-0000000012C5AD47
const data::IrodoriFlowerThemeExcelConfig *__fastcall ActivityIrodoriExcelConfigMgr::findIrodoriFlowerThemeConfigByGadgetId(
        const ActivityIrodoriExcelConfigMgr *const this,
        __int64 gadget_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_gadget_id_theme_id_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  const data::IrodoriFlowerThemeExcelConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v11[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 gadget_id:277 64 8 6 it:279 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::findIrodoriFlowerThemeConfigByGadgetId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gadget_id;
  p_gadget_id_theme_id_map = &this->gadget_id_theme_id_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gadget_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_gadget_id_theme_id_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->gadget_id_theme_id_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriFlowerThemeExcelConfig(this, v9->second);
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

// Line 288: range 0000000012C5AD48-0000000012C5B76E
int32_t __cdecl ActivityIrodoriExcelConfigMgr::checkIrodoriChessGearExcelConfig(
        const ActivityIrodoriExcelConfigMgr *const this,
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
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  uint32_t build_cost; // ecx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1D4h]
  data::IrodoriChessGearExcelConfigMap *__for_range; // [rsp+20h] [rbp-1D0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false,false>::reference v29; // [rsp+28h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::IrodoriChessGearExcelConfig> >::type *id; // [rsp+30h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriChessGearExcelConfig> >::type *config; // [rsp+38h] [rbp-1B8h]
  char v32[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 15 __for_begin:290 64 8 13 __for_end:290 96 16 9 <unknown> 128 32 9 <unknown> 192 32 9 <u"
                        "nknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::checkIrodoriChessGearExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  ret = 0;
  __for_range = &this->irodori_chess_gear_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessGearExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::IrodoriChessGearExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessGearExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::IrodoriChessGearExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false> *)(v2 + 64)) )
  {
    v29 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::IrodoriChessGearExcelConfig>(v29);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriChessGearExcelConfig> >::type *)std::get<1ul,unsigned int const,data::IrodoriChessGearExcelConfig>(v29);
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriChessGearExcelConfig",
          301);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])byte_1AA27280);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
        v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])byte_1AA272C0);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->gadget_id);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])byte_1AA27300);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      }
      *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      p_json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->gadget_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->gadget_id);
      }
      gadget_id = config->gadget_id;
      if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      JsonConfigMgr::findGadgetConfig(
        (const JsonConfigMgr *const)(v2 + 96),
        (const std::unordered_map<unsigned int,std::shared_ptr<data::ConfigGadget>> *)p_json_config_mgr,
        gadget_id);
      v14 = std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v2 + 96));
      std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 96));
      *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -1800;
      if ( v14 )
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriChessGearExcelConfig",
          306);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])byte_1AA27280);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
        v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])byte_1AA27340);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->gadget_id);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v19, (const char (*)[21])byte_1AA27380);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->build_cost >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->build_cost >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->build_cost);
      }
      build_cost = config->build_cost;
      if ( *(_BYTE *)(((unsigned __int64)&config->demolition_refund >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->demolition_refund >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->demolition_refund);
      }
      if ( build_cost < config->demolition_refund )
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriChessGearExcelConfig",
          311);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v21, (const char (*)[10])byte_1AA27280);
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, id);
        v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])byte_1AA27340);
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &config->gadget_id);
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v25, (const char (*)[47])byte_1AA62FE0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
        "checkIrodoriChessGearExcelConfig",
        294);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])byte_1AA27240);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 318: range 0000000012C5B770-0000000012C5C819
int32_t __cdecl ActivityIrodoriExcelConfigMgr::checkIrodoriChessLevelExcelConfig(
        const ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  const char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  char *v12; // rsi
  unsigned int *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  uint32_t normal_map_id; // ecx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  const ActivityIrodoriExcelConfigMgr *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  const ActivityIrodoriExcelConfigMgr *v33; // rcx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  common::milog::MiLogStream *v41; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-2CCh]
  data::IrodoriChessLevelExcelConfigMap *__for_range; // [rsp+18h] [rbp-2C8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false,false>::reference v46; // [rsp+20h] [rbp-2C0h]
  std::tuple_element<0,std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig> >::type *id; // [rsp+28h] [rbp-2B8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig> >::type *config; // [rsp+30h] [rbp-2B0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-2A8h]
  char v50[672]; // [rsp+40h] [rbp-2A0h] BYREF

  v2 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 48 4 14 watcher_id:333 64 8 15 __for_begin:320 96 8 13 __for_end:320 128 8 15 __for_begin:333"
                        " 160 8 13 __for_end:333 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unkno"
                        "wn> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::checkIrodoriChessLevelExcelConfig;
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
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -202116109;
  ret = 0;
  __for_range = &this->irodori_chess_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false> *)(v2 + 96)) )
  {
    v46 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::IrodoriChessLevelExcelConfig>(v46);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::IrodoriChessLevelExcelConfig>(v46);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( *id )
    {
      v6 = (const char *)((((_BYTE)config + 12) & 7u) + 3);
      if ( *(_BYTE *)(((unsigned __int64)&config->open_days >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->open_days >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->open_days);
      }
      if ( !config->open_days )
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriChessLevelExcelConfig",
          330);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 256),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])byte_1AA631E0);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
        v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])byte_1AA63220);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->open_days);
        v6 = byte_1AA63260;
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])byte_1AA63260);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __for_range_0 = &config->watcher_list;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, v6);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v6);
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
        if ( !WatcherExcelConfigMgr::findWatcherConfig(&txt_config_mgr->watcher_config_mgr, *(_DWORD *)(v2 + 48)) )
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
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkIrodoriChessLevelExcelConfig",
            337);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])byte_1AA631E0);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, id);
          v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])" watcher_id:");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v21, (const char (*)[18])byte_1AA632A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((unsigned __int64)&config->normal_map_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->normal_map_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->normal_map_id);
      }
      normal_map_id = config->normal_map_id;
      if ( *(_BYTE *)(((unsigned __int64)&config->hard_map_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->hard_map_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->hard_map_id);
      }
      if ( normal_map_id == config->hard_map_id )
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriChessLevelExcelConfig",
          344);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])byte_1AA631E0);
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, id);
        v26 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v25, (const char (*)[44])byte_1AA632E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &config->normal_map_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      v27 = this;
      if ( *(_BYTE *)(((unsigned __int64)&config->normal_map_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->normal_map_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->normal_map_id);
      }
      if ( !data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessMapExcelConfig(v27, config->normal_map_id) )
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriChessLevelExcelConfig",
          349);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v28, (const char (*)[8])byte_1AA631E0);
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, id);
        v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v30, (const char (*)[15])byte_1AA63340);
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &config->normal_map_id);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v32, (const char (*)[17])byte_1AA26D20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      v33 = this;
      if ( *(_BYTE *)(((unsigned __int64)&config->hard_map_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->hard_map_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->hard_map_id);
      }
      if ( !data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessMapExcelConfig(v33, config->hard_map_id) )
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriChessLevelExcelConfig",
          354);
        v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v34, (const char (*)[8])byte_1AA631E0);
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, id);
        v37 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v36, (const char (*)[15])byte_1AA63380);
        v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &config->hard_map_id);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v38, (const char (*)[17])byte_1AA26D20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->unlock_hard_score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->unlock_hard_score >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->unlock_hard_score);
      }
      if ( !config->unlock_hard_score )
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriChessLevelExcelConfig",
          359);
        v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v40 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v39, (const char (*)[8])byte_1AA631E0);
        v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, id);
        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v41, (const char (*)[46])byte_1AA633C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
        "checkIrodoriChessLevelExcelConfig",
        324);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])byte_1AA631A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v50 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
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
  }
  return result;
};

// Line 367: range 0000000012C5C81A-0000000012C5F17F
int32_t __cdecl ActivityIrodoriExcelConfigMgr::checkIrodoriChessMapExcelConfig(
        const ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const char *v12; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  const std::map<unsigned int,unsigned int>::key_type *p_dungeon_id; // rdx
  const std::map<unsigned int,unsigned int>::key_type *v24; // rsi
  bool v25; // al
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r15
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  unsigned int v34; // r15d
  uint32_t *v35; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v36; // rax
  unsigned int *v37; // rdx
  char v38; // cl
  const TxtConfigMgr *v39; // rsi
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  common::milog::MiLogStream *v48; // rax
  char *v49; // rsi
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v50; // rdx
  const ActivityIrodoriExcelConfigMgr *v51; // rcx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rdx
  common::milog::MiLogStream *v56; // rax
  unsigned int v57; // ecx
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rdx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rdx
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rdx
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rdx
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rdx
  common::milog::MiLogStream *v71; // rax
  char *v72; // rsi
  unsigned int *v73; // rax
  int *v74; // rdx
  int v75; // ecx
  char v76; // al
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rdx
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rdx
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  char *v87; // rsi
  unsigned int *v88; // rax
  int *v89; // rdx
  int v90; // ecx
  char v91; // al
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rdx
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rax
  char *v97; // rsi
  unsigned int *v98; // rax
  int *v99; // rdx
  int v100; // ecx
  char v101; // al
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rdx
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  int32_t ret; // [rsp+1Ch] [rbp-694h]
  data::IrodoriChessMapExcelConfigMap *__for_range; // [rsp+20h] [rbp-690h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig>,false,false>::reference v111; // [rsp+28h] [rbp-688h]
  std::tuple_element<0,std::pair<unsigned int const,data::IrodoriChessMapExcelConfig> >::type *id; // [rsp+30h] [rbp-680h]
  std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriChessMapExcelConfig> >::type *config; // [rsp+38h] [rbp-678h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+40h] [rbp-670h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+48h] [rbp-668h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-660h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+58h] [rbp-658h]
  const std::vector<unsigned int> *__for_range_3; // [rsp+60h] [rbp-650h]
  const data::IrodoriChessMapPointExcelConfig *point_config_ptr; // [rsp+68h] [rbp-648h]
  const unsigned int *gear_id; // [rsp+70h] [rbp-640h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *limit; // [rsp+78h] [rbp-638h]
  char v122[1584]; // [rsp+80h] [rbp-630h] BYREF

  v2 = (unsigned __int64)v122;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1536LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "32 32 4 21 entrance_point_id:440 48 4 17 exit_point_id:455 64 4 15 disorder_id:463 80 8 15 __for"
                        "_begin:370 112 8 13 __for_end:370 144 8 8 iter:397 176 8 9 <unknown> 208 8 9 <unknown> 240 8 15 "
                        "__for_begin:422 272 8 13 __for_end:422 304 8 15 __for_begin:440 336 8 13 __for_end:440 368 8 15 "
                        "__for_begin:455 400 8 13 __for_end:455 432 8 15 __for_begin:463 464 8 13 __for_end:463 496 32 9 "
                        "<unknown> 560 32 9 <unknown> 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 9 <"
                        "unknown> 880 32 9 <unknown> 944 32 9 <unknown> 1008 32 9 <unknown> 1072 32 9 <unknown> 1136 32 9"
                        " <unknown> 1200 32 9 <unknown> 1264 32 9 <unknown> 1328 32 9 <unknown> 1392 32 9 <unknown> 1456 "
                        "48 28 dungeon_id_to_map_id_map:369";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::checkIrodoriChessMapExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
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
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862738] = -219021312;
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
  v4[536862758] = -219021312;
  v4[536862759] = 62194;
  v4[536862760] = -219021312;
  v4[536862761] = 62194;
  v4[536862762] = -219021312;
  v4[536862763] = 62194;
  v4[536862764] = -219021312;
  v4[536862765] = 62194;
  v4[536862767] = -202116109;
  ret = 0;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 1456));
  __for_range = &this->irodori_chess_map_excel_config_map;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessMapExcelConfig>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::IrodoriChessMapExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessMapExcelConfig>::const_iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::IrodoriChessMapExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig>,false> *)(v2 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig>,false> *)(v2 + 112)) )
  {
    v111 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig>,false,false> *const)(v2 + 80));
    id = std::get<0ul,unsigned int const,data::IrodoriChessMapExcelConfig>(v111);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriChessMapExcelConfig> >::type *)std::get<1ul,unsigned int const,data::IrodoriChessMapExcelConfig>(v111);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( *id )
    {
      p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->dungeon_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->dungeon_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->dungeon_id);
      }
      dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                             p_dungeon_config_mgr,
                             config->dungeon_id);
      if ( dungeon_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&dungeon_config_ptr->involve_type);
        }
        if ( dungeon_config_ptr->involve_type != INVOLVE_ONLY_SINGLE )
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
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkIrodoriChessMapExcelConfig",
            388);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 624),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])byte_1AA63780);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
          v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])byte_1AA637C0);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->dungeon_id);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v17, (const char (*)[23])byte_1AA63840);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 624));
          *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        v12 = (const char *)((((_BYTE)dungeon_config_ptr + 12) & 7u) + 3);
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&dungeon_config_ptr->type);
        }
        if ( dungeon_config_ptr->type != DUNGEON_IRODORI_CHESS )
        {
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
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkIrodoriChessMapExcelConfig",
            393);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 688),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])byte_1AA63780);
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
          v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])byte_1AA637C0);
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &config->dungeon_id);
          v12 = byte_1AA63880;
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v22, (const char (*)[39])byte_1AA63880);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 688));
          *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 560) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 560, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 560),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriChessMapExcelConfig",
          381);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 560),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])byte_1AA63780);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
        v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])byte_1AA637C0);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->dungeon_id);
        v12 = byte_1AA63800;
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])byte_1AA63800);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 560));
        *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
      p_dungeon_id = &config->dungeon_id;
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 144, v12);
      v24 = p_dungeon_id;
      *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 144) = std::map<unsigned int,unsigned int>::find(
                                                                       (std::map<unsigned int,unsigned int> *const)(v2 + 1456),
                                                                       p_dungeon_id);
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 176, v24);
      *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 176) = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v2 + 1456));
      v25 = std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 144),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 176));
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      if ( v25 )
      {
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriChessMapExcelConfig",
          400);
        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 752),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v27 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v26, (const char (*)[8])byte_1AA63780);
        v28 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 144));
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &v28->second);
        v30 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v29, (const char (*)[6])byte_1AA638E0);
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, id);
        v32 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v31, (const char (*)[33])byte_1AA63920);
        v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &config->dungeon_id);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v33, (const char (*)[27])byte_1AA63980);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 752));
        *(_DWORD *)(((v2 + 752) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(id);
        }
        v34 = *id;
        v35 = &config->dungeon_id;
        v36 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v2 + 1456),
                &config->dungeon_id);
        v37 = v36;
        v38 = *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000);
        if ( v38 != 0 && (char)(((unsigned __int8)v36 & 7) + 3) >= v38 )
        {
          LOBYTE(v35) = v38 != 0;
          __asan_report_store4(v36, v35);
        }
        *v37 = v34;
      }
      v39 = txt_config_mgr;
      if ( ActivityIrodoriExcelConfigMgr::checkIrodoriChessMapCardPool(this, txt_config_mgr, config) )
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriChessMapExcelConfig",
          409);
        v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 816),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v41 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v40, (const char (*)[8])byte_1AA63780);
        v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, id);
        v39 = (const TxtConfigMgr *)byte_1AA639C0;
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v42, (const char (*)[21])byte_1AA639C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 816));
        *(_DWORD *)(((v2 + 816) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->total_card_points >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->total_card_points >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->total_card_points);
      }
      if ( !config->total_card_points )
      {
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriChessMapExcelConfig",
          414);
        v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 880),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v44 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v43, (const char (*)[8])byte_1AA63780);
        v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, id);
        v39 = (const TxtConfigMgr *)byte_1AA63A00;
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v45, (const char (*)[28])byte_1AA63A00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 880));
        *(_DWORD *)(((v2 + 880) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->all_gear_limits >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->all_gear_limits >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->all_gear_limits);
      }
      if ( !config->all_gear_limits )
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriChessMapExcelConfig",
          419);
        v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 944),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v47 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v46, (const char (*)[8])byte_1AA63780);
        v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, id);
        v39 = (const TxtConfigMgr *)byte_1AA63A40;
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v48, (const char (*)[34])byte_1AA63A40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 944));
        *(_DWORD *)(((v2 + 944) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __for_range_0 = &config->single_gear_limits;
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 240, v39);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 240) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 272, v39);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 272) = std::map<unsigned int,unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v49 = (char *)(v2 + 272);
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 240),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 272)) )
          break;
        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
        v50 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 240));
        if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 208, v49);
        if ( ((unsigned __int8)v50 & 7) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v50->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v50 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v50->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v50, 8LL);
        }
        *(std::pair<unsigned int const,unsigned int> *)(v2 + 208) = *v50;
        gear_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 208));
        limit = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 208));
        v51 = this;
        if ( *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)gear_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(gear_id);
        }
        if ( !data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessGearExcelConfig(v51, *gear_id) )
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
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkIrodoriChessMapExcelConfig",
            426);
          v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1008),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v53 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v52, (const char (*)[8])byte_1AA63780);
          v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, id);
          v55 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v54, (const char (*)[26])byte_1AA63AA0);
          v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, gear_id);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v56, (const char (*)[17])byte_1AA26D20);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1008));
          *(_DWORD *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        if ( *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)limit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(limit);
        }
        v57 = *limit;
        if ( *(_BYTE *)(((unsigned __int64)&config->all_gear_limits >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->all_gear_limits >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->all_gear_limits);
        }
        if ( v57 > config->all_gear_limits )
        {
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
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkIrodoriChessMapExcelConfig",
            431);
          v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1072),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v59 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v58, (const char (*)[8])byte_1AA63780);
          v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, id);
          v61 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v60, (const char (*)[26])byte_1AA63AA0);
          v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, gear_id);
          v63 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v62, (const char (*)[15])byte_1AA63AE0);
          v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, limit);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v64, (const char (*)[32])byte_1AA63B20);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1072));
          *(_DWORD *)(((v2 + 1072) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        if ( *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)limit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(limit);
        }
        if ( !*limit )
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
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkIrodoriChessMapExcelConfig",
            436);
          v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1136),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v66 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v65, (const char (*)[8])byte_1AA63780);
          v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, id);
          v68 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v67, (const char (*)[26])byte_1AA63AA0);
          v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, gear_id);
          v70 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v69, (const char (*)[15])byte_1AA63AE0);
          v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, limit);
          common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v71, (const char (*)[15])byte_1AA28100);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1136));
          *(_DWORD *)(((v2 + 1136) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 240));
      }
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
      __for_range_1 = &config->entrance_point_list;
      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 304, v49);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 304) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 336, v49);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 336) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v72 = (char *)(v2 + 336);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 304),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 336)) )
          break;
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
        v73 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 304));
        v74 = (int *)v73;
        if ( *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v73 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v73);
        }
        v75 = *v74;
        v76 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
        if ( v76 != 0 && v76 <= 3 )
        {
          LOBYTE(v72) = v76 != 0;
          __asan_report_store4(v2 + 32, v72);
        }
        *(_DWORD *)(v2 + 32) = v75;
        point_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessMapPointExcelConfig(
                             this,
                             *(unsigned int *)(v2 + 32));
        if ( point_config_ptr )
        {
          if ( std::vector<unsigned int>::empty(&point_config_ptr->monster_pool_list) )
          {
            *(_DWORD *)(((v2 + 1264) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1264) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1295) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 1295) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1264, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1264),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
              "checkIrodoriChessMapExcelConfig",
              451);
            v82 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1264),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v83 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v82, (const char (*)[8])byte_1AA63780);
            v84 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v83, id);
            v85 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v84,
                    (const char (*)[12])byte_1AA63B60);
            v86 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v85,
                    (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v86, (const char (*)[33])byte_1AA63BA0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1264));
            *(_DWORD *)(((v2 + 1264) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 1200) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1200) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1231) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 1231) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1200, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1200),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkIrodoriChessMapExcelConfig",
            445);
          v77 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1200),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v78 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v77, (const char (*)[8])byte_1AA63780);
          v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v78, id);
          v80 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v79, (const char (*)[12])byte_1AA63B60);
          v81 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v80,
                  (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v81, (const char (*)[18])byte_1AA632A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1200));
          *(_DWORD *)(((v2 + 1200) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 304));
      }
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
      __for_range_2 = &config->exit_point_list;
      *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 368, v72);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 368) = std::vector<unsigned int>::begin(__for_range_2);
      *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 400, v72);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 400) = std::vector<unsigned int>::end(__for_range_2);
      while ( 1 )
      {
        v87 = (char *)(v2 + 400);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 368),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 400)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v88 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 368));
        v89 = (int *)v88;
        if ( *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v88 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v88);
        }
        v90 = *v89;
        v91 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v91 != 0 && v91 <= 3 )
        {
          LOBYTE(v87) = v91 != 0;
          __asan_report_store4(v2 + 48, v87);
        }
        *(_DWORD *)(v2 + 48) = v90;
        if ( !data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessMapPointExcelConfig(
                this,
                *(unsigned int *)(v2 + 48)) )
        {
          *(_DWORD *)(((v2 + 1328) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1328) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1359) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 1359) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1328, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1328),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkIrodoriChessMapExcelConfig",
            459);
          v92 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1328),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v93 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v92, (const char (*)[8])byte_1AA63780);
          v94 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v93, id);
          v95 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v94, (const char (*)[12])byte_1AA63C00);
          v96 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v95,
                  (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v96, (const char (*)[18])byte_1AA632A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1328));
          *(_DWORD *)(((v2 + 1328) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 368));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
      __for_range_3 = &config->disorder_list;
      *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 432, v87);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 432) = std::vector<unsigned int>::begin(__for_range_3);
      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 464, v87);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 464) = std::vector<unsigned int>::end(__for_range_3);
      while ( 1 )
      {
        v97 = (char *)(v2 + 464);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 432),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 464)) )
          break;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
        v98 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 432));
        v99 = (int *)v98;
        if ( *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v98 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v98);
        }
        v100 = *v99;
        v101 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
        if ( v101 != 0 && v101 <= 3 )
        {
          LOBYTE(v97) = v101 != 0;
          __asan_report_store4(v2 + 64, v97);
        }
        *(_DWORD *)(v2 + 64) = v100;
        if ( !data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessDisorderExcelConfig(
                this,
                *(unsigned int *)(v2 + 64)) )
        {
          *(_DWORD *)(((v2 + 1392) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1392) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1423) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 1423) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1392, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1392),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkIrodoriChessMapExcelConfig",
            467);
          v102 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v2 + 1392),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v103 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v102, (const char (*)[8])byte_1AA63780);
          v104 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v103, id);
          v105 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                   v104,
                   (const char (*)[15])byte_1AA63C40);
          v106 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v105,
                   (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v106, (const char (*)[18])byte_1AA632A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1392));
          *(_DWORD *)(((v2 + 1392) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 432));
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
    }
    else
    {
      *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 496, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 496),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
        "checkIrodoriChessMapExcelConfig",
        374);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 496),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])byte_1AA63740);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
      *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig>,false,false> *const)(v2 + 80));
  }
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 1456));
  if ( v122 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 184) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF80BC) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1536LL, v122);
  }
  return ret;
};

// Line 476: range 0000000012C5F180-0000000012C5FA85
int32_t __cdecl ActivityIrodoriExcelConfigMgr::checkIrodoriChessMapPointExcelConfig(
        const ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rsi
  common::milog::MiLogStream *v6; // rax
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1D4h]
  data::IrodoriChessMapPointExcelConfigMap *__for_range; // [rsp+20h] [rbp-1D0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessMapPointExcelConfig>,false,false>::reference v27; // [rsp+28h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::IrodoriChessMapPointExcelConfig> >::type *id; // [rsp+30h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriChessMapPointExcelConfig> >::type *config; // [rsp+38h] [rbp-1B8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-1B0h]
  const std::map<unsigned int,MonsterScriptConfig> *monster_pool_map_ptr; // [rsp+48h] [rbp-1A8h]
  char v32[416]; // [rsp+50h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 19 monster_pool_id:486 64 8 15 __for_begin:478 96 8 13 __for_end:478 128 8 15 __for_begin"
                        ":486 160 8 13 __for_end:486 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::checkIrodoriChessMapPointExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  ret = 0;
  __for_range = &this->irodori_chess_map_point_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessMapPointExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::IrodoriChessMapPointExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessMapPointExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::IrodoriChessMapPointExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessMapPointExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessMapPointExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessMapPointExcelConfig>,false> *)(v2 + 96)) )
  {
    v27 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessMapPointExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessMapPointExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::IrodoriChessMapPointExcelConfig>(v27);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriChessMapPointExcelConfig> >::type *)std::get<1ul,unsigned int const,data::IrodoriChessMapPointExcelConfig>(v27);
    v5 = ((unsigned __int8)id & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( *id )
    {
      __for_range_0 = &config->monster_pool_list;
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
        v7 = (char *)(v2 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
        v9 = (int *)v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        v10 = *v9;
        v11 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v11 != 0 && v11 <= 3 )
        {
          LOBYTE(v7) = v11 != 0;
          __asan_report_store4(v2 + 48, v7);
        }
        *(_DWORD *)(v2 + 48) = v10;
        p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 48);
        monster_pool_map_ptr = LuaConfigMgr::findMonsterPoolByPoolId(p_lua_config_mgr, *(_DWORD *)(v2 + 48));
        if ( monster_pool_map_ptr )
        {
          if ( std::map<unsigned int,MonsterScriptConfig>::empty(monster_pool_map_ptr) )
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
              "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
              "checkIrodoriChessMapPointExcelConfig",
              497);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])byte_1AA63DE0);
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
            v21 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v20,
                    (const char (*)[18])byte_1AA63E20);
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v22, (const char (*)[17])byte_1AA63EA0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
            *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
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
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkIrodoriChessMapPointExcelConfig",
            491);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])byte_1AA63DE0);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
          v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v15, (const char (*)[18])byte_1AA63E20);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v17, (const char (*)[19])byte_1AA63E60);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    }
    else
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
        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
        "checkIrodoriChessMapPointExcelConfig",
        482);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v6, (const char (*)[25])byte_1AA63DA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessMapPointExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessMapPointExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 506: range 0000000012C5FA86-0000000012C5FDEC
int32_t __cdecl ActivityIrodoriExcelConfigMgr::checkIrodoriChessDisorderExcelConfig(
        const ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::IrodoriChessDisorderExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessDisorderExcelConfig>,false,false>::reference v9; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::IrodoriChessDisorderExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  char v11[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:508 64 8 13 __for_end:508 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::checkIrodoriChessDisorderExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->irodori_chess_disorder_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessDisorderExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::IrodoriChessDisorderExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessDisorderExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::IrodoriChessDisorderExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessDisorderExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessDisorderExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessDisorderExcelConfig>,false> *)(v2 + 64)) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessDisorderExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessDisorderExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::IrodoriChessDisorderExcelConfig>(v9);
    std::get<1ul,unsigned int const,data::IrodoriChessDisorderExcelConfig>(v9);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( !*id )
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
        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
        "checkIrodoriChessDisorderExcelConfig",
        512);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v5, (const char (*)[25])byte_1AA63FA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessDisorderExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessDisorderExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v11 == (char *)v2 )
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

// Line 521: range 0000000012C5FDEE-0000000012C60154
int32_t __cdecl ActivityIrodoriExcelConfigMgr::checkIrodoriChessCardExcelConfig(
        const ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::IrodoriChessCardExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false,false>::reference v9; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::IrodoriChessCardExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  char v11[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:523 64 8 13 __for_end:523 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::checkIrodoriChessCardExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->irodori_chess_card_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessCardExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::IrodoriChessCardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessCardExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::IrodoriChessCardExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false> *)(v2 + 64)) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::IrodoriChessCardExcelConfig>(v9);
    std::get<1ul,unsigned int const,data::IrodoriChessCardExcelConfig>(v9);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( !*id )
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
        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
        "checkIrodoriChessCardExcelConfig",
        527);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v5, (const char (*)[22])byte_1AA640A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v11 == (char *)v2 )
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

// Line 536: range 0000000012C60156-0000000012C61444
int32_t __cdecl ActivityIrodoriExcelConfigMgr::checkIrodoriPoetryExcelConfig(
        const ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  char *v9; // rsi
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int v15; // eax
  int entity_type; // eax
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // eax
  const ActivityIrodoriExcelConfigMgr *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int v32; // r15d
  std::unordered_set<unsigned int>::size_type v33; // rcx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  int v38; // eax
  data::IrodoriPoetryExcelConfigMap *__for_range; // [rsp+20h] [rbp-3E0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false,false>::reference v42; // [rsp+28h] [rbp-3D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::IrodoriPoetryExcelConfig> >::type *theme_id; // [rsp+30h] [rbp-3D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriPoetryExcelConfig> >::type *theme_config; // [rsp+38h] [rbp-3C8h]
  const std::vector<data::IrodoriPoetryScanConfig> *__for_range_0; // [rsp+40h] [rbp-3C0h]
  const data::IrodoriPoetryScanConfig *scan_config; // [rsp+48h] [rbp-3B8h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-3B0h]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference index_id; // [rsp+58h] [rbp-3A8h]
  char v49[912]; // [rsp+70h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 8 15 __for_begin:537 64 8 13 __for_end:537 96 8 15 __for_begin:540 128 8 13 __for_end:540 "
                        "160 8 15 __for_begin:542 192 8 13 __for_end:542 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <"
                        "unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 56 32 c"
                        "heck_index_id_duplicate_set:539 768 56 31 check_line_id_duplicate_set:539";
  *(_QWORD *)(v3 + 16) = ActivityIrodoriExcelConfigMgr::checkIrodoriPoetryExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -234881024;
  v5[536862743] = -218959118;
  v5[536862745] = -218103808;
  v5[536862746] = -202116109;
  __for_range = &this->irodori_poetry_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriPoetryExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::IrodoriPoetryExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriPoetryExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::IrodoriPoetryExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false> *)(v3 + 64)) )
      break;
    v42 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false,false> *const)(v3 + 32));
    theme_id = std::get<0ul,unsigned int const,data::IrodoriPoetryExcelConfig>(v42);
    theme_config = (std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriPoetryExcelConfig> >::type *)std::get<1ul,unsigned int const,data::IrodoriPoetryExcelConfig>(v42);
    v7 = ((v3 + 672) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_WORD *)(v7 + 4) = 0;
    *(_BYTE *)(v7 + 6) = 0;
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 672));
    v8 = ((v3 + 768) >> 3) + 2147450880;
    *(_DWORD *)v8 = 0;
    *(_WORD *)(v8 + 4) = 0;
    *(_BYTE *)(v8 + 6) = 0;
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 768));
    __for_range_0 = &theme_config->scan_config_list;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::vector<data::IrodoriPoetryScanConfig>::const_iterator *)(v3 + 96) = std::vector<data::IrodoriPoetryScanConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<data::IrodoriPoetryScanConfig>::const_iterator *)(v3 + 128) = std::vector<data::IrodoriPoetryScanConfig>::end(__for_range_0);
    while ( 2 )
    {
      v9 = (char *)(v3 + 128);
      if ( !__gnu_cxx::operator!=<data::IrodoriPoetryScanConfig const*,std::vector<data::IrodoriPoetryScanConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IrodoriPoetryScanConfig*,std::vector<data::IrodoriPoetryScanConfig> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<const data::IrodoriPoetryScanConfig*,std::vector<data::IrodoriPoetryScanConfig> > *)(v3 + 128)) )
      {
        v25 = 1;
        break;
      }
      scan_config = __gnu_cxx::__normal_iterator<data::IrodoriPoetryScanConfig const*,std::vector<data::IrodoriPoetryScanConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IrodoriPoetryScanConfig*,std::vector<data::IrodoriPoetryScanConfig> > *const)(v3 + 96));
      __for_range_1 = &scan_config->index_id_list;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v9);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v9);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
        {
          v15 = 1;
          goto LABEL_50;
        }
        index_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
        v10 = std::unordered_set<unsigned int>::emplace<unsigned int const&>(
                (std::unordered_set<unsigned int> *const)(v3 + 672),
                index_id,
                index_id);
        if ( !v10.second )
        {
          *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
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
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkIrodoriPoetryExcelConfig",
            546);
          v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v11, (const char (*)[35])byte_1AA642A0);
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, theme_id);
          v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])byte_1AA64300);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, index_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
          *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
          goto LABEL_50;
        }
        if ( *(_BYTE *)(((unsigned __int64)&theme_config->entity_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&theme_config->entity_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&theme_config->entity_type);
        }
        entity_type = theme_config->entity_type;
        if ( entity_type > 2 )
          break;
        if ( entity_type <= 0 )
          goto LABEL_45;
        p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)index_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)index_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)index_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(index_id);
        }
        if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, *index_id) )
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
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkIrodoriPoetryExcelConfig",
            557);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v19 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v18, (const char (*)[36])byte_1AA64340);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, index_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
          goto LABEL_50;
        }
LABEL_48:
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
      }
      if ( entity_type != 3 )
      {
LABEL_45:
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriPoetryExcelConfig",
          574);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v24 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v23, (const char (*)[25])byte_1AA64400);
        common::milog::MiLogStream::operator<<<data::IrodoriPoetryEntityType,(data::IrodoriPoetryEntityType*)0>(
          v24,
          &theme_config->entity_type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v15 = 0;
        goto LABEL_50;
      }
      p_monster_config_mgr = &txt_config_mgr->monster_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)index_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)index_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)index_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(index_id);
      }
      if ( data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(p_monster_config_mgr, *index_id) )
        goto LABEL_48;
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
        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
        "checkIrodoriPoetryExcelConfig",
        567);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v22 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v21, (const char (*)[36])byte_1AA643A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, index_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v15 = 0;
LABEL_50:
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v15 != 1 )
      {
        v25 = 0;
        break;
      }
      v26 = this;
      if ( *(_BYTE *)(((unsigned __int64)&scan_config->line_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&scan_config->line_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&scan_config->line_id);
      }
      if ( data::ActivityIrodoriExcelConfigMgrBase::findIrodoriPoetryLineExcelConfig(v26, scan_config->line_id) )
      {
        v29 = std::unordered_set<unsigned int>::emplace<unsigned int const&>(
                (std::unordered_set<unsigned int> *const)(v3 + 768),
                &scan_config->line_id,
                &scan_config->line_id);
        if ( v29.second )
        {
          __gnu_cxx::__normal_iterator<data::IrodoriPoetryScanConfig const*,std::vector<data::IrodoriPoetryScanConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IrodoriPoetryScanConfig*,std::vector<data::IrodoriPoetryScanConfig> > *const)(v3 + 96));
          continue;
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriPoetryExcelConfig",
          586);
        v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v31 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v30, (const char (*)[35])byte_1AA644A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &scan_config->line_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v25 = 0;
      }
      else
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriPoetryExcelConfig",
          581);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v27, (const char (*)[36])byte_1AA64440);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &scan_config->line_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v25 = 0;
      }
      break;
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v25 == 1 )
    {
      v33 = std::unordered_set<unsigned int>::size((const std::unordered_set<unsigned int> *const)(v3 + 672));
      if ( *(_BYTE *)(((unsigned __int64)&theme_config->inspiration_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&theme_config->inspiration_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&theme_config->inspiration_limit);
      }
      if ( v33 == theme_config->inspiration_limit )
      {
        v32 = 1;
      }
      else
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriPoetryExcelConfig",
          592);
        v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v35 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v34, (const char (*)[62])byte_1AA64500);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, theme_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
        *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v32 = 0;
      }
    }
    else
    {
      v32 = 0;
    }
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 768));
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 672));
    v36 = ((v3 + 672) >> 3) + 2147450880;
    *(_DWORD *)v36 = -117901064;
    *(_WORD *)(v36 + 4) = -1800;
    *(_BYTE *)(v36 + 6) = -8;
    v37 = ((v3 + 768) >> 3) + 2147450880;
    *(_DWORD *)v37 = -117901064;
    *(_WORD *)(v37 + 4) = -1800;
    *(_BYTE *)(v37 + 6) = -8;
    if ( v32 != 1 )
    {
      v38 = 0;
      goto LABEL_77;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false,false> *const)(v3 + 32));
  }
  v38 = 1;
LABEL_77:
  if ( v38 == 1 )
    v2 = 0;
  if ( v49 == (char *)v3 )
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

// Line 600: range 0000000012C61446-0000000012C619D7
int32_t __cdecl ActivityIrodoriExcelConfigMgr::rewriteIrodoriChessGearExcelConfig(
        ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,unsigned int> *p_gadget_id_to_gear_id_map; // rdx
  const std::unordered_map<unsigned int,unsigned int>::key_type *p_gadget_id; // rcx
  __int64 v7; // rsi
  const std::unordered_map<unsigned int,unsigned int>::key_type *v8; // rsi
  std::unordered_map<unsigned int,unsigned int> *v9; // rdx
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int v18; // r14d
  uint32_t *v19; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v20; // rax
  unsigned int *v21; // rdx
  char v22; // cl
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  data::IrodoriChessGearExcelConfigMap *__for_range; // [rsp+20h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-128h]
  const unsigned int *id; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,data::IrodoriChessGearExcelConfig> >::type *config; // [rsp+38h] [rbp-118h]
  char v29[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:602 64 8 13 __for_end:602 96 8 8 iter:605 128 8 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::rewriteIrodoriChessGearExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->irodori_chess_gear_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessGearExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::IrodoriChessGearExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessGearExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::IrodoriChessGearExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::IrodoriChessGearExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::IrodoriChessGearExcelConfig>(__in);
    std::set<unsigned int>::insert(&this->tower_gadgets_set_, &config->gadget_id);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    p_gadget_id_to_gear_id_map = &this->gadget_id_to_gear_id_map_;
    p_gadget_id = &config->gadget_id;
    v7 = *(unsigned __int8 *)(((v2 + 96) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v7 )
      __asan_report_store8(v2 + 96, v7);
    v8 = p_gadget_id;
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                              p_gadget_id_to_gear_id_map,
                                                                              p_gadget_id);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    v9 = &this->gadget_id_to_gear_id_map_;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v8);
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,unsigned int>::end(v9);
    v10 = std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 128));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
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
        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
        "rewriteIrodoriChessGearExcelConfig",
        608);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])byte_1AA64640);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])byte_1AA638E0);
      v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 96));
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v15->second);
      v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v16, (const char (*)[18])byte_1AA64680);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &config->gadget_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      v18 = *id;
      v19 = &config->gadget_id;
      v20 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->gadget_id_to_gear_id_map_,
              &config->gadget_id);
      v21 = v20;
      v22 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
      if ( v22 != 0 && (char)(((unsigned __int8)v20 & 7) + 3) >= v22 )
      {
        LOBYTE(v19) = v22 != 0;
        __asan_report_store4(v20, v19);
      }
      *v21 = v18;
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v29 == (char *)v2 )
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

// Line 620: range 0000000012C619D8-0000000012C62528
int32_t __cdecl ActivityIrodoriExcelConfigMgr::rewriteIrodoriChessLevelExcelConfig(
        ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActivityIrodoriExcelConfigMgr *v5; // rdx
  std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*> *p_dungeon_id_to_level_config_ptr_map; // rdx
  const std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*>::key_type *p_dungeon_id; // rcx
  __int64 v8; // rsi
  const std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*>::key_type *v9; // rsi
  std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*> *v10; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false,false>::pointer v11; // rax
  char v12; // dl
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false,false>::pointer v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false,false>::pointer v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  ActivityIrodoriExcelConfigMgr *v25; // rcx
  std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*> *v26; // rdx
  const std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*>::key_type *v27; // rcx
  __int64 v28; // rsi
  const std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*>::key_type *v29; // rsi
  std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*> *v30; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false,false>::pointer v31; // rax
  char v32; // dl
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false,false>::pointer v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false,false>::pointer v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1C4h]
  data::IrodoriChessLevelExcelConfigMap *__for_range; // [rsp+20h] [rbp-1C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-1B8h]
  const unsigned int *id; // [rsp+30h] [rbp-1B0h]
  std::tuple_element<1,std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig> >::type *config; // [rsp+38h] [rbp-1A8h]
  data::IrodoriChessMapExcelConfig *normal_chess_map_config_ptr; // [rsp+40h] [rbp-1A0h]
  data::IrodoriChessMapExcelConfig *hard_chess_map_config_ptr; // [rsp+48h] [rbp-198h]
  char v53[400]; // [rsp+50h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 8 15 __for_begin:622 64 8 13 __for_end:622 96 8 8 iter:627 128 8 9 <unknown> 160 8 8 iter:6"
                        "43 192 8 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::rewriteIrodoriChessLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  ret = 0;
  __for_range = &this->irodori_chess_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::IrodoriChessLevelExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::IrodoriChessLevelExcelConfig>(__in);
    v5 = this;
    if ( *(_BYTE *)(((unsigned __int64)&config->normal_map_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->normal_map_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->normal_map_id);
    }
    normal_chess_map_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessMapExcelConfig(
                                    v5,
                                    config->normal_map_id);
    if ( normal_chess_map_config_ptr )
    {
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      p_dungeon_id_to_level_config_ptr_map = &this->dungeon_id_to_level_config_ptr_map_;
      p_dungeon_id = &normal_chess_map_config_ptr->dungeon_id;
      v8 = *(unsigned __int8 *)(((v2 + 96) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v8 )
        __asan_report_store8(v2 + 96, v8);
      v9 = p_dungeon_id;
      *(std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig const*>::find(p_dungeon_id_to_level_config_ptr_map, p_dungeon_id);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      v10 = &this->dungeon_id_to_level_config_ptr_map_;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, v9);
      *(std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig const*>::end(v10);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig const*>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false> *)(v2 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false> *)(v2 + 128)) )
        goto LABEL_22;
      v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig const*>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) )
        __asan_report_load8(&v11->second);
      if ( v11->second )
        v12 = 1;
      else
LABEL_22:
        v12 = 0;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( v12 )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "rewriteIrodoriChessLevelExcelConfig",
          631);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])byte_1AA647C0);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])byte_1AA638E0);
        v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig const*>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v17->second >> 3) + 0x7FFF8000) )
          __asan_report_load8(&v17->second);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &v17->second->level_id);
        v19 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v18, (const char (*)[18])byte_1AA64800);
        v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig const*>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false,false> *const)(v2 + 96));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &v20->first);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        v21 = (unsigned __int64)std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig const*>::operator[](
                                  &this->dungeon_id_to_level_config_ptr_map_,
                                  &normal_chess_map_config_ptr->dungeon_id);
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_store8(v21, &normal_chess_map_config_ptr->dungeon_id);
        *(_QWORD *)v21 = config;
      }
      v22 = (unsigned __int64)std::unordered_map<unsigned int,data::IrodoriChessMapExcelConfig const*>::operator[](
                                &this->dungeon_id_to_map_config_ptr_map_,
                                &normal_chess_map_config_ptr->dungeon_id);
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
        v22 = __asan_report_store8(v22, &normal_chess_map_config_ptr->dungeon_id);
      *(_QWORD *)v22 = normal_chess_map_config_ptr;
      v23 = ((_BYTE)normal_chess_map_config_ptr - 68) & 7;
      v24 = (*(_BYTE *)(((unsigned __int64)&normal_chess_map_config_ptr->is_hard_map >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&normal_chess_map_config_ptr->is_hard_map >> 3) + 0x7FFF8000));
      if ( (_BYTE)v24 )
        __asan_report_store1(&normal_chess_map_config_ptr->is_hard_map, v23, v24);
      normal_chess_map_config_ptr->is_hard_map = 0;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    }
    v25 = this;
    if ( *(_BYTE *)(((unsigned __int64)&config->hard_map_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->hard_map_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->hard_map_id);
    }
    hard_chess_map_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessMapExcelConfig(
                                  v25,
                                  config->hard_map_id);
    if ( hard_chess_map_config_ptr )
    {
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      v26 = &this->dungeon_id_to_level_config_ptr_map_;
      v27 = &hard_chess_map_config_ptr->dungeon_id;
      v28 = *(unsigned __int8 *)(((v2 + 160) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v28 )
        __asan_report_store8(v2 + 160, v28);
      v29 = v27;
      *(std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig const*>::find(v26, v27);
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      v30 = &this->dungeon_id_to_level_config_ptr_map_;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, v29);
      *(std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig const*>::end(v30);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig const*>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false> *)(v2 + 160),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false> *)(v2 + 192)) )
        goto LABEL_49;
      v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig const*>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false,false> *const)(v2 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&v31->second >> 3) + 0x7FFF8000) )
        __asan_report_load8(&v31->second);
      if ( v31->second )
        v32 = 1;
      else
LABEL_49:
        v32 = 0;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v32 )
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "rewriteIrodoriChessLevelExcelConfig",
          647);
        v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v34 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v33, (const char (*)[8])byte_1AA647C0);
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, id);
        v36 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v35, (const char (*)[6])byte_1AA638E0);
        v37 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig const*>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false,false> *const)(v2 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&v37->second >> 3) + 0x7FFF8000) )
          __asan_report_load8(&v37->second);
        v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &v37->second->level_id);
        v39 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v38, (const char (*)[18])byte_1AA64800);
        v40 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig const*>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false,false> *const)(v2 + 160));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &v40->first);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        v41 = (unsigned __int64)std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig const*>::operator[](
                                  &this->dungeon_id_to_level_config_ptr_map_,
                                  &hard_chess_map_config_ptr->dungeon_id);
        if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
          v41 = __asan_report_store8(v41, &hard_chess_map_config_ptr->dungeon_id);
        *(_QWORD *)v41 = config;
      }
      v42 = (unsigned __int64)std::unordered_map<unsigned int,data::IrodoriChessMapExcelConfig const*>::operator[](
                                &this->dungeon_id_to_map_config_ptr_map_,
                                &hard_chess_map_config_ptr->dungeon_id);
      if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
        v42 = __asan_report_store8(v42, &hard_chess_map_config_ptr->dungeon_id);
      *(_QWORD *)v42 = hard_chess_map_config_ptr;
      v43 = ((_BYTE)hard_chess_map_config_ptr - 68) & 7;
      v44 = (*(_BYTE *)(((unsigned __int64)&hard_chess_map_config_ptr->is_hard_map >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v43 >= *(_BYTE *)(((unsigned __int64)&hard_chess_map_config_ptr->is_hard_map >> 3) + 0x7FFF8000));
      if ( (_BYTE)v44 )
        __asan_report_store1(&hard_chess_map_config_ptr->is_hard_map, v43, v44);
      hard_chess_map_config_ptr->is_hard_map = 1;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v53 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 661: range 0000000012C6252A-0000000012C63D08
int32_t __cdecl ActivityIrodoriExcelConfigMgr::rewriteIrodoriChessMapExcelConfig(
        ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  uint32_t *p_dungeon_id; // rax
  char *v7; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  char *v14; // rsi
  unsigned int *v15; // rax
  int *v16; // rdx
  int v17; // ecx
  char v18; // al
  LuaConfigMgr *p_lua_config_mgr; // rcx
  __int64 v20; // rsi
  const std::map<unsigned int,MonsterScriptConfig>::key_type *p_monster_id; // rdx
  const std::map<unsigned int,MonsterScriptConfig>::key_type *v22; // rsi
  bool v23; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::pointer v24; // rax
  uint32_t *p_kill_score; // rax
  uint32_t kill_score; // ecx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  MonsterScriptConfig *v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rsi
  unsigned int *v48; // rax
  google::protobuf::uint32 *v49; // rdx
  unsigned __int64 v50; // rax
  common::milog::MiLogStream *v51; // rdx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // r14
  __int64 v54; // rsi
  int32_t ret; // [rsp+14h] [rbp-44Ch]
  uint32_t monster_level; // [rsp+18h] [rbp-448h]
  data::IrodoriChessMapExcelConfigMap *__for_range; // [rsp+20h] [rbp-440h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-438h]
  const std::unordered_map<unsigned int,proto::IrodoriChessEntranceDetailInfo>::key_type *id; // [rsp+30h] [rbp-430h]
  std::tuple_element<1,std::pair<unsigned int const,data::IrodoriChessMapExcelConfig> >::type *config; // [rsp+38h] [rbp-428h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+40h] [rbp-420h]
  std::unordered_map<unsigned int,proto::IrodoriChessEntranceDetailInfo>::mapped_type *proto_entrance_detail_info; // [rsp+48h] [rbp-418h]
  std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-410h]
  data::IrodoriChessMapPointExcelConfig *point_config_ptr; // [rsp+58h] [rbp-408h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+60h] [rbp-400h]
  proto::IrodoriChessEntranceInfo *proto_entrance_info; // [rsp+68h] [rbp-3F8h]
  std::map<unsigned int,MonsterScriptConfig> *__for_range_3; // [rsp+70h] [rbp-3F0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::reference v70; // [rsp+78h] [rbp-3E8h]
  std::tuple_element<0,std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_id; // [rsp+80h] [rbp-3E0h]
  std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_config_0; // [rsp+88h] [rbp-3D8h]
  proto::IrodoriChessMonsterInfo *proto_monster_info; // [rsp+90h] [rbp-3D0h]
  const std::set<unsigned int> *__for_range_4; // [rsp+98h] [rbp-3C8h]
  const std::map<unsigned int,MonsterScriptConfig> *pool_map_ptr; // [rsp+A0h] [rbp-3C0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::reference v76; // [rsp+B0h] [rbp-3B0h]
  std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_config; // [rsp+C0h] [rbp-3A0h]
  const MonsterScriptConfig *prev_monster_config; // [rsp+C8h] [rbp-398h]
  char v79[912]; // [rsp+D0h] [rbp-390h] BYREF

  v2 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(864LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "21 48 4 21 entrance_point_id:673 64 4 19 monster_pool_id:681 80 8 15 __for_begin:663 112 8 13 __"
                        "for_end:663 144 8 15 __for_begin:673 176 8 13 __for_end:673 208 8 15 __for_begin:681 240 8 13 __"
                        "for_end:681 272 8 15 __for_begin:688 304 8 13 __for_end:688 336 8 8 iter:690 368 8 9 <unknown> 4"
                        "00 8 15 __for_begin:717 432 8 13 __for_end:717 464 8 15 __for_begin:721 496 8 13 __for_end:721 5"
                        "28 32 9 <unknown> 592 32 9 <unknown> 656 32 9 <unknown> 720 32 9 <unknown> 784 48 35 monster_id_"
                        "to_script_config_map:680";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::rewriteIrodoriChessMapExcelConfig;
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
  v4[536862737] = -219021312;
  v4[536862738] = 62194;
  v4[536862739] = -219021312;
  v4[536862740] = 62194;
  v4[536862741] = -219021312;
  v4[536862742] = 62194;
  v4[536862743] = -219021312;
  v4[536862744] = 62194;
  v4[536862746] = -202116109;
  ret = 0;
  __for_range = &this->irodori_chess_map_excel_config_map;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessMapExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::IrodoriChessMapExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessMapExcelConfig>::iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::IrodoriChessMapExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig>,false> *)(v2 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig>,false> *)(v2 + 112)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig>,false,false> *const)(v2 + 80));
    id = std::get<0ul,unsigned int const,data::IrodoriChessMapExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::IrodoriChessMapExcelConfig>(__in);
    monster_level = 1;
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    p_dungeon_id = &config->dungeon_id;
    if ( *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_dungeon_id);
    }
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           p_dungeon_config_mgr,
                           config->dungeon_id);
    if ( dungeon_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->level_revise >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->level_revise >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dungeon_config_ptr->level_revise);
      }
      monster_level = dungeon_config_ptr->level_revise + 1;
    }
    proto_entrance_detail_info = std::unordered_map<unsigned int,proto::IrodoriChessEntranceDetailInfo>::operator[](
                                   &this->map_id_to_entrance_detail_info_map_,
                                   id);
    __for_range_0 = &config->entrance_point_list;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, id);
    *(std::vector<unsigned int>::iterator *)(v2 + 144) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, id);
    *(std::vector<unsigned int>::iterator *)(v2 + 176) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v2 + 176);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 144),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 176)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 144));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v7) = v11 != 0;
        __asan_report_store4(v2 + 48, v7);
      }
      *(_DWORD *)(v2 + 48) = v10;
      v12 = *(unsigned int *)(v2 + 48);
      point_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessMapPointExcelConfig(this, v12);
      if ( point_config_ptr )
      {
        v13 = ((v2 + 784) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_WORD *)(v13 + 4) = 0;
        std::map<unsigned int,MonsterScriptConfig>::map((std::map<unsigned int,MonsterScriptConfig> *const)(v2 + 784));
        __for_range_1 = &point_config_ptr->monster_pool_list;
        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 208, v12);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 208) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 240, v12);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 240) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v14 = (char *)(v2 + 240);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 208),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 240)) )
            break;
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
          v15 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 208));
          v16 = (int *)v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v15);
          }
          v17 = *v16;
          v18 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
          if ( v18 != 0 && v18 <= 3 )
          {
            LOBYTE(v14) = v18 != 0;
            __asan_report_store4(v2 + 64, v14);
          }
          *(_DWORD *)(v2 + 64) = v17;
          p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
          if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 64);
          v20 = *(unsigned int *)(v2 + 64);
          pool_map_ptr = LuaConfigMgr::findMonsterPoolByPoolId(p_lua_config_mgr, v20);
          if ( pool_map_ptr )
          {
            *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 272, v20);
            *(std::map<unsigned int,MonsterScriptConfig>::const_iterator *)(v2 + 272) = std::map<unsigned int,MonsterScriptConfig>::begin(pool_map_ptr);
            *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 304, v20);
            *(std::map<unsigned int,MonsterScriptConfig>::const_iterator *)(v2 + 304) = std::map<unsigned int,MonsterScriptConfig>::end(pool_map_ptr);
            while ( std::operator!=(
                      (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)(v2 + 272),
                      (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)(v2 + 304)) )
            {
              v76 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)(v2 + 272));
              std::get<0ul,unsigned int const,MonsterScriptConfig>(v76);
              monster_config = (std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *)std::get<1ul,unsigned int const,MonsterScriptConfig>(v76);
              *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
              p_monster_id = &monster_config->monster_id;
              if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 336, v2 + 304);
              v22 = p_monster_id;
              *(std::map<unsigned int,MonsterScriptConfig>::iterator *)(v2 + 336) = std::map<unsigned int,MonsterScriptConfig>::find(
                                                                                      (std::map<unsigned int,MonsterScriptConfig> *const)(v2 + 784),
                                                                                      p_monster_id);
              *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 368, v22);
              *(std::map<unsigned int,MonsterScriptConfig>::iterator *)(v2 + 368) = std::map<unsigned int,MonsterScriptConfig>::end((std::map<unsigned int,MonsterScriptConfig> *const)(v2 + 784));
              v23 = std::operator!=(
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)(v2 + 336),
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)(v2 + 368));
              *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
              if ( v23 )
              {
                v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)(v2 + 336));
                prev_monster_config = &v24->second;
                p_kill_score = &v24->second.kill_score;
                if ( *(_BYTE *)(((unsigned __int64)p_kill_score >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_kill_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_kill_score >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_load4(p_kill_score);
                }
                kill_score = prev_monster_config->kill_score;
                if ( *(_BYTE *)(((unsigned __int64)&monster_config->kill_score >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)monster_config - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config->kill_score >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4(&monster_config->kill_score);
                }
                if ( kill_score != monster_config->kill_score )
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
                    "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
                    "rewriteIrodoriChessMapExcelConfig",
                    696);
                  v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 528),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v28 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                          v27,
                          (const char (*)[8])byte_1AA63780);
                  v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, id);
                  v30 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v29,
                          (const char (*)[12])byte_1AA64AA0);
                  v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v30,
                          (const unsigned int *)(v2 + 48));
                  v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v31,
                          (const char (*)[12])byte_1AA64AE0);
                  v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v32,
                          (const unsigned int *)(v2 + 64));
                  v34 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v33,
                          (const char (*)[9])byte_1AA64B20);
                  v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v34,
                          &monster_config->monster_id);
                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    v35,
                    (const char (*)[36])byte_1AA64B60);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 528));
                  *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
                if ( std::operator!=<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
                       &prev_monster_config->affix_set,
                       &monster_config->affix_set) )
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
                    "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
                    "rewriteIrodoriChessMapExcelConfig",
                    701);
                  v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 592),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v37 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                          v36,
                          (const char (*)[8])byte_1AA63780);
                  v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, id);
                  v39 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v38,
                          (const char (*)[12])byte_1AA64AA0);
                  v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v39,
                          (const unsigned int *)(v2 + 48));
                  v41 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v40,
                          (const char (*)[12])byte_1AA64AE0);
                  v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v41,
                          (const unsigned int *)(v2 + 64));
                  v43 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v42,
                          (const char (*)[9])byte_1AA64B20);
                  v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v43,
                          &monster_config->monster_id);
                  common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    v44,
                    (const char (*)[32])byte_1AA64BC0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 592));
                  *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
              }
              else
              {
                v45 = std::map<unsigned int,MonsterScriptConfig>::operator[](
                        (std::map<unsigned int,MonsterScriptConfig> *const)(v2 + 784),
                        &monster_config->monster_id);
                MonsterScriptConfig::operator=(v45, monster_config);
              }
              *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
              std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)(v2 + 272));
            }
            *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 208));
        }
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
        if ( !std::map<unsigned int,MonsterScriptConfig>::empty((const std::map<unsigned int,MonsterScriptConfig> *const)(v2 + 784)) )
        {
          proto_entrance_info = proto::IrodoriChessEntranceDetailInfo::add_info_list(proto_entrance_detail_info);
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 48);
          v46 = *(unsigned int *)(v2 + 48);
          proto::IrodoriChessEntranceInfo::set_entrance_point_id(proto_entrance_info, v46);
          __for_range_3 = (std::map<unsigned int,MonsterScriptConfig> *)(v2 + 784);
          *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 400, v46);
          *(std::map<unsigned int,MonsterScriptConfig>::iterator *)(v2 + 400) = std::map<unsigned int,MonsterScriptConfig>::begin(__for_range_3);
          *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 432, v46);
          *(std::map<unsigned int,MonsterScriptConfig>::iterator *)(v2 + 432) = std::map<unsigned int,MonsterScriptConfig>::end(__for_range_3);
          while ( std::operator!=(
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)(v2 + 400),
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)(v2 + 432)) )
          {
            v70 = std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)(v2 + 400));
            monster_id = std::get<0ul,unsigned int const,MonsterScriptConfig>(v70);
            monster_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *)std::get<1ul,unsigned int const,MonsterScriptConfig>(v70);
            proto_monster_info = proto::IrodoriChessEntranceInfo::add_monster_info_list(proto_entrance_info);
            if ( *(_BYTE *)(((unsigned __int64)monster_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)monster_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)monster_id >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(monster_id);
            }
            v47 = *monster_id;
            proto::IrodoriChessMonsterInfo::set_monster_id(proto_monster_info, v47);
            __for_range_4 = &monster_config_0->affix_set;
            *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 464, v47);
            *(std::set<unsigned int>::iterator *)(v2 + 464) = std::set<unsigned int>::begin(__for_range_4);
            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 496, v47);
            *(std::set<unsigned int>::iterator *)(v2 + 496) = std::set<unsigned int>::end(__for_range_4);
            while ( std::operator!=(
                      (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 464),
                      (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 496)) )
            {
              v48 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 464));
              v49 = v48;
              if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v48);
              }
              proto::IrodoriChessMonsterInfo::add_affix_list(proto_monster_info, *v49);
              std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 464));
            }
            *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
            proto::IrodoriChessMonsterInfo::set_level(proto_monster_info, monster_level);
            if ( *(_BYTE *)(((unsigned __int64)&monster_config_0->kill_score >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)monster_config_0 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_0->kill_score >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&monster_config_0->kill_score);
            }
            proto::IrodoriChessMonsterInfo::set_grant_points(proto_monster_info, monster_config_0->kill_score);
            std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)(v2 + 400));
          }
          *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
        }
        std::map<unsigned int,MonsterScriptConfig>::~map((std::map<unsigned int,MonsterScriptConfig> *const)(v2 + 784));
      }
      v50 = ((v2 + 784) >> 3) + 2147450880;
      *(_DWORD *)v50 = -117901064;
      *(_WORD *)(v50 + 4) = -1800;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 144));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 656) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 687) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 687) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 656, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 656),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "rewriteIrodoriChessMapExcelConfig",
      729);
    v51 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
            (common::milog::MiLogStream *const)(v2 + 656),
            (const char (*)[5])"map:");
    v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, id);
    v53 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v52,
            (const char (*)[23])" entrance_detail_info:");
    *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = 0;
    v54 = (__int64)proto_entrance_detail_info;
    if ( *(char *)(((v2 + 720) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 17) & 7) >= *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) )
    {
      v54 = 32LL;
      __asan_report_store_n(v2 + 720, 32LL);
    }
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)(v2 + 720), (google::protobuf::Message *)v54);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v53, (const std::string *)(v2 + 720));
    std::string::~string((void *)(v2 + 720));
    *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = -117901064;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 656));
    *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = -117901064;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig>,false,false> *const)(v2 + 80));
  }
  if ( v79 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
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
  return ret;
};

// Line 735: range 0000000012C63D0A-0000000012C63D1C
int32_t __cdecl ActivityIrodoriExcelConfigMgr::rewriteIrodoriChessMapPointExcelConfig(
        ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 740: range 0000000012C63D1E-0000000012C63D30
int32_t __cdecl ActivityIrodoriExcelConfigMgr::rewriteIrodoriChessDisorderExcelConfig(
        ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 745: range 0000000012C63D32-0000000012C64021
int32_t __cdecl ActivityIrodoriExcelConfigMgr::rewriteIrodoriChessCardExcelConfig(
        ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t *p_effect_index; // rax
  __int64 v6; // rsi
  std::vector<data::IrodoriChessCardEffect>::reference v7; // rdx
  char v8; // cl
  int32_t result; // eax
  int i; // [rsp+18h] [rbp-B8h]
  data::IrodoriChessCardExcelConfigMap *__for_range; // [rsp+20h] [rbp-B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-A8h]
  std::tuple_element<1,std::pair<unsigned int const,data::IrodoriChessCardExcelConfig> >::type *config; // [rsp+38h] [rbp-98h]
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false,false> *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:747 64 8 13 __for_end:747";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false>::__node_type *)ActivityIrodoriExcelConfigMgr::rewriteIrodoriChessCardExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->irodori_chess_card_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::IrodoriChessCardExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::IrodoriChessCardExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::IrodoriChessCardExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::IrodoriChessCardExcelConfig>(__in);
    p_effect_index = &config->effect.effect_index;
    if ( *(_BYTE *)(((unsigned __int64)p_effect_index >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_effect_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_effect_index >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_store4(p_effect_index, (((_BYTE)config + 108) & 7u) + 3);
    }
    config->effect.effect_index = 0;
    for ( i = 0; i < std::vector<data::IrodoriChessCardEffect>::size(&config->extra_effect_list); ++i )
    {
      v6 = i;
      v7 = std::vector<data::IrodoriChessCardEffect>::operator[](&config->extra_effect_list, i);
      v8 = *(_BYTE *)(((unsigned __int64)&v7->effect_index >> 3) + 0x7FFF8000);
      if ( v8 != 0 && (char)((((_BYTE)v7 + 92) & 7) + 3) >= v8 )
      {
        LOBYTE(v6) = v8 != 0;
        __asan_report_store4(&v7->effect_index, v6);
      }
      v7->effect_index = i + 1;
    }
    common::tools::MiscUtils::removeEmptyElement<data::IrodoriChessCardEffect,data::IrodoriChessCardEffectType data::IrodoriChessCardEffect::*>(
      &config->extra_effect_list,
      (data::IrodoriChessCardEffectType *)0x28);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 760: range 0000000012C64022-0000000012C644CC
int32_t __cdecl ActivityIrodoriExcelConfigMgr::rewriteIrodoriPoetryExcelConfig(
        ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  const unsigned int *v6; // rdx
  int32_t result; // eax
  data::IrodoriPoetryExcelConfigMap *__for_range; // [rsp+18h] [rbp-148h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-140h]
  const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *theme_id; // [rsp+28h] [rbp-138h]
  std::tuple_element<1,std::pair<unsigned int const,data::IrodoriPoetryExcelConfig> >::type *theme_config; // [rsp+30h] [rbp-130h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::mapped_type *index_set; // [rsp+38h] [rbp-128h]
  std::vector<data::IrodoriPoetryScanConfig> *__for_range_0; // [rsp+40h] [rbp-120h]
  std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-110h]
  char v15[256]; // [rsp+60h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:761 64 8 13 __for_end:761 96 8 15 __for_begin:765 128 8 13 __for_end:765 1"
                        "60 8 15 __for_begin:767 192 8 13 __for_end:767";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::rewriteIrodoriPoetryExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -202116352;
  __for_range = &this->irodori_poetry_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriPoetryExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::IrodoriPoetryExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriPoetryExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::IrodoriPoetryExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false,false> *const)(v2 + 32));
    theme_id = std::get<0ul,unsigned int const,data::IrodoriPoetryExcelConfig>(__in);
    theme_config = std::get<1ul,unsigned int const,data::IrodoriPoetryExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::IrodoriPoetryScanConfig,unsigned int data::IrodoriPoetryScanConfig::*>(
      &theme_config->scan_config_list,
      (unsigned int *)0x20);
    index_set = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                  &this->theme_index_set_map_,
                  theme_id);
    __for_range_0 = &theme_config->scan_config_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, theme_id);
    *(std::vector<data::IrodoriPoetryScanConfig>::iterator *)(v2 + 96) = std::vector<data::IrodoriPoetryScanConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, theme_id);
    *(std::vector<data::IrodoriPoetryScanConfig>::iterator *)(v2 + 128) = std::vector<data::IrodoriPoetryScanConfig>::end(__for_range_0);
    while ( 1 )
    {
      v5 = (char *)(v2 + 128);
      if ( !__gnu_cxx::operator!=<data::IrodoriPoetryScanConfig *,std::vector<data::IrodoriPoetryScanConfig>>(
              (const __gnu_cxx::__normal_iterator<data::IrodoriPoetryScanConfig*,std::vector<data::IrodoriPoetryScanConfig> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<data::IrodoriPoetryScanConfig*,std::vector<data::IrodoriPoetryScanConfig> > *)(v2 + 128)) )
        break;
      __for_range_1 = &__gnu_cxx::__normal_iterator<data::IrodoriPoetryScanConfig *,std::vector<data::IrodoriPoetryScanConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::IrodoriPoetryScanConfig*,std::vector<data::IrodoriPoetryScanConfig> > *const)(v2 + 96))->index_id_list;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v5);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, v5);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::end(__for_range_1);
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192)) )
      {
        v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 160));
        std::unordered_set<unsigned int>::emplace<unsigned int const&>(index_set, v6, v6);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 160));
      }
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      __gnu_cxx::__normal_iterator<data::IrodoriPoetryScanConfig *,std::vector<data::IrodoriPoetryScanConfig>>::operator++((__gnu_cxx::__normal_iterator<data::IrodoriPoetryScanConfig*,std::vector<data::IrodoriPoetryScanConfig> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
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

// Line 777: range 0000000012C644CE-0000000012C6459F
bool __fastcall ActivityIrodoriExcelConfigMgr::isIrodoriTowerGadget(
        const ActivityIrodoriExcelConfigMgr *const this,
        uint32_t gadget_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 gadget_id:776";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::isIrodoriTowerGadget;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = gadget_id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->tower_gadgets_set_,
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

// Line 782: range 0000000012C645A0-0000000012C672B5
int32_t __cdecl ActivityIrodoriExcelConfigMgr::checkCardEffect(
        const ActivityIrodoriExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr,
        const data::IrodoriChessCardEffect *effect)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int *v6; // rax
  int *v7; // rdx
  int v8; // ecx
  char v9; // al
  common::milog::MiLogStream *v10; // rax
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
  common::milog::MiLogStream *v22; // r15
  __int64 v23; // rax
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
  uint32_t *p_build_cost; // rax
  double v49; // xmm1_8
  __int64 v50; // rsi
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  unsigned __int64 v62; // rax
  bool v63; // r15
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  unsigned __int64 v69; // rax
  std::string *M_current; // r15
  std::vector<std::string>::iterator v71; // rax
  const char *v72; // rsi
  std::set<std::string>::size_type v73; // r15
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rdx
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
  TxtConfigMgr *txt_config_mgra; // [rsp+10h] [rbp-790h]
  int32_t ret; // [rsp+24h] [rbp-77Ch]
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-778h]
  const JsonConfigMgr *json_config_mgr; // [rsp+30h] [rbp-770h]
  std::vector<std::string> *__for_range_1; // [rsp+38h] [rbp-768h]
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >::reference ability_group; // [rsp+40h] [rbp-760h]
  data::IrodoriChessGearExcelConfigMap *__for_range_0; // [rsp+50h] [rbp-750h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false,false>::reference v117; // [rsp+58h] [rbp-748h]
  std::tuple_element<0,std::pair<unsigned int const,data::IrodoriChessGearExcelConfig> >::type *gear_id; // [rsp+60h] [rbp-740h]
  std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriChessGearExcelConfig> >::type *gear_config; // [rsp+68h] [rbp-738h]
  char v120[1840]; // [rsp+70h] [rbp-730h] BYREF

  txt_config_mgra = txt_config_mgr;
  v3 = (unsigned __int64)v120;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1792LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "33 32 1 9 <unknown> 48 4 13 gadget_id:786 64 4 17 result_refund:855 80 8 15 __for_begin:786 112 "
                        "8 13 __for_end:786 144 8 9 <unknown> 176 8 15 __for_begin:853 208 8 13 __for_end:853 240 8 15 __"
                        "for_begin:883 272 8 13 __for_end:883 304 24 21 ability_group_vec:871 368 32 9 <unknown> 432 32 9"
                        " <unknown> 496 32 9 <unknown> 560 32 9 <unknown> 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 "
                        "<unknown> 816 32 9 <unknown> 880 32 9 <unknown> 944 32 9 <unknown> 1008 32 9 <unknown> 1072 32 9"
                        " <unknown> 1136 32 9 <unknown> 1200 32 9 <unknown> 1264 32 9 <unknown> 1328 32 9 <unknown> 1392 "
                        "32 9 <unknown> 1456 32 9 <unknown> 1520 32 9 <unknown> 1584 32 9 <unknown> 1648 32 9 <unknown> 1"
                        "712 48 21 ability_group_set:877";
  *(_QWORD *)(v3 + 16) = ActivityIrodoriExcelConfigMgr::checkCardEffect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
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
  v5[536862750] = -219021312;
  v5[536862751] = 62194;
  v5[536862752] = -219021312;
  v5[536862753] = 62194;
  v5[536862754] = -219021312;
  v5[536862755] = 62194;
  v5[536862756] = -219021312;
  v5[536862757] = 62194;
  v5[536862758] = -219021312;
  v5[536862759] = 62194;
  v5[536862760] = -219021312;
  v5[536862761] = 62194;
  v5[536862762] = -219021312;
  v5[536862763] = 62194;
  v5[536862764] = -219021312;
  v5[536862765] = 62194;
  v5[536862766] = -219021312;
  v5[536862767] = 62194;
  v5[536862768] = -219021312;
  v5[536862769] = 62194;
  v5[536862770] = -219021312;
  v5[536862771] = 62194;
  v5[536862772] = -219021312;
  v5[536862773] = 62194;
  v5[536862775] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&effect->target_type);
  }
  if ( effect->target_type == IRODORI_CHESS_CARD_TARGET_GADGETS )
  {
    __for_range = &effect->target_param_list;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 80, txt_config_mgr);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 80) = std::vector<unsigned int>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, txt_config_mgr);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 112) = std::vector<unsigned int>::end(__for_range);
    while ( 1 )
    {
      txt_config_mgr = (TxtConfigMgr *)(v3 + 112);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 80),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 112)) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 80));
      v7 = (int *)v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      v8 = *v7;
      v9 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v9 != 0 && v9 <= 3 )
      {
        LOBYTE(txt_config_mgr) = v9 != 0;
        __asan_report_store4(v3 + 48, txt_config_mgr);
      }
      *(_DWORD *)(v3 + 48) = v8;
      if ( !ActivityIrodoriExcelConfigMgr::isIrodoriTowerGadget(this, *(_DWORD *)(v3 + 48)) )
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkCardEffect",
          790);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 368),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])byte_1AA27E40);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v12, (const char (*)[27])byte_1AA65020);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 80));
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  }
  json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgra)->json_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&effect->effect_type);
  }
  switch ( effect->effect_type )
  {
    case IRODORI_CHESS_CARD_EFFECT_ADD_SGV:
      if ( *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->target_type);
      }
      if ( effect->target_type == IRODORI_CHESS_CARD_TARGET_GADGETS )
      {
        if ( std::vector<unsigned int>::empty(&effect->target_param_list) )
        {
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 432, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkCardEffect",
            807);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 432),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])byte_1AA27EC0);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &effect->effect_index);
          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v15, (const char (*)[38])byte_1AA65060);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect->target_type);
        }
        if ( effect->target_type == IRODORI_CHESS_CARD_TARGET_ALL )
        {
          if ( !std::vector<unsigned int>::empty(&effect->target_param_list) )
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
              "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
              "checkCardEffect",
              815);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 496),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])byte_1AA27EC0);
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &effect->effect_index);
            common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v18, (const char (*)[32])byte_1AA650C0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
            *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
        {
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
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkCardEffect",
            821);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 560),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])byte_1AA27EC0);
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &effect->effect_index);
          v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v21, (const char (*)[15])byte_1AA65100);
          *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&effect->target_type);
          }
          v23 = (__int64)data::enumValToStr(effect->target_type, (__int64)byte_1AA65100);
          if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
            v23 = __asan_report_store8(v3 + 144, byte_1AA65100);
          *(_QWORD *)(v3 + 144) = v23;
          v24 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v22,
                  (const char *const *)(v3 + 144));
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])byte_1AA207E0);
          *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
          *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      if ( !JsonConfigMgr::isAbilityStringExist(json_config_mgr, &effect->effect_str_param) )
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkCardEffect",
          826);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 624),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])byte_1AA27EC0);
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &effect->effect_index);
        v28 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v27, (const char (*)[15])byte_1AA27F00);
        v29 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, &effect->effect_str_param);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v29, (const char (*)[23])byte_1AA65140);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
        *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( !effect->effect_param1 )
      {
        *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 688) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 688, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 688),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkCardEffect",
          831);
        v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 688),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v31 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v30, (const char (*)[8])byte_1AA27EC0);
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &effect->effect_index);
        v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v32, (const char (*)[6])" SGV:");
        v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, &effect->effect_str_param);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v34, (const char (*)[15])byte_1AA27F80);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 688));
        ret = -1;
      }
      break;
    case IRODORI_CHESS_CARD_EFFECT_ADD_GEAR_NUM:
      if ( *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->target_type);
      }
      if ( effect->target_type )
      {
        *(_DWORD *)(((v3 + 1328) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1328) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1359) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 1359) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1328, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1328),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkCardEffect",
          898);
        v84 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1328),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v85 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v84, (const char (*)[8])byte_1AA27EC0);
        v86 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v85, &effect->effect_index);
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v86, (const char (*)[47])byte_1AA65500);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1328));
        *(_DWORD *)(((v3 + 1328) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( effect->effect_param1 <= 0 )
      {
        *(_DWORD *)(((v3 + 1392) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1392) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1423) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 1423) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1392, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1392),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkCardEffect",
          903);
        v87 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1392),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v88 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v87, (const char (*)[8])byte_1AA27EC0);
        v89 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v88, &effect->effect_index);
        v90 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v89, (const char (*)[21])byte_1AA28080);
        v91 = common::milog::MiLogStream::operator<<<int,(int *)0>(v90, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v91, (const char (*)[17])byte_1AA65560);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1392));
        ret = -1;
      }
      break;
    case IRODORI_CHESS_CARD_EFFECT_MOD_REFUND_BY_COST:
      if ( *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->target_type);
      }
      if ( effect->target_type )
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkCardEffect",
          840);
        v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 752),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v36 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v35, (const char (*)[8])byte_1AA27EC0);
        v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &effect->effect_index);
        txt_config_mgr = (TxtConfigMgr *)byte_1AA651C0;
        common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v37, (const char (*)[56])byte_1AA651C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 752));
        *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( effect->effect_param1 <= 0 )
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkCardEffect",
          845);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 816),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v39 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v38, (const char (*)[8])byte_1AA27EC0);
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &effect->effect_index);
        v41 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v40, (const char (*)[30])byte_1AA65220);
        v42 = common::milog::MiLogStream::operator<<<int,(int *)0>(v41, &effect->effect_param1);
        txt_config_mgr = (TxtConfigMgr *)byte_1AA65260;
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v42, (const char (*)[18])byte_1AA65260);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 816));
        *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( effect->effect_param1 > 10000 )
      {
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkCardEffect",
          850);
        v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 880),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v44 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v43, (const char (*)[8])byte_1AA27EC0);
        v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &effect->effect_index);
        v46 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v45, (const char (*)[30])byte_1AA65220);
        v47 = common::milog::MiLogStream::operator<<<int,(int *)0>(v46, &effect->effect_param1);
        txt_config_mgr = (TxtConfigMgr *)byte_1AA652A0;
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v47, (const char (*)[40])byte_1AA652A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 880));
        *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __for_range_0 = &this->irodori_chess_gear_excel_config_map;
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 176, txt_config_mgr);
      *(std::unordered_map<unsigned int,data::IrodoriChessGearExcelConfig>::const_iterator *)(v3 + 176) = std::unordered_map<unsigned int,data::IrodoriChessGearExcelConfig>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 208, txt_config_mgr);
      *(std::unordered_map<unsigned int,data::IrodoriChessGearExcelConfig>::const_iterator *)(v3 + 208) = std::unordered_map<unsigned int,data::IrodoriChessGearExcelConfig>::end(__for_range_0);
      while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false> *)(v3 + 176),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false> *)(v3 + 208)) )
      {
        v117 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false,false> *const)(v3 + 176));
        gear_id = std::get<0ul,unsigned int const,data::IrodoriChessGearExcelConfig>(v117);
        gear_config = (std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriChessGearExcelConfig> >::type *)std::get<1ul,unsigned int const,data::IrodoriChessGearExcelConfig>(v117);
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        p_build_cost = &gear_config->build_cost;
        if ( *(_BYTE *)(((unsigned __int64)p_build_cost >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gear_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_build_cost >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_build_cost);
        }
        v49 = 0.0001 * (double)(int)gear_config->build_cost;
        if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect->effect_param1);
        }
        v50 = (unsigned int)(int)((double)effect->effect_param1 * v49);
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 64, v50);
        *(_DWORD *)(v3 + 64) = v50;
        if ( *(_BYTE *)(((unsigned __int64)&gear_config->demolition_refund >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gear_config->demolition_refund >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gear_config->demolition_refund);
        }
        if ( gear_config->demolition_refund > *(_DWORD *)(v3 + 64) )
        {
          *(_DWORD *)(((v3 + 944) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 944) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 944, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 944),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkCardEffect",
            858);
          v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 944),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v52 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v51, (const char (*)[8])byte_1AA27EC0);
          v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &effect->effect_index);
          v54 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v53, (const char (*)[30])byte_1AA65220);
          v55 = common::milog::MiLogStream::operator<<<int,(int *)0>(v54, &effect->effect_param1);
          v56 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v55, (const char (*)[18])byte_1AA65300);
          v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, gear_id);
          v58 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v57, (const char (*)[40])byte_1AA65340);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 944));
          *(_DWORD *)(((v3 + 944) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessGearExcelConfig>,false,false> *const)(v3 + 176));
      }
      break;
    case IRODORI_CHESS_CARD_EFFECT_ADD_ABILITY_GROUP:
      if ( *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->target_type);
      }
      if ( effect->target_type )
      {
        *(_DWORD *)(((v3 + 1008) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1008) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1039) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 1039) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1008, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1008),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkCardEffect",
          868);
        v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1008),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v60 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v59, (const char (*)[8])byte_1AA27EC0);
        v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &effect->effect_index);
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v61, (const char (*)[44])byte_1AA653A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1008));
        *(_DWORD *)(((v3 + 1008) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      v62 = ((v3 + 304) >> 3) + 2147450880;
      *(_WORD *)v62 = 0;
      *(_BYTE *)(v62 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 304));
      *(_DWORD *)(((v3 + 1072) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 1072),
        ",",
        (const std::allocator<char> *)(v3 + 32));
      v63 = common::tools::StringUtils::split(
              &effect->effect_str_param,
              (const std::string *)(v3 + 1072),
              (std::vector<std::string> *)(v3 + 304),
              1) != 0;
      std::string::~string((void *)(v3 + 1072));
      *(_DWORD *)(((v3 + 1072) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 32);
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v63 )
      {
        *(_DWORD *)(((v3 + 1136) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1136) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1167) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 1167) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1136, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1136),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkCardEffect",
          874);
        v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1136),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v65 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v64, (const char (*)[8])byte_1AA27EC0);
        v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, &effect->effect_index);
        v67 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v66, (const char (*)[18])byte_1AA65400);
        v68 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v67, &effect->effect_str_param);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v68, (const char (*)[30])byte_1AA65440);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1136));
        *(_DWORD *)(((v3 + 1136) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      v69 = ((v3 + 1712) >> 3) + 2147450880;
      *(_DWORD *)v69 = 0;
      *(_WORD *)(v69 + 4) = 0;
      M_current = std::vector<std::string>::begin((std::vector<std::string> *const)(v3 + 304))._M_current;
      v71._M_current = std::vector<std::string>::end((std::vector<std::string> *const)(v3 + 304))._M_current;
      v72 = (const char *)M_current;
      std::set<std::string>::set<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string>>>(
        (std::set<std::string> *const)(v3 + 1712),
        (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)M_current,
        v71);
      v73 = std::set<std::string>::size((const std::set<std::string> *const)(v3 + 1712));
      if ( v73 != std::vector<std::string>::size((const std::vector<std::string> *const)(v3 + 304)) )
      {
        *(_DWORD *)(((v3 + 1200) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1200) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1231) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 1231) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1200, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1200),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkCardEffect",
          880);
        v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1200),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v75 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v74, (const char (*)[8])byte_1AA27EC0);
        v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v75, &effect->effect_index);
        v77 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v76, (const char (*)[18])byte_1AA65400);
        v78 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v77, &effect->effect_str_param);
        v72 = byte_1AA65480;
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v78, (const char (*)[31])byte_1AA65480);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1200));
        *(_DWORD *)(((v3 + 1200) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __for_range_1 = (std::vector<std::string> *)(v3 + 304);
      *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 240, v72);
      *(std::vector<std::string>::iterator *)(v3 + 240) = std::vector<std::string>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 272, v72);
      *(std::vector<std::string>::iterator *)(v3 + 272) = std::vector<std::string>::end(__for_range_1);
      while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 240),
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 272)) )
      {
        ability_group = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 240));
        if ( !JsonConfigMgr::findAbilityGroupConfig(json_config_mgr, ability_group) )
        {
          *(_DWORD *)(((v3 + 1264) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1264) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1295) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 1295) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1264, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1264),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkCardEffect",
            888);
          v79 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1264),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v80 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v79, (const char (*)[8])byte_1AA27EC0);
          v81 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v80, &effect->effect_index);
          v82 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v81, (const char (*)[18])byte_1AA65400);
          v83 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v82, ability_group);
          common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v83, (const char (*)[22])byte_1AA654C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1264));
          *(_DWORD *)(((v3 + 1264) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 240));
      }
      *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
      std::set<std::string>::~set((std::set<std::string> *const)(v3 + 1712));
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 304));
      break;
    case IRODORI_CHESS_CARD_EFFECT_ADD_TARGET_GEAR_NUM:
      if ( *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->target_type);
      }
      if ( effect->target_type == IRODORI_CHESS_CARD_TARGET_GADGETS )
      {
        if ( std::vector<unsigned int>::empty(&effect->target_param_list) )
        {
          *(_DWORD *)(((v3 + 1520) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1520) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1551) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 1551) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1520, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1520),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkCardEffect",
            917);
          v95 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1520),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v96 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v95, (const char (*)[8])byte_1AA27EC0);
          v97 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v96, &effect->effect_index);
          common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v97, (const char (*)[58])byte_1AA65600);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1520));
          *(_DWORD *)(((v3 + 1520) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 1456) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1456) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1487) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 1487) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1456, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1456),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkCardEffect",
          912);
        v92 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1456),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v93 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v92, (const char (*)[8])byte_1AA27EC0);
        v94 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v93, &effect->effect_index);
        common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v94, (const char (*)[64])byte_1AA655A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1456));
        *(_DWORD *)(((v3 + 1456) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect->effect_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect->effect_param1);
      }
      if ( effect->effect_param1 <= 0 )
      {
        *(_DWORD *)(((v3 + 1584) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1584) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1615) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 1615) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1584, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1584),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkCardEffect",
          922);
        v98 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1584),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v99 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v98, (const char (*)[8])byte_1AA27EC0);
        v100 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v99, &effect->effect_index);
        v101 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v100, (const char (*)[33])byte_1AA65660);
        v102 = common::milog::MiLogStream::operator<<<int,(int *)0>(v101, &effect->effect_param1);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v102, (const char (*)[17])byte_1AA65560);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1584));
        ret = -1;
      }
      break;
    case IRODORI_CHESS_CARD_EFFECT_LUA_CUSTOM:
      break;
    default:
      *(_DWORD *)(((v3 + 1648) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1648) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1679) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 1679) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1648, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1648),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
        "checkCardEffect",
        929);
      v103 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 1648),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v104 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v103, (const char (*)[8])byte_1AA27EC0);
      v105 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v104, &effect->effect_index);
      v106 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v105, (const char (*)[9])byte_1AA286E0);
      v107 = common::milog::MiLogStream::operator<<<data::IrodoriChessCardEffectType,(data::IrodoriChessCardEffectType*)0>(
               v106,
               &effect->effect_type);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v107, (const char (*)[10])byte_1AA1B080);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1648));
      ret = -1;
      break;
  }
  if ( v120 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80D0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 216) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF80DC) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1792LL, v120);
  }
  return ret;
};

// Line 938: range 0000000012C672B6-0000000012C678EA
int32_t __cdecl ActivityIrodoriExcelConfigMgr::finalIrodoriChessCardExcelConfig(
        ActivityIrodoriExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  TxtConfigMgr *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  std::vector<data::IrodoriChessCardEffect>::size_type v9; // rdx
  const data::IrodoriChessCardEffect *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-144h]
  data::IrodoriChessCardExcelConfigMap *__for_range; // [rsp+20h] [rbp-140h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false,false>::reference v20; // [rsp+28h] [rbp-138h]
  std::tuple_element<0,std::pair<unsigned int const,data::IrodoriChessCardExcelConfig> >::type *id; // [rsp+30h] [rbp-130h]
  std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriChessCardExcelConfig> >::type *config; // [rsp+38h] [rbp-128h]
  char v23[288]; // [rsp+40h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:940 64 8 13 __for_end:940 96 8 5 i:947 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::finalIrodoriChessCardExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->irodori_chess_card_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessCardExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::IrodoriChessCardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriChessCardExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::IrodoriChessCardExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false> *)(v2 + 64)) )
  {
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::IrodoriChessCardExcelConfig>(v20);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriChessCardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::IrodoriChessCardExcelConfig>(v20);
    v5 = txt_config_mgr;
    if ( ActivityIrodoriExcelConfigMgr::checkCardEffect(this, txt_config_mgr, &config->effect) )
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
        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
        "finalIrodoriChessCardExcelConfig",
        944);
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
      v9 = std::vector<data::IrodoriChessCardEffect>::size(&config->extra_effect_list);
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 96);
      if ( v9 <= *(_QWORD *)(v2 + 96) )
        break;
      v10 = std::vector<data::IrodoriChessCardEffect>::operator[](&config->extra_effect_list, *(_QWORD *)(v2 + 96));
      if ( ActivityIrodoriExcelConfigMgr::checkCardEffect(this, txt_config_mgr, v10) )
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "finalIrodoriChessCardExcelConfig",
          951);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])byte_1AA28840);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
        v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])byte_1AA288C0);
        v15 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v14,
                (const unsigned __int64 *)(v2 + 96));
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])byte_1AA28900);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 96);
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriChessCardExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 960: range 0000000012C678EC-0000000012C679C0
const data::IrodoriChessMapExcelConfig *__cdecl ActivityIrodoriExcelConfigMgr::findIrodoriChessMapConfigByLevelIdAndDifficulty(
        const ActivityIrodoriExcelConfigMgr *const this,
        uint32_t level_id,
        bool is_hard_map)
{
  uint32_t hard_map_id; // eax
  const data::IrodoriChessLevelExcelConfig *chess_level_config_ptr; // [rsp+18h] [rbp-8h]

  chess_level_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessLevelExcelConfig(this, level_id);
  if ( !chess_level_config_ptr )
    return 0LL;
  if ( is_hard_map )
  {
    if ( *(_BYTE *)(((unsigned __int64)&chess_level_config_ptr->hard_map_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)chess_level_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chess_level_config_ptr->hard_map_id >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&chess_level_config_ptr->hard_map_id);
    }
    hard_map_id = chess_level_config_ptr->hard_map_id;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&chess_level_config_ptr->normal_map_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&chess_level_config_ptr->normal_map_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&chess_level_config_ptr->normal_map_id);
    }
    hard_map_id = chess_level_config_ptr->normal_map_id;
  }
  return data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessMapExcelConfig(this, hard_map_id);
};

// Line 971: range 0000000012C679C2-0000000012C67BA4
const data::IrodoriChessLevelExcelConfig *__fastcall ActivityIrodoriExcelConfigMgr::findIrodoriChessLevelConfigByDungeonId(
        const ActivityIrodoriExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*> *p_dungeon_id_to_level_config_ptr_map; // rdx
  std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false,false>::pointer v8; // rax
  const data::IrodoriChessLevelExcelConfig *result; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:970 64 8 8 iter:972 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::findIrodoriChessLevelConfigByDungeonId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_id_to_level_config_ptr_map = &this->dungeon_id_to_level_config_ptr_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig const*>::find(p_dungeon_id_to_level_config_ptr_map, (const std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*>::key_type *)(v2 + 48));
  v6 = &this->dungeon_id_to_level_config_ptr_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,const data::IrodoriChessLevelExcelConfig*>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig const*>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig const*>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig const*>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,const data::IrodoriChessLevelExcelConfig*>,false,false> *const)(v2 + 64));
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

// Line 981: range 0000000012C67BA6-0000000012C67DC3
bool __fastcall ActivityIrodoriExcelConfigMgr::isIndexIdInThemeIndexIdList(
        const ActivityIrodoriExcelConfigMgr *const this,
        uint32_t theme_id,
        uint32_t index_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 v6; // rsi
  bool result; // al
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *p_theme_index_set_map; // rdx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *v9; // rdx
  bool v10; // al
  std::unordered_set<unsigned int> *index_set; // [rsp+18h] [rbp-A8h]
  char v13[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 theme_id:980 48 4 12 index_id:980 64 8 8 iter:987 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityIrodoriExcelConfigMgr::isIndexIdInThemeIndexIdList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = theme_id;
  *(_DWORD *)(v3 + 48) = index_id;
  v6 = *(unsigned int *)(v3 + 32);
  if ( data::ActivityIrodoriExcelConfigMgrBase::findIrodoriPoetryExcelConfig(this, v6) )
  {
    p_theme_index_set_map = &this->theme_index_set_map_;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, v6);
    *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(p_theme_index_set_map, (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v3 + 32));
    v9 = &this->theme_index_set_map_;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 32);
    *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(v9);
    v10 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      result = 0;
    }
    else
    {
      index_set = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v3 + 64))->second;
      result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
                 index_set,
                 (const unsigned int *)(v3 + 48));
    }
  }
  else
  {
    result = 0;
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

// Line 997: range 0000000012C67DC4-0000000012C67FA6
const data::IrodoriChessMapExcelConfig *__fastcall ActivityIrodoriExcelConfigMgr::findIrodoriChessMapConfigByDungeonId(
        const ActivityIrodoriExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,const data::IrodoriChessMapExcelConfig*> *p_dungeon_id_to_map_config_ptr_map; // rdx
  std::unordered_map<unsigned int,const data::IrodoriChessMapExcelConfig*> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,const data::IrodoriChessMapExcelConfig*>,false,false>::pointer v8; // rax
  const data::IrodoriChessMapExcelConfig *result; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:996 64 8 8 iter:998 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::findIrodoriChessMapConfigByDungeonId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_id_to_map_config_ptr_map = &this->dungeon_id_to_map_config_ptr_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,const data::IrodoriChessMapExcelConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::IrodoriChessMapExcelConfig const*>::find(p_dungeon_id_to_map_config_ptr_map, (const std::unordered_map<unsigned int,const data::IrodoriChessMapExcelConfig*>::key_type *)(v2 + 48));
  v6 = &this->dungeon_id_to_map_config_ptr_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,const data::IrodoriChessMapExcelConfig*>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::IrodoriChessMapExcelConfig const*>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig const*>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::IrodoriChessMapExcelConfig*>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::IrodoriChessMapExcelConfig*>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessMapExcelConfig const*>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,const data::IrodoriChessMapExcelConfig*>,false,false> *const)(v2 + 64));
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

// Line 1007: range 0000000012C67FA8-0000000012C6988C
int32_t __cdecl ActivityIrodoriExcelConfigMgr::checkIrodoriMasterLevelExcelConfig(
        ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  uint32_t *p_scene_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  __int64 group_id; // rsi
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  __int64 v38; // rsi
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  std::vector<std::string>::size_type gallery_ability_group_index; // r15
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  char *v50; // rsi
  unsigned int *v51; // rax
  int *v52; // rdx
  int v53; // ecx
  char v54; // al
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rdx
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rdx
  int32_t ret; // [rsp+1Ch] [rbp-414h]
  data::IrodoriMasterLevelExcelConfigMap *__for_range; // [rsp+20h] [rbp-410h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriMasterLevelExcelConfig>,false,false>::reference v71; // [rsp+28h] [rbp-408h]
  std::tuple_element<0,std::pair<unsigned int const,data::IrodoriMasterLevelExcelConfig> >::type *id; // [rsp+30h] [rbp-400h]
  std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriMasterLevelExcelConfig> >::type *config; // [rsp+38h] [rbp-3F8h]
  const SceneScriptConfig *scene_config_ptr; // [rsp+48h] [rbp-3E8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+50h] [rbp-3E0h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+58h] [rbp-3D8h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+68h] [rbp-3C8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+70h] [rbp-3C0h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+78h] [rbp-3B8h]
  char v80[944]; // [rsp+80h] [rbp-3B0h] BYREF

  v2 = (unsigned __int64)v80;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(896LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 48 4 20 trial_avatar_id:1078 64 8 16 __for_begin:1009 96 8 14 __for_end:1009 128 8 16 __for_b"
                        "egin:1078 160 8 14 __for_end:1078 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 3"
                        "2 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32"
                        " 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::checkIrodoriMasterLevelExcelConfig;
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
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -202116109;
  ret = 0;
  __for_range = &this->irodori_master_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriMasterLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::IrodoriMasterLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::IrodoriMasterLevelExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::IrodoriMasterLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriMasterLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriMasterLevelExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::IrodoriMasterLevelExcelConfig>,false> *)(v2 + 96)) )
  {
    v71 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriMasterLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriMasterLevelExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::IrodoriMasterLevelExcelConfig>(v71);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriMasterLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::IrodoriMasterLevelExcelConfig>(v71);
    p_scene_config_mgr = &txt_config_mgr->scene_config_mgr;
    p_scene_id = &config->scene_id;
    if ( *(_BYTE *)(((unsigned __int64)p_scene_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_scene_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_scene_id);
    }
    if ( data::SceneExcelConfigMgrBase::findSceneExcelConfig(p_scene_config_mgr, config->scene_id) )
    {
      p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->scene_id);
      }
      scene_config_ptr = LuaConfigMgr::findSceneScriptConfig(p_lua_config_mgr, config->scene_id);
      if ( scene_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->group_id);
        }
        group_script_config_ptr = SceneScriptConfig::findGroupScriptConfig(scene_config_ptr, config->group_id);
        if ( group_script_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->group_id);
          }
          group_id = config->group_id;
          group_info_config_ptr = SceneScriptConfig::findGroupInfoConfig(scene_config_ptr, group_id);
          if ( group_info_config_ptr )
          {
            if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(
                &group_info_config_ptr->is_dynamic_load,
                group_id,
                &group_info_config_ptr->is_dynamic_load);
            if ( !group_info_config_ptr->is_dynamic_load )
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
                "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
                "checkIrodoriMasterLevelExcelConfig",
                1042);
              v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 448),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v26 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                      v25,
                      (const char (*)[44])byte_1AA2EBA0);
              v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &config->group_id);
              v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v27,
                      (const char (*)[12])", level_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
              *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&config->point_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->point_id >> 3)
                                                                      + 0x7FFF8000) )
              {
                __asan_report_load4(&config->point_id);
              }
              if ( GroupScriptConfig::findPointConfig(group_script_config_ptr, config->point_id) )
              {
                p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
                if ( *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&config->gallery_id);
                }
                gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                                       p_gallery_config_mgr,
                                       config->gallery_id);
                if ( gallery_config_ptr )
                {
                  v38 = (((_BYTE)gallery_config_ptr + 12) & 7u) + 3;
                  if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)gallery_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3)
                                                                                      + 0x7FFF8000) )
                  {
                    __asan_report_load4(&gallery_config_ptr->type);
                  }
                  if ( gallery_config_ptr->type == GALLERY_TYPE_SWORD_WAY )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&config->gallery_ability_group_index >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&config->gallery_ability_group_index >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&config->gallery_ability_group_index);
                    }
                    gallery_ability_group_index = config->gallery_ability_group_index;
                    if ( gallery_ability_group_index < std::vector<std::string>::size(&gallery_config_ptr->selectable_ability_groups) )
                    {
                      __for_range_0 = &config->trial_avatar_list;
                      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
                      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
                        __asan_report_store8(v2 + 128, v38);
                      *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
                      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
                      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
                        __asan_report_store8(v2 + 160, v38);
                      *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
                      while ( 1 )
                      {
                        v50 = (char *)(v2 + 160);
                        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
                          break;
                        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
                        v51 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
                        v52 = (int *)v51;
                        if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)v51 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v51 >> 3)
                                                                                + 0x7FFF8000) )
                        {
                          __asan_report_load4(v51);
                        }
                        v53 = *v52;
                        v54 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
                        if ( v54 != 0 && v54 <= 3 )
                        {
                          LOBYTE(v50) = v54 != 0;
                          __asan_report_store4(v2 + 48, v50);
                        }
                        *(_DWORD *)(v2 + 48) = v53;
                        trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                                    &txt_config_mgr->trial_avatar_config_mgr,
                                                    *(unsigned int *)(v2 + 48));
                        if ( trial_avatar_config_ptr )
                        {
                          if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3)
                                        + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3)
                                        + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(&trial_avatar_config_ptr->avatar.avatar_id);
                          }
                          if ( trial_avatar_config_ptr->avatar.avatar_id != 10000005
                            && trial_avatar_config_ptr->avatar.avatar_id != 10000007 )
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
                              "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
                              "checkIrodoriMasterLevelExcelConfig",
                              1090);
                            v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 832),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            v62 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                                    v61,
                                    (const char (*)[53])"trial avatar is not 10000005 or 10000007, avatar_id:");
                            v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v62,
                                    &trial_avatar_config_ptr->avatar.avatar_id);
                            v64 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                    v63,
                                    (const char (*)[14])", gallery_id:");
                            v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v64,
                                    &config->gallery_id);
                            v66 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                    v65,
                                    (const char (*)[12])", level_id:");
                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, id);
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
                            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
                            "checkIrodoriMasterLevelExcelConfig",
                            1083);
                          v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 768),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v56 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                                  v55,
                                  (const char (*)[52])"findTrialAvatarExcelConfig failed, trial_avatar_id:");
                          v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v56,
                                  (const unsigned int *)(v2 + 48));
                          v58 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                  v57,
                                  (const char (*)[14])", gallery_id:");
                          v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v58,
                                  &config->gallery_id);
                          v60 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                  v59,
                                  (const char (*)[12])", level_id:");
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, id);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
                          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
                          ret = -1;
                        }
                        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
                      }
                      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
                      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
                      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
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
                        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
                        "checkIrodoriMasterLevelExcelConfig",
                        1071);
                      v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 704),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v45 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                              v44,
                              (const char (*)[36])"invalid gallery abilitygroup index:");
                      v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v45,
                              &config->gallery_ability_group_index);
                      v47 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                              v46,
                              (const char (*)[14])", gallery_id:");
                      v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v47,
                              &config->gallery_id);
                      v49 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                              v48,
                              (const char (*)[12])", level_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, id);
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
                      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
                      "checkIrodoriMasterLevelExcelConfig",
                      1064);
                    v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 640),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v40 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                            v39,
                            (const char (*)[34])"invalid gallery type, gallery_id:");
                    v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v40,
                            &config->gallery_id);
                    v42 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                            v41,
                            (const char (*)[12])", level_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
                    *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
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
                    "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
                    "checkIrodoriMasterLevelExcelConfig",
                    1058);
                  v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 576),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v35 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                          v34,
                          (const char (*)[43])"findGalleryExcelConfig failed, gallery_id:");
                  v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &config->gallery_id);
                  v37 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v36,
                          (const char (*)[12])", level_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, id);
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
                  "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
                  "checkIrodoriMasterLevelExcelConfig",
                  1049);
                v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 512),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v30 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        v29,
                        (const char (*)[31])byte_1AA65B20);
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &config->point_id);
                v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v31,
                        (const char (*)[12])", level_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
                *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
          }
          else
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
              "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
              "checkIrodoriMasterLevelExcelConfig",
              1036);
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v22 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    v21,
                    (const char (*)[38])"findGroupInfoConfig failed, group_id:");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config->group_id);
            v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v23,
                    (const char (*)[12])", level_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
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
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkIrodoriMasterLevelExcelConfig",
            1029);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  v16,
                  (const char (*)[40])"findGroupScriptConfig failed, group_id:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &config->group_id);
          v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])", level_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
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
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriMasterLevelExcelConfig",
          1022);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                v12,
                (const char (*)[40])"findSceneScriptConfig failed, scene_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->scene_id);
        v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])", level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
        "checkIrodoriMasterLevelExcelConfig",
        1015);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             v7,
             (const char (*)[39])"findSceneExcelConfig failed, scene_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->scene_id);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])", level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriMasterLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::IrodoriMasterLevelExcelConfig>,false,false> *const)(v2 + 64));
  }
  if ( v80 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 112) & 0xFFFFFFF8) >> 3));
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
  }
  return ret;
};

// Line 1101: range 0000000012C6988E-0000000012C69FCB
__int64 __fastcall ActivityIrodoriExcelConfigMgr::getIrodoriMasterLevelTransferPosAndRot(
        const ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t level_id,
        unsigned __int64 pos,
        unsigned __int64 rot)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  const data::IrodoriMasterLevelExcelConfig *level_config_ptr; // [rsp+38h] [rbp-138h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+40h] [rbp-130h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+48h] [rbp-128h]
  char v19[288]; // [rsp+50h] [rbp-120h] BYREF

  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 13 level_id:1100 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ActivityIrodoriExcelConfigMgr::getIrodoriMasterLevelTransferPosAndRot;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862723] = -218959118;
  v7[536862725] = -218959118;
  v7[536862727] = -202116109;
  *(_DWORD *)(v5 + 48) = level_id;
  level_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriMasterLevelExcelConfig(
                       this,
                       *(unsigned int *)(v5 + 48));
  if ( level_config_ptr )
  {
    p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&level_config_ptr->group_id);
    }
    group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, level_config_ptr->group_id);
    if ( group_script_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->point_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->point_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&level_config_ptr->point_id);
      }
      point_script_config_ptr = GroupScriptConfig::findPointConfig(group_script_config_ptr, level_config_ptr->point_id);
      if ( point_script_config_ptr )
      {
        if ( (char)(pos & 7) >= *(_BYTE *)((pos >> 3) + 0x7FFF8000) && *(_BYTE *)((pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((pos + 11) & 7) >= *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(pos, 12LL);
        }
        if ( (((unsigned __int8)point_script_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3)
                                                                              + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)point_script_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z
                                                                                 + 3) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load_n(&point_script_config_ptr->pos, 12LL);
        }
        *(_QWORD *)pos = *(_QWORD *)&point_script_config_ptr->pos.x;
        *(float *)(pos + 8) = point_script_config_ptr->pos.z;
        if ( (char)(rot & 7) >= *(_BYTE *)((rot >> 3) + 0x7FFF8000) && *(_BYTE *)((rot >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((rot + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((rot + 11) & 7) >= *(_BYTE *)(((rot + 11) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(rot, 12LL);
        }
        if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                                 + 3) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
        }
        *(_QWORD *)rot = *(_QWORD *)&point_script_config_ptr->rot.x;
        *(float *)(rot + 8) = point_script_config_ptr->rot.z;
        result = 0LL;
      }
      else
      {
        if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "getIrodoriMasterLevelTransferPosAndRot",
          1117);
        v12 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                (common::milog::MiLogStream *const)(v5 + 192),
                (const char (*)[56])"[IrodoriMaster] findPointConfig failed, born_point_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &level_config_ptr->point_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 192));
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      if ( *(char *)(((v5 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
        "getIrodoriMasterLevelTransferPosAndRot",
        1111);
      v11 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              (common::milog::MiLogStream *const)(v5 + 128),
              (const char (*)[57])"[IrodoriMaster] findGroupScriptConfig failed, group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &level_config_ptr->group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 128));
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    if ( *(char *)(((v5 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "getIrodoriMasterLevelTransferPosAndRot",
      1105);
    v8 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
           (common::milog::MiLogStream *const)(v5 + 64),
           (const char (*)[68])"[IrodoriMaster] findIrodoriMasterLevelExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 64));
    result = 0xFFFFFFFFLL;
  }
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1126: range 0000000012C69FCC-0000000012C6A21A
__int64 __fastcall ActivityIrodoriExcelConfigMgr::getGearIdByGadgetId(
        const ActivityIrodoriExcelConfigMgr *const this,
        __int64 gadget_id,
        unsigned __int64 gear_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,unsigned int> *p_gadget_id_to_gear_id_map; // rdx
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
  *(_QWORD *)(v3 + 8) = "3 48 4 14 gadget_id:1125 64 8 9 iter:1127 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityIrodoriExcelConfigMgr::getGearIdByGadgetId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = gadget_id;
  p_gadget_id_to_gear_id_map = &this->gadget_id_to_gear_id_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, gadget_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_gadget_id_to_gear_id_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  v7 = &this->gadget_id_to_gear_id_map_;
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
    result = 0LL;
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
    v14 = *(_BYTE *)((gear_id >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)((gear_id & 7) + 3) >= v14 )
    {
      LOBYTE(v8) = v14 != 0;
      __asan_report_store4(gear_id, v8);
    }
    *(_DWORD *)gear_id = second;
    result = 1LL;
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

// Line 1137: range 0000000012C6A21C-0000000012C6A557
__int64 __fastcall ActivityIrodoriExcelConfigMgr::getIrodoriChessOpenDayByActivityId(
        const ActivityIrodoriExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,unsigned int> *p_activity_id_to_chess_open_day_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  char v13[224]; // [rsp+10h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 16 activity_id:1136 64 8 9 iter:1138 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityIrodoriExcelConfigMgr::getIrodoriChessOpenDayByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_activity_id_to_chess_open_day_map = &this->activity_id_to_chess_open_day_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_activity_id_to_chess_open_day_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->activity_id_to_chess_open_day_map_;
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
      3u,
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "getIrodoriChessOpenDayByActivityId",
      1143);
    v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
            (common::milog::MiLogStream *const)(v2 + 128),
            (const char (*)[8])byte_1AA62860);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v12, (const char (*)[41])byte_1AA65FE0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 1LL;
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 1148: range 0000000012C6A558-0000000012C6A877
__int64 __fastcall ActivityIrodoriExcelConfigMgr::fillIrodoriChessMapEntranceDetailInfoProto(
        const ActivityIrodoriExcelConfigMgr *const this,
        __int64 map_id,
        proto::IrodoriChessEntranceDetailInfo *proto_entrance_detail_info)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,proto::IrodoriChessEntranceDetailInfo> *p_map_id_to_entrance_detail_info_map; // rdx
  std::unordered_map<unsigned int,proto::IrodoriChessEntranceDetailInfo> *v7; // rdx
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::IrodoriChessEntranceDetailInfo>,false,false>::pointer v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  char v14[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 11 map_id:1147 64 8 9 iter:1149 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityIrodoriExcelConfigMgr::fillIrodoriChessMapEntranceDetailInfoProto;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = map_id;
  p_map_id_to_entrance_detail_info_map = &this->map_id_to_entrance_detail_info_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, map_id);
  *(std::unordered_map<unsigned int,proto::IrodoriChessEntranceDetailInfo>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,proto::IrodoriChessEntranceDetailInfo>::find(p_map_id_to_entrance_detail_info_map, (const std::unordered_map<unsigned int,proto::IrodoriChessEntranceDetailInfo>::key_type *)(v3 + 48));
  v7 = &this->map_id_to_entrance_detail_info_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,proto::IrodoriChessEntranceDetailInfo>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,proto::IrodoriChessEntranceDetailInfo>::end(v7);
  v8 = std::__detail::operator!=<std::pair<unsigned int const,proto::IrodoriChessEntranceDetailInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::IrodoriChessEntranceDetailInfo>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::IrodoriChessEntranceDetailInfo>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::IrodoriChessEntranceDetailInfo>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::IrodoriChessEntranceDetailInfo>,false,false> *const)(v3 + 64));
    proto::IrodoriChessEntranceDetailInfo::CopyFrom(proto_entrance_detail_info, &v9->second);
    result = 1LL;
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
      3u,
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "fillIrodoriChessMapEntranceDetailInfoProto",
      1155);
    v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
            (common::milog::MiLogStream *const)(v3 + 128),
            (const char (*)[5])"map:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v12, (const char (*)[17])" info not found.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0LL;
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

// Line 1160: range 0000000012C6B5B2-0000000012C6C1B6
int32_t __cdecl ActivityIrodoriExcelConfigMgr::checkIrodoriChessMapCardPool(
        const ActivityIrodoriExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::IrodoriChessMapExcelConfig *chess_map_config)
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
  const char *v16; // rsi
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
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-254h]
  std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-250h]
  const data::IrodoriChessCardExcelConfig *card_config_ptr; // [rsp+38h] [rbp-248h]
  const std::vector<data::IrodoriChessCardEffect> *__for_range_0; // [rsp+40h] [rbp-240h]
  const data::IrodoriChessCardEffect *effect; // [rsp+48h] [rbp-238h]
  char v38[560]; // [rsp+50h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 4 12 card_id:1204 48 8 16 __for_begin:1204 80 8 14 __for_end:1204 112 8 16 __for_begin:121"
                        "8 144 8 14 __for_end:1218 176 24 22 pool_card_checker:1162 240 32 9 <unknown> 304 32 9 <unknown>"
                        " 368 32 9 <unknown> 432 48 30 ability_group_to_card_map:1161";
  *(_QWORD *)(v3 + 16) = ActivityIrodoriExcelConfigMgr::checkIrodoriChessMapCardPool;
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
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862735] = -202116109;
  std::map<std::string,unsigned int>::map((std::map<std::string,unsigned int> *const)(v3 + 432));
  if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 176, txt_config_mgr);
  *(_QWORD *)(v3 + 176) = this;
  if ( *(_BYTE *)(((v3 + 184) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 184, txt_config_mgr);
  *(_QWORD *)(v3 + 184) = chess_map_config;
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, txt_config_mgr);
  *(_QWORD *)(v3 + 192) = v3 + 432;
  ret = 0;
  __for_range = &chess_map_config->card_pool;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::vector<unsigned int>::const_iterator *)(v3 + 48) = std::vector<unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::vector<unsigned int>::const_iterator *)(v3 + 80) = std::vector<unsigned int>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 80);
    if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 48),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 80)) )
      break;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 48));
    v8 = (int *)v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    v9 = *v8;
    v10 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(v6) = v10 != 0;
      __asan_report_store4(v3 + 32, v6);
    }
    *(_DWORD *)(v3 + 32) = v9;
    card_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessCardExcelConfig(
                        this,
                        *(unsigned int *)(v3 + 32));
    if ( card_config_ptr )
    {
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      v16 = (const char *)*(unsigned int *)(v3 + 32);
      if ( ActivityIrodoriExcelConfigMgr::checkIrodoriChessMapCardPool(TxtConfigMgr const&,data::IrodoriChessMapExcelConfig const&)const::{lambda(unsigned int,data::IrodoriChessCardEffect const&)#1}::operator()(
             (const ActivityIrodoriExcelConfigMgr::checkIrodoriChessMapCardPool::<lambda(uint32_t, const data::IrodoriChessCardEffect&)> *const)(v3 + 176),
             (uint32_t)v16,
             &card_config_ptr->effect) )
      {
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 304, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 304),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
          "checkIrodoriChessMapCardPool",
          1215);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 304),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])byte_1AA63780);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &chess_map_config->map_id);
        v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])byte_1AA662A0);
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v3 + 32));
        v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])byte_1AA66580);
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                &card_config_ptr->effect.effect_index);
        v16 = byte_1AA665C0;
        common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])byte_1AA665C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __for_range_0 = &card_config_ptr->extra_effect_list;
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 112, v16);
      *(std::vector<data::IrodoriChessCardEffect>::const_iterator *)(v3 + 112) = std::vector<data::IrodoriChessCardEffect>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 144, v16);
      *(std::vector<data::IrodoriChessCardEffect>::const_iterator *)(v3 + 144) = std::vector<data::IrodoriChessCardEffect>::end(__for_range_0);
      while ( __gnu_cxx::operator!=<data::IrodoriChessCardEffect const*,std::vector<data::IrodoriChessCardEffect>>(
                (const __gnu_cxx::__normal_iterator<const data::IrodoriChessCardEffect*,std::vector<data::IrodoriChessCardEffect> > *)(v3 + 112),
                (const __gnu_cxx::__normal_iterator<const data::IrodoriChessCardEffect*,std::vector<data::IrodoriChessCardEffect> > *)(v3 + 144)) )
      {
        effect = __gnu_cxx::__normal_iterator<data::IrodoriChessCardEffect const*,std::vector<data::IrodoriChessCardEffect>>::operator*((const __gnu_cxx::__normal_iterator<const data::IrodoriChessCardEffect*,std::vector<data::IrodoriChessCardEffect> > *const)(v3 + 112));
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 32);
        if ( ActivityIrodoriExcelConfigMgr::checkIrodoriChessMapCardPool(TxtConfigMgr const&,data::IrodoriChessMapExcelConfig const&)const::{lambda(unsigned int,data::IrodoriChessCardEffect const&)#1}::operator()(
               (const ActivityIrodoriExcelConfigMgr::checkIrodoriChessMapCardPool::<lambda(uint32_t, const data::IrodoriChessCardEffect&)> *const)(v3 + 176),
               *(_DWORD *)(v3 + 32),
               effect) )
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
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "checkIrodoriChessMapCardPool",
            1222);
          v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 368),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v25 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])byte_1AA63780);
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &chess_map_config->map_id);
          v27 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v26, (const char (*)[15])byte_1AA662A0);
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v3 + 32));
          v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1AA66580);
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &effect->effect_index);
          common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])byte_1AA665C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
          *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<data::IrodoriChessCardEffect const*,std::vector<data::IrodoriChessCardEffect>>::operator++((__gnu_cxx::__normal_iterator<const data::IrodoriChessCardEffect*,std::vector<data::IrodoriChessCardEffect> > *const)(v3 + 112));
      }
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    }
    else
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
        "checkIrodoriChessMapCardPool",
        1209);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 240),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])byte_1AA63780);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &chess_map_config->map_id);
      v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])byte_1AA662A0);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v15, (const char (*)[17])byte_1AA26D20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 48));
  }
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  std::map<std::string,unsigned int>::~map((std::map<std::string,unsigned int> *const)(v3 + 432));
  result = ret;
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
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
  }
  return result;
};

// Line 1162: range 0000000012C6A878-0000000012C6B5B1
__int64 __fastcall ActivityIrodoriExcelConfigMgr::checkIrodoriChessMapCardPool(TxtConfigMgr const&,data::IrodoriChessMapExcelConfig const&)const::{lambda(unsigned int,data::IrodoriChessCardEffect const&)#1}::operator()(
        unsigned __int64 __closure,
        __int64 card_id,
        const data::IrodoriChessCardEffect *effect)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  unsigned int *v7; // rax
  uint32_t *v8; // rdx
  char v9; // cl
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  char *v18; // rsi
  bool v19; // r14
  std::map<std::string,unsigned int> *v20; // rax
  std::map<std::string,unsigned int> *v21; // rax
  bool v22; // al
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::pointer v31; // rax
  common::milog::MiLogStream *v32; // rax
  int v33; // r14d
  const std::string *v34; // rsi
  std::map<std::string,unsigned int>::mapped_type *v35; // rax
  _DWORD *v36; // rdx
  char v37; // cl
  __int64 result; // rax
  unsigned int ret; // [rsp+20h] [rbp-270h]
  uint32_t gadget_id; // [rsp+24h] [rbp-26Ch]
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-268h]
  std::vector<std::string> *__for_range_0; // [rsp+30h] [rbp-260h]
  const std::string *ability_group; // [rsp+38h] [rbp-258h]
  char v45[592]; // [rsp+40h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 12 gear_id:1169 80 4 12 card_id:1162 96 8 16 __for_begin:1167 128 8 14 "
                        "__for_end:1167 160 8 16 __for_begin:1186 192 8 14 __for_end:1186 224 8 9 iter:1188 256 8 9 <unkn"
                        "own> 288 24 22 ability_group_vec:1183 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityIrodoriExcelConfigMgr::checkIrodoriChessMapCardPool(TxtConfigMgr const&,data::IrodoriChessMapExcelConfig const&)const::{lambda(unsigned int,data::IrodoriChessCardEffect const&)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -202116109;
  *(_DWORD *)(v3 + 80) = card_id;
  ret = 0;
  if ( *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&effect->target_type);
  }
  if ( effect->target_type == IRODORI_CHESS_CARD_TARGET_GADGETS )
  {
    __for_range = &effect->target_param_list;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, card_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, card_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::end(__for_range);
    while ( 1 )
    {
      v6 = (char *)(v3 + 128);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128)) )
        break;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
      v8 = v7;
      v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v9 != 0;
      if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
        __asan_report_load4(v7);
      gadget_id = *v8;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 64, v6);
      *(_DWORD *)(v3 + 64) = 0;
      if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      if ( (unsigned __int8)ActivityIrodoriExcelConfigMgr::getGearIdByGadgetId(
                              *(const ActivityIrodoriExcelConfigMgr *const *)__closure,
                              gadget_id,
                              v3 + 64) == 1 )
      {
        if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure + 8);
        if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int> const,unsigned int>(
                (const std::map<unsigned int,unsigned int> *)(*(_QWORD *)(__closure + 8) + 56LL),
                (const unsigned int *)(v3 + 64)) )
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
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "operator()",
            1176);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])byte_1AA63780);
          if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8(__closure + 8);
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(*(_QWORD *)(__closure + 8) + 8LL));
          v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])byte_1AA662A0);
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v3 + 80));
          v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v14, (const char (*)[18])byte_1AA662E0);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v16, (const char (*)[33])byte_1AA66320);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)&effect->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&effect->effect_type);
  }
  if ( effect->effect_type == IRODORI_CHESS_CARD_EFFECT_ADD_ABILITY_GROUP )
  {
    v17 = ((v3 + 288) >> 3) + 2147450880;
    *(_WORD *)v17 = 0;
    *(_BYTE *)(v17 + 2) = 0;
    std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 288));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 416),
      ",",
      (const std::allocator<char> *)(v3 + 48));
    v18 = (char *)(v3 + 416);
    v19 = common::tools::StringUtils::split(
            &effect->effect_str_param,
            (const std::string *)(v3 + 416),
            (std::vector<std::string> *)(v3 + 288),
            1) == 0;
    std::string::~string((void *)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 48);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v19 )
    {
      __for_range_0 = (std::vector<std::string> *)(v3 + 288);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v18);
      *(std::vector<std::string>::iterator *)(v3 + 160) = std::vector<std::string>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v18);
      *(std::vector<std::string>::iterator *)(v3 + 192) = std::vector<std::string>::end(__for_range_0);
      while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 160),
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 192)) )
      {
        ability_group = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 160));
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure + 16);
        v20 = *(std::map<std::string,unsigned int> **)(__closure + 16);
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          v20 = (std::map<std::string,unsigned int> *)__asan_report_store8(v3 + 224, v3 + 192);
        *(std::map<std::string,unsigned int>::iterator *)(v3 + 224) = std::map<std::string,unsigned int>::find(
                                                                        v20,
                                                                        ability_group);
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        v21 = *(std::map<std::string,unsigned int> **)(__closure + 16);
        if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
          v21 = (std::map<std::string,unsigned int> *)__asan_report_store8(v3 + 256, ability_group);
        *(std::map<std::string,unsigned int>::iterator *)(v3 + 256) = std::map<std::string,unsigned int>::end(v21);
        v22 = std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Self *)(v3 + 224),
                (const std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Self *)(v3 + 256));
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
        if ( v22 )
        {
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
            4u,
            "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
            "operator()",
            1191);
          v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 480),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])byte_1AA63780);
          if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8(__closure + 8);
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(*(_QWORD *)(__closure + 8) + 8LL));
          v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v25, (const char (*)[15])byte_1AA662A0);
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v3 + 80));
          v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v27, (const char (*)[12])byte_1AA66380);
          v29 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, ability_group);
          v30 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v29, (const char (*)[12])byte_1AA663C0);
          v31 = std::_Rb_tree_iterator<std::pair<std::string const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> > *const)(v3 + 224));
          v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &v31->second);
          common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v32, (const char (*)[12])byte_1AA66400);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
          v33 = *(_DWORD *)(v3 + 80);
          if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
            __asan_report_load8(__closure + 16);
          v34 = ability_group;
          v35 = std::map<std::string,unsigned int>::operator[](
                  *(std::map<std::string,unsigned int> *const *)(__closure + 16),
                  ability_group);
          v36 = v35;
          v37 = *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000);
          if ( v37 != 0 && (char)(((unsigned __int8)v35 & 7) + 3) >= v37 )
          {
            LOBYTE(v34) = v37 != 0;
            __asan_report_store4(v35, v34);
          }
          *v36 = v33;
        }
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
        __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 160));
      }
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    }
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 288));
  }
  result = ret;
  if ( v45 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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

// Line 1231: range 0000000012C6C1B8-0000000012C6CAE9
__int64 __fastcall ActivityIrodoriExcelConfigMgr::isFlowerCombinationSatisfied(
        const ActivityIrodoriExcelConfigMgr *const this,
        uint32_t theme_id,
        const proto::CustomGadgetTreeInfo *info)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  std::map<unsigned int,std::map<std::string,unsigned int>> *p_group_answer_map; // rdx
  const std::map<unsigned int,std::map<std::string,unsigned int>>::key_type *p_flower_group_id; // rcx
  __int64 v10; // rsi
  const std::map<unsigned int,std::map<std::string,unsigned int>>::key_type *v11; // rsi
  std::map<unsigned int,std::map<std::string,unsigned int>> *v12; // rdx
  char *v13; // rsi
  bool v14; // al
  common::milog::MiLogStream *v15; // rax
  std::map<std::string,unsigned int>::size_type v16; // r15
  const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *v17; // rax
  unsigned __int64 v18; // rax
  const std::string *v19; // rcx
  const std::string *v20; // rsi
  bool v21; // al
  int v22; // eax
  std::_Rb_tree_const_iterator<std::pair<const std::string,unsigned int> >::pointer v23; // rax
  unsigned int second; // r15d
  const std::string *v25; // rax
  std::pair<std::_Rb_tree_const_iterator<std::string >,bool> v26; // rax
  int v27; // edx
  __int64 result; // rax
  const data::IrodoriFlowerThemeExcelConfig *theme_config_ptr; // [rsp+20h] [rbp-210h]
  std::map<std::string,unsigned int> *answer_map; // [rsp+28h] [rbp-208h]
  const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *__for_range; // [rsp+30h] [rbp-200h]
  google::protobuf::internal::RepeatedPtrIterator<const proto::CustomCommonNodeInfo>::reference node; // [rsp+38h] [rbp-1F8h]
  char v34[496]; // [rsp+40h] [rbp-1F0h] BYREF

  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(448LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 4 13 theme_id:1230 48 8 9 iter:1238 80 8 9 <unknown> 112 8 16 __for_begin:1248 144 8 14 __"
                        "for_end:1248 176 8 9 iter:1250 208 8 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 48 16"
                        " checked_set:1246";
  *(_QWORD *)(v4 + 16) = ActivityIrodoriExcelConfigMgr::isFlowerCombinationSatisfied;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862724] = -234881024;
  v6[536862725] = 62194;
  v6[536862725] = -234881024;
  v6[536862726] = 62194;
  v6[536862726] = -234881024;
  v6[536862727] = 62194;
  v6[536862728] = -219021312;
  v6[536862729] = 62194;
  v6[536862730] = -219021312;
  v6[536862731] = 62194;
  v6[536862733] = -202116109;
  *(_DWORD *)(v4 + 32) = theme_id;
  theme_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriFlowerThemeExcelConfig(
                       this,
                       *(unsigned int *)(v4 + 32));
  if ( theme_config_ptr )
  {
    p_group_answer_map = &this->group_answer_map_;
    p_flower_group_id = &theme_config_ptr->flower_group_id;
    v10 = *(unsigned __int8 *)(((v4 + 48) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v10 )
      __asan_report_store8(v4 + 48, v10);
    v11 = p_flower_group_id;
    *(std::map<unsigned int,std::map<std::string,unsigned int>>::const_iterator *)(v4 + 48) = std::map<unsigned int,std::map<std::string,unsigned int>>::find(
                                                                                                p_group_answer_map,
                                                                                                p_flower_group_id);
    v12 = &this->group_answer_map_;
    if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 80, v11);
    *(std::map<unsigned int,std::map<std::string,unsigned int>>::const_iterator *)(v4 + 80) = std::map<unsigned int,std::map<std::string,unsigned int>>::end(v12);
    v13 = (char *)(v4 + 80);
    v14 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<std::string,unsigned int> > >::_Self *)(v4 + 48),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<std::string,unsigned int> > >::_Self *)(v4 + 80));
    *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v14 )
    {
      *(_DWORD *)(((v4 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 79) & 7) >= *(_BYTE *)(((v4 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 304, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
        "isFlowerCombinationSatisfied",
        1241);
      v15 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              (common::milog::MiLogStream *const)(v4 + 304),
              (const char (*)[35])"group config not found, group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &theme_config_ptr->flower_group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 304));
      v3 = 0;
    }
    else
    {
      answer_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<std::string,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<std::string,unsigned int> > > *const)(v4 + 48))->second;
      v16 = std::map<std::string,unsigned int>::size(answer_map);
      v17 = proto::CustomGadgetTreeInfo::node_list(info);
      if ( v16 == google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::size(v17) )
      {
        v18 = ((v4 + 368) >> 3) + 2147450880;
        *(_DWORD *)v18 = 0;
        *(_WORD *)(v18 + 4) = 0;
        std::set<std::string>::set((std::set<std::string> *const)(v4 + 368));
        __for_range = proto::CustomGadgetTreeInfo::node_list(info);
        *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 112, v13);
        *(google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::const_iterator *)(v4 + 112) = google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::begin(__for_range);
        *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 144, v13);
        *(google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::const_iterator *)(v4 + 144) = google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::end(__for_range);
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator!=(
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::CustomCommonNodeInfo> *const)(v4 + 112),
                  (const google::protobuf::internal::RepeatedPtrIterator<const proto::CustomCommonNodeInfo>::iterator *)(v4 + 144)) )
        {
          node = google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::CustomCommonNodeInfo> *const)(v4 + 112));
          *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) = 0;
          v19 = proto::CustomCommonNodeInfo::slot_identifier[abi:cxx11](node);
          if ( *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 176, v4 + 144);
          v20 = v19;
          *(std::map<std::string,unsigned int>::const_iterator *)(v4 + 176) = std::map<std::string,unsigned int>::find(
                                                                                answer_map,
                                                                                v19);
          *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 208, v20);
          *(std::map<std::string,unsigned int>::const_iterator *)(v4 + 208) = std::map<std::string,unsigned int>::end(answer_map);
          v21 = std::operator==(
                  (const std::_Rb_tree_const_iterator<std::pair<const std::string,unsigned int> >::_Self *)(v4 + 176),
                  (const std::_Rb_tree_const_iterator<std::pair<const std::string,unsigned int> >::_Self *)(v4 + 208));
          *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000) = -8;
          if ( v21 )
          {
            v3 = 0;
            v22 = 0;
          }
          else
          {
            v23 = std::_Rb_tree_const_iterator<std::pair<std::string const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::string,unsigned int> > *const)(v4 + 176));
            if ( *(_BYTE *)(((unsigned __int64)&v23->second >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v23->second >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v23->second);
            }
            second = v23->second;
            if ( second == proto::CustomCommonNodeInfo::config_id(node) )
            {
              v25 = proto::CustomCommonNodeInfo::slot_identifier[abi:cxx11](node);
              v26 = std::set<std::string>::emplace<std::string const&>(
                      (std::set<std::string> *const)(v4 + 368),
                      v25,
                      v25);
              if ( !v26.second )
              {
                v3 = 0;
                v22 = 0;
              }
              else
              {
                v22 = 1;
              }
            }
            else
            {
              v3 = 0;
              v22 = 0;
            }
          }
          *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) = -8;
          if ( v22 != 1 )
          {
            v27 = 0;
            goto LABEL_41;
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::CustomCommonNodeInfo> *const)(v4 + 112));
        }
        v27 = 1;
LABEL_41:
        *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = -8;
        if ( v27 == 1 )
          v3 = 1;
        std::set<std::string>::~set((std::set<std::string> *const)(v4 + 368));
      }
      else
      {
        v3 = 0;
      }
    }
  }
  else
  {
    if ( *(char *)(((v4 + 240) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 271) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 64 + 79) & 7) >= *(_BYTE *)(((v4 + 271) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 240, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 240),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityIrodoriExcelConfig.cpp",
      "isFlowerCombinationSatisfied",
      1235);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           (common::milog::MiLogStream *const)(v4 + 240),
           (const char (*)[42])"flower theme config not found, theme_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 240));
    v3 = 0;
  }
  result = v3;
  if ( v34 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};
