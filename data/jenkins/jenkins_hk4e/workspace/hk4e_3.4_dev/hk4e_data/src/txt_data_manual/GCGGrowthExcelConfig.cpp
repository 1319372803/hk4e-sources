// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GCGGrowthExcelConfig.cpp

// Line 20: range 000000001441C8F2-000000001441CC16
int32_t __cdecl GCGGrowthExcelConfigMgr::rewriteConfig(
        GCGGrowthExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGGrowthExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( GCGGrowthExcelConfigMgr::rewriteLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGrowthExcelConfig.cpp",
      "rewriteConfig",
      21);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v5,
      (const char (*)[27])"rewriteLevelConfig failed.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( GCGGrowthExcelConfigMgr::rewriteLevelLockConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGrowthExcelConfig.cpp",
      "rewriteConfig",
      22);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v7,
      (const char (*)[31])"rewriteLevelLockConfig failed.");
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

// Line 27: range 000000001441CC18-000000001441CF3C
int32_t __cdecl GCGGrowthExcelConfigMgr::checkConfig(
        GCGGrowthExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGGrowthExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( GCGGrowthExcelConfigMgr::checkLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGrowthExcelConfig.cpp",
      "checkConfig",
      28);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v5, (const char (*)[25])"checkLevelConfig failed.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( GCGGrowthExcelConfigMgr::checkLevelLockConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GCGGrowthExcelConfig.cpp",
      "checkConfig",
      29);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v7,
      (const char (*)[29])"checkLevelLockConfig failed.");
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

// Line 34: range 000000001441CF3E-000000001441D00F
bool __fastcall GCGGrowthExcelConfigMgr::isLevelLockQuest(const GCGGrowthExcelConfigMgr *const this, uint32_t quest_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 quest_id:33";
  *(_QWORD *)(v2 + 16) = GCGGrowthExcelConfigMgr::isLevelLockQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->level_lock_quest_set,
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

// Line 39: range 000000001441D010-000000001441D0E1
bool __fastcall GCGGrowthExcelConfigMgr::isBreakLevel(const GCGGrowthExcelConfigMgr *const this, uint32_t level_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 level_id:38";
  *(_QWORD *)(v2 + 16) = GCGGrowthExcelConfigMgr::isBreakLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             &this->break_level_set_,
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

// Line 44: range 000000001441D0E2-000000001441D213
uint32_t __cdecl GCGGrowthExcelConfigMgr::getMaxExp(const GCGGrowthExcelConfigMgr *const this, uint32_t level)
{
  unsigned __int64 total_exp; // rcx
  uint32_t v4; // ecx
  const data::GCGLevelExcelConfig *config_ptr; // [rsp+18h] [rbp-8h]

  config_ptr = data::GCGGrowthExcelConfigMgrBase::findGCGLevelExcelConfig(this, level);
  if ( !config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->total_exp >> 3) + 0x7FFF8000) )
    __asan_report_load8(&config_ptr->total_exp);
  total_exp = config_ptr->total_exp;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_exp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_exp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_exp_);
  }
  if ( total_exp > this->total_exp_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_exp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_exp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_exp_);
  }
  v4 = this->total_exp_;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->total_exp >> 3) + 0x7FFF8000) )
    __asan_report_load8(&config_ptr->total_exp);
  return v4 - config_ptr->total_exp;
};

// Line 58: range 000000001441D214-000000001441D86C
int32_t __cdecl GCGGrowthExcelConfigMgr::rewriteLevelConfig(
        GCGGrowthExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t max_level; // ecx
  uint32_t v7; // ecx
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // edx
  uint64_t v12; // rdx
  int32_t result; // eax
  uint32_t total_exp; // [rsp+14h] [rbp-11Ch]
  data::GCGLevelExcelConfigMap *__for_range; // [rsp+18h] [rbp-118h]
  data::GCGLevelExcelConfig *config_ptr; // [rsp+20h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGLevelExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-108h]
  uint32_t *level; // [rsp+30h] [rbp-100h]
  char v19[240]; // [rsp+40h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 8 level:67 64 8 14 __for_begin:59 96 8 12 __for_end:59 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GCGGrowthExcelConfigMgr::rewriteLevelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  __for_range = &this->gcg_level_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGLevelExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GCGLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGLevelExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::GCGLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGLevelExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGLevelExcelConfig>,false> *)(v3 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGLevelExcelConfig>,false,false> *const)(v3 + 64));
    level = std::get<0ul,unsigned int const,data::GCGLevelExcelConfig>(__in);
    std::get<1ul,unsigned int const,data::GCGLevelExcelConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->max_level_);
    }
    max_level = this->max_level_;
    if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(level);
    }
    if ( max_level < *level )
      this->max_level_ = *level;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGLevelExcelConfig>,false,false> *const)(v3 + 64));
  }
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  total_exp = 0;
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48, v3 + 96);
  for ( *(_DWORD *)(v3 + 48) = 1; ; ++*(_DWORD *)(v3 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->max_level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->max_level_);
    }
    v7 = this->max_level_;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
    if ( v7 < *(_DWORD *)(v3 + 48) )
    {
      v11 = 1;
      goto LABEL_37;
    }
    v8 = *(unsigned int *)(v3 + 48);
    config_ptr = data::GCGGrowthExcelConfigMgrBase::findGCGLevelExcelConfig(this, v8);
    if ( !config_ptr )
      break;
    v12 = total_exp;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->total_exp >> 3) + 0x7FFF8000) )
      __asan_report_store8(&config_ptr->total_exp, v8);
    config_ptr->total_exp = v12;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->exp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->exp >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->exp);
    }
    total_exp += config_ptr->exp;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
  }
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
    "./src/txt_data_manual/GCGGrowthExcelConfig.cpp",
    "rewriteLevelConfig",
    72);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v9, (const char (*)[28])byte_1AD6F7E0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v11 = 0;
LABEL_37:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v11 == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->total_exp_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_exp_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->total_exp_, (((_BYTE)this - 108) & 7u) + 3);
    }
    this->total_exp_ = total_exp;
    v2 = 0;
  }
  result = v2;
  if ( v19 == (char *)v3 )
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

// Line 83: range 000000001441D86E-000000001441DA86
int32_t __cdecl GCGGrowthExcelConfigMgr::rewriteLevelLockConfig(
        GCGGrowthExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::GCGLevelLockExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::GCGLevelLockExcelConfig> >::type *config; // [rsp+28h] [rbp-88h]
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false>::__node_type *)"2 32 8 14 __for_begin:84 64 8 12 __for_end:84";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false>::__node_type *)GCGGrowthExcelConfigMgr::rewriteLevelLockConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->gcg_level_lock_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::GCGLevelLockExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::GCGLevelLockExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::GCGLevelLockExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GCGLevelLockExcelConfig>(__in);
    std::set<unsigned int>::insert(&this->level_lock_quest_set, &config->unlock_main_quest_id);
    std::unordered_set<unsigned int>::insert(&this->break_level_set_, &config->level_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 93: range 000000001441DA88-000000001441E090
int32_t __cdecl GCGGrowthExcelConfigMgr::checkLevelConfig(
        const GCGGrowthExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_exp; // rax
  unsigned int v6; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  data::GCGLevelExcelConfigMap *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGLevelExcelConfig>,false,false>::reference v15; // [rsp+28h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGLevelExcelConfig> >::type *level; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGLevelExcelConfig> >::type *config; // [rsp+38h] [rbp-108h]
  char v18[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 14 __for_begin:95 64 8 12 __for_end:95 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGGrowthExcelConfigMgr::checkLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->gcg_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGLevelExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGLevelExcelConfig>,false,false> *const)(v2 + 32));
    level = std::get<0ul,unsigned int const,data::GCGLevelExcelConfig>(v15);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGLevelExcelConfig>(v15);
    p_exp = &config->exp;
    if ( *(_BYTE *)(((unsigned __int64)p_exp >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_exp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_exp >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_exp);
    }
    if ( config->exp )
      goto LABEL_21;
    if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(level);
    }
    v6 = *level;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->max_level_);
    }
    if ( v6 == this->max_level_ )
    {
LABEL_21:
      if ( *(_BYTE *)(((unsigned __int64)&config->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->reward_id);
      }
      if ( config->reward_id
        && (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              config->reward_id,
                              ITEM_LIMIT_GCG_LEVEL_REWARD) != 1 )
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
          "./src/txt_data_manual/GCGGrowthExcelConfig.cpp",
          "checkLevelConfig",
          106);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v10, (const char (*)[60])byte_1AD6F960);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->reward_id);
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
        "./src/txt_data_manual/GCGGrowthExcelConfig.cpp",
        "checkLevelConfig",
        100);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v7, (const char (*)[43])byte_1AD6F900);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, level);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v18 == (char *)v2 )
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

// Line 114: range 000000001441E092-000000001441E630
int32_t __cdecl GCGGrowthExcelConfigMgr::checkLevelLockConfig(
        const GCGGrowthExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const GCGGrowthExcelConfigMgr *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  data::GCGLevelLockExcelConfigMap *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false,false>::reference v16; // [rsp+28h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,data::GCGLevelLockExcelConfig> >::type *level; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGLevelLockExcelConfig> >::type *config; // [rsp+38h] [rbp-108h]
  char v19[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:116 64 8 13 __for_end:116 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GCGGrowthExcelConfigMgr::checkLevelLockConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->gcg_level_lock_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGLevelLockExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GCGLevelLockExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GCGLevelLockExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GCGLevelLockExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false> *)(v2 + 64)) )
  {
    v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false,false> *const)(v2 + 32));
    level = std::get<0ul,unsigned int const,data::GCGLevelLockExcelConfig>(v16);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGLevelLockExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGLevelLockExcelConfig>(v16);
    v5 = this;
    if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(level);
    }
    if ( data::GCGGrowthExcelConfigMgrBase::findGCGLevelExcelConfig(v5, *level) )
    {
      p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->unlock_main_quest_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->unlock_main_quest_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->unlock_main_quest_id);
      }
      if ( !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(p_quest_config_mgr, config->unlock_main_quest_id) )
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
          "./src/txt_data_manual/GCGGrowthExcelConfig.cpp",
          "checkLevelLockConfig",
          127);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v9, (const char (*)[48])byte_1AD6FAC0);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->unlock_main_quest_id);
        v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" level: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, level);
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
        "./src/txt_data_manual/GCGGrowthExcelConfig.cpp",
        "checkLevelLockConfig",
        121);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v6, (const char (*)[39])byte_1AD6FA60);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, level);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGLevelLockExcelConfig>,false,false> *const)(v2 + 32));
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
