// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GCGGameExcelConfig.cpp

// Line 18: range 0000000014409E4C-000000001440A53C
int32_t __cdecl GCGGameExcelConfigMgr::rewriteConfig(GCGGameExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)GCGGameExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  if ( GCGGameExcelConfigMgr::rewriteCardConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "rewriteConfig",
      19);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v5, (const char (*)[26])"rewriteCardConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( GCGGameExcelConfigMgr::rewriteSkillConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "rewriteConfig",
      20);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v7,
      (const char (*)[27])"rewriteSkillConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( GCGGameExcelConfigMgr::rewriteChooseTargetConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "rewriteConfig",
      21);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v8,
      (const char (*)[34])"rewriteChooseTargetConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( GCGGameExcelConfigMgr::rewriteDeckConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "rewriteConfig",
      22);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v9, (const char (*)[26])"rewriteDeckConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( GCGGameExcelConfigMgr::rewriteGameConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "rewriteConfig",
      23);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      v10,
      (const char (*)[26])"rewriteGameConfig failed.");
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

// Line 28: range 000000001440A53E-000000001440B4CB
int32_t __cdecl GCGGameExcelConfigMgr::checkConfig(
        GCGGameExcelConfigMgr *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)GCGGameExcelConfigMgr::checkConfig;
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
  if ( GCGGameExcelConfigMgr::checkGameConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "checkConfig",
      29);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v5, (const char (*)[24])"checkGameConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( GCGGameExcelConfigMgr::checkDeckConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "checkConfig",
      30);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v7, (const char (*)[24])"checkDeckConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( GCGGameExcelConfigMgr::checkRuleConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "checkConfig",
      31);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v8, (const char (*)[24])"checkRuleConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( GCGGameExcelConfigMgr::checkElementReactionConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "checkConfig",
      32);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v9,
      (const char (*)[35])"checkElementReactionConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( GCGGameExcelConfigMgr::checkCardConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "checkConfig",
      33);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v10, (const char (*)[24])"checkCardConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( GCGGameExcelConfigMgr::checkCharConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "checkConfig",
      34);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v11, (const char (*)[24])"checkCharConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else if ( GCGGameExcelConfigMgr::checkSkillConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "checkConfig",
      35);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v12, (const char (*)[25])"checkSkillConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    result = -1;
  }
  else if ( GCGGameExcelConfigMgr::checkChooseConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "checkConfig",
      36);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 15,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      v13,
      (const char (*)[26])"checkChooseConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 15);
    result = -1;
  }
  else if ( GCGGameExcelConfigMgr::checkTagConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "checkConfig",
      37);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 17,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v14, (const char (*)[23])"checkTagConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 17);
    result = -1;
  }
  else if ( GCGGameExcelConfigMgr::checkBlockAICardConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "checkConfig",
      38);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 19,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v15,
      (const char (*)[31])"checkBlockAICardConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 19);
    result = -1;
  }
  else if ( GCGGameExcelConfigMgr::checkAdvantureRuleConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "checkConfig",
      39);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 21,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v16,
      (const char (*)[33])"checkAdvantureRuleConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 21);
    result = -1;
  }
  else if ( GCGGameExcelConfigMgr::checkCardViewConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "checkConfig",
      40);
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 23,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v17,
      (const char (*)[28])"checkCardViewConfig failed.");
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

// Line 45: range 000000001440B4CC-000000001440B68D
const data::GCGCardConfig *__fastcall GCGGameExcelConfigMgr::findCardConfig(
        const GCGGameExcelConfigMgr *const this,
        __int64 card_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::GCGCardConfig> *p_card_config_map; // rdx
  std::unordered_map<unsigned int,data::GCGCardConfig> *v6; // rdx
  bool v7; // al
  const data::GCGCardConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 10 card_id:44 64 8 7 iter:46 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::findCardConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = card_id;
  p_card_config_map = &this->card_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, card_id);
  *(std::unordered_map<unsigned int,data::GCGCardConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGCardConfig>::find(
                                                                                         p_card_config_map,
                                                                                         (const std::unordered_map<unsigned int,data::GCGCardConfig>::key_type *)(v2 + 48));
  v6 = &this->card_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::GCGCardConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGCardConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::GCGCardConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 55: range 000000001440B68E-000000001440B8FF
std::vector<data::GCGCost> *__fastcall GCGGameExcelConfigMgr::getCardCostVec(
        std::vector<data::GCGCost> *retstr,
        const GCGGameExcelConfigMgr *const this,
        uint32_t card_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  data::GCGCardExcelConfigMap *p_gcg_card_excel_config_map; // rdx
  data::GCGCardExcelConfigMap *v7; // rdx
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardExcelConfig>,false,false>::pointer v9; // rax
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 10 card_id:54 64 8 7 iter:56 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GCGGameExcelConfigMgr::getCardCostVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = card_id;
  p_gcg_card_excel_config_map = &this->gcg_card_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,data::GCGCardExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GCGCardExcelConfig>::find(
                                                                                              p_gcg_card_excel_config_map,
                                                                                              (const std::unordered_map<unsigned int,data::GCGCardExcelConfig>::key_type *)(v3 + 48));
  v7 = &this->gcg_card_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::GCGCardExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::GCGCardExcelConfig>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,data::GCGCardExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardExcelConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardExcelConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
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
    std::vector<data::GCGCost>::vector(retstr);
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardExcelConfig>,false,false> *const)(v3 + 64));
    std::vector<data::GCGCost>::vector(retstr, &v9->second.cost_list);
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
  return retstr;
};

// Line 65: range 000000001440B900-000000001440BB6E
std::vector<data::GCGCost> *__fastcall GCGGameExcelConfigMgr::getSkillCostVec(
        std::vector<data::GCGCost> *retstr,
        const GCGGameExcelConfigMgr *const this,
        uint32_t skill_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  data::GCGSkillExcelConfigMap *p_gcg_skill_excel_config_map; // rdx
  data::GCGSkillExcelConfigMap *v7; // rdx
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false,false>::pointer v9; // rax
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 skill_id:64 64 8 7 iter:66 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GCGGameExcelConfigMgr::getSkillCostVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = skill_id;
  p_gcg_skill_excel_config_map = &this->gcg_skill_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,data::GCGSkillExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GCGSkillExcelConfig>::find(
                                                                                               p_gcg_skill_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::GCGSkillExcelConfig>::key_type *)(v3 + 48));
  v7 = &this->gcg_skill_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::GCGSkillExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::GCGSkillExcelConfig>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
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
    std::vector<data::GCGCost>::vector(retstr);
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false,false> *const)(v3 + 64));
    std::vector<data::GCGCost>::vector(retstr, &v9->second.cost_list);
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
  return retstr;
};

// Line 75: range 000000001440BB70-000000001440BF1B
std::vector<data::GCGChooseExcelConfig> *__fastcall GCGGameExcelConfigMgr::getCardChooseVec(
        std::vector<data::GCGChooseExcelConfig> *retstr,
        const GCGGameExcelConfigMgr *const this,
        uint32_t card_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::GCGCardExcelConfigMap *p_gcg_card_excel_config_map; // rdx
  data::GCGCardExcelConfigMap *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  unsigned int *v11; // rdx
  std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-F0h]
  const std::vector<data::GCGChooseExcelConfig>::value_type *choose_config_ptr; // [rsp+38h] [rbp-E8h]
  char v17[224]; // [rsp+40h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 10 card_id:74 64 8 7 iter:77 96 8 9 <unknown> 128 8 14 __for_begin:80 160 8 12 __for_end:80";
  *(_QWORD *)(v3 + 16) = GCGGameExcelConfigMgr::getCardChooseVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 48) = card_id;
  std::vector<data::GCGChooseExcelConfig>::vector(retstr);
  p_gcg_card_excel_config_map = &this->gcg_card_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,data::GCGCardExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GCGCardExcelConfig>::find(
                                                                                              p_gcg_card_excel_config_map,
                                                                                              (const std::unordered_map<unsigned int,data::GCGCardExcelConfig>::key_type *)(v3 + 48));
  v7 = &this->gcg_card_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::GCGCardExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::GCGCardExcelConfig>::end(v7);
  v8 = (char *)(v3 + 96);
  v9 = std::__detail::operator!=<std::pair<unsigned int const,data::GCGCardExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardExcelConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardExcelConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardExcelConfig>,false,false> *const)(v3 + 64))->second.choose_target_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v8);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v11 = (unsigned int *)v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      choose_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGChooseExcelConfig(this, *v11);
      if ( choose_config_ptr )
        std::vector<data::GCGChooseExcelConfig>::push_back(retstr, choose_config_ptr);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
  }
  if ( v17 == (char *)v3 )
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
  return retstr;
};

// Line 93: range 000000001440BF1C-000000001440BF2E
int32_t __cdecl GCGGameExcelConfigMgr::checkTagSet(
        const GCGGameExcelConfigMgr *const this,
        const std::set<data::GCGTagType> *tag_set)
{
  return 0;
};

// Line 99: range 000000001440BF30-000000001440CCB5
int32_t __cdecl GCGGameExcelConfigMgr::checkCostList(
        const GCGGameExcelConfigMgr *const this,
        const std::vector<data::GCGCost> *cost_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  __int64 v11; // rax
  std::set<data::GCGCostType>::size_type v12; // r14
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  bool is_has_exclusive; // [rsp+1Bh] [rbp-2A5h]
  int32_t ret; // [rsp+1Ch] [rbp-2A4h]
  const data::GCGCost *cost; // [rsp+28h] [rbp-298h]
  char v18[656]; // [rsp+30h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 8 15 __for_begin:103 80 8 13 __for_end:103 112 8 9 <unknown> 144 32 9 <unknown> 208 32 9 <"
                        "unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 48 17 c"
                        "ost_type_set:101";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::checkCostList;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862735] = -219021312;
  v4[536862736] = 62194;
  v4[536862738] = -202116109;
  ret = 0;
  std::set<data::GCGCostType>::set((std::set<data::GCGCostType> *const)(v2 + 528));
  is_has_exclusive = 0;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, cost_vec);
  *(std::vector<data::GCGCost>::const_iterator *)(v2 + 48) = std::vector<data::GCGCost>::begin(cost_vec);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, cost_vec);
  *(std::vector<data::GCGCost>::const_iterator *)(v2 + 80) = std::vector<data::GCGCost>::end(cost_vec);
  while ( __gnu_cxx::operator!=<data::GCGCost const*,std::vector<data::GCGCost>>(
            (const __gnu_cxx::__normal_iterator<const data::GCGCost*,std::vector<data::GCGCost> > *)(v2 + 48),
            (const __gnu_cxx::__normal_iterator<const data::GCGCost*,std::vector<data::GCGCost> > *)(v2 + 80)) )
  {
    cost = __gnu_cxx::__normal_iterator<data::GCGCost const*,std::vector<data::GCGCost>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGCost*,std::vector<data::GCGCost> > *const)(v2 + 48));
    std::set<data::GCGCostType>::insert((std::set<data::GCGCostType> *const)(v2 + 528), &cost->cost_type);
    if ( *(_BYTE *)(((unsigned __int64)&cost->cost_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cost->cost_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&cost->cost_type);
    }
    switch ( cost->cost_type )
    {
      case GCG_COST_ENERGY:
      case GCG_COST_DICE_PAIMON:
      case GCG_COST_DICE_VOID:
        goto LABEL_29;
      case GCG_COST_DICE_SAME:
        if ( *(_BYTE *)(((unsigned __int64)&cost->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)cost + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost->count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&cost->count);
        }
        if ( !cost->count )
        {
          *(_DWORD *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 144) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 175) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 175) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 144, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 144),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkCostList",
            112);
          v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 144),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v5, (const char (*)[26])byte_1AD6BFE0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 144));
          *(_DWORD *)(((v2 + 144) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        if ( is_has_exclusive )
        {
          *(_DWORD *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 208) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 239) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 17) & 7) >= *(_BYTE *)(((v2 + 239) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 208, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 208),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkCostList",
            117);
          v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 208),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v6, (const char (*)[39])byte_1AD6C020);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
          *(_DWORD *)(((v2 + 208) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        is_has_exclusive = 1;
        break;
      case GCG_COST_DICE_CRYO:
      case GCG_COST_DICE_HYDRO:
      case GCG_COST_DICE_PYRO:
      case GCG_COST_DICE_ELECTRO:
      case GCG_COST_DICE_GEO:
      case GCG_COST_DICE_DENDRO:
      case GCG_COST_DICE_ANEMO:
        if ( is_has_exclusive )
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkCostList",
            133);
          v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 272),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v7, (const char (*)[46])byte_1AD6C080);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
          *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        is_has_exclusive = 1;
LABEL_29:
        if ( *(_BYTE *)(((unsigned __int64)&cost->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)cost + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost->count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&cost->count);
        }
        if ( !cost->count )
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkCostList",
            145);
          v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 336),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])byte_1AD6C0E0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
          *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        break;
      default:
        *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 400) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 400, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 400),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkCostList",
          153);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 400),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v9, (const char (*)[30])byte_1AD6C120);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&cost->cost_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&cost->cost_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&cost->cost_type);
        }
        v11 = (__int64)data::enumValToStr(cost->cost_type, (__int64)byte_1AD6C120);
        if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
          v11 = __asan_report_store8(v2 + 112, byte_1AD6C120);
        *(_QWORD *)(v2 + 112) = v11;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 112));
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
        *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
        break;
    }
    __gnu_cxx::__normal_iterator<data::GCGCost const*,std::vector<data::GCGCost>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGCost*,std::vector<data::GCGCost> > *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  v12 = std::set<data::GCGCostType>::size((const std::set<data::GCGCostType> *const)(v2 + 528));
  if ( v12 != std::vector<data::GCGCost>::size(cost_vec) )
  {
    *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 464) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 17) & 7) >= *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 464, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 464),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "checkCostList",
      161);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 464),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v13, (const char (*)[32])byte_1AD6C160);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 464));
    *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  std::set<data::GCGCostType>::~set((std::set<data::GCGCostType> *const)(v2 + 528));
  result = ret;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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
  return result;
};

// Line 168: range 000000001440CDAC-000000001440DA6E
int32_t __cdecl GCGGameExcelConfigMgr::rewriteCardConfig(
        GCGGameExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::GCGTokenConfig *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  data::GCGCardConfig *v15; // rax
  uint32_t block_ai_card_id; // r14d
  const std::unordered_map<unsigned int,data::GCGCardConfig>::key_type *v17; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v18; // rax
  uint32_t *v19; // rdx
  char v20; // cl
  unsigned __int64 v21; // rax
  data::GCGTagType *M_current; // r14
  std::vector<data::GCGTagType>::iterator v23; // rax
  std::set<data::GCGTagType> *v24; // rax
  unsigned __int64 v25; // rax
  data::GCGTokenConfig *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rsi
  uint32_t hp; // ecx
  char v33; // dl
  __int64 v34; // rsi
  uint32_t v35; // ecx
  char v36; // dl
  __int64 v37; // rsi
  uint32_t max_energy; // ecx
  char v39; // dl
  unsigned __int64 v40; // rax
  data::GCGTagType *v41; // r14
  std::vector<data::GCGTagType>::iterator v42; // rax
  std::set<data::GCGTagType> *v43; // rax
  unsigned __int64 v44; // rax
  data::GCGCharExcelConfig *v45; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCardConfig>,false,false>,bool> v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rdx
  int v49; // eax
  int32_t result; // eax
  char v51; // [rsp+0h] [rbp-250h]
  char v52; // [rsp+0h] [rbp-250h]
  data::GCGCardExcelConfigMap *__for_range; // [rsp+20h] [rbp-230h]
  data::GCGCharExcelConfigMap *__for_range_0; // [rsp+28h] [rbp-228h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCharExcelConfig>,false,false>::reference v55; // [rsp+30h] [rbp-220h]
  const std::unordered_map<unsigned int,std::set<data::GCGTagType>>::key_type *card_id_0; // [rsp+38h] [rbp-218h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGCharExcelConfig> >::type *config_0; // [rsp+40h] [rbp-210h]
  data::GCGTokenConfig *token_config; // [rsp+48h] [rbp-208h]
  data::GCGTokenConfig *token_config_0; // [rsp+50h] [rbp-200h]
  data::GCGTokenConfig *token_config_1; // [rsp+58h] [rbp-1F8h]
  data::GCGTokenConfig *token_config_2; // [rsp+60h] [rbp-1F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCardExcelConfig>,false,false>::reference __in; // [rsp+68h] [rbp-1E8h]
  const std::unordered_map<unsigned int,data::GCGCardConfig>::key_type *card_id; // [rsp+70h] [rbp-1E0h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGCardExcelConfig> >::type *config; // [rsp+78h] [rbp-1D8h]
  char v65[464]; // [rsp+80h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 9 <unknown> 48 4 9 <unknown> 64 8 15 __for_begin:169 96 8 13 __for_end:169 128 8 15 __for"
                        "_begin:198 160 8 13 __for_end:198 192 32 9 <unknown> 256 48 9 <unknown> 336 48 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GCGGameExcelConfigMgr::rewriteCardConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862732] = -202116109;
  __for_range = &this->gcg_card_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGCardExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GCGCardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGCardExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::GCGCardExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (data::GCGTokenConfig *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GCGCardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardExcelConfig>,false> *)(v3 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCardExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCardExcelConfig>,false,false> *const)(v3 + 64));
    card_id = std::get<0ul,unsigned int const,data::GCGCardExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGCardExcelConfig>(__in);
    common::tools::MiscUtils::erase_if<data::GCGTokenConfig,GCGGameExcelConfigMgr::rewriteCardConfig(TxtConfigMgr &)::{lambda(data::GCGTokenConfig&)#1}>(
      &config->token_list,
      v6,
      v7,
      v8,
      v9,
      v10,
      v51);
    common::tools::MiscUtils::erase_if<data::GCGCost,GCGGameExcelConfigMgr::rewriteCardConfig(TxtConfigMgr &)::{lambda(data::GCGCost&)#2}>(
      &config->cost_list,
      (data::GCGCost *)v6,
      v11,
      v12,
      v13,
      v14,
      v52);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32, v6);
    *(_DWORD *)(v3 + 32) = 0;
    common::tools::MiscUtils::removeValues<std::vector<data::GCGTagType>,data::GCGTagType>(
      &config->tag_list,
      (const data::GCGTagType *)(v3 + 32));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    common::tools::MiscUtils::removeEmptyElement<unsigned int>(&config->choose_target_list);
    v15 = std::unordered_map<unsigned int,data::GCGCardConfig>::operator[](&this->card_config_map_, card_id);
    data::GCGCardConfig::operator=(v15, config);
    if ( *(_BYTE *)(((unsigned __int64)&config->block_ai_card_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->block_ai_card_id >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&config->block_ai_card_id);
    }
    if ( config->block_ai_card_id )
    {
      block_ai_card_id = config->block_ai_card_id;
      v17 = card_id;
      v18 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->card_to_block_ai_card_id_map_, card_id);
      v19 = v18;
      v20 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)(((unsigned __int8)v18 & 7) + 3) >= v20 )
      {
        LOBYTE(v17) = v20 != 0;
        __asan_report_store4(v18, v17);
      }
      *v19 = block_ai_card_id;
    }
    v21 = ((v3 + 256) >> 3) + 2147450880;
    *(_DWORD *)v21 = 0;
    *(_WORD *)(v21 + 4) = 0;
    M_current = std::vector<data::GCGTagType>::begin(&config->tag_list)._M_current;
    v23._M_current = std::vector<data::GCGTagType>::end(&config->tag_list)._M_current;
    std::set<data::GCGTagType>::set<__gnu_cxx::__normal_iterator<data::GCGTagType*,std::vector<data::GCGTagType>>>(
      (std::set<data::GCGTagType> *const)(v3 + 256),
      (__gnu_cxx::__normal_iterator<data::GCGTagType*,std::vector<data::GCGTagType> >)M_current,
      v23);
    v24 = std::unordered_map<unsigned int,std::set<data::GCGTagType>>::operator[](&this->card_tag_set_map_, card_id);
    std::set<data::GCGTagType>::operator=(v24, (std::set<data::GCGTagType> *)(v3 + 256));
    std::set<data::GCGTagType>::~set((std::set<data::GCGTagType> *const)(v3 + 256));
    v25 = ((v3 + 256) >> 3) + 2147450880;
    *(_DWORD *)v25 = -117901064;
    *(_WORD *)(v25 + 4) = -1800;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCardExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCardExcelConfig>,false,false> *const)(v3 + 64));
  }
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->gcg_char_excel_config_map;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v6);
  *(std::unordered_map<unsigned int,data::GCGCharExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::GCGCharExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, v6);
  *(std::unordered_map<unsigned int,data::GCGCharExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::GCGCharExcelConfig>::end(__for_range_0);
  while ( 1 )
  {
    v26 = (data::GCGTokenConfig *)(v3 + 160);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GCGCharExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCharExcelConfig>,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCharExcelConfig>,false> *)(v3 + 160)) )
    {
      v49 = 1;
      goto LABEL_55;
    }
    v55 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCharExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCharExcelConfig>,false,false> *const)(v3 + 128));
    card_id_0 = std::get<0ul,unsigned int const,data::GCGCharExcelConfig>(v55);
    config_0 = std::get<1ul,unsigned int const,data::GCGCharExcelConfig>(v55);
    common::tools::MiscUtils::erase_if<data::GCGTokenConfig,GCGGameExcelConfigMgr::rewriteCardConfig(TxtConfigMgr &)::{lambda(data::GCGTokenConfig&)#3}>(
      &config_0->token_list,
      v26,
      v27,
      v28,
      v29,
      v30,
      v51);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, v26);
    *(_DWORD *)(v3 + 48) = 0;
    common::tools::MiscUtils::removeValues<std::vector<data::GCGTagType>,data::GCGTagType>(
      &config_0->tag_list,
      (const data::GCGTagType *)(v3 + 48));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    token_config = std::vector<data::GCGTokenConfig>::emplace_back<>(&config_0->token_list);
    if ( *(_BYTE *)(((unsigned __int64)&token_config->token_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&token_config->token_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&token_config->token_type, v3 + 48);
    }
    token_config->token_type = GCG_TOKEN_HP;
    v31 = (((_BYTE)config_0 + 100) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&config_0->hp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_0 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_0->hp >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config_0->hp);
    }
    hp = config_0->hp;
    v33 = *(_BYTE *)(((unsigned __int64)&token_config->value >> 3) + 0x7FFF8000);
    LOBYTE(v31) = v33 != 0;
    if ( v33 != 0 && (char)((((_BYTE)token_config + 12) & 7) + 3) >= v33 )
      __asan_report_store4(&token_config->value, v31);
    token_config->value = hp;
    token_config_0 = std::vector<data::GCGTokenConfig>::emplace_back<>(&config_0->token_list);
    if ( *(_BYTE *)(((unsigned __int64)&token_config_0->token_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&token_config_0->token_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&token_config_0->token_type, v31);
    }
    token_config_0->token_type = GCG_TOKEN_MAX_HP;
    v34 = (((_BYTE)config_0 + 100) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&config_0->hp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_0 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_0->hp >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config_0->hp);
    }
    v35 = config_0->hp;
    v36 = *(_BYTE *)(((unsigned __int64)&token_config_0->value >> 3) + 0x7FFF8000);
    LOBYTE(v34) = v36 != 0;
    if ( v36 != 0 && (char)((((_BYTE)token_config_0 + 12) & 7) + 3) >= v36 )
      __asan_report_store4(&token_config_0->value, v34);
    token_config_0->value = v35;
    token_config_1 = std::vector<data::GCGTokenConfig>::emplace_back<>(&config_0->token_list);
    if ( *(_BYTE *)(((unsigned __int64)&token_config_1->token_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&token_config_1->token_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&token_config_1->token_type, v34);
    }
    token_config_1->token_type = GCG_TOKEN_ENERGY;
    v37 = (((_BYTE)token_config_1 + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&token_config_1->value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)token_config_1 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&token_config_1->value >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_store4(&token_config_1->value, v37);
    }
    token_config_1->value = 0;
    token_config_2 = std::vector<data::GCGTokenConfig>::emplace_back<>(&config_0->token_list);
    if ( *(_BYTE *)(((unsigned __int64)&token_config_2->token_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&token_config_2->token_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&token_config_2->token_type, v37);
    }
    token_config_2->token_type = GCG_TOKEN_MAX_ENERGY;
    if ( *(_BYTE *)(((unsigned __int64)&config_0->max_energy >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_0->max_energy >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_0->max_energy);
    }
    max_energy = config_0->max_energy;
    v39 = *(_BYTE *)(((unsigned __int64)&token_config_2->value >> 3) + 0x7FFF8000);
    if ( v39 != 0 && (char)((((_BYTE)token_config_2 + 12) & 7) + 3) >= v39 )
    {
      LOBYTE(v37) = v39 != 0;
      __asan_report_store4(&token_config_2->value, v37);
    }
    token_config_2->value = max_energy;
    v40 = ((v3 + 336) >> 3) + 2147450880;
    *(_DWORD *)v40 = 0;
    *(_WORD *)(v40 + 4) = 0;
    v41 = std::vector<data::GCGTagType>::begin(&config_0->tag_list)._M_current;
    v42._M_current = std::vector<data::GCGTagType>::end(&config_0->tag_list)._M_current;
    std::set<data::GCGTagType>::set<__gnu_cxx::__normal_iterator<data::GCGTagType*,std::vector<data::GCGTagType>>>(
      (std::set<data::GCGTagType> *const)(v3 + 336),
      (__gnu_cxx::__normal_iterator<data::GCGTagType*,std::vector<data::GCGTagType> >)v41,
      v42);
    v43 = std::unordered_map<unsigned int,std::set<data::GCGTagType>>::operator[](&this->card_tag_set_map_, card_id_0);
    std::set<data::GCGTagType>::operator=(v43, (std::set<data::GCGTagType> *)(v3 + 336));
    std::set<data::GCGTagType>::~set((std::set<data::GCGTagType> *const)(v3 + 336));
    v44 = ((v3 + 336) >> 3) + 2147450880;
    *(_DWORD *)v44 = -117901064;
    *(_WORD *)(v44 + 4) = -1800;
    v46 = std::unordered_map<unsigned int,data::GCGCardConfig>::emplace<unsigned int const&,data::GCGCharExcelConfig &>(
            &this->card_config_map_,
            card_id_0,
            config_0,
            (const unsigned int *)&this->card_config_map_,
            v45);
    if ( !v46.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCharExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGCharExcelConfig>,false,false> *const)(v3 + 128));
  }
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 192, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 192),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/GCGGameExcelConfig.cpp",
    "rewriteCardConfig",
    234);
  v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 192),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v48 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v47, (const char (*)[26])byte_1AD6C300);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, card_id_0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  v2 = -1;
  v49 = 0;
LABEL_55:
  if ( v49 == 1 )
    v2 = 0;
  result = v2;
  if ( v65 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
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
  return result;
};

// Line 172: range 000000001440CCB6-000000001440CD06
bool __cdecl GCGGameExcelConfigMgr::rewriteCardConfig(TxtConfigMgr &)::{lambda(data::GCGTokenConfig &)#1}::operator()(
        const GCGGameExcelConfigMgr::rewriteCardConfig::<lambda(data::GCGTokenConfig&)> *const __closure,
        data::GCGTokenConfig *token_config)
{
  if ( *(_BYTE *)(((unsigned __int64)&token_config->token_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&token_config->token_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&token_config->token_type);
  }
  return token_config->token_type == GCG_TOKEN_NONE;
};

// Line 177: range 000000001440CD08-000000001440CD58
bool __cdecl GCGGameExcelConfigMgr::rewriteCardConfig(TxtConfigMgr &)::{lambda(data::GCGCost &)#2}::operator()(
        const GCGGameExcelConfigMgr::rewriteCardConfig::<lambda(data::GCGCost&)> *const __closure,
        data::GCGCost *cost)
{
  if ( *(_BYTE *)(((unsigned __int64)&cost->cost_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cost->cost_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cost->cost_type);
  }
  return cost->cost_type == GCG_COST_INVALID;
};

// Line 200: range 000000001440CD5A-000000001440CDAA
bool __cdecl GCGGameExcelConfigMgr::rewriteCardConfig(TxtConfigMgr &)::{lambda(data::GCGTokenConfig &)#3}::operator()(
        const GCGGameExcelConfigMgr::rewriteCardConfig::<lambda(data::GCGTokenConfig&)> *const __closure,
        data::GCGTokenConfig *token_config)
{
  if ( *(_BYTE *)(((unsigned __int64)&token_config->token_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&token_config->token_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&token_config->token_type);
  }
  return token_config->token_type == GCG_TOKEN_NONE;
};

// Line 242: range 000000001440DAC2-000000001440DE1A
int32_t __cdecl GCGGameExcelConfigMgr::rewriteSkillConfig(
        GCGGameExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  const std::set<data::GCGSkillTagType>::value_type *v9; // rdx
  int32_t result; // eax
  char txt_config_mgra; // [rsp+0h] [rbp-110h]
  data::GCGSkillExcelConfigMap *__for_range; // [rsp+18h] [rbp-F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-F0h]
  const std::unordered_map<unsigned int,std::set<data::GCGSkillTagType>>::key_type *id; // [rsp+28h] [rbp-E8h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGSkillExcelConfig> >::type *config; // [rsp+30h] [rbp-E0h]
  std::unordered_map<unsigned int,std::set<data::GCGSkillTagType>>::mapped_type *skill_tag_set; // [rsp+38h] [rbp-D8h]
  std::vector<data::GCGSkillTagType> *__for_range_0; // [rsp+40h] [rbp-D0h]
  char v18[192]; // [rsp+50h] [rbp-C0h] BYREF

  txt_config_mgra = (char)txt_config_mgr;
  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:243 64 8 13 __for_end:243 96 8 15 __for_begin:251 128 8 13 __for_end:251";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::rewriteSkillConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  __for_range = &this->gcg_skill_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGSkillExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGSkillExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGSkillExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGSkillExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::GCGSkillExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGSkillExcelConfig>(__in);
    common::tools::MiscUtils::erase_if<data::GCGCost,GCGGameExcelConfigMgr::rewriteSkillConfig(TxtConfigMgr &)::{lambda(data::GCGCost&)#1}>(
      &config->cost_list,
      (data::GCGCost *)(v2 + 64),
      v5,
      v6,
      v7,
      v8,
      txt_config_mgra);
    skill_tag_set = std::unordered_map<unsigned int,std::set<data::GCGSkillTagType>>::operator[](
                      &this->skill_tag_set_map_,
                      id);
    __for_range_0 = &config->skill_tag_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, id);
    *(std::vector<data::GCGSkillTagType>::iterator *)(v2 + 96) = std::vector<data::GCGSkillTagType>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, id);
    *(std::vector<data::GCGSkillTagType>::iterator *)(v2 + 128) = std::vector<data::GCGSkillTagType>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::GCGSkillTagType *,std::vector<data::GCGSkillTagType>>(
              (const __gnu_cxx::__normal_iterator<data::GCGSkillTagType*,std::vector<data::GCGSkillTagType> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<data::GCGSkillTagType*,std::vector<data::GCGSkillTagType> > *)(v2 + 128)) )
    {
      v9 = __gnu_cxx::__normal_iterator<data::GCGSkillTagType *,std::vector<data::GCGSkillTagType>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGSkillTagType*,std::vector<data::GCGSkillTagType> > *const)(v2 + 96));
      std::set<data::GCGSkillTagType>::insert(skill_tag_set, v9);
      __gnu_cxx::__normal_iterator<data::GCGSkillTagType *,std::vector<data::GCGSkillTagType>>::operator++((__gnu_cxx::__normal_iterator<data::GCGSkillTagType*,std::vector<data::GCGSkillTagType> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 246: range 000000001440DA70-000000001440DAC0
bool __cdecl GCGGameExcelConfigMgr::rewriteSkillConfig(TxtConfigMgr &)::{lambda(data::GCGCost &)#1}::operator()(
        const GCGGameExcelConfigMgr::rewriteSkillConfig::<lambda(data::GCGCost&)> *const __closure,
        data::GCGCost *cost)
{
  if ( *(_BYTE *)(((unsigned __int64)&cost->cost_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cost->cost_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cost->cost_type);
  }
  return cost->cost_type == GCG_COST_INVALID;
};

// Line 260: range 000000001440DEC0-000000001440E140
int32_t __cdecl GCGGameExcelConfigMgr::rewriteChooseTargetConfig(
        GCGGameExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int32_t result; // eax
  char txt_config_mgra; // [rsp+0h] [rbp-D0h]
  char txt_config_mgrb; // [rsp+0h] [rbp-D0h]
  data::GCGChooseExcelConfigMap *__for_range; // [rsp+10h] [rbp-C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGChooseExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-B8h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGChooseExcelConfig> >::type *config; // [rsp+28h] [rbp-A8h]
  char v19[160]; // [rsp+30h] [rbp-A0h] BYREF

  txt_config_mgra = (char)txt_config_mgr;
  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 <unknown> 64 8 15 __for_begin:261 96 8 13 __for_end:261";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::rewriteChooseTargetConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  __for_range = &this->gcg_choose_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGChooseExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGChooseExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGChooseExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGChooseExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGChooseExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGChooseExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGChooseExcelConfig>,false> *)(v2 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGChooseExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGChooseExcelConfig>,false,false> *const)(v2 + 64));
    std::get<0ul,unsigned int const,data::GCGChooseExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGChooseExcelConfig>(__in);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, v2 + 96);
    *(_DWORD *)(v2 + 48) = 0;
    common::tools::MiscUtils::removeValues<std::vector<data::GCGTagType>,data::GCGTagType>(
      &config->tag_list,
      (const data::GCGTagType *)(v2 + 48));
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    common::tools::MiscUtils::erase_if<data::GCGChooseTargetCond,GCGGameExcelConfigMgr::rewriteChooseTargetConfig(TxtConfigMgr &)::{lambda(data::GCGChooseTargetCond&)#1}>(
      &config->cond_list,
      (data::GCGChooseTargetCond *)(v2 + 48),
      v5,
      v6,
      v7,
      v8,
      txt_config_mgra);
    common::tools::MiscUtils::erase_if<data::GCGChooseSortCond,GCGGameExcelConfigMgr::rewriteChooseTargetConfig(TxtConfigMgr &)::{lambda(data::GCGChooseSortCond&)#2}>(
      &config->sort_list,
      (data::GCGChooseSortCond *)(v2 + 48),
      v9,
      v10,
      v11,
      v12,
      txt_config_mgrb);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGChooseExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGChooseExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = 0;
  if ( v19 == (char *)v2 )
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

// Line 264: range 000000001440DE1C-000000001440DE6C
bool __cdecl GCGGameExcelConfigMgr::rewriteChooseTargetConfig(TxtConfigMgr &)::{lambda(data::GCGChooseTargetCond &)#1}::operator()(
        const GCGGameExcelConfigMgr::rewriteChooseTargetConfig::<lambda(data::GCGChooseTargetCond&)> *const __closure,
        data::GCGChooseTargetCond *cond)
{
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  return cond->type == NONE_0;
};

// Line 268: range 000000001440DE6E-000000001440DEBE
bool __cdecl GCGGameExcelConfigMgr::rewriteChooseTargetConfig(TxtConfigMgr &)::{lambda(data::GCGChooseSortCond &)#2}::operator()(
        const GCGGameExcelConfigMgr::rewriteChooseTargetConfig::<lambda(data::GCGChooseSortCond&)> *const __closure,
        data::GCGChooseSortCond *sort_cond)
{
  if ( *(_BYTE *)(((unsigned __int64)&sort_cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&sort_cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&sort_cond->type);
  }
  return sort_cond->type == NONE_1;
};

// Line 277: range 000000001440E194-000000001440E9E8
int32_t __cdecl GCGGameExcelConfigMgr::rewriteDeckConfig(
        GCGGameExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *v9; // rsi
  __int64 v11; // rsi
  std::vector<unsigned int>::reference v12; // rax
  int *v13; // rdx
  int v14; // ecx
  char v15; // al
  std::vector<unsigned int>::reference v16; // rax
  int *v17; // rdx
  int v18; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v19; // rax
  _DWORD *v20; // rdx
  char v21; // cl
  std::vector<bool> *p_character_card_face_gold_list; // rdx
  unsigned int v23; // eax
  __int64 v24; // rdx
  char v25; // al
  std::vector<unsigned int>::size_type v26; // r15
  std::vector<data::GCGWaitingCharacterInfo>::size_type v27; // rax
  int32_t result; // eax
  char v29; // [rsp+0h] [rbp-1E0h]
  int i; // [rsp+24h] [rbp-1BCh]
  data::GCGDeckExcelConfigMap *__for_range; // [rsp+30h] [rbp-1B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGDeckExcelConfig>,false,false>::reference __in; // [rsp+38h] [rbp-1A8h]
  const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *id; // [rsp+40h] [rbp-1A0h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGDeckExcelConfig> >::type *config; // [rsp+48h] [rbp-198h]
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::mapped_type *card_priority_map; // [rsp+50h] [rbp-190h]
  std::vector<std::string> *__for_range_0; // [rsp+58h] [rbp-188h]
  std::string *card_vec_str; // [rsp+60h] [rbp-180h]
  std::vector<std::vector<unsigned int>>::reference card_vec; // [rsp+68h] [rbp-178h]
  char v39[368]; // [rsp+70h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 11 is_gold:300 80 4 11 card_id:288 96 8 15 __for_begin:279 128 8 13 __fo"
                        "r_end:279 160 8 15 __for_begin:292 192 8 13 __for_end:292 224 16 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::rewriteDeckConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -219021312;
  v4[536862729] = -202116109;
  __for_range = &this->gcg_deck_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGDeckExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGDeckExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGDeckExcelConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::GCGDeckExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGDeckExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGDeckExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGDeckExcelConfig>,false> *)(v2 + 128)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGDeckExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGDeckExcelConfig>,false,false> *const)(v2 + 96));
    id = std::get<0ul,unsigned int const,data::GCGDeckExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGDeckExcelConfig>(__in);
    common::tools::MiscUtils::erase_if<data::GCGWaitingCharacterInfo,GCGGameExcelConfigMgr::rewriteDeckConfig(TxtConfigMgr &)::{lambda(data::GCGWaitingCharacterInfo&)#1}>(
      &config->waiting_character_list,
      (data::GCGWaitingCharacterInfo *)(v2 + 128),
      v5,
      v6,
      v7,
      v8,
      v29);
    v9 = id;
    card_priority_map = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                          &this->card_protected_priority_map_,
                          id);
    for ( i = 0;
          i < std::vector<unsigned int>::size(&config->character_list)
       && i < std::vector<unsigned int>::size(&config->protected_priority_list);
          ++i )
    {
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
      v11 = i;
      v12 = std::vector<unsigned int>::operator[](&config->character_list, i);
      v13 = (int *)v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      v14 = *v13;
      v15 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
      if ( v15 != 0 && v15 <= 3 )
      {
        LOBYTE(v11) = v15 != 0;
        __asan_report_store4(v2 + 80, v11);
      }
      *(_DWORD *)(v2 + 80) = v14;
      v16 = std::vector<unsigned int>::operator[](&config->protected_priority_list, i);
      v17 = (int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v18 = *v17;
      v9 = (const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v2 + 80);
      v19 = std::map<unsigned int,unsigned int>::operator[](
              card_priority_map,
              (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 80));
      v20 = v19;
      v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v21 != 0;
      if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
        __asan_report_store4(v19, v9);
      *v20 = v18;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    __for_range_0 = &config->init_modify_card_str_list;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v9);
    *(std::vector<std::string>::iterator *)(v2 + 160) = std::vector<std::string>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v9);
    *(std::vector<std::string>::iterator *)(v2 + 192) = std::vector<std::string>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 160),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 192)) )
    {
      card_vec_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 160));
      card_vec = std::vector<std::vector<unsigned int>>::emplace_back<>(&config->init_modify_card_list);
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 256),
        "|",
        (const std::allocator<char> *)(v2 + 48));
      common::tools::StringUtils::splitToList<unsigned int>(card_vec_str, (const std::string *)(v2 + 256), card_vec, 0);
      std::string::~string((void *)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      common::tools::MiscUtils::removeEmptyElement<unsigned int>(card_vec);
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 160));
    }
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( std::vector<bool>::size(&config->character_card_face_gold_list) == 1 )
    {
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      p_character_card_face_gold_list = &config->character_card_face_gold_list;
      if ( *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      *(std::vector<bool>::reference *)(v2 + 224) = std::vector<bool>::operator[](p_character_card_face_gold_list, 0LL);
      LOBYTE(v23) = std::_Bit_reference::operator bool((const std::_Bit_reference *const)(v2 + 224));
      v24 = v23;
      v25 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
      if ( v25 < 0 )
        __asan_report_store1(v2 + 64, v25 != 0, v24);
      *(_BYTE *)(v2 + 64) = v24;
      *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -1800;
      v26 = std::vector<unsigned int>::size(&config->character_list);
      v27 = std::vector<data::GCGWaitingCharacterInfo>::size(&config->waiting_character_list);
      std::vector<bool>::assign(&config->character_card_face_gold_list, v26 + v27, (const bool *)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGDeckExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGDeckExcelConfig>,false,false> *const)(v2 + 96));
  }
  result = 0;
  if ( v39 == (char *)v2 )
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

// Line 281: range 000000001440E142-000000001440E192
bool __cdecl GCGGameExcelConfigMgr::rewriteDeckConfig(TxtConfigMgr &)::{lambda(data::GCGWaitingCharacterInfo &)#1}::operator()(
        const GCGGameExcelConfigMgr::rewriteDeckConfig::<lambda(data::GCGWaitingCharacterInfo&)> *const __closure,
        data::GCGWaitingCharacterInfo *info)
{
  if ( *(_BYTE *)(((unsigned __int64)&info->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&info->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&info->id);
  }
  return info->id == 0;
};

// Line 308: range 000000001440E9EA-000000001440ED3E
int32_t __cdecl GCGGameExcelConfigMgr::rewriteGameConfig(
        GCGGameExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rsi
  std::vector<unsigned int>::reference v6; // rax
  uint32_t *v7; // rdx
  uint32_t v8; // ecx
  char v9; // al
  __int64 v10; // rsi
  std::vector<unsigned int>::reference v11; // rax
  uint32_t *v12; // rdx
  uint32_t v13; // ecx
  char v14; // dl
  int32_t result; // eax
  data::GCGGameExcelConfigMap *__for_range; // [rsp+20h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGGameExcelConfig> >::type *config; // [rsp+38h] [rbp-88h]
  char v19[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameExcelConfig>,false,false> *)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGGameExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGGameExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:310 64 8 13 __for_end:310";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGGameExcelConfig>,false>::__node_type *)GCGGameExcelConfigMgr::rewriteGameConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->gcg_game_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::GCGGameExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::GCGGameExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGGameExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::GCGGameExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGGameExcelConfig>(__in);
    if ( std::vector<unsigned int>::size(&config->init_onstage_character_index_list) )
    {
      v5 = 0LL;
      v6 = std::vector<unsigned int>::operator[](&config->init_onstage_character_index_list, 0LL);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      v8 = *v7;
      v9 = *(_BYTE *)(((unsigned __int64)&config->init_onstage_character_index >> 3) + 0x7FFF8000);
      if ( v9 != 0 && v9 <= 3 )
      {
        LOBYTE(v5) = v9 != 0;
        __asan_report_store4(&config->init_onstage_character_index, v5);
      }
      config->init_onstage_character_index = v8;
    }
    if ( std::vector<unsigned int>::size(&config->init_onstage_character_index_list) > 1 )
    {
      v10 = 1LL;
      v11 = std::vector<unsigned int>::operator[](&config->init_onstage_character_index_list, 1uLL);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
      v14 = *(_BYTE *)(((unsigned __int64)&config->enemy_init_onstage_character_index >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)((((_BYTE)config + 116) & 7) + 3) >= v14 )
      {
        LOBYTE(v10) = v14 != 0;
        __asan_report_store4(&config->enemy_init_onstage_character_index, v10);
      }
      config->enemy_init_onstage_character_index = v13;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGGameExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGGameExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 325: range 000000001440F220-00000000144117F5
int32_t __cdecl GCGGameExcelConfigMgr::checkGameConfig(
        const GCGGameExcelConfigMgr *const this,
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
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  const GCGGameExcelConfigMgr *v13; // rcx
  __int64 rule_id; // rsi
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  const GCGGameExcelConfigMgr *v21; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  const GCGGameExcelConfigMgr *v28; // rcx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  const GCGGameExcelConfigMgr *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  char *v44; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rdx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rdx
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rdx
  __int64 v63; // rsi
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rdx
  uint32_t init_onstage_character_index; // edx
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rdx
  uint32_t enemy_init_onstage_character_index; // esi
  uint32_t v70; // edx
  __int64 enemy_card_group_id; // rsi
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rdx
  __int64 v74; // rsi
  __int64 v75; // rdx
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rdx
  int32_t ret; // [rsp+1Ch] [rbp-5D4h]
  data::GCGGameExcelConfigMap *__for_range; // [rsp+20h] [rbp-5D0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGGameExcelConfig>,false,false>::reference v81; // [rsp+28h] [rbp-5C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGGameExcelConfig> >::type *id; // [rsp+30h] [rbp-5C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGGameExcelConfig> >::type *config; // [rsp+38h] [rbp-5B8h]
  const data::GCGDeckExcelConfig *deck_config_ptr_0; // [rsp+48h] [rbp-5A8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-590h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+68h] [rbp-588h]
  const unsigned int *card_id_0; // [rsp+70h] [rbp-580h]
  const data::GCGCardConfig *card_config_ptr_0; // [rsp+78h] [rbp-578h]
  const unsigned int *card_id; // [rsp+80h] [rbp-570h]
  const data::GCGCardConfig *card_config_ptr; // [rsp+88h] [rbp-568h]
  char v91[1376]; // [rsp+90h] [rbp-560h] BYREF

  v2 = (unsigned __int64)v91;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1344LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "24 32 8 15 __for_begin:327 64 8 13 __for_end:327 96 8 15 __for_begin:400 128 8 13 __for_end:400 "
                        "160 8 15 __for_begin:418 192 8 13 __for_end:418 224 8 27 check_init_onstage_card:443 256 32 9 <u"
                        "nknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <un"
                        "known> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unk"
                        "nown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <"
                        "unknown> 1280 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::checkGameConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
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
  v4[536862753] = -218959118;
  v4[536862755] = -218959118;
  v4[536862757] = -218959118;
  v4[536862759] = -218959118;
  v4[536862761] = -202116109;
  ret = 0;
  __for_range = &this->gcg_game_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGGameExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGGameExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGGameExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGGameExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGGameExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGGameExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGGameExcelConfig>,false> *)(v2 + 64)) )
  {
    v81 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGGameExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGGameExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::GCGGameExcelConfig>(v81);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGGameExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGGameExcelConfig>(v81);
    if ( *(_BYTE *)(((unsigned __int64)&config->card_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->card_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->card_group_id);
    }
    if ( config->card_group_id && !data::GCGGameExcelConfigMgrBase::findGCGDeckExcelConfig(this, config->card_group_id) )
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkGameConfig",
        334);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v5, (const char (*)[36])byte_1AD6C640);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &config->card_group_id);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" ID: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->enemy_card_group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->enemy_card_group_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->enemy_card_group_id);
    }
    if ( config->enemy_card_group_id
      && !data::GCGGameExcelConfigMgrBase::findGCGDeckExcelConfig(this, config->enemy_card_group_id) )
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkGameConfig",
        342);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v9, (const char (*)[36])byte_1AD6C640);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->enemy_card_group_id);
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" ID: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v13 = this;
    if ( *(_BYTE *)(((unsigned __int64)&config->rule_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->rule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->rule_id);
    }
    rule_id = config->rule_id;
    if ( !data::GCGGameExcelConfigMgrBase::findGCGRuleExcelConfig(v13, rule_id) )
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkGameConfig",
        348);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v15, (const char (*)[42])byte_1AD6C940);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->rule_id);
      v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" ID: ");
      rule_id = (__int64)id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->game_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->game_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->game_type);
    }
    if ( config->game_type == AI )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->enemy_card_group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->enemy_card_group_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->enemy_card_group_id);
      }
      if ( config->enemy_card_group_id )
      {
        v21 = this;
        if ( *(_BYTE *)(((unsigned __int64)&config->enemy_card_group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->enemy_card_group_id >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->enemy_card_group_id);
        }
        rule_id = config->enemy_card_group_id;
        if ( data::GCGGameExcelConfigMgrBase::findGCGDeckExcelConfig(v21, rule_id)
          && (unsigned __int8)std::string::empty() )
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkGameConfig",
            365);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v22, (const char (*)[44])byte_1AD6C9E0);
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  &config->enemy_card_group_id);
          v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" ID: ");
          rule_id = (__int64)id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
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
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkGameConfig",
          355);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v19, (const char (*)[29])byte_1AD6C9A0);
        rule_id = (__int64)id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
LABEL_73:
      __for_range_0 = &config->init_card_list;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 96, rule_id);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 96) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, rule_id);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v44 = (char *)(v2 + 128);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 96),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128)) )
          break;
        v45 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
        card_id = v45;
        if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v45);
        }
        card_config_ptr = GCGGameExcelConfigMgr::findCardConfig(this, *card_id);
        if ( card_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&card_config_ptr->card_type);
          }
          if ( card_config_ptr->card_type != GCG_CARD_ASSIST
            && card_config_ptr->card_type != GCG_CARD_SUMMON
            && card_config_ptr->card_type != GCG_CARD_ONSTAGE )
          {
            ret = -1;
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
              "./src/txt_data_manual/GCGGameExcelConfig.cpp",
              "checkGameConfig",
              414);
            v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 896),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v51 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                    v50,
                    (const char (*)[54])byte_1AD6CBE0);
            v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, card_id);
            v53 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v52, (const char (*)[6])" ID: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        else
        {
          ret = -1;
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkGameConfig",
            406);
          v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 832),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v47 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v46, (const char (*)[60])byte_1AD6CB80);
          v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, card_id);
          v49 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v48, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
      }
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      __for_range_1 = &config->init_enemy_card_list;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v44);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, v44);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::end(__for_range_1);
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192)) )
      {
        v54 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 160));
        card_id_0 = v54;
        if ( *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v54 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v54);
        }
        card_config_ptr_0 = GCGGameExcelConfigMgr::findCardConfig(this, *card_id_0);
        if ( card_config_ptr_0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr_0->card_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)card_config_ptr_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr_0->card_type >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&card_config_ptr_0->card_type);
          }
          if ( card_config_ptr_0->card_type != GCG_CARD_ASSIST
            && card_config_ptr_0->card_type != GCG_CARD_SUMMON
            && card_config_ptr_0->card_type != GCG_CARD_ONSTAGE )
          {
            ret = -1;
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
              "./src/txt_data_manual/GCGGameExcelConfig.cpp",
              "checkGameConfig",
              432);
            v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1024),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v60 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                    v59,
                    (const char (*)[54])byte_1AD6CBE0);
            v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, card_id_0);
            v62 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v61, (const char (*)[6])" ID: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
            *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        else
        {
          ret = -1;
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkGameConfig",
            424);
          v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 960),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v56 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v55, (const char (*)[60])byte_1AD6CB80);
          v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, card_id_0);
          v58 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v57, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
          *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 160));
      }
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((unsigned __int64)&config->card_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->card_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->card_group_id);
      }
      if ( !config->card_group_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->init_onstage_character_index >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->init_onstage_character_index >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->init_onstage_character_index);
        }
        if ( config->init_onstage_character_index )
          goto LABEL_127;
      }
      v63 = (((_BYTE)config + 20) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->enemy_card_group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->enemy_card_group_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->enemy_card_group_id);
      }
      if ( config->enemy_card_group_id )
        goto LABEL_130;
      v63 = (((_BYTE)config + 116) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->enemy_init_onstage_character_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->enemy_init_onstage_character_index >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&config->enemy_init_onstage_character_index);
      }
      if ( !config->enemy_init_onstage_character_index )
      {
LABEL_130:
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, v63);
        *(_QWORD *)(v2 + 224) = this;
        if ( *(_BYTE *)(((unsigned __int64)&config->init_onstage_character_index >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->init_onstage_character_index >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->init_onstage_character_index);
        }
        init_onstage_character_index = config->init_onstage_character_index;
        if ( *(_BYTE *)(((unsigned __int64)&config->card_group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->card_group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->card_group_id);
        }
        if ( !GCGGameExcelConfigMgr::checkGameConfig(TxtConfigMgr const&)const::{lambda(unsigned int,unsigned int)#1}::operator()(
                (const GCGGameExcelConfigMgr::checkGameConfig::<lambda(uint32_t, uint32_t)> *const)(v2 + 224),
                config->card_group_id,
                init_onstage_character_index) )
        {
          ret = -1;
          *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1152) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1152, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1152),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkGameConfig",
            467);
          v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1152),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v68 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v67, (const char (*)[46])byte_1AD6CCA0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
          *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->enemy_init_onstage_character_index >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->enemy_init_onstage_character_index >> 3)
                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&config->enemy_init_onstage_character_index);
          }
          enemy_init_onstage_character_index = config->enemy_init_onstage_character_index;
          if ( *(_BYTE *)(((unsigned __int64)&config->enemy_card_group_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->enemy_card_group_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&config->enemy_card_group_id);
          }
          v70 = enemy_init_onstage_character_index;
          enemy_card_group_id = config->enemy_card_group_id;
          if ( !GCGGameExcelConfigMgr::checkGameConfig(TxtConfigMgr const&)const::{lambda(unsigned int,unsigned int)#1}::operator()(
                  (const GCGGameExcelConfigMgr::checkGameConfig::<lambda(uint32_t, uint32_t)> *const)(v2 + 224),
                  enemy_card_group_id,
                  v70) )
          {
            ret = -1;
            *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1216) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1216, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1216),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GCGGameExcelConfig.cpp",
              "checkGameConfig",
              473);
            v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1216),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v73 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    v72,
                    (const char (*)[46])byte_1AD6CD00);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
            *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&config->is_ignore_deck_shuffle >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&config->is_ignore_deck_shuffle, enemy_card_group_id, &config->is_ignore_deck_shuffle);
            if ( config->is_ignore_deck_shuffle )
              goto LABEL_160;
            v74 = ((_BYTE)config + 81) & 7;
            v75 = (*(_BYTE *)(((unsigned __int64)&config->is_ignore_redraw >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v74 >= *(_BYTE *)(((unsigned __int64)&config->is_ignore_redraw >> 3) + 0x7FFF8000));
            if ( (_BYTE)v75 )
              __asan_report_load1(&config->is_ignore_redraw, v74, v75);
            if ( config->is_ignore_redraw )
              goto LABEL_160;
            if ( *(_BYTE *)(((unsigned __int64)&config->init_onstage_character_index >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->init_onstage_character_index >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config->init_onstage_character_index);
            }
            if ( config->init_onstage_character_index )
              goto LABEL_160;
            if ( *(_BYTE *)(((unsigned __int64)&config->enemy_init_onstage_character_index >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->enemy_init_onstage_character_index >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4(&config->enemy_init_onstage_character_index);
            }
            if ( config->enemy_init_onstage_character_index )
            {
LABEL_160:
              if ( *(_BYTE *)(((unsigned __int64)&config->game_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config->game_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&config->game_type);
              }
              if ( config->game_type == PVP )
              {
                ret = -1;
                *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1280) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1280, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1280),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GCGGameExcelConfig.cpp",
                  "checkGameConfig",
                  484);
                v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1280),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v77 = common::milog::MiLogStream::operator<<<char [94],(char *[94])0>(
                        v76,
                        (const char (*)[94])byte_1AD6CD60);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
                *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
              }
            }
          }
        }
      }
      else
      {
LABEL_127:
        *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1088) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1088, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1088),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkGameConfig",
          439);
        v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1088),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v65 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v64, (const char (*)[45])byte_1AD6CC40);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
        *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      goto LABEL_166;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->game_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->game_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->game_type);
    }
    if ( config->game_type != PVE )
      goto LABEL_73;
    if ( *(_BYTE *)(((unsigned __int64)&config->enemy_card_group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->enemy_card_group_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->enemy_card_group_id);
    }
    if ( config->enemy_card_group_id )
    {
      v28 = this;
      if ( *(_BYTE *)(((unsigned __int64)&config->enemy_card_group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->enemy_card_group_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->enemy_card_group_id);
      }
      deck_config_ptr_0 = data::GCGGameExcelConfigMgrBase::findGCGDeckExcelConfig(v28, config->enemy_card_group_id);
      if ( deck_config_ptr_0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&deck_config_ptr_0->advanture_rule_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&deck_config_ptr_0->advanture_rule_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&deck_config_ptr_0->advanture_rule_id);
        }
        if ( deck_config_ptr_0->advanture_rule_id )
        {
          v37 = this;
          if ( *(_BYTE *)(((unsigned __int64)&deck_config_ptr_0->advanture_rule_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&deck_config_ptr_0->advanture_rule_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&deck_config_ptr_0->advanture_rule_id);
          }
          rule_id = deck_config_ptr_0->advanture_rule_id;
          if ( data::GCGGameExcelConfigMgrBase::findGCGAdvantureRuleExcelConfig(v37, rule_id) )
            goto LABEL_73;
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkGameConfig",
            395);
          v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 768),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v39 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v38, (const char (*)[63])byte_1AD6CAE0);
          v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v39,
                  &config->enemy_card_group_id);
          v41 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v40, (const char (*)[23])byte_1AD6CB40);
          v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v41,
                  &deck_config_ptr_0->advanture_rule_id);
          v43 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v42, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkGameConfig",
            388);
          v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 704),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v34 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v33, (const char (*)[63])byte_1AD6CAE0);
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v34,
                  &config->enemy_card_group_id);
          v36 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v35, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, id);
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
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkGameConfig",
          382);
        v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 640),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v30 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v29, (const char (*)[57])byte_1AD6CA80);
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &config->enemy_card_group_id);
        v32 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v31, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, id);
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkGameConfig",
        375);
      v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 576),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v27 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v26, (const char (*)[31])byte_1AD6CA40);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
LABEL_166:
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGGameExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGGameExcelConfig>,false,false> *const)(v2 + 32));
  }
  if ( v91 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 168) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1344LL, v91);
  }
  return ret;
};

// Line 443: range 000000001440ED40-000000001440F21F
__int64 __fastcall GCGGameExcelConfigMgr::checkGameConfig(TxtConfigMgr const&)const::{lambda(unsigned int,unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t card_group_id,
        uint32_t index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const data::GCGDeckExcelConfig *card_group_ptr; // [rsp+18h] [rbp-138h]
  char v14[304]; // [rsp+20h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 17 card_group_id:443 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GCGGameExcelConfigMgr::checkGameConfig(TxtConfigMgr const&)const::{lambda(unsigned int,unsigned int)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 48) = card_group_id;
  if ( index )
  {
    if ( *(_DWORD *)(v3 + 48) )
    {
      if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      card_group_ptr = data::GCGGameExcelConfigMgrBase::findGCGDeckExcelConfig(
                         *(const data::GCGGameExcelConfigMgrBase *const *)__closure,
                         *(unsigned int *)(v3 + 48));
      if ( card_group_ptr )
      {
        if ( index <= std::vector<unsigned int>::size(&card_group_ptr->character_list) )
        {
          result = 1LL;
        }
        else
        {
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "operator()",
            459);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 192),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v11 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v10, (const char (*)[60])byte_1AD6C6A0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
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
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "operator()",
          454);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 128),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v8, (const char (*)[36])byte_1AD6C640);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "operator()",
        448);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 64),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v7, (const char (*)[40])byte_1AD6C5E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
      result = 0LL;
    }
  }
  else
  {
    result = 1LL;
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 493: range 00000000144117F6-000000001441497F
int32_t __cdecl GCGGameExcelConfigMgr::checkDeckConfig(
        const GCGGameExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rax
  const GCGGameExcelConfigMgr *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  char *v13; // rsi
  const GCGGameExcelConfigMgr *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  __int64 advanture_rule_id; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  int card_type; // eax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  std::vector<unsigned int>::size_type v32; // r15
  common::milog::MiLogStream *v34; // rax
  std::vector<std::vector<unsigned int>>::size_type v35; // r15
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  char *v42; // rsi
  char *v43; // rsi
  unsigned int *v44; // rax
  int *v45; // rdx
  int v46; // ecx
  char v47; // al
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rdx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  char *v56; // rsi
  unsigned int *v57; // rax
  int *v58; // rdx
  int v59; // ecx
  char v60; // al
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  std::vector<unsigned int>::size_type v70; // r15
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rdx
  std::vector<unsigned int>::size_type v73; // r15
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rdx
  __int64 v76; // rsi
  __int64 v77; // rdx
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rdx
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rdx
  std::vector<bool>::size_type v84; // r15
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rdx
  unsigned __int64 v89; // rax
  std::vector<unsigned int> *p_character_list; // rsi
  char *v91; // rsi
  unsigned __int64 v92; // rax
  char *v93; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v94; // rax
  int *v95; // rdx
  int v96; // ecx
  char v97; // al
  uint32_t v98; // eax
  char *v99; // rsi
  std::map<unsigned int,bool>::mapped_type *v100; // rax
  _BYTE *v101; // rdx
  char v102; // cl
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rdx
  char *v111; // rsi
  std::map<unsigned int,bool>::mapped_type *v112; // rax
  _BYTE *v113; // rdx
  char v114; // cl
  unsigned __int64 v115; // rax
  unsigned __int64 v116; // rax
  std::vector<unsigned int>::size_type v118; // [rsp+8h] [rbp-8B8h]
  char is_gold; // [rsp+27h] [rbp-899h]
  int32_t ret; // [rsp+28h] [rbp-898h]
  uint32_t index; // [rsp+2Ch] [rbp-894h]
  data::GCGDeckExcelConfigMap *__for_range; // [rsp+30h] [rbp-890h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckExcelConfig>,false,false>::reference v124; // [rsp+38h] [rbp-888h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGDeckExcelConfig> >::type *id; // [rsp+40h] [rbp-880h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGDeckExcelConfig> >::type *config; // [rsp+48h] [rbp-878h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-870h]
  const std::vector<data::GCGWaitingCharacterInfo> *__for_range_1; // [rsp+58h] [rbp-868h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+60h] [rbp-860h]
  const std::vector<std::vector<unsigned int>> *__for_range_3; // [rsp+78h] [rbp-848h]
  __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> >::reference __for_range_4; // [rsp+88h] [rbp-838h]
  const data::GCGCardExcelConfig *card_config_ptr_2; // [rsp+90h] [rbp-830h]
  const std::vector<unsigned int> *__for_range_5; // [rsp+98h] [rbp-828h]
  const data::GCGChooseExcelConfig *choose_config_ptr; // [rsp+A0h] [rbp-820h]
  const std::vector<data::GCGWaitingCharacterInfo> *__for_range_6; // [rsp+A8h] [rbp-818h]
  std::vector<unsigned int> *__for_range_7; // [rsp+B0h] [rbp-810h]
  const data::GCGWaitingCharacterInfo *waiting_character; // [rsp+B8h] [rbp-808h]
  const unsigned int *card_id_0; // [rsp+C0h] [rbp-800h]
  const data::GCGCardConfig *card_config_ptr_1; // [rsp+C8h] [rbp-7F8h]
  const data::GCGWaitingCharacterInfo *config_0; // [rsp+D0h] [rbp-7F0h]
  const unsigned int *card_id; // [rsp+E0h] [rbp-7E0h]
  char v142[2000]; // [rsp+F0h] [rbp-7D0h] BYREF

  v2 = (unsigned __int64)v142;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1952LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "41 32 4 11 card_id:567 48 4 13 choose_id:593 64 4 11 card_id:656 80 8 15 __for_begin:495 112 8 1"
                        "3 __for_end:495 144 8 15 __for_begin:497 176 8 13 __for_end:497 208 8 15 __for_begin:507 240 8 1"
                        "3 __for_end:507 272 8 15 __for_begin:517 304 8 13 __for_end:517 336 8 15 __for_begin:565 368 8 1"
                        "3 __for_end:565 400 8 15 __for_begin:567 432 8 13 __for_end:567 464 8 15 __for_begin:593 496 8 1"
                        "3 __for_end:593 528 8 15 __for_begin:649 560 8 13 __for_end:649 592 8 15 __for_begin:656 624 8 1"
                        "3 __for_end:656 656 24 12 card_vec:648 720 32 9 <unknown> 784 32 9 <unknown> 848 32 9 <unknown> "
                        "912 32 9 <unknown> 976 32 9 <unknown> 1040 32 9 <unknown> 1104 32 9 <unknown> 1168 32 9 <unknown"
                        "> 1232 32 9 <unknown> 1296 32 9 <unknown> 1360 32 9 <unknown> 1424 32 9 <unknown> 1488 32 9 <unk"
                        "nown> 1552 32 9 <unknown> 1616 32 9 <unknown> 1680 32 9 <unknown> 1744 32 9 <unknown> 1808 32 9 "
                        "<unknown> 1872 48 12 gold_map:655";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::checkDeckConfig;
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
  v4[536862735] = -234881024;
  v4[536862736] = 62194;
  v4[536862736] = -234881024;
  v4[536862737] = 62194;
  v4[536862737] = -234881024;
  v4[536862738] = 62194;
  v4[536862738] = -234881024;
  v4[536862739] = 62194;
  v4[536862739] = -234881024;
  v4[536862740] = 62194;
  v4[536862741] = -218959360;
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
  v4[536862755] = -219021312;
  v4[536862756] = 62194;
  v4[536862757] = -219021312;
  v4[536862758] = 62194;
  v4[536862759] = -219021312;
  v4[536862760] = 62194;
  v4[536862761] = -219021312;
  v4[536862762] = 62194;
  v4[536862763] = -219021312;
  v4[536862764] = 62194;
  v4[536862765] = -219021312;
  v4[536862766] = 62194;
  v4[536862767] = -219021312;
  v4[536862768] = 62194;
  v4[536862769] = -219021312;
  v4[536862770] = 62194;
  v4[536862771] = -219021312;
  v4[536862772] = 62194;
  v4[536862773] = -219021312;
  v4[536862774] = 62194;
  v4[536862775] = -219021312;
  v4[536862776] = 62194;
  v4[536862777] = -219021312;
  v4[536862778] = 62194;
  v4[536862780] = -202116109;
  ret = 0;
  __for_range = &this->gcg_deck_excel_config_map;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGDeckExcelConfig>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::GCGDeckExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGDeckExcelConfig>::const_iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::GCGDeckExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 112);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GCGDeckExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGDeckExcelConfig>,false> *)(v2 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGDeckExcelConfig>,false> *)(v2 + 112)) )
      break;
    v124 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckExcelConfig>,false,false> *const)(v2 + 80));
    id = std::get<0ul,unsigned int const,data::GCGDeckExcelConfig>(v124);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGDeckExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGDeckExcelConfig>(v124);
    __for_range_0 = &config->character_list;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 144) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 176) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v2 + 176);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 144),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 176)) )
        break;
      v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 144));
      card_id = v7;
      v8 = this;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      if ( !data::GCGGameExcelConfigMgrBase::findGCGCharExcelConfig(v8, *card_id) )
      {
        ret = -1;
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
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkDeckConfig",
          503);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 720),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v9, (const char (*)[45])byte_1AD6D1C0);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, card_id);
        v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 720));
        *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 144));
    }
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &config->waiting_character_list;
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, v6);
    *(std::vector<data::GCGWaitingCharacterInfo>::const_iterator *)(v2 + 208) = std::vector<data::GCGWaitingCharacterInfo>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 240, v6);
    *(std::vector<data::GCGWaitingCharacterInfo>::const_iterator *)(v2 + 240) = std::vector<data::GCGWaitingCharacterInfo>::end(__for_range_1);
    while ( 1 )
    {
      v13 = (char *)(v2 + 240);
      if ( !__gnu_cxx::operator!=<data::GCGWaitingCharacterInfo const*,std::vector<data::GCGWaitingCharacterInfo>>(
              (const __gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *)(v2 + 208),
              (const __gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *)(v2 + 240)) )
        break;
      config_0 = __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo const*,std::vector<data::GCGWaitingCharacterInfo>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *const)(v2 + 208));
      v14 = this;
      if ( *(_BYTE *)(((unsigned __int64)&config_0->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_0->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_0->id);
      }
      if ( !data::GCGGameExcelConfigMgrBase::findGCGCharExcelConfig(v14, config_0->id) )
      {
        ret = -1;
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
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkDeckConfig",
          513);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 784),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v15, (const char (*)[63])byte_1AD6D220);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config_0->id);
        v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 784));
        *(_DWORD *)(((v2 + 784) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo const*,std::vector<data::GCGWaitingCharacterInfo>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *const)(v2 + 208));
    }
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
    __for_range_2 = &config->card_list;
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 272, v13);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 272) = std::vector<unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 304, v13);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 304) = std::vector<unsigned int>::end(__for_range_2);
    while ( 1 )
    {
      advanture_rule_id = v2 + 304;
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 272),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 304)) )
        break;
      v20 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 272));
      card_id_0 = v20;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v20);
      }
      card_config_ptr_1 = GCGGameExcelConfigMgr::findCardConfig(this, *card_id_0);
      if ( card_config_ptr_1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr_1->card_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_config_ptr_1 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr_1->card_type >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&card_config_ptr_1->card_type);
        }
        card_type = card_config_ptr_1->card_type;
        if ( card_type != 2 && (card_type < 2 || (unsigned int)(card_type - 4) > 2) )
        {
          ret = -1;
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkDeckConfig",
            535);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 912),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v27 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v26, (const char (*)[48])byte_1AD6D2E0);
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, card_id_0);
          v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 912));
          *(_DWORD *)(((v2 + 912) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
      {
        ret = -1;
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
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkDeckConfig",
          523);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 848),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v21, (const char (*)[42])byte_1AD6D280);
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, card_id_0);
        v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 848));
        *(_DWORD *)(((v2 + 848) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 272));
    }
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&config->advanture_rule_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->advanture_rule_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->advanture_rule_id);
    }
    if ( config->advanture_rule_id )
    {
      advanture_rule_id = config->advanture_rule_id;
      if ( !data::GCGGameExcelConfigMgrBase::findGCGAdvantureRuleExcelConfig(this, advanture_rule_id) )
      {
        ret = -1;
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
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkDeckConfig",
          545);
        v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 976),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v31 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(v30, (const char (*)[65])byte_1AD6D340);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &config->advanture_rule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 976));
        *(_DWORD *)(((v2 + 976) >> 3) + 0x7FFF8000) = -117901064;
        goto LABEL_193;
      }
    }
    if ( !std::vector<unsigned int>::empty(&config->protected_priority_list) )
    {
      v32 = std::vector<unsigned int>::size(&config->protected_priority_list);
      if ( v32 != std::vector<unsigned int>::size(&config->character_list) )
      {
        ret = -1;
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
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkDeckConfig",
          554);
        v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1040),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v34, (const char (*)[46])byte_1AD6D3C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1040));
        *(_DWORD *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -117901064;
        goto LABEL_193;
      }
    }
    if ( !std::vector<std::vector<unsigned int>>::empty(&config->init_modify_card_list) )
    {
      v35 = std::vector<std::vector<unsigned int>>::size(&config->init_modify_card_list);
      if ( v35 != std::vector<unsigned int>::size(&config->character_list) )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 1104) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1104) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1135) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 1135) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1104, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1104),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkDeckConfig",
          562);
        v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1104),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v37 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v36, (const char (*)[58])byte_1AD6D420);
        v38 = common::milog::MiLogStream::operator<<<unsigned int>(v37, &config->character_list);
        v39 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v38, (const char (*)[19])byte_1AD6D480);
        v40 = common::milog::MiLogStream::operator<<<std::string>(v39, &config->init_modify_card_str_list);
        v41 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v40, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1104));
        *(_DWORD *)(((v2 + 1104) >> 3) + 0x7FFF8000) = -117901064;
        goto LABEL_193;
      }
      __for_range_3 = &config->init_modify_card_list;
      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 336, advanture_rule_id);
      *(std::vector<std::vector<unsigned int>>::const_iterator *)(v2 + 336) = std::vector<std::vector<unsigned int>>::begin(__for_range_3);
      *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 368, advanture_rule_id);
      *(std::vector<std::vector<unsigned int>>::const_iterator *)(v2 + 368) = std::vector<std::vector<unsigned int>>::end(__for_range_3);
      while ( 1 )
      {
        v42 = (char *)(v2 + 368);
        if ( !__gnu_cxx::operator!=<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>(
                (const __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *)(v2 + 336),
                (const __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *)(v2 + 368)) )
          break;
        __for_range_4 = __gnu_cxx::__normal_iterator<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *const)(v2 + 336));
        *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 400, v42);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 400) = std::vector<unsigned int>::begin(__for_range_4);
        *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 432, v42);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 432) = std::vector<unsigned int>::end(__for_range_4);
        while ( 1 )
        {
          v43 = (char *)(v2 + 432);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 400),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 432)) )
            break;
          *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
          v44 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 400));
          v45 = (int *)v44;
          if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v44);
          }
          v46 = *v45;
          v47 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
          if ( v47 != 0 && v47 <= 3 )
          {
            LOBYTE(v43) = v47 != 0;
            __asan_report_store4(v2 + 32, v43);
          }
          *(_DWORD *)(v2 + 32) = v46;
          card_config_ptr_2 = data::GCGGameExcelConfigMgrBase::findGCGCardExcelConfig(this, *(unsigned int *)(v2 + 32));
          if ( card_config_ptr_2 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr_2->card_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)card_config_ptr_2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr_2->card_type >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&card_config_ptr_2->card_type);
            }
            if ( card_config_ptr_2->card_type == GCG_CARD_MODIFY || card_config_ptr_2->card_type == GCG_CARD_STATE )
            {
              v52 = ((_BYTE)card_config_ptr_2 - 84) & 7;
              v53 = (*(_BYTE *)(((unsigned __int64)&card_config_ptr_2->is_need_preview >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v52 >= *(_BYTE *)(((unsigned __int64)&card_config_ptr_2->is_need_preview >> 3) + 0x7FFF8000));
              if ( (_BYTE)v53 )
                __asan_report_load1(&card_config_ptr_2->is_need_preview, v52, v53);
              if ( card_config_ptr_2->is_need_preview )
              {
                if ( std::vector<unsigned int>::size(&card_config_ptr_2->choose_target_list) <= 1 )
                {
                  __for_range_5 = &card_config_ptr_2->choose_target_list;
                  *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v2 + 464, v52);
                  *(std::vector<unsigned int>::const_iterator *)(v2 + 464) = std::vector<unsigned int>::begin(__for_range_5);
                  *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v2 + 496, v52);
                  *(std::vector<unsigned int>::const_iterator *)(v2 + 496) = std::vector<unsigned int>::end(__for_range_5);
                  while ( 1 )
                  {
                    v56 = (char *)(v2 + 496);
                    if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 464),
                            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 496)) )
                      break;
                    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
                    v57 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 464));
                    v58 = (int *)v57;
                    if ( *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v57 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v57);
                    }
                    v59 = *v58;
                    v60 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
                    if ( v60 != 0 && v60 <= 3 )
                    {
                      LOBYTE(v56) = v60 != 0;
                      __asan_report_store4(v2 + 48, v56);
                    }
                    *(_DWORD *)(v2 + 48) = v59;
                    choose_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGChooseExcelConfig(
                                          this,
                                          *(unsigned int *)(v2 + 48));
                    if ( choose_config_ptr )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&choose_config_ptr->card_type >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)choose_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&choose_config_ptr->card_type >> 3)
                                                                                         + 0x7FFF8000) )
                      {
                        __asan_report_load4(&choose_config_ptr->card_type);
                      }
                      if ( choose_config_ptr->card_type != GCG_CARD_CHARACTER )
                      {
                        ret = -1;
                        *(_DWORD *)(((v2 + 1424) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1424) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1455) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 1455) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1424, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1424),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
                          "checkDeckConfig",
                          605);
                        v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1424),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v66 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                v65,
                                (const char (*)[42])byte_1AD6D6A0);
                        v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v66,
                                (const unsigned int *)(v2 + 48));
                        v68 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                v67,
                                (const char (*)[12])byte_1AD6D660);
                        v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v68,
                                (const unsigned int *)(v2 + 32));
                        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                          v69,
                          (const char (*)[47])byte_1AD6D700);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1424));
                        *(_DWORD *)(((v2 + 1424) >> 3) + 0x7FFF8000) = -117901064;
                      }
                    }
                    else
                    {
                      ret = -1;
                      *(_DWORD *)(((v2 + 1360) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1360) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1391) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 1391) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1360, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1360),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
                        "checkDeckConfig",
                        599);
                      v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1360),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v62 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                              v61,
                              (const char (*)[45])byte_1AD6D600);
                      v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v62,
                              (const unsigned int *)(v2 + 48));
                      v64 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                              v63,
                              (const char (*)[12])byte_1AD6D660);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v64,
                        (const unsigned int *)(v2 + 32));
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1360));
                      *(_DWORD *)(((v2 + 1360) >> 3) + 0x7FFF8000) = -117901064;
                    }
                    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 464));
                  }
                  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                }
                else
                {
                  ret = -1;
                  *(_DWORD *)(((v2 + 1296) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1296) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1327) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 1327) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1296, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1296),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/GCGGameExcelConfig.cpp",
                    "checkDeckConfig",
                    589);
                  v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1296),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v55 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                          v54,
                          (const char (*)[65])byte_1AD6D580);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v55,
                    (const unsigned int *)(v2 + 32));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1296));
                  *(_DWORD *)(((v2 + 1296) >> 3) + 0x7FFF8000) = -117901064;
                }
              }
            }
            else
            {
              ret = -1;
              *(_DWORD *)(((v2 + 1232) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1232) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1263) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 96 + 79) & 7) >= *(_BYTE *)(((v2 + 1263) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1232, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1232),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GCGGameExcelConfig.cpp",
                "checkDeckConfig",
                580);
              v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1232),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v51 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      v50,
                      (const char (*)[51])byte_1AD6D520);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v51,
                (const unsigned int *)(v2 + 32));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1232));
              *(_DWORD *)(((v2 + 1232) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
          else
          {
            ret = -1;
            *(_DWORD *)(((v2 + 1168) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1168) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1199) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 1199) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1168, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1168),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GCGGameExcelConfig.cpp",
              "checkDeckConfig",
              573);
            v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1168),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v49 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                    v48,
                    (const char (*)[57])byte_1AD6D4C0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1168));
            *(_DWORD *)(((v2 + 1168) >> 3) + 0x7FFF8000) = -117901064;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 400));
        }
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
        __gnu_cxx::__normal_iterator<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *const)(v2 + 336));
      }
      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
    }
    v70 = std::vector<unsigned int>::size(&config->init_hp_list);
    if ( v70 > std::vector<unsigned int>::size(&config->character_list) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 1488) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1488) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1519) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 79) & 7) >= *(_BYTE *)(((v2 + 1519) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1488, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1488),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkDeckConfig",
        616);
      v71 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1488),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v72 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v71, (const char (*)[54])byte_1AD6D760);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1488));
      *(_DWORD *)(((v2 + 1488) >> 3) + 0x7FFF8000) = -117901064;
    }
    v73 = std::vector<unsigned int>::size(&config->init_energy_list);
    if ( v73 > std::vector<unsigned int>::size(&config->character_list) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 1552) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1552) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1583) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 1583) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1552, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1552),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkDeckConfig",
        621);
      v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1552),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v75 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v74, (const char (*)[54])byte_1AD6D7C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v75, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1552));
      *(_DWORD *)(((v2 + 1552) >> 3) + 0x7FFF8000) = -117901064;
    }
    v76 = ((_BYTE)config + 33) & 7;
    v77 = (*(_BYTE *)(((unsigned __int64)&config->is_deck_invalid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v76 >= *(_BYTE *)(((unsigned __int64)&config->is_deck_invalid >> 3) + 0x7FFF8000));
    if ( (_BYTE)v77 )
      __asan_report_load1(&config->is_deck_invalid, v76, v77);
    if ( !config->is_deck_invalid
      && !GCGDeckExcelConfigMgr::isDeckValid(
            &txt_config_mgr->gcg_deck_config_mgr,
            txt_config_mgr,
            &config->character_list,
            &config->card_list) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 1616) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1616) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1647) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 1647) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1616, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1616),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkDeckConfig",
        628);
      v78 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1616),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v79 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v78, (const char (*)[42])byte_1AD6D820);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1616));
      *(_DWORD *)(((v2 + 1616) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->card_back_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->card_back_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->card_back_id);
    }
    if ( config->card_back_id
      && !data::GCGDeckExcelConfigMgrBase::findGCGDeckBackExcelConfig(
            &txt_config_mgr->gcg_deck_config_mgr,
            config->card_back_id) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 1680) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1680) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1711) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 1711) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1680, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1680),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkDeckConfig",
        636);
      v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1680),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v81 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v80, (const char (*)[23])byte_1AD6D880);
      v82 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, &config->card_back_id);
      v83 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v82, (const char (*)[6])" ID: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v83, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1680));
      *(_DWORD *)(((v2 + 1680) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( !std::vector<bool>::empty(&config->character_card_face_gold_list) )
    {
      v84 = std::vector<bool>::size(&config->character_card_face_gold_list);
      v118 = std::vector<unsigned int>::size(&config->character_list);
      if ( v84 == v118 + std::vector<data::GCGWaitingCharacterInfo>::size(&config->waiting_character_list) )
      {
        v89 = ((v2 + 656) >> 3) + 2147450880;
        *(_WORD *)v89 = 0;
        *(_BYTE *)(v89 + 2) = 0;
        p_character_list = &config->character_list;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 656), &config->character_list);
        __for_range_6 = &config->waiting_character_list;
        *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 528, p_character_list);
        *(std::vector<data::GCGWaitingCharacterInfo>::const_iterator *)(v2 + 528) = std::vector<data::GCGWaitingCharacterInfo>::begin(__for_range_6);
        *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 560, p_character_list);
        *(std::vector<data::GCGWaitingCharacterInfo>::const_iterator *)(v2 + 560) = std::vector<data::GCGWaitingCharacterInfo>::end(__for_range_6);
        while ( 1 )
        {
          v91 = (char *)(v2 + 560);
          if ( !__gnu_cxx::operator!=<data::GCGWaitingCharacterInfo const*,std::vector<data::GCGWaitingCharacterInfo>>(
                  (const __gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *)(v2 + 528),
                  (const __gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *)(v2 + 560)) )
            break;
          waiting_character = __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo const*,std::vector<data::GCGWaitingCharacterInfo>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *const)(v2 + 528));
          std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 656), &waiting_character->id);
          __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo const*,std::vector<data::GCGWaitingCharacterInfo>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *const)(v2 + 528));
        }
        *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
        index = 0;
        v92 = ((v2 + 1872) >> 3) + 2147450880;
        *(_DWORD *)v92 = 0;
        *(_WORD *)(v92 + 4) = 0;
        std::map<unsigned int,bool>::map((std::map<unsigned int,bool> *const)(v2 + 1872));
        __for_range_7 = (std::vector<unsigned int> *)(v2 + 656);
        *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 592, v91);
        *(std::vector<unsigned int>::iterator *)(v2 + 592) = std::vector<unsigned int>::begin(__for_range_7);
        *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 624, v91);
        *(std::vector<unsigned int>::iterator *)(v2 + 624) = std::vector<unsigned int>::end(__for_range_7);
        while ( 1 )
        {
          v93 = (char *)(v2 + 624);
          if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 592),
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 624)) )
            break;
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
          v94 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 592));
          v95 = (int *)v94;
          if ( *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v94 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v94);
          }
          v96 = *v95;
          v97 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
          if ( v97 != 0 && v97 <= 3 )
          {
            LOBYTE(v93) = v97 != 0;
            __asan_report_store4(v2 + 64, v93);
          }
          *(_DWORD *)(v2 + 64) = v96;
          if ( index >= std::vector<bool>::size(&config->character_card_face_gold_list) )
            break;
          v98 = index++;
          is_gold = std::vector<bool>::operator[](&config->character_card_face_gold_list, v98);
          if ( std::map<unsigned int,bool>::count(
                 (const std::map<unsigned int,bool> *const)(v2 + 1872),
                 (const std::map<unsigned int,bool>::key_type *)(v2 + 64)) )
          {
            v99 = (char *)(v2 + 64);
            v100 = std::map<unsigned int,bool>::operator[](
                     (std::map<unsigned int,bool> *const)(v2 + 1872),
                     (const std::map<unsigned int,bool>::key_type *)(v2 + 64));
            v101 = v100;
            v102 = *(_BYTE *)(((unsigned __int64)v100 >> 3) + 0x7FFF8000);
            if ( v102 != 0 && ((unsigned __int8)v100 & 7) >= v102 )
            {
              LOBYTE(v99) = v102 != 0;
              __asan_report_load1(v100, v99, v100);
            }
            if ( is_gold != *v101 )
            {
              ret = -1;
              *(_DWORD *)(((v2 + 1808) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1808) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1839) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 1839) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1808, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1808),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GCGGameExcelConfig.cpp",
                "checkDeckConfig",
                668);
              v103 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v2 + 1808),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v104 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                       v103,
                       (const char (*)[68])byte_1AD6D940);
              v105 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v104,
                       (const unsigned int *)(v2 + 64));
              v106 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                       v105,
                       (const char (*)[9])byte_1AD6D9C0);
              v107 = common::milog::MiLogStream::operator<<<bool>(v106, &config->character_card_face_gold_list);
              v108 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                       v107,
                       (const char (*)[12])byte_1AD6DA00);
              v109 = common::milog::MiLogStream::operator<<<unsigned int>(
                       v108,
                       (const std::vector<unsigned int> *)(v2 + 656));
              v110 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v109, (const char (*)[7])" ID : ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v110, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1808));
              *(_DWORD *)(((v2 + 1808) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
          else
          {
            v111 = (char *)(v2 + 64);
            v112 = std::map<unsigned int,bool>::operator[](
                     (std::map<unsigned int,bool> *const)(v2 + 1872),
                     (const std::map<unsigned int,bool>::key_type *)(v2 + 64));
            v113 = v112;
            v114 = *(_BYTE *)(((unsigned __int64)v112 >> 3) + 0x7FFF8000);
            if ( v114 != 0 && ((unsigned __int8)v112 & 7) >= v114 )
            {
              LOBYTE(v111) = v114 != 0;
              __asan_report_store1(v112, v111, v112);
            }
            *v113 = is_gold;
          }
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 592));
        }
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
        std::map<unsigned int,bool>::~map((std::map<unsigned int,bool> *const)(v2 + 1872));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 656));
        v115 = ((v2 + 656) >> 3) + 2147450880;
        *(_WORD *)v115 = -1800;
        *(_BYTE *)(v115 + 2) = -8;
        v116 = ((v2 + 1872) >> 3) + 2147450880;
        *(_DWORD *)v116 = -117901064;
        *(_WORD *)(v116 + 4) = -1800;
      }
      else
      {
        ret = -1;
        *(_DWORD *)(((v2 + 1744) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1744) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1775) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 79) & 7) >= *(_BYTE *)(((v2 + 1775) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1744, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1744),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkDeckConfig",
          644);
        v85 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1744),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v86 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(v85, (const char (*)[82])byte_1AD6D8C0);
        v87 = common::milog::MiLogStream::operator<<<bool>(v86, &config->character_card_face_gold_list);
        v88 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v87, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v88, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1744));
        *(_DWORD *)(((v2 + 1744) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
LABEL_193:
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGDeckExcelConfig>,false,false> *const)(v2 + 80));
  }
  if ( v142 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80EC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 244) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1952LL, v142);
  }
  return ret;
};

// Line 686: range 0000000014414980-000000001441645B
int32_t __cdecl GCGGameExcelConfigMgr::checkRuleConfig(
        const GCGGameExcelConfigMgr *const this,
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
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v19; // rax
  unsigned int *v20; // rdx
  unsigned int v21; // r14d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v22; // rax
  unsigned int *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v32; // rax
  unsigned int *v33; // rdx
  unsigned int v34; // r14d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v35; // rax
  unsigned int *v36; // rdx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v45; // rax
  unsigned int *v46; // rdx
  unsigned int v47; // r14d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v48; // rax
  unsigned int *v49; // rdx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rdx
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v58; // rax
  unsigned int *v59; // rdx
  unsigned int v60; // r14d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v61; // rax
  unsigned int *v62; // rdx
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rdx
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rdx
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rdx
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v71; // rax
  unsigned int *v72; // rdx
  unsigned int v73; // r14d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v74; // rax
  unsigned int *v75; // rdx
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rdx
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rdx
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rdx
  int32_t ret; // [rsp+1Ch] [rbp-444h]
  data::GCGRuleExcelConfigMap *__for_range; // [rsp+20h] [rbp-440h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGRuleExcelConfig>,false,false>::reference v87; // [rsp+28h] [rbp-438h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGRuleExcelConfig> >::type *id; // [rsp+30h] [rbp-430h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGRuleExcelConfig> >::type *config; // [rsp+38h] [rbp-428h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-420h]
  const std::vector<unsigned int> *ai_reroll_think_time_vec; // [rsp+48h] [rbp-418h]
  const std::vector<unsigned int> *ai_select_on_stage_think_time_vec; // [rsp+50h] [rbp-410h]
  const std::vector<unsigned int> *ai_redraw_think_time_vec; // [rsp+58h] [rbp-408h]
  const std::vector<unsigned int> *ai_first_action_think_time_vec; // [rsp+60h] [rbp-400h]
  const std::vector<unsigned int> *ai_normal_action_think_time_vec; // [rsp+68h] [rbp-3F8h]
  char v96[1008]; // [rsp+70h] [rbp-3F0h] BYREF

  v2 = (unsigned __int64)v96;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(960LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "17 48 4 23 element_reaction_id:690 64 8 15 __for_begin:688 96 8 13 __for_end:688 128 8 15 __for_"
                        "begin:690 160 8 13 __for_end:690 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32"
                        " 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 "
                        "9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::checkRuleConfig;
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
  v4[536862747] = -218959118;
  v4[536862749] = -202116109;
  ret = 0;
  __for_range = &this->gcg_rule_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGRuleExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGRuleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGRuleExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGRuleExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GCGRuleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGRuleExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGRuleExcelConfig>,false> *)(v2 + 96)) )
      break;
    v87 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGRuleExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGRuleExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::GCGRuleExcelConfig>(v87);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGRuleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGRuleExcelConfig>(v87);
    __for_range_0 = &config->element_reaction_list;
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
      if ( !data::GCGGameExcelConfigMgrBase::findGCGElementReactionExcelConfig(this, *(unsigned int *)(v2 + 48)) )
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
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkRuleConfig",
          695);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v11, (const char (*)[30])byte_1AD6DC40);
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
    if ( !std::vector<unsigned int>::empty(&config->ai_reroll_think_time) )
    {
      ai_reroll_think_time_vec = &config->ai_reroll_think_time;
      if ( std::vector<unsigned int>::size(&config->ai_reroll_think_time) == 2 )
      {
        v19 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    ai_reroll_think_time_vec,
                                                                                                    0LL);
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        v21 = *v20;
        v22 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    ai_reroll_think_time_vec,
                                                                                                    1uLL);
        v23 = v22;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v22);
        }
        if ( v21 > *v23 )
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkRuleConfig",
            711);
          v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v25 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v24, (const char (*)[62])byte_1AD6DCE0);
          v26 = common::milog::MiLogStream::operator<<<unsigned int>(v25, ai_reroll_think_time_vec);
          v27 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v26, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, id);
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
          && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkRuleConfig",
          704);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v15, (const char (*)[51])byte_1AD6DC80);
        v17 = common::milog::MiLogStream::operator<<<unsigned int>(v16, ai_reroll_think_time_vec);
        v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    if ( !std::vector<unsigned int>::empty(&config->ai_select_on_stage_think_time) )
    {
      ai_select_on_stage_think_time_vec = &config->ai_select_on_stage_think_time;
      if ( std::vector<unsigned int>::size(&config->ai_select_on_stage_think_time) == 2 )
      {
        v32 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    ai_select_on_stage_think_time_vec,
                                                                                                    0LL);
        v33 = v32;
        if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v32);
        }
        v34 = *v33;
        v35 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    ai_select_on_stage_think_time_vec,
                                                                                                    1uLL);
        v36 = v35;
        if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v35);
        }
        if ( v34 > *v36 )
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkRuleConfig",
            728);
          v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v38 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v37, (const char (*)[62])byte_1AD6DDA0);
          v39 = common::milog::MiLogStream::operator<<<unsigned int>(v38, ai_select_on_stage_think_time_vec);
          v40 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v39, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, id);
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
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkRuleConfig",
          721);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v28, (const char (*)[51])byte_1AD6DD40);
        v30 = common::milog::MiLogStream::operator<<<unsigned int>(v29, ai_select_on_stage_think_time_vec);
        v31 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v30, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    if ( !std::vector<unsigned int>::empty(&config->ai_redraw_think_time) )
    {
      ai_redraw_think_time_vec = &config->ai_redraw_think_time;
      if ( std::vector<unsigned int>::size(&config->ai_redraw_think_time) == 2 )
      {
        v45 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    ai_redraw_think_time_vec,
                                                                                                    0LL);
        v46 = v45;
        if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v45);
        }
        v47 = *v46;
        v48 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    ai_redraw_think_time_vec,
                                                                                                    1uLL);
        v49 = v48;
        if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v48);
        }
        if ( v47 > *v49 )
        {
          ret = -1;
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkRuleConfig",
            745);
          v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 576),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v51 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v50, (const char (*)[62])byte_1AD6DE60);
          v52 = common::milog::MiLogStream::operator<<<unsigned int>(v51, ai_redraw_think_time_vec);
          v53 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v52, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
      {
        ret = -1;
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
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkRuleConfig",
          738);
        v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v42 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v41, (const char (*)[51])byte_1AD6DE00);
        v43 = common::milog::MiLogStream::operator<<<unsigned int>(v42, ai_redraw_think_time_vec);
        v44 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v43, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    if ( !std::vector<unsigned int>::empty(&config->ai_first_action_think_time) )
    {
      ai_first_action_think_time_vec = &config->ai_first_action_think_time;
      if ( std::vector<unsigned int>::size(&config->ai_first_action_think_time) == 2 )
      {
        v58 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    ai_first_action_think_time_vec,
                                                                                                    0LL);
        v59 = v58;
        if ( *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v58 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v58);
        }
        v60 = *v59;
        v61 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    ai_first_action_think_time_vec,
                                                                                                    1uLL);
        v62 = v61;
        if ( *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v61 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v61);
        }
        if ( v60 > *v62 )
        {
          ret = -1;
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 704, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 704),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkRuleConfig",
            762);
          v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 704),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v64 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(v63, (const char (*)[68])byte_1AD6DF20);
          v65 = common::milog::MiLogStream::operator<<<unsigned int>(v64, ai_first_action_think_time_vec);
          v66 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v65, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
      {
        ret = -1;
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
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkRuleConfig",
          755);
        v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 640),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v55 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v54, (const char (*)[57])byte_1AD6DEC0);
        v56 = common::milog::MiLogStream::operator<<<unsigned int>(v55, ai_first_action_think_time_vec);
        v57 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v56, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    if ( !std::vector<unsigned int>::empty(&config->ai_normal_action_think_time) )
    {
      ai_normal_action_think_time_vec = &config->ai_normal_action_think_time;
      if ( std::vector<unsigned int>::size(&config->ai_normal_action_think_time) == 2 )
      {
        v71 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    ai_normal_action_think_time_vec,
                                                                                                    0LL);
        v72 = v71;
        if ( *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v71 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v71);
        }
        v73 = *v72;
        v74 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    ai_normal_action_think_time_vec,
                                                                                                    1uLL);
        v75 = v74;
        if ( *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v74 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v74);
        }
        if ( v73 > *v75 )
        {
          ret = -1;
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkRuleConfig",
            779);
          v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 832),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v77 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(v76, (const char (*)[68])byte_1AD6E000);
          v78 = common::milog::MiLogStream::operator<<<unsigned int>(v77, ai_normal_action_think_time_vec);
          v79 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v78, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
      {
        ret = -1;
        *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 768, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 768),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkRuleConfig",
          772);
        v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 768),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v68 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v67, (const char (*)[57])byte_1AD6DFA0);
        v69 = common::milog::MiLogStream::operator<<<unsigned int>(v68, ai_normal_action_think_time_vec);
        v70 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v69, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
        *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->monster_think_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->monster_think_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->monster_think_time);
    }
    if ( config->monster_think_time > 0x14 )
    {
      ret = -1;
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkRuleConfig",
        786);
      v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 896),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v81 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v80, (const char (*)[39])byte_1AD6E080);
      v82 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, &config->monster_think_time);
      v83 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v82, (const char (*)[6])" ID: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v83, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
      *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGRuleExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGRuleExcelConfig>,false,false> *const)(v2 + 64));
  }
  if ( v96 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
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
  }
  return ret;
};

// Line 793: range 000000001441645C-0000000014416B05
int32_t __cdecl GCGGameExcelConfigMgr::checkElementReactionConfig(
        const GCGGameExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::GCGEffectElementType *p_element_type1; // rax
  data::GCGEffectElementType element_type1; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  __int64 Description; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  const GCGGameExcelConfigMgr *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-154h]
  data::GCGElementReactionExcelConfigMap *__for_range; // [rsp+20h] [rbp-150h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGElementReactionExcelConfig>,false,false>::reference v20; // [rsp+28h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGElementReactionExcelConfig> >::type *id; // [rsp+30h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGElementReactionExcelConfig> >::type *config; // [rsp+38h] [rbp-138h]
  char v23[304]; // [rsp+40h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:795 64 8 13 __for_end:795 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::checkElementReactionConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->gcg_element_reaction_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGElementReactionExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGElementReactionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGElementReactionExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGElementReactionExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGElementReactionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGElementReactionExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGElementReactionExcelConfig>,false> *)(v2 + 64)) )
  {
    v20 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGElementReactionExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGElementReactionExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::GCGElementReactionExcelConfig>(v20);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGElementReactionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGElementReactionExcelConfig>(v20);
    p_element_type1 = &config->element_type1;
    if ( *(_BYTE *)(((unsigned __int64)p_element_type1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_element_type1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_element_type1 >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(p_element_type1);
    }
    element_type1 = config->element_type1;
    if ( *(_BYTE *)(((unsigned __int64)&config->element_type2 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->element_type2 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->element_type2);
    }
    if ( element_type1 == config->element_type2 )
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkElementReactionConfig",
        800);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v7, (const char (*)[21])byte_1AD6E1A0);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&config->element_type1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->element_type1 >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->element_type1);
      }
      Description = (__int64)data::getDescription(config->element_type1);
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        Description = __asan_report_store8(v2 + 96, (((_BYTE)config + 12) & 7u) + 3);
      *(_QWORD *)(v2 + 96) = Description;
      v10 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v2 + 96));
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" ID: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      v12 = this;
      if ( *(_BYTE *)(((unsigned __int64)&config->skill_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->skill_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->skill_id);
      }
      if ( !data::GCGGameExcelConfigMgrBase::findGCGSkillExcelConfig(v12, config->skill_id) )
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
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkElementReactionConfig",
          806);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v13, (const char (*)[30])byte_1AD6E1E0);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->skill_id);
        v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGElementReactionExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGElementReactionExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 814: range 0000000014416B06-00000000144183A7
int32_t __cdecl GCGGameExcelConfigMgr::checkCardConfig(
        const GCGGameExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::GCGCardType *p_card_type; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  std::tuple_element<0,std::pair<unsigned int const,data::GCGCardExcelConfig> >::type *v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  char *v11; // rsi
  unsigned int *v12; // rax
  int *v13; // rdx
  int v14; // ecx
  char v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  unsigned __int64 v20; // rax
  const data::GCGTagType *M_current; // r14
  std::vector<data::GCGTagType>::const_iterator v22; // rax
  std::set<data::GCGTagType>::size_type v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  std::vector<data::GCGCost> *p_cost_list; // rsi
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  char *v31; // rsi
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  char *v34; // rsi
  unsigned int *v35; // rax
  int *v36; // rdx
  int v37; // ecx
  char v38; // al
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rdx
  unsigned __int64 v49; // rax
  int32_t ret; // [rsp+1Ch] [rbp-454h]
  data::GCGCardExcelConfigMap *__for_range; // [rsp+20h] [rbp-450h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardExcelConfig>,false,false>::reference v53; // [rsp+28h] [rbp-448h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGCardExcelConfig> >::type *id; // [rsp+30h] [rbp-440h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGCardExcelConfig> >::type *config; // [rsp+38h] [rbp-438h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-430h]
  const std::vector<data::GCGCost> *__for_range_1; // [rsp+48h] [rbp-428h]
  const data::GCGCost *cost; // [rsp+50h] [rbp-420h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+58h] [rbp-418h]
  char v60[1040]; // [rsp+60h] [rbp-410h] BYREF

  v2 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(992LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "20 48 4 12 skill_id:828 64 4 13 choose_id:867 80 8 15 __for_begin:816 112 8 13 __for_end:816 144"
                        " 8 15 __for_begin:828 176 8 13 __for_end:828 208 8 15 __for_begin:854 240 8 13 __for_end:854 272"
                        " 8 15 __for_begin:867 304 8 13 __for_end:867 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unk"
                        "nown> 528 32 9 <unknown> 592 32 9 <unknown> 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unkn"
                        "own> 848 32 9 <unknown> 912 48 11 tag_set:838";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::checkCardConfig;
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
  v4[536862750] = -202116109;
  ret = 0;
  __for_range = &this->gcg_card_excel_config_map;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGCardExcelConfig>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::GCGCardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGCardExcelConfig>::const_iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::GCGCardExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGCardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardExcelConfig>,false> *)(v2 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardExcelConfig>,false> *)(v2 + 112)) )
  {
    v53 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardExcelConfig>,false,false> *const)(v2 + 80));
    id = std::get<0ul,unsigned int const,data::GCGCardExcelConfig>(v53);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGCardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGCardExcelConfig>(v53);
    p_card_type = &config->card_type;
    if ( *(_BYTE *)(((unsigned __int64)p_card_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_card_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_card_type);
    }
    if ( config->card_type <= (unsigned int)GCG_CARD_CHARACTER )
    {
      ret = -1;
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkCardConfig",
        821);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 336),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v6, (const char (*)[27])byte_1AD6E420);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
      *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    v8 = (std::tuple_element<0,std::pair<unsigned int const,data::GCGCardExcelConfig> >::type *)*id;
    if ( GCGGameExcelConfigMgr::isCardIdInCharacterRange(this, (uint32_t)v8) )
    {
      ret = -1;
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkCardConfig",
        826);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 400),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(v9, (const char (*)[66])byte_1AD6E460);
      v8 = id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
      *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = -117901064;
    }
    __for_range_0 = &config->skill_list;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v8);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 144) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v8);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 176) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v11 = (char *)(v2 + 176);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 144),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 176)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v12 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 144));
      v13 = (int *)v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      v14 = *v13;
      v15 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v15 != 0 && v15 <= 3 )
      {
        LOBYTE(v11) = v15 != 0;
        __asan_report_store4(v2 + 48, v11);
      }
      *(_DWORD *)(v2 + 48) = v14;
      if ( !data::GCGGameExcelConfigMgrBase::findGCGSkillExcelConfig(this, *(unsigned int *)(v2 + 48)) )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 464) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 464, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 464),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkCardConfig",
          833);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 464),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v16, (const char (*)[33])byte_1AD6E4E0);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v2 + 48));
        v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])byte_1AD6B6E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 464));
        *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 144));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    v20 = ((v2 + 912) >> 3) + 2147450880;
    *(_DWORD *)v20 = 0;
    *(_WORD *)(v20 + 4) = 0;
    M_current = std::vector<data::GCGTagType>::end(&config->tag_list)._M_current;
    v22._M_current = std::vector<data::GCGTagType>::begin(&config->tag_list)._M_current;
    std::set<data::GCGTagType>::set<__gnu_cxx::__normal_iterator<data::GCGTagType const*,std::vector<data::GCGTagType>>>(
      (std::set<data::GCGTagType> *const)(v2 + 912),
      v22,
      (__gnu_cxx::__normal_iterator<const data::GCGTagType*,std::vector<data::GCGTagType> >)M_current);
    v23 = std::set<data::GCGTagType>::size((const std::set<data::GCGTagType> *const)(v2 + 912));
    if ( v23 != std::vector<data::GCGTagType>::size(&config->tag_list) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 528) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 559) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 79) & 7) >= *(_BYTE *)(((v2 + 559) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 528, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 528),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkCardConfig",
        842);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 528),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v25 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v24, (const char (*)[30])byte_1AD6E540);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 528));
      *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( GCGGameExcelConfigMgr::checkTagSet(this, (const std::set<data::GCGTagType> *)(v2 + 912)) )
    {
      ret = -1;
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkCardConfig",
        847);
      v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 592),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v27 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v26, (const char (*)[27])byte_1AD6E580);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 592));
      *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = -117901064;
    }
    p_cost_list = &config->cost_list;
    if ( GCGGameExcelConfigMgr::checkCostList(this, &config->cost_list) )
    {
      ret = -1;
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkCardConfig",
        852);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 656),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v30 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v29, (const char (*)[30])byte_1AD6E5C0);
      p_cost_list = (std::vector<data::GCGCost> *)id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 656));
      *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = -117901064;
    }
    __for_range_1 = &config->cost_list;
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, p_cost_list);
    *(std::vector<data::GCGCost>::const_iterator *)(v2 + 208) = std::vector<data::GCGCost>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 240, p_cost_list);
    *(std::vector<data::GCGCost>::const_iterator *)(v2 + 240) = std::vector<data::GCGCost>::end(__for_range_1);
    while ( 1 )
    {
      v31 = (char *)(v2 + 240);
      if ( !__gnu_cxx::operator!=<data::GCGCost const*,std::vector<data::GCGCost>>(
              (const __gnu_cxx::__normal_iterator<const data::GCGCost*,std::vector<data::GCGCost> > *)(v2 + 208),
              (const __gnu_cxx::__normal_iterator<const data::GCGCost*,std::vector<data::GCGCost> > *)(v2 + 240)) )
        break;
      cost = __gnu_cxx::__normal_iterator<data::GCGCost const*,std::vector<data::GCGCost>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGCost*,std::vector<data::GCGCost> > *const)(v2 + 208));
      if ( *(_BYTE *)(((unsigned __int64)&cost->cost_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cost->cost_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cost->cost_type);
      }
      if ( cost->cost_type == GCG_COST_ENERGY )
      {
        if ( std::vector<unsigned int>::empty(&config->choose_target_list) )
        {
          ret = -1;
          *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 720) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 720, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 720),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkCardConfig",
            862);
          v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 720),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v33 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v32, (const char (*)[53])byte_1AD6E600);
          v31 = (char *)id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 720));
          *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = -117901064;
        }
        break;
      }
      __gnu_cxx::__normal_iterator<data::GCGCost const*,std::vector<data::GCGCost>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGCost*,std::vector<data::GCGCost> > *const)(v2 + 208));
    }
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
    __for_range_2 = &config->choose_target_list;
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 272, v31);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 272) = std::vector<unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 304, v31);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 304) = std::vector<unsigned int>::end(__for_range_2);
    while ( 1 )
    {
      v34 = (char *)(v2 + 304);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 272),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 304)) )
        break;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
      v35 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 272));
      v36 = (int *)v35;
      if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v35);
      }
      v37 = *v36;
      v38 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
      if ( v38 != 0 && v38 <= 3 )
      {
        LOBYTE(v34) = v38 != 0;
        __asan_report_store4(v2 + 64, v34);
      }
      *(_DWORD *)(v2 + 64) = v37;
      if ( !data::GCGGameExcelConfigMgrBase::findGCGChooseExcelConfig(this, *(unsigned int *)(v2 + 64)) )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 784) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 784) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 815) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 79) & 7) >= *(_BYTE *)(((v2 + 815) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 784, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 784),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkCardConfig",
          872);
        v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 784),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v40 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v39, (const char (*)[45])byte_1AD6D600);
        v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v40,
                (const unsigned int *)(v2 + 64));
        v42 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v41, (const char (*)[9])byte_1AD6B6E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 784));
        *(_DWORD *)(((v2 + 784) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 272));
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&config->pay_card_ai_min_dice_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->pay_card_ai_min_dice_num >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->pay_card_ai_min_dice_num);
    }
    if ( config->pay_card_ai_min_dice_num )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->pay_card_ai_max_dice_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->pay_card_ai_max_dice_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->pay_card_ai_max_dice_num);
      }
      if ( config->pay_card_ai_max_dice_num && config->pay_card_ai_min_dice_num > config->pay_card_ai_max_dice_num )
      {
        ret = -1;
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
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkCardConfig",
          881);
        v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 848),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v44 = common::milog::MiLogStream::operator<<<char [88],(char *[88])0>(v43, (const char (*)[88])byte_1AD6E660);
        v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v44,
                &config->pay_card_ai_min_dice_num);
        v46 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v45, (const char (*)[6])" Max:");
        v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v46,
                &config->pay_card_ai_max_dice_num);
        v48 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v47, (const char (*)[9])byte_1AD6B6E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 848));
        *(_DWORD *)(((v2 + 848) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::set<data::GCGTagType>::~set((std::set<data::GCGTagType> *const)(v2 + 912));
    v49 = ((v2 + 912) >> 3) + 2147450880;
    *(_DWORD *)v49 = -117901064;
    *(_WORD *)(v49 + 4) = -1800;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardExcelConfig>,false,false> *const)(v2 + 80));
  }
  if ( v60 == (char *)v2 )
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

// Line 890: range 00000000144183A8-00000000144192A8
int32_t __cdecl GCGGameExcelConfigMgr::checkCharConfig(
        const GCGGameExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::GCGCardType *p_card_type; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  std::tuple_element<0,std::pair<unsigned int const,data::GCGCharExcelConfig> >::type *v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  char *v11; // rsi
  unsigned int *v12; // rax
  int *v13; // rdx
  int v14; // ecx
  char v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  unsigned __int64 v20; // rax
  const data::GCGTagType *M_current; // r14
  std::vector<data::GCGTagType>::const_iterator v22; // rax
  std::set<data::GCGTagType>::size_type v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  unsigned __int64 v30; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-2DCh]
  data::GCGCharExcelConfigMap *__for_range; // [rsp+18h] [rbp-2D8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCharExcelConfig>,false,false>::reference v34; // [rsp+20h] [rbp-2D0h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGCharExcelConfig> >::type *id; // [rsp+28h] [rbp-2C8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGCharExcelConfig> >::type *config; // [rsp+30h] [rbp-2C0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-2B8h]
  char v38[688]; // [rsp+40h] [rbp-2B0h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 4 12 skill_id:904 48 8 15 __for_begin:892 80 8 13 __for_end:892 112 8 15 __for_begin:904 1"
                        "44 8 13 __for_end:904 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown"
                        "> 432 32 9 <unknown> 496 32 9 <unknown> 560 48 11 tag_set:913";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::checkCharConfig;
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
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862739] = -202116109;
  ret = 0;
  __for_range = &this->gcg_char_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGCharExcelConfig>::const_iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::GCGCharExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGCharExcelConfig>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::GCGCharExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGCharExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCharExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCharExcelConfig>,false> *)(v2 + 80)) )
  {
    v34 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCharExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCharExcelConfig>,false,false> *const)(v2 + 48));
    id = std::get<0ul,unsigned int const,data::GCGCharExcelConfig>(v34);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGCharExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGCharExcelConfig>(v34);
    p_card_type = &config->card_type;
    if ( *(_BYTE *)(((unsigned __int64)p_card_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_card_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_card_type);
    }
    if ( config->card_type != GCG_CARD_CHARACTER )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkCharConfig",
        897);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 176),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v6, (const char (*)[36])byte_1AD6E860);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    v8 = (std::tuple_element<0,std::pair<unsigned int const,data::GCGCharExcelConfig> >::type *)*id;
    if ( !GCGGameExcelConfigMgr::isCardIdInCharacterRange(this, (uint32_t)v8) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 15) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkCharConfig",
        902);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 240),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v9, (const char (*)[63])byte_1AD6E8C0);
      v8 = id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
    }
    __for_range_0 = &config->skill_list;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, v8);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 112) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v8);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 144) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v11 = (char *)(v2 + 144);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 112),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 144)) )
        break;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      v12 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 112));
      v13 = (int *)v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      v14 = *v13;
      v15 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
      if ( v15 != 0 && v15 <= 3 )
      {
        LOBYTE(v11) = v15 != 0;
        __asan_report_store4(v2 + 32, v11);
      }
      *(_DWORD *)(v2 + 32) = v14;
      if ( !data::GCGGameExcelConfigMgrBase::findGCGSkillExcelConfig(this, *(unsigned int *)(v2 + 32)) )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 304, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 304),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkCharConfig",
          909);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 304),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v16, (const char (*)[33])byte_1AD6E4E0);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v2 + 32));
        v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])byte_1AD6B6E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
        *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 112));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    v20 = ((v2 + 560) >> 3) + 2147450880;
    *(_DWORD *)v20 = 0;
    *(_WORD *)(v20 + 4) = 0;
    M_current = std::vector<data::GCGTagType>::end(&config->tag_list)._M_current;
    v22._M_current = std::vector<data::GCGTagType>::begin(&config->tag_list)._M_current;
    std::set<data::GCGTagType>::set<__gnu_cxx::__normal_iterator<data::GCGTagType const*,std::vector<data::GCGTagType>>>(
      (std::set<data::GCGTagType> *const)(v2 + 560),
      v22,
      (__gnu_cxx::__normal_iterator<const data::GCGTagType*,std::vector<data::GCGTagType> >)M_current);
    v23 = std::set<data::GCGTagType>::size((const std::set<data::GCGTagType> *const)(v2 + 560));
    if ( v23 != std::vector<data::GCGTagType>::size(&config->tag_list) )
    {
      ret = -1;
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkCharConfig",
        917);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v25 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v24, (const char (*)[30])byte_1AD6E540);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( GCGGameExcelConfigMgr::checkTagSet(this, (const std::set<data::GCGTagType> *)(v2 + 560)) )
    {
      ret = -1;
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkCharConfig",
        922);
      v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 432),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v27 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v26, (const char (*)[27])byte_1AD6E580);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
      *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->hp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->hp >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->hp);
    }
    if ( !config->hp )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 15) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 496, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 496),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkCharConfig",
        928);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 496),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v29 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v28, (const char (*)[34])byte_1AD6E920);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
      *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::set<data::GCGTagType>::~set((std::set<data::GCGTagType> *const)(v2 + 560));
    v30 = ((v2 + 560) >> 3) + 2147450880;
    *(_DWORD *)v30 = -117901064;
    *(_WORD *)(v30 + 4) = -1800;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCharExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCharExcelConfig>,false,false> *const)(v2 + 48));
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

// Line 935: range 00000000144192AA-0000000014419E8F
int32_t __cdecl GCGGameExcelConfigMgr::checkSkillConfig(
        const GCGGameExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  std::__shared_ptr_access<GCGConfigMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  void *p_cost_list; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  char *v15; // rsi
  unsigned int *v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int32_t ret; // [rsp+14h] [rbp-25Ch]
  std::shared_ptr<GCGConfigMgr> *gcg_config_mgr_ptr; // [rsp+18h] [rbp-258h]
  data::GCGSkillExcelConfigMap *__for_range; // [rsp+20h] [rbp-250h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false,false>::reference v32; // [rsp+28h] [rbp-248h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGSkillExcelConfig> >::type *id; // [rsp+30h] [rbp-240h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGSkillExcelConfig> >::type *config; // [rsp+38h] [rbp-238h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-230h]
  const data::GCGCardConfig *card_config_ptr; // [rsp+48h] [rbp-228h]
  char v37[544]; // [rsp+50h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 4 11 card_id:955 64 8 15 __for_begin:943 96 8 13 __for_end:943 128 8 15 __for_begin:955 16"
                        "0 8 13 __for_end:955 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>"
                        " 448 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::checkSkillConfig;
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
  gcg_config_mgr_ptr = &TxtConfigMgr::getConfig(txt_config_mgr)->gcg_config_mgr_ptr;
  if ( std::operator==<GCGConfigMgr>(gcg_config_mgr_ptr, 0LL) )
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
      "./src/txt_data_manual/GCGGameExcelConfig.cpp",
      "checkSkillConfig",
      940);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v5, (const char (*)[35])byte_1AD6EAA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = -1;
  }
  else
  {
    __for_range = &this->gcg_skill_excel_config_map;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, 0LL);
    *(std::unordered_map<unsigned int,data::GCGSkillExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGSkillExcelConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, 0LL);
    *(std::unordered_map<unsigned int,data::GCGSkillExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGSkillExcelConfig>::end(__for_range);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false> *)(v2 + 64),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false> *)(v2 + 96)) )
    {
      v32 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false,false> *const)(v2 + 64));
      id = std::get<0ul,unsigned int const,data::GCGSkillExcelConfig>(v32);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGSkillExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGSkillExcelConfig>(v32);
      v7 = std::__shared_ptr_access<GCGConfigMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGConfigMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)gcg_config_mgr_ptr);
      if ( !GCGConfigMgr::findGCGSkillConfig(v7, &config->skill_json) )
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
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkSkillConfig",
          948);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 256),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v8, (const char (*)[36])byte_1AD6EB00);
        v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &config->skill_json);
        v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])byte_1AD6EB60);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      }
      p_cost_list = &config->cost_list;
      if ( GCGGameExcelConfigMgr::checkCostList(this, &config->cost_list) )
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
          "./src/txt_data_manual/GCGGameExcelConfig.cpp",
          "checkSkillConfig",
          953);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v13, (const char (*)[33])byte_1AD6EBA0);
        p_cost_list = id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      }
      __for_range_0 = &config->block_ai_card_list;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, p_cost_list);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, p_cost_list);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v15 = (char *)(v2 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v16 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
        v17 = (int *)v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        v18 = *v17;
        v19 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v19 != 0 && v19 <= 3 )
        {
          LOBYTE(v15) = v19 != 0;
          __asan_report_store4(v2 + 48, v15);
        }
        *(_DWORD *)(v2 + 48) = v18;
        card_config_ptr = GCGGameExcelConfigMgr::findCardConfig(this, *(unsigned int *)(v2 + 48));
        if ( !card_config_ptr )
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkSkillConfig",
            961);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v20, (const char (*)[16])byte_1AD6EC00);
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
          v23 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v22, (const char (*)[50])byte_1AD6EC40);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
          *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
          break;
        }
        if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&card_config_ptr->card_type);
        }
        if ( card_config_ptr->card_type == GCG_CARD_CHARACTER )
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkSkillConfig",
            967);
          v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v24, (const char (*)[16])byte_1AD6EC00);
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
          v27 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v26, (const char (*)[38])byte_1AD6ECA0);
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v28, (const char (*)[35])byte_1AD6ED00);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          break;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSkillExcelConfig>,false,false> *const)(v2 + 64));
    }
    result = ret;
  }
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
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

// Line 976: range 0000000014419E90-000000001441AC7F
int32_t __cdecl GCGGameExcelConfigMgr::checkChooseConfig(
        const GCGGameExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  __int64 v6; // rsi
  uint32_t value; // ecx
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  __int64 v13; // rsi
  uint32_t v14; // ecx
  char v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  __int64 v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-298h]
  data::GCGChooseTargetCondType type; // [rsp+1Ch] [rbp-294h]
  data::GCGChooseExcelConfigMap *__for_range; // [rsp+20h] [rbp-290h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGChooseExcelConfig>,false,false>::reference v35; // [rsp+28h] [rbp-288h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGChooseExcelConfig> >::type *id; // [rsp+30h] [rbp-280h]
  std::vector<data::GCGChooseTargetCond> *__for_range_0; // [rsp+40h] [rbp-270h]
  const data::GCGChooseTargetCond *cond; // [rsp+48h] [rbp-268h]
  const data::GCGCardConfig *card_config_ptr_0; // [rsp+50h] [rbp-260h]
  char v40[592]; // [rsp+60h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 4 11 card_id:989 48 4 12 card_id:1002 64 8 15 __for_begin:978 96 8 13 __for_end:978 128 8 "
                        "15 __for_begin:980 160 8 13 __for_end:980 192 8 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown"
                        "> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::checkChooseConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -202116109;
  ret = 0;
  __for_range = &this->gcg_choose_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGChooseExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGChooseExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGChooseExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGChooseExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GCGChooseExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGChooseExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGChooseExcelConfig>,false> *)(v2 + 96)) )
      break;
    v35 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGChooseExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGChooseExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::GCGChooseExcelConfig>(v35);
    __for_range_0 = &std::get<1ul,unsigned int const,data::GCGChooseExcelConfig>(v35)->cond_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<data::GCGChooseTargetCond>::const_iterator *)(v2 + 128) = std::vector<data::GCGChooseTargetCond>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<data::GCGChooseTargetCond>::const_iterator *)(v2 + 160) = std::vector<data::GCGChooseTargetCond>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::GCGChooseTargetCond const*,std::vector<data::GCGChooseTargetCond>>(
              (const __gnu_cxx::__normal_iterator<const data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<const data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *)(v2 + 160)) )
    {
      cond = __gnu_cxx::__normal_iterator<data::GCGChooseTargetCond const*,std::vector<data::GCGChooseTargetCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *const)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->type);
      }
      type = cond->type;
      switch ( type )
      {
        case CARD:
          *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
          v6 = (((_BYTE)cond + 12) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&cond->value);
          }
          value = cond->value;
          v8 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
          if ( v8 != 0 && v8 <= 3 )
          {
            LOBYTE(v6) = v8 != 0;
            __asan_report_store4(v2 + 32, v6);
          }
          *(_DWORD *)(v2 + 32) = value;
          if ( !GCGGameExcelConfigMgr::findCardConfig(this, *(unsigned int *)(v2 + 32)) )
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
              "./src/txt_data_manual/GCGGameExcelConfig.cpp",
              "checkChooseConfig",
              994);
            v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v2 + 224),
                   (const char (*)[16])"[CONFIG_ERROR] ");
            v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1AD6EEA0);
            v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v10,
                    (const unsigned int *)(v2 + 32));
            v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" ID: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
            *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
          }
          *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
          break;
        case ONSTAGE:
        case HAS_MODIFY_STATE_WITH_TAG:
        case NOT_HAS_MODIFY_STATE_WITH_TAG:
        case SAME_WEAPON_TYPE_WITH:
        case IS_ALIVE_CHARACTER:
          break;
        case HAS_MODIFY_STATE:
        case NOT_HAS_MODIFY_STATE:
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
          v13 = (((_BYTE)cond + 12) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&cond->value);
          }
          v14 = cond->value;
          v15 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
          if ( v15 != 0 && v15 <= 3 )
          {
            LOBYTE(v13) = v15 != 0;
            __asan_report_store4(v2 + 48, v13);
          }
          *(_DWORD *)(v2 + 48) = v14;
          card_config_ptr_0 = GCGGameExcelConfigMgr::findCardConfig(this, *(unsigned int *)(v2 + 48));
          if ( card_config_ptr_0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr_0->card_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)card_config_ptr_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr_0->card_type >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&card_config_ptr_0->card_type);
            }
            if ( card_config_ptr_0->card_type != GCG_CARD_MODIFY && card_config_ptr_0->card_type != GCG_CARD_STATE )
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
                "./src/txt_data_manual/GCGGameExcelConfig.cpp",
                "checkChooseConfig",
                1014);
              v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 352),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v21 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      v20,
                      (const char (*)[46])byte_1AD6EF00);
              v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v21,
                      (const unsigned int *)(v2 + 48));
              v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" ID: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, id);
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
              "./src/txt_data_manual/GCGGameExcelConfig.cpp",
              "checkChooseConfig",
              1007);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 288),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v16,
                    (const char (*)[33])byte_1AD6EEA0);
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v2 + 48));
            v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" ID: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
            *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
          }
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
          break;
        case SAME_WEAPON_TYPE_CHAR_COUNT:
        case ALIVE_CHAR_COUNT:
          if ( *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->value >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&cond->value);
          }
          if ( !cond->value )
          {
            ret = -1;
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
              "./src/txt_data_manual/GCGGameExcelConfig.cpp",
              "checkChooseConfig",
              1024);
            v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 416),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v25 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    v24,
                    (const char (*)[28])byte_1AD6EF60);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
            *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          }
          break;
        default:
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkChooseConfig",
            1038);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 480),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v27 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v26, (const char (*)[42])byte_1AD6EFA0);
          *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
          v28 = (__int64)data::enumValToStr(type, (__int64)byte_1AD6EFA0);
          if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
            v28 = __asan_report_store8(v2 + 192, byte_1AD6EFA0);
          *(_QWORD *)(v2 + 192) = v28;
          v29 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v27,
                  (const char *const *)(v2 + 192));
          v30 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v29, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, id);
          *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
          *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
          break;
      }
      __gnu_cxx::__normal_iterator<data::GCGChooseTargetCond const*,std::vector<data::GCGChooseTargetCond>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGChooseExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGChooseExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 1048: range 000000001441AC80-000000001441AC97
int32_t __cdecl GCGGameExcelConfigMgr::checkTagConfig(
        const GCGGameExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1054: range 000000001441AC98-000000001441AE78
bool __fastcall GCGGameExcelConfigMgr::checkCardHasTag(
        const GCGGameExcelConfigMgr *const this,
        __int64 card_id,
        data::GCGTagType tag_type)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::set<data::GCGTagType>> *p_card_tag_set_map; // rdx
  std::unordered_map<unsigned int,std::set<data::GCGTagType>> *v7; // rdx
  bool v8; // al
  bool result; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<data::GCGTagType> >,false,false>::pointer v10; // rax
  char v12[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 card_id:1053 48 4 13 tag_type:1053 64 8 9 iter:1055 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GCGGameExcelConfigMgr::checkCardHasTag;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = card_id;
  *(_DWORD *)(v3 + 48) = tag_type;
  p_card_tag_set_map = &this->card_tag_set_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, card_id);
  *(std::unordered_map<unsigned int,std::set<data::GCGTagType>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<data::GCGTagType>>::find(
                                                                                                p_card_tag_set_map,
                                                                                                (const std::unordered_map<unsigned int,std::set<data::GCGTagType>>::key_type *)(v3 + 32));
  v7 = &this->card_tag_set_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::set<data::GCGTagType>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<data::GCGTagType>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::set<data::GCGTagType>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<data::GCGTagType> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<data::GCGTagType> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<data::GCGTagType>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<data::GCGTagType> >,false,false> *const)(v3 + 64));
    result = common::tools::MiscUtils::isContains<std::set<data::GCGTagType> const,data::GCGTagType>(
               &v10->second,
               (const data::GCGTagType *)(v3 + 48));
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

// Line 1064: range 000000001441AE7A-000000001441AEEF
data::GCGCardType __cdecl GCGGameExcelConfigMgr::getCardType(const GCGGameExcelConfigMgr *const this, uint32_t card_id)
{
  const data::GCGCardConfig *config_ptr; // [rsp+18h] [rbp-8h]

  config_ptr = GCGGameExcelConfigMgr::findCardConfig(this, card_id);
  if ( !config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->card_type >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->card_type);
  }
  return config_ptr->card_type;
};

// Line 1074: range 000000001441AEF0-000000001441B10D
const std::set<data::GCGTagType> *__fastcall GCGGameExcelConfigMgr::getCardTagSet(
        const GCGGameExcelConfigMgr *const this,
        const std::set<data::GCGTagType> *card_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<data::GCGTagType>> *p_card_tag_set_map; // rdx
  std::unordered_map<unsigned int,std::set<data::GCGTagType>> *v6; // rdx
  bool v7; // al
  const std::set<data::GCGTagType> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 card_id:1073 64 8 9 iter:1076 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::getCardTagSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)card_id;
  if ( !(_BYTE)`guard variable for'GCGGameExcelConfigMgr::getCardTagSet(unsigned int)::temp_tag_set
    && __cxa_guard_acquire(&`guard variable for'GCGGameExcelConfigMgr::getCardTagSet(unsigned int)::temp_tag_set) )
  {
    std::set<data::GCGTagType>::set((std::set<data::GCGTagType> *const)&GCGGameExcelConfigMgr::getCardTagSet(unsigned int)const::temp_tag_set);
    __cxa_guard_release(&`guard variable for'GCGGameExcelConfigMgr::getCardTagSet(unsigned int)::temp_tag_set);
    card_id = &GCGGameExcelConfigMgr::getCardTagSet(unsigned int)const::temp_tag_set;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::set<data::GCGTagType>::~set,
      (void *)&GCGGameExcelConfigMgr::getCardTagSet(unsigned int)const::temp_tag_set,
      &_dso_handle);
  }
  p_card_tag_set_map = &this->card_tag_set_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, card_id);
  *(std::unordered_map<unsigned int,std::set<data::GCGTagType>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<data::GCGTagType>>::find(
                                                                                                p_card_tag_set_map,
                                                                                                (const std::unordered_map<unsigned int,std::set<data::GCGTagType>>::key_type *)(v2 + 48));
  v6 = &this->card_tag_set_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<data::GCGTagType>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<data::GCGTagType>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::set<data::GCGTagType>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<data::GCGTagType> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<data::GCGTagType> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &GCGGameExcelConfigMgr::getCardTagSet(unsigned int)const::temp_tag_set;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<data::GCGTagType>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<data::GCGTagType> >,false,false> *const)(v2 + 64))->second;
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

// Line 1085: range 000000001441B10E-000000001441B361
__int64 __fastcall GCGGameExcelConfigMgr::getDeckCardProtectedPriority(
        const GCGGameExcelConfigMgr *const this,
        __int64 deck_id,
        uint32_t card_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *p_card_protected_priority_map; // rdx
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  const std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  unsigned int *v11; // rdx
  std::map<unsigned int,unsigned int> *card_priority_map; // [rsp+18h] [rbp-A8h]
  char v14[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 deck_id:1084 48 4 12 card_id:1084 64 8 9 iter:1086 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GCGGameExcelConfigMgr::getDeckCardProtectedPriority;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = deck_id;
  *(_DWORD *)(v3 + 48) = card_id;
  p_card_protected_priority_map = &this->card_protected_priority_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, deck_id);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::find(p_card_protected_priority_map, (const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->card_protected_priority_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    card_priority_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v3 + 64))->second;
    if ( std::map<unsigned int,unsigned int>::count(
           card_priority_map,
           (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48)) )
    {
      v10 = std::map<unsigned int,unsigned int>::at(
              card_priority_map,
              (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      v11 = (unsigned int *)v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      result = *v11;
    }
    else
    {
      result = 0LL;
    }
  }
  if ( v14 == (char *)v3 )
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

// Line 1100: range 000000001441B362-000000001441B3D0
bool __cdecl GCGGameExcelConfigMgr::isCharacterRemoveAfterDie(
        const GCGGameExcelConfigMgr *const this,
        uint32_t card_id)
{
  const data::GCGCharExcelConfig *config_ptr; // [rsp+18h] [rbp-8h]

  config_ptr = data::GCGGameExcelConfigMgrBase::findGCGCharExcelConfig(this, card_id);
  if ( !config_ptr )
    return 0;
  if ( *(char *)(((unsigned __int64)&config_ptr->is_remove_after_die >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&config_ptr->is_remove_after_die, card_id, &config_ptr->is_remove_after_die);
  return config_ptr->is_remove_after_die;
};

// Line 1110: range 000000001441B3D2-000000001441B9CC
int32_t __cdecl GCGGameExcelConfigMgr::checkBlockAICardConfig(
        const GCGGameExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v5; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-144h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-140h]
  const unsigned int *card_id; // [rsp+28h] [rbp-138h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *block_card_id; // [rsp+30h] [rbp-130h]
  const data::GCGCardConfig *card_config_ptr; // [rsp+38h] [rbp-128h]
  char v22[288]; // [rsp+40h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 9 <unknown> 64 8 16 __for_begin:1112 96 8 14 __for_end:1112 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::checkBlockAICardConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->card_to_block_ai_card_id_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96)) )
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 32, v2 + 96);
    if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v5, 8LL);
    }
    *(std::pair<unsigned int const,unsigned int> *)(v2 + 32) = *v5;
    card_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 32));
    v6 = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 32));
    block_card_id = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    card_config_ptr = GCGGameExcelConfigMgr::findCardConfig(this, *block_card_id);
    if ( !card_config_ptr )
    {
      ret = -1;
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkBlockAICardConfig",
        1118);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])byte_1AD6F1C0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, card_id);
      v10 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v9, (const char (*)[50])byte_1AD6EC40);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, block_card_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&card_config_ptr->card_type);
    }
    if ( card_config_ptr->card_type == GCG_CARD_CHARACTER )
    {
      ret = -1;
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkBlockAICardConfig",
        1124);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])byte_1AD6F1C0);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, card_id);
      v14 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v13, (const char (*)[38])byte_1AD6ECA0);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, block_card_id);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v15, (const char (*)[35])byte_1AD6ED00);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 1132: range 000000001441B9CE-000000001441BF48
int32_t __cdecl GCGGameExcelConfigMgr::checkAdvantureRuleConfig(
        const GCGGameExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  uint32_t *p_dice_incre_limit_num; // rax
  uint32_t dice_incre_limit_num; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  data::GCGAdvantureRuleExcelConfigMap *__for_range; // [rsp+20h] [rbp-130h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGAdvantureRuleExcelConfig>,false,false>::reference v17; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGAdvantureRuleExcelConfig> >::type *rule_id; // [rsp+30h] [rbp-120h]
  std::vector<data::GCGVirtualDiceCurveConfig> *__for_range_0; // [rsp+40h] [rbp-110h]
  const data::GCGVirtualDiceCurveConfig *rule_curve_config; // [rsp+48h] [rbp-108h]
  char v21[256]; // [rsp+50h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 16 __for_begin:1134 64 8 14 __for_end:1134 96 8 16 __for_begin:1136 128 8 14 __for_end:11"
                        "36 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::checkAdvantureRuleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->gcg_advanture_rule_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGAdvantureRuleExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGAdvantureRuleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGAdvantureRuleExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGAdvantureRuleExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GCGAdvantureRuleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGAdvantureRuleExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGAdvantureRuleExcelConfig>,false> *)(v2 + 64)) )
      break;
    v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGAdvantureRuleExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGAdvantureRuleExcelConfig>,false,false> *const)(v2 + 32));
    rule_id = std::get<0ul,unsigned int const,data::GCGAdvantureRuleExcelConfig>(v17);
    __for_range_0 = &std::get<1ul,unsigned int const,data::GCGAdvantureRuleExcelConfig>(v17)->virtual_dice_curve_config;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<data::GCGVirtualDiceCurveConfig>::const_iterator *)(v2 + 96) = std::vector<data::GCGVirtualDiceCurveConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<data::GCGVirtualDiceCurveConfig>::const_iterator *)(v2 + 128) = std::vector<data::GCGVirtualDiceCurveConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::GCGVirtualDiceCurveConfig const*,std::vector<data::GCGVirtualDiceCurveConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::GCGVirtualDiceCurveConfig*,std::vector<data::GCGVirtualDiceCurveConfig> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<const data::GCGVirtualDiceCurveConfig*,std::vector<data::GCGVirtualDiceCurveConfig> > *)(v2 + 128)) )
    {
      rule_curve_config = __gnu_cxx::__normal_iterator<data::GCGVirtualDiceCurveConfig const*,std::vector<data::GCGVirtualDiceCurveConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGVirtualDiceCurveConfig*,std::vector<data::GCGVirtualDiceCurveConfig> > *const)(v2 + 96));
      p_dice_incre_limit_num = &rule_curve_config->dice_incre_limit_num;
      if ( *(_BYTE *)(((unsigned __int64)p_dice_incre_limit_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_dice_incre_limit_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_dice_incre_limit_num >> 3)
                                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(p_dice_incre_limit_num);
      }
      if ( rule_curve_config->dice_incre_limit_num )
      {
        dice_incre_limit_num = rule_curve_config->dice_incre_limit_num;
        if ( *(_BYTE *)(((unsigned __int64)&rule_curve_config->dice_round_incre_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&rule_curve_config->dice_round_incre_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&rule_curve_config->dice_round_incre_num);
        }
        if ( dice_incre_limit_num < rule_curve_config->dice_round_incre_num )
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
            "./src/txt_data_manual/GCGGameExcelConfig.cpp",
            "checkAdvantureRuleConfig",
            1149);
          v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 160),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v8, (const char (*)[32])byte_1AD6F2C0);
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, rule_id);
          v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v10, (const char (*)[36])byte_1AD6F300);
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  &rule_curve_config->dice_incre_limit_num);
          v13 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v12, (const char (*)[29])byte_1AD6F360);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v13,
            &rule_curve_config->dice_round_incre_num);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
          *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      __gnu_cxx::__normal_iterator<data::GCGVirtualDiceCurveConfig const*,std::vector<data::GCGVirtualDiceCurveConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGVirtualDiceCurveConfig*,std::vector<data::GCGVirtualDiceCurveConfig> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGAdvantureRuleExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGAdvantureRuleExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v21 == (char *)v2 )
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

// Line 1159: range 000000001441BF4A-000000001441C689
int32_t __cdecl GCGGameExcelConfigMgr::checkCardViewConfig(
        const GCGGameExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  data::GCGCardType *p_card_type; // rax
  const GCGGameExcelConfigMgr *v9; // rcx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-184h]
  data::GCGCardViewExcelConfigMap *__for_range; // [rsp+20h] [rbp-180h]
  std::unordered_map<unsigned int,data::GCGCardConfig> *__for_range_0; // [rsp+28h] [rbp-178h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardConfig>,false,false>::reference v17; // [rsp+30h] [rbp-170h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGCardConfig> >::type *id_0; // [rsp+38h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGCardConfig> >::type *config_0; // [rsp+40h] [rbp-160h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardViewExcelConfig>,false,false>::reference v20; // [rsp+48h] [rbp-158h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGCardViewExcelConfig> >::type *id; // [rsp+50h] [rbp-150h]
  char v22[320]; // [rsp+60h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 16 __for_begin:1161 64 8 14 __for_end:1161 96 8 16 __for_begin:1170 128 8 14 __for_end:11"
                        "70 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGGameExcelConfigMgr::checkCardViewConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->gcg_card_view_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGCardViewExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGCardViewExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGCardViewExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGCardViewExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GCGCardViewExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardViewExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardViewExcelConfig>,false> *)(v2 + 64)) )
      break;
    v20 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardViewExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardViewExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::GCGCardViewExcelConfig>(v20);
    std::get<1ul,unsigned int const,data::GCGCardViewExcelConfig>(v20);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( !GCGGameExcelConfigMgr::findCardConfig(this, *id) )
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkCardViewConfig",
        1166);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v6, (const char (*)[40])byte_1AD6F480);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardViewExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardViewExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->card_config_map_;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::unordered_map<unsigned int,data::GCGCardConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GCGCardConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,data::GCGCardConfig>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::GCGCardConfig>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGCardConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGCardConfig>,false> *)(v2 + 128)) )
  {
    v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardConfig>,false,false> *const)(v2 + 96));
    id_0 = std::get<0ul,unsigned int const,data::GCGCardConfig>(v17);
    config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGCardConfig> >::type *)std::get<1ul,unsigned int const,data::GCGCardConfig>(v17);
    p_card_type = &config_0->card_type;
    if ( *(_BYTE *)(((unsigned __int64)p_card_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_card_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_card_type);
    }
    if ( config_0->card_type == GCG_CARD_ONSTAGE || config_0->card_type == GCG_CARD_STATE )
      goto LABEL_31;
    v9 = this;
    if ( *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id_0);
    }
    if ( data::GCGGameExcelConfigMgrBase::findGCGCardViewExcelConfig(v9, *id_0) )
LABEL_31:
      v10 = 0;
    else
      v10 = 1;
    if ( v10 )
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
        "./src/txt_data_manual/GCGGameExcelConfig.cpp",
        "checkCardViewConfig",
        1177);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v11, (const char (*)[37])byte_1AD6F4E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCardConfig>,false,false> *const)(v2 + 96));
  }
  result = ret;
  if ( v22 == (char *)v2 )
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

// Line 1185: range 000000001441C68A-000000001441C87D
bool __fastcall GCGGameExcelConfigMgr::isSkillHasTag(
        const GCGGameExcelConfigMgr *const this,
        __int64 skill_id,
        data::GCGSkillTagType skill_tag)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::set<data::GCGSkillTagType>> *p_skill_tag_set_map; // rdx
  std::unordered_map<unsigned int,std::set<data::GCGSkillTagType>> *v7; // rdx
  bool v8; // al
  bool result; // al
  std::set<data::GCGSkillTagType> *skill_tag_set; // [rsp+18h] [rbp-A8h]
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 13 skill_id:1184 48 4 14 skill_tag:1184 64 8 15 const_iter:1186 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GCGGameExcelConfigMgr::isSkillHasTag;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = skill_id;
  *(_DWORD *)(v3 + 48) = skill_tag;
  p_skill_tag_set_map = &this->skill_tag_set_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, skill_id);
  *(std::unordered_map<unsigned int,std::set<data::GCGSkillTagType>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<data::GCGSkillTagType>>::find(
                                                                                                     p_skill_tag_set_map,
                                                                                                     (const std::unordered_map<unsigned int,std::set<data::GCGSkillTagType>>::key_type *)(v3 + 32));
  v7 = &this->skill_tag_set_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::set<data::GCGSkillTagType>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<data::GCGSkillTagType>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::set<data::GCGSkillTagType>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<data::GCGSkillTagType> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<data::GCGSkillTagType> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    skill_tag_set = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<data::GCGSkillTagType>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<data::GCGSkillTagType> >,false,false> *const)(v3 + 64))->second;
    result = std::set<data::GCGSkillTagType>::count(
               skill_tag_set,
               (const std::set<data::GCGSkillTagType>::key_type *)(v3 + 48)) != 0;
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

// Line 1196: range 000000001441C87E-000000001441C8F0
bool __cdecl GCGGameExcelConfigMgr::isLevelHasDefaultDeck(const GCGGameExcelConfigMgr *const this, uint32_t level_id)
{
  const data::GCGGameExcelConfig *config_ptr; // [rsp+18h] [rbp-8h]

  config_ptr = data::GCGGameExcelConfigMgrBase::findGCGGameExcelConfig(this, level_id);
  if ( !config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->card_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->card_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->card_group_id);
  }
  return config_ptr->card_group_id != 0;
};
