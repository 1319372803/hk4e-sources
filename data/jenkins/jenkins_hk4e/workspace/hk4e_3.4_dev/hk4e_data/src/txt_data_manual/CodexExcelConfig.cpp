// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/CodexExcelConfig.cpp

// Line 21: range 0000000013A483EA-0000000013A4913F
int32_t __cdecl CodexExcelConfigMgr::rewriteConfig(CodexExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-284h]
  char v16[640]; // [rsp+20h] [rbp-280h] BYREF

  v2 = (common::milog::MiLogStream *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"9 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)CodexExcelConfigMgr::rewriteConfig;
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
  ret = 0;
  if ( CodexExcelConfigMgr::rewriteQuestConfig(this, txt_config_mgr) )
  {
    ret = -1;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "rewriteConfig",
      27);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v5, (const char (*)[26])"rewriteQuestConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    *(_DWORD *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( CodexExcelConfigMgr::rewriteWeaponConfig(this, txt_config_mgr) )
  {
    ret = -1;
    *(_DWORD *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "rewriteConfig",
      33);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v6,
      (const char (*)[27])"rewriteWeaponConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    *(_DWORD *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( CodexExcelConfigMgr::rewriteReliquaryConfig(this, txt_config_mgr) )
  {
    ret = -1;
    *(_DWORD *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "rewriteConfig",
      39);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v7,
      (const char (*)[30])"rewriteReliquaryConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    *(_DWORD *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( CodexExcelConfigMgr::rewriteAnimalConfig(this, txt_config_mgr) )
  {
    ret = -1;
    *(_DWORD *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "rewriteConfig",
      45);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v8,
      (const char (*)[27])"rewriteAnimalConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    *(_DWORD *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( CodexExcelConfigMgr::rewriteMaterialConfig(this, txt_config_mgr) )
  {
    ret = -1;
    *(_DWORD *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "rewriteConfig",
      51);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v9,
      (const char (*)[29])"rewriteMaterialConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    *(_DWORD *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( CodexExcelConfigMgr::rewriteBooksConfig(this, txt_config_mgr) )
  {
    ret = -1;
    *(_DWORD *)(((unsigned __int64)&v2[11] >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "rewriteConfig",
      57);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      v10,
      (const char (*)[26])"rewriteBooksConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    *(_DWORD *)(((unsigned __int64)&v2[11] >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( CodexExcelConfigMgr::rewritePushTipsConfig(this, txt_config_mgr) )
  {
    ret = -1;
    *(_DWORD *)(((unsigned __int64)&v2[13] >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "rewriteConfig",
      63);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v11,
      (const char (*)[29])"rewritePushTipsConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    *(_DWORD *)(((unsigned __int64)&v2[13] >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( CodexExcelConfigMgr::rewriteViewConfig(this, txt_config_mgr) )
  {
    ret = -1;
    *(_DWORD *)(((unsigned __int64)&v2[15] >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "rewriteConfig",
      69);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 15,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v12, (const char (*)[25])"rewriteViewConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 15);
    *(_DWORD *)(((unsigned __int64)&v2[15] >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( CodexExcelConfigMgr::rewritePushtipsGroupConfig(this, txt_config_mgr) )
  {
    ret = -1;
    *(_DWORD *)(((unsigned __int64)&v2[17] >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "rewriteConfig",
      75);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 17,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v13,
      (const char (*)[34])"rewritePushtipsGroupConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 17);
  }
  result = ret;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = 0LL;
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

// Line 82: range 0000000013A49140-0000000013A49D21
int32_t __cdecl CodexExcelConfigMgr::checkConfig(CodexExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-244h]
  char v15[576]; // [rsp+20h] [rbp-240h] BYREF

  v2 = (common::milog::MiLogStream *)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"8 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)CodexExcelConfigMgr::checkConfig;
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
  ret = 0;
  if ( CodexExcelConfigMgr::checkQuestConfig(this, txt_config_mgr) )
  {
    ret = -1;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "checkConfig",
      88);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v5, (const char (*)[24])"checkQuestConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    *(_DWORD *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( CodexExcelConfigMgr::checkWeaponConfig(this, txt_config_mgr) )
  {
    ret = -1;
    *(_DWORD *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "checkConfig",
      94);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v6, (const char (*)[25])"checkWeaponConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    *(_DWORD *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( CodexExcelConfigMgr::checkReliquaryConfig(this, txt_config_mgr) )
  {
    ret = -1;
    *(_DWORD *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "checkConfig",
      100);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v7,
      (const char (*)[28])"checkReliquaryConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    *(_DWORD *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( CodexExcelConfigMgr::checkAnimalConfig(this, txt_config_mgr) )
  {
    ret = -1;
    *(_DWORD *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "checkConfig",
      106);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v8, (const char (*)[25])"checkAnimalConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    *(_DWORD *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( CodexExcelConfigMgr::checkMaterialConfig(this, txt_config_mgr) )
  {
    ret = -1;
    *(_DWORD *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "checkConfig",
      112);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v9,
      (const char (*)[27])"checkMaterialConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    *(_DWORD *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( CodexExcelConfigMgr::checkBooksConfig(this, txt_config_mgr) )
  {
    ret = -1;
    *(_DWORD *)(((unsigned __int64)&v2[11] >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "checkConfig",
      118);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v10, (const char (*)[24])"checkBooksConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    *(_DWORD *)(((unsigned __int64)&v2[11] >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( CodexExcelConfigMgr::checkPushTipsConfig(this, txt_config_mgr) )
  {
    ret = -1;
    *(_DWORD *)(((unsigned __int64)&v2[13] >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "checkConfig",
      124);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v11,
      (const char (*)[27])"checkPushTipsConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    *(_DWORD *)(((unsigned __int64)&v2[13] >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( CodexExcelConfigMgr::checkViewConfig(this, txt_config_mgr) )
  {
    ret = -1;
    *(_DWORD *)(((unsigned __int64)&v2[15] >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/CodexExcelConfig.cpp",
      "checkConfig",
      130);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 15,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v12, (const char (*)[23])"checkViewConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 15);
  }
  result = ret;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0LL;
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

// Line 137: range 0000000013A49D22-0000000013A49E59
__int64 __fastcall CodexExcelConfigMgr::getCodexIdByQuestId(const CodexExcelConfigMgr *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v5; // rax
  unsigned int *v6; // rdx
  __int64 result; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 quest_id:136";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::getCodexIdByQuestId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
         &this->quest_to_id_map,
         (const unsigned int *)(v2 + 32)) )
  {
    v5 = std::unordered_map<unsigned int,unsigned int>::at(
           &this->quest_to_id_map,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    v6 = (unsigned int *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    result = *v6;
  }
  else
  {
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
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

// Line 144: range 0000000013A49E5A-0000000013A49F91
__int64 __fastcall CodexExcelConfigMgr::getCodexIdByWeaponId(const CodexExcelConfigMgr *const this, uint32_t weapon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v5; // rax
  unsigned int *v6; // rdx
  __int64 result; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 weapon_id:143";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::getCodexIdByWeaponId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = weapon_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
         &this->weapon_to_id_map,
         (const unsigned int *)(v2 + 32)) )
  {
    v5 = std::unordered_map<unsigned int,unsigned int>::at(
           &this->weapon_to_id_map,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    v6 = (unsigned int *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    result = *v6;
  }
  else
  {
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
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

// Line 151: range 0000000013A49F92-0000000013A4A2A5
__int64 __fastcall CodexExcelConfigMgr::getCodexIdByReliquarySuitIdAndLevel(
        const CodexExcelConfigMgr *const this,
        __int64 reliquary_suit_id,
        uint32_t level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *p_reliquary_suit_and_level_to_id_map; // rdx
  bool v7; // al
  const std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::mapped_type *v8; // rax
  unsigned int *v9; // rdx
  __int64 result; // rax
  char v12[240]; // [rsp+10h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 21 reliquary_suit_id:150 48 4 9 level:150 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unkn"
                        "own> 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CodexExcelConfigMgr::getCodexIdByReliquarySuitIdAndLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = reliquary_suit_id;
  *(_DWORD *)(v3 + 48) = level;
  p_reliquary_suit_and_level_to_id_map = &this->reliquary_suit_and_level_to_id_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, reliquary_suit_id);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::const_iterator *)(v3 + 128) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::end(p_reliquary_suit_and_level_to_id_map);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, reliquary_suit_id);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 64) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v3 + 32),
                                                         (unsigned int *)(v3 + 48));
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::const_iterator *)(v3 + 96) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::find(&this->reliquary_suit_and_level_to_id_map, (const std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::key_type *)(v3 + 64));
  v7 = std::__detail::operator!=<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v3 + 96),
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v3 + 128));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 128);
    *(std::pair<unsigned int,unsigned int> *)(v3 + 160) = std::make_pair<unsigned int &,unsigned int &>(
                                                            (unsigned int *)(v3 + 32),
                                                            (unsigned int *)(v3 + 48));
    v8 = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::at(
           &this->reliquary_suit_and_level_to_id_map,
           (const std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::key_type *)(v3 + 160));
    v9 = (unsigned int *)v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    result = *v9;
  }
  else
  {
    result = 0LL;
  }
  if ( v12 == (char *)v3 )
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

// Line 161: range 0000000013A4A2A6-0000000013A4A3DD
__int64 __fastcall CodexExcelConfigMgr::getCodexIdByCreatureDescribeId(
        const CodexExcelConfigMgr *const this,
        uint32_t describe_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v5; // rax
  unsigned int *v6; // rdx
  __int64 result; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 describe_id:160";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::getCodexIdByCreatureDescribeId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = describe_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
         &this->animal_to_id_map,
         (const unsigned int *)(v2 + 32)) )
  {
    v5 = std::unordered_map<unsigned int,unsigned int>::at(
           &this->animal_to_id_map,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    v6 = (unsigned int *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    result = *v6;
  }
  else
  {
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
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

// Line 168: range 0000000013A4A3DE-0000000013A4A515
__int64 __fastcall CodexExcelConfigMgr::getCodexIdByMaterialId(
        const CodexExcelConfigMgr *const this,
        uint32_t material_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v5; // rax
  unsigned int *v6; // rdx
  __int64 result; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 material_id:167";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::getCodexIdByMaterialId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = material_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
         &this->material_to_id_map,
         (const unsigned int *)(v2 + 32)) )
  {
    v5 = std::unordered_map<unsigned int,unsigned int>::at(
           &this->material_to_id_map,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    v6 = (unsigned int *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    result = *v6;
  }
  else
  {
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
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

// Line 175: range 0000000013A4A516-0000000013A4A64D
__int64 __fastcall CodexExcelConfigMgr::getCodexIdByBooksId(const CodexExcelConfigMgr *const this, uint32_t books_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v5; // rax
  unsigned int *v6; // rdx
  __int64 result; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 books_id:174";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::getCodexIdByBooksId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = books_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
         &this->books_to_id_map,
         (const unsigned int *)(v2 + 32)) )
  {
    v5 = std::unordered_map<unsigned int,unsigned int>::at(
           &this->books_to_id_map,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    v6 = (unsigned int *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    result = *v6;
  }
  else
  {
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
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

// Line 182: range 0000000013A4A64E-0000000013A4A785
__int64 __fastcall CodexExcelConfigMgr::getCodexIdByPushTipsId(
        const CodexExcelConfigMgr *const this,
        uint32_t push_tips)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v5; // rax
  unsigned int *v6; // rdx
  __int64 result; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 push_tips:181";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::getCodexIdByPushTipsId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = push_tips;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
         &this->push_tips_to_id_map,
         (const unsigned int *)(v2 + 32)) )
  {
    v5 = std::unordered_map<unsigned int,unsigned int>::at(
           &this->push_tips_to_id_map,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    v6 = (unsigned int *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    result = *v6;
  }
  else
  {
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
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

// Line 189: range 0000000013A4A786-0000000013A4A94C
uint32_t __fastcall CodexExcelConfigMgr::getCodexIdByViewId(
        const CodexExcelConfigMgr *const this,
        uint32_t scene_id,
        uint32_t group_id,
        uint32_t config_id,
        unsigned int *a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r13
  uint32_t result; // eax
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v6 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 48 4 12 scene_id:188 64 4 12 group_id:188 80 4 13 config_id:188 96 12 9 <unknown>";
  *(_QWORD *)(v6 + 16) = CodexExcelConfigMgr::getCodexIdByViewId;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -234556924;
  v8[536862723] = -202177536;
  *(_DWORD *)(v6 + 48) = scene_id;
  *(_DWORD *)(v6 + 64) = group_id;
  *(_DWORD *)(v6 + 80) = config_id;
  if ( *(char *)(((v6 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v6 + 107) >> 3) + 0x7FFF8000) != 0
    && (char)((v6 + 107) & 7) >= *(_BYTE *)(((v6 + 107) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v6 + 96, 12LL);
  }
  std::make_tuple<unsigned int &,unsigned int &,unsigned int &>(
    (unsigned int *)(v6 + 96),
    (unsigned int *)(v6 + 48),
    (unsigned int *)(v6 + 64),
    (unsigned int *)(v6 + 80),
    a5,
    a6);
  result = common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,unsigned int>>>>(
             &this->view_to_id_map,
             (const std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int> > >::key_type *)(v6 + 96),
             0);
  if ( v12 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 194: range 0000000013A4A94E-0000000013A4AA9C
bool __fastcall CodexExcelConfigMgr::isCodexIdDisused(
        const CodexExcelConfigMgr *const this,
        __int64 codex_type,
        uint32_t codex_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool result; // al
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 codex_type:193 48 4 12 codex_id:193 64 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CodexExcelConfigMgr::isCodexIdDisused;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = codex_type;
  *(_DWORD *)(v3 + 48) = codex_id;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, codex_type);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 64) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v3 + 32),
                                                         (unsigned int *)(v3 + 48));
  result = common::tools::MiscUtils::isContains<std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>> const,std::pair<unsigned int,unsigned int>>(
             &this->disused_codex_set,
             (const std::pair<unsigned int,unsigned int> *)(v3 + 64));
  if ( v8 == (char *)v3 )
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

// Line 199: range 0000000013A4AA9E-0000000013A4AC99
__int64 __fastcall CodexExcelConfigMgr::getPushtipsGroupIdByCodexId(
        const CodexExcelConfigMgr *const this,
        __int64 codex_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_pushtips_codex_id_to_group_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 codex_id:198 64 8 8 iter:200 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::getPushtipsGroupIdByCodexId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = codex_id;
  p_pushtips_codex_id_to_group_map = &this->pushtips_codex_id_to_group_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, codex_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_pushtips_codex_id_to_group_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->pushtips_codex_id_to_group_map;
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

// Line 209: range 0000000013A4AC9A-0000000013A4AE5B
const std::set<unsigned int> *__fastcall CodexExcelConfigMgr::findCodexIdSetByPushtipsGroupId(
        const CodexExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_group_id_to_pushtips_codex_set_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:208 64 8 8 iter:210 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::findCodexIdSetByPushtipsGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_id_to_pushtips_codex_set_map = &this->group_id_to_pushtips_codex_set_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_group_id_to_pushtips_codex_set_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->group_id_to_pushtips_codex_set_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
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

// Line 219: range 0000000013A4AE5C-0000000013A4B320
int32_t __cdecl CodexExcelConfigMgr::rewriteQuestConfig(CodexExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  const unsigned int *v6; // r8
  std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<unsigned int,unsigned int> > > *p_disused_codex_set; // rcx
  char v8; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v16; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-114h]
  data::QuestCodexExcelConfigMap *__for_range; // [rsp+20h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-108h]
  const unsigned int *id; // [rsp+30h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,data::QuestCodexExcelConfig> >::type *conf; // [rsp+38h] [rbp-F8h]
  char v23[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 9 <unknown> 64 8 15 __for_begin:221 96 8 13 __for_end:221 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::rewriteQuestConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  ret = 0;
  __for_range = &this->quest_codex_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::QuestCodexExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::QuestCodexExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::QuestCodexExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::QuestCodexExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false> *)(v2 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::QuestCodexExcelConfig>(__in);
    conf = std::get<1ul,unsigned int const,data::QuestCodexExcelConfig>(__in);
    if ( *(char *)(((unsigned __int64)&conf->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&conf->is_disuse, v5, &conf->is_disuse);
    if ( conf->is_disuse )
    {
      p_disused_codex_set = &this->disused_codex_set;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v8 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v2 + 48, v5);
      }
      *(_DWORD *)(v2 + 48) = 1;
      std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::emplace<proto::CodexType,unsigned int const&>(
        p_disused_codex_set,
        (proto::CodexType *)(v2 + 48),
        id,
        (proto::CodexType *)p_disused_codex_set,
        v6);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    }
    else
    {
      v9 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
             &this->quest_to_id_map,
             &conf->parent_quest_id,
             id,
             (unsigned int *)&this->quest_to_id_map,
             v6);
      if ( !v9.second )
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
          "./src/txt_data_manual/CodexExcelConfig.cpp",
          "rewriteQuestConfig",
          230);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 128),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])byte_1AC5B2C0);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &conf->parent_quest_id);
        v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v12, (const char (*)[32])byte_1AC5B300);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
        v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])byte_1AC5B340);
        v16 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->quest_to_id_map, &conf->parent_quest_id);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, v16);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
        *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v23 == (char *)v2 )
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

// Line 242: range 0000000013A4B322-0000000013A4BB98
int32_t __cdecl CodexExcelConfigMgr::checkQuestConfig(
        CodexExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  uint32_t chapter_id; // ecx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-16Ch]
  data::QuestCodexExcelConfigMap *__for_range; // [rsp+18h] [rbp-168h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-160h]
  const unsigned int *codex_id; // [rsp+28h] [rbp-158h]
  std::tuple_element<1,std::pair<unsigned int const,data::QuestCodexExcelConfig> >::type *config; // [rsp+30h] [rbp-150h]
  const data::MainQuestExcelConfig *parent_quest_config_ptr; // [rsp+38h] [rbp-148h]
  char v32[320]; // [rsp+40h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:244 64 8 13 __for_end:244 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::checkQuestConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->quest_codex_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::QuestCodexExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::QuestCodexExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::QuestCodexExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::QuestCodexExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false,false> *const)(v2 + 32));
    codex_id = std::get<0ul,unsigned int const,data::QuestCodexExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::QuestCodexExcelConfig>(__in);
    if ( *(char *)(((unsigned __int64)&config->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->is_disuse, v2 + 64, &config->is_disuse);
    if ( !config->is_disuse )
    {
      p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->parent_quest_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->parent_quest_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->parent_quest_id);
      }
      parent_quest_config_ptr = data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(
                                  p_quest_config_mgr,
                                  config->parent_quest_id);
      if ( parent_quest_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&parent_quest_config_ptr->chapter_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&parent_quest_config_ptr->chapter_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&parent_quest_config_ptr->chapter_id);
        }
        if ( parent_quest_config_ptr->chapter_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->chapter_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->chapter_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->chapter_id);
          }
          chapter_id = config->chapter_id;
          if ( *(_BYTE *)(((unsigned __int64)&parent_quest_config_ptr->chapter_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&parent_quest_config_ptr->chapter_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&parent_quest_config_ptr->chapter_id);
          }
          if ( chapter_id != parent_quest_config_ptr->chapter_id )
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
              "./src/txt_data_manual/CodexExcelConfig.cpp",
              "checkQuestConfig",
              268);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 224),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                    v17,
                    (const char (*)[62])byte_1AC5B600);
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, codex_id);
            v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v19,
                    (const char (*)[13])" chapter_id:");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &config->chapter_id);
            v22 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v21,
                    (const char (*)[18])" parent_quest_id:");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config->parent_quest_id);
            v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v23,
                    (const char (*)[13])" chapter_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v24,
              &parent_quest_config_ptr->chapter_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
            *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
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
            "./src/txt_data_manual/CodexExcelConfig.cpp",
            "checkQuestConfig",
            262);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 160),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v12, (const char (*)[78])byte_1AC5B540);
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, codex_id);
          v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v14,
                  (const char (*)[18])" parent_quest_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->parent_quest_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
          *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
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
          "./src/txt_data_manual/CodexExcelConfig.cpp",
          "checkQuestConfig",
          254);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])"invalid ");
        v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               v7,
               (const char (*)[23])"config.parent_quest_id");
        v9 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v8, (const char (*)[2])":");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->parent_quest_id);
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" codex_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, codex_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
        *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v32 == (char *)v2 )
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

// Line 278: range 0000000013A4BB9A-0000000013A4C063
int32_t __cdecl CodexExcelConfigMgr::rewriteWeaponConfig(CodexExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *v5; // r8
  bool *p_is_disuse; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<unsigned int,unsigned int> > > *p_disused_codex_set; // rcx
  char v10; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v18; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-114h]
  data::WeaponCodexExcelConfigMap *__for_range; // [rsp+20h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-108h]
  const unsigned int *id; // [rsp+30h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,data::WeaponCodexExcelConfig> >::type *conf; // [rsp+38h] [rbp-F8h]
  char v25[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 9 <unknown> 64 8 15 __for_begin:280 96 8 13 __for_end:280 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::rewriteWeaponConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  ret = 0;
  __for_range = &this->weapon_codex_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WeaponCodexExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WeaponCodexExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WeaponCodexExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::WeaponCodexExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false> *)(v2 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::WeaponCodexExcelConfig>(__in);
    conf = std::get<1ul,unsigned int const,data::WeaponCodexExcelConfig>(__in);
    p_is_disuse = &conf->is_disuse;
    v7 = ((_BYTE)conf + 20) & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(p_is_disuse, v7, v8);
    if ( conf->is_disuse )
    {
      p_disused_codex_set = &this->disused_codex_set;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v10 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v7) = v10 != 0;
        __asan_report_store4(v2 + 48, v7);
      }
      *(_DWORD *)(v2 + 48) = 2;
      std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::emplace<proto::CodexType,unsigned int const&>(
        p_disused_codex_set,
        (proto::CodexType *)(v2 + 48),
        id,
        (proto::CodexType *)p_disused_codex_set,
        v5);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    }
    else
    {
      v11 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
              &this->weapon_to_id_map,
              &conf->weapon_id,
              id,
              (unsigned int *)&this->weapon_to_id_map,
              v5);
      if ( !v11.second )
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
          "./src/txt_data_manual/CodexExcelConfig.cpp",
          "rewriteWeaponConfig",
          289);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 128),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])byte_1AC5B740);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &conf->weapon_id);
        v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v14, (const char (*)[30])byte_1AC5B780);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
        v17 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v16, (const char (*)[4])off_1AC5B7C0);
        v18 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->weapon_to_id_map, &conf->weapon_id);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, v18);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
        *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v25 == (char *)v2 )
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

// Line 297: range 0000000013A4C064-0000000013A4C497
int32_t __cdecl CodexExcelConfigMgr::checkWeaponConfig(
        CodexExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool *p_is_disuse; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  WeaponExcelConfigMgr *p_weapon_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::WeaponCodexExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-D8h]
  const unsigned int *id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int const,data::WeaponCodexExcelConfig> >::type *conf; // [rsp+38h] [rbp-C8h]
  char v22[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:300 64 8 13 __for_end:300 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::checkWeaponConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->weapon_codex_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WeaponCodexExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::WeaponCodexExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WeaponCodexExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WeaponCodexExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::WeaponCodexExcelConfig>(__in);
    conf = std::get<1ul,unsigned int const,data::WeaponCodexExcelConfig>(__in);
    p_is_disuse = &conf->is_disuse;
    v6 = ((_BYTE)conf + 20) & 7;
    v7 = (*(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_load1(p_is_disuse, v6, v7);
    if ( !conf->is_disuse )
    {
      p_weapon_config_mgr = &txt_config_mgr->weapon_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&conf->weapon_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)conf + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&conf->weapon_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&conf->weapon_id);
      }
      if ( !data::WeaponExcelConfigMgrBase::findWeaponExcelConfig(p_weapon_config_mgr, conf->weapon_id) )
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
          "./src/txt_data_manual/CodexExcelConfig.cpp",
          "checkWeaponConfig",
          309);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])"invalid ");
        v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])"conf.weapon_id");
        v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])":");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &conf->weapon_id);
        v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" codex_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
        *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v22 == (char *)v2 )
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

// Line 317: range 0000000013A4C498-0000000013A4CA1D
int32_t __cdecl CodexExcelConfigMgr::rewriteReliquaryConfig(
        CodexExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *v5; // r8
  bool *p_is_disuse; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<unsigned int,unsigned int> > > *p_disused_codex_set; // rcx
  char v10; // al
  unsigned int *p_level; // rcx
  unsigned int *p_suit_id; // rdx
  __int64 v13; // rsi
  const unsigned int *v14; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::mapped_type *v24; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  data::ReliquaryCodexExcelConfigMap *__for_range; // [rsp+20h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryCodexExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-128h]
  const unsigned int *id; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,data::ReliquaryCodexExcelConfig> >::type *conf; // [rsp+38h] [rbp-118h]
  char v31[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 9 <unknown> 64 8 15 __for_begin:319 96 8 13 __for_end:319 128 8 19 reliquary_index:326 16"
                        "0 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::rewriteReliquaryConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->reliquary_codex_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReliquaryCodexExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ReliquaryCodexExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReliquaryCodexExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ReliquaryCodexExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ReliquaryCodexExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryCodexExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryCodexExcelConfig>,false> *)(v2 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryCodexExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryCodexExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::ReliquaryCodexExcelConfig>(__in);
    conf = std::get<1ul,unsigned int const,data::ReliquaryCodexExcelConfig>(__in);
    p_is_disuse = &conf->is_disuse;
    v7 = ((_BYTE)conf + 44) & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(p_is_disuse, v7, v8);
    if ( conf->is_disuse )
    {
      p_disused_codex_set = &this->disused_codex_set;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v10 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v7) = v10 != 0;
        __asan_report_store4(v2 + 48, v7);
      }
      *(_DWORD *)(v2 + 48) = 8;
      std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::emplace<proto::CodexType,unsigned int const&>(
        p_disused_codex_set,
        (proto::CodexType *)(v2 + 48),
        id,
        (proto::CodexType *)p_disused_codex_set,
        v5);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    }
    else
    {
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      p_level = &conf->level;
      p_suit_id = &conf->suit_id;
      v13 = *(unsigned __int8 *)(((v2 + 128) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v13 )
        __asan_report_store8(v2 + 128, v13);
      *(std::pair<unsigned int,unsigned int> *)(v2 + 128) = std::make_pair<unsigned int &,unsigned int &>(
                                                              p_suit_id,
                                                              p_level);
      v15 = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::emplace<std::pair<unsigned int,unsigned int>&,unsigned int const&>(
              &this->reliquary_suit_and_level_to_id_map,
              (std::pair<unsigned int,unsigned int> *)(v2 + 128),
              id,
              (std::pair<unsigned int,unsigned int> *)&this->reliquary_suit_and_level_to_id_map,
              v14);
      if ( !v15.second )
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
          "./src/txt_data_manual/CodexExcelConfig.cpp",
          "rewriteReliquaryConfig",
          329);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v16, (const char (*)[21])byte_1AC5B9C0);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &conf->suit_id);
        v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v18, (const char (*)[17])byte_1AC5BA00);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &conf->level);
        v21 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v20, (const char (*)[32])byte_1AC5B300);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
        v23 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v22, (const char (*)[4])off_1AC5B7C0);
        v24 = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::operator[](
                &this->reliquary_suit_and_level_to_id_map,
                (const std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::key_type *)(v2 + 128));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, v24);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryCodexExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryCodexExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v31 == (char *)v2 )
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

// Line 337: range 0000000013A4CA1E-0000000013A4CA30
int32_t __cdecl CodexExcelConfigMgr::checkReliquaryConfig(
        CodexExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 342: range 0000000013A4CA32-0000000013A4CEFD
int32_t __cdecl CodexExcelConfigMgr::rewriteAnimalConfig(CodexExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *v5; // r8
  bool *p_is_disuse; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<unsigned int,unsigned int> > > *p_disused_codex_set; // rcx
  char v10; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v18; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-114h]
  data::AnimalCodexExcelConfigMap *__for_range; // [rsp+20h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-108h]
  const unsigned int *id; // [rsp+30h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,data::AnimalCodexExcelConfig> >::type *conf; // [rsp+38h] [rbp-F8h]
  char v25[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 9 <unknown> 64 8 15 __for_begin:344 96 8 13 __for_end:344 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::rewriteAnimalConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  ret = 0;
  __for_range = &this->animal_codex_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AnimalCodexExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AnimalCodexExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AnimalCodexExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AnimalCodexExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false> *)(v2 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::AnimalCodexExcelConfig>(__in);
    conf = std::get<1ul,unsigned int const,data::AnimalCodexExcelConfig>(__in);
    p_is_disuse = &conf->is_disuse;
    v7 = ((_BYTE)conf + 28) & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(p_is_disuse, v7, v8);
    if ( conf->is_disuse )
    {
      p_disused_codex_set = &this->disused_codex_set;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v10 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v7) = v10 != 0;
        __asan_report_store4(v2 + 48, v7);
      }
      *(_DWORD *)(v2 + 48) = 3;
      std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::emplace<proto::CodexType,unsigned int const&>(
        p_disused_codex_set,
        (proto::CodexType *)(v2 + 48),
        id,
        (proto::CodexType *)p_disused_codex_set,
        v5);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    }
    else
    {
      v11 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
              &this->animal_to_id_map,
              &conf->describe_id,
              id,
              (unsigned int *)&this->animal_to_id_map,
              v5);
      if ( !v11.second )
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
          "./src/txt_data_manual/CodexExcelConfig.cpp",
          "rewriteAnimalConfig",
          353);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 128),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])"DescribeID:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &conf->describe_id);
        v15 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v14, (const char (*)[33])byte_1AC5BB20);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
        v17 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v16, (const char (*)[4])off_1AC5B7C0);
        v18 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->animal_to_id_map, &conf->describe_id);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, v18);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
        *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v25 == (char *)v2 )
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

// Line 361: range 0000000013A4CEFE-0000000013A4D76F
int32_t __cdecl CodexExcelConfigMgr::checkAnimalConfig(
        CodexExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool *p_is_disuse; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  MonsterExcelConfigMgr *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-164h]
  data::AnimalCodexExcelConfigMap *__for_range; // [rsp+20h] [rbp-160h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-158h]
  const unsigned int *id; // [rsp+30h] [rbp-150h]
  std::tuple_element<1,std::pair<unsigned int const,data::AnimalCodexExcelConfig> >::type *conf; // [rsp+38h] [rbp-148h]
  char v33[320]; // [rsp+40h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:363 64 8 13 __for_end:363 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::checkAnimalConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->animal_codex_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AnimalCodexExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::AnimalCodexExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AnimalCodexExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AnimalCodexExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::AnimalCodexExcelConfig>(__in);
    conf = std::get<1ul,unsigned int const,data::AnimalCodexExcelConfig>(__in);
    p_is_disuse = &conf->is_disuse;
    v6 = ((_BYTE)conf + 28) & 7;
    v7 = (*(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_load1(p_is_disuse, v6, v7);
    if ( !conf->is_disuse )
    {
      if ( *(_BYTE *)(((unsigned __int64)&conf->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)conf + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&conf->type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&conf->type);
      }
      if ( conf->type )
      {
        if ( *(_BYTE *)(((unsigned __int64)&conf->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)conf + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&conf->type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&conf->type);
        }
        if ( conf->type == CODEX_MONSTER )
        {
          p_monster_config_mgr = &txt_config_mgr->monster_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&conf->describe_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&conf->describe_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&conf->describe_id);
          }
          if ( !data::MonsterExcelConfigMgrBase::findMonsterDescribeExcelConfig(p_monster_config_mgr, conf->describe_id) )
          {
            ret = -1;
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
              "./src/txt_data_manual/CodexExcelConfig.cpp",
              "checkAnimalConfig",
              382);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 160),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])"invalid ");
            v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v17,
                    (const char (*)[17])"conf.describe_id");
            v19 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])":");
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &conf->describe_id);
            v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" codex_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
            *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        else
        {
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
            "./src/txt_data_manual/CodexExcelConfig.cpp",
            "checkAnimalConfig",
            388);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v22,
                  (const char (*)[18])"conf.describe_id:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &conf->describe_id);
          v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v24, (const char (*)[14])byte_1AC5BCC0);
          common::milog::MiLogStream::operator<<<data::AnimalCodexType,(data::AnimalCodexType*)0>(v25, &conf->type);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
      {
        v8 = &txt_config_mgr->monster_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&conf->describe_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&conf->describe_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&conf->describe_id);
        }
        if ( !data::MonsterExcelConfigMgrBase::findAnimalDescribeExcelConfig(v8, conf->describe_id) )
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
            "./src/txt_data_manual/CodexExcelConfig.cpp",
            "checkAnimalConfig",
            374);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 96),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])"invalid ");
          v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v10,
                  (const char (*)[17])"conf.describe_id");
          v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])":");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &conf->describe_id);
          v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" codex_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
          *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v33 == (char *)v2 )
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

// Line 396: range 0000000013A4D770-0000000013A4DC36
int32_t __cdecl CodexExcelConfigMgr::rewriteMaterialConfig(
        CodexExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  const unsigned int *v6; // r8
  std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<unsigned int,unsigned int> > > *p_disused_codex_set; // rcx
  char v8; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v16; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-114h]
  data::MaterialCodexExcelConfigMap *__for_range; // [rsp+20h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-108h]
  const unsigned int *id; // [rsp+30h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,data::MaterialCodexExcelConfig> >::type *conf; // [rsp+38h] [rbp-F8h]
  char v23[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 9 <unknown> 64 8 15 __for_begin:398 96 8 13 __for_end:398 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::rewriteMaterialConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  ret = 0;
  __for_range = &this->material_codex_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MaterialCodexExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MaterialCodexExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MaterialCodexExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MaterialCodexExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false> *)(v2 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::MaterialCodexExcelConfig>(__in);
    conf = std::get<1ul,unsigned int const,data::MaterialCodexExcelConfig>(__in);
    if ( *(char *)(((unsigned __int64)&conf->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&conf->is_disuse, v5, &conf->is_disuse);
    if ( conf->is_disuse )
    {
      p_disused_codex_set = &this->disused_codex_set;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v8 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v2 + 48, v5);
      }
      *(_DWORD *)(v2 + 48) = 4;
      std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::emplace<proto::CodexType,unsigned int const&>(
        p_disused_codex_set,
        (proto::CodexType *)(v2 + 48),
        id,
        (proto::CodexType *)p_disused_codex_set,
        v6);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    }
    else
    {
      v9 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
             &this->material_to_id_map,
             &conf->material_id,
             id,
             (unsigned int *)&this->material_to_id_map,
             v6);
      if ( !v9.second )
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
          "./src/txt_data_manual/CodexExcelConfig.cpp",
          "rewriteMaterialConfig",
          407);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 128),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])byte_1AC5BDA0);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &conf->material_id);
        v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v12, (const char (*)[31])byte_1AC5BDE0);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
        v15 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v14, (const char (*)[4])off_1AC5B7C0);
        v16 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->material_to_id_map, &conf->material_id);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, v16);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
        *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v23 == (char *)v2 )
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

// Line 416: range 0000000013A4DC38-0000000013A4E26D
int32_t __cdecl CodexExcelConfigMgr::checkMaterialConfig(
        CodexExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v11; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  data::MaterialCodexExcelConfigMap *__for_range; // [rsp+20h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-128h]
  const unsigned int *id; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,data::MaterialCodexExcelConfig> >::type *conf; // [rsp+38h] [rbp-118h]
  char v25[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:418 64 8 13 __for_end:418 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::checkMaterialConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->material_codex_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MaterialCodexExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::MaterialCodexExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MaterialCodexExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MaterialCodexExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::MaterialCodexExcelConfig>(__in);
    conf = std::get<1ul,unsigned int const,data::MaterialCodexExcelConfig>(__in);
    if ( *(char *)(((unsigned __int64)&conf->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&conf->is_disuse, v2 + 64, &conf->is_disuse);
    if ( !conf->is_disuse )
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
             &this->books_to_id_map,
             &conf->material_id) )
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
          "./src/txt_data_manual/CodexExcelConfig.cpp",
          "checkMaterialConfig",
          426);
        v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v5, (const char (*)[12])byte_1AC5BDA0);
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &conf->material_id);
        v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v7, (const char (*)[31])byte_1AC5BEC0);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
        v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v9, (const char (*)[19])byte_1AC5BF00);
        v11 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->books_to_id_map, &conf->material_id);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, v11);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
        *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        p_material_config_mgr = &txt_config_mgr->material_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&conf->material_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&conf->material_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&conf->material_id);
        }
        if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, conf->material_id) )
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
            "./src/txt_data_manual/CodexExcelConfig.cpp",
            "checkMaterialConfig",
            433);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 160),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])"invalid ");
          v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v14,
                  (const char (*)[17])"conf.material_id");
          v16 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v15, (const char (*)[2])":");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &conf->material_id);
          v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" codex_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
          *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v25 == (char *)v2 )
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

// Line 441: range 0000000013A4E26E-0000000013A4E739
int32_t __cdecl CodexExcelConfigMgr::rewriteBooksConfig(CodexExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *v5; // r8
  bool *p_is_disuse; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<unsigned int,unsigned int> > > *p_disused_codex_set; // rcx
  char v10; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v18; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-114h]
  data::BooksCodexExcelConfigMap *__for_range; // [rsp+20h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-108h]
  const unsigned int *id; // [rsp+30h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,data::BooksCodexExcelConfig> >::type *conf; // [rsp+38h] [rbp-F8h]
  char v25[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 9 <unknown> 64 8 15 __for_begin:443 96 8 13 __for_end:443 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::rewriteBooksConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  ret = 0;
  __for_range = &this->books_codex_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BooksCodexExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BooksCodexExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BooksCodexExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::BooksCodexExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false> *)(v2 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::BooksCodexExcelConfig>(__in);
    conf = std::get<1ul,unsigned int const,data::BooksCodexExcelConfig>(__in);
    p_is_disuse = &conf->is_disuse;
    v7 = ((_BYTE)conf + 20) & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(p_is_disuse, v7, v8);
    if ( conf->is_disuse )
    {
      p_disused_codex_set = &this->disused_codex_set;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v10 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v7) = v10 != 0;
        __asan_report_store4(v2 + 48, v7);
      }
      *(_DWORD *)(v2 + 48) = 5;
      std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::emplace<proto::CodexType,unsigned int const&>(
        p_disused_codex_set,
        (proto::CodexType *)(v2 + 48),
        id,
        (proto::CodexType *)p_disused_codex_set,
        v5);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    }
    else
    {
      v11 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
              &this->books_to_id_map,
              &conf->material_id,
              id,
              (unsigned int *)&this->books_to_id_map,
              v5);
      if ( !v11.second )
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
          "./src/txt_data_manual/CodexExcelConfig.cpp",
          "rewriteBooksConfig",
          452);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 128),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])byte_1AC5BDA0);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &conf->material_id);
        v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v14, (const char (*)[31])byte_1AC5BDE0);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
        v17 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v16, (const char (*)[4])off_1AC5B7C0);
        v18 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->books_to_id_map, &conf->material_id);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, v18);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
        *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v25 == (char *)v2 )
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

// Line 460: range 0000000013A4E73A-0000000013A4F0B5
int32_t __cdecl CodexExcelConfigMgr::checkBooksConfig(
        CodexExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool *p_is_disuse; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v14; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  __int64 material_id; // rsi
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+10h] [rbp-1D0h]
  uint32_t unlock_codex_op_count; // [rsp+14h] [rbp-1CCh]
  data::BooksCodexExcelConfigMap *__for_range; // [rsp+18h] [rbp-1C8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false,false>::reference v32; // [rsp+20h] [rbp-1C0h]
  std::tuple_element<0,std::pair<unsigned int const,data::BooksCodexExcelConfig> >::type *codex_id; // [rsp+28h] [rbp-1B8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BooksCodexExcelConfig> >::type *config; // [rsp+30h] [rbp-1B0h]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+38h] [rbp-1A8h]
  const std::vector<data::ItemUseConfig> *__for_range_0; // [rsp+40h] [rbp-1A0h]
  const data::ItemUseConfig *item_use_config; // [rsp+48h] [rbp-198h]
  char v38[400]; // [rsp+50h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 15 __for_begin:462 64 8 13 __for_end:462 96 8 15 __for_begin:482 128 8 13 __for_end:482 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::checkBooksConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  ret = 0;
  __for_range = &this->books_codex_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BooksCodexExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::BooksCodexExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BooksCodexExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BooksCodexExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false> *)(v2 + 64)) )
  {
    v32 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false,false> *const)(v2 + 32));
    codex_id = std::get<0ul,unsigned int const,data::BooksCodexExcelConfig>(v32);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BooksCodexExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BooksCodexExcelConfig>(v32);
    p_is_disuse = &config->is_disuse;
    v6 = ((_BYTE)config + 20) & 7;
    v7 = (*(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_load1(p_is_disuse, v6, v7);
    if ( !config->is_disuse )
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
             &this->material_to_id_map,
             &config->material_id) )
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
          "./src/txt_data_manual/CodexExcelConfig.cpp",
          "checkBooksConfig",
          470);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])byte_1AC5BDA0);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->material_id);
        v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v10, (const char (*)[31])byte_1AC5BEC0);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, codex_id);
        v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v12, (const char (*)[19])byte_1AC5BF00);
        v14 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->material_to_id_map, &config->material_id);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, v14);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        p_material_config_mgr = &txt_config_mgr->material_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config->material_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->material_id >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->material_id);
        }
        material_id = config->material_id;
        material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                                p_material_config_mgr,
                                material_id);
        if ( material_config_ptr )
        {
          unlock_codex_op_count = 0;
          __for_range_0 = &material_config_ptr->item_use;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 96, material_id);
          *(std::vector<data::ItemUseConfig>::const_iterator *)(v2 + 96) = std::vector<data::ItemUseConfig>::begin(__for_range_0);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 128, material_id);
          *(std::vector<data::ItemUseConfig>::const_iterator *)(v2 + 128) = std::vector<data::ItemUseConfig>::end(__for_range_0);
          while ( __gnu_cxx::operator!=<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>(
                    (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v2 + 96),
                    (const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *)(v2 + 128)) )
          {
            item_use_config = __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v2 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&item_use_config->use_op >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&item_use_config->use_op >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&item_use_config->use_op);
            }
            if ( item_use_config->use_op == ITEM_USE_UNLOCK_CODEX )
              ++unlock_codex_op_count;
            __gnu_cxx::__normal_iterator<data::ItemUseConfig const*,std::vector<data::ItemUseConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ItemUseConfig*,std::vector<data::ItemUseConfig> > *const)(v2 + 96));
          }
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          if ( !unlock_codex_op_count )
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
              "./src/txt_data_manual/CodexExcelConfig.cpp",
              "checkBooksConfig",
              492);
            v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 288),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v23 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v22,
                    (const char (*)[18])byte_1AC5C100);
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, codex_id);
            v25 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v24,
                    (const char (*)[22])byte_1AC5C140);
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &config->material_id);
            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v26, (const char (*)[35])byte_1AC5C1E0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
            *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
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
            "./src/txt_data_manual/CodexExcelConfig.cpp",
            "checkBooksConfig",
            477);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v17, (const char (*)[18])byte_1AC5C100);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, codex_id);
          v20 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v19, (const char (*)[22])byte_1AC5C140);
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &config->material_id);
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v21, (const char (*)[34])byte_1AC5C180);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v38 == (char *)v2 )
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

// Line 502: range 0000000013A4F0B6-0000000013A4F581
int32_t __cdecl CodexExcelConfigMgr::rewritePushTipsConfig(
        CodexExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *v5; // r8
  bool *p_is_disuse; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<unsigned int,unsigned int> > > *p_disused_codex_set; // rcx
  char v10; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v18; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-114h]
  data::PushTipsCodexExcelConfigMap *__for_range; // [rsp+20h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-108h]
  const unsigned int *id; // [rsp+30h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,data::PushTipsCodexExcelConfig> >::type *conf; // [rsp+38h] [rbp-F8h]
  char v25[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 9 <unknown> 64 8 15 __for_begin:504 96 8 13 __for_end:504 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::rewritePushTipsConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  ret = 0;
  __for_range = &this->push_tips_codex_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false> *)(v2 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::PushTipsCodexExcelConfig>(__in);
    conf = std::get<1ul,unsigned int const,data::PushTipsCodexExcelConfig>(__in);
    p_is_disuse = &conf->is_disuse;
    v7 = ((_BYTE)conf + 20) & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(p_is_disuse, v7, v8);
    if ( conf->is_disuse )
    {
      p_disused_codex_set = &this->disused_codex_set;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v10 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v7) = v10 != 0;
        __asan_report_store4(v2 + 48, v7);
      }
      *(_DWORD *)(v2 + 48) = 6;
      std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::emplace<proto::CodexType,unsigned int const&>(
        p_disused_codex_set,
        (proto::CodexType *)(v2 + 48),
        id,
        (proto::CodexType *)p_disused_codex_set,
        v5);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    }
    else
    {
      v11 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
              &this->push_tips_to_id_map,
              &conf->push_tip_id,
              id,
              (unsigned int *)&this->push_tips_to_id_map,
              v5);
      if ( !v11.second )
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
          "./src/txt_data_manual/CodexExcelConfig.cpp",
          "rewritePushTipsConfig",
          513);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 128),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])"PushTipsID:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &conf->push_tip_id);
        v15 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v14, (const char (*)[35])byte_1AC5C320);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
        v17 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v16, (const char (*)[4])off_1AC5B7C0);
        v18 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->push_tips_to_id_map, &conf->push_tip_id);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, v18);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
        *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v25 == (char *)v2 )
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

// Line 521: range 0000000013A4F582-0000000013A4FBE1
int32_t __cdecl CodexExcelConfigMgr::checkPushTipsConfig(
        CodexExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool *p_is_disuse; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-12Ch]
  data::PushTipsCodexExcelConfigMap *__for_range; // [rsp+18h] [rbp-128h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-120h]
  const unsigned int *id; // [rsp+28h] [rbp-118h]
  std::tuple_element<1,std::pair<unsigned int const,data::PushTipsCodexExcelConfig> >::type *conf; // [rsp+30h] [rbp-110h]
  const data::PushTipsConfig *pushtips_config_ptr; // [rsp+38h] [rbp-108h]
  char v26[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:523 64 8 13 __for_end:523 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::checkPushTipsConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->push_tips_codex_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::PushTipsCodexExcelConfig>(__in);
    conf = std::get<1ul,unsigned int const,data::PushTipsCodexExcelConfig>(__in);
    p_is_disuse = &conf->is_disuse;
    v6 = ((_BYTE)conf + 20) & 7;
    v7 = (*(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_load1(p_is_disuse, v6, v7);
    if ( !conf->is_disuse )
    {
      p_watcher_config_mgr = &txt_config_mgr->watcher_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&conf->push_tip_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)conf + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&conf->push_tip_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&conf->push_tip_id);
      }
      pushtips_config_ptr = data::WatcherExcelConfigMgrBase::findPushTipsConfig(p_watcher_config_mgr, conf->push_tip_id);
      if ( pushtips_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&pushtips_config_ptr->watcher_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pushtips_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pushtips_config_ptr->watcher_id >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&pushtips_config_ptr->watcher_id);
        }
        if ( !pushtips_config_ptr->watcher_id )
          goto LABEL_25;
        if ( *(_BYTE *)(((unsigned __int64)&pushtips_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&pushtips_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&pushtips_config_ptr->reward_id);
        }
        if ( !pushtips_config_ptr->reward_id )
        {
LABEL_25:
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
            "./src/txt_data_manual/CodexExcelConfig.cpp",
            "checkPushTipsConfig",
            538);
          v15 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                  (common::milog::MiLogStream *const)(v2 + 160),
                  (const char (*)[78])byte_1AC5C460);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v16,
                  (const char (*)[16])", pushtips_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &conf->push_tip_id);
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
          "./src/txt_data_manual/CodexExcelConfig.cpp",
          "checkPushTipsConfig",
          533);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])"invalid ");
        v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v10,
                (const char (*)[17])"conf.push_tip_id");
        v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])":");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &conf->push_tip_id);
        v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" codex_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
        *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v26 == (char *)v2 )
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

// Line 546: range 0000000013A4FBE2-0000000013A50200
int32_t __cdecl CodexExcelConfigMgr::rewriteViewConfig(CodexExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *v5; // r8
  unsigned int *v6; // r9
  bool *p_is_disuse; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<unsigned int,unsigned int> > > *p_disused_codex_set; // rcx
  char v11; // al
  unsigned int *p_config_id; // r8
  unsigned int *p_group_id; // rdi
  __int64 p_scene_id; // rsi
  char v15; // dl
  const unsigned int *v16; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int>,false,true>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int> > >::mapped_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  data::ViewCodexExcelConfigMap *__for_range; // [rsp+20h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-128h]
  const unsigned int *id; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,data::ViewCodexExcelConfig> >::type *conf; // [rsp+38h] [rbp-118h]
  char v37[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 9 <unknown> 64 8 15 __for_begin:548 96 8 13 __for_end:548 128 12 9 index:555 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::rewriteViewConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219020288;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->view_codex_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ViewCodexExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ViewCodexExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ViewCodexExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ViewCodexExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false> *)(v2 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::ViewCodexExcelConfig>(__in);
    conf = std::get<1ul,unsigned int const,data::ViewCodexExcelConfig>(__in);
    p_is_disuse = &conf->is_disuse;
    v8 = ((_BYTE)conf - 116) & 7;
    v9 = (*(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_load1(p_is_disuse, v8, v9);
    if ( conf->is_disuse )
    {
      p_disused_codex_set = &this->disused_codex_set;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v11 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v8) = v11 != 0;
        __asan_report_store4(v2 + 48, v8);
      }
      *(_DWORD *)(v2 + 48) = 7;
      std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::emplace<proto::CodexType,unsigned int const&>(
        p_disused_codex_set,
        (proto::CodexType *)(v2 + 48),
        id,
        (proto::CodexType *)p_disused_codex_set,
        v5);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    }
    else
    {
      *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1024;
      p_config_id = &conf->config_id;
      p_group_id = &conf->group_id;
      p_scene_id = (__int64)&conf->scene_id;
      v15 = *(_BYTE *)(((v2 + 139) >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v15 != 0;
      if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0 || v15 != 0 && (char)((v2 - 117) & 7) >= v15 )
      {
        p_scene_id = 12LL;
        p_group_id = (unsigned int *)(v2 + 128);
        __asan_report_store_n(v2 + 128, 12LL);
      }
      std::make_tuple<unsigned int &,unsigned int &,unsigned int &>(
        (unsigned int *)(v2 + 128),
        (unsigned int *)p_scene_id,
        p_group_id,
        p_config_id,
        p_config_id,
        v6);
      v17 = std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,unsigned int>>>::emplace<std::tuple<unsigned int,unsigned int,unsigned int>&,unsigned int const&>(
              &this->view_to_id_map,
              (std::tuple<unsigned int,unsigned int,unsigned int> *)(v2 + 128),
              id,
              (std::tuple<unsigned int,unsigned int,unsigned int> *)&this->view_to_id_map,
              v16);
      if ( !v17.second )
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
          "./src/txt_data_manual/CodexExcelConfig.cpp",
          "rewriteViewConfig",
          558);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])"scene_id:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &conf->scene_id);
        v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" group_id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &conf->group_id);
        v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])" config_id:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &conf->config_id);
        v25 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v24, (const char (*)[23])byte_1AC5C6A0);
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &conf->id);
        v27 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v26, (const char (*)[4])off_1AC5B7C0);
        v28 = std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,unsigned int>>>::operator[](
                &this->view_to_id_map,
                (const std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int> > >::key_type *)(v2 + 128));
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, v28);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v29, (const char (*)[7])byte_1AC5C6E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -1800;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v37 == (char *)v2 )
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

// Line 566: range 0000000013A50202-0000000013A50695
int32_t __cdecl CodexExcelConfigMgr::checkViewConfig(
        CodexExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool *p_is_disuse; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-ECh]
  data::ViewCodexExcelConfigMap *__for_range; // [rsp+18h] [rbp-E8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-E0h]
  const unsigned int *id; // [rsp+28h] [rbp-D8h]
  std::tuple_element<1,std::pair<unsigned int const,data::ViewCodexExcelConfig> >::type *conf; // [rsp+30h] [rbp-D0h]
  const data::GadgetExcelConfig *gadget_conf_ptr; // [rsp+38h] [rbp-C8h]
  char v23[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:568 64 8 13 __for_end:568 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::checkViewConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->view_codex_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ViewCodexExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ViewCodexExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ViewCodexExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ViewCodexExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::ViewCodexExcelConfig>(__in);
    conf = std::get<1ul,unsigned int const,data::ViewCodexExcelConfig>(__in);
    p_is_disuse = &conf->is_disuse;
    v6 = ((_BYTE)conf - 116) & 7;
    v7 = (*(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)p_is_disuse >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_load1(p_is_disuse, v6, v7);
    if ( !conf->is_disuse )
    {
      p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&conf->gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)conf + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&conf->gadget_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&conf->gadget_id);
      }
      gadget_conf_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, conf->gadget_id);
      if ( !gadget_conf_ptr )
        goto LABEL_19;
      if ( *(_BYTE *)(((unsigned __int64)&gadget_conf_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gadget_conf_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_conf_ptr->type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&gadget_conf_ptr->type);
      }
      if ( gadget_conf_ptr->type != ViewPoint )
      {
LABEL_19:
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
          "./src/txt_data_manual/CodexExcelConfig.cpp",
          "checkViewConfig",
          578);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])"invalid ");
        v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])"conf.gadget_id");
        v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])":");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &conf->gadget_id);
        v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" codex_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
        *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v23 == (char *)v2 )
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

// Line 586: range 0000000013A50696-0000000013A50D43
int32_t __cdecl CodexExcelConfigMgr::rewritePushtipsGroupConfig(
        CodexExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_push_tip_id; // rax
  __int64 v6; // rsi
  uint32_t push_tip_id; // ecx
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t group_id; // r14d
  std::tuple_element<0,std::pair<unsigned int const,data::PushTipsCodexExcelConfig> >::type *v13; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v14; // rax
  uint32_t *v15; // rdx
  char v16; // cl
  std::set<unsigned int> *v17; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-15Ch]
  data::PushTipsCodexExcelConfigMap *__for_range; // [rsp+18h] [rbp-158h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false>::reference v27; // [rsp+20h] [rbp-150h]
  std::tuple_element<0,std::pair<unsigned int const,data::PushTipsCodexExcelConfig> >::type *codex_id; // [rsp+28h] [rbp-148h]
  std::tuple_element<1,const std::pair<unsigned int const,data::PushTipsCodexExcelConfig> >::type *codex_config; // [rsp+30h] [rbp-140h]
  data::PushTipsConfig *pushtip_config_ptr; // [rsp+38h] [rbp-138h]
  char v31[304]; // [rsp+40h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 15 push_tip_id:590 64 8 15 __for_begin:588 96 8 13 __for_end:588 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CodexExcelConfigMgr::rewritePushtipsGroupConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->push_tips_codex_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false> *)(v2 + 96)) )
  {
    v27 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false> *const)(v2 + 64));
    codex_id = std::get<0ul,unsigned int const,data::PushTipsCodexExcelConfig>(v27);
    codex_config = (std::tuple_element<1,const std::pair<unsigned int const,data::PushTipsCodexExcelConfig> >::type *)std::get<1ul,unsigned int const,data::PushTipsCodexExcelConfig>(v27);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    p_push_tip_id = &codex_config->push_tip_id;
    v6 = (((_BYTE)codex_config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_push_tip_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)codex_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_push_tip_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_push_tip_id);
    }
    push_tip_id = codex_config->push_tip_id;
    v8 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(v2 + 48, v6);
    }
    *(_DWORD *)(v2 + 48) = push_tip_id;
    pushtip_config_ptr = data::WatcherExcelConfigMgrBase::findPushTipsConfig(
                           &txt_config_mgr->watcher_config_mgr,
                           *(unsigned int *)(v2 + 48));
    if ( pushtip_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&pushtip_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pushtip_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pushtip_config_ptr->group_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&pushtip_config_ptr->group_id);
      }
      if ( pushtip_config_ptr->group_id )
      {
        group_id = pushtip_config_ptr->group_id;
        v13 = codex_id;
        v14 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->pushtips_codex_id_to_group_map, codex_id);
        v15 = v14;
        v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
        if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
        {
          LOBYTE(v13) = v16 != 0;
          __asan_report_store4(v14, v13);
        }
        *v15 = group_id;
        v17 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                &this->group_id_to_pushtips_codex_set_map,
                &pushtip_config_ptr->group_id);
        v18 = std::set<unsigned int>::insert(v17, codex_id);
        if ( !v18.second )
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
            "./src/txt_data_manual/CodexExcelConfig.cpp",
            "rewritePushtipsGroupConfig",
            604);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 192),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v20 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v19,
                  (const char (*)[21])"duplicate codex_id: ");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, codex_id);
          v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v21,
                  (const char (*)[15])" in group_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &pushtip_config_ptr->group_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
          *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
    }
    else
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
        "./src/txt_data_manual/CodexExcelConfig.cpp",
        "rewritePushtipsGroupConfig",
        595);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v9,
              (const char (*)[26])"cannot find pushtips id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v11, (const char (*)[23])" in watcher_config_mgr");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v31 == (char *)v2 )
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
