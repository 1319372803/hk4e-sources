// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/gcg_config_mgr.cpp

// Line 22: range 000000000CCC42EE-000000000CCC462C
int32_t __cdecl GCGConfigMgr::loadConfig(GCGConfigMgr *const this, HK4EDesignConfig *config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  char v8[192]; // [rsp+20h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGConfigMgr::loadConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( data::GCGGameExcelConfigMgrBase::loadConfig(&this->gcg_game_config_mgr, config) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gcg_config_mgr.cpp",
      "loadConfig",
      27);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v5,
      (const char (*)[38])"gcg_game_config_mgr loadConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( GCGConfigMgr::loadAllGCGSkillConfig(this, config) )
  {
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
      "./src/gcg_config_mgr.cpp",
      "loadConfig",
      33);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v7,
      (const char (*)[29])"loadAllGCGSkillConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 40: range 000000000CCC462E-000000000CCC4B85
int32_t __cdecl GCGConfigMgr::rewriteConfig(GCGConfigMgr *const this, HK4EDesignConfig *config)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t ClientDataVersion; // edx
  uint32_t ServerDataVersion; // ecx
  char v11[256]; // [rsp+20h] [rbp-100h] BYREF

  v2 = (common::milog::MiLogStream *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)GCGConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( GCGGameExcelConfigMgr::rewriteConfig(&this->gcg_game_config_mgr, &config->txt_config_mgr) )
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
      "./src/gcg_config_mgr.cpp",
      "rewriteConfig",
      45);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v5,
      (const char (*)[41])"gcg_game_config_mgr rewriteConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( GCGConfigMgr::rewriteConstValueConfig(this, config) )
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
      "./src/gcg_config_mgr.cpp",
      "rewriteConfig",
      51);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v7,
      (const char (*)[41])"gcg_game_config_mgr rewriteConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( GCGConfigMgr::rewriteSkillDeclaredValueConfig(this, config) )
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
      "./src/gcg_config_mgr.cpp",
      "rewriteConfig",
      57);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
      v8,
      (const char (*)[57])"gcg_game_config_mgr rewrite declared value config failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else
  {
    ClientDataVersion = ClientVersionConfig::getClientDataVersion(&config->version_config);
    if ( *(_BYTE *)(((unsigned __int64)&this->client_data_version >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->client_data_version >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->client_data_version);
    }
    this->client_data_version = ClientDataVersion;
    ServerDataVersion = ClientVersionConfig::getServerDataVersion(&config->version_config);
    if ( *(_BYTE *)(((unsigned __int64)&this->server_data_version >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->server_data_version >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->server_data_version);
    }
    this->server_data_version = ServerDataVersion;
    result = 0;
  }
  if ( v11 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 66: range 000000000CCC4B86-000000000CCC5022
int32_t __cdecl GCGConfigMgr::checkConfig(GCGConfigMgr *const this, HK4EDesignConfig *config)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9[256]; // [rsp+20h] [rbp-100h] BYREF

  v2 = (common::milog::MiLogStream *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)GCGConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( GCGGameExcelConfigMgr::checkConfig(&this->gcg_game_config_mgr, &config->txt_config_mgr) )
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
      "./src/gcg_config_mgr.cpp",
      "checkConfig",
      72);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v5,
      (const char (*)[39])"gcg_game_config_mgr checkConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( GCGConfigMgr::checkGCGSkillConfig(this, config) )
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
      "./src/gcg_config_mgr.cpp",
      "checkConfig",
      78);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v7,
      (const char (*)[27])"checkGCGSkillConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( GCGConfigMgr::checkConstValueConfig(this, config) )
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
      "./src/gcg_config_mgr.cpp",
      "checkConfig",
      84);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v8,
      (const char (*)[29])"checkConstValueConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 91: range 000000000CCC5024-000000000CCC5218
int32_t __cdecl GCGConfigMgr::finalConfig(GCGConfigMgr *const this, HK4EDesignConfig *config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGConfigMgr::finalConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( data::GCGGameExcelConfigMgrBase::finalConfig(&this->gcg_game_config_mgr, &config->txt_config_mgr) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gcg_config_mgr.cpp",
      "finalConfig",
      96);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v5,
      (const char (*)[41])"gcg_game_config_mgr rewriteConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 104: range 000000000CCC521A-000000000CCC663F
int32_t __cdecl GCGConfigMgr::loadAllGCGSkillConfig(GCGConfigMgr *const this, HK4EDesignConfig *config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::string *p_json_config_base_dir; // rsi
  bool v6; // r14
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  unsigned __int64 v11; // rax
  int32_t AllFilesWithExtension; // edx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  unsigned __int64 v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  unsigned __int64 v22; // rax
  data::ConfigGCGSkill *v23; // r8
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  __int64 v26; // r14
  std::unordered_map<std::string,std::shared_ptr<data::GCGDeclaredValue>>::size_type v27; // rax
  __int64 v28; // r14
  std::vector<data::ConfigGCGTrigger>::size_type v29; // rax
  __int64 v30; // r14
  std::vector<data::ConfigGCGLimit>::size_type v31; // rax
  __int64 v32; // r14
  std::vector<std::shared_ptr<data::ConfigGCGEffect>>::size_type v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  std::vector<std::string> *__for_range; // [rsp+10h] [rbp-6A0h]
  std::string *skill_json_path; // [rsp+18h] [rbp-698h]
  char v43[1680]; // [rsp+20h] [rbp-690h] BYREF

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1632LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "18 32 1 9 <unknown> 48 4 7 ret:105 64 8 15 __for_begin:120 96 8 13 __for_end:120 128 24 12 file_"
                        "vec:112 192 32 13 skill_dir:106 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 "
                        "9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 40 9"
                        " <unknown> 848 40 8 root:128 928 168 16 config_skill:135 1168 392 6 ss:143";
  *(_QWORD *)(v2 + 16) = GCGConfigMgr::loadAllGCGSkillConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959360;
  v4[536862746] = 62194;
  v4[536862747] = -234881024;
  v4[536862748] = -218959118;
  v4[536862754] = -218959360;
  v4[536862755] = -218959118;
  v4[536862756] = 62194;
  v4[536862768] = -218103808;
  v4[536862769] = -202116109;
  v4[536862770] = -202116109;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48);
  *(_DWORD *)(v2 + 48) = 0;
  p_json_config_base_dir = &config->json_config_base_dir;
  if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
  {
    p_json_config_base_dir = (std::string *)32;
    __asan_report_store_n(v2 + 192, 32LL);
  }
  std::operator+<char>((std::string *)(v2 + 192), p_json_config_base_dir, "gcg_card_skill/");
  std::filesystem::__cxx11::path::path<std::string,std::filesystem::__cxx11::path>(
    (std::filesystem::__cxx11::path *const)(v2 + 768),
    (const std::string *)(v2 + 192),
    auto_format);
  v6 = !std::filesystem::is_directory((const std::filesystem::__cxx11::path *)(v2 + 768));
  std::filesystem::__cxx11::path::~path((std::filesystem::__cxx11::path *const)(v2 + 768));
  v7 = ((v2 + 768) >> 3) + 2147450880;
  *(_DWORD *)v7 = -117901064;
  *(_BYTE *)(v7 + 4) = -8;
  if ( v6 )
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
      "./src/gcg_config_mgr.cpp",
      "loadAllGCGSkillConfig",
      109);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 256),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v8, (const char (*)[38])byte_1A174D80);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v2 + 192));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v10 = 0;
  }
  else
  {
    v11 = ((v2 + 128) >> 3) + 2147450880;
    *(_WORD *)v11 = 0;
    *(_BYTE *)(v11 + 2) = 0;
    std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 128));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 320),
      ".json",
      (const std::allocator<char> *)(v2 + 32));
    AllFilesWithExtension = common::tools::FileUtils::getAllFilesWithExtension(
                              (const std::string *)(v2 + 192),
                              (const std::string *)(v2 + 320),
                              (std::vector<std::string> *)(v2 + 128));
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48);
    *(_DWORD *)(v2 + 48) = AllFilesWithExtension;
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 48);
    if ( *(_DWORD *)(v2 + 48) )
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
        "./src/gcg_config_mgr.cpp",
        "loadAllGCGSkillConfig",
        116);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v13, (const char (*)[41])byte_1A174E20);
      v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v2 + 192));
      v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" ret: ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v10 = 0;
    }
    else
    {
      __for_range = (std::vector<std::string> *)(v2 + 128);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::string>::iterator *)(v2 + 64) = std::vector<std::string>::begin(__for_range);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::string>::iterator *)(v2 + 96) = std::vector<std::string>::end(__for_range);
      while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 64),
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 96)) )
      {
        skill_json_path = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 64));
        if ( common::tools::FileUtils::fileExists(skill_json_path) )
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
            "./src/gcg_config_mgr.cpp",
            "loadAllGCGSkillConfig",
            124);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v17,
                  (const char (*)[15])"not find file:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, skill_json_path);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          v19 = ((v2 + 848) >> 3) + 2147450880;
          *(_DWORD *)v19 = 0;
          *(_BYTE *)(v19 + 4) = 0;
          Json::Value::Value(v2 + 848, 0LL);
          if ( !parseJsonFile(skill_json_path, (Json::Value *)(v2 + 848)) )
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
              "./src/gcg_config_mgr.cpp",
              "loadAllGCGSkillConfig",
              131);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 512),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v21 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    v20,
                    (const char (*)[37])"parseJsonFile fail, skill_json_path:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, skill_json_path);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 48);
            *(_DWORD *)(v2 + 48) = -1;
          }
          else
          {
            v22 = ((v2 + 928) >> 3) + 2147450880;
            *(_DWORD *)v22 = 0;
            *(_DWORD *)(v22 + 4) = 0;
            *(_DWORD *)(v22 + 8) = 0;
            *(_DWORD *)(v22 + 12) = 0;
            *(_DWORD *)(v22 + 16) = 0;
            *(_BYTE *)(v22 + 20) = 0;
            data::ConfigGCGSkill::ConfigGCGSkill((data::ConfigGCGSkill *const)(v2 + 928));
            if ( !data::ConfigGCGSkill::fromJson(
                    (data::ConfigGCGSkill *const)(v2 + 928),
                    (const Json::Value *)(v2 + 848)) )
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
                "./src/gcg_config_mgr.cpp",
                "loadAllGCGSkillConfig",
                138);
              v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 576),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v25 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      v24,
                      (const char (*)[32])"fromJson fail, skill_json_path:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, skill_json_path);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
              *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
              if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v2 + 48);
              *(_DWORD *)(v2 + 48) = -1;
            }
            else
            {
              std::unordered_map<std::string,data::ConfigGCGSkill>::emplace<std::string&,data::ConfigGCGSkill&>(
                &this->config_gcg_card_skill_map_,
                (std::string *)(v2 + 928),
                (data::ConfigGCGSkill *)(v2 + 928),
                (std::string *)&this->config_gcg_card_skill_map_,
                v23);
              __asan_unpoison_stack_memory(v2 + 1168, 392LL);
              std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 1168);
              v26 = std::operator<<<std::char_traits<char>>(v2 + 1184, " declared_value_map size:");
              v27 = std::unordered_map<std::string,std::shared_ptr<data::GCGDeclaredValue>>::size((const std::unordered_map<std::string,std::shared_ptr<data::GCGDeclaredValue>> *const)(v2 + 960));
              std::ostream::operator<<(v26, v27);
              v28 = std::operator<<<std::char_traits<char>>(v2 + 1184, " trigger_list size:");
              v29 = std::vector<data::ConfigGCGTrigger>::size((const std::vector<data::ConfigGCGTrigger> *const)(v2 + 1016));
              std::ostream::operator<<(v28, v29);
              v30 = std::operator<<<std::char_traits<char>>(v2 + 1184, " limit_list size:");
              v31 = std::vector<data::ConfigGCGLimit>::size((const std::vector<data::ConfigGCGLimit> *const)(v2 + 1040));
              std::ostream::operator<<(v30, v31);
              v32 = std::operator<<<std::char_traits<char>>(v2 + 1184, " effect_list size:");
              v33 = std::vector<std::shared_ptr<data::ConfigGCGEffect>>::size((const std::vector<std::shared_ptr<data::ConfigGCGEffect>> *const)(v2 + 1064));
              std::ostream::operator<<(v32, v33);
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
                1u,
                "./src/gcg_config_mgr.cpp",
                "loadAllGCGSkillConfig",
                148);
              v34 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      (common::milog::MiLogStream *const)(v2 + 640),
                      (const char (*)[11])"load path:");
              v35 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, skill_json_path);
              v36 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v35, (const char (*)[7])" name:");
              v37 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                      v36,
                      (const std::string *)(v2 + 928));
              *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 704, 32LL);
              }
              std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(v2 + 704, v2 + 1168);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, (const std::string *)(v2 + 704));
              std::string::~string((void *)(v2 + 704));
              *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
              *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
              std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 1168);
            }
            data::ConfigGCGSkill::~ConfigGCGSkill((data::ConfigGCGSkill *const)(v2 + 928));
          }
          Json::Value::~Value((Json::Value_0 *const)(v2 + 848));
        }
        v38 = ((v2 + 848) >> 3) + 2147450880;
        *(_DWORD *)v38 = -117901064;
        *(_BYTE *)(v38 + 4) = -8;
        v39 = ((v2 + 928) >> 3) + 2147450880;
        *(_DWORD *)v39 = -117901064;
        *(_DWORD *)(v39 + 4) = -117901064;
        *(_DWORD *)(v39 + 8) = -117901064;
        *(_DWORD *)(v39 + 12) = -117901064;
        *(_DWORD *)(v39 + 16) = -117901064;
        *(_BYTE *)(v39 + 20) = -8;
        __asan_poison_stack_memory(v2 + 1168, 392LL);
        __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 64));
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      v10 = *(_DWORD *)(v2 + 48);
    }
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 128));
  }
  std::string::~string((void *)(v2 + 192));
  if ( v43 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862729) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450908 - (((_DWORD)v4 + 2147450916) & 0xFFFFFFF8) + 176) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1632LL, v43);
  }
  return v10;
};

// Line 154: range 000000000CCC6640-000000000CCC66AA
int32_t __cdecl GCGConfigMgr::rewriteConstValueConfig(GCGConfigMgr *const this, HK4EDesignConfig *config)
{
  uint32_t GCGRoundLimit; // edx

  GCGRoundLimit = ConstValueExcelConfigMgr::getGCGRoundLimit(&config->txt_config_mgr.const_value_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_round_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_round_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gcg_round_limit_);
  }
  this->gcg_round_limit_ = GCGRoundLimit;
  return 0;
};

// Line 160: range 000000000CCC66AC-000000000CCC6C54
std::pair<data::GCGDeclaredValueType,unsigned int> __cdecl GCGConfigMgr::getSkillDeclaredValue(
        const GCGConfigMgr *const this,
        const std::string *skill_name,
        const std::string *declared_value_key)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  std::pair<data::GCGDeclaredValueType,unsigned int> v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  std::unordered_map<std::string,std::pair<data::GCGDeclaredValueType,unsigned int>>::mapped_type *v13; // rax
  std::pair<data::GCGDeclaredValueType,unsigned int> *v14; // rdx
  const std::unordered_map<std::string,std::unordered_map<std::string,std::pair<data::GCGDeclaredValueType,unsigned int>>>::mapped_type *declared_value_map; // [rsp+28h] [rbp-128h]
  char v17[288]; // [rsp+30h] [rbp-120h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 10 result:162 64 8 9 <unknown> 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GCGConfigMgr::getSkillDeclaredValue;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 32);
  *(_DWORD *)(v3 + 32) = 4;
  if ( std::unordered_map<std::string,std::unordered_map<std::string,std::pair<data::GCGDeclaredValueType,unsigned int>>>::count(
         &this->skill_declared_value_map_,
         skill_name) )
  {
    declared_value_map = std::unordered_map<std::string,std::unordered_map<std::string,std::pair<data::GCGDeclaredValueType,unsigned int>>>::at(
                           &this->skill_declared_value_map_,
                           skill_name);
    if ( std::unordered_map<std::string,std::pair<data::GCGDeclaredValueType,unsigned int>>::count(
           declared_value_map,
           declared_value_key) )
    {
      v13 = (std::unordered_map<std::string,std::pair<data::GCGDeclaredValueType,unsigned int>>::mapped_type *)std::unordered_map<std::string,std::pair<data::GCGDeclaredValueType,unsigned int>>::at(declared_value_map, declared_value_key);
      v14 = v13;
      if ( ((unsigned __int8)v13 & 7) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v13->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v13 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v13->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v13, 8LL);
      }
      v8 = *v14;
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
        "./src/gcg_config_mgr.cpp",
        "getSkillDeclaredValue",
        171);
      v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[12])"skill_name:");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, skill_name);
      v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v10,
              (const char (*)[21])" declared_value_key:");
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, declared_value_key);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" not exist");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      std::pair<data::GCGDeclaredValueType,unsigned int>::pair<data::GCGDeclaredValueType,int,true>(
        (std::pair<data::GCGDeclaredValueType,unsigned int> *const)(v3 + 96),
        (std::pair<data::GCGDeclaredValueType,int> *)(v3 + 32));
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v3 + 96);
      v8 = *(std::pair<data::GCGDeclaredValueType,unsigned int> *)(v3 + 96);
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
      "./src/gcg_config_mgr.cpp",
      "getSkillDeclaredValue",
      165);
    v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[12])"skill_name:");
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, skill_name);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v7,
      (const char (*)[35])" not find skill_declared_value_map");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    std::pair<data::GCGDeclaredValueType,unsigned int>::pair<data::GCGDeclaredValueType,int,true>(
      (std::pair<data::GCGDeclaredValueType,unsigned int> *const)(v3 + 64),
      (std::pair<data::GCGDeclaredValueType,int> *)(v3 + 32));
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 64);
    v8 = *(std::pair<data::GCGDeclaredValueType,unsigned int> *)(v3 + 64);
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v8;
};

// Line 178: range 000000000CCC6C56-000000000CCC8DD1
int32_t __cdecl GCGConfigMgr::rewriteSkillDeclaredValueConfig(GCGConfigMgr *const this, HK4EDesignConfig *config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  __int64 v15; // rax
  std::__shared_ptr_access<data::GCGDeclaredValue,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  data::GCGDeclaredValueType type; // ecx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  int v22; // edi
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  int v25; // r15d
  std::__shared_ptr_access<data::GCGDeclaredValueIndirectDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  uint32_t v27; // ecx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rcx
  int v32; // edi
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  int v35; // r15d
  std::__shared_ptr_access<data::GCGDeclaredValueDamage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  uint32_t value; // ecx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rcx
  int v42; // edi
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  int v45; // r15d
  std::__shared_ptr_access<data::GCGDeclaredValueEffectAmount,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  uint32_t v47; // ecx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rcx
  int v52; // edi
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rdx
  int v55; // r15d
  std::__shared_ptr_access<data::GCGDeclaredValueHealAmount,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rax
  uint32_t v57; // ecx
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rcx
  int v62; // edi
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rdx
  int v65; // r15d
  std::__shared_ptr_access<data::GCGDeclaredValueElement,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // rax
  data::GCGEffectElementType v67; // esi
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rdx
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rcx
  int v72; // edi
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rdx
  int v75; // r15d
  std::__shared_ptr_access<data::GCGDeclaredValueToken,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v76; // rax
  data::GCGTokenType v77; // esi
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rdx
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rcx
  int v82; // edi
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rdx
  std::pair<data::GCGDeclaredValueType,unsigned int> *v85; // rax
  int32_t ret; // [rsp+14h] [rbp-4DCh]
  std::unordered_map<std::string,data::ConfigGCGSkill> *__for_range; // [rsp+18h] [rbp-4D8h]
  std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigGCGSkill>,false,true>::reference __in; // [rsp+20h] [rbp-4D0h]
  std::tuple_element<0,std::pair<const std::string,data::ConfigGCGSkill> >::type *skill_name; // [rsp+28h] [rbp-4C8h]
  std::tuple_element<1,std::pair<const std::string,data::ConfigGCGSkill> >::type *config_skill; // [rsp+30h] [rbp-4C0h]
  std::unordered_map<std::string,std::pair<data::GCGDeclaredValueType,unsigned int>> *cur_declared_map; // [rsp+38h] [rbp-4B8h]
  std::unordered_map<std::string,std::shared_ptr<data::GCGDeclaredValue>> *__for_range_0; // [rsp+40h] [rbp-4B0h]
  std::__detail::_Node_iterator<std::pair<const std::string,std::shared_ptr<data::GCGDeclaredValue> >,false,true>::reference v95; // [rsp+48h] [rbp-4A8h]
  std::tuple_element<0,std::pair<const std::string,std::shared_ptr<data::GCGDeclaredValue> > >::type *declared_key; // [rsp+50h] [rbp-4A0h]
  std::tuple_element<1,std::pair<const std::string,std::shared_ptr<data::GCGDeclaredValue> > >::type *base_declared_value_ptr; // [rsp+58h] [rbp-498h]
  char v98[1168]; // [rsp+60h] [rbp-490h] BYREF

  v2 = (unsigned __int64)v98;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1120LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "29 48 4 7 val:197 64 4 23 declared_value_type:198 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unk"
                        "nown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 8 15 __for_beg"
                        "in:180 224 8 13 __for_end:180 256 8 15 __for_begin:183 288 8 13 __for_end:183 320 8 9 <unknown> "
                        "352 16 21 declare_value_ptr:203 384 16 21 declare_value_ptr:216 416 16 21 declare_value_ptr:229 "
                        "448 16 21 declare_value_ptr:242 480 16 21 declare_value_ptr:255 512 16 21 declare_value_ptr:268 "
                        "544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 8"
                        "64 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGConfigMgr::rewriteSkillDeclaredValueConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -219021312;
  v4[536862732] = -219021312;
  v4[536862733] = -219021312;
  v4[536862734] = -219021312;
  v4[536862735] = -219021312;
  v4[536862736] = -219021312;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -218959118;
  v4[536862754] = -202116109;
  ret = 0;
  __for_range = &this->config_gcg_card_skill_map_;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::string,data::ConfigGCGSkill>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::ConfigGCGSkill>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::string,data::ConfigGCGSkill>::iterator *)(v2 + 224) = std::unordered_map<std::string,data::ConfigGCGSkill>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<std::string const,data::ConfigGCGSkill>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigGCGSkill>,true> *)(v2 + 192),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigGCGSkill>,true> *)(v2 + 224)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<std::string const,data::ConfigGCGSkill>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigGCGSkill>,false,true> *const)(v2 + 192));
    skill_name = std::get<0ul,std::string const,data::ConfigGCGSkill>(__in);
    config_skill = std::get<1ul,std::string const,data::ConfigGCGSkill>(__in);
    cur_declared_map = std::unordered_map<std::string,std::unordered_map<std::string,std::pair<data::GCGDeclaredValueType,unsigned int>>>::operator[](
                         &this->skill_declared_value_map_,
                         skill_name);
    __for_range_0 = &config_skill->declared_value_map;
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<std::string,std::shared_ptr<data::GCGDeclaredValue>>::iterator *)(v2 + 256) = std::unordered_map<std::string,std::shared_ptr<data::GCGDeclaredValue>>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<std::string,std::shared_ptr<data::GCGDeclaredValue>>::iterator *)(v2 + 288) = std::unordered_map<std::string,std::shared_ptr<data::GCGDeclaredValue>>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<std::string const,std::shared_ptr<data::GCGDeclaredValue>>,true>(
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<data::GCGDeclaredValue> >,true> *)(v2 + 256),
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<data::GCGDeclaredValue> >,true> *)(v2 + 288)) )
    {
      v95 = std::__detail::_Node_iterator<std::pair<std::string const,std::shared_ptr<data::GCGDeclaredValue>>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,std::shared_ptr<data::GCGDeclaredValue> >,false,true> *const)(v2 + 256));
      declared_key = std::get<0ul,std::string const,std::shared_ptr<data::GCGDeclaredValue>>(v95);
      base_declared_value_ptr = std::get<1ul,std::string const,std::shared_ptr<data::GCGDeclaredValue>>(v95);
      if ( std::operator==<data::GCGDeclaredValue>(base_declared_value_ptr, 0LL) )
      {
        ret = -1;
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
          "./src/gcg_config_mgr.cpp",
          "rewriteSkillDeclaredValueConfig",
          188);
        v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 544),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v5, (const char (*)[20])byte_1A175580);
        v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, skill_name);
        v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
               v7,
               (const char (*)[25])" declared value map key:");
        v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, declared_key);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" is nullptr");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      }
      else if ( std::unordered_map<std::string,std::pair<data::GCGDeclaredValueType,unsigned int>>::count(
                  cur_declared_map,
                  declared_key) )
      {
        ret = -1;
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
          "./src/gcg_config_mgr.cpp",
          "rewriteSkillDeclaredValueConfig",
          194);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v10, (const char (*)[20])byte_1A175580);
        v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, skill_name);
        v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v12,
                (const char (*)[25])" declared value map key:");
        v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, declared_key);
        common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v14, (const char (*)[5])" dup");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v15 = *(unsigned __int8 *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v15 != 0 && (char)v15 <= 3 )
          __asan_report_store4(v2 + 48);
        *(_DWORD *)(v2 + 48) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
        v16 = std::__shared_ptr_access<data::GCGDeclaredValue,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GCGDeclaredValue,(__gnu_cxx::_Lock_policy)2,false,false> *const)base_declared_value_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v16->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v16->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v16->type);
        }
        type = v16->type;
        if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 64);
        *(_DWORD *)(v2 + 64) = type;
        switch ( *(_DWORD *)(v2 + 64) )
        {
          case 0:
            *(_WORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
            if ( *(_WORD *)(((v2 + 384) >> 3) + 0x7FFF8000) )
              __asan_report_store16(v2 + 384);
            std::static_pointer_cast<data::GCGDeclaredValueDamage,data::GCGDeclaredValue>((const std::shared_ptr<data::GCGDeclaredValue> *)(v2 + 384));
            if ( std::operator==<data::GCGDeclaredValueDamage>(
                   (const std::shared_ptr<data::GCGDeclaredValueDamage> *)(v2 + 384),
                   0LL) )
            {
              ret = -1;
              *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 736, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 736),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/gcg_config_mgr.cpp",
                "rewriteSkillDeclaredValueConfig",
                220);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 736),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v28,
                      (const char (*)[20])byte_1A175580);
              v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, skill_name);
              v31 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      v30,
                      (const char (*)[22])" declared_value_type:");
              *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 64);
              v32 = *(_DWORD *)(v2 + 64);
              if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
              {
                v32 = v2 + 96;
                __asan_report_store4(v2 + 96);
              }
              *(_DWORD *)(v2 + 96) = v32;
              v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v31,
                      (const unsigned int *)(v2 + 96));
              v34 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v33,
                      (const char (*)[20])" is not valid, key:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, declared_key);
              *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
              *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
              v35 = 0;
            }
            else
            {
              v36 = std::__shared_ptr_access<data::GCGDeclaredValueDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GCGDeclaredValueDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 384));
              if ( *(_BYTE *)(((unsigned __int64)&v36->value >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v36->value >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&v36->value);
              }
              value = v36->value;
              if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v2 + 48);
              *(_DWORD *)(v2 + 48) = value;
              v35 = 1;
            }
            std::shared_ptr<data::GCGDeclaredValueDamage>::~shared_ptr((std::shared_ptr<data::GCGDeclaredValueDamage> *const)(v2 + 384));
            *(_WORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -1800;
            if ( v35 )
              goto LABEL_140;
            break;
          case 1:
            *(_WORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
            if ( *(_WORD *)(((v2 + 480) >> 3) + 0x7FFF8000) )
              __asan_report_store16(v2 + 480);
            std::static_pointer_cast<data::GCGDeclaredValueElement,data::GCGDeclaredValue>((const std::shared_ptr<data::GCGDeclaredValue> *)(v2 + 480));
            if ( std::operator==<data::GCGDeclaredValueElement>(
                   (const std::shared_ptr<data::GCGDeclaredValueElement> *)(v2 + 480),
                   0LL) )
            {
              ret = -1;
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
                "./src/gcg_config_mgr.cpp",
                "rewriteSkillDeclaredValueConfig",
                259);
              v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 928),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v59 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v58,
                      (const char (*)[20])byte_1A175580);
              v60 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v59, skill_name);
              v61 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      v60,
                      (const char (*)[22])" declared_value_type:");
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 64);
              v62 = *(_DWORD *)(v2 + 64);
              if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
              {
                v62 = v2 + 144;
                __asan_report_store4(v2 + 144);
              }
              *(_DWORD *)(v2 + 144) = v62;
              v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v61,
                      (const unsigned int *)(v2 + 144));
              v64 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v63,
                      (const char (*)[20])" is not valid, key:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v64, declared_key);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
              v65 = 0;
            }
            else
            {
              v66 = std::__shared_ptr_access<data::GCGDeclaredValueElement,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GCGDeclaredValueElement,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 480));
              if ( *(_BYTE *)(((unsigned __int64)&v66->value >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v66->value >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&v66->value);
              }
              v67 = v66->value;
              if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v2 + 48);
              *(_DWORD *)(v2 + 48) = v67;
              v65 = 1;
            }
            std::shared_ptr<data::GCGDeclaredValueElement>::~shared_ptr((std::shared_ptr<data::GCGDeclaredValueElement> *const)(v2 + 480));
            *(_WORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -1800;
            if ( v65 )
              goto LABEL_140;
            break;
          case 2:
            *(_WORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
            if ( *(_WORD *)(((v2 + 352) >> 3) + 0x7FFF8000) )
              __asan_report_store16(v2 + 352);
            std::static_pointer_cast<data::GCGDeclaredValueIndirectDamage,data::GCGDeclaredValue>((const std::shared_ptr<data::GCGDeclaredValue> *)(v2 + 352));
            if ( std::operator==<data::GCGDeclaredValueIndirectDamage>(
                   (const std::shared_ptr<data::GCGDeclaredValueIndirectDamage> *)(v2 + 352),
                   0LL) )
            {
              ret = -1;
              *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 672, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 672),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/gcg_config_mgr.cpp",
                "rewriteSkillDeclaredValueConfig",
                207);
              v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 672),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v19 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v18,
                      (const char (*)[20])byte_1A175580);
              v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, skill_name);
              v21 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      v20,
                      (const char (*)[22])" declared_value_type:");
              *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 64);
              v22 = *(_DWORD *)(v2 + 64);
              if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
              {
                v22 = v2 + 80;
                __asan_report_store4(v2 + 80);
              }
              *(_DWORD *)(v2 + 80) = v22;
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v21,
                      (const unsigned int *)(v2 + 80));
              v24 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v23,
                      (const char (*)[20])" is not valid, key:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, declared_key);
              *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
              *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
              v25 = 0;
            }
            else
            {
              v26 = std::__shared_ptr_access<data::GCGDeclaredValueIndirectDamage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GCGDeclaredValueIndirectDamage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 352));
              if ( *(_BYTE *)(((unsigned __int64)&v26->value >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v26->value >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&v26->value);
              }
              v27 = v26->value;
              if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v2 + 48);
              *(_DWORD *)(v2 + 48) = v27;
              v25 = 1;
            }
            std::shared_ptr<data::GCGDeclaredValueIndirectDamage>::~shared_ptr((std::shared_ptr<data::GCGDeclaredValueIndirectDamage> *const)(v2 + 352));
            *(_WORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -1800;
            if ( v25 )
              goto LABEL_140;
            break;
          case 4:
            *(_WORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(_WORD *)(((v2 + 416) >> 3) + 0x7FFF8000) )
              __asan_report_store16(v2 + 416);
            std::static_pointer_cast<data::GCGDeclaredValueEffectAmount,data::GCGDeclaredValue>((const std::shared_ptr<data::GCGDeclaredValue> *)(v2 + 416));
            if ( std::operator==<data::GCGDeclaredValueEffectAmount>(
                   (const std::shared_ptr<data::GCGDeclaredValueEffectAmount> *)(v2 + 416),
                   0LL) )
            {
              ret = -1;
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
                "./src/gcg_config_mgr.cpp",
                "rewriteSkillDeclaredValueConfig",
                233);
              v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 800),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v39 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v38,
                      (const char (*)[20])byte_1A175580);
              v40 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, skill_name);
              v41 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      v40,
                      (const char (*)[22])" declared_value_type:");
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 64);
              v42 = *(_DWORD *)(v2 + 64);
              if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
              {
                v42 = v2 + 112;
                __asan_report_store4(v2 + 112);
              }
              *(_DWORD *)(v2 + 112) = v42;
              v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v41,
                      (const unsigned int *)(v2 + 112));
              v44 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v43,
                      (const char (*)[20])" is not valid, key:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v44, declared_key);
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
              *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
              v45 = 0;
            }
            else
            {
              v46 = std::__shared_ptr_access<data::GCGDeclaredValueEffectAmount,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GCGDeclaredValueEffectAmount,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 416));
              if ( *(_BYTE *)(((unsigned __int64)&v46->value >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v46->value >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&v46->value);
              }
              v47 = v46->value;
              if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v2 + 48);
              *(_DWORD *)(v2 + 48) = v47;
              v45 = 1;
            }
            std::shared_ptr<data::GCGDeclaredValueEffectAmount>::~shared_ptr((std::shared_ptr<data::GCGDeclaredValueEffectAmount> *const)(v2 + 416));
            *(_WORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -1800;
            if ( v45 )
              goto LABEL_140;
            break;
          case 5:
            *(_WORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
            if ( *(_WORD *)(((v2 + 448) >> 3) + 0x7FFF8000) )
              __asan_report_store16(v2 + 448);
            std::static_pointer_cast<data::GCGDeclaredValueHealAmount,data::GCGDeclaredValue>((const std::shared_ptr<data::GCGDeclaredValue> *)(v2 + 448));
            if ( std::operator==<data::GCGDeclaredValueHealAmount>(
                   (const std::shared_ptr<data::GCGDeclaredValueHealAmount> *)(v2 + 448),
                   0LL) )
            {
              ret = -1;
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
                "./src/gcg_config_mgr.cpp",
                "rewriteSkillDeclaredValueConfig",
                246);
              v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 864),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v49 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v48,
                      (const char (*)[20])byte_1A175580);
              v50 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v49, skill_name);
              v51 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      v50,
                      (const char (*)[22])" declared_value_type:");
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 64);
              v52 = *(_DWORD *)(v2 + 64);
              if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
              {
                v52 = v2 + 128;
                __asan_report_store4(v2 + 128);
              }
              *(_DWORD *)(v2 + 128) = v52;
              v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v51,
                      (const unsigned int *)(v2 + 128));
              v54 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v53,
                      (const char (*)[20])" is not valid, key:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v54, declared_key);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
              *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
              v55 = 0;
            }
            else
            {
              v56 = std::__shared_ptr_access<data::GCGDeclaredValueHealAmount,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GCGDeclaredValueHealAmount,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 448));
              if ( *(_BYTE *)(((unsigned __int64)&v56->value >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v56->value >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&v56->value);
              }
              v57 = v56->value;
              if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v2 + 48);
              *(_DWORD *)(v2 + 48) = v57;
              v55 = 1;
            }
            std::shared_ptr<data::GCGDeclaredValueHealAmount>::~shared_ptr((std::shared_ptr<data::GCGDeclaredValueHealAmount> *const)(v2 + 448));
            *(_WORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -1800;
            if ( v55 )
              goto LABEL_140;
            break;
          case 6:
            *(_WORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(_WORD *)(((v2 + 512) >> 3) + 0x7FFF8000) )
              __asan_report_store16(v2 + 512);
            std::static_pointer_cast<data::GCGDeclaredValueToken,data::GCGDeclaredValue>((const std::shared_ptr<data::GCGDeclaredValue> *)(v2 + 512));
            if ( std::operator==<data::GCGDeclaredValueToken>(
                   (const std::shared_ptr<data::GCGDeclaredValueToken> *)(v2 + 512),
                   0LL) )
            {
              ret = -1;
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
                "./src/gcg_config_mgr.cpp",
                "rewriteSkillDeclaredValueConfig",
                272);
              v68 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 992),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v69 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v68,
                      (const char (*)[20])byte_1A175580);
              v70 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v69, skill_name);
              v71 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      v70,
                      (const char (*)[22])" declared_value_type:");
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 64);
              v72 = *(_DWORD *)(v2 + 64);
              if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
              {
                v72 = v2 + 160;
                __asan_report_store4(v2 + 160);
              }
              *(_DWORD *)(v2 + 160) = v72;
              v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v71,
                      (const unsigned int *)(v2 + 160));
              v74 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v73,
                      (const char (*)[20])" is not valid, key:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v74, declared_key);
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
              *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
              v75 = 0;
            }
            else
            {
              v76 = std::__shared_ptr_access<data::GCGDeclaredValueToken,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::GCGDeclaredValueToken,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 512));
              if ( *(_BYTE *)(((unsigned __int64)&v76->value >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v76->value >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&v76->value);
              }
              v77 = v76->value;
              if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v2 + 48);
              *(_DWORD *)(v2 + 48) = v77;
              v75 = 1;
            }
            std::shared_ptr<data::GCGDeclaredValueToken>::~shared_ptr((std::shared_ptr<data::GCGDeclaredValueToken> *const)(v2 + 512));
            *(_WORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -1800;
            if ( v75 )
            {
LABEL_140:
              *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
                __asan_report_store8();
              *(std::pair<data::GCGDeclaredValueType,unsigned int> *)(v2 + 320) = std::make_pair<data::GCGDeclaredValueType &,unsigned int &>(
                                                                                    (data::GCGDeclaredValueType *)(v2 + 64),
                                                                                    (unsigned int *)(v2 + 48));
              v85 = std::unordered_map<std::string,std::pair<data::GCGDeclaredValueType,unsigned int>>::operator[](
                      cur_declared_map,
                      declared_key);
              std::pair<data::GCGDeclaredValueType,unsigned int>::operator=(
                v85,
                (std::conditional<true,std::pair<data::GCGDeclaredValueType,unsigned int>&&,std::__nonesuch_no_braces&&>::type)(v2 + 320));
              *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
            }
            break;
          default:
            ret = -1;
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
              "./src/gcg_config_mgr.cpp",
              "rewriteSkillDeclaredValueConfig",
              282);
            v78 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1056),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v79 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v78,
                    (const char (*)[20])byte_1A175580);
            v80 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v79, skill_name);
            v81 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    v80,
                    (const char (*)[32])" unsupport declared_value_type:");
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 64);
            v82 = *(_DWORD *)(v2 + 64);
            if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
            {
              v82 = v2 + 176;
              __asan_report_store4(v2 + 176);
            }
            *(_DWORD *)(v2 + 176) = v82;
            v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v81,
                    (const unsigned int *)(v2 + 176));
            v84 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v83, (const char (*)[6])" key:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v84, declared_key);
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
            break;
        }
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      std::__detail::_Node_iterator<std::pair<std::string const,std::shared_ptr<data::GCGDeclaredValue>>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,std::shared_ptr<data::GCGDeclaredValue> >,false,true> *const)(v2 + 256));
    }
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<std::string const,data::ConfigGCGSkill>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigGCGSkill>,false,true> *const)(v2 + 192));
  }
  if ( v98 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1120LL, v98);
  }
  return ret;
};

// Line 293: range 000000000CCC8DD2-000000000CCC92AF
int32_t __cdecl GCGConfigMgr::checkGCGSkillConfig(GCGConfigMgr *const this, HK4EDesignConfig *config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-274h]
  std::unordered_map<std::string,data::ConfigGCGSkill> *__for_range; // [rsp+20h] [rbp-270h]
  std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigGCGSkill>,false,true>::reference __in; // [rsp+28h] [rbp-268h]
  const std::string *skill_name; // [rsp+30h] [rbp-260h]
  data::ConfigGCGSkill *config_skill; // [rsp+38h] [rbp-258h]
  char v13[592]; // [rsp+40h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 8 15 __for_begin:296 80 8 13 __for_end:296 112 32 9 <unknown> 176 296 13 validator:295";
  *(_QWORD *)(v2 + 16) = GCGConfigMgr::checkGCGSkillConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862734] = -218103808;
  v4[536862735] = -202116109;
  v4[536862736] = -202116109;
  ret = 0;
  GCGEffectConditionValidator::GCGEffectConditionValidator((GCGEffectConditionValidator *const)(v2 + 176), config);
  __for_range = &this->config_gcg_card_skill_map_;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::string,data::ConfigGCGSkill>::iterator *)(v2 + 48) = std::unordered_map<std::string,data::ConfigGCGSkill>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::string,data::ConfigGCGSkill>::iterator *)(v2 + 80) = std::unordered_map<std::string,data::ConfigGCGSkill>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<std::string const,data::ConfigGCGSkill>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigGCGSkill>,true> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigGCGSkill>,true> *)(v2 + 80)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<std::string const,data::ConfigGCGSkill>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigGCGSkill>,false,true> *const)(v2 + 48));
    skill_name = std::get<0ul,std::string const,data::ConfigGCGSkill>(__in);
    config_skill = std::get<1ul,std::string const,data::ConfigGCGSkill>(__in);
    if ( GCGEffectConditionValidator::validateSkillConfig((GCGEffectConditionValidator *const)(v2 + 176), config_skill) )
    {
      *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 112, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 112),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gcg_config_mgr.cpp",
        "checkGCGSkillConfig",
        300);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 112),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v5, (const char (*)[38])byte_1A175840);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, skill_name);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 112));
      *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<std::string const,data::ConfigGCGSkill>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigGCGSkill>,false,true> *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  GCGEffectConditionValidator::~GCGEffectConditionValidator((GCGEffectConditionValidator *const)(v2 + 176));
  result = ret;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 309: range 000000000CCC92B0-000000000CCC94BA
int32_t __cdecl GCGConfigMgr::checkConstValueConfig(GCGConfigMgr *const this, HK4EDesignConfig *config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGConfigMgr::checkConstValueConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_round_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_round_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gcg_round_limit_);
  }
  if ( this->gcg_round_limit_ )
  {
    result = 0;
  }
  else
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gcg_config_mgr.cpp",
      "checkConstValueConfig",
      312);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v5, (const char (*)[33])byte_1A1758E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 319: range 000000000CCC94BC-000000000CCC965E
const data::ConfigGCGSkill *__cdecl GCGConfigMgr::findGCGSkillConfig(
        const GCGConfigMgr *const this,
        const std::string *skill_name)
{
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigGCGSkill>,false,true> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<std::string,data::ConfigGCGSkill> *p_config_gcg_card_skill_map; // rdx
  std::unordered_map<std::string,data::ConfigGCGSkill> *v6; // rdx
  bool v7; // al
  const data::ConfigGCGSkill *result; // rax
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigGCGSkill>,false,true> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigGCGSkill>,false,true> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigGCGSkill>,true>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigGCGSkill>,true>::__node_type *)"2 32 8 8 iter:320 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigGCGSkill>,true>::__node_type *)GCGConfigMgr::findGCGSkillConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  p_config_gcg_card_skill_map = &this->config_gcg_card_skill_map_;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[4]._M_cur = std::unordered_map<std::string,data::ConfigGCGSkill>::find(p_config_gcg_card_skill_map, skill_name)._M_cur;
  v6 = &this->config_gcg_card_skill_map_;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[8]._M_cur = std::unordered_map<std::string,data::ConfigGCGSkill>::end(v6)._M_cur;
  v7 = std::__detail::operator==<std::pair<std::string const,data::ConfigGCGSkill>,true>(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigGCGSkill>,false,true>::operator->(v2 + 4)->second;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigGCGSkill>,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};
