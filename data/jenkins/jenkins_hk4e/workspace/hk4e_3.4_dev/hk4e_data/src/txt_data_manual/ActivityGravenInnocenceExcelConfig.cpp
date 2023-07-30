// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp

// Line 19: range 0000000012C3A8D6-0000000012C3AFC6
int32_t __cdecl ActivityGravenInnocenceExcelConfigMgr::rewriteConfig(
        ActivityGravenInnocenceExcelConfigMgr *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityGravenInnocenceExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  if ( ActivityGravenInnocenceExcelConfigMgr::rewriteCampStageConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
      "rewriteConfig",
      22);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v5,
      (const char (*)[30])"rewriteCampStageConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityGravenInnocenceExcelConfigMgr::rewriteCampLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
      "rewriteConfig",
      27);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v7,
      (const char (*)[30])"rewriteCampLevelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityGravenInnocenceExcelConfigMgr::rewriteRaceLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
      "rewriteConfig",
      32);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v8,
      (const char (*)[30])"rewriteRaceLevelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityGravenInnocenceExcelConfigMgr::rewritePhotoStageConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
      "rewriteConfig",
      37);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v9,
      (const char (*)[31])"rewritePhotoStageConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( ActivityGravenInnocenceExcelConfigMgr::rewritePhotoObjectConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
      "rewriteConfig",
      42);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v10,
      (const char (*)[32])"rewritePhotoObjectConfig failed");
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

// Line 49: range 0000000012C3AFC8-0000000012C3B7EA
int32_t __cdecl ActivityGravenInnocenceExcelConfigMgr::checkConfig(
        ActivityGravenInnocenceExcelConfigMgr *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityGravenInnocenceExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  if ( ActivityGravenInnocenceExcelConfigMgr::checkOverallConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
      "checkConfig",
      52);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v5, (const char (*)[26])"checkOverallConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityGravenInnocenceExcelConfigMgr::checkCampStageConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
      "checkConfig",
      57);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v7,
      (const char (*)[28])"checkCampStageConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityGravenInnocenceExcelConfigMgr::checkCampLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
      "checkConfig",
      62);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v8,
      (const char (*)[28])"checkCampLevelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityGravenInnocenceExcelConfigMgr::checkRaceLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
      "checkConfig",
      67);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v9,
      (const char (*)[28])"checkRaceLevelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( ActivityGravenInnocenceExcelConfigMgr::checkCarveConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
      "checkConfig",
      72);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v10, (const char (*)[24])"checkCarveConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( ActivityGravenInnocenceExcelConfigMgr::checkPhotoObjectConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
      "checkConfig",
      77);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v11,
      (const char (*)[30])"checkPhotoObjectConfig failed");
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

// Line 84: range 0000000012C3B7EC-0000000012C3BD87
int32_t __cdecl ActivityGravenInnocenceExcelConfigMgr::rewriteCampStageConfig(
        ActivityGravenInnocenceExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v7; // rax
  const unsigned int *v8; // r8
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // edx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v16; // rax
  uint32_t *v17; // rdx
  char *v18; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v19; // rax
  uint32_t *v20; // rdx
  char v21; // cl
  int v22; // eax
  int32_t result; // eax
  uint32_t index; // [rsp+24h] [rbp-11Ch]
  uint32_t next_level_id; // [rsp+28h] [rbp-118h]
  data::GravenInnocenceCampStageExcelConfigMap *__for_range; // [rsp+30h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false,false>::reference v27; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig> >::type *stage_id; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig> >::type *stage_config; // [rsp+48h] [rbp-F8h]
  char v30[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 11 level_id:89 64 8 14 __for_begin:85 96 8 12 __for_end:85 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGravenInnocenceExcelConfigMgr::rewriteCampStageConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  __for_range = &this->graven_innocence_camp_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceCampStageExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GravenInnocenceCampStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceCampStageExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::GravenInnocenceCampStageExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false> *)(v3 + 96)) )
  {
    v27 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false,false> *const)(v3 + 64));
    stage_id = std::get<0ul,unsigned int const,data::GravenInnocenceCampStageExcelConfig>(v27);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GravenInnocenceCampStageExcelConfig>(v27);
    for ( index = 0; index < std::vector<unsigned int>::size(&stage_config->level_id_list); ++index )
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v6 = index;
      v7 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                 &stage_config->level_id_list,
                                                                                                 index);
      v9 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v6) = v11 != 0;
        __asan_report_store4(v3 + 48, v6);
      }
      *(_DWORD *)(v3 + 48) = v10;
      v12 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
              &this->camp_level_stage_map_,
              (unsigned int *)(v3 + 48),
              stage_id,
              (unsigned int *)&this->camp_level_stage_map_,
              v8);
      if ( !v12.second )
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
          "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
          "rewriteCampStageConfig",
          92);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 128),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v13, (const char (*)[53])byte_1AA5C660);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
        *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v15 = 0;
      }
      else
      {
        next_level_id = 0;
        if ( index + 1 < std::vector<unsigned int>::size(&stage_config->level_id_list) )
        {
          v16 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&stage_config->level_id_list, index + 1);
          v17 = v16;
          if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v16);
          }
          next_level_id = *v17;
        }
        v18 = (char *)(v3 + 48);
        v19 = std::unordered_map<unsigned int,unsigned int>::operator[](
                &this->camp_next_level_map_,
                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
        v20 = v19;
        v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
        if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
        {
          LOBYTE(v18) = v21 != 0;
          __asan_report_store4(v19, v18);
        }
        *v20 = next_level_id;
        v15 = 1;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v15 != 1 )
      {
        v22 = 0;
        goto LABEL_32;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false,false> *const)(v3 + 64));
  }
  v22 = 1;
LABEL_32:
  if ( v22 == 1 )
    v2 = 0;
  result = v2;
  if ( v30 == (char *)v3 )
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

// Line 109: range 0000000012C3BD88-0000000012C3C4C3
int32_t __cdecl ActivityGravenInnocenceExcelConfigMgr::rewriteCampLevelConfig(
        ActivityGravenInnocenceExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActivityGroupLinksExcelConfigMgr *p_activity_group_links_config_mgr; // rcx
  uint32_t *p_group_link_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  const unsigned int *v13; // rcx
  const unsigned int *v14; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  const unsigned int *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-17Ch]
  data::GravenInnocenceCampLevelExcelConfigMap *__for_range; // [rsp+18h] [rbp-178h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig>,false,false>::reference v24; // [rsp+20h] [rbp-170h]
  std::tuple_element<0,std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig> >::type *level_id; // [rsp+28h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig> >::type *level_config; // [rsp+30h] [rbp-160h]
  data::GroupLinksBundleExcelConfig *group_bundle_config_ptr; // [rsp+38h] [rbp-158h]
  char v28[336]; // [rsp+40h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:111 64 8 13 __for_end:111 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGravenInnocenceExcelConfigMgr::rewriteCampLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->graven_innocence_camp_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceCampLevelExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GravenInnocenceCampLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceCampLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GravenInnocenceCampLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig>,false,false> *const)(v2 + 32));
    level_id = std::get<0ul,unsigned int const,data::GravenInnocenceCampLevelExcelConfig>(v24);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GravenInnocenceCampLevelExcelConfig>(v24);
    p_activity_group_links_config_mgr = &txt_config_mgr->activity_group_links_config_mgr;
    p_group_link_id = &level_config->group_link_id;
    if ( *(_BYTE *)(((unsigned __int64)p_group_link_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_group_link_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_group_link_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(p_group_link_id);
    }
    group_bundle_config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
                                p_activity_group_links_config_mgr,
                                level_config->group_link_id);
    if ( group_bundle_config_ptr )
    {
      if ( std::vector<unsigned int>::size(&group_bundle_config_ptr->group_list) == 1 )
      {
        v13 = std::vector<unsigned int>::operator[](&group_bundle_config_ptr->group_list, 0LL);
        v15 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
                &this->camp_group_level_map_,
                v13,
                level_id,
                v13,
                v14);
        if ( !v15.second )
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
            "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
            "rewriteCampLevelConfig",
            129);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v16, (const char (*)[59])byte_1AA5C8A0);
          v18 = std::vector<unsigned int>::operator[](&group_bundle_config_ptr->group_list, 0LL);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, v18);
          v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v19, (const char (*)[17])byte_1AA5C7E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, level_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
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
          "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
          "rewriteCampLevelConfig",
          123);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [95],(char *[95])0>(v11, (const char (*)[95])byte_1AA5C820);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, level_id);
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
        "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
        "rewriteCampLevelConfig",
        117);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v7, (const char (*)[58])byte_1AA5C780);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &level_config->group_link_id);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])byte_1AA5C7E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v28 == (char *)v2 )
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

// Line 137: range 0000000012C3C4C4-0000000012C3C83C
int32_t __cdecl ActivityGravenInnocenceExcelConfigMgr::rewriteRaceLevelConfig(
        ActivityGravenInnocenceExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  int32_t result; // eax
  data::GravenInnocenceRaceLevelExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false,false>::reference v15; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig> >::type *level_id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig> >::type *level_config; // [rsp+28h] [rbp-D8h]
  char v18[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:138 64 8 13 __for_end:138 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGravenInnocenceExcelConfigMgr::rewriteRaceLevelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->graven_innocence_race_level_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceRaceLevelExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::GravenInnocenceRaceLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceRaceLevelExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GravenInnocenceRaceLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false> *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_16;
    }
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false,false> *const)(v3 + 32));
    level_id = std::get<0ul,unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>(v15);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>(v15);
    v7 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->race_gallery_level_map_,
           &level_config->gallery_id,
           level_id,
           (const unsigned int *)&this->race_gallery_level_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
    "rewriteRaceLevelConfig",
    142);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v8, (const char (*)[49])byte_1AA5C9A0);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &level_config->gallery_id);
  v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v10, (const char (*)[17])byte_1AA5CA00);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, level_id);
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

// Line 150: range 0000000012C3C83E-0000000012C3CDA7
int32_t __cdecl ActivityGravenInnocenceExcelConfigMgr::rewritePhotoStageConfig(
        ActivityGravenInnocenceExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  char *v7; // rsi
  unsigned int *v8; // rax
  const unsigned int *v9; // r8
  int *v10; // rdx
  int v11; // ecx
  char v12; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // edx
  int v17; // eax
  int32_t result; // eax
  data::GravenInnocencePhotoStageExcelConfigMap *__for_range; // [rsp+18h] [rbp-158h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocencePhotoStageExcelConfig>,false,false>::reference v20; // [rsp+20h] [rbp-150h]
  std::tuple_element<0,std::pair<unsigned int const,data::GravenInnocencePhotoStageExcelConfig> >::type *stage_id; // [rsp+28h] [rbp-148h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-138h]
  char v23[304]; // [rsp+40h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 13 object_id:153 64 8 15 __for_begin:151 96 8 13 __for_end:151 128 8 15 __for_begin:153 1"
                        "60 8 13 __for_end:153 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGravenInnocenceExcelConfigMgr::rewritePhotoStageConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  __for_range = &this->graven_innocence_photo_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocencePhotoStageExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GravenInnocencePhotoStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocencePhotoStageExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::GravenInnocencePhotoStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GravenInnocencePhotoStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocencePhotoStageExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocencePhotoStageExcelConfig>,false> *)(v3 + 96)) )
      break;
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocencePhotoStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocencePhotoStageExcelConfig>,false,false> *const)(v3 + 64));
    stage_id = std::get<0ul,unsigned int const,data::GravenInnocencePhotoStageExcelConfig>(v20);
    __for_range_0 = &std::get<1ul,unsigned int const,data::GravenInnocencePhotoStageExcelConfig>(v20)->object_id_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v16 = 1;
        goto LABEL_26;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v10 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v11 = *v10;
      v12 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(v7) = v12 != 0;
        __asan_report_store4(v3 + 48, v7);
      }
      *(_DWORD *)(v3 + 48) = v11;
      v13 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
              &this->photo_object_id_stage_map_,
              (unsigned int *)(v3 + 48),
              stage_id,
              (unsigned int *)&this->photo_object_id_stage_map_,
              v9);
      if ( !v13.second )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
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
      "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
      "rewritePhotoStageConfig",
      157);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 192),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v15 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v14, (const char (*)[47])byte_1AA5CB20);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v16 = 0;
LABEL_26:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v16 != 1 )
    {
      v17 = 0;
      goto LABEL_30;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocencePhotoStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocencePhotoStageExcelConfig>,false,false> *const)(v3 + 64));
  }
  v17 = 1;
LABEL_30:
  if ( v17 == 1 )
    v2 = 0;
  result = v2;
  if ( v23 == (char *)v3 )
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
  return result;
};

// Line 166: range 0000000012C3CDA8-0000000012C3D739
int32_t __cdecl ActivityGravenInnocenceExcelConfigMgr::rewritePhotoObjectConfig(
        ActivityGravenInnocenceExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_group_bundle_id; // rax
  int v7; // eax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  std::unordered_map<unsigned int,unsigned int> *p_photo_object_id_stage_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v12; // rdx
  bool v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v17; // rax
  int v18; // edx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int32_t result; // eax
  data::GravenInnocenceObjectDataExcelConfigMap *__for_range; // [rsp+20h] [rbp-200h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig>,false,false>::reference v23; // [rsp+28h] [rbp-1F8h]
  std::tuple_element<0,std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig> >::type *object_id; // [rsp+30h] [rbp-1F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig> >::type *object_config; // [rsp+38h] [rbp-1E8h]
  std::unordered_map<unsigned int,std::set<unsigned int>>::mapped_type *object_id_set; // [rsp+40h] [rbp-1E0h]
  std::unordered_map<unsigned int,std::set<unsigned int>>::mapped_type *group_bundle_id_set; // [rsp+48h] [rbp-1D8h]
  char v28[464]; // [rsp+50h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 15 __for_begin:167 64 8 13 __for_end:167 96 8 8 iter:180 128 8 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGravenInnocenceExcelConfigMgr::rewritePhotoObjectConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  __for_range = &this->graven_innocence_object_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceObjectDataExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::GravenInnocenceObjectDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceObjectDataExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GravenInnocenceObjectDataExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig>,false> *)(v3 + 64)) )
  {
    v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig>,false,false> *const)(v3 + 32));
    object_id = std::get<0ul,unsigned int const,data::GravenInnocenceObjectDataExcelConfig>(v23);
    object_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GravenInnocenceObjectDataExcelConfig>(v23);
    p_group_bundle_id = &object_config->group_bundle_id;
    if ( *(_BYTE *)(((unsigned __int64)p_group_bundle_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_group_bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_group_bundle_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(p_group_bundle_id);
    }
    if ( object_config->group_bundle_id )
    {
      object_id_set = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                        &this->bundle_id_photo_object_map_,
                        &object_config->group_bundle_id);
      v8 = std::set<unsigned int>::emplace<unsigned int const&>(object_id_set, object_id, object_id);
      if ( !v8.second )
      {
        *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
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
          "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
          "rewritePhotoObjectConfig",
          176);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v9, (const char (*)[47])byte_1AA5CB20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, object_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v7 = 1;
      }
      else
      {
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
        p_photo_object_id_stage_map = &this->photo_object_id_stage_map_;
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 96, object_id);
        *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_photo_object_id_stage_map,
                                                                                  object_id);
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
        v12 = &this->photo_object_id_stage_map_;
        if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 128, object_id);
        *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,unsigned int>::end(v12);
        v13 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 128),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 96));
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( v13 )
        {
          *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 224, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 224),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
            "rewritePhotoObjectConfig",
            183);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v14, (const char (*)[29])byte_1AA5CC60);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, object_id);
          common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v16, (const char (*)[22])byte_1AA5CCA0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
          *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v7 = 1;
        }
        else
        {
          v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 96));
          group_bundle_id_set = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                                  &this->photo_stage_id_bundle_map_,
                                  &v17->second);
          std::set<unsigned int>::insert(group_bundle_id_set, &object_config->group_bundle_id);
          v7 = 2;
        }
      }
    }
    else
    {
      v7 = 0;
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v7 && v7 != 2 )
    {
      v18 = 0;
      goto LABEL_32;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig>,false,false> *const)(v3 + 32));
  }
  v18 = 1;
LABEL_32:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v18 == 1 )
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
      1u,
      "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
      "rewritePhotoObjectConfig",
      189);
    v19 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            (common::milog::MiLogStream *const)(v3 + 288),
            (const char (*)[48])"[GRAVEN_INNOCENCE] photo_stage_id_bundle_map_: ");
    common::milog::MiLogStream::operator<<<unsigned int,std::set<unsigned int>>(v19, &this->photo_stage_id_bundle_map_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
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
      1u,
      "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
      "rewritePhotoObjectConfig",
      190);
    v20 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            (common::milog::MiLogStream *const)(v3 + 352),
            (const char (*)[49])"[GRAVEN_INNOCENCE] bundle_id_photo_object_map_: ");
    common::milog::MiLogStream::operator<<<unsigned int,std::set<unsigned int>>(v20, &this->bundle_id_photo_object_map_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    v2 = 0;
  }
  result = v2;
  if ( v28 == (char *)v3 )
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
  return result;
};

// Line 195: range 0000000012C3D73A-0000000012C3DE2C
int32_t __cdecl ActivityGravenInnocenceExcelConfigMgr::checkCampStageConfig(
        const ActivityGravenInnocenceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  char *v8; // rsi
  unsigned int *v9; // rax
  int *v10; // rdx
  int v11; // ecx
  char v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-18Ch]
  data::GravenInnocenceCampStageExcelConfigMap *__for_range; // [rsp+18h] [rbp-188h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false,false>::reference v20; // [rsp+20h] [rbp-180h]
  std::tuple_element<0,std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig> >::type *stage_id; // [rsp+28h] [rbp-178h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig> >::type *stage_config; // [rsp+30h] [rbp-170h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-168h]
  char v24[352]; // [rsp+40h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 12 level_id:205 64 8 15 __for_begin:197 96 8 13 __for_end:197 128 8 15 __for_begin:205 16"
                        "0 8 13 __for_end:205 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGravenInnocenceExcelConfigMgr::checkCampStageConfig;
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
  __for_range = &this->graven_innocence_camp_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceCampStageExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GravenInnocenceCampStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceCampStageExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GravenInnocenceCampStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false> *)(v2 + 96)) )
      break;
    v20 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false,false> *const)(v2 + 64));
    stage_id = std::get<0ul,unsigned int const,data::GravenInnocenceCampStageExcelConfig>(v20);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GravenInnocenceCampStageExcelConfig>(v20);
    if ( std::vector<unsigned int>::empty(&stage_config->level_id_list) )
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
        "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
        "checkCampStageConfig",
        202);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v6, (const char (*)[57])byte_1AA5CE80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, stage_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      __for_range_0 = &stage_config->level_id_list;
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
        v8 = (char *)(v2 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v9 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
        v10 = (int *)v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        v11 = *v10;
        v12 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v12 != 0 && v12 <= 3 )
        {
          LOBYTE(v8) = v12 != 0;
          __asan_report_store4(v2 + 48, v8);
        }
        *(_DWORD *)(v2 + 48) = v11;
        if ( !data::ActivityGravenInnocenceExcelConfigMgrBase::findGravenInnocenceCampLevelExcelConfig(
                this,
                *(unsigned int *)(v2 + 48)) )
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
            "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
            "checkCampStageConfig",
            210);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v13, (const char (*)[44])byte_1AA5CEE0);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v2 + 48));
          v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, stage_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v24 == (char *)v2 )
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

// Line 218: range 0000000012C3DE2E-0000000012C3E1F2
int32_t __cdecl ActivityGravenInnocenceExcelConfigMgr::checkCampLevelConfig(
        const ActivityGravenInnocenceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rcx
  uint32_t *p_watcher_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::GravenInnocenceCampLevelExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig>,false,false>::reference v14; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig> >::type *level_id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig> >::type *level_config; // [rsp+38h] [rbp-C8h]
  char v17[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:220 64 8 13 __for_end:220 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGravenInnocenceExcelConfigMgr::checkCampLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->graven_innocence_camp_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceCampLevelExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GravenInnocenceCampLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceCampLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GravenInnocenceCampLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig>,false,false> *const)(v2 + 32));
    level_id = std::get<0ul,unsigned int const,data::GravenInnocenceCampLevelExcelConfig>(v14);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GravenInnocenceCampLevelExcelConfig>(v14);
    p_watcher_config_mgr = &txt_config_mgr->watcher_config_mgr;
    p_watcher_id = &level_config->watcher_id;
    if ( *(_BYTE *)(((unsigned __int64)p_watcher_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_watcher_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_watcher_id);
    }
    if ( !WatcherExcelConfigMgr::findWatcherConfig(p_watcher_config_mgr, level_config->watcher_id) )
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
        "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
        "checkCampLevelConfig",
        225);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v7, (const char (*)[49])byte_1AA5CFC0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &level_config->watcher_id);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])byte_1AA5D020);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCampLevelExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 232: range 0000000012C3E1F4-0000000012C3F499
int32_t __cdecl ActivityGravenInnocenceExcelConfigMgr::checkRaceLevelConfig(
        const ActivityGravenInnocenceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  ActivityGroupLinksExcelConfigMgr *p_activity_group_links_config_mgr; // rcx
  __int64 group_link_id; // rsi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  char *v16; // rsi
  unsigned int *v17; // rax
  int *v18; // rdx
  int v19; // ecx
  char v20; // al
  __int64 v21; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  const std::any *p_param; // rdx
  int v27; // ecx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+24h] [rbp-32Ch]
  data::GravenInnocenceRaceLevelExcelConfigMap *__for_range; // [rsp+28h] [rbp-328h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false,false>::reference v45; // [rsp+30h] [rbp-320h]
  std::tuple_element<0,std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig> >::type *level_id; // [rsp+38h] [rbp-318h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig> >::type *level_config; // [rsp+40h] [rbp-310h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-308h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+50h] [rbp-300h]
  char v50[752]; // [rsp+60h] [rbp-2F0h] BYREF

  v2 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 32 4 14 watcher_id:249 48 8 15 __for_begin:235 80 8 13 __for_end:235 112 8 15 __for_begin:249"
                        " 144 8 13 __for_end:249 176 8 17 watcher_param:260 208 8 9 <unknown> 240 32 9 <unknown> 304 32 9"
                        " <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <unknown> 624 48 18"
                        " watcher_id_set:234";
  *(_QWORD *)(v2 + 16) = ActivityGravenInnocenceExcelConfigMgr::checkRaceLevelConfig;
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
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862741] = -202116109;
  ret = 0;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 624));
  __for_range = &this->graven_innocence_race_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceRaceLevelExcelConfig>::const_iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::GravenInnocenceRaceLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceRaceLevelExcelConfig>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::GravenInnocenceRaceLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false> *)(v2 + 80)) )
  {
    v45 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false,false> *const)(v2 + 48));
    level_id = std::get<0ul,unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>(v45);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>(v45);
    p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&level_config->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&level_config->gallery_id);
    }
    if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, level_config->gallery_id) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 79) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
        "checkRaceLevelConfig",
        240);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 240),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v6, (const char (*)[50])byte_1AA5D1E0);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &level_config->gallery_id);
      v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])byte_1AA5CA00);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
    }
    p_activity_group_links_config_mgr = &txt_config_mgr->activity_group_links_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&level_config->group_link_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->group_link_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&level_config->group_link_id);
    }
    group_link_id = level_config->group_link_id;
    if ( !data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
            p_activity_group_links_config_mgr,
            group_link_id) )
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
        "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
        "checkRaceLevelConfig",
        246);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 304),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v12, (const char (*)[58])byte_1AA5C780);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &level_config->group_link_id);
      v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])byte_1AA5CA00);
      group_link_id = (__int64)level_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    }
    __for_range_0 = &level_config->score_watcher_list;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, group_link_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 112) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, group_link_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 144) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v16 = (char *)(v2 + 144);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 112),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 144)) )
        break;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      v17 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 112));
      v18 = (int *)v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      v19 = *v18;
      v20 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
      if ( v20 != 0 && v20 <= 3 )
      {
        LOBYTE(v16) = v20 != 0;
        __asan_report_store4(v2 + 32, v16);
      }
      *(_DWORD *)(v2 + 32) = v19;
      v21 = *(unsigned int *)(v2 + 32);
      watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(&txt_config_mgr->watcher_config_mgr, v21);
      if ( watcher_config_ptr )
      {
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
        p_param = &watcher_config_ptr->param;
        if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 176, v21);
        *(GravenInnocenceRaceWatcherParam *)(v2 + 176) = std::any_cast<GravenInnocenceRaceWatcherParam>(p_param);
        if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 176);
        v27 = *(_DWORD *)(v2 + 176);
        if ( *(_BYTE *)(((unsigned __int64)&level_config->gallery_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&level_config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&level_config->gallery_id);
        }
        if ( v27 != level_config->gallery_id )
        {
          *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 432, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
            "checkRaceLevelConfig",
            263);
          v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 432),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v29 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v28, (const char (*)[34])byte_1AA5D240);
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v29,
                  (const unsigned int *)(v2 + 176));
          v31 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v30, (const char (*)[38])byte_1AA5D2A0);
          v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &level_config->gallery_id);
          v33 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v32, (const char (*)[13])" watcher_id:");
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v33,
                  (const unsigned int *)(v2 + 32));
          v35 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v34, (const char (*)[17])byte_1AA5CA00);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, level_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
          *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
        v36 = std::set<unsigned int>::insert(
                (std::set<unsigned int> *const)(v2 + 624),
                (const std::set<unsigned int>::value_type *)(v2 + 32));
        if ( !v36.second )
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
            "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
            "checkRaceLevelConfig",
            275);
          v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 560),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v38 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v37, (const char (*)[49])byte_1AA5D300);
          v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v38,
                  (const unsigned int *)(v2 + 32));
          v40 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v39, (const char (*)[17])byte_1AA5CA00);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, level_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 560));
          *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
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
          "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
          "checkRaceLevelConfig",
          254);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 368),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v22, (const char (*)[49])byte_1AA5CFC0);
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v2 + 32));
        v25 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v24, (const char (*)[17])byte_1AA5CA00);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, level_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
        *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 112));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false,false> *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 624));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
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
  return result;
};

// Line 284: range 0000000012C3F49A-0000000012C40127
int32_t __cdecl ActivityGravenInnocenceExcelConfigMgr::checkCarveConfig(
        const ActivityGravenInnocenceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  char *v10; // rsi
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  LuaConfigMgr *p_lua_config_mgr; // rcx
  __int64 v16; // rsi
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rcx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-274h]
  data::GravenInnocenceCarveOverallExcelConfigMap *__for_range; // [rsp+20h] [rbp-270h]
  data::GravenInnocenceCarveStageExcelConfigMap *__for_range_1; // [rsp+28h] [rbp-268h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig>,false,false>::reference v33; // [rsp+30h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig> >::type *config_0; // [rsp+40h] [rbp-250h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCarveOverallExcelConfig>,false,false>::reference v35; // [rsp+48h] [rbp-248h]
  std::tuple_element<0,std::pair<unsigned int const,data::GravenInnocenceCarveOverallExcelConfig> >::type *schedule_id; // [rsp+50h] [rbp-240h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceCarveOverallExcelConfig> >::type *config; // [rsp+58h] [rbp-238h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-230h]
  const GroupInfoScriptConfig *group_config_ptr; // [rsp+68h] [rbp-228h]
  char v40[544]; // [rsp+70h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 4 12 group_id:293 64 8 15 __for_begin:286 96 8 13 __for_end:286 128 8 15 __for_begin:293 1"
                        "60 8 13 __for_end:293 192 8 15 __for_begin:309 224 8 13 __for_end:309 256 32 9 <unknown> 320 32 "
                        "9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGravenInnocenceExcelConfigMgr::checkCarveConfig;
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
  v4[536862735] = -202116109;
  ret = 0;
  __for_range = &this->graven_innocence_carve_overall_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceCarveOverallExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GravenInnocenceCarveOverallExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceCarveOverallExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GravenInnocenceCarveOverallExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GravenInnocenceCarveOverallExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceCarveOverallExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceCarveOverallExcelConfig>,false> *)(v2 + 96)) )
      break;
    v35 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCarveOverallExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCarveOverallExcelConfig>,false,false> *const)(v2 + 64));
    schedule_id = std::get<0ul,unsigned int const,data::GravenInnocenceCarveOverallExcelConfig>(v35);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceCarveOverallExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GravenInnocenceCarveOverallExcelConfig>(v35);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    v7 = *schedule_id;
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(p_new_activity_config_mgr, v7) )
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
        "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
        "checkCarveConfig",
        291);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v8, (const char (*)[25])byte_1AA5D500);
      v7 = (__int64)schedule_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, schedule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    }
    __for_range_0 = &config->group_id_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v7);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v7);
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
      p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      v16 = *(unsigned int *)(v2 + 48);
      group_config_ptr = LuaConfigMgr::findGroupInfoConfig(p_lua_config_mgr, v16);
      if ( group_config_ptr )
      {
        if ( *(char *)(((unsigned __int64)&group_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&group_config_ptr->is_dynamic_load, v16, &group_config_ptr->is_dynamic_load);
        if ( !group_config_ptr->is_dynamic_load )
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
            "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
            "checkCarveConfig",
            305);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v22 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v21, (const char (*)[33])byte_1AA5D5E0);
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v2 + 48));
          v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])" id : ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, schedule_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
          *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
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
          "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
          "checkCarveConfig",
          299);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v17, (const char (*)[34])byte_1AA5D540);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v2 + 48));
        v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" id : ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCarveOverallExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCarveOverallExcelConfig>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  __for_range_1 = &this->graven_innocence_carve_stage_excel_config_map;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, v5);
  *(std::unordered_map<unsigned int,data::GravenInnocenceCarveStageExcelConfig>::const_iterator *)(v2 + 192) = std::unordered_map<unsigned int,data::GravenInnocenceCarveStageExcelConfig>::begin(__for_range_1);
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 224, v5);
  *(std::unordered_map<unsigned int,data::GravenInnocenceCarveStageExcelConfig>::const_iterator *)(v2 + 224) = std::unordered_map<unsigned int,data::GravenInnocenceCarveStageExcelConfig>::end(__for_range_1);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig>,false> *)(v2 + 192),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig>,false> *)(v2 + 224)) )
  {
    v33 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig>,false,false> *const)(v2 + 192));
    std::get<0ul,unsigned int const,data::GravenInnocenceCarveStageExcelConfig>(v33);
    config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GravenInnocenceCarveStageExcelConfig>(v33);
    p_watcher_config_mgr = &txt_config_mgr->watcher_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config_0->watcher_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_0->watcher_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_0->watcher_id);
    }
    if ( !WatcherExcelConfigMgr::findWatcherConfig(p_watcher_config_mgr, config_0->watcher_id) )
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
        "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
        "checkCarveConfig",
        314);
      v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v27 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v26, (const char (*)[36])byte_1AA5D640);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &config_0->watcher_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig>,false,false> *const)(v2 + 192));
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

// Line 321: range 0000000012C40128-0000000012C40504
int32_t __cdecl ActivityGravenInnocenceExcelConfigMgr::checkPhotoObjectConfig(
        const ActivityGravenInnocenceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_group_bundle_id; // rax
  ActivityGroupLinksExcelConfigMgr *p_activity_group_links_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  int32_t result; // eax
  data::GravenInnocenceObjectDataExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig>,false,false>::reference v13; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig> >::type *object_config; // [rsp+28h] [rbp-D8h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:322 64 8 13 __for_end:322 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGravenInnocenceExcelConfigMgr::checkPhotoObjectConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->graven_innocence_object_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceObjectDataExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::GravenInnocenceObjectDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceObjectDataExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GravenInnocenceObjectDataExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_21;
    }
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::GravenInnocenceObjectDataExcelConfig>(v13);
    object_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GravenInnocenceObjectDataExcelConfig>(v13);
    p_group_bundle_id = &object_config->group_bundle_id;
    if ( *(_BYTE *)(((unsigned __int64)p_group_bundle_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_group_bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_group_bundle_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(p_group_bundle_id);
    }
    if ( object_config->group_bundle_id )
    {
      p_activity_group_links_config_mgr = &txt_config_mgr->activity_group_links_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&object_config->group_bundle_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)object_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&object_config->group_bundle_id >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&object_config->group_bundle_id);
      }
      if ( !data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
              p_activity_group_links_config_mgr,
              object_config->group_bundle_id) )
        break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceObjectDataExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
    "checkPhotoObjectConfig",
    330);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v8, (const char (*)[39])byte_1AA5D740);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &object_config->group_bundle_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_21:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v15 == (char *)v3 )
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

// Line 338: range 0000000012C40506-0000000012C40BD4
int32_t __cdecl ActivityGravenInnocenceExcelConfigMgr::checkOverallConfig(
        const ActivityGravenInnocenceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  ReminderExcelConfigMgr *p_reminder_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  ReminderExcelConfigMgr *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  data::GravenInnocenceExcelConfigMap *__for_range; // [rsp+10h] [rbp-170h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceExcelConfig>,false,false>::reference v18; // [rsp+18h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceExcelConfig> >::type *overall_config; // [rsp+28h] [rbp-158h]
  char v20[336]; // [rsp+30h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 15 __for_begin:339 64 8 13 __for_end:339 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGravenInnocenceExcelConfigMgr::checkOverallConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->graven_innocence_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::GravenInnocenceExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GravenInnocenceExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GravenInnocenceExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GravenInnocenceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GravenInnocenceExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_30;
    }
    v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::GravenInnocenceExcelConfig>(v18);
    overall_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GravenInnocenceExcelConfig>(v18);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&overall_config->activity_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&overall_config->activity_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&overall_config->activity_id);
    }
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
            p_new_activity_config_mgr,
            overall_config->activity_id) )
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
        "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
        "checkOverallConfig",
        344);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             v7,
             (const char (*)[38])"[MUQADAS_POTION] invalid activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &overall_config->activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v9 = 0;
      goto LABEL_30;
    }
    p_reminder_config_mgr = &txt_config_mgr->reminder_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&overall_config->photo_succ_reminder_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)overall_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config->photo_succ_reminder_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&overall_config->photo_succ_reminder_id);
    }
    if ( !data::ReminderExcelConfigMgrBase::findReminderExcelConfig(
            p_reminder_config_mgr,
            overall_config->photo_succ_reminder_id) )
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
        "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
        "checkOverallConfig",
        350);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v11, (const char (*)[46])byte_1AA5D8C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v12,
        &overall_config->photo_succ_reminder_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v9 = 0;
      goto LABEL_30;
    }
    v13 = &txt_config_mgr->reminder_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&overall_config->photo_fail_reminder_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&overall_config->photo_fail_reminder_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&overall_config->photo_fail_reminder_id);
    }
    if ( !data::ReminderExcelConfigMgrBase::findReminderExcelConfig(v13, overall_config->photo_fail_reminder_id) )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityGravenInnocenceExcelConfig.cpp",
    "checkOverallConfig",
    355);
  v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v15 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v14, (const char (*)[46])byte_1AA5D920);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &overall_config->photo_fail_reminder_id);
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

// Line 363: range 0000000012C40BD6-0000000012C40DD1
__int64 __fastcall ActivityGravenInnocenceExcelConfigMgr::findCampStageIdByLevelId(
        const ActivityGravenInnocenceExcelConfigMgr *const this,
        __int64 level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_camp_level_stage_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 level_id:362 64 8 8 iter:364 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGravenInnocenceExcelConfigMgr::findCampStageIdByLevelId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  p_camp_level_stage_map = &this->camp_level_stage_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_camp_level_stage_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->camp_level_stage_map_;
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

// Line 373: range 0000000012C40DD2-0000000012C40FCD
__int64 __fastcall ActivityGravenInnocenceExcelConfigMgr::findCampLevelIdByGroupId(
        const ActivityGravenInnocenceExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_camp_group_level_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:372 64 8 8 iter:374 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGravenInnocenceExcelConfigMgr::findCampLevelIdByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_camp_group_level_map = &this->camp_group_level_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_camp_group_level_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->camp_group_level_map_;
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

// Line 383: range 0000000012C40FCE-0000000012C411C9
__int64 __fastcall ActivityGravenInnocenceExcelConfigMgr::getCampNextLevelId(
        const ActivityGravenInnocenceExcelConfigMgr *const this,
        __int64 level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_camp_next_level_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 level_id:382 64 8 8 iter:384 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGravenInnocenceExcelConfigMgr::getCampNextLevelId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  p_camp_next_level_map = &this->camp_next_level_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_camp_next_level_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->camp_next_level_map_;
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

// Line 393: range 0000000012C411CA-0000000012C413C5
__int64 __fastcall ActivityGravenInnocenceExcelConfigMgr::findRaceLevelIdByGalleryId(
        const ActivityGravenInnocenceExcelConfigMgr *const this,
        __int64 gallery_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_race_gallery_level_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gallery_id:392 64 8 8 iter:394 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGravenInnocenceExcelConfigMgr::findRaceLevelIdByGalleryId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gallery_id;
  p_race_gallery_level_map = &this->race_gallery_level_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gallery_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_race_gallery_level_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->race_gallery_level_map_;
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

// Line 403: range 0000000012C413C6-0000000012C415C1
__int64 __fastcall ActivityGravenInnocenceExcelConfigMgr::findPhotoStageIdByObjectId(
        const ActivityGravenInnocenceExcelConfigMgr *const this,
        __int64 object_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_photo_object_id_stage_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 13 object_id:402 64 8 8 iter:404 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGravenInnocenceExcelConfigMgr::findPhotoStageIdByObjectId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = object_id;
  p_photo_object_id_stage_map = &this->photo_object_id_stage_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, object_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_photo_object_id_stage_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->photo_object_id_stage_map_;
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

// Line 413: range 0000000012C415C2-0000000012C4178B
const std::set<unsigned int> *__fastcall ActivityGravenInnocenceExcelConfigMgr::findBundleSetByPhotoStageId(
        const ActivityGravenInnocenceExcelConfigMgr *const this,
        __int64 photo_stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_photo_stage_id_bundle_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 18 photo_stage_id:412 64 8 8 iter:414 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGravenInnocenceExcelConfigMgr::findBundleSetByPhotoStageId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = photo_stage_id;
  p_photo_stage_id_bundle_map = &this->photo_stage_id_bundle_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, photo_stage_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_photo_stage_id_bundle_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->photo_stage_id_bundle_map_;
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
    result = &this->EMPTY_SET;
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

// Line 423: range 0000000012C4178C-0000000012C41955
const std::set<unsigned int> *__fastcall ActivityGravenInnocenceExcelConfigMgr::findPhotoObjectSetByBundleId(
        const ActivityGravenInnocenceExcelConfigMgr *const this,
        __int64 group_bundle_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_bundle_id_photo_object_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 19 group_bundle_id:422 64 8 8 iter:424 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGravenInnocenceExcelConfigMgr::findPhotoObjectSetByBundleId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_bundle_id;
  p_bundle_id_photo_object_map = &this->bundle_id_photo_object_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_bundle_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_bundle_id_photo_object_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->bundle_id_photo_object_map_;
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
    result = &this->EMPTY_SET;
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
