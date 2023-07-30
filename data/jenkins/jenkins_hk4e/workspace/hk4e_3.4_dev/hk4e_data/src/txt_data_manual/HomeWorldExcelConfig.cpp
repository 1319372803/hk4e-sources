// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/HomeWorldExcelConfig.cpp

// Line 21: range 000000001446BDD6-000000001446CDE6
int32_t __cdecl HomeWorldExcelConfigMgr::rewriteConfig(
        HomeWorldExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  char v6[896]; // [rsp+10h] [rbp-380h] BYREF

  v2 = (common::milog::MiLogStream *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(864LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"13 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)HomeWorldExcelConfigMgr::rewriteConfig;
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
  v4[536862744] = -218959118;
  v4[536862746] = -202116109;
  if ( HomeWorldExcelConfigMgr::rewriteHomeModuleExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "rewriteConfig",
      24);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v2 + 1,
      (const char (*)[36])"rewriteHomeModuleExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::rewriteHomeLevelExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "rewriteConfig",
      29);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v2 + 3,
      (const char (*)[35])"rewriteHomeLevelExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::rewriteHomeWorldFurnitureExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "rewriteConfig",
      34);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v2 + 5,
      (const char (*)[44])"rewriteHomeWorldFurnitureExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::rewriteFurnitureMakeExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "rewriteConfig",
      39);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v2 + 7,
      (const char (*)[39])"rewriteFurnitureMakeExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::rewriteLimitedShopExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "rewriteConfig",
      44);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v2 + 9,
      (const char (*)[37])"rewriteLimitedShopExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::rewriteHomeWorldComfortLevelExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "rewriteConfig",
      49);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      v2 + 11,
      (const char (*)[47])"rewriteHomeWorldComfortLevelExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::rewriteAreaComfortExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "rewriteConfig",
      54);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v2 + 13,
      (const char (*)[37])"rewriteAreaComfortExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::rewriteHomeWorldEventExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "rewriteConfig",
      59);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v2 + 15,
      (const char (*)[40])"rewriteHomeWorldEventExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 15);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::rewriteHomeNpcExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "rewriteConfig",
      64);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v2 + 17,
      (const char (*)[33])"rewriteHomeNpcExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 17);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::rewritePlantExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "rewriteConfig",
      69);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v2 + 19,
      (const char (*)[31])"rewritePlantExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 19);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::rewriteFieldExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "rewriteConfig",
      74);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v2 + 21,
      (const char (*)[31])"rewriteFieldExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 21);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::rewriteExtraExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[23] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[23].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 1) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[23].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[23], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "rewriteConfig",
      79);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v2 + 23,
      (const char (*)[31])"rewriteExtraExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 23);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::rewriteHomeWoodExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[25] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[25].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[25].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[25], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "rewriteConfig",
      84);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v2 + 25,
      (const char (*)[34])"rewriteHomeWoodExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 25);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v6 == (char *)v2 )
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
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8068) = 0;
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
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8068) = -168430091;
  }
  return result;
};

// Line 91: range 000000001446CDE8-000000001446E061
int32_t __cdecl HomeWorldExcelConfigMgr::checkConfig(
        HomeWorldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  char v7[1024]; // [rsp+10h] [rbp-400h] BYREF

  v2 = (common::milog::MiLogStream *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(992LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"15 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)HomeWorldExcelConfigMgr::checkConfig;
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
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -202116109;
  if ( HomeWorldExcelConfigMgr::checkFurnitureExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkConfig",
      94);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v5,
      (const char (*)[32])"checkFurnitureExcelConfig fails");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::checkHomeModuleExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkConfig",
      99);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v2 + 3,
      (const char (*)[34])"checkHomeModuleExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::checkHomeNpcExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkConfig",
      104);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v2 + 5,
      (const char (*)[31])"checkHomeNpcExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::checkHomeAnimalExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkConfig",
      109);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v2 + 7,
      (const char (*)[34])"checkHomeAnimalExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::checkHomeLevelExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkConfig",
      114);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v2 + 9,
      (const char (*)[33])"checkHomeLevelExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::checkHomeWorldComfortLevelExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkConfig",
      119);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      v2 + 11,
      (const char (*)[45])"checkHomeWorldComfortLevelExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::checkFurnitureMakeExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkConfig",
      124);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v2 + 13,
      (const char (*)[37])"checkFurnitureMakeExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::checkLimitedShopExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkConfig",
      129);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v2 + 15,
      (const char (*)[35])"checkLimitedShopExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 15);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::checkAreaComfortExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[17] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[17].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[17].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[17], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkConfig",
      134);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v2 + 17,
      (const char (*)[35])"checkAreaComfortExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 17);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::checkHomeWorldEventExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkConfig",
      139);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v2 + 19,
      (const char (*)[38])"checkHomeWorldEventExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 19);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::checkPlantExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[21] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[21].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[21].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[21], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkConfig",
      144);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v2 + 21,
      (const char (*)[29])"checkPlantExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 21);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::checkFieldExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkConfig",
      149);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v2 + 23,
      (const char (*)[29])"checkFieldExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 23);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::checkCustomGadgetSlotConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[25] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[25].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[25].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[25], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkConfig",
      154);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v2 + 25,
      (const char (*)[35])"checkCustomGadgetSlotConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 25);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::checkHomeWorldServerGadgetExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[27] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[27].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[27].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[27], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkConfig",
      159);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      v2 + 27,
      (const char (*)[45])"checkHomeWorldServerGadgetExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 27);
    result = -1;
  }
  else if ( HomeWorldExcelConfigMgr::checkHomeWoodExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[29] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[29].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[29].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[29], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkConfig",
      164);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v2 + 29,
      (const char (*)[32])"checkHomeWoodExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 29);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v7 == (char *)v2 )
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
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8068) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8070) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8078) = 0;
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
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8078) = -168430091;
  }
  return result;
};

// Line 171: range 000000001446E062-000000001446E2B4
__int64 __fastcall HomeWorldExcelConfigMgr::getFurnitureComfortValue(
        const HomeWorldExcelConfigMgr *const this,
        uint32_t furniture_item_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 21 furniture_item_id:170 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::getFurnitureComfortValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = furniture_item_id;
  furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
                           this,
                           *(unsigned int *)(v2 + 48));
  if ( furniture_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->comfort >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->comfort >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&furniture_config_ptr->comfort);
    }
    result = furniture_config_ptr->comfort;
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "getFurnitureComfortValue",
      175);
    v5 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[49])"furniture_config_ptr is null. furniture_item_id:");
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

// Line 182: range 000000001446E2B6-000000001446E855
__int64 __fastcall HomeWorldExcelConfigMgr::getMaxComfortValue(
        const HomeWorldExcelConfigMgr *const this,
        __int64 scene_id,
        uint32_t block_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>> *p_scene_area_comfort_config_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>> *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  bool v12; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false>::pointer v13; // rax
  std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> *area_map; // [rsp+18h] [rbp-168h]
  char v16[352]; // [rsp+20h] [rbp-160h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 12 scene_id:181 48 4 12 block_id:181 64 8 8 iter:183 96 8 9 <unknown> 128 8 13 area_iter:"
                        "190 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::getMaxComfortValue;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 32) = scene_id;
  *(_DWORD *)(v3 + 48) = block_id;
  p_scene_area_comfort_config_map = &this->scene_area_comfort_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, scene_id);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::find(p_scene_area_comfort_config_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::key_type *)(v3 + 32));
  v7 = &this->scene_area_comfort_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
      3u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "getMaxComfortValue",
      186);
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
           (common::milog::MiLogStream *const)(v3 + 192),
           (const char (*)[10])"scene_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" invalid!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    result = 0LL;
  }
  else
  {
    area_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false,false> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::find(area_map, (const std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::end(area_map);
    v12 = std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false> *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false> *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v13->second.max_comfort >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v13->second.max_comfort >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v13->second.max_comfort);
      }
      result = v13->second.max_comfort;
    }
    else
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
        3u,
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "getMaxComfortValue",
        196);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 256),
        "scene_id:%u and block_id:%u not find in home_world_area_comfort_excel_config_map",
        *(unsigned int *)(v3 + 32),
        *(unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      result = 0LL;
    }
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 201: range 000000001446E856-000000001446EB0E
__int64 __fastcall HomeWorldExcelConfigMgr::getComfortLevelByValue(
        const HomeWorldExcelConfigMgr *const this,
        __int64 comfort_value)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,unsigned int> *p_comfort_level_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::map<unsigned int,unsigned int> *v8; // rdx
  bool v9; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v10; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  uint32_t level; // [rsp+1Ch] [rbp-C4h]
  char v14[192]; // [rsp+20h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 17 comfort_value:200 64 8 8 iter:203 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::getComfortLevelByValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  *(_DWORD *)(v2 + 48) = comfort_value;
  level = 0;
  p_comfort_level_map = &this->comfort_level_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, comfort_value);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::upper_bound(
                                                                        p_comfort_level_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->comfort_level_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::cbegin(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator--((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    v8 = &this->comfort_level_map;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v2 + 96);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 128) = std::map<unsigned int,unsigned int>::cend(v8);
    v9 = std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 128));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
      p_second = &v10->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      level = v10->second;
    }
  }
  result = level;
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

// Line 216: range 000000001446EB10-000000001446ED6A
__int64 __fastcall HomeWorldExcelConfigMgr::getRoomSceneIdByFurnitureId(
        const HomeWorldExcelConfigMgr *const this,
        uint32_t furniture_item_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 21 furniture_item_id:215 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::getRoomSceneIdByFurnitureId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = furniture_item_id;
  furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
                           this,
                           *(unsigned int *)(v2 + 48));
  if ( furniture_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->room_scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)furniture_config_ptr - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->room_scene_id >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&furniture_config_ptr->room_scene_id);
    }
    result = furniture_config_ptr->room_scene_id;
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "getRoomSceneIdByFurnitureId",
      220);
    v5 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[49])"furniture_config_ptr is null. furniture_item_id:");
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

// Line 227: range 000000001446ED6C-000000001446F0DC
__int64 __fastcall HomeWorldExcelConfigMgr::getFurnitureType(
        const HomeWorldExcelConfigMgr *const this,
        uint32_t furniture_item_id)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  unsigned int *v8; // rax
  unsigned int *v9; // rdx
  int v10; // eax
  __int64 result; // rax
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+20h] [rbp-100h]
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-F8h]
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 21 furniture_item_id:226 64 8 15 __for_begin:234 96 8 13 __for_end:234 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::getFurnitureType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = furniture_item_id;
  v6 = *(unsigned int *)(v3 + 48);
  furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(this, v6);
  if ( furniture_config_ptr )
  {
    __for_range = &furniture_config_ptr->furn_type;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 64) = std::vector<unsigned int>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::end(__for_range);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96)) )
    {
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      if ( *v9 )
      {
        v2 = *v9;
        v10 = 0;
        goto LABEL_20;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
    }
    v10 = 1;
LABEL_20:
    if ( v10 == 1 )
      v2 = 0;
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "getFurnitureType",
      231);
    v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[49])"furniture_config_ptr is null. furniture_item_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    v2 = 0;
  }
  result = v2;
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

// Line 245: range 000000001446F0DE-000000001446F48F
__int64 __fastcall HomeWorldExcelConfigMgr::getFurnitureGadgetId(
        const HomeWorldExcelConfigMgr *const this,
        uint32_t furniture_item_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::vector<unsigned int>::const_reference v9; // rax
  unsigned int *v10; // rdx
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+18h] [rbp-E8h]
  char v12[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 21 furniture_item_id:244 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::getFurnitureGadgetId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = furniture_item_id;
  furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
                           this,
                           *(unsigned int *)(v2 + 48));
  if ( furniture_config_ptr )
  {
    if ( std::vector<unsigned int>::empty(&furniture_config_ptr->furniture_gadget_id) )
    {
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "getFurnitureGadgetId",
        254);
      v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[19])"furniture_item_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        v8,
        (const char (*)[32])" not config furniture_gadget_id");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      result = 0LL;
    }
    else
    {
      v9 = std::vector<unsigned int>::operator[](&furniture_config_ptr->furniture_gadget_id, 0LL);
      v10 = (unsigned int *)v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      result = *v10;
    }
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "getFurnitureGadgetId",
      249);
    v5 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[49])"furniture_config_ptr is null. furniture_item_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
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

// Line 261: range 000000001446F490-000000001446F746
__int64 __fastcall HomeWorldExcelConfigMgr::getFurnitureLoadCost(
        const HomeWorldExcelConfigMgr *const this,
        uint32_t furniture_item_id,
        bool is_need_discount)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+18h] [rbp-A8h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 21 furniture_item_id:260 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::getFurnitureLoadCost;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = furniture_item_id;
  furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
                           this,
                           *(unsigned int *)(v3 + 48));
  if ( furniture_config_ptr )
  {
    if ( is_need_discount )
    {
      if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->discount_cost >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)furniture_config_ptr - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->discount_cost >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&furniture_config_ptr->discount_cost);
      }
      result = furniture_config_ptr->discount_cost;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->cost >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->cost >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&furniture_config_ptr->cost);
      }
      result = furniture_config_ptr->cost;
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
      3u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "getFurnitureLoadCost",
      265);
    v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[49])"furniture_config_ptr is null. furniture_item_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = 0LL;
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 272: range 000000001446F748-000000001446FD24
__int64 __fastcall HomeWorldExcelConfigMgr::getHighLoadLimit(
        const HomeWorldExcelConfigMgr *const this,
        __int64 scene_id,
        uint32_t block_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>> *p_scene_area_comfort_config_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>> *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  bool v12; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false>::pointer v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> *area_map; // [rsp+18h] [rbp-168h]
  char v20[352]; // [rsp+20h] [rbp-160h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 12 scene_id:271 48 4 12 block_id:271 64 8 8 iter:273 96 8 9 <unknown> 128 8 13 area_iter:"
                        "280 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::getHighLoadLimit;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 32) = scene_id;
  *(_DWORD *)(v3 + 48) = block_id;
  p_scene_area_comfort_config_map = &this->scene_area_comfort_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, scene_id);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::find(p_scene_area_comfort_config_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::key_type *)(v3 + 32));
  v7 = &this->scene_area_comfort_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
      3u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "getHighLoadLimit",
      276);
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
           (common::milog::MiLogStream *const)(v3 + 192),
           (const char (*)[10])"scene_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" invalid!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    result = 0LL;
  }
  else
  {
    area_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false,false> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::find(area_map, (const std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::end(area_map);
    v12 = std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false> *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false> *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v13->second.high_load_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v13->second.high_load_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v13->second.high_load_limit);
      }
      result = v13->second.high_load_limit;
    }
    else
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
        3u,
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "getHighLoadLimit",
        286);
      v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[10])"scene_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])" and block_id:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
        v17,
        (const char (*)[54])" not find in home_world_area_comfort_excel_config_map");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      result = 0LL;
    }
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 291: range 000000001446FD26-0000000014470002
std::vector<unsigned int> *__fastcall HomeWorldExcelConfigMgr::getFurnitureTypeVec(
        std::vector<unsigned int> *retstr,
        const HomeWorldExcelConfigMgr *const this,
        uint32_t furniture_item_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 21 furniture_item_id:290 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::getFurnitureTypeVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = furniture_item_id;
  furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
                           this,
                           *(unsigned int *)(v3 + 48));
  if ( furniture_config_ptr )
  {
    std::vector<unsigned int>::vector(retstr, &furniture_config_ptr->furn_type);
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
      3u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "getFurnitureTypeVec",
      295);
    v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[49])"furniture_config_ptr is null. furniture_item_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
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
  return retstr;
};

// Line 302: range 0000000014470004-0000000014470870
std::vector<unsigned int> *__fastcall HomeWorldExcelConfigMgr::getFurnitureTypeCategoryVec(
        std::vector<unsigned int> *retstr,
        const HomeWorldExcelConfigMgr *const this,
        uint32_t furniture_item_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  char *v8; // rsi
  unsigned int *v9; // rax
  int *v10; // rdx
  int v11; // ecx
  char v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v18; // r15
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+28h] [rbp-1E8h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-1E0h]
  const data::HomeWorldFurnitureTypeExcelConfig *type_config_ptr; // [rsp+38h] [rbp-1D8h]
  char v25[464]; // [rsp+40h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 1 9 <unknown> 48 4 8 type:310 64 4 21 furniture_item_id:301 80 8 15 __for_begin:310 112 8 1"
                        "3 __for_end:310 144 24 16 category_vec:320 208 32 9 <unknown> 272 32 9 <unknown> 336 48 16 category_set:309";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::getFurnitureTypeCategoryVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = -218959360;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862732] = -202116109;
  *(_DWORD *)(v3 + 64) = furniture_item_id;
  v6 = *(unsigned int *)(v3 + 64);
  furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(this, v6);
  if ( furniture_config_ptr )
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 336));
    __for_range = &furniture_config_ptr->furn_type;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 80, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 80) = std::vector<unsigned int>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 112) = std::vector<unsigned int>::end(__for_range);
    while ( 1 )
    {
      v8 = (char *)(v3 + 112);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 80),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 112)) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v9 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 80));
      v10 = (int *)v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      v11 = *v10;
      v12 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(v8) = v12 != 0;
        __asan_report_store4(v3 + 48, v8);
      }
      *(_DWORD *)(v3 + 48) = v11;
      type_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureTypeExcelConfig(
                          this,
                          *(unsigned int *)(v3 + 48));
      if ( type_config_ptr )
      {
        std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 336), &type_config_ptr->type_category_id);
      }
      else
      {
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 272, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 272),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "getFurnitureTypeCategoryVec",
          315);
        v13 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                (common::milog::MiLogStream *const)(v3 + 272),
                (const char (*)[50])"findHomeWorldFurnitureTypeExcelConfig fail. type:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v14,
                (const char (*)[20])" furniture_item_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 80));
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    v16 = ((v3 + 144) >> 3) + 2147450880;
    *(_WORD *)v16 = 0;
    *(_BYTE *)(v16 + 2) = 0;
    M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 336))._M_node;
    v18 = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 336))._M_node;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
    std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 32));
    std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
      (std::vector<unsigned int> *const)(v3 + 144),
      (std::_Rb_tree_const_iterator<unsigned int>)M_node,
      (std::_Rb_tree_const_iterator<unsigned int>)v18,
      (const std::vector<unsigned int>::allocator_type *)(v3 + 32));
    std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 32));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    std::vector<unsigned int>::vector(retstr, (std::vector<unsigned int> *)(v3 + 144));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 144));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 336));
  }
  else
  {
    if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 208, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 208),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "getFurnitureTypeCategoryVec",
      306);
    v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           (common::milog::MiLogStream *const)(v3 + 208),
           (const char (*)[49])"furniture_config_ptr is null. furniture_item_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
    *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
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
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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
  return retstr;
};

// Line 325: range 0000000014470872-0000000014470B65
const std::vector<unsigned int> *__fastcall HomeWorldExcelConfigMgr::findGoodsVecByPoolID(
        const HomeWorldExcelConfigMgr *const this,
        __int64 pool_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_limited_shop_pool_goods_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  common::milog::MiLogStream *v8; // rax
  const std::vector<unsigned int> *result; // rax
  char v10[224]; // [rsp+10h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 11 pool_id:324 64 8 8 iter:326 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::findGoodsVecByPoolID;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = pool_id;
  p_limited_shop_pool_goods_map = &this->limited_shop_pool_goods_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, pool_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_limited_shop_pool_goods_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->limited_shop_pool_goods_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "findGoodsVecByPoolID",
      329);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[37])"findGoodsVecByPoolID fail. pool id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64))->second;
  }
  if ( v10 == (char *)v2 )
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

// Line 336: range 0000000014470B66-0000000014470E59
const std::unordered_map<unsigned int,unsigned int> *__fastcall HomeWorldExcelConfigMgr::findGoodsPoolInfo(
        const HomeWorldExcelConfigMgr *const this,
        __int64 level)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *p_limiti_shop_pool_info_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *v6; // rdx
  bool v7; // al
  common::milog::MiLogStream *v8; // rax
  const std::unordered_map<unsigned int,unsigned int> *result; // rax
  char v10[224]; // [rsp+10h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 9 level:335 64 8 8 iter:337 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::findGoodsPoolInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = level;
  p_limiti_shop_pool_info_map = &this->limiti_shop_pool_info_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::find(p_limiti_shop_pool_info_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->limiti_shop_pool_info_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::cend(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "findGoodsPoolInfo",
      340);
    v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[32])"findGoodsPoolInfo fail. level: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *const)(v2 + 64))->second;
  }
  if ( v10 == (char *)v2 )
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

// Line 347: range 0000000014470E5A-0000000014470E6C
int32_t __cdecl HomeWorldExcelConfigMgr::rewriteHomeModuleExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 352: range 0000000014470E6E-0000000014471EEE
int32_t __cdecl HomeWorldExcelConfigMgr::checkHomeModuleExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  uint32_t world_scene_id; // ecx
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  _BOOL4 v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  __int64 v21; // rax
  common::milog::MiLogStream *v22; // rax
  unsigned int *M_current; // rcx
  std::vector<unsigned int> *p_optional_room_scene_id_vec; // rdx
  char *v25; // rsi
  bool v26; // al
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  char *v30; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v31; // rax
  int *v32; // rdx
  int v33; // ecx
  char v34; // al
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  int v40; // eax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  __int64 v47; // rax
  common::milog::MiLogStream *v48; // rax
  int v49; // eax
  int32_t result; // eax
  unsigned int *__last; // [rsp+8h] [rbp-308h]
  data::HomeworldModuleExcelConfigMap *__for_range; // [rsp+28h] [rbp-2E8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldModuleExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-2E0h]
  const unsigned int *module_id; // [rsp+38h] [rbp-2D8h]
  std::tuple_element<1,std::pair<unsigned int const,data::HomeworldModuleExcelConfig> >::type *config; // [rsp+40h] [rbp-2D0h]
  const data::SceneExcelConfig *world_scene_excel_config_ptr; // [rsp+48h] [rbp-2C8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-2C0h]
  const data::SceneExcelConfig *room_scene_excel_config_ptr; // [rsp+58h] [rbp-2B8h]
  char v60[688]; // [rsp+60h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 4 18 world_scene_id:355 48 4 12 scene_id:375 64 8 15 __for_begin:353 96 8 13 __for_end:353"
                        " 128 8 9 <unknown> 160 8 8 iter:369 192 8 9 <unknown> 224 8 15 __for_begin:375 256 8 13 __for_en"
                        "d:375 288 8 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unkno"
                        "wn> 576 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::checkHomeModuleExcelConfig;
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
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -202116109;
  __for_range = &this->homeworld_module_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeworldModuleExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HomeworldModuleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeworldModuleExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::HomeworldModuleExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HomeworldModuleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeworldModuleExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeworldModuleExcelConfig>,false> *)(v3 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldModuleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldModuleExcelConfig>,false,false> *const)(v3 + 64));
    module_id = std::get<0ul,unsigned int const,data::HomeworldModuleExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::HomeworldModuleExcelConfig>(__in);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&config->world_scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->world_scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->world_scene_id);
    }
    world_scene_id = config->world_scene_id;
    v8 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(v3 + 32, v6);
    }
    *(_DWORD *)(v3 + 32) = world_scene_id;
    world_scene_excel_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(
                                     &txt_config_mgr->scene_config_mgr,
                                     *(unsigned int *)(v3 + 32));
    if ( world_scene_excel_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&world_scene_excel_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)world_scene_excel_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&world_scene_excel_config_ptr->type >> 3)
                                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&world_scene_excel_config_ptr->type);
      }
      if ( world_scene_excel_config_ptr->type == SCENE_HOME_WORLD )
      {
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        __last = std::vector<unsigned int>::end(&config->optional_room_scene_id_vec)._M_current;
        M_current = std::vector<unsigned int>::begin(&config->optional_room_scene_id_vec)._M_current;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, (((_BYTE)world_scene_excel_config_ptr + 12) & 7u) + 3);
        *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last,
                                                                                                  &config->default_room_scene_id);
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        p_optional_room_scene_id_vec = &config->optional_room_scene_id_vec;
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 192, __last);
        *(std::vector<unsigned int>::iterator *)(v3 + 192) = std::vector<unsigned int>::end(p_optional_room_scene_id_vec);
        v25 = (char *)(v3 + 192);
        v26 = __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 192));
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( v26 )
        {
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
            "checkHomeModuleExcelConfig",
            372);
          v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v28 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v27, (const char (*)[11])"module_id:");
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, module_id);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v29, (const char (*)[36])byte_1AD7F6C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
        }
        else
        {
          __for_range_0 = &config->optional_room_scene_id_vec;
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 224, v25);
          *(std::vector<unsigned int>::iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_0);
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 256, v25);
          *(std::vector<unsigned int>::iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_0);
          while ( 1 )
          {
            v30 = (char *)(v3 + 256);
            if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 224),
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 256)) )
            {
              v40 = 1;
              goto LABEL_62;
            }
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
            v31 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 224));
            v32 = (int *)v31;
            if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v31);
            }
            v33 = *v32;
            v34 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
            if ( v34 != 0 && v34 <= 3 )
            {
              LOBYTE(v30) = v34 != 0;
              __asan_report_store4(v3 + 48, v30);
            }
            *(_DWORD *)(v3 + 48) = v33;
            room_scene_excel_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(
                                            &txt_config_mgr->scene_config_mgr,
                                            *(unsigned int *)(v3 + 48));
            if ( !room_scene_excel_config_ptr )
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
                "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
                "checkHomeModuleExcelConfig",
                380);
              v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 512),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v36 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v35,
                      (const char (*)[11])"module_id:");
              v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, module_id);
              v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v37,
                      (const char (*)[16])" room_scene_id:");
              v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v38,
                      (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v39,
                (const char (*)[30])" not find in scene_config_mgr");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
              *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v40 = 0;
              goto LABEL_62;
            }
            if ( *(_BYTE *)(((unsigned __int64)&room_scene_excel_config_ptr->type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)room_scene_excel_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&room_scene_excel_config_ptr->type >> 3)
                                                                                         + 0x7FFF8000) )
            {
              __asan_report_load4(&room_scene_excel_config_ptr->type);
            }
            if ( room_scene_excel_config_ptr->type != SCENE_HOME_ROOM )
              break;
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 224));
          }
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
            "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
            "checkHomeModuleExcelConfig",
            385);
          v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 576),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v42 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v41, (const char (*)[11])"module_id:");
          v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, module_id);
          v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v43,
                  (const char (*)[16])" room_scene_id:");
          v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v44,
                  (const unsigned int *)(v3 + 48));
          v46 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v45, (const char (*)[13])" scene_type:");
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&room_scene_excel_config_ptr->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)room_scene_excel_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&room_scene_excel_config_ptr->type >> 3)
                                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4(&room_scene_excel_config_ptr->type);
          }
          v47 = (__int64)data::enumValToStr(room_scene_excel_config_ptr->type);
          if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
            v47 = __asan_report_store8(v3 + 288, (((_BYTE)room_scene_excel_config_ptr + 12) & 7u) + 3);
          *(_QWORD *)(v3 + 288) = v47;
          v48 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v46,
                  (const char *const *)(v3 + 288));
          common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v48,
            (const char (*)[24])" is not SCENE_HOME_ROOM");
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
          *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v40 = 0;
LABEL_62:
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
          v14 = v40 == 1;
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkHomeModuleExcelConfig",
          364);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])"module_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, module_id);
        v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v17,
                (const char (*)[17])" world_scene_id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v3 + 32));
        v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])" scene_type:");
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&world_scene_excel_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)world_scene_excel_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&world_scene_excel_config_ptr->type >> 3)
                                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&world_scene_excel_config_ptr->type);
        }
        v21 = (__int64)data::enumValToStr(world_scene_excel_config_ptr->type);
        if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
          v21 = __asan_report_store8(v3 + 128, (((_BYTE)world_scene_excel_config_ptr + 12) & 7u) + 3);
        *(_QWORD *)(v3 + 128) = v21;
        v22 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v20, (const char *const *)(v3 + 128));
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          v22,
          (const char (*)[25])" is not SCENE_HOME_WORLD");
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
      }
    }
    else
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkHomeModuleExcelConfig",
        359);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])"module_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, module_id);
      v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v11, (const char (*)[17])" world_scene_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        v13,
        (const char (*)[30])" not find in scene_config_mgr");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( !v14 )
    {
      v49 = 0;
      goto LABEL_67;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldModuleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldModuleExcelConfig>,false,false> *const)(v3 + 64));
  }
  v49 = 1;
LABEL_67:
  if ( v49 == 1 )
    v2 = 0;
  result = v2;
  if ( v60 == (char *)v3 )
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
  }
  return result;
};

// Line 396: range 0000000014471EF0-0000000014472B8C
int32_t __cdecl HomeWorldExcelConfigMgr::checkFurnitureExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ItemType *p_item_type; // rax
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int special_furniture_type; // eax
  std::unordered_map<unsigned int,unsigned int> *p_furniture_to_avatar_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v12; // rdx
  bool v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  uint32_t discount_cost; // ecx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-228h]
  uint32_t suite_furnitue_id; // [rsp+1Ch] [rbp-224h]
  data::HomeWorldFurnitureExcelConfigMap *__for_range; // [rsp+20h] [rbp-220h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false,false>::reference v35; // [rsp+28h] [rbp-218h]
  std::tuple_element<0,std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig> >::type *id; // [rsp+30h] [rbp-210h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig> >::type *furniture_config; // [rsp+38h] [rbp-208h]
  char v38[512]; // [rsp+40h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 8 15 __for_begin:398 64 8 13 __for_end:398 96 8 9 <unknown> 128 8 9 <unknown> 160 32 9 <unk"
                        "nown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::checkFurnitureExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  ret = 0;
  __for_range = &this->home_world_furniture_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldFurnitureExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::HomeWorldFurnitureExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldFurnitureExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HomeWorldFurnitureExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false> *)(v2 + 64)) )
  {
    v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::HomeWorldFurnitureExcelConfig>(v35);
    furniture_config = (std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HomeWorldFurnitureExcelConfig>(v35);
    p_item_type = &furniture_config->item_type;
    v6 = (((_BYTE)furniture_config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_item_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_item_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_item_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_item_type);
    }
    if ( furniture_config->item_type != ITEM_FURNITURE )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkFurnitureExcelConfig",
        403);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])"furniture_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v9, (const char (*)[26])byte_1AD7F8E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      goto LABEL_51;
    }
    if ( *(_BYTE *)(((unsigned __int64)&furniture_config->special_furniture_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&furniture_config->special_furniture_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&furniture_config->special_furniture_type);
    }
    special_furniture_type = furniture_config->special_furniture_type;
    if ( special_furniture_type == 13 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&furniture_config->stack_limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)furniture_config - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&furniture_config->stack_limit >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&furniture_config->stack_limit);
      }
      if ( furniture_config->stack_limit == 1 )
      {
LABEL_43:
        if ( *(_BYTE *)(((unsigned __int64)&furniture_config->discount_cost >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)furniture_config - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&furniture_config->discount_cost >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&furniture_config->discount_cost);
        }
        discount_cost = furniture_config->discount_cost;
        if ( *(_BYTE *)(((unsigned __int64)&furniture_config->cost >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&furniture_config->cost >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&furniture_config->cost);
        }
        if ( discount_cost > furniture_config->cost )
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
            "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
            "checkFurnitureExcelConfig",
            445);
          v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 416),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v24,
                  (const char (*)[14])"furniture_id:");
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
          v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v26,
                  (const char (*)[16])" discount_cost:");
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  &furniture_config->discount_cost);
          v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v28, (const char (*)[12])byte_1AD7FA80);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &furniture_config->cost);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        }
        goto LABEL_51;
      }
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkFurnitureExcelConfig",
        434);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])"furniture_id:");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v22, (const char (*)[37])byte_1AD7F9E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      if ( special_furniture_type > 13 )
        goto LABEL_43;
      if ( special_furniture_type == 5 )
      {
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        p_furniture_to_avatar_map = &this->furniture_to_avatar_map;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 128, v6);
        *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,unsigned int>::end(p_furniture_to_avatar_map);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        v12 = &this->furniture_to_avatar_map;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 96, v6);
        *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  v12,
                                                                                  id);
        v13 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 128));
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( !v13 )
          goto LABEL_43;
        ret = -1;
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkFurnitureExcelConfig",
          413);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])"furniture_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
        common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v16, (const char (*)[60])byte_1AD7F920);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        if ( special_furniture_type != 7 )
          goto LABEL_43;
        suite_furnitue_id = ConstValueExcelConfigMgr::getHomeSuiteFurnitureID(&txt_config_mgr->const_value_config_mgr);
        if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(id);
        }
        if ( suite_furnitue_id == *id )
          goto LABEL_43;
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkFurnitureExcelConfig",
          424);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])"furniture_id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, id);
        common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v19, (const char (*)[61])byte_1AD7F980);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
LABEL_51:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v38 == (char *)v2 )
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

// Line 453: range 0000000014472B8E-0000000014473157
int32_t __cdecl HomeWorldExcelConfigMgr::checkHomeNpcExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_avatar_id; // rax
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  data::HomeWorldNPCExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldNPCExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-128h]
  uint32_t *furniture_id; // [rsp+20h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,data::HomeWorldNPCExcelConfig> >::type *config; // [rsp+28h] [rbp-118h]
  char v22[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:454 64 8 13 __for_end:454 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::checkHomeNpcExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->home_world_npc_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldNPCExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::HomeWorldNPCExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldNPCExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HomeWorldNPCExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldNPCExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldNPCExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldNPCExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_27;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldNPCExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldNPCExcelConfig>,false,false> *const)(v3 + 32));
    furniture_id = std::get<0ul,unsigned int const,data::HomeWorldNPCExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::HomeWorldNPCExcelConfig>(__in);
    p_avatar_id = &config->avatar_id;
    if ( *(_BYTE *)(((unsigned __int64)p_avatar_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_avatar_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_avatar_id);
    }
    if ( config->avatar_id )
    {
      p_avatar_config_mgr = &txt_config_mgr->avatar_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->avatar_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->avatar_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->avatar_id);
      }
      if ( !data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, config->avatar_id) )
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkHomeNpcExcelConfig",
          464);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])"avatar_id:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->avatar_id);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          v10,
          (const char (*)[31])" not find in avatar_config_mgr");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
        v2 = -1;
        v11 = 0;
        goto LABEL_27;
      }
      if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(furniture_id);
      }
      if ( HomeWorldExcelConfigMgr::getFurnitureSpeicalType(this, *furniture_id) != NPC_1 )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldNPCExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldNPCExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
    "checkHomeNpcExcelConfig",
    470);
  v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])"avatar_id:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->avatar_id);
  v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])" furniture_id:");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, furniture_id);
  common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v16, (const char (*)[22])" is not NPC furniture");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v11 = 0;
LABEL_27:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v22 == (char *)v3 )
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

// Line 478: range 0000000014473158-000000001447367D
int32_t __cdecl HomeWorldExcelConfigMgr::rewriteHomeNpcExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int *v6; // r8
  uint32_t *p_avatar_id; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v8; // rax
  const unsigned int *v9; // r8
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  data::HomeWorldNPCExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldNPCExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-128h]
  const unsigned int *furniture_id; // [rsp+20h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,data::HomeWorldNPCExcelConfig> >::type *config; // [rsp+28h] [rbp-118h]
  char v21[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:479 64 8 13 __for_end:479 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::rewriteHomeNpcExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->home_world_npc_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldNPCExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::HomeWorldNPCExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldNPCExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HomeWorldNPCExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldNPCExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldNPCExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldNPCExcelConfig>,false> *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_23;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldNPCExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldNPCExcelConfig>,false,false> *const)(v3 + 32));
    furniture_id = std::get<0ul,unsigned int const,data::HomeWorldNPCExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::HomeWorldNPCExcelConfig>(__in);
    p_avatar_id = &config->avatar_id;
    if ( *(_BYTE *)(((unsigned __int64)p_avatar_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_avatar_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_avatar_id);
    }
    if ( config->avatar_id )
    {
      v8 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
             &this->furniture_to_avatar_map,
             furniture_id,
             &config->avatar_id,
             (const unsigned int *)&this->furniture_to_avatar_map,
             v6);
      if ( !v8.second )
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "rewriteHomeNpcExcelConfig",
          488);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 96),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                v10,
                (const char (*)[51])"HomeWorldNPCConfigData have repeated furniture_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, furniture_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
        v2 = -1;
        v12 = 0;
        goto LABEL_23;
      }
      v13 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
              &this->avatar_to_furniture_map,
              &config->avatar_id,
              furniture_id,
              (unsigned int *)&this->avatar_to_furniture_map,
              v9);
      if ( !v13.second )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldNPCExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldNPCExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
    "rewriteHomeNpcExcelConfig",
    493);
  v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v15 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
          v14,
          (const char (*)[48])"HomeWorldNPCConfigData have repeated avatar_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->avatar_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v12 = 0;
LABEL_23:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v21 == (char *)v3 )
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

// Line 501: range 000000001447367E-0000000014473BF5
int32_t __cdecl HomeWorldExcelConfigMgr::checkHomeAnimalExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  HomeWorldExcelConfigMgr *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  data::HomeworldAnimalExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldAnimalExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-128h]
  const unsigned int *furniture_id; // [rsp+20h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,data::HomeworldAnimalExcelConfig> >::type *config; // [rsp+28h] [rbp-118h]
  char v20[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:502 64 8 13 __for_end:502 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::checkHomeAnimalExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->homeworld_animal_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeworldAnimalExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::HomeworldAnimalExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeworldAnimalExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HomeworldAnimalExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HomeworldAnimalExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeworldAnimalExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeworldAnimalExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_24;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldAnimalExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldAnimalExcelConfig>,false,false> *const)(v3 + 32));
    furniture_id = std::get<0ul,unsigned int const,data::HomeworldAnimalExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::HomeworldAnimalExcelConfig>(__in);
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(furniture_id);
    }
    if ( !data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(v6, *furniture_id) )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkHomeAnimalExcelConfig",
        506);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])"furniture_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, furniture_id);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])" not find in config");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v10 = 0;
      goto LABEL_24;
    }
    p_monster_config_mgr = &txt_config_mgr->monster_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->monster_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->monster_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->monster_id);
    }
    if ( !data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(p_monster_config_mgr, config->monster_id) )
      break;
    std::unordered_set<unsigned int>::insert(&this->animal_id_set, &config->monster_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldAnimalExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldAnimalExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
    "checkHomeAnimalExcelConfig",
    511);
  v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])"monster_id:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->monster_id);
  common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
    v14,
    (const char (*)[32])" not find in monster_config_mgr");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v10 = 0;
LABEL_24:
  if ( v10 == 1 )
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

// Line 520: range 0000000014473BF6-0000000014473E6C
int32_t __cdecl HomeWorldExcelConfigMgr::rewriteHomeLevelExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const unsigned int *v5; // rsi
  uint32_t *v6; // rax
  uint32_t *v7; // rdx
  uint32_t v8; // ecx
  char v9; // al
  int32_t result; // eax
  data::HomeworldLevelExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  const unsigned int *level; // [rsp+20h] [rbp-90h]
  char v14[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false,false> *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:521 64 8 13 __for_end:521";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false>::__node_type *)HomeWorldExcelConfigMgr::rewriteHomeLevelExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->homeworld_level_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::HomeworldLevelExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::HomeworldLevelExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false,false>::operator*(v2 + 4);
    level = std::get<0ul,unsigned int const,data::HomeworldLevelExcelConfig>(__in);
    std::get<1ul,unsigned int const,data::HomeworldLevelExcelConfig>(__in);
    v5 = level;
    v6 = (uint32_t *)std::max<unsigned int>(&this->max_home_level_, level);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v8 = *v7;
    v9 = *(_BYTE *)(((unsigned __int64)&this->max_home_level_ >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v5) = v9 != 0;
      __asan_report_store4(&this->max_home_level_, v5);
    }
    this->max_home_level_ = v8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 529: range 0000000014473E6E-000000001447420B
int32_t __cdecl HomeWorldExcelConfigMgr::checkHomeLevelExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t *p_reward_id; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::HomeworldLevelExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-D8h]
  std::tuple_element<1,std::pair<unsigned int const,data::HomeworldLevelExcelConfig> >::type *config; // [rsp+38h] [rbp-C8h]
  char v13[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:531 64 8 13 __for_end:531 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::checkHomeLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->homeworld_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeworldLevelExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::HomeworldLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeworldLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HomeworldLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::HomeworldLevelExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::HomeworldLevelExcelConfig>(__in);
    p_reward_id = &config->reward_id;
    if ( *(_BYTE *)(((unsigned __int64)p_reward_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reward_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_reward_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            config->reward_id,
                            ITEM_LIMIT_HOME_LEVELUP_REWARD) != 1 )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkHomeLevelExcelConfig",
        535);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(v6, (const char (*)[67])byte_1AD7FFE0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->reward_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v13 == (char *)v2 )
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

// Line 544: range 000000001447420C-00000000144745BB
int32_t __cdecl HomeWorldExcelConfigMgr::checkHomeWorldComfortLevelExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false,false> *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_comfort; // rax
  int32_t result; // eax
  data::HomeWorldComfortLevelExcelConfigMap *__for_range; // [rsp+20h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-E8h]
  char v9[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false>::__node_type *)"3 32 8 15 __for_begin:546 64 8 13 __for_end:546 96 32 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false>::__node_type *)HomeWorldExcelConfigMgr::checkHomeWorldComfortLevelExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  __for_range = &this->home_world_comfort_level_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::HomeWorldComfortLevelExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::HomeWorldComfortLevelExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::HomeWorldComfortLevelExcelConfig>(__in);
    p_comfort = &std::get<1ul,unsigned int const,data::HomeWorldComfortLevelExcelConfig>(__in)->comfort;
    if ( *(_BYTE *)(((unsigned __int64)p_comfort >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_comfort & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_comfort >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_comfort);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 558: range 00000000144745BC-000000001447483B
int32_t __cdecl HomeWorldExcelConfigMgr::rewriteHomeWorldComfortLevelExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::tuple_element<0,std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig> >::type v5; // r14d
  uint32_t *p_comfort; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  std::tuple_element<0,std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig> >::type *v8; // rdx
  char v9; // cl
  int32_t result; // eax
  data::HomeWorldComfortLevelExcelConfigMap *__for_range; // [rsp+10h] [rbp-B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig> >::type *level; // [rsp+20h] [rbp-A0h]
  std::tuple_element<1,std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig> >::type *config; // [rsp+28h] [rbp-98h]
  char v15[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false,false> *)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:559 64 8 13 __for_end:559";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false>::__node_type *)HomeWorldExcelConfigMgr::rewriteHomeWorldComfortLevelExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->home_world_comfort_level_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::HomeWorldComfortLevelExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::HomeWorldComfortLevelExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false,false>::operator*(v2 + 4);
    level = std::get<0ul,unsigned int const,data::HomeWorldComfortLevelExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::HomeWorldComfortLevelExcelConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(level);
    }
    v5 = *level;
    p_comfort = &config->comfort;
    v7 = std::map<unsigned int,unsigned int>::operator[](&this->comfort_level_map, &config->comfort);
    v8 = v7;
    v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
    {
      LOBYTE(p_comfort) = v9 != 0;
      __asan_report_store4(v7, p_comfort);
    }
    *v8 = v5;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldComfortLevelExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 567: range 000000001447483C-000000001447491B
bool __cdecl HomeWorldExcelConfigMgr::isSameFunitureSurfaceType(
        const HomeWorldExcelConfigMgr *const this,
        uint32_t furniture_id_1,
        uint32_t furniture_id_2)
{
  data::FurnitureDeploySurfaceType surface_type; // ecx
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr_1; // [rsp+10h] [rbp-10h]
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr_2; // [rsp+18h] [rbp-8h]

  furniture_config_ptr_1 = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(this, furniture_id_1);
  if ( !furniture_config_ptr_1 )
    return 0;
  furniture_config_ptr_2 = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(this, furniture_id_2);
  if ( !furniture_config_ptr_2 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr_1->surface_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&furniture_config_ptr_1->surface_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&furniture_config_ptr_1->surface_type);
  }
  surface_type = furniture_config_ptr_1->surface_type;
  if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr_2->surface_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&furniture_config_ptr_2->surface_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&furniture_config_ptr_2->surface_type);
  }
  return surface_type == furniture_config_ptr_2->surface_type;
};

// Line 584: range 000000001447491C-0000000014474D7F
int32_t __cdecl HomeWorldExcelConfigMgr::rewriteHomeWorldFurnitureExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t rank_level; // ecx
  data::ItemConfig *v7; // rdi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  int v11; // eax
  int32_t result; // eax
  data::HomeWorldFurnitureExcelConfigMap *__for_range; // [rsp+20h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-E8h]
  uint32_t *item_id; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig> >::type *furniture_config; // [rsp+38h] [rbp-D8h]
  char v18[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:586 64 8 13 __for_end:586 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::rewriteHomeWorldFurnitureExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->home_world_furniture_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldFurnitureExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::HomeWorldFurnitureExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldFurnitureExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HomeWorldFurnitureExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_24;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false,false> *const)(v3 + 32));
    item_id = std::get<0ul,unsigned int const,data::HomeWorldFurnitureExcelConfig>(__in);
    furniture_config = std::get<1ul,unsigned int const,data::HomeWorldFurnitureExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<unsigned int>(&furniture_config->furn_type);
    if ( *(_BYTE *)(((unsigned __int64)&furniture_config->rank_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)furniture_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&furniture_config->rank_level >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&furniture_config->rank_level);
    }
    rank_level = furniture_config->rank_level;
    v7 = furniture_config;
    if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
    {
      v7 = (data::ItemConfig *)item_id;
      __asan_report_load4(item_id);
    }
    if ( ItemExcelConfigMgr::addItemConfig(&txt_config_mgr->item_config_mgr, *item_id, v7, rank_level) )
      break;
    v11 = *(unsigned __int8 *)(((unsigned __int64)&furniture_config->special_furniture_type >> 3) + 0x7FFF8000);
    if ( (_BYTE)v11 != 0 && (char)v11 <= 3 )
      __asan_report_load4(&furniture_config->special_furniture_type);
    if ( furniture_config->special_furniture_type == ChangeBgmFurniture )
      std::unordered_set<unsigned int>::insert(&this->home_change_bgm_furniture_id_set, item_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
    "rewriteHomeWorldFurnitureExcelConfig",
    591);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         v8,
         (const char (*)[31])"addItemConfig failed, item_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, item_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_24:
  if ( v10 == 1 )
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

// Line 603: range 0000000014474D80-0000000014474F8F
int32_t __cdecl HomeWorldExcelConfigMgr::rewriteFurnitureMakeExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::FurnitureMakeExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::FurnitureMakeExcelConfig> >::type *config; // [rsp+28h] [rbp-88h]
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:604 64 8 13 __for_end:604";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false>::__node_type *)HomeWorldExcelConfigMgr::rewriteFurnitureMakeExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->furniture_make_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::FurnitureMakeExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::FurnitureMakeExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::FurnitureMakeExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::FurnitureMakeExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &config->material_items,
      (unsigned int *)8);
    std::unordered_set<unsigned int>::insert(&this->furniture_make_furniture_id_set, &config->furniture_item_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 614: range 0000000014474F90-0000000014476BB5
int32_t __cdecl HomeWorldExcelConfigMgr::checkLimitedShopExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v7; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type v8; // esi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v9; // rsi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // eax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  __int64 item_id; // rsi
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  uint32_t *p_id; // rsi
  ItemExcelConfigMgr *v36; // rcx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  int v41; // eax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  char *v44; // rsi
  common::milog::MiLogStream *v45; // rax
  int v46; // eax
  char *v47; // rsi
  unsigned int *v48; // rax
  int *v49; // rdx
  int v50; // ecx
  char v51; // al
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  int v54; // edx
  data::HomeWorldLeastShopExcelConfigVec *__for_range; // [rsp+18h] [rbp-578h]
  data::HomeworldLevelExcelConfigMap *__for_range_0; // [rsp+20h] [rbp-570h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false,false>::reference v59; // [rsp+28h] [rbp-568h]
  std::tuple_element<0,std::pair<unsigned int const,data::HomeworldLevelExcelConfig> >::type *level; // [rsp+30h] [rbp-560h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HomeworldLevelExcelConfig> >::type *config_0; // [rsp+38h] [rbp-558h]
  data::HomeWorldLimitShopExcelConfigMap *__for_range_1; // [rsp+40h] [rbp-550h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig>,false,false>::reference v63; // [rsp+48h] [rbp-548h]
  std::tuple_element<0,std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig> >::type *goods_id; // [rsp+50h] [rbp-540h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig> >::type *goods_info; // [rsp+58h] [rbp-538h]
  const std::vector<data::IdCountConfig> *__for_range_2; // [rsp+60h] [rbp-530h]
  const data::IdCountConfig *id_count_config; // [rsp+68h] [rbp-528h]
  const data::ItemConfig *item_config_ptr; // [rsp+70h] [rbp-520h]
  const std::vector<data::HomeWorldLimitShopCond> *__for_range_3; // [rsp+78h] [rbp-518h]
  const data::HomeWorldLimitShopCond *shop_cond; // [rsp+80h] [rbp-510h]
  const std::vector<unsigned int> *__for_range_4; // [rsp+88h] [rbp-508h]
  const data::HomeWorldLeastShopExcelConfig *config; // [rsp+98h] [rbp-4F8h]
  char v73[1264]; // [rsp+A0h] [rbp-4F0h] BYREF

  v3 = (unsigned __int64)v73;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1216LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "24 48 4 12 quest_id:688 64 8 15 __for_begin:618 96 8 13 __for_end:618 128 8 15 __for_begin:625 1"
                        "60 8 13 __for_end:625 192 8 15 __for_begin:640 224 8 13 __for_end:640 256 8 15 __for_begin:659 2"
                        "88 8 13 __for_end:659 320 8 15 __for_begin:675 352 8 13 __for_end:675 384 8 15 __for_begin:688 4"
                        "16 8 13 __for_end:688 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown"
                        "> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown>"
                        " 1024 56 19 level_count_map:615 1120 56 15 pool_id_set:616";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::checkLimitedShopExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
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
  v5[536862732] = -218959360;
  v5[536862733] = -218959360;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -218959118;
  v5[536862753] = -234881024;
  v5[536862754] = -218959118;
  v5[536862756] = -218103808;
  v5[536862757] = -202116109;
  std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1024));
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 1120));
  __for_range = &this->home_world_least_shop_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::HomeWorldLeastShopExcelConfig>::iterator *)(v3 + 64) = std::vector<data::HomeWorldLeastShopExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::vector<data::HomeWorldLeastShopExcelConfig>::iterator *)(v3 + 96) = std::vector<data::HomeWorldLeastShopExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !__gnu_cxx::operator!=<data::HomeWorldLeastShopExcelConfig *,std::vector<data::HomeWorldLeastShopExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::HomeWorldLeastShopExcelConfig*,std::vector<data::HomeWorldLeastShopExcelConfig> > *)(v3 + 64),
            (const __gnu_cxx::__normal_iterator<data::HomeWorldLeastShopExcelConfig*,std::vector<data::HomeWorldLeastShopExcelConfig> > *)(v3 + 96)) )
      break;
    config = __gnu_cxx::__normal_iterator<data::HomeWorldLeastShopExcelConfig *,std::vector<data::HomeWorldLeastShopExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::HomeWorldLeastShopExcelConfig*,std::vector<data::HomeWorldLeastShopExcelConfig> > *const)(v3 + 64));
    v7 = std::unordered_map<unsigned int,unsigned int>::operator[](
           (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1024),
           &config->level);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    v8 = *v7;
    if ( *(_BYTE *)(((unsigned __int64)&config->count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->count);
    }
    *v7 = v8 + config->count;
    std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v3 + 1120), &config->pool_id);
    __gnu_cxx::__normal_iterator<data::HomeWorldLeastShopExcelConfig *,std::vector<data::HomeWorldLeastShopExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::HomeWorldLeastShopExcelConfig*,std::vector<data::HomeWorldLeastShopExcelConfig> > *const)(v3 + 64));
  }
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->homeworld_level_excel_config_map;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v6);
  *(std::unordered_map<unsigned int,data::HomeworldLevelExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::HomeworldLevelExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, v6);
  *(std::unordered_map<unsigned int,data::HomeworldLevelExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::HomeworldLevelExcelConfig>::end(__for_range_0);
  while ( 1 )
  {
    v9 = (std::unordered_map<unsigned int,unsigned int>::mapped_type *)(v3 + 160);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false> *)(v3 + 160)) )
    {
      v12 = 1;
      goto LABEL_35;
    }
    v59 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false,false> *const)(v3 + 128));
    level = std::get<0ul,unsigned int const,data::HomeworldLevelExcelConfig>(v59);
    config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::HomeworldLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HomeworldLevelExcelConfig>(v59);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
            (std::unordered_map<unsigned int,unsigned int> *)(v3 + 1024),
            level) )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkLimitedShopExcelConfig",
        629);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v10, (const char (*)[59])byte_1AD80560);
      v9 = level;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, level);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
      goto LABEL_35;
    }
    v13 = std::unordered_map<unsigned int,unsigned int>::operator[](
            (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1024),
            level);
    v14 = (int *)v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    v15 = *v14;
    if ( *(_BYTE *)(((unsigned __int64)&config_0->limit_shop_goods_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_0 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_0->limit_shop_goods_count >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&config_0->limit_shop_goods_count);
    }
    if ( v15 != config_0->limit_shop_goods_count )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeworldLevelExcelConfig>,false,false> *const)(v3 + 128));
  }
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
    "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
    "checkLimitedShopExcelConfig",
    634);
  v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 512),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v17 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(v16, (const char (*)[80])byte_1AD805C0);
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, level);
  v19 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v18, (const char (*)[23])byte_1AD80640);
  v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &config_0->limit_shop_goods_count);
  v21 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v20, (const char (*)[26])byte_1AD80680);
  v9 = std::unordered_map<unsigned int,unsigned int>::operator[](
         (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1024),
         level);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, v9);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
  *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v12 = 0;
LABEL_35:
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( v12 != 1 )
    goto LABEL_120;
  __for_range_1 = &this->home_world_limit_shop_excel_config_map;
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, v9);
  *(std::unordered_map<unsigned int,data::HomeWorldLimitShopExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::HomeWorldLimitShopExcelConfig>::begin(__for_range_1);
  *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 224, v9);
  *(std::unordered_map<unsigned int,data::HomeWorldLimitShopExcelConfig>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::HomeWorldLimitShopExcelConfig>::end(__for_range_1);
LABEL_41:
  if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig>,false> *)(v3 + 192),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig>,false> *)(v3 + 224)) )
  {
    v26 = 1;
    goto LABEL_118;
  }
  v63 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig>,false,false> *const)(v3 + 192));
  goods_id = std::get<0ul,unsigned int const,data::HomeWorldLimitShopExcelConfig>(v63);
  goods_info = (std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HomeWorldLimitShopExcelConfig>(v63);
  if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
          (std::unordered_set<unsigned int> *)(v3 + 1120),
          &goods_info->pool_id) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkLimitedShopExcelConfig",
      644);
    v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 576),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v23 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v22, (const char (*)[58])byte_1AD806C0);
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, goods_id);
    v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v24, (const char (*)[16])byte_1AD80720);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &goods_info->pool_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
    *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v26 = 0;
    goto LABEL_118;
  }
  p_item_config_mgr = &txt_config_mgr->item_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&goods_info->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)goods_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_info->item_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&goods_info->item_id);
  }
  item_id = goods_info->item_id;
  if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, item_id) )
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkLimitedShopExcelConfig",
      649);
    v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 640),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v30 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v29, (const char (*)[43])byte_1AD80760);
    v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, goods_id);
    v32 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v31, (const char (*)[13])byte_1AD807C0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &goods_info->item_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
    *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v26 = 0;
    goto LABEL_118;
  }
  if ( !std::vector<data::IdCountConfig>::empty(&goods_info->cost_items) )
  {
    __for_range_2 = &goods_info->cost_items;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, item_id);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 256) = std::vector<data::IdCountConfig>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, item_id);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 288) = std::vector<data::IdCountConfig>::end(__for_range_2);
    while ( 1 )
    {
      p_id = (uint32_t *)(v3 + 288);
      if ( !__gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 256),
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 288)) )
      {
        v41 = 1;
        goto LABEL_79;
      }
      id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 256));
      v36 = &txt_config_mgr->item_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      item_config_ptr = ItemExcelConfigMgr::findItemConfig(v36, id_count_config->id);
      if ( !item_config_ptr )
        goto LABEL_68;
      if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&item_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&item_config_ptr->id);
      }
      if ( item_config_ptr->id == 202 )
      {
LABEL_68:
        *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 768, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 768),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkLimitedShopExcelConfig",
          664);
        v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 768),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v38 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v37, (const char (*)[37])byte_1AD80860);
        v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, goods_id);
        v40 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v39, (const char (*)[13])byte_1AD69A00);
        p_id = &id_count_config->id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &id_count_config->id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
        *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v41 = 0;
        goto LABEL_79;
      }
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&id_count_config->count);
      }
      if ( !id_count_config->count )
        break;
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 256));
    }
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkLimitedShopExcelConfig",
      669);
    v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 832),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v43 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v42, (const char (*)[48])byte_1AD808C0);
    p_id = goods_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, goods_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
    *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v41 = 0;
LABEL_79:
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    if ( v41 != 1 )
    {
      v26 = 0;
      goto LABEL_118;
    }
    __for_range_3 = &goods_info->cond;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, p_id);
    *(std::vector<data::HomeWorldLimitShopCond>::const_iterator *)(v3 + 320) = std::vector<data::HomeWorldLimitShopCond>::begin(__for_range_3);
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 352, p_id);
    *(std::vector<data::HomeWorldLimitShopCond>::const_iterator *)(v3 + 352) = std::vector<data::HomeWorldLimitShopCond>::end(__for_range_3);
    while ( 1 )
    {
      v44 = (char *)(v3 + 352);
      if ( !__gnu_cxx::operator!=<data::HomeWorldLimitShopCond const*,std::vector<data::HomeWorldLimitShopCond>>(
              (const __gnu_cxx::__normal_iterator<const data::HomeWorldLimitShopCond*,std::vector<data::HomeWorldLimitShopCond> > *)(v3 + 320),
              (const __gnu_cxx::__normal_iterator<const data::HomeWorldLimitShopCond*,std::vector<data::HomeWorldLimitShopCond> > *)(v3 + 352)) )
      {
        v46 = 1;
        goto LABEL_114;
      }
      shop_cond = __gnu_cxx::__normal_iterator<data::HomeWorldLimitShopCond const*,std::vector<data::HomeWorldLimitShopCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::HomeWorldLimitShopCond*,std::vector<data::HomeWorldLimitShopCond> > *const)(v3 + 320));
      if ( *(_BYTE *)(((unsigned __int64)&shop_cond->condition >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&shop_cond->condition >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&shop_cond->condition);
      }
      if ( shop_cond->condition == HOMEWORLD_LIMIT_SHOP_COND_TYPE_QUEST_FINISH )
      {
        if ( std::vector<unsigned int>::empty(&shop_cond->condition_param) )
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
            "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
            "checkLimitedShopExcelConfig",
            684);
          v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 896),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v45, (const char (*)[51])byte_1AD80920);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
          *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v46 = 0;
LABEL_114:
          *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
          if ( v46 != 1 )
          {
            v26 = 0;
            goto LABEL_118;
          }
          std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig>,false,false> *const)(v3 + 192));
          goto LABEL_41;
        }
        __for_range_4 = &shop_cond->condition_param;
        *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 384, v44);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 384) = std::vector<unsigned int>::begin(__for_range_4);
        *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 416, v44);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 416) = std::vector<unsigned int>::end(__for_range_4);
        while ( 1 )
        {
          v47 = (char *)(v3 + 416);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 384),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 416)) )
          {
            v54 = 1;
            goto LABEL_110;
          }
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          v48 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 384));
          v49 = (int *)v48;
          if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v48);
          }
          v50 = *v49;
          v51 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          if ( v51 != 0 && v51 <= 3 )
          {
            LOBYTE(v47) = v51 != 0;
            __asan_report_store4(v3 + 48, v47);
          }
          *(_DWORD *)(v3 + 48) = v50;
          if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(
                  &txt_config_mgr->quest_config_mgr,
                  *(unsigned int *)(v3 + 48)) )
            break;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 384));
        }
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkLimitedShopExcelConfig",
          694);
        v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 960),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v53 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v52, (const char (*)[53])byte_1AD80980);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
        *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v54 = 0;
LABEL_110:
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
        if ( v54 != 1 )
        {
          v46 = 0;
          goto LABEL_114;
        }
      }
      __gnu_cxx::__normal_iterator<data::HomeWorldLimitShopCond const*,std::vector<data::HomeWorldLimitShopCond>>::operator++((__gnu_cxx::__normal_iterator<const data::HomeWorldLimitShopCond*,std::vector<data::HomeWorldLimitShopCond> > *const)(v3 + 320));
    }
  }
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
    "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
    "checkLimitedShopExcelConfig",
    655);
  v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 704),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v34 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v33, (const char (*)[45])byte_1AD80800);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, goods_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
  *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v26 = 0;
LABEL_118:
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
  if ( v26 == 1 )
    v2 = 0;
LABEL_120:
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 1120));
  std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1024));
  if ( v73 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 128) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1216LL, v73);
  }
  return v2;
};

// Line 712: range 0000000014476BB6-0000000014476FEC
int32_t __cdecl HomeWorldExcelConfigMgr::rewriteLimitedShopExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::vector<unsigned int> *v6; // rdx
  uint32_t count; // r14d
  std::unordered_map<unsigned int,unsigned int> *v8; // rax
  uint32_t *p_pool_id; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v10; // rax
  uint32_t *v11; // rdx
  char v12; // cl
  int32_t result; // eax
  data::HomeWorldLimitShopExcelConfigMap *__for_range; // [rsp+10h] [rbp-100h]
  data::HomeWorldLeastShopExcelConfigVec *__for_range_0; // [rsp+18h] [rbp-F8h]
  const data::HomeWorldLeastShopExcelConfig *config; // [rsp+20h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-E8h]
  const std::vector<unsigned int>::value_type *goods_id; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig> >::type *goods_info; // [rsp+38h] [rbp-D8h]
  char v20[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:713 64 8 13 __for_end:713 96 8 15 __for_begin:719 128 8 13 __for_end:719";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::rewriteLimitedShopExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  __for_range = &this->home_world_limit_shop_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldLimitShopExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::HomeWorldLimitShopExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldLimitShopExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HomeWorldLimitShopExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig>,false> *)(v2 + 64)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig>,false,false> *const)(v2 + 32));
    goods_id = std::get<0ul,unsigned int const,data::HomeWorldLimitShopExcelConfig>(__in);
    goods_info = std::get<1ul,unsigned int const,data::HomeWorldLimitShopExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &goods_info->cost_items,
      (unsigned int *)8);
    common::tools::MiscUtils::removeEmptyElement<data::HomeWorldLimitShopCond,data::HomeWorldLimitShopCondType data::HomeWorldLimitShopCond::*>(
      &goods_info->cond,
      (data::HomeWorldLimitShopCondType *)8);
    v6 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
           &this->limited_shop_pool_goods_map,
           &goods_info->pool_id);
    std::vector<unsigned int>::push_back(v6, goods_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldLimitShopExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->home_world_least_shop_excel_config_vec;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::vector<data::HomeWorldLeastShopExcelConfig>::iterator *)(v2 + 96) = std::vector<data::HomeWorldLeastShopExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::vector<data::HomeWorldLeastShopExcelConfig>::iterator *)(v2 + 128) = std::vector<data::HomeWorldLeastShopExcelConfig>::end(__for_range_0);
  while ( __gnu_cxx::operator!=<data::HomeWorldLeastShopExcelConfig *,std::vector<data::HomeWorldLeastShopExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::HomeWorldLeastShopExcelConfig*,std::vector<data::HomeWorldLeastShopExcelConfig> > *)(v2 + 96),
            (const __gnu_cxx::__normal_iterator<data::HomeWorldLeastShopExcelConfig*,std::vector<data::HomeWorldLeastShopExcelConfig> > *)(v2 + 128)) )
  {
    config = __gnu_cxx::__normal_iterator<data::HomeWorldLeastShopExcelConfig *,std::vector<data::HomeWorldLeastShopExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::HomeWorldLeastShopExcelConfig*,std::vector<data::HomeWorldLeastShopExcelConfig> > *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&config->count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->count);
    }
    count = config->count;
    v8 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
           &this->limiti_shop_pool_info_map,
           &config->level);
    p_pool_id = &config->pool_id;
    v10 = std::unordered_map<unsigned int,unsigned int>::operator[](v8, &config->pool_id);
    v11 = v10;
    v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
    {
      LOBYTE(p_pool_id) = v12 != 0;
      __asan_report_store4(v10, p_pool_id);
    }
    *v11 = count;
    __gnu_cxx::__normal_iterator<data::HomeWorldLeastShopExcelConfig *,std::vector<data::HomeWorldLeastShopExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::HomeWorldLeastShopExcelConfig*,std::vector<data::HomeWorldLeastShopExcelConfig> > *const)(v2 + 96));
  }
  result = 0;
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

// Line 728: range 0000000014476FEE-0000000014478FE7
int32_t __cdecl HomeWorldExcelConfigMgr::checkFurnitureMakeExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  uint32_t *p_furniture_item_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  __int64 v23; // rsi
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  const std::unordered_map<unsigned int,unsigned int>::key_type *v28; // rdx
  bool v29; // al
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v30; // rax
  uint32_t *v31; // rdx
  char v32; // cl
  uint32_t *v33; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v34; // rax
  int *v35; // rdx
  int v36; // ecx
  char v37; // dl
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rdx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  uint32_t id; // ecx
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rdx
  int v55; // eax
  ItemExcelConfigMgr *v56; // rcx
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rdx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rdx
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rdx
  uint32_t max_accelerate_time; // ecx
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rdx
  uint32_t exp; // [rsp+Ch] [rbp-554h]
  data::FurnitureMakeExcelConfigMap *__for_range; // [rsp+30h] [rbp-530h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false,false>::reference __in; // [rsp+38h] [rbp-528h]
  const unsigned int *make_id; // [rsp+40h] [rbp-520h]
  std::tuple_element<1,std::pair<unsigned int const,data::FurnitureMakeExcelConfig> >::type *config; // [rsp+48h] [rbp-518h]
  const data::ItemConfig *item_config_ptr; // [rsp+50h] [rbp-510h]
  std::vector<data::IdCountConfig> *__for_range_0; // [rsp+58h] [rbp-508h]
  const data::IdCountConfig *id_count_config; // [rsp+60h] [rbp-500h]
  const data::ItemConfig *item_config_ptr_0; // [rsp+68h] [rbp-4F8h]
  char v79[1264]; // [rsp+70h] [rbp-4F0h] BYREF

  v3 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1216LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "21 32 8 15 __for_begin:734 64 8 13 __for_end:734 96 8 9 <unknown> 128 8 9 <unknown> 160 8 15 __f"
                        "or_begin:793 192 8 13 __for_end:793 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416"
                        " 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 "
                        "32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 "
                        "32 9 <unknown> 1120 56 11 exp_map:733";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::checkFurnitureMakeExcelConfig;
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
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -218959118;
  v5[536862752] = -218959118;
  v5[536862754] = -218959118;
  v5[536862756] = -218103808;
  v5[536862757] = -202116109;
  std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1120));
  __for_range = &this->furniture_make_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FurnitureMakeExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::FurnitureMakeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FurnitureMakeExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FurnitureMakeExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false> *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_123;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false,false> *const)(v3 + 32));
    make_id = std::get<0ul,unsigned int const,data::FurnitureMakeExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::FurnitureMakeExcelConfig>(__in);
    p_item_config_mgr = &txt_config_mgr->item_config_mgr;
    p_furniture_item_id = &config->furniture_item_id;
    if ( *(_BYTE *)(((unsigned __int64)p_furniture_item_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_furniture_item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_furniture_item_id >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(p_furniture_item_id);
    }
    item_config_ptr = ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, config->furniture_item_id);
    if ( !item_config_ptr )
    {
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkFurnitureMakeExcelConfig",
        740);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v8, (const char (*)[40])byte_1AD80C40);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, make_id);
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])byte_1AD80CA0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->furniture_item_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
      goto LABEL_123;
    }
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&item_config_ptr->item_type);
    }
    if ( item_config_ptr->item_type != ITEM_FURNITURE )
    {
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkFurnitureMakeExcelConfig",
        745);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v13, (const char (*)[37])byte_1AD80CE0);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, make_id);
      v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])byte_1AD80D40);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->furniture_item_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
      goto LABEL_123;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->count);
    }
    if ( !config->count )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkFurnitureMakeExcelConfig",
        752);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v17, (const char (*)[35])byte_1AD80D80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, make_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
      goto LABEL_123;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->count);
    }
    if ( config->count > 0xA )
    {
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkFurnitureMakeExcelConfig",
        757);
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v20 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v19, (const char (*)[21])byte_1AD80DE0);
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &config->count);
      v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])byte_1AD80E20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, make_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
      goto LABEL_123;
    }
    v23 = (((_BYTE)config + 20) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&config->exp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->exp >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->exp);
    }
    if ( config->exp > 0x2710 )
    {
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkFurnitureMakeExcelConfig",
        763);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v25 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v24, (const char (*)[21])byte_1AD80E60);
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &config->exp);
      v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v26, (const char (*)[13])byte_1AD80E20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, make_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
      goto LABEL_123;
    }
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v23);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,unsigned int>::cend((const std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1120));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    v28 = &config->furniture_item_id;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v23);
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                              (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1120),
                                                                              v28);
    v29 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 128));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v29 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->exp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->exp >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->exp);
      }
      exp = config->exp;
      v33 = &config->furniture_item_id;
      v30 = std::unordered_map<unsigned int,unsigned int>::operator[](
              (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1120),
              &config->furniture_item_id);
      v31 = v30;
      v32 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
      LOBYTE(v33) = v32 != 0;
      if ( v32 != 0 && (char)(((unsigned __int8)v30 & 7) + 3) >= v32 )
        __asan_report_store4(v30, v33);
      *v31 = exp;
      goto LABEL_58;
    }
    v33 = &config->furniture_item_id;
    v34 = std::unordered_map<unsigned int,unsigned int>::operator[](
            (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1120),
            &config->furniture_item_id);
    v35 = (int *)v34;
    if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v34);
    }
    v36 = *v35;
    v37 = *(_BYTE *)(((unsigned __int64)&config->exp >> 3) + 0x7FFF8000);
    LOBYTE(v33) = v37 != 0;
    if ( v37 != 0 && (char)((((_BYTE)config + 20) & 7) + 3) >= v37 )
      __asan_report_load4(&config->exp);
    if ( v36 != config->exp )
      break;
LABEL_58:
    if ( *(_BYTE *)(((unsigned __int64)&config->make_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->make_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->make_time);
    }
    if ( !config->make_time )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkFurnitureMakeExcelConfig",
        779);
      v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v43 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v42, (const char (*)[19])byte_1AD80F00);
      v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &config->make_time);
      v45 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v44, (const char (*)[13])byte_1AD80E20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, make_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
      *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
      goto LABEL_123;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->make_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->make_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->make_time);
    }
    if ( config->make_time > 0x93A80 )
    {
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkFurnitureMakeExcelConfig",
        784);
      v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 672),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v47 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v46, (const char (*)[21])byte_1AD80F40);
      v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &config->make_time);
      v49 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v48, (const char (*)[13])byte_1AD80E20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, make_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
      goto LABEL_123;
    }
    if ( std::vector<data::IdCountConfig>::empty(&config->material_items) )
    {
      *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 736, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 736),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkFurnitureMakeExcelConfig",
        790);
      v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 736),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v51 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v50, (const char (*)[37])byte_1AD80F80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, make_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
      *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
      goto LABEL_123;
    }
    __for_range_0 = &config->material_items;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v33);
    *(std::vector<data::IdCountConfig>::iterator *)(v3 + 160) = std::vector<data::IdCountConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v33);
    *(std::vector<data::IdCountConfig>::iterator *)(v3 + 192) = std::vector<data::IdCountConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::IdCountConfig *,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 192)) )
      {
        v55 = 1;
        goto LABEL_105;
      }
      id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig *,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      id = id_count_config->id;
      if ( *(_BYTE *)(((unsigned __int64)&config->furniture_item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->furniture_item_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->furniture_item_id);
      }
      if ( id == config->furniture_item_id )
      {
        *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 800, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 800),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkFurnitureMakeExcelConfig",
          797);
        v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 800),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v54 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v53, (const char (*)[43])byte_1AD80FE0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, make_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
        *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v55 = 0;
        goto LABEL_105;
      }
      v56 = &txt_config_mgr->item_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      item_config_ptr_0 = ItemExcelConfigMgr::findItemConfig(v56, id_count_config->id);
      if ( !item_config_ptr_0 )
        goto LABEL_94;
      if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr_0->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&item_config_ptr_0->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&item_config_ptr_0->id);
      }
      if ( item_config_ptr_0->id == 202 )
      {
LABEL_94:
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkFurnitureMakeExcelConfig",
          803);
        v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 864),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v58 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v57, (const char (*)[31])byte_1AD81040);
        v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, make_id);
        v60 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v59, (const char (*)[13])byte_1AD69A00);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &id_count_config->id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
        *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v55 = 0;
        goto LABEL_105;
      }
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&id_count_config->count);
      }
      if ( !id_count_config->count )
        break;
      __gnu_cxx::__normal_iterator<data::IdCountConfig *,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 160));
    }
    *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 928, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 928),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "checkFurnitureMakeExcelConfig",
      808);
    v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 928),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v62 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v61, (const char (*)[41])byte_1AD81080);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, make_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
    *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v55 = 0;
LABEL_105:
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v55 != 1 )
    {
      v12 = 0;
      goto LABEL_123;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->quick_fetch_material_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->quick_fetch_material_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->quick_fetch_material_num);
    }
    if ( !config->quick_fetch_material_num )
    {
      *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 992, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 992),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkFurnitureMakeExcelConfig",
        815);
      v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 992),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v64 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v63, (const char (*)[47])byte_1AD810E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, make_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
      *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
      goto LABEL_123;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->max_accelerate_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->max_accelerate_time >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->max_accelerate_time);
    }
    max_accelerate_time = config->max_accelerate_time;
    if ( *(_BYTE *)(((unsigned __int64)&config->make_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->make_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->make_time);
    }
    if ( max_accelerate_time > config->make_time )
    {
      *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1056) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1056, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1056),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkFurnitureMakeExcelConfig",
        820);
      v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1056),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v67 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v66, (const char (*)[55])byte_1AD81140);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, make_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
      *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
      goto LABEL_123;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FurnitureMakeExcelConfig>,false,false> *const)(v3 + 32));
  }
  *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 544, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 544),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
    "checkFurnitureMakeExcelConfig",
    772);
  v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 544),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v39 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v38, (const char (*)[34])byte_1AD80EA0);
  v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &config->furniture_item_id);
  v41 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v40, (const char (*)[13])byte_1AD80E20);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, make_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
  *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v12 = 0;
LABEL_123:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v12 == 1 )
    v2 = 0;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 1120));
  if ( v79 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1216LL, v79);
  }
  return v2;
};

// Line 828: range 0000000014478FE8-0000000014479387
int32_t __cdecl HomeWorldExcelConfigMgr::rewriteAreaComfortExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::HomeWorldAreaComfortExcelConfig *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  int32_t result; // eax
  data::HomeWorldAreaComfortExcelConfigMap *__for_range; // [rsp+18h] [rbp-F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false>::reference v15; // [rsp+20h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig> >::type *area_config; // [rsp+30h] [rbp-E0h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::mapped_type *area_config_map; // [rsp+38h] [rbp-D8h]
  char v18[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:829 64 8 13 __for_end:829 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::rewriteAreaComfortExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->home_world_area_comfort_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false> *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_16;
    }
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::HomeWorldAreaComfortExcelConfig>(v15);
    area_config = (std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HomeWorldAreaComfortExcelConfig>(v15);
    area_config_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::operator[](
                        &this->scene_area_comfort_config_map,
                        &area_config->scene_id);
    v7 = std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::emplace<unsigned int const&,data::HomeWorldAreaComfortExcelConfig const&>(
           area_config_map,
           &area_config->area_id,
           area_config,
           &area_config->area_id,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
    "rewriteAreaComfortExcelConfig",
    834);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])"scene_id:");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &area_config->scene_id);
  v11 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v10, (const char (*)[24])byte_1AD81240);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &area_config->area_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v12 = 0;
LABEL_16:
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

// Line 842: range 0000000014479388-000000001447A17C
int32_t __cdecl HomeWorldExcelConfigMgr::checkAreaComfortExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  uint32_t *p_scene_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 v11; // rsi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::size_type v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::vector<data::ConfigHomeBlock>::size_type v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::size_type v22; // rax
  char *v23; // rsi
  const std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::key_type *p_block_id; // rdx
  bool v25; // al
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  int32_t ret; // [rsp+1Ch] [rbp-2F4h]
  JsonConfigMgr *json_config_mgr; // [rsp+20h] [rbp-2F0h]
  data::HomeWorldAreaComfortExcelConfigMap *__for_range; // [rsp+28h] [rbp-2E8h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>> *__for_range_0; // [rsp+30h] [rbp-2E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false,false>::reference __in; // [rsp+38h] [rbp-2D8h]
  const unsigned int *scene_id; // [rsp+40h] [rbp-2D0h]
  std::tuple_element<1,std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> > >::type *area_config_map; // [rsp+48h] [rbp-2C8h]
  const data::ConfigSceneHomeInfo *home_scene_config_ptr; // [rsp+50h] [rbp-2C0h]
  const std::vector<data::ConfigHomeBlock> *__for_range_1; // [rsp+58h] [rbp-2B8h]
  const data::ConfigHomeBlock *block; // [rsp+60h] [rbp-2B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false>::reference v43; // [rsp+68h] [rbp-2A8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig> >::type *area_config; // [rsp+78h] [rbp-298h]
  char v45[656]; // [rsp+80h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 32 8 15 __for_begin:845 64 8 13 __for_end:845 96 8 15 __for_begin:854 128 8 13 __for_end:854 "
                        "160 8 9 <unknown> 192 8 9 <unknown> 224 8 15 __for_begin:869 256 8 13 __for_end:869 288 8 9 <unk"
                        "nown> 320 8 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::checkAreaComfortExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
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
  v4[536862738] = -202116109;
  ret = 0;
  json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
  __for_range = &this->home_world_area_comfort_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false> *)(v2 + 64)) )
      break;
    v43 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::HomeWorldAreaComfortExcelConfig>(v43);
    area_config = (std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HomeWorldAreaComfortExcelConfig>(v43);
    p_scene_config_mgr = &txt_config_mgr->scene_config_mgr;
    p_scene_id = &area_config->scene_id;
    if ( *(_BYTE *)(((unsigned __int64)p_scene_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_scene_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_scene_id);
    }
    if ( !data::SceneExcelConfigMgrBase::findSceneExcelConfig(p_scene_config_mgr, area_config->scene_id) )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkAreaComfortExcelConfig",
        849);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])"SceneId:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &area_config->scene_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->scene_area_comfort_config_map;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false> *)(v2 + 128)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false,false> *const)(v2 + 96));
    scene_id = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>(__in);
    area_config_map = std::get<1ul,unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>(__in);
    if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(scene_id);
    }
    v11 = *scene_id;
    home_scene_config_ptr = JsonConfigMgr::findSceneHomeConfig(json_config_mgr, v11);
    if ( home_scene_config_ptr )
    {
      v14 = std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::size(area_config_map);
      if ( v14 == std::vector<data::ConfigHomeBlock>::size(&home_scene_config_ptr->block_arrangement_info_list) )
      {
        __for_range_1 = &home_scene_config_ptr->block_arrangement_info_list;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, v11);
        *(std::vector<data::ConfigHomeBlock>::const_iterator *)(v2 + 224) = std::vector<data::ConfigHomeBlock>::begin(__for_range_1);
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 256, v11);
        *(std::vector<data::ConfigHomeBlock>::const_iterator *)(v2 + 256) = std::vector<data::ConfigHomeBlock>::end(__for_range_1);
        while ( 1 )
        {
          v23 = (char *)(v2 + 256);
          if ( !__gnu_cxx::operator!=<data::ConfigHomeBlock const*,std::vector<data::ConfigHomeBlock>>(
                  (const __gnu_cxx::__normal_iterator<const data::ConfigHomeBlock*,std::vector<data::ConfigHomeBlock> > *)(v2 + 224),
                  (const __gnu_cxx::__normal_iterator<const data::ConfigHomeBlock*,std::vector<data::ConfigHomeBlock> > *)(v2 + 256)) )
            break;
          block = __gnu_cxx::__normal_iterator<data::ConfigHomeBlock const*,std::vector<data::ConfigHomeBlock>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigHomeBlock*,std::vector<data::ConfigHomeBlock> > *const)(v2 + 224));
          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 320, v23);
          *(std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::iterator *)(v2 + 320) = std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::end(area_config_map);
          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
          p_block_id = &block->block_id;
          if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 288, v23);
          *(std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::iterator *)(v2 + 288) = std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::find(area_config_map, p_block_id);
          v25 = std::__detail::operator==<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false> *)(v2 + 288),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false> *)(v2 + 320));
          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
          if ( v25 )
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
              "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
              "checkAreaComfortExcelConfig",
              873);
            v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 544),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v26,
                    (const char (*)[14])"Json SceneId:");
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, scene_id);
            v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])" BlockId:");
            v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &block->block_id);
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v30, (const char (*)[39])byte_1AD815C0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
            *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          __gnu_cxx::__normal_iterator<data::ConfigHomeBlock const*,std::vector<data::ConfigHomeBlock>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigHomeBlock*,std::vector<data::ConfigHomeBlock> > *const)(v2 + 224));
        }
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
      }
      else
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkAreaComfortExcelConfig",
          865);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])"SceneId:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, scene_id);
        v18 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v17, (const char (*)[27])byte_1AD814C0);
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        v19 = std::vector<data::ConfigHomeBlock>::size(&home_scene_config_ptr->block_arrangement_info_list);
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          v19 = __asan_report_store8(v2 + 160, byte_1AD814C0);
        *(_QWORD *)(v2 + 160) = v19;
        v20 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v18,
                (const unsigned __int64 *)(v2 + 160));
        v21 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v20, (const char (*)[24])byte_1AD81500);
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        v22 = std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::size(area_config_map);
        if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
          v22 = __asan_report_store8(v2 + 192, byte_1AD81500);
        *(_QWORD *)(v2 + 192) = v22;
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v21,
          (const unsigned __int64 *)(v2 + 192));
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
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
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkAreaComfortExcelConfig",
        859);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(v12, (const char (*)[71])byte_1AD81440);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, scene_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false,false> *const)(v2 + 96));
  }
  if ( v45 == (char *)v2 )
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

// Line 883: range 000000001447A17E-000000001447A432
int32_t __cdecl HomeWorldExcelConfigMgr::rewriteHomeWorldEventExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::HomeAvatarEventType *p_event_type; // rax
  data::HomeAvatarEventType event_type; // eax
  int32_t result; // eax
  data::HomeWorldEventExcelConfigMap *__for_range; // [rsp+10h] [rbp-B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false,false>::reference v9; // [rsp+18h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::HomeWorldEventExcelConfig> >::type *event_id; // [rsp+20h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldEventExcelConfig> >::type *event_config; // [rsp+28h] [rbp-98h]
  std::unordered_map<unsigned int,std::vector<unsigned int>>::mapped_type *event_info_vec_0; // [rsp+30h] [rbp-90h]
  std::unordered_map<unsigned int,std::vector<unsigned int>>::mapped_type *event_info_vec; // [rsp+38h] [rbp-88h]
  char v14[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false,false> *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:884 64 8 13 __for_end:884";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false>::__node_type *)HomeWorldExcelConfigMgr::rewriteHomeWorldEventExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->home_world_event_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::HomeWorldEventExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::HomeWorldEventExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false,false>::operator*(v2 + 4);
    event_id = std::get<0ul,unsigned int const,data::HomeWorldEventExcelConfig>(v9);
    event_config = (std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldEventExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HomeWorldEventExcelConfig>(v9);
    p_event_type = &event_config->event_type;
    if ( *(_BYTE *)(((unsigned __int64)p_event_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_event_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_event_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_event_type);
    }
    event_type = event_config->event_type;
    if ( event_type == HOME_AVATAR_REWARD_EVENT )
    {
      event_info_vec = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                         &this->home_avatar_reward_event_map,
                         &event_config->avatar_id);
      std::vector<unsigned int>::emplace_back<unsigned int const&>(event_info_vec, event_id, event_id);
    }
    else if ( event_type == HOME_AVATAR_SUMMON_EVENT )
    {
      event_info_vec_0 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                           &this->home_avatar_summon_event_map,
                           &event_config->avatar_id);
      std::vector<unsigned int>::emplace_back<unsigned int const&>(event_info_vec_0, event_id, event_id);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 909: range 000000001447A434-000000001447B280
int32_t __cdecl HomeWorldExcelConfigMgr::checkHomeWorldEventExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  __int64 v12; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const unsigned int *M_current; // rcx
  bool v17; // al
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
  const unsigned int *__last; // [rsp+8h] [rbp-298h]
  data::HomeWorldEventExcelConfigMap *__for_range; // [rsp+20h] [rbp-280h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false,false>::reference v35; // [rsp+28h] [rbp-278h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldEventExcelConfig> >::type *event_config; // [rsp+38h] [rbp-268h]
  const data::FurnitureSuiteExcelConfig *furniture_suit_data_ptr; // [rsp+40h] [rbp-260h]
  const std::vector<unsigned int> *favorite_npc_excel_id_vec; // [rsp+48h] [rbp-258h]
  char v39[592]; // [rsp+50h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 8 15 __for_begin:910 64 8 13 __for_end:910 96 8 9 <unknown> 128 8 9 <unknown> 160 32 9 <un"
                        "known> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::checkHomeWorldEventExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -202116109;
  __for_range = &this->home_world_event_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldEventExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::HomeWorldEventExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldEventExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HomeWorldEventExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_59;
    }
    v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::HomeWorldEventExcelConfig>(v35);
    event_config = (std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldEventExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HomeWorldEventExcelConfig>(v35);
    p_avatar_config_mgr = &txt_config_mgr->avatar_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event_config->avatar_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event_config->avatar_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event_config->avatar_id);
    }
    if ( !data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, event_config->avatar_id) )
    {
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkHomeWorldEventExcelConfig",
        914);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])"avatar_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &event_config->avatar_id);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        v9,
        (const char (*)[31])" not find in avatar_config_mgr");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v10 = 0;
      goto LABEL_59;
    }
    p_home_config_mgr = &txt_config_mgr->home_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event_config->furniture_suit_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config->furniture_suit_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&event_config->furniture_suit_id);
    }
    furniture_suit_data_ptr = data::HomeWorldExcelConfigMgrBase::findFurnitureSuiteExcelConfig(
                                p_home_config_mgr,
                                event_config->furniture_suit_id);
    v12 = (((_BYTE)event_config + 28) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&event_config->furniture_suit_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config->furniture_suit_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&event_config->furniture_suit_id);
    }
    if ( event_config->furniture_suit_id )
    {
      if ( !furniture_suit_data_ptr )
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkHomeWorldEventExcelConfig",
          922);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v13,
                (const char (*)[19])"furniture_suit_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                &event_config->furniture_suit_id);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          v15,
          (const char (*)[29])" not find in home_config_mgr");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        v2 = -1;
        v10 = 0;
        goto LABEL_59;
      }
      favorite_npc_excel_id_vec = &furniture_suit_data_ptr->favorite_npc_excel_id_vec;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v12);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::end(favorite_npc_excel_id_vec);
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      __last = std::vector<unsigned int>::end(favorite_npc_excel_id_vec)._M_current;
      M_current = std::vector<unsigned int>::begin(favorite_npc_excel_id_vec)._M_current;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v12);
      *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                     (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                     (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__last,
                                                                                                     &event_config->avatar_id);
      v17 = __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128));
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( v17 )
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkHomeWorldEventExcelConfig",
          928);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v18,
                (const char (*)[19])"furniture_suit_id:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                &event_config->furniture_suit_id);
        v21 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v20,
                (const char (*)[30])" not find favorite avatar_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &event_config->avatar_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        v2 = -1;
        v10 = 0;
        goto LABEL_59;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&event_config->reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event_config->reward_id);
    }
    if ( event_config->reward_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event_config->event_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config->event_type >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&event_config->event_type);
      }
      if ( event_config->event_type != HOME_AVATAR_REWARD_EVENT )
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkHomeWorldEventExcelConfig",
          936);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])"event_id:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &event_config->event_id);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          v24,
          (const char (*)[39])" reward_id has value but type is wrong");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        v2 = -1;
        v10 = 0;
        goto LABEL_59;
      }
      if ( *(_BYTE *)(((unsigned __int64)&event_config->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event_config->reward_id);
      }
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              event_config->reward_id,
                              ITEM_LIMIT_HOME_EVENT_REWARD) != 1 )
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkHomeWorldEventExcelConfig",
          941);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v25, (const char (*)[11])"reward_id:");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &event_config->reward_id);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v27, (const char (*)[10])" not find");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        v2 = -1;
        v10 = 0;
        goto LABEL_59;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&event_config->event_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config->event_type >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&event_config->event_type);
    }
    if ( event_config->event_type == HOME_AVATAR_SUMMON_EVENT )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event_config->lasttime >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event_config->lasttime >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event_config->lasttime);
      }
      if ( !event_config->lasttime )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldEventExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
    "checkHomeWorldEventExcelConfig",
    947);
  v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 480),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])"event_id:");
  v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &event_config->event_id);
  common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
    v30,
    (const char (*)[30])" summon_type have no lasttime");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
  v2 = -1;
  v10 = 0;
LABEL_59:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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

// Line 955: range 000000001447B282-000000001447C45F
int32_t __cdecl HomeWorldExcelConfigMgr::checkPlantExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  uint32_t *p_field_id; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  char *v13; // rsi
  unsigned int *v14; // rax
  int *v15; // rdx
  int v16; // ecx
  char v17; // al
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  __int64 sprout_gadget_id; // rsi
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  uint32_t sprout_time; // ecx
  char v29; // dl
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  uint32_t *p_bundle_id; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  DropExcelConfigMgr *p_drop_config_mgr; // rcx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  int32_t ret; // [rsp+14h] [rbp-31Ch]
  data::HomeWorldPlantExcelConfigMap *__for_range; // [rsp+18h] [rbp-318h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldPlantExcelConfig>,false,false>::reference v47; // [rsp+20h] [rbp-310h]
  std::tuple_element<0,std::pair<unsigned int const,data::HomeWorldPlantExcelConfig> >::type *seed_id; // [rsp+28h] [rbp-308h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldPlantExcelConfig> >::type *config; // [rsp+30h] [rbp-300h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-2F8h]
  const std::vector<data::ConfigHomeGather> *__for_range_1; // [rsp+40h] [rbp-2F0h]
  const data::ConfigHomeGather *home_gather_config; // [rsp+48h] [rbp-2E8h]
  char v53[736]; // [rsp+50h] [rbp-2E0h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 4 13 gather_id:975 64 8 15 __for_begin:957 96 8 13 __for_end:957 128 8 15 __for_begin:975 "
                        "160 8 13 __for_end:975 192 8 15 __for_begin:998 224 8 13 __for_end:998 256 32 9 <unknown> 320 32"
                        " 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::checkPlantExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
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
  v4[536862741] = -202116109;
  ret = 0;
  __for_range = &this->home_world_plant_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldPlantExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HomeWorldPlantExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldPlantExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::HomeWorldPlantExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldPlantExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldPlantExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldPlantExcelConfig>,false> *)(v2 + 96)) )
  {
    v47 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldPlantExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldPlantExcelConfig>,false,false> *const)(v2 + 64));
    seed_id = std::get<0ul,unsigned int const,data::HomeWorldPlantExcelConfig>(v47);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldPlantExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HomeWorldPlantExcelConfig>(v47);
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)seed_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)seed_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)seed_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(seed_id);
    }
    if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, *seed_id) )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkPlantExcelConfig",
        961);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AD81B00);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, seed_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_field_id = &config->field_id;
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::HomeWorldFarmFieldExcelConfig>,unsigned int>(
            &this->home_world_farm_field_excel_config_map,
            &config->field_id) )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkPlantExcelConfig",
        966);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])byte_1AD81B40);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->field_id);
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" seed id: ");
      p_field_id = seed_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, seed_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &config->gather_id_vec;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, p_field_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, p_field_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v13 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v14 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v15 = (int *)v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      v16 = *v15;
      v17 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v17 != 0 && v17 <= 3 )
      {
        LOBYTE(v13) = v17 != 0;
        __asan_report_store4(v2 + 48, v13);
      }
      *(_DWORD *)(v2 + 48) = v16;
      if ( !data::GatherExcelConfigMgrBase::findGatherExcelConfig(
              &txt_config_mgr->gather_config_mgr,
              *(unsigned int *)(v2 + 48)) )
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkPlantExcelConfig",
          979);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v18, (const char (*)[46])byte_1AD81BC0);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v2 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" seed id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, seed_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->sprout_gadget_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->sprout_gadget_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->sprout_gadget_id);
    }
    sprout_gadget_id = config->sprout_gadget_id;
    if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, sprout_gadget_id) )
    {
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkPlantExcelConfig",
        985);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v25 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(v24, (const char (*)[68])byte_1AD81C20);
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &config->sprout_gadget_id);
      v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])" seed id: ");
      sprout_gadget_id = (__int64)seed_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, seed_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->sprout_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->sprout_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->sprout_time);
    }
    sprout_time = config->sprout_time;
    v29 = *(_BYTE *)(((unsigned __int64)&config->time >> 3) + 0x7FFF8000);
    LOBYTE(sprout_gadget_id) = v29 != 0;
    if ( v29 != 0 && (char)((((_BYTE)config + 84) & 7) + 3) >= v29 )
      __asan_report_load4(&config->time);
    if ( sprout_time >= config->time )
    {
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkPlantExcelConfig",
        990);
      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v31 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v30, (const char (*)[50])byte_1AD81CA0);
      sprout_gadget_id = (__int64)seed_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, seed_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::vector<data::ConfigHomeGather>::empty(&config->config_home_gather);
    __for_range_1 = &config->config_home_gather;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, sprout_gadget_id);
    *(std::vector<data::ConfigHomeGather>::const_iterator *)(v2 + 192) = std::vector<data::ConfigHomeGather>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, sprout_gadget_id);
    *(std::vector<data::ConfigHomeGather>::const_iterator *)(v2 + 224) = std::vector<data::ConfigHomeGather>::end(__for_range_1);
    while ( __gnu_cxx::operator!=<data::ConfigHomeGather const*,std::vector<data::ConfigHomeGather>>(
              (const __gnu_cxx::__normal_iterator<const data::ConfigHomeGather*,std::vector<data::ConfigHomeGather> > *)(v2 + 192),
              (const __gnu_cxx::__normal_iterator<const data::ConfigHomeGather*,std::vector<data::ConfigHomeGather> > *)(v2 + 224)) )
    {
      home_gather_config = __gnu_cxx::__normal_iterator<data::ConfigHomeGather const*,std::vector<data::ConfigHomeGather>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigHomeGather*,std::vector<data::ConfigHomeGather> > *const)(v2 + 192));
      p_bundle_id = &home_gather_config->bundle_id;
      if ( *(_BYTE *)(((unsigned __int64)p_bundle_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_bundle_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_bundle_id);
      }
      if ( home_gather_config->bundle_id
        && !data::GatherExcelConfigMgrBase::findGatherBundleExcelConfig(
              &txt_config_mgr->gather_config_mgr,
              home_gather_config->bundle_id) )
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkPlantExcelConfig",
          1002);
        v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v35 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v34, (const char (*)[50])byte_1AD81D00);
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, seed_id);
        v37 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v36, (const char (*)[13])" bundle_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &home_gather_config->bundle_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      p_drop_config_mgr = &txt_config_mgr->drop_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&home_gather_config->drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&home_gather_config->drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&home_gather_config->drop_id);
      }
      if ( !data::DropExcelConfigMgrBase::findDropExcelConfig(p_drop_config_mgr, home_gather_config->drop_id) )
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkPlantExcelConfig",
          1007);
        v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 640),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v40 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v39, (const char (*)[40])byte_1AD81DA0);
        v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &home_gather_config->drop_id);
        v42 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v41, (const char (*)[11])" seed id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, seed_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<data::ConfigHomeGather const*,std::vector<data::ConfigHomeGather>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigHomeGather*,std::vector<data::ConfigHomeGather> > *const)(v2 + 192));
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldPlantExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldPlantExcelConfig>,false,false> *const)(v2 + 64));
  }
  if ( v53 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
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
  }
  return ret;
};

// Line 1021: range 000000001447C460-000000001447CBAD
int32_t __cdecl HomeWorldExcelConfigMgr::rewritePlantExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  const unsigned int *v8; // r8
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  std::unordered_map<unsigned int,data::ConfigHomeGather> *v17; // rax
  data::ConfigHomeGather *v18; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-19Ch]
  data::HomeWorldPlantExcelConfigMap *__for_range; // [rsp+18h] [rbp-198h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldPlantExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-190h]
  const unsigned int *seed_id; // [rsp+28h] [rbp-188h]
  std::tuple_element<1,std::pair<unsigned int const,data::HomeWorldPlantExcelConfig> >::type *config; // [rsp+30h] [rbp-180h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-178h]
  std::vector<data::ConfigHomeGather> *__for_range_1; // [rsp+40h] [rbp-170h]
  data::ConfigHomeGather *config_0; // [rsp+48h] [rbp-168h]
  char v28[352]; // [rsp+50h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 14 gather_id:1025 64 8 16 __for_begin:1023 96 8 14 __for_end:1023 128 8 16 __for_begin:10"
                        "25 160 8 14 __for_end:1025 192 8 16 __for_begin:1034 224 8 14 __for_end:1034 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::rewritePlantExcelConfig;
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
  __for_range = &this->home_world_plant_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldPlantExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HomeWorldPlantExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldPlantExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::HomeWorldPlantExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldPlantExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldPlantExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldPlantExcelConfig>,false> *)(v2 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldPlantExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldPlantExcelConfig>,false,false> *const)(v2 + 64));
    seed_id = std::get<0ul,unsigned int const,data::HomeWorldPlantExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::HomeWorldPlantExcelConfig>(__in);
    __for_range_0 = &config->gather_id_vec;
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
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 128));
      v9 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v6) = v11 != 0;
        __asan_report_store4(v2 + 48, v6);
      }
      *(_DWORD *)(v2 + 48) = v10;
      v12 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
              &this->gather_seed_map_,
              (unsigned int *)(v2 + 48),
              seed_id,
              (unsigned int *)&this->gather_seed_map_,
              v8);
      if ( !v12.second )
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "rewritePlantExcelConfig",
          1029);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v13, (const char (*)[22])byte_1AD81F00);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v2 + 48));
        v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" seed id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, seed_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    common::tools::MiscUtils::removeEmptyElement<data::ConfigHomeGather,unsigned int data::ConfigHomeGather::*>(
      &config->config_home_gather,
      (unsigned int *)8);
    __for_range_1 = &config->config_home_gather;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, 8LL);
    *(std::vector<data::ConfigHomeGather>::iterator *)(v2 + 192) = std::vector<data::ConfigHomeGather>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, 8LL);
    *(std::vector<data::ConfigHomeGather>::iterator *)(v2 + 224) = std::vector<data::ConfigHomeGather>::end(__for_range_1);
    while ( __gnu_cxx::operator!=<data::ConfigHomeGather *,std::vector<data::ConfigHomeGather>>(
              (const __gnu_cxx::__normal_iterator<data::ConfigHomeGather*,std::vector<data::ConfigHomeGather> > *)(v2 + 192),
              (const __gnu_cxx::__normal_iterator<data::ConfigHomeGather*,std::vector<data::ConfigHomeGather> > *)(v2 + 224)) )
    {
      config_0 = __gnu_cxx::__normal_iterator<data::ConfigHomeGather *,std::vector<data::ConfigHomeGather>>::operator*((const __gnu_cxx::__normal_iterator<data::ConfigHomeGather*,std::vector<data::ConfigHomeGather> > *const)(v2 + 192));
      v17 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::ConfigHomeGather>>::operator[](
              &this->home_gather_config_map,
              seed_id);
      v18 = std::unordered_map<unsigned int,data::ConfigHomeGather>::operator[](v17, &config_0->home_gather_id);
      data::ConfigHomeGather::operator=(v18, config_0);
      std::unordered_set<unsigned int>::insert(&this->home_gather_id_set, &config_0->home_gather_id);
      __gnu_cxx::__normal_iterator<data::ConfigHomeGather *,std::vector<data::ConfigHomeGather>>::operator++((__gnu_cxx::__normal_iterator<data::ConfigHomeGather*,std::vector<data::ConfigHomeGather> > *const)(v2 + 192));
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldPlantExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldPlantExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v28 == (char *)v2 )
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

// Line 1044: range 000000001447CBAE-000000001447D1B0
int32_t __cdecl HomeWorldExcelConfigMgr::checkFieldExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  __int64 field_slot_num; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::vector<unsigned int>::size_type v14; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-154h]
  data::HomeWorldFarmFieldExcelConfigMap *__for_range; // [rsp+20h] [rbp-150h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false,false>::reference v18; // [rsp+28h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig> >::type *field_id; // [rsp+30h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig> >::type *config; // [rsp+38h] [rbp-138h]
  char v21[304]; // [rsp+40h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 16 __for_begin:1046 64 8 14 __for_end:1046 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::checkFieldExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->home_world_farm_field_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldFarmFieldExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::HomeWorldFarmFieldExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldFarmFieldExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HomeWorldFarmFieldExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false> *)(v2 + 64)) )
  {
    v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false,false> *const)(v2 + 32));
    field_id = std::get<0ul,unsigned int const,data::HomeWorldFarmFieldExcelConfig>(v18);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HomeWorldFarmFieldExcelConfig>(v18);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::HomeWorldFurnitureExcelConfig>,unsigned int>(
            &this->home_world_furniture_excel_config_map,
            field_id) )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkFieldExcelConfig",
        1050);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v5, (const char (*)[42])byte_1AD82000);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, field_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->field_slot_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->field_slot_num >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->field_slot_num);
    }
    field_slot_num = config->field_slot_num;
    if ( field_slot_num != std::vector<unsigned int>::size(&config->field_slot_gadget_id) )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkFieldExcelConfig",
        1055);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v8, (const char (*)[51])byte_1AD82060);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, field_id);
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])byte_1AD820C0);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->field_slot_num);
      v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v12, (const char (*)[25])byte_1AD82100);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      v14 = std::vector<unsigned int>::size(&config->field_slot_gadget_id);
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        v14 = __asan_report_store8(v2 + 96, byte_1AD82100);
      *(_QWORD *)(v2 + 96) = v14;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, (const unsigned __int64 *)(v2 + 96));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 1063: range 000000001447D1B2-000000001447D39D
int32_t __cdecl HomeWorldExcelConfigMgr::rewriteFieldExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::HomeWorldFarmFieldExcelConfigMap *__for_range; // [rsp+20h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig> >::type *config; // [rsp+38h] [rbp-88h]
  char v9[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false>::__node_type *)"2 32 8 16 __for_begin:1065 64 8 14 __for_end:1065";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false>::__node_type *)HomeWorldExcelConfigMgr::rewriteFieldExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->home_world_farm_field_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::HomeWorldFarmFieldExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::HomeWorldFarmFieldExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::HomeWorldFarmFieldExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::HomeWorldFarmFieldExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<unsigned int>(&config->field_slot_gadget_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1073: range 000000001447D39E-000000001447D3B0
int32_t __cdecl HomeWorldExcelConfigMgr::checkExtraExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1078: range 000000001447D3B2-000000001447DCE5
int32_t __cdecl HomeWorldExcelConfigMgr::rewriteExtraExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  HomeWorldExcelConfigMgr *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::vector<std::string>::size_type v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  float *v13; // r9
  __int64 v14; // rsi
  std::unordered_map<unsigned int,HomeWorldExcelConfigMgr::FurnitureTransferConfig>::key_type v15; // ecx
  char v16; // dl
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  __int64 p_offset_rot; // rsi
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1A4h]
  data::HomeWorldExtraFurnitureExcelConfigMap *__for_range; // [rsp+20h] [rbp-1A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldExtraFurnitureExcelConfig>,false,false>::reference v23; // [rsp+28h] [rbp-198h]
  std::tuple_element<0,std::pair<unsigned int const,data::HomeWorldExtraFurnitureExcelConfig> >::type *furniture_id; // [rsp+30h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldExtraFurnitureExcelConfig> >::type *config; // [rsp+38h] [rbp-188h]
  data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+40h] [rbp-180h]
  HomeWorldExcelConfigMgr::FurnitureTransferConfig *transfer_config; // [rsp+48h] [rbp-178h]
  char v28[368]; // [rsp+50h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 16 __for_begin:1080 64 8 14 __for_end:1080 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <"
                        "unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::rewriteExtraExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  ret = 0;
  __for_range = &this->home_world_extra_furniture_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldExtraFurnitureExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::HomeWorldExtraFurnitureExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldExtraFurnitureExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HomeWorldExtraFurnitureExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldExtraFurnitureExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldExtraFurnitureExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldExtraFurnitureExcelConfig>,false> *)(v2 + 64)) )
  {
    v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldExtraFurnitureExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldExtraFurnitureExcelConfig>,false,false> *const)(v2 + 32));
    furniture_id = std::get<0ul,unsigned int const,data::HomeWorldExtraFurnitureExcelConfig>(v23);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldExtraFurnitureExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HomeWorldExtraFurnitureExcelConfig>(v23);
    v5 = this;
    if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(furniture_id);
    }
    furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(v5, *furniture_id);
    if ( furniture_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->special_furniture_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->special_furniture_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&furniture_config_ptr->special_furniture_type);
      }
      if ( furniture_config_ptr->special_furniture_type == TeleportPoint )
      {
        if ( std::vector<std::string>::size(&config->extra_data) > 3 )
        {
          transfer_config = std::unordered_map<unsigned int,HomeWorldExcelConfigMgr::FurnitureTransferConfig>::operator[](
                              &this->furniture_transfer_config_map,
                              furniture_id);
          v14 = ((unsigned __int8)furniture_id & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(furniture_id);
          }
          v15 = *furniture_id;
          v16 = *(_BYTE *)(((unsigned __int64)transfer_config >> 3) + 0x7FFF8000);
          if ( v16 != 0 && (char)(((unsigned __int8)transfer_config & 7) + 3) >= v16 )
          {
            LOBYTE(v14) = v16 != 0;
            __asan_report_store4(transfer_config, v14);
          }
          transfer_config->furniture_id = v15;
          if ( common::tools::StringUtils::strVecToNum<0u,float,float &,float &,float &>(
                 &config->extra_data,
                 &transfer_config->offset_pos.x,
                 &transfer_config->offset_pos.y,
                 &transfer_config->offset_pos.z,
                 &transfer_config->offset_rot.y,
                 v13) )
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
              "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
              "rewriteExtraExcelConfig",
              1103);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 256),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    v17,
                    (const char (*)[47])byte_1AD82340);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, furniture_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
            *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            p_offset_rot = (__int64)&transfer_config->offset_rot;
            if ( (((unsigned __int8)transfer_config + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&transfer_config->offset_quat >> 3)
                                                                           + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)&transfer_config->offset_quat >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&transfer_config->offset_quat.w + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)transfer_config + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&transfer_config->offset_quat.w
                                                                             + 3) >> 3)
                                                                           + 0x7FFF8000) )
            {
              p_offset_rot = 16LL;
              __asan_report_store_n(&transfer_config->offset_quat, 16LL);
            }
            transfer_config->offset_quat = Quaternion::fromRotation((const Vector3 *)p_offset_rot);
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
            "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
            "rewriteExtraExcelConfig",
            1095);
          v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 192),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v9 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v8, (const char (*)[60])byte_1AD822A0);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
          v10 = std::vector<std::string>::size(&config->extra_data);
          if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
            v10 = __asan_report_store8(v2 + 96, byte_1AD822A0);
          *(_QWORD *)(v2 + 96) = v10;
          v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v9,
                  (const unsigned __int64 *)(v2 + 96));
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v11,
                  (const char (*)[16])" furniture_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, furniture_id);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
          *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "rewriteExtraExcelConfig",
        1085);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v6, (const char (*)[46])byte_1AD82240);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, furniture_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldExtraFurnitureExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldExtraFurnitureExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v28 == (char *)v2 )
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

// Line 1118: range 000000001447DCE6-000000001447E41D
int32_t __cdecl HomeWorldExcelConfigMgr::checkCustomGadgetSlotConfig(
        HomeWorldExcelConfigMgr *const this,
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
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-18Ch]
  data::CusmtomGadgetSlotExcelConfigMap *__for_range; // [rsp+18h] [rbp-188h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CusmtomGadgetSlotExcelConfig>,false,false>::reference v19; // [rsp+20h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CusmtomGadgetSlotExcelConfig> >::type *config; // [rsp+30h] [rbp-170h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-168h]
  char v22[352]; // [rsp+40h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 13 parts_id:1122 64 8 16 __for_begin:1120 96 8 14 __for_end:1120 128 8 16 __for_begin:112"
                        "2 160 8 14 __for_end:1122 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::checkCustomGadgetSlotConfig;
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
  __for_range = &this->cusmtom_gadget_slot_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CusmtomGadgetSlotExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::CusmtomGadgetSlotExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CusmtomGadgetSlotExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::CusmtomGadgetSlotExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CusmtomGadgetSlotExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CusmtomGadgetSlotExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CusmtomGadgetSlotExcelConfig>,false> *)(v2 + 96)) )
      break;
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CusmtomGadgetSlotExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CusmtomGadgetSlotExcelConfig>,false,false> *const)(v2 + 64));
    std::get<0ul,unsigned int const,data::CusmtomGadgetSlotExcelConfig>(v19);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::CusmtomGadgetSlotExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CusmtomGadgetSlotExcelConfig>(v19);
    __for_range_0 = &config->default_parts_id_list;
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
      if ( !common::tools::MiscUtils::isContains<unsigned int>(
              &config->optional_parts_id_list,
              (const unsigned int *)(v2 + 48)) )
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
          "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
          "checkCustomGadgetSlotConfig",
          1126);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(v11, (const char (*)[74])byte_1AD82480);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&config->init_parts_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->init_parts_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->init_parts_id);
    }
    if ( config->init_parts_id
      && !common::tools::MiscUtils::isContains<unsigned int>(&config->default_parts_id_list, &config->init_parts_id) )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkCustomGadgetSlotConfig",
        1132);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(v14, (const char (*)[80])byte_1AD82500);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->init_parts_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CusmtomGadgetSlotExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CusmtomGadgetSlotExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v22 == (char *)v2 )
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

// Line 1140: range 000000001447E41E-000000001447EAC8
int32_t __cdecl HomeWorldExcelConfigMgr::checkHomeWorldServerGadgetExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  HomeWorldExcelConfigMgr *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  data::HomeWorldServerGadgetExcelConfigMap *__for_range; // [rsp+10h] [rbp-180h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldServerGadgetExcelConfig>,false,false>::reference v16; // [rsp+18h] [rbp-178h]
  std::tuple_element<0,std::pair<unsigned int const,data::HomeWorldServerGadgetExcelConfig> >::type *furniture_id; // [rsp+20h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldServerGadgetExcelConfig> >::type *server_gadget_config; // [rsp+28h] [rbp-168h]
  data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+30h] [rbp-160h]
  char v20[336]; // [rsp+40h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 16 __for_begin:1141 64 8 14 __for_end:1141 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::checkHomeWorldServerGadgetExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->home_world_server_gadget_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldServerGadgetExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::HomeWorldServerGadgetExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldServerGadgetExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HomeWorldServerGadgetExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldServerGadgetExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldServerGadgetExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldServerGadgetExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_30;
    }
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldServerGadgetExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldServerGadgetExcelConfig>,false,false> *const)(v3 + 32));
    furniture_id = std::get<0ul,unsigned int const,data::HomeWorldServerGadgetExcelConfig>(v16);
    server_gadget_config = (std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldServerGadgetExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HomeWorldServerGadgetExcelConfig>(v16);
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(furniture_id);
    }
    furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(v6, *furniture_id);
    if ( !furniture_config_ptr )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkHomeWorldServerGadgetExcelConfig",
        1146);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v7, (const char (*)[35])byte_1AD82660);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, furniture_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v9 = 0;
      goto LABEL_30;
    }
    if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->special_furniture_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->special_furniture_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&furniture_config_ptr->special_furniture_type);
    }
    if ( furniture_config_ptr->special_furniture_type != ServerGadget )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkHomeWorldServerGadgetExcelConfig",
        1151);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v10, (const char (*)[51])byte_1AD826C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, furniture_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v9 = 0;
      goto LABEL_30;
    }
    p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&server_gadget_config->server_gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)server_gadget_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&server_gadget_config->server_gadget_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&server_gadget_config->server_gadget_id);
    }
    if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
            p_gadget_config_mgr,
            server_gadget_config->server_gadget_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldServerGadgetExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldServerGadgetExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
    "checkHomeWorldServerGadgetExcelConfig",
    1157);
  v13 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[37])byte_1AD82720);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &server_gadget_config->server_gadget_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v9 = 0;
LABEL_30:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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

// Line 1165: range 000000001447EACA-00000000144800EA
int32_t __cdecl HomeWorldExcelConfigMgr::checkHomeWoodExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  __int64 v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  unsigned int v19; // ecx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  MaterialExcelConfigMgr *v29; // rcx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  int32_t ret; // [rsp+1Ch] [rbp-3C4h]
  data::HomeWorldWoodExcelConfigMap *__for_range; // [rsp+20h] [rbp-3C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldWoodExcelConfig>,false,false>::reference v45; // [rsp+28h] [rbp-3B8h]
  std::tuple_element<0,std::pair<unsigned int const,data::HomeWorldWoodExcelConfig> >::type *wood_id; // [rsp+30h] [rbp-3B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldWoodExcelConfig> >::type *wood_config; // [rsp+38h] [rbp-3A8h]
  common::tools::transcribe_cv_t_8 *exchange_material_config_map_ptr; // [rsp+40h] [rbp-3A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false,false>::reference v49; // [rsp+50h] [rbp-390h]
  std::tuple_element<0,std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig> >::type *item_id; // [rsp+58h] [rbp-388h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig> >::type *exchange_material_config; // [rsp+60h] [rbp-380h]
  const data::MaterialExcelConfig *item_material_config_ptr; // [rsp+68h] [rbp-378h]
  char v53[880]; // [rsp+70h] [rbp-370h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(832LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 32 8 16 __for_begin:1167 64 8 14 __for_end:1167 96 8 9 <unknown> 128 8 16 __for_begin:1200 16"
                        "0 8 14 __for_end:1200 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown"
                        "> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown>"
                        " 768 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::checkHomeWoodExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
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
  v4[536862745] = -202116109;
  ret = 0;
  __for_range = &this->home_world_wood_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldWoodExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::HomeWorldWoodExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldWoodExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HomeWorldWoodExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldWoodExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldWoodExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldWoodExcelConfig>,false> *)(v2 + 64)) )
  {
    v45 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldWoodExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldWoodExcelConfig>,false,false> *const)(v2 + 32));
    wood_id = std::get<0ul,unsigned int const,data::HomeWorldWoodExcelConfig>(v45);
    wood_config = (std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldWoodExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HomeWorldWoodExcelConfig>(v45);
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)wood_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)wood_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)wood_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(wood_id);
    }
    if ( MaterialExcelConfigMgr::getMaterialTypeByItemId(p_material_config_mgr, *wood_id) != MATERIAL_WOOD )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkHomeWoodExcelConfig",
        1171);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             v6,
             (const char (*)[45])"material_type is not MATERIAL_WOOD, wood_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, wood_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)wood_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)wood_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)wood_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(wood_id);
    }
    if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, *wood_id, ITEM_LIMIT_WOOD_EXCHANGE) )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkHomeWoodExcelConfig",
        1176);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [85],(char *[85])0>(
             v8,
             (const char (*)[85])"isItemAllowedByOutputControl check fail for data::ITEM_LIMIT_WOOD_EXCHANGE, wood_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, wood_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&wood_config->exchange_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)wood_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&wood_config->exchange_limit >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&wood_config->exchange_limit);
    }
    if ( !wood_config->exchange_limit )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkHomeWoodExcelConfig",
        1181);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v10, (const char (*)[33])byte_1AD829E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, wood_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&wood_config->refresh_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&wood_config->refresh_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&wood_config->refresh_type);
    }
    if ( wood_config->refresh_type != HOME_WORLD_WOOD_REFRESH_WEEKLY )
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkHomeWoodExcelConfig",
        1189);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v12,
              (const char (*)[22])"invalid refresh_type:");
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&wood_config->refresh_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&wood_config->refresh_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&wood_config->refresh_type);
      }
      v14 = (__int64)data::enumValToStr(wood_config->refresh_type, (__int64)"invalid refresh_type:");
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        v14 = __asan_report_store8(v2 + 96, "invalid refresh_type:");
      *(_QWORD *)(v2 + 96) = v14;
      v15 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v13, (const char *const *)(v2 + 96));
      v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])" wood_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, wood_id);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    exchange_material_config_map_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>>>(
                                         &this->wood_exchange_material_map,
                                         wood_id);
    if ( exchange_material_config_map_ptr )
    {
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, wood_id);
      *(std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>::begin(exchange_material_config_map_ptr);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, wood_id);
      *(std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>::const_iterator *)(v2 + 160) = std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>::end(exchange_material_config_map_ptr);
      while ( std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false> *)(v2 + 128),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false> *)(v2 + 160)) )
      {
        v49 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false,false> *const)(v2 + 128));
        item_id = std::get<0ul,unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>(v49);
        exchange_material_config = (std::tuple_element<1,const std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig> >::type *)std::get<1ul,unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>(v49);
        if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_id);
        }
        v19 = *item_id;
        if ( *(_BYTE *)(((unsigned __int64)wood_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)wood_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)wood_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(wood_id);
        }
        if ( v19 == *wood_id )
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
            "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
            "checkHomeWoodExcelConfig",
            1204);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v20, (const char (*)[38])byte_1AD82B20);
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, item_id);
          v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])" wood_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, wood_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
          *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        p_item_config_mgr = &txt_config_mgr->item_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_id);
        }
        if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, *item_id) )
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
            "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
            "checkHomeWoodExcelConfig",
            1209);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 576),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  v25,
                  (const char (*)[30])"findItemConfig fail, item_id:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, item_id);
          v28 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v27, (const char (*)[10])" wood_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, wood_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        v29 = &txt_config_mgr->material_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_id);
        }
        item_material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(v29, *item_id);
        if ( !item_material_config_ptr )
          goto LABEL_71;
        if ( *(_BYTE *)(((unsigned __int64)&item_material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_material_config_ptr->material_type >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&item_material_config_ptr->material_type);
        }
        if ( item_material_config_ptr->material_type == MATERIAL_WOOD )
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
            "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
            "checkHomeWoodExcelConfig",
            1215);
          v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 640),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v31 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v30, (const char (*)[50])byte_1AD82BC0);
          v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, item_id);
          v33 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v32, (const char (*)[10])" wood_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, wood_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
LABEL_71:
          if ( *(_BYTE *)(((unsigned __int64)&exchange_material_config->item_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)exchange_material_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&exchange_material_config->item_count >> 3)
                                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4(&exchange_material_config->item_count);
          }
          if ( !exchange_material_config->item_count )
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
              "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
              "checkHomeWoodExcelConfig",
              1221);
            v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 704),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v35 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v34,
                    (const char (*)[33])byte_1AD82C20);
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, item_id);
            v37 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v36, (const char (*)[10])" wood_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, wood_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          if ( *(_BYTE *)(((unsigned __int64)&exchange_material_config->wood_count >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&exchange_material_config->wood_count >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&exchange_material_config->wood_count);
          }
          if ( !exchange_material_config->wood_count )
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
              "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
              "checkHomeWoodExcelConfig",
              1226);
            v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 768),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v39 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v38,
                    (const char (*)[33])byte_1AD82C80);
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, item_id);
            v41 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v40, (const char (*)[10])" wood_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, wood_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false,false> *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
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
        "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
        "checkHomeWoodExcelConfig",
        1196);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              v17,
              (const char (*)[47])"find wood_exchange_material_map fail, wood_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, wood_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldWoodExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldWoodExcelConfig>,false,false> *const)(v2 + 32));
  }
  if ( v53 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
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
  }
  return ret;
};

// Line 1235: range 00000000144800EC-0000000014480AF3
int32_t __cdecl HomeWorldExcelConfigMgr::rewriteHomeWoodExcelConfig(
        HomeWorldExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  unsigned __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v15; // rax
  int *v16; // rdx
  int v17; // ecx
  char v18; // al
  __int64 v19; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v20; // rax
  int *v21; // rdx
  int v22; // ecx
  char v23; // dl
  __int64 v24; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v25; // rax
  int *v26; // rdx
  int v27; // ecx
  char v28; // al
  std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> *v29; // rax
  data::HomeWorldWoodExchangeMaterialConfig *v30; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false,false>,bool> v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  unsigned __int64 v36; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1B4h]
  data::HomeWorldWoodExcelConfigMap *__for_range; // [rsp+20h] [rbp-1B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldWoodExcelConfig>,false,false>::reference v40; // [rsp+28h] [rbp-1A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::HomeWorldWoodExcelConfig> >::type *wood_id; // [rsp+30h] [rbp-1A0h]
  std::vector<std::vector<unsigned int>> *__for_range_0; // [rsp+40h] [rbp-190h]
  __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> >::reference material_param_vec; // [rsp+48h] [rbp-188h]
  char v44[384]; // [rsp+50h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 16 __for_begin:1237 64 8 14 __for_end:1237 96 8 16 __for_begin:1239 128 8 14 __for_end:12"
                        "39 160 24 29 exchange_material_config:1251 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::rewriteHomeWoodExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  ret = 0;
  __for_range = &this->home_world_wood_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldWoodExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::HomeWorldWoodExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HomeWorldWoodExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HomeWorldWoodExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldWoodExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldWoodExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldWoodExcelConfig>,false> *)(v2 + 64)) )
      break;
    v40 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldWoodExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldWoodExcelConfig>,false,false> *const)(v2 + 32));
    wood_id = std::get<0ul,unsigned int const,data::HomeWorldWoodExcelConfig>(v40);
    __for_range_0 = &std::get<1ul,unsigned int const,data::HomeWorldWoodExcelConfig>(v40)->material_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::vector<std::vector<unsigned int>>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<std::vector<unsigned int>>::const_iterator *)(v2 + 128) = std::vector<std::vector<unsigned int>>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v2 + 128);
      if ( !__gnu_cxx::operator!=<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>(
              (const __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *)(v2 + 128)) )
        break;
      material_param_vec = __gnu_cxx::__normal_iterator<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *const)(v2 + 96));
      if ( !std::vector<unsigned int>::empty(material_param_vec) )
      {
        if ( std::vector<unsigned int>::size(material_param_vec) == 3 )
        {
          v11 = ((v2 + 160) >> 3) + 2147450880;
          *(_WORD *)v11 = 0;
          *(_BYTE *)(v11 + 2) = 0;
          v12 = &`vtable for'data::HomeWorldWoodExchangeMaterialConfig + 2;
          if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 160, v6);
          *(_QWORD *)(v2 + 160) = v12;
          if ( *(_BYTE *)(((v2 + 168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 168) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 168, v6);
          *(_DWORD *)(v2 + 168) = 0;
          v13 = (((_BYTE)v2 - 84) & 7u) + 3;
          if ( *(_BYTE *)(((v2 + 172) >> 3) + 0x7FFF8000) != 0
            && (char)(((v2 - 84) & 7) + 3) >= *(_BYTE *)(((v2 + 172) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v2 + 172, v13);
          }
          *(_DWORD *)(v2 + 172) = 0;
          if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 176, v13);
          *(_DWORD *)(v2 + 176) = 0;
          v14 = 0LL;
          v15 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](material_param_vec, 0LL);
          v16 = (int *)v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v15);
          }
          v17 = *v16;
          v18 = *(_BYTE *)(((v2 + 168) >> 3) + 0x7FFF8000);
          if ( v18 != 0 && v18 <= 3 )
          {
            LOBYTE(v14) = v18 != 0;
            __asan_report_store4(v2 + 168, v14);
          }
          *(_DWORD *)(v2 + 168) = v17;
          v19 = 1LL;
          v20 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](material_param_vec, 1uLL);
          v21 = (int *)v20;
          if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v20);
          }
          v22 = *v21;
          v23 = *(_BYTE *)(((v2 + 172) >> 3) + 0x7FFF8000);
          if ( v23 != 0 && (char)(((v2 - 84) & 7) + 3) >= v23 )
          {
            LOBYTE(v19) = v23 != 0;
            __asan_report_store4(v2 + 172, v19);
          }
          *(_DWORD *)(v2 + 172) = v22;
          v24 = 2LL;
          v25 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](material_param_vec, 2uLL);
          v26 = (int *)v25;
          if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v25);
          }
          v27 = *v26;
          v28 = *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000);
          if ( v28 != 0 && v28 <= 3 )
          {
            LOBYTE(v24) = v28 != 0;
            __asan_report_store4(v2 + 176, v24);
          }
          *(_DWORD *)(v2 + 176) = v27;
          v29 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>>::operator[](
                  &this->wood_exchange_material_map,
                  wood_id);
          v31 = std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>::emplace<unsigned int &,data::HomeWorldWoodExchangeMaterialConfig&>(
                  v29,
                  (unsigned int *)(v2 + 168),
                  (data::HomeWorldWoodExchangeMaterialConfig *)(v2 + 160),
                  (unsigned int *)(v2 + 168),
                  v30);
          if ( !v31.second )
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
              "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
              "rewriteHomeWoodExcelConfig",
              1257);
            v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 288),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v33 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    v32,
                    (const char (*)[29])"duplicate material, item_id:");
            v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v33,
                    (const unsigned int *)(v2 + 168));
            v35 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v34, (const char (*)[10])" wood_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, wood_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
            *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          data::HomeWorldWoodExchangeMaterialConfig::~HomeWorldWoodExchangeMaterialConfig((data::HomeWorldWoodExchangeMaterialConfig *const)(v2 + 160));
        }
        else
        {
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
            "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
            "rewriteHomeWoodExcelConfig",
            1247);
          v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 224),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])"wood_id:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, wood_id);
          v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])byte_1AD82E20);
          common::milog::MiLogStream::operator<<<unsigned int>(v10, material_param_vec);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      v36 = ((v2 + 160) >> 3) + 2147450880;
      *(_WORD *)v36 = -1800;
      *(_BYTE *)(v36 + 2) = -8;
      __gnu_cxx::__normal_iterator<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldWoodExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HomeWorldWoodExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v44 == (char *)v2 )
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

// Line 1266: range 0000000014480AF4-0000000014480C3A
const data::HomeWorldWoodExchangeMaterialConfig *__fastcall HomeWorldExcelConfigMgr::findWoodExchangeMaterialConfig(
        const HomeWorldExcelConfigMgr *const this,
        uint32_t wood_material_id,
        uint32_t material_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::HomeWorldWoodExchangeMaterialConfig *result; // rax
  common::tools::transcribe_cv_t_7 *exchange_material_config_map_ptr; // [rsp+18h] [rbp-88h]
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 21 wood_material_id:1265 64 4 16 material_id:1265";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::findWoodExchangeMaterialConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = wood_material_id;
  *(_DWORD *)(v3 + 64) = material_id;
  exchange_material_config_map_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>> const>(
                                       &this->wood_exchange_material_map,
                                       (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>>::key_type *)(v3 + 48));
  if ( exchange_material_config_map_ptr )
    result = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> const>(
               exchange_material_config_map_ptr,
               (const std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>::key_type *)(v3 + 64));
  else
    result = 0LL;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1276: range 0000000014480C3C-000000001448103C
bool __fastcall HomeWorldExcelConfigMgr::isSceneBlockValid(
        const HomeWorldExcelConfigMgr *const this,
        __int64 scene_id,
        uint32_t block_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>> *p_scene_area_comfort_config_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>> *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  bool result; // al
  std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> *area_map; // [rsp+18h] [rbp-128h]
  char v14[288]; // [rsp+20h] [rbp-120h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 13 scene_id:1275 48 4 13 block_id:1275 64 8 9 iter:1277 96 8 9 <unknown> 128 8 14 area_it"
                        "er:1284 160 8 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::isSceneBlockValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 32) = scene_id;
  *(_DWORD *)(v3 + 48) = block_id;
  p_scene_area_comfort_config_map = &this->scene_area_comfort_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, scene_id);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::find(p_scene_area_comfort_config_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::key_type *)(v3 + 32));
  v7 = &this->scene_area_comfort_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
      3u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "isSceneBlockValid",
      1280);
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
           (common::milog::MiLogStream *const)(v3 + 192),
           (const char (*)[10])"scene_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" invalid!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    result = 0;
  }
  else
  {
    area_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false,false> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::find(area_map, (const std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::end(area_map);
    result = std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false> *)(v3 + 128),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldAreaComfortExcelConfig>,false> *)(v3 + 160));
  }
  if ( v14 == (char *)v3 )
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

// Line 1290: range 000000001448103E-0000000014481207
std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::size_type __fastcall HomeWorldExcelConfigMgr::getSceneBlockNum(
        const HomeWorldExcelConfigMgr *const this,
        __int64 scene_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>> *p_scene_area_comfort_config_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false,false>::pointer v8; // rax
  std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::size_type result; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 scene_id:1289 64 8 9 iter:1291 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::getSceneBlockNum;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = scene_id;
  p_scene_area_comfort_config_map = &this->scene_area_comfort_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, scene_id);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::find(p_scene_area_comfort_config_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::key_type *)(v2 + 48));
  v6 = &this->scene_area_comfort_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig> >,false,false> *const)(v2 + 64));
    result = std::unordered_map<unsigned int,data::HomeWorldAreaComfortExcelConfig>::size(&v8->second);
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

// Line 1300: range 0000000014481208-00000000144814FB
const std::vector<unsigned int> *__fastcall HomeWorldExcelConfigMgr::findRewardEventIdVecByAvatarId(
        const HomeWorldExcelConfigMgr *const this,
        __int64 avatar_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_home_avatar_reward_event_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  common::milog::MiLogStream *v8; // rax
  const std::vector<unsigned int> *result; // rax
  char v10[224]; // [rsp+10h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 14 avatar_id:1299 64 8 9 iter:1301 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::findRewardEventIdVecByAvatarId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = avatar_id;
  p_home_avatar_reward_event_map = &this->home_avatar_reward_event_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, avatar_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_home_avatar_reward_event_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->home_avatar_reward_event_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
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
      1u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "findRewardEventIdVecByAvatarId",
      1304);
    v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[43])"findEventIdVecByAvatarId fail. avatar_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64))->second;
  }
  if ( v10 == (char *)v2 )
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

// Line 1311: range 00000000144814FC-00000000144817EF
const std::vector<unsigned int> *__fastcall HomeWorldExcelConfigMgr::findSummonEventIdVecByAvatarId(
        const HomeWorldExcelConfigMgr *const this,
        __int64 avatar_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_home_avatar_summon_event_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  common::milog::MiLogStream *v8; // rax
  const std::vector<unsigned int> *result; // rax
  char v10[224]; // [rsp+10h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 14 avatar_id:1310 64 8 9 iter:1312 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::findSummonEventIdVecByAvatarId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = avatar_id;
  p_home_avatar_summon_event_map = &this->home_avatar_summon_event_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, avatar_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_home_avatar_summon_event_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->home_avatar_summon_event_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
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
      1u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "findSummonEventIdVecByAvatarId",
      1315);
    v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[43])"findEventIdVecByAvatarId fail. avatar_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64))->second;
  }
  if ( v10 == (char *)v2 )
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

// Line 1322: range 00000000144817F0-00000000144819EB
__int64 __fastcall HomeWorldExcelConfigMgr::getFurnitureIdByAvatarId(
        const HomeWorldExcelConfigMgr *const this,
        __int64 avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_avatar_to_furniture_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 avatar_id:1321 64 8 9 iter:1323 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::getFurnitureIdByAvatarId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = avatar_id;
  p_avatar_to_furniture_map = &this->avatar_to_furniture_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, avatar_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_avatar_to_furniture_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->avatar_to_furniture_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::cend(v6);
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

// Line 1332: range 00000000144819EC-0000000014481C05
const data::HomeWorldPlantExcelConfig *__fastcall HomeWorldExcelConfigMgr::findHomeWorldPlantExcelConfigByGatherId(
        const HomeWorldExcelConfigMgr *const this,
        __int64 gather_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_gather_seed_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  const data::HomeWorldPlantExcelConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gather_id:1331 64 8 9 iter:1333 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::findHomeWorldPlantExcelConfigByGatherId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gather_id;
  p_gather_seed_map = &this->gather_seed_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gather_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_gather_seed_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->gather_seed_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::cend(v6);
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
    result = data::HomeWorldExcelConfigMgrBase::findHomeWorldPlantExcelConfig(this, v9->second);
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

// Line 1343: range 0000000014481C06-0000000014481E58
__int64 __fastcall HomeWorldExcelConfigMgr::getFurnitureSpeicalType(
        const HomeWorldExcelConfigMgr *const this,
        uint32_t furniture_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 furniture_id:1342 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::getFurnitureSpeicalType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = furniture_id;
  furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
                           this,
                           *(unsigned int *)(v2 + 48));
  if ( furniture_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->special_furniture_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->special_furniture_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&furniture_config_ptr->special_furniture_type);
    }
    result = (unsigned int)furniture_config_ptr->special_furniture_type;
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "getFurnitureSpeicalType",
      1347);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[44])"furniture_config_ptr is null. furniture_id:");
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

// Line 1354: range 0000000014481E5A-00000000144820AA
__int64 __fastcall HomeWorldExcelConfigMgr::getFurnitureDeploySurfaceType(
        const HomeWorldExcelConfigMgr *const this,
        uint32_t furniture_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 furniture_id:1353 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::getFurnitureDeploySurfaceType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = furniture_id;
  furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
                           this,
                           *(unsigned int *)(v2 + 48));
  if ( furniture_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->surface_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->surface_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&furniture_config_ptr->surface_type);
    }
    result = (unsigned int)furniture_config_ptr->surface_type;
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
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "getFurnitureDeploySurfaceType",
      1358);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[44])"furniture_config_ptr is null. furniture_id:");
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

// Line 1365: range 00000000144820AC-000000001448226D
const HomeWorldExcelConfigMgr::FurnitureTransferConfig *__fastcall HomeWorldExcelConfigMgr::findHomeWorldTransferExcelConfig(
        const HomeWorldExcelConfigMgr *const this,
        __int64 furniture_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,HomeWorldExcelConfigMgr::FurnitureTransferConfig> *p_furniture_transfer_config_map; // rdx
  std::unordered_map<unsigned int,HomeWorldExcelConfigMgr::FurnitureTransferConfig> *v6; // rdx
  bool v7; // al
  const HomeWorldExcelConfigMgr::FurnitureTransferConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 17 furniture_id:1364 64 8 9 iter:1366 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::findHomeWorldTransferExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = furniture_id;
  p_furniture_transfer_config_map = &this->furniture_transfer_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, furniture_id);
  *(std::unordered_map<unsigned int,HomeWorldExcelConfigMgr::FurnitureTransferConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,HomeWorldExcelConfigMgr::FurnitureTransferConfig>::find(p_furniture_transfer_config_map, (const std::unordered_map<unsigned int,HomeWorldExcelConfigMgr::FurnitureTransferConfig>::key_type *)(v2 + 48));
  v6 = &this->furniture_transfer_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,HomeWorldExcelConfigMgr::FurnitureTransferConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,HomeWorldExcelConfigMgr::FurnitureTransferConfig>::cend(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,HomeWorldExcelConfigMgr::FurnitureTransferConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeWorldExcelConfigMgr::FurnitureTransferConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeWorldExcelConfigMgr::FurnitureTransferConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeWorldExcelConfigMgr::FurnitureTransferConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeWorldExcelConfigMgr::FurnitureTransferConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1375: range 000000001448226E-000000001448286B
__int64 __fastcall HomeWorldExcelConfigMgr::getFurnitureTransferPoint(
        const HomeWorldExcelConfigMgr *const this,
        __int64 furniture_id,
        Vector3 *pos,
        Vector3 *rot)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::unordered_map<unsigned int,HomeWorldExcelConfigMgr::FurnitureTransferConfig> *p_furniture_transfer_config_map; // rdx
  std::unordered_map<unsigned int,HomeWorldExcelConfigMgr::FurnitureTransferConfig> *v8; // rdx
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeWorldExcelConfigMgr::FurnitureTransferConfig>,false,false>::pointer n; // rax
  Quaternion *p_offset_quat; // rdx
  char v16[320]; // [rsp+20h] [rbp-140h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 17 furniture_id:1374 64 8 9 iter:1376 96 8 9 <unknown> 128 12 15 offset_pos:1383 160 16 9"
                        " quat:1382 192 16 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = HomeWorldExcelConfigMgr::getFurnitureTransferPoint;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -219020288;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862728] = -202116109;
  *(_DWORD *)(v4 + 48) = furniture_id;
  p_furniture_transfer_config_map = &this->furniture_transfer_config_map;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, furniture_id);
  *(std::unordered_map<unsigned int,HomeWorldExcelConfigMgr::FurnitureTransferConfig>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,HomeWorldExcelConfigMgr::FurnitureTransferConfig>::find(p_furniture_transfer_config_map, (const std::unordered_map<unsigned int,HomeWorldExcelConfigMgr::FurnitureTransferConfig>::key_type *)(v4 + 48));
  v8 = &this->furniture_transfer_config_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 48);
  *(std::unordered_map<unsigned int,HomeWorldExcelConfigMgr::FurnitureTransferConfig>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,HomeWorldExcelConfigMgr::FurnitureTransferConfig>::cend(v8);
  v9 = std::__detail::operator==<std::pair<unsigned int const,HomeWorldExcelConfigMgr::FurnitureTransferConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeWorldExcelConfigMgr::FurnitureTransferConfig>,false> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeWorldExcelConfigMgr::FurnitureTransferConfig>,false> *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/HomeWorldExcelConfig.cpp",
      "getFurnitureTransferPoint",
      1379);
    v10 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
            (common::milog::MiLogStream *const)(v4 + 224),
            (const char (*)[53])"findHomeWorldTransferExcelConfig fail. furniture_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    *(Quaternion *)(v4 + 160) = Quaternion::fromRotation(rot);
    *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = 1024;
    n = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeWorldExcelConfigMgr::FurnitureTransferConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeWorldExcelConfigMgr::FurnitureTransferConfig>,false,false> *const)(v4 + 64));
    if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 139) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 117) & 7) >= *(_BYTE *)(((v4 + 139) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 128, 12LL);
    }
    if ( (((unsigned __int8)n + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&n->second.offset_pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&n->second.offset_pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&n->second.offset_pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)n + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&n->second.offset_pos.z + 3) >> 3)
                                                     + 0x7FFF8000) )
    {
      n = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeWorldExcelConfigMgr::FurnitureTransferConfig>,false,false>::pointer)__asan_report_load_n(&n->second.offset_pos, 12LL);
    }
    *(_QWORD *)(v4 + 128) = *(_QWORD *)&n->second.offset_pos.x;
    *(float *)(v4 + 136) = n->second.offset_pos.z;
    *(Vector3 *)(v4 + 128) = Quaternion::rotateVector3((const Quaternion *const)(v4 + 160), (const Vector3 *)(v4 + 128));
    operator+=(pos, (const Vector3 *)(v4 + 128));
    *(_WORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
    p_offset_quat = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeWorldExcelConfigMgr::FurnitureTransferConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeWorldExcelConfigMgr::FurnitureTransferConfig>,false,false> *const)(v4 + 64))->second.offset_quat;
    if ( *(_WORD *)(((v4 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    *(Quaternion *)(v4 + 192) = operator*((const Quaternion *)(v4 + 160), p_offset_quat);
    if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(rot, 12LL);
    }
    *rot = Quaternion::toEuler((const Quaternion *const)(v4 + 192));
    result = 0LL;
  }
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
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

// Line 1391: range 000000001448286C-0000000014482A7D
const data::HomeWorldNPCExcelConfig *__fastcall HomeWorldExcelConfigMgr::findHomeWorldNPCExcelConfigByAvatarId(
        const HomeWorldExcelConfigMgr *const this,
        __int64 avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_avatar_to_furniture_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  const data::HomeWorldNPCExcelConfig *result; // rax
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 avatar_id:1390 64 8 9 iter:1392 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::findHomeWorldNPCExcelConfigByAvatarId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = avatar_id;
  p_avatar_to_furniture_map = &this->avatar_to_furniture_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, avatar_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_avatar_to_furniture_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->avatar_to_furniture_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::cend(v6);
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
    result = data::HomeWorldExcelConfigMgrBase::findHomeWorldNPCExcelConfig(this, v9->second);
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

// Line 1401: range 0000000014482A7E-0000000014482C41
bool __fastcall HomeWorldExcelConfigMgr::isHomeGatherIdInSeedConfig(
        const HomeWorldExcelConfigMgr *const this,
        uint32_t seed_id,
        uint32_t gather_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool result; // al
  const std::unordered_map<unsigned int,data::ConfigHomeGather> *home_gather_map_ptr; // [rsp+18h] [rbp-A8h]
  char v9[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 gather_id:1400 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::isHomeGatherIdInSeedConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = gather_id;
  home_gather_map_ptr = HomeWorldExcelConfigMgr::findPlantHomeGatherConfigMap(this, seed_id);
  if ( home_gather_map_ptr )
  {
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, seed_id);
    *(std::unordered_map<unsigned int,data::ConfigHomeGather>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ConfigHomeGather>::end(home_gather_map_ptr);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, seed_id);
    *(std::unordered_map<unsigned int,data::ConfigHomeGather>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ConfigHomeGather>::find(
                                                                                              home_gather_map_ptr,
                                                                                              (const std::unordered_map<unsigned int,data::ConfigHomeGather>::key_type *)(v3 + 48));
    result = std::__detail::operator!=<std::pair<unsigned int const,data::ConfigHomeGather>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ConfigHomeGather>,false> *)(v3 + 64),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ConfigHomeGather>,false> *)(v3 + 96));
  }
  else
  {
    result = 0;
  }
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

// Line 1411: range 0000000014482C42-0000000014482E03
const std::unordered_map<unsigned int,data::ConfigHomeGather> *__fastcall HomeWorldExcelConfigMgr::findPlantHomeGatherConfigMap(
        const HomeWorldExcelConfigMgr *const this,
        __int64 seed_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::ConfigHomeGather>> *p_home_gather_config_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::ConfigHomeGather>> *v6; // rdx
  bool v7; // al
  const std::unordered_map<unsigned int,data::ConfigHomeGather> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 seed_id:1410 64 8 9 iter:1412 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HomeWorldExcelConfigMgr::findPlantHomeGatherConfigMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = seed_id;
  p_home_gather_config_map = &this->home_gather_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, seed_id);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::ConfigHomeGather>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::ConfigHomeGather>>::find(p_home_gather_config_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::ConfigHomeGather>>::key_type *)(v2 + 48));
  v6 = &this->home_gather_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::ConfigHomeGather>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::ConfigHomeGather>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,data::ConfigHomeGather>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::ConfigHomeGather> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::ConfigHomeGather> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::ConfigHomeGather>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::ConfigHomeGather> >,false,false> *const)(v2 + 64))->second;
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

// Line 1421: range 0000000014482E04-0000000014482FEF
const data::ConfigHomeGather *__fastcall HomeWorldExcelConfigMgr::findPlantHomeGatherConfig(
        const HomeWorldExcelConfigMgr *const this,
        uint32_t seed_id,
        uint32_t gather_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const data::ConfigHomeGather *result; // rax
  bool v7; // al
  const std::unordered_map<unsigned int,data::ConfigHomeGather> *home_gather_map_ptr; // [rsp+18h] [rbp-A8h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 gather_id:1420 64 8 9 iter:1427 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HomeWorldExcelConfigMgr::findPlantHomeGatherConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = gather_id;
  home_gather_map_ptr = HomeWorldExcelConfigMgr::findPlantHomeGatherConfigMap(this, seed_id);
  if ( home_gather_map_ptr )
  {
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, seed_id);
    *(std::unordered_map<unsigned int,data::ConfigHomeGather>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ConfigHomeGather>::find(
                                                                                              home_gather_map_ptr,
                                                                                              (const std::unordered_map<unsigned int,data::ConfigHomeGather>::key_type *)(v3 + 48));
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 48);
    *(std::unordered_map<unsigned int,data::ConfigHomeGather>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ConfigHomeGather>::end(home_gather_map_ptr);
    v7 = std::__detail::operator==<std::pair<unsigned int const,data::ConfigHomeGather>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ConfigHomeGather>,false> *)(v3 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ConfigHomeGather>,false> *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v7 )
      result = 0LL;
    else
      result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeGather>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeGather>,false,false> *const)(v3 + 64))->second;
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

// Line 1436: range 0000000014482FF0-0000000014483068
bool __cdecl HomeWorldExcelConfigMgr::isCustomNodeFurnitrue(
        const HomeWorldExcelConfigMgr *const this,
        uint32_t furniture_id)
{
  const data::HomeWorldFurnitureExcelConfig *home_furniture_config_ptr; // [rsp+18h] [rbp-8h]

  home_furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(this, furniture_id);
  if ( !home_furniture_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&home_furniture_config_ptr->special_furniture_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&home_furniture_config_ptr->special_furniture_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&home_furniture_config_ptr->special_furniture_type);
  }
  return home_furniture_config_ptr->special_furniture_type == CustomNodeFurnitrue;
};
