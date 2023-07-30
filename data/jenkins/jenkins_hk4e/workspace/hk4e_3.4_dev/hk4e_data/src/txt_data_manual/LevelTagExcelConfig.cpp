// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/LevelTagExcelConfig.cpp

// Line 19: range 00000000145DB5CA-00000000145DBCBA
int32_t __cdecl LevelTagExcelConfigMgr::rewriteConfig(LevelTagExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)LevelTagExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  if ( LevelTagExcelConfigMgr::rewriteLevelTagConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/LevelTagExcelConfig.cpp",
      "rewriteConfig",
      22);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v5,
      (const char (*)[41])"[LEVEL_TAG] rewriteLevelTagConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( LevelTagExcelConfigMgr::rewriteLevelTagGroupsConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/LevelTagExcelConfig.cpp",
      "rewriteConfig",
      28);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      v7,
      (const char (*)[47])"[LEVEL_TAG] rewriteLevelTagGroupsConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( LevelTagExcelConfigMgr::rewriteRelatedGroupMap(this, txt_config_mgr) )
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
      "./src/txt_data_manual/LevelTagExcelConfig.cpp",
      "rewriteConfig",
      34);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v8,
      (const char (*)[42])"[LEVEL_TAG] rewriteRelatedGroupMap failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( LevelTagExcelConfigMgr::rewriteCustomGadgetMap(this, txt_config_mgr) )
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
      "./src/txt_data_manual/LevelTagExcelConfig.cpp",
      "rewriteConfig",
      40);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v9,
      (const char (*)[42])"[LEVEL_TAG] rewriteCustomGadgetMap failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( LevelTagExcelConfigMgr::rewriteLevelTagResetConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/LevelTagExcelConfig.cpp",
      "rewriteConfig",
      46);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      v10,
      (const char (*)[46])"[LEVEL_TAG] rewriteLevelTagResetConfig failed");
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

// Line 54: range 00000000145DBCBC-00000000145DC3AC
int32_t __cdecl LevelTagExcelConfigMgr::checkConfig(
        LevelTagExcelConfigMgr *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)LevelTagExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  if ( LevelTagExcelConfigMgr::checkLevelTagConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/LevelTagExcelConfig.cpp",
      "checkConfig",
      57);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v5,
      (const char (*)[39])"[LEVEL_TAG] checkLevelTagConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( LevelTagExcelConfigMgr::checkCustomGadgetMap(this, txt_config_mgr) )
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
      "./src/txt_data_manual/LevelTagExcelConfig.cpp",
      "checkConfig",
      63);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v7,
      (const char (*)[40])"[LEVEL_TAG] checkCustomGadgetMap failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( LevelTagExcelConfigMgr::checkLevelTagResetConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/LevelTagExcelConfig.cpp",
      "checkConfig",
      69);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v8,
      (const char (*)[44])"[LEVEL_TAG] checkLevelTagResetConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( LevelTagExcelConfigMgr::checkRelatedGroupMap(this, txt_config_mgr) )
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
      "./src/txt_data_manual/LevelTagExcelConfig.cpp",
      "checkConfig",
      75);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v9,
      (const char (*)[40])"[LEVEL_TAG] checkRelatedGroupMap failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( LevelTagExcelConfigMgr::checkLevelTagGroupsConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/LevelTagExcelConfig.cpp",
      "checkConfig",
      81);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      v10,
      (const char (*)[45])"[LEVEL_TAG] checkLevelTagGroupsConfig failed");
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

// Line 89: range 00000000145DC3AE-00000000145DCD95
int32_t __cdecl LevelTagExcelConfigMgr::rewriteLevelTagConfig(
        LevelTagExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<0,std::pair<unsigned int const,data::LevelTagExcelConfig> >::type *v6; // rsi
  unsigned int *v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int v15; // edx
  int v16; // eax
  char *v17; // rsi
  unsigned int *v18; // rax
  int *v19; // rdx
  int v20; // ecx
  char v21; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  int v26; // edx
  int32_t result; // eax
  data::LevelTagExcelConfigMap *__for_range; // [rsp+18h] [rbp-208h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagExcelConfig>,false,false>::reference v30; // [rsp+20h] [rbp-200h]
  std::tuple_element<0,std::pair<unsigned int const,data::LevelTagExcelConfig> >::type *level_tag_id; // [rsp+28h] [rbp-1F8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LevelTagExcelConfig> >::type *excel_config; // [rsp+30h] [rbp-1F0h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >>>::mapped_type *scene_tag_info_map; // [rsp+38h] [rbp-1E8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-1E0h]
  const data::SceneTagConfig *scene_tag_config_ptr; // [rsp+48h] [rbp-1D8h]
  std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >>::mapped_type *add_id_vec; // [rsp+50h] [rbp-1D0h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+58h] [rbp-1C8h]
  const data::SceneTagConfig *scene_tag_config_ptr_0; // [rsp+60h] [rbp-1C0h]
  std::vector<unsigned int> *del_id_vec; // [rsp+68h] [rbp-1B8h]
  char v40[432]; // [rsp+70h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 4 15 scene_tag_id:93 48 4 16 scene_tag_id:106 64 8 14 __for_begin:90 96 8 12 __for_end:90 "
                        "128 8 14 __for_begin:93 160 8 12 __for_end:93 192 8 15 __for_begin:106 224 8 13 __for_end:106 25"
                        "6 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = LevelTagExcelConfigMgr::rewriteLevelTagConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -218959118;
  v5[536862731] = -202116109;
  __for_range = &this->level_tag_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LevelTagExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::LevelTagExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LevelTagExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::LevelTagExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LevelTagExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LevelTagExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LevelTagExcelConfig>,false> *)(v3 + 96)) )
  {
    v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagExcelConfig>,false,false> *const)(v3 + 64));
    level_tag_id = std::get<0ul,unsigned int const,data::LevelTagExcelConfig>(v30);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LevelTagExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LevelTagExcelConfig>(v30);
    scene_tag_info_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>>::operator[](
                           &this->level_tag_id_2_scene_tag_info_map_,
                           level_tag_id);
    __for_range_0 = &excel_config->add_scene_tag_id_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, level_tag_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, level_tag_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (std::tuple_element<0,std::pair<unsigned int const,data::LevelTagExcelConfig> >::type *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v15 = 1;
        goto LABEL_26;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
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
      scene_tag_config_ptr = data::SceneExcelConfigMgrBase::findSceneTagConfig(
                               &txt_config_mgr->scene_config_mgr,
                               *(unsigned int *)(v3 + 32));
      if ( !scene_tag_config_ptr )
        break;
      add_id_vec = std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>::operator[](
                     scene_tag_info_map,
                     &scene_tag_config_ptr->scene_id);
      std::vector<unsigned int>::push_back(&add_id_vec->first, (const std::vector<unsigned int>::value_type *)(v3 + 32));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
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
      "./src/txt_data_manual/LevelTagExcelConfig.cpp",
      "rewriteLevelTagConfig",
      98);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v11, (const char (*)[36])byte_1ADB79A0);
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
    v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])" ,level_tag_id: ");
    v6 = level_tag_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, level_tag_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v15 = 0;
LABEL_26:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v15 != 1 )
    {
      v16 = 0;
      goto LABEL_48;
    }
    __for_range_1 = &excel_config->remove_scene_tag_id_list;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v17 = (char *)(v3 + 224);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224)) )
      {
        v26 = 1;
        goto LABEL_44;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v18 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
      v19 = (int *)v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v18);
      }
      v20 = *v19;
      v21 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v21 != 0 && v21 <= 3 )
      {
        LOBYTE(v17) = v21 != 0;
        __asan_report_store4(v3 + 48, v17);
      }
      *(_DWORD *)(v3 + 48) = v20;
      scene_tag_config_ptr_0 = data::SceneExcelConfigMgrBase::findSceneTagConfig(
                                 &txt_config_mgr->scene_config_mgr,
                                 *(unsigned int *)(v3 + 48));
      if ( !scene_tag_config_ptr_0 )
        break;
      del_id_vec = &std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>::operator[](
                      scene_tag_info_map,
                      &scene_tag_config_ptr_0->scene_id)->second;
      std::vector<unsigned int>::push_back(del_id_vec, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
    }
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
      "./src/txt_data_manual/LevelTagExcelConfig.cpp",
      "rewriteLevelTagConfig",
      111);
    v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v23 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v22, (const char (*)[36])byte_1ADB79A0);
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
    v25 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v24, (const char (*)[17])" ,level_tag_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, level_tag_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v26 = 0;
LABEL_44:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v26 != 1 )
    {
      v16 = 0;
      goto LABEL_48;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagExcelConfig>,false,false> *const)(v3 + 64));
  }
  v16 = 1;
LABEL_48:
  if ( v16 == 1 )
    v2 = 0;
  result = v2;
  if ( v40 == (char *)v3 )
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

// Line 124: range 00000000145DCD96-00000000145DDCE2
int32_t __cdecl LevelTagExcelConfigMgr::rewriteLevelTagGroupsConfig(
        LevelTagExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::vector<data::LevelTagGroup>::reference v6; // rax
  const data::LevelTagGroup *v7; // r15
  data::LevelTagGroup *v8; // rax
  char *v9; // rsi
  unsigned int *v10; // rax
  int *v11; // rdx
  int v12; // ecx
  char v13; // al
  __int64 v14; // rsi
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // eax
  uint32_t v18; // ecx
  char v19; // al
  unsigned int *v20; // rcx
  std::pair<unsigned int,unsigned int> *v21; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>,bool> v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // eax
  std::vector<unsigned int>::size_type v26; // r15
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  __int64 v30; // rsi
  std::vector<unsigned int>::reference v31; // rax
  int *v32; // rdx
  int v33; // ecx
  char v34; // al
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  int v37; // eax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  int32_t result; // eax
  uint32_t index; // [rsp+28h] [rbp-2B8h]
  uint32_t i; // [rsp+2Ch] [rbp-2B4h]
  uint32_t i_0; // [rsp+30h] [rbp-2B0h]
  uint32_t i_1; // [rsp+34h] [rbp-2ACh]
  data::LevelTagGroupsExcelConfigMap *__for_range; // [rsp+38h] [rbp-2A8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagGroupsExcelConfig>,false,false>::reference __in; // [rsp+40h] [rbp-2A0h]
  const unsigned int *id; // [rsp+48h] [rbp-298h]
  std::tuple_element<1,std::pair<unsigned int const,data::LevelTagGroupsExcelConfig> >::type *excel_config; // [rsp+50h] [rbp-290h]
  const data::LevelTagGroup *level_tag_group_0; // [rsp+58h] [rbp-288h]
  std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-278h]
  char v52[624]; // [rsp+70h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 4 16 level_tag_id:148 64 4 9 <unknown> 80 4 24 initial_level_tag_id:172 96 8 15 __for_begi"
                        "n:125 128 8 13 __for_end:125 160 8 15 __for_begin:148 192 8 13 __for_end:148 224 8 9 <unknown> 2"
                        "56 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = LevelTagExcelConfigMgr::rewriteLevelTagGroupsConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -202116109;
  __for_range = &this->level_tag_groups_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LevelTagGroupsExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::LevelTagGroupsExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LevelTagGroupsExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::LevelTagGroupsExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::LevelTagGroupsExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LevelTagGroupsExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LevelTagGroupsExcelConfig>,false> *)(v3 + 128)) )
    {
      v25 = 1;
      goto LABEL_74;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagGroupsExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagGroupsExcelConfig>,false,false> *const)(v3 + 96));
    id = std::get<0ul,unsigned int const,data::LevelTagGroupsExcelConfig>(__in);
    excel_config = std::get<1ul,unsigned int const,data::LevelTagGroupsExcelConfig>(__in);
    index = 0;
    for ( i = 0; i < std::vector<data::LevelTagGroup>::size(&excel_config->level_tag_group_list); ++i )
    {
      v6 = std::vector<data::LevelTagGroup>::operator[](&excel_config->level_tag_group_list, i);
      if ( !std::vector<unsigned int>::empty(&v6->level_tag_id_list) )
      {
        if ( index != i )
        {
          v7 = std::vector<data::LevelTagGroup>::operator[](&excel_config->level_tag_group_list, i);
          v8 = std::vector<data::LevelTagGroup>::operator[](&excel_config->level_tag_group_list, index);
          data::LevelTagGroup::operator=(v8, v7);
        }
        ++index;
      }
    }
    std::vector<data::LevelTagGroup>::resize(&excel_config->level_tag_group_list, index);
    for ( i_0 = 0; i_0 < std::vector<data::LevelTagGroup>::size(&excel_config->level_tag_group_list); ++i_0 )
    {
      __for_range_0 = &std::vector<data::LevelTagGroup>::operator[](&excel_config->level_tag_group_list, i_0)->level_tag_id_list;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, i_0);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, i_0);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v9 = (char *)(v3 + 192);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
        {
          v17 = 1;
          goto LABEL_43;
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
        v11 = (int *)v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        v12 = *v11;
        v13 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v13 != 0 && v13 <= 3 )
        {
          LOBYTE(v9) = v13 != 0;
          __asan_report_store4(v3 + 48, v9);
        }
        *(_DWORD *)(v3 + 48) = v12;
        v14 = *(unsigned int *)(v3 + 48);
        if ( !data::LevelTagExcelConfigMgrBase::findLevelTagExcelConfig(this, v14) )
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
            "./src/txt_data_manual/LevelTagExcelConfig.cpp",
            "rewriteLevelTagGroupsConfig",
            152);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v15, (const char (*)[36])byte_1ADB7BA0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
          *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v17 = 0;
          goto LABEL_43;
        }
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        v18 = i_0 + 1;
        v19 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
        LOBYTE(v14) = v19 != 0;
        if ( v19 != 0 && v19 <= 3 )
          __asan_report_store4(v3 + 64, v14);
        *(_DWORD *)(v3 + 64) = v18;
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 224, v14);
        *(std::pair<unsigned int,unsigned int> *)(v3 + 224) = std::make_pair<unsigned int const&,unsigned int>(
                                                                id,
                                                                (unsigned int *)(v3 + 64));
        v22 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::emplace<unsigned int &,std::pair<unsigned int,unsigned int>>(
                &this->level_tag_series_group_map_,
                (unsigned int *)(v3 + 48),
                (std::pair<unsigned int,unsigned int> *)(v3 + 224),
                v20,
                v21);
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( !v22.second )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
      }
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
        "./src/txt_data_manual/LevelTagExcelConfig.cpp",
        "rewriteLevelTagGroupsConfig",
        158);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v24 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v23, (const char (*)[36])byte_1ADB7C00);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v17 = 0;
LABEL_43:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v17 != 1 )
      {
        v25 = 0;
        goto LABEL_74;
      }
    }
    v26 = std::vector<unsigned int>::size(&excel_config->initial_level_tag_id_list);
    if ( v26 != std::vector<data::LevelTagGroup>::size(&excel_config->level_tag_group_list) )
      break;
    for ( i_1 = 0;
          i_1 < std::vector<unsigned int>::size(&excel_config->initial_level_tag_id_list)
       && i_1 < std::vector<data::LevelTagGroup>::size(&excel_config->level_tag_group_list);
          ++i_1 )
    {
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v30 = i_1;
      v31 = std::vector<unsigned int>::operator[](&excel_config->initial_level_tag_id_list, i_1);
      v32 = (int *)v31;
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v31);
      }
      v33 = *v32;
      v34 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( v34 != 0 && v34 <= 3 )
      {
        LOBYTE(v30) = v34 != 0;
        __asan_report_store4(v3 + 80, v30);
      }
      *(_DWORD *)(v3 + 80) = v33;
      level_tag_group_0 = std::vector<data::LevelTagGroup>::operator[](&excel_config->level_tag_group_list, i_1);
      if ( !common::tools::MiscUtils::isContains<unsigned int>(
              &level_tag_group_0->level_tag_id_list,
              (const unsigned int *)(v3 + 80)) )
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
          "./src/txt_data_manual/LevelTagExcelConfig.cpp",
          "rewriteLevelTagGroupsConfig",
          176);
        v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v36 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v35, (const char (*)[60])byte_1ADB7CE0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
        *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v37 = 0;
      }
      else
      {
        v38 = std::set<unsigned int>::emplace<unsigned int &>(
                &this->initial_level_tag_id_set_,
                (unsigned int *)(v3 + 80),
                (unsigned int *)&this->initial_level_tag_id_set_);
        if ( !v38.second )
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
            "./src/txt_data_manual/LevelTagExcelConfig.cpp",
            "rewriteLevelTagGroupsConfig",
            182);
          v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v40 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v39, (const char (*)[42])byte_1ADB7D40);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v37 = 0;
        }
        else
        {
          v37 = 1;
        }
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v37 != 1 )
      {
        v25 = 0;
        goto LABEL_74;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagGroupsExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagGroupsExcelConfig>,false,false> *const)(v3 + 96));
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
    "./src/txt_data_manual/LevelTagExcelConfig.cpp",
    "rewriteLevelTagGroupsConfig",
    166);
  v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 384),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v28 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(v27, (const char (*)[80])byte_1ADB7C60);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
  v2 = -1;
  v25 = 0;
LABEL_74:
  if ( v25 == 1 )
    v2 = 0;
  result = v2;
  if ( v52 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
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
  }
  return result;
};

// Line 192: range 00000000145DDCE4-00000000145DE413
int32_t __cdecl LevelTagExcelConfigMgr::rewriteRelatedGroupMap(
        LevelTagExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  char *v7; // rsi
  char *v8; // rsi
  unsigned int *v9; // rax
  int *v10; // rdx
  int v11; // ecx
  char v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // edx
  std::vector<unsigned int> *v16; // rdx
  int v17; // edx
  int v18; // eax
  int32_t result; // eax
  std::unordered_map<unsigned int,SceneScriptConfig> *__for_range; // [rsp+18h] [rbp-1B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,SceneScriptConfig>,false,false>::reference v21; // [rsp+20h] [rbp-1B0h]
  std::unordered_map<unsigned int,GroupInfoScriptConfig> *__for_range_0; // [rsp+38h] [rbp-198h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::reference v23; // [rsp+40h] [rbp-190h]
  std::tuple_element<0,std::pair<unsigned int const,GroupInfoScriptConfig> >::type *group_id; // [rsp+48h] [rbp-188h]
  std::vector<unsigned int> *__for_range_1; // [rsp+58h] [rbp-178h]
  char v26[368]; // [rsp+60h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 13 series_id:197 64 8 15 __for_begin:193 96 8 13 __for_end:193 128 8 15 __for_begin:195 1"
                        "60 8 13 __for_end:195 192 8 15 __for_begin:197 224 8 13 __for_end:197 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = LevelTagExcelConfigMgr::rewriteRelatedGroupMap;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -202116109;
  __for_range = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr.scene_script_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,SceneScriptConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,SceneScriptConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,SceneScriptConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,SceneScriptConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,SceneScriptConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SceneScriptConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SceneScriptConfig>,false> *)(v3 + 96)) )
      break;
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,SceneScriptConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,SceneScriptConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,SceneScriptConfig>(v21);
    __for_range_0 = &std::get<1ul,unsigned int const,SceneScriptConfig>(v21)->group_info_map;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::unordered_map<unsigned int,GroupInfoScriptConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,GroupInfoScriptConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::unordered_map<unsigned int,GroupInfoScriptConfig>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,GroupInfoScriptConfig>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 160);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,GroupInfoScriptConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupInfoScriptConfig>,false> *)(v3 + 128),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupInfoScriptConfig>,false> *)(v3 + 160)) )
        break;
      v23 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false> *const)(v3 + 128));
      group_id = std::get<0ul,unsigned int const,GroupInfoScriptConfig>(v23);
      __for_range_1 = &std::get<1ul,unsigned int const,GroupInfoScriptConfig>(v23)->related_level_tag_series_vec;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v7);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v7);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v8 = (char *)(v3 + 224);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224)) )
        {
          v15 = 1;
          goto LABEL_32;
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v9 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
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
        if ( !data::LevelTagExcelConfigMgrBase::findLevelTagGroupsExcelConfig(this, *(unsigned int *)(v3 + 48)) )
          break;
        v16 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                &this->related_group_map_,
                (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
        std::vector<unsigned int>::push_back(v16, group_id);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
      }
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
        "./src/txt_data_manual/LevelTagExcelConfig.cpp",
        "rewriteRelatedGroupMap",
        201);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v13, (const char (*)[33])byte_1ADB7EA0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v15 = 0;
LABEL_32:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( v15 != 1 )
      {
        v17 = 0;
        goto LABEL_36;
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupInfoScriptConfig>,false,false> *const)(v3 + 128));
    }
    v17 = 1;
LABEL_36:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v18 = 0;
      goto LABEL_40;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,SceneScriptConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,SceneScriptConfig>,false,false> *const)(v3 + 64));
  }
  v18 = 1;
LABEL_40:
  if ( v18 == 1 )
    v2 = 0;
  result = v2;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 214: range 00000000145DE414-00000000145DE768
int32_t __cdecl LevelTagExcelConfigMgr::rewriteCustomGadgetMap(
        LevelTagExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::CustomGadgetSlotLevelTagConfig *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false,false>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  int32_t result; // eax
  data::CustomGadgetSlotLevelTagConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false,false>::reference v13; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:215 64 8 13 __for_end:215 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = LevelTagExcelConfigMgr::rewriteCustomGadgetMap;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->custom_gadget_slot_level_tag_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_16;
    }
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::CustomGadgetSlotLevelTagConfig>(v13);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig> >::type *)std::get<1ul,unsigned int const,data::CustomGadgetSlotLevelTagConfig>(v13);
    v7 = std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig>::emplace<unsigned int const&,data::CustomGadgetSlotLevelTagConfig const&>(
           &this->level_tag_id_2_custom_gadget_map_,
           &excel_config->level_tag_id,
           excel_config,
           (const unsigned int *)&this->level_tag_id_2_custom_gadget_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/LevelTagExcelConfig.cpp",
    "rewriteCustomGadgetMap",
    219);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
         v8,
         (const char (*)[77])"[LEVEL_TAG] one level_tag_id correspond to multiple slot map, level_tag_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->level_tag_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_16:
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

// Line 227: range 00000000145DE76A-00000000145DECBC
int32_t __cdecl LevelTagExcelConfigMgr::rewriteLevelTagResetConfig(
        LevelTagExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::vector<unsigned int> *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // edx
  common::milog::MiLogStream *v11; // r14
  std::unordered_map<unsigned int,std::vector<unsigned int>>::size_type v12; // rax
  int32_t result; // eax
  data::LevelTagResetExcelConfigMap *__for_range; // [rsp+10h] [rbp-150h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagResetExcelConfig>,false,false>::reference v15; // [rsp+18h] [rbp-148h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LevelTagResetExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-138h]
  char v17[304]; // [rsp+30h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 15 __for_begin:228 64 8 13 __for_end:228 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = LevelTagExcelConfigMgr::rewriteLevelTagResetConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  __for_range = &this->level_tag_reset_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LevelTagResetExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::LevelTagResetExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LevelTagResetExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::LevelTagResetExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::LevelTagResetExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LevelTagResetExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LevelTagResetExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_16;
    }
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagResetExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagResetExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::LevelTagResetExcelConfig>(v15);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LevelTagResetExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LevelTagResetExcelConfig>(v15);
    v7 = std::unordered_map<unsigned int,std::vector<unsigned int>>::emplace<unsigned int const&,std::vector<unsigned int> const&>(
           &this->level_tag_reset_map_,
           &excel_config->dungeon_id,
           &excel_config->series_id_list,
           &excel_config->dungeon_id,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagResetExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagResetExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/LevelTagExcelConfig.cpp",
    "rewriteLevelTagResetConfig",
    232);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v8, (const char (*)[33])byte_1ADB80E0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->dungeon_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v10 = 0;
LABEL_16:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v10 == 1 )
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
      1u,
      "./src/txt_data_manual/LevelTagExcelConfig.cpp",
      "rewriteLevelTagResetConfig",
      237);
    v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            (common::milog::MiLogStream *const)(v3 + 192),
            (const char (*)[41])"[LEVEL_TAG] level_tag_reset_map_ size = ");
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    v12 = std::unordered_map<unsigned int,std::vector<unsigned int>>::size(&this->level_tag_reset_map_);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      v12 = __asan_report_store8(v3 + 96, "[LEVEL_TAG] level_tag_reset_map_ size = ");
    *(_QWORD *)(v3 + 96) = v12;
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, (const unsigned __int64 *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    v2 = 0;
  }
  result = v2;
  if ( v17 == (char *)v3 )
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

// Line 243: range 00000000145DECBE-00000000145E1018
int32_t __cdecl LevelTagExcelConfigMgr::checkLevelTagConfig(
        LevelTagExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  _BOOL4 v11; // edx
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  std::vector<unsigned int> *p_load_dynamic_group_list; // rsi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  char *v26; // rsi
  unsigned int *v27; // rax
  int *v28; // rdx
  int v29; // ecx
  char v30; // al
  __int64 v31; // rsi
  int SceneIdByGroupId; // edx
  char v33; // al
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  __int64 v42; // rsi
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  unsigned __int64 v57; // rax
  char *v58; // rsi
  unsigned int *v59; // rax
  int *v60; // rdx
  int v61; // ecx
  char v62; // al
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rdx
  int v67; // eax
  uint32_t scene_id; // ecx
  __int64 v69; // rsi
  __int64 v70; // rdx
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rdx
  SceneExcelConfigMgr *v75; // rcx
  SceneExcelConfigMgr *v76; // rcx
  char v77; // al
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rdx
  char *v85; // rsi
  unsigned int *v86; // rax
  int *v87; // rdx
  int v88; // ecx
  char v89; // al
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rdx
  int v94; // eax
  SceneExcelConfigMgr *v95; // rcx
  SceneExcelConfigMgr *v96; // rcx
  char v97; // al
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v100; // rax
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rdx
  unsigned __int64 v105; // rax
  int v106; // eax
  _BOOL4 v108; // [rsp+Ch] [rbp-5B4h]
  bool is_load_groups_valid; // [rsp+26h] [rbp-59Ah]
  bool is_initial_level_tag; // [rsp+27h] [rbp-599h]
  LuaConfigMgr *lua_config_mgr; // [rsp+28h] [rbp-598h]
  data::LevelTagExcelConfigMap *__for_range; // [rsp+30h] [rbp-590h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagExcelConfig>,false,false>::reference v114; // [rsp+38h] [rbp-588h]
  std::tuple_element<0,std::pair<unsigned int const,data::LevelTagExcelConfig> >::type *level_tag_id; // [rsp+40h] [rbp-580h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LevelTagExcelConfig> >::type *excel_config; // [rsp+48h] [rbp-578h]
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+50h] [rbp-570h]
  const std::vector<unsigned int> *load_groups_vec; // [rsp+58h] [rbp-568h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+68h] [rbp-558h]
  const data::SceneTagConfig *scene_tag_config_ptr; // [rsp+70h] [rbp-550h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+78h] [rbp-548h]
  const data::SceneTagConfig *scene_tag_config_ptr_0; // [rsp+80h] [rbp-540h]
  const GroupInfoScriptConfig *group_info_script_config_ptr; // [rsp+88h] [rbp-538h]
  char v124[1328]; // [rsp+90h] [rbp-530h] BYREF

  v3 = (unsigned __int64)v124;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1280LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "26 32 4 12 group_id:272 48 4 18 group_scene_id:274 64 4 16 scene_tag_id:300 80 4 16 scene_tag_id"
                        ":333 96 8 15 __for_begin:245 128 8 13 __for_end:245 160 8 15 __for_begin:272 192 8 13 __for_end:"
                        "272 224 8 15 __for_begin:300 256 8 13 __for_end:300 288 8 15 __for_begin:333 320 8 13 __for_end:"
                        "333 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknow"
                        "n> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown"
                        "> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 56 20 scene_tag_id_set:299";
  *(_QWORD *)(v3 + 16) = LevelTagExcelConfigMgr::checkLevelTagConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
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
  v5[536862756] = -218959118;
  v5[536862758] = -218103808;
  v5[536862759] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->level_tag_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LevelTagExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::LevelTagExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LevelTagExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::LevelTagExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LevelTagExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LevelTagExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LevelTagExcelConfig>,false> *)(v3 + 128)) )
  {
    v114 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagExcelConfig>,false,false> *const)(v3 + 96));
    level_tag_id = std::get<0ul,unsigned int const,data::LevelTagExcelConfig>(v114);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LevelTagExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LevelTagExcelConfig>(v114);
    p_scene_config_mgr = &txt_config_mgr->scene_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->scene_id);
    }
    scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(p_scene_config_mgr, excel_config->scene_id);
    if ( scene_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&scene_config_ptr->type);
      }
      if ( scene_config_ptr->type == SCENE_WORLD )
        goto LABEL_24;
      if ( scene_config_ptr->type != SCENE_DUNGEON )
        goto LABEL_23;
      p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&excel_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&excel_config->scene_id);
      }
      if ( !DungeonExcelConfigMgr::isUsedForMpDungeon(p_dungeon_config_mgr, excel_config->scene_id) )
LABEL_24:
        v13 = 0;
      else
LABEL_23:
        v13 = 1;
      if ( v13 )
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
          "./src/txt_data_manual/LevelTagExcelConfig.cpp",
          "checkLevelTagConfig",
          259);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v14, (const char (*)[35])byte_1ADB8420);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &excel_config->scene_id);
        v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v16,
                (const char (*)[17])" ,level_tag_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, level_tag_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
      else
      {
        is_load_groups_valid = 1;
        load_groups_vec = &excel_config->load_dynamic_group_list;
        p_load_dynamic_group_list = (std::vector<unsigned int> *)((((_BYTE)scene_config_ptr + 12) & 7u) + 3);
        if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&scene_config_ptr->type);
        }
        if ( scene_config_ptr->type != SCENE_WORLD && !std::vector<unsigned int>::empty(load_groups_vec) )
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
            "./src/txt_data_manual/LevelTagExcelConfig.cpp",
            "checkLevelTagConfig",
            268);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 480),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v20, (const char (*)[33])byte_1ADB8480);
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &excel_config->scene_id);
          v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v22,
                  (const char (*)[17])" ,level_tag_id: ");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, level_tag_id);
          v25 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v24, (const char (*)[38])byte_1ADB84E0);
          p_load_dynamic_group_list = &excel_config->load_dynamic_group_list;
          common::milog::MiLogStream::operator<<<unsigned int>(v25, load_groups_vec);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
          is_load_groups_valid = 0;
        }
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, p_load_dynamic_group_list);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(load_groups_vec);
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 192, p_load_dynamic_group_list);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(load_groups_vec);
        while ( 1 )
        {
          v26 = (char *)(v3 + 192);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
            break;
          *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
          v27 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
          v28 = (int *)v27;
          if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v27);
          }
          v29 = *v28;
          v30 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
          if ( v30 != 0 && v30 <= 3 )
          {
            LOBYTE(v26) = v30 != 0;
            __asan_report_store4(v3 + 32, v26);
          }
          *(_DWORD *)(v3 + 32) = v29;
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          v31 = *(unsigned int *)(v3 + 32);
          SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, v31);
          v33 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          if ( v33 != 0 && v33 <= 3 )
          {
            LOBYTE(v31) = v33 != 0;
            __asan_report_store4(v3 + 48, v31);
          }
          *(_DWORD *)(v3 + 48) = SceneIdByGroupId;
          if ( *(_BYTE *)(((unsigned __int64)&excel_config->scene_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&excel_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&excel_config->scene_id);
          }
          if ( excel_config->scene_id != *(_DWORD *)(v3 + 48) )
          {
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
              "./src/txt_data_manual/LevelTagExcelConfig.cpp",
              "checkLevelTagConfig",
              277);
            v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 544),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v35 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v34,
                    (const char (*)[20])byte_1ADB8540);
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &excel_config->scene_id);
            v37 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v36,
                    (const char (*)[17])" ,level_tag_id: ");
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, level_tag_id);
            v39 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    v38,
                    (const char (*)[29])byte_1ADB8580);
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    (const unsigned int *)(v3 + 32));
            v41 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    v40,
                    (const char (*)[24])byte_1ADB85C0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
            is_load_groups_valid = 0;
          }
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 32);
          v42 = *(unsigned int *)(v3 + 32);
          group_info_script_config_ptr = LuaConfigMgr::findGroupInfoConfig(lua_config_mgr, v42);
          if ( group_info_script_config_ptr )
          {
            if ( *(char *)(((unsigned __int64)&group_info_script_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(
                &group_info_script_config_ptr->is_dynamic_load,
                v42,
                &group_info_script_config_ptr->is_dynamic_load);
            if ( !group_info_script_config_ptr->is_dynamic_load )
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
                "./src/txt_data_manual/LevelTagExcelConfig.cpp",
                "checkLevelTagConfig",
                289);
              v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 672),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v51 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v50,
                      (const char (*)[20])byte_1ADB8540);
              v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &excel_config->scene_id);
              v53 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v52,
                      (const char (*)[17])" ,level_tag_id: ");
              v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, level_tag_id);
              v55 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      v54,
                      (const char (*)[29])byte_1ADB8580);
              v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v55,
                      (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v56, (const char (*)[19])byte_1ADB8640);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
              *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
              is_load_groups_valid = 0;
            }
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
              "./src/txt_data_manual/LevelTagExcelConfig.cpp",
              "checkLevelTagConfig",
              283);
            v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 608),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v44 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v43,
                    (const char (*)[20])byte_1ADB8540);
            v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &excel_config->scene_id);
            v46 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v45,
                    (const char (*)[17])" ,level_tag_id: ");
            v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, level_tag_id);
            v48 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    v47,
                    (const char (*)[29])byte_1ADB8580);
            v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v48,
                    (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v49, (const char (*)[18])byte_1ADB8600);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
            is_load_groups_valid = 0;
          }
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
        }
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( !is_load_groups_valid )
        {
          v2 = -1;
          v11 = 0;
        }
        else
        {
          is_initial_level_tag = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                                   &this->initial_level_tag_id_set_,
                                   level_tag_id);
          v57 = ((v3 + 1184) >> 3) + 2147450880;
          *(_DWORD *)v57 = 0;
          *(_WORD *)(v57 + 4) = 0;
          *(_BYTE *)(v57 + 6) = 0;
          std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 1184));
          __for_range_1 = &excel_config->add_scene_tag_id_list;
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 224, level_tag_id);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_1);
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 256, level_tag_id);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_1);
          while ( 1 )
          {
            v58 = (char *)(v3 + 256);
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256)) )
            {
              v67 = 1;
              goto LABEL_116;
            }
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            v59 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
            v60 = (int *)v59;
            if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v59 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v59);
            }
            v61 = *v60;
            v62 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
            if ( v62 != 0 && v62 <= 3 )
            {
              LOBYTE(v58) = v62 != 0;
              __asan_report_store4(v3 + 64, v58);
            }
            *(_DWORD *)(v3 + 64) = v61;
            scene_tag_config_ptr = data::SceneExcelConfigMgrBase::findSceneTagConfig(
                                     &txt_config_mgr->scene_config_mgr,
                                     *(unsigned int *)(v3 + 64));
            if ( !scene_tag_config_ptr )
            {
              *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 736, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 736),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/LevelTagExcelConfig.cpp",
                "checkLevelTagConfig",
                305);
              v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 736),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v64 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      v63,
                      (const char (*)[36])byte_1ADB79A0);
              v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v64,
                      (const unsigned int *)(v3 + 64));
              v66 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v65,
                      (const char (*)[17])" ,level_tag_id: ");
              v58 = (char *)level_tag_id;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, level_tag_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
              *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v67 = 0;
              goto LABEL_116;
            }
            if ( is_initial_level_tag )
            {
              if ( *(_BYTE *)(((unsigned __int64)&excel_config->scene_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&excel_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&excel_config->scene_id);
              }
              scene_id = excel_config->scene_id;
              if ( *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&scene_tag_config_ptr->scene_id);
              }
              if ( scene_id == scene_tag_config_ptr->scene_id )
              {
                v69 = ((_BYTE)scene_tag_config_ptr + 52) & 7;
                v70 = (*(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr->is_default_valid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v69 >= *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr->is_default_valid >> 3) + 0x7FFF8000));
                if ( (_BYTE)v70 )
                  __asan_report_load1(&scene_tag_config_ptr->is_default_valid, v69, v70);
                if ( !scene_tag_config_ptr->is_default_valid )
                {
                  *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 800, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 800),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/LevelTagExcelConfig.cpp",
                    "checkLevelTagConfig",
                    314);
                  v71 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 800),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v72 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                          v71,
                          (const char (*)[45])byte_1ADB8680);
                  v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v72,
                          (const unsigned int *)(v3 + 64));
                  v74 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          v73,
                          (const char (*)[17])" ,level_tag_id: ");
                  v58 = (char *)level_tag_id;
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, level_tag_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
                  *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v67 = 0;
                  goto LABEL_116;
                }
              }
            }
            v75 = &txt_config_mgr->scene_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&scene_tag_config_ptr->scene_id);
            }
            if ( SceneExcelConfigMgr::isPlayerWorldScene(v75, scene_tag_config_ptr->scene_id) )
              goto LABEL_105;
            v76 = &txt_config_mgr->scene_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&scene_tag_config_ptr->scene_id);
            }
            if ( !SceneExcelConfigMgr::isPersistentDungeonScene(v76, scene_tag_config_ptr->scene_id) )
              v77 = 1;
            else
LABEL_105:
              v77 = 0;
            if ( v77 )
            {
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
                "./src/txt_data_manual/LevelTagExcelConfig.cpp",
                "checkLevelTagConfig",
                322);
              v78 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 864),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v79 = common::milog::MiLogStream::operator<<<char [109],(char *[109])0>(
                      v78,
                      (const char (*)[109])byte_1ADB86E0);
              v58 = (char *)(v3 + 64);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v79,
                (const unsigned int *)(v3 + 64));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
              *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v67 = 0;
              goto LABEL_116;
            }
            v80 = std::unordered_set<unsigned int>::emplace<unsigned int &>(
                    (std::unordered_set<unsigned int> *const)(v3 + 1184),
                    (unsigned int *)(v3 + 64),
                    (unsigned int *)(v3 + 64));
            if ( !v80.second )
              break;
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
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
            "./src/txt_data_manual/LevelTagExcelConfig.cpp",
            "checkLevelTagConfig",
            328);
          v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 928),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v82 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v81, (const char (*)[36])byte_1ADB8780);
          v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v82,
                  (const unsigned int *)(v3 + 64));
          v84 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v83,
                  (const char (*)[17])" ,level_tag_id: ");
          v58 = (char *)level_tag_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, level_tag_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
          *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v67 = 0;
LABEL_116:
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
          if ( v67 == 1 )
          {
            __for_range_2 = &excel_config->remove_scene_tag_id_list;
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 288, v58);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_2);
            *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 320, v58);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_2);
            while ( 1 )
            {
              v85 = (char *)(v3 + 320);
              if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288),
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 320)) )
              {
                v94 = 1;
                goto LABEL_150;
              }
              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
              v86 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
              v87 = (int *)v86;
              if ( *(_BYTE *)(((unsigned __int64)v86 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v86 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v86 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v86);
              }
              v88 = *v87;
              v89 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
              if ( v89 != 0 && v89 <= 3 )
              {
                LOBYTE(v85) = v89 != 0;
                __asan_report_store4(v3 + 80, v85);
              }
              *(_DWORD *)(v3 + 80) = v88;
              scene_tag_config_ptr_0 = data::SceneExcelConfigMgrBase::findSceneTagConfig(
                                         &txt_config_mgr->scene_config_mgr,
                                         *(unsigned int *)(v3 + 80));
              if ( !scene_tag_config_ptr_0 )
              {
                *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 992, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 992),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/LevelTagExcelConfig.cpp",
                  "checkLevelTagConfig",
                  338);
                v90 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 992),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v91 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        v90,
                        (const char (*)[36])byte_1ADB79A0);
                v92 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v91,
                        (const unsigned int *)(v3 + 80));
                v93 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v92,
                        (const char (*)[17])" ,level_tag_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v93, level_tag_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
                *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v94 = 0;
                goto LABEL_150;
              }
              v95 = &txt_config_mgr->scene_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr_0->scene_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr_0->scene_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&scene_tag_config_ptr_0->scene_id);
              }
              if ( SceneExcelConfigMgr::isPlayerWorldScene(v95, scene_tag_config_ptr_0->scene_id) )
                goto LABEL_139;
              v96 = &txt_config_mgr->scene_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr_0->scene_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr_0->scene_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&scene_tag_config_ptr_0->scene_id);
              }
              if ( !SceneExcelConfigMgr::isPersistentDungeonScene(v96, scene_tag_config_ptr_0->scene_id) )
                v97 = 1;
              else
LABEL_139:
                v97 = 0;
              if ( v97 )
              {
                *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1056) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1056, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1056),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/LevelTagExcelConfig.cpp",
                  "checkLevelTagConfig",
                  346);
                v98 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1056),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v99 = common::milog::MiLogStream::operator<<<char [109],(char *[109])0>(
                        v98,
                        (const char (*)[109])byte_1ADB86E0);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v99,
                  (const unsigned int *)(v3 + 80));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
                *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v94 = 0;
                goto LABEL_150;
              }
              v100 = std::unordered_set<unsigned int>::emplace<unsigned int &>(
                       (std::unordered_set<unsigned int> *const)(v3 + 1184),
                       (unsigned int *)(v3 + 80),
                       (unsigned int *)(v3 + 80));
              if ( !v100.second )
                break;
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
            }
            *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1120) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1151) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1151) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1120, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1120),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/LevelTagExcelConfig.cpp",
              "checkLevelTagConfig",
              352);
            v101 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 1120),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v102 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                     v101,
                     (const char (*)[36])byte_1ADB8780);
            v103 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v102,
                     (const unsigned int *)(v3 + 80));
            v104 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                     v103,
                     (const char (*)[17])" ,level_tag_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v104, level_tag_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1120));
            *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v94 = 0;
LABEL_150:
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
            v108 = v94 == 1;
          }
          else
          {
            v108 = 0;
          }
          std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 1184));
          v11 = v108;
        }
      }
    }
    else
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
        "./src/txt_data_manual/LevelTagExcelConfig.cpp",
        "checkLevelTagConfig",
        251);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v7, (const char (*)[35])byte_1ADB8420);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &excel_config->scene_id);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" ,level_tag_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, level_tag_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
    }
    v105 = ((v3 + 1184) >> 3) + 2147450880;
    *(_DWORD *)v105 = -117901064;
    *(_WORD *)(v105 + 4) = -1800;
    *(_BYTE *)(v105 + 6) = -8;
    if ( !v11 )
    {
      v106 = 0;
      goto LABEL_156;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagExcelConfig>,false,false> *const)(v3 + 96));
  }
  v106 = 1;
LABEL_156:
  if ( v106 == 1 )
    v2 = 0;
  if ( v124 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 160) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1280LL, v124);
  }
  return v2;
};

// Line 362: range 00000000145E101A-00000000145E1BC2
int32_t __cdecl LevelTagExcelConfigMgr::checkCustomGadgetMap(
        LevelTagExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_gadget_id; // rax
  __int64 v7; // rsi
  uint32_t gadget_id; // ecx
  char v9; // al
  int v12; // edx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  const std::unordered_map<std::string,data::CustomGadgetNodeSlot> *p_slot_map; // rdx
  const std::unordered_map<std::string,data::CustomGadgetNodeSlot> *v18; // rdx
  const std::unordered_map<std::string,data::CustomGadgetNodeSlot>::key_type *p_slot_identifier; // rcx
  __int64 v20; // rsi
  bool v21; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // eax
  common::milog::MiLogStream *v27; // rax
  int v28; // eax
  int32_t result; // eax
  data::CustomGadgetSlotLevelTagConfigMap *__for_range; // [rsp+20h] [rbp-250h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false,false>::reference v32; // [rsp+28h] [rbp-248h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig> >::type *excel_config; // [rsp+38h] [rbp-238h]
  const std::vector<data::CustomGadgetSlotGroup> *__for_range_0; // [rsp+40h] [rbp-230h]
  const data::CustomGadgetSlotGroup *gadget_slot; // [rsp+48h] [rbp-228h]
  JsonConfigMgr *json_config_mgr; // [rsp+50h] [rbp-220h]
  const data::ConfigCustomGadgetNode *custom_gadget_node_config; // [rsp+58h] [rbp-218h]
  char v38[528]; // [rsp+60h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 4 13 gadget_id:366 64 8 15 __for_begin:364 96 8 13 __for_end:364 128 8 15 __for_begin:367 "
                        "160 8 13 __for_end:367 192 8 9 <unknown> 224 8 9 <unknown> 256 16 21 config_gadget_ptr:375 288 3"
                        "2 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = LevelTagExcelConfigMgr::checkCustomGadgetMap;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -219021312;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -202116109;
  __for_range = &this->custom_gadget_slot_level_tag_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false> *)(v3 + 96)) )
  {
    v32 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::CustomGadgetSlotLevelTagConfig>(v32);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig> >::type *)std::get<1ul,unsigned int const,data::CustomGadgetSlotLevelTagConfig>(v32);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    p_gadget_id = &excel_config->gadget_id;
    v7 = (((_BYTE)excel_config + 44) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_gadget_id);
    }
    gadget_id = excel_config->gadget_id;
    v9 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v9 != 0;
    if ( v9 != 0 && v9 <= 3 )
      __asan_report_store4(v3 + 48, v7);
    *(_DWORD *)(v3 + 48) = gadget_id;
    __for_range_0 = &excel_config->slot_map;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v7);
    *(std::vector<data::CustomGadgetSlotGroup>::const_iterator *)(v3 + 128) = std::vector<data::CustomGadgetSlotGroup>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v7);
    *(std::vector<data::CustomGadgetSlotGroup>::const_iterator *)(v3 + 160) = std::vector<data::CustomGadgetSlotGroup>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::CustomGadgetSlotGroup const*,std::vector<data::CustomGadgetSlotGroup>>(
              (const __gnu_cxx::__normal_iterator<const data::CustomGadgetSlotGroup*,std::vector<data::CustomGadgetSlotGroup> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<const data::CustomGadgetSlotGroup*,std::vector<data::CustomGadgetSlotGroup> > *)(v3 + 160)) )
      {
        v26 = 1;
        goto LABEL_54;
      }
      gadget_slot = __gnu_cxx::__normal_iterator<data::CustomGadgetSlotGroup const*,std::vector<data::CustomGadgetSlotGroup>>::operator*((const __gnu_cxx::__normal_iterator<const data::CustomGadgetSlotGroup*,std::vector<data::CustomGadgetSlotGroup> > *const)(v3 + 128));
      if ( !(unsigned __int8)std::string::empty() || !std::vector<unsigned int>::empty(&gadget_slot->slot_list) )
        break;
LABEL_52:
      __gnu_cxx::__normal_iterator<data::CustomGadgetSlotGroup const*,std::vector<data::CustomGadgetSlotGroup>>::operator++((__gnu_cxx::__normal_iterator<const data::CustomGadgetSlotGroup*,std::vector<data::CustomGadgetSlotGroup> > *const)(v3 + 128));
    }
    if ( (unsigned __int8)std::string::empty() != 1 && !std::vector<unsigned int>::empty(&gadget_slot->slot_list) )
    {
      json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
      *(_WORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      v12 = *(_DWORD *)(v3 + 48);
      if ( *(_WORD *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      JsonConfigMgr::findGadgetConfig(
        (const JsonConfigMgr *const)(v3 + 256),
        (const std::unordered_map<unsigned int,std::shared_ptr<data::ConfigGadget>> *)json_config_mgr,
        v12);
      if ( std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v3 + 256)) )
      {
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/LevelTagExcelConfig.cpp",
          "checkCustomGadgetMap",
          378);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                v13,
                (const char (*)[54])"[LEVEL_TAG] can't find gadget json config, gadget_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v15 = 0;
      }
      else
      {
        v16 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
        custom_gadget_node_config = &v16->misc.custom_gadget_node;
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        p_slot_map = &v16->misc.custom_gadget_node.slot_map;
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 224, v3 + 256);
        *(std::unordered_map<std::string,data::CustomGadgetNodeSlot>::const_iterator *)(v3 + 224) = std::unordered_map<std::string,data::CustomGadgetNodeSlot>::end(p_slot_map);
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        v18 = &custom_gadget_node_config->slot_map;
        p_slot_identifier = &gadget_slot->slot_identifier;
        v20 = *(unsigned __int8 *)(((v3 + 192) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v20 )
          __asan_report_store8(v3 + 192, v20);
        *(std::unordered_map<std::string,data::CustomGadgetNodeSlot>::const_iterator *)(v3 + 192) = std::unordered_map<std::string,data::CustomGadgetNodeSlot>::find(v18, p_slot_identifier);
        v21 = std::__detail::operator==<std::pair<std::string const,data::CustomGadgetNodeSlot>,true>(
                (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CustomGadgetNodeSlot>,true> *)(v3 + 192),
                (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CustomGadgetNodeSlot>,true> *)(v3 + 224));
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
        if ( v21 )
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
            "./src/txt_data_manual/LevelTagExcelConfig.cpp",
            "checkCustomGadgetMap",
            384);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(v22, (const char (*)[66])byte_1ADB8980);
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v3 + 48));
          v25 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v24,
                  (const char (*)[20])", slot_identifier: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &gadget_slot->slot_identifier);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        else
        {
          v15 = 1;
        }
      }
      std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v3 + 256));
      *(_WORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -1800;
      if ( v15 != 1 )
      {
        v26 = 0;
        goto LABEL_54;
      }
      goto LABEL_52;
    }
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
      "./src/txt_data_manual/LevelTagExcelConfig.cpp",
      "checkCustomGadgetMap",
      392);
    v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 416),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(v27, (const char (*)[79])byte_1ADB8A40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v26 = 0;
LABEL_54:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v26 != 1 )
    {
      v28 = 0;
      goto LABEL_58;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false,false> *const)(v3 + 64));
  }
  v28 = 1;
LABEL_58:
  if ( v28 == 1 )
    v2 = 0;
  result = v2;
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 401: range 00000000145E1BC4-00000000145E2AF1
int32_t __cdecl LevelTagExcelConfigMgr::checkLevelTagResetConfig(
        LevelTagExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  uint32_t *p_dungeon_id; // rax
  __int64 dungeon_id; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  _BOOL4 v11; // edx
  unsigned __int64 v12; // rax
  char *v13; // rsi
  unsigned int *v14; // rax
  int *v15; // rdx
  int v16; // ecx
  char v17; // al
  __int64 v18; // rsi
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int v21; // eax
  char *v22; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v23; // rax
  unsigned int *v24; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // edx
  int v29; // edx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  _BOOL4 v33; // r15d
  unsigned __int64 v34; // rax
  int v35; // eax
  data::LevelTagResetExcelConfigMap *__for_range; // [rsp+28h] [rbp-328h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagResetExcelConfig>,false,false>::reference v39; // [rsp+30h] [rbp-320h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LevelTagResetExcelConfig> >::type *excel_config; // [rsp+40h] [rbp-310h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-300h]
  data::LevelTagGroupsExcelConfig *series_config_ptr; // [rsp+58h] [rbp-2F8h]
  const std::vector<data::LevelTagGroup> *__for_range_1; // [rsp+60h] [rbp-2F0h]
  std::vector<unsigned int> *__for_range_2; // [rsp+70h] [rbp-2E0h]
  data::LevelTagExcelConfig *level_tag_config_ptr; // [rsp+78h] [rbp-2D8h]
  char v46[720]; // [rsp+80h] [rbp-2D0h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 48 4 13 series_id:412 64 8 15 __for_begin:402 96 8 13 __for_end:402 128 8 15 __for_begin:412 "
                        "160 8 13 __for_end:412 192 8 15 __for_begin:421 224 8 13 __for_end:421 256 8 15 __for_begin:423 "
                        "288 8 13 __for_end:423 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknow"
                        "n> 576 56 17 series_id_set:411";
  *(_QWORD *)(v3 + 16) = LevelTagExcelConfigMgr::checkLevelTagResetConfig;
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
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218103808;
  v5[536862740] = -202116109;
  __for_range = &this->level_tag_reset_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LevelTagResetExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::LevelTagResetExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LevelTagResetExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::LevelTagResetExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LevelTagResetExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LevelTagResetExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LevelTagResetExcelConfig>,false> *)(v3 + 96)) )
  {
    v39 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagResetExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagResetExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::LevelTagResetExcelConfig>(v39);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LevelTagResetExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LevelTagResetExcelConfig>(v39);
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    p_dungeon_id = &excel_config->dungeon_id;
    if ( *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_dungeon_id);
    }
    dungeon_id = excel_config->dungeon_id;
    if ( data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, dungeon_id) )
    {
      v12 = ((v3 + 576) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_WORD *)(v12 + 4) = 0;
      *(_BYTE *)(v12 + 6) = 0;
      std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 576));
      __for_range_0 = &excel_config->series_id_list;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, dungeon_id);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, dungeon_id);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v13 = (char *)(v3 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
        {
          v21 = 1;
          goto LABEL_67;
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v14 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
        v15 = (int *)v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        v16 = *v15;
        v17 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v17 != 0 && v17 <= 3 )
        {
          LOBYTE(v13) = v17 != 0;
          __asan_report_store4(v3 + 48, v13);
        }
        *(_DWORD *)(v3 + 48) = v16;
        v18 = *(unsigned int *)(v3 + 48);
        series_config_ptr = data::LevelTagExcelConfigMgrBase::findLevelTagGroupsExcelConfig(this, v18);
        if ( !series_config_ptr )
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
            "./src/txt_data_manual/LevelTagExcelConfig.cpp",
            "checkLevelTagResetConfig",
            417);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v20 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v19, (const char (*)[33])byte_1ADB7EA0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
          *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v21 = 0;
          goto LABEL_67;
        }
        __for_range_1 = &series_config_ptr->level_tag_group_list;
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 192, v18);
        *(std::vector<data::LevelTagGroup>::const_iterator *)(v3 + 192) = std::vector<data::LevelTagGroup>::begin(__for_range_1);
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 224, v18);
        *(std::vector<data::LevelTagGroup>::const_iterator *)(v3 + 224) = std::vector<data::LevelTagGroup>::end(__for_range_1);
        while ( 1 )
        {
          v22 = (char *)(v3 + 224);
          if ( !__gnu_cxx::operator!=<data::LevelTagGroup const*,std::vector<data::LevelTagGroup>>(
                  (const __gnu_cxx::__normal_iterator<const data::LevelTagGroup*,std::vector<data::LevelTagGroup> > *)(v3 + 192),
                  (const __gnu_cxx::__normal_iterator<const data::LevelTagGroup*,std::vector<data::LevelTagGroup> > *)(v3 + 224)) )
            break;
          __for_range_2 = &__gnu_cxx::__normal_iterator<data::LevelTagGroup const*,std::vector<data::LevelTagGroup>>::operator*((const __gnu_cxx::__normal_iterator<const data::LevelTagGroup*,std::vector<data::LevelTagGroup> > *const)(v3 + 192))->level_tag_id_list;
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 256, v22);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::begin(__for_range_2);
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 288, v22);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::end(__for_range_2);
          while ( 1 )
          {
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288)) )
            {
              v28 = 1;
              goto LABEL_55;
            }
            v23 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 256));
            v24 = (unsigned int *)v23;
            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v23);
            }
            level_tag_config_ptr = data::LevelTagExcelConfigMgrBase::findLevelTagExcelConfig(this, *v24);
            if ( level_tag_config_ptr )
            {
              if ( !std::vector<unsigned int>::empty(&level_tag_config_ptr->add_scene_tag_id_list)
                || !std::vector<unsigned int>::empty(&level_tag_config_ptr->remove_scene_tag_id_list) )
              {
                break;
              }
            }
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 256));
          }
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/LevelTagExcelConfig.cpp",
            "checkLevelTagResetConfig",
            431);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v27 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v26, (const char (*)[78])byte_1ADB8CA0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v28 = 0;
LABEL_55:
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
          if ( v28 != 1 )
          {
            v29 = 0;
            goto LABEL_59;
          }
          __gnu_cxx::__normal_iterator<data::LevelTagGroup const*,std::vector<data::LevelTagGroup>>::operator++((__gnu_cxx::__normal_iterator<const data::LevelTagGroup*,std::vector<data::LevelTagGroup> > *const)(v3 + 192));
        }
        v29 = 1;
LABEL_59:
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
        if ( v29 != 1 )
        {
          v21 = 0;
          goto LABEL_67;
        }
        v30 = std::unordered_set<unsigned int>::emplace<unsigned int &>(
                (std::unordered_set<unsigned int> *const)(v3 + 576),
                (unsigned int *)(v3 + 48),
                (unsigned int *)(v3 + 48));
        if ( !v30.second )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      }
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/LevelTagExcelConfig.cpp",
        "checkLevelTagResetConfig",
        440);
      v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v32 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v31, (const char (*)[33])byte_1ADB8D20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v21 = 0;
LABEL_67:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      v33 = v21 == 1;
      std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 576));
      v11 = v33;
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
        "./src/txt_data_manual/LevelTagExcelConfig.cpp",
        "checkLevelTagResetConfig",
        407);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v9, (const char (*)[42])byte_1ADB8C40);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &excel_config->dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
    }
    v34 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v34 = -117901064;
    *(_WORD *)(v34 + 4) = -1800;
    *(_BYTE *)(v34 + 6) = -8;
    if ( !v11 )
    {
      v35 = 0;
      goto LABEL_72;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagResetExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagResetExcelConfig>,false,false> *const)(v3 + 64));
  }
  v35 = 1;
LABEL_72:
  if ( v35 == 1 )
    v2 = 0;
  if ( v46 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = -168430091;
  }
  return v2;
};

// Line 450: range 00000000145E2AF2-00000000145E333C
int32_t __cdecl LevelTagExcelConfigMgr::checkRelatedGroupMap(
        LevelTagExcelConfigMgr *const this,
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
  LuaConfigMgr *p_lua_config_mgr; // rcx
  __int64 v12; // rsi
  int SceneIdByGroupId; // edx
  char v14; // al
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  char v16; // al
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
  common::milog::MiLogStream *v27; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-18Ch]
  std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range; // [rsp+18h] [rbp-188h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::reference v32; // [rsp+20h] [rbp-180h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *series_id; // [rsp+28h] [rbp-178h]
  const std::tuple_element<1,std::pair<unsigned int const,std::vector<unsigned int> > >::type *__for_range_0; // [rsp+38h] [rbp-168h]
  char v35[352]; // [rsp+40h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 4 12 group_id:454 48 4 12 scene_id:456 64 8 15 __for_begin:452 96 8 13 __for_end:452 128 8 "
                        "15 __for_begin:454 160 8 13 __for_end:454 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = LevelTagExcelConfigMgr::checkRelatedGroupMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  ret = 0;
  __for_range = &this->related_group_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96)) )
      break;
    v32 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64));
    series_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v32);
    __for_range_0 = std::get<1ul,unsigned int const,std::vector<unsigned int>>(v32);
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
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 32);
      v12 = *(unsigned int *)(v2 + 32);
      SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(p_lua_config_mgr, v12);
      v14 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v12) = v14 != 0;
        __asan_report_store4(v2 + 48, v12);
      }
      *(_DWORD *)(v2 + 48) = SceneIdByGroupId;
      if ( SceneExcelConfigMgr::isPlayerWorldScene(&txt_config_mgr->scene_config_mgr, *(_DWORD *)(v2 + 48)) )
        goto LABEL_29;
      p_scene_config_mgr = &txt_config_mgr->scene_config_mgr;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      if ( !SceneExcelConfigMgr::isPersistentDungeonScene(p_scene_config_mgr, *(_DWORD *)(v2 + 48)) )
        v16 = 1;
      else
LABEL_29:
        v16 = 0;
      if ( v16 )
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
          "./src/txt_data_manual/LevelTagExcelConfig.cpp",
          "checkRelatedGroupMap",
          460);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [122],(char *[122])0>(v17, (const char (*)[122])byte_1ADB8E80);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, series_id);
        v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])" ,group_id: ");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v2 + 32));
        v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])" ,scene_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
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
          1u,
          "./src/txt_data_manual/LevelTagExcelConfig.cpp",
          "checkRelatedGroupMap",
          464);
        v23 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[68])byte_1ADB8F60);
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, series_id);
        v25 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v24, (const char (*)[13])" ,group_id: ");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v2 + 32));
        v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v26, (const char (*)[13])" ,scene_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v35 == (char *)v2 )
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

// Line 472: range 00000000145E333E-00000000145E4010
int32_t __cdecl LevelTagExcelConfigMgr::checkLevelTagGroupsConfig(
        LevelTagExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::vector<data::LevelTagGroup>::size_type v6; // r15
  unsigned __int64 v7; // rax
  std::vector<data::LevelTagGroup> *p_level_tag_group_list; // rcx
  std::vector<data::LevelTagGroup>::size_type v9; // rsi
  char *v10; // rsi
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  __int64 v15; // rsi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // eax
  char *v19; // rsi
  unsigned int *v20; // rax
  int *v21; // rdx
  int v22; // ecx
  char v23; // al
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int v33; // edx
  _BOOL4 v34; // r15d
  unsigned __int64 v35; // rax
  int v36; // edx
  int v37; // eax
  int32_t result; // eax
  data::LevelTagGroupsExcelConfigMap *__for_range; // [rsp+20h] [rbp-250h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagGroupsExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-248h]
  const unsigned int *id; // [rsp+30h] [rbp-240h]
  std::tuple_element<1,std::pair<unsigned int const,data::LevelTagGroupsExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-238h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-228h]
  data::LevelTagExcelConfig *level_tag_config_ptr; // [rsp+50h] [rbp-220h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+58h] [rbp-218h]
  char v46[528]; // [rsp+60h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 4 5 i:475 48 4 16 level_tag_id:480 64 4 12 group_id:488 80 8 15 __for_begin:473 112 8 13 _"
                        "_for_end:473 144 8 15 __for_begin:480 176 8 13 __for_end:480 208 8 15 __for_begin:488 240 8 13 _"
                        "_for_end:488 272 32 9 <unknown> 336 32 9 <unknown> 400 48 16 group_id_set:477";
  *(_QWORD *)(v3 + 16) = LevelTagExcelConfigMgr::checkLevelTagGroupsConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
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
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862734] = -202116109;
  __for_range = &this->level_tag_groups_excel_config_map;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LevelTagGroupsExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::LevelTagGroupsExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LevelTagGroupsExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::LevelTagGroupsExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LevelTagGroupsExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LevelTagGroupsExcelConfig>,false> *)(v3 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LevelTagGroupsExcelConfig>,false> *)(v3 + 112)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagGroupsExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagGroupsExcelConfig>,false,false> *const)(v3 + 80));
    id = std::get<0ul,unsigned int const,data::LevelTagGroupsExcelConfig>(__in);
    excel_config = std::get<1ul,unsigned int const,data::LevelTagGroupsExcelConfig>(__in);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32, v3 + 112);
    for ( *(_DWORD *)(v3 + 32) = 0; ; ++*(_DWORD *)(v3 + 32) )
    {
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      v6 = *(unsigned int *)(v3 + 32);
      if ( v6 >= std::vector<data::LevelTagGroup>::size(&excel_config->level_tag_group_list) )
        break;
      v7 = ((v3 + 400) >> 3) + 2147450880;
      *(_DWORD *)v7 = 0;
      *(_WORD *)(v7 + 4) = 0;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 400));
      p_level_tag_group_list = &excel_config->level_tag_group_list;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      v9 = *(unsigned int *)(v3 + 32);
      __for_range_0 = &std::vector<data::LevelTagGroup>::operator[](p_level_tag_group_list, v9)->level_tag_id_list;
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 144, v9);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 144) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 176, v9);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 176) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v10 = (char *)(v3 + 176);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 144),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 176)) )
        {
          v18 = 1;
          goto LABEL_52;
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v11 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 144));
        v12 = (int *)v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        v13 = *v12;
        v14 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v14 != 0 && v14 <= 3 )
        {
          LOBYTE(v10) = v14 != 0;
          __asan_report_store4(v3 + 48, v10);
        }
        *(_DWORD *)(v3 + 48) = v13;
        v15 = *(unsigned int *)(v3 + 48);
        level_tag_config_ptr = data::LevelTagExcelConfigMgrBase::findLevelTagExcelConfig(this, v15);
        if ( !level_tag_config_ptr )
          break;
        __for_range_1 = &level_tag_config_ptr->load_dynamic_group_list;
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 208, v15);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 208) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 240, v15);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 240) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v19 = (char *)(v3 + 240);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 208),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 240)) )
          {
            v33 = 1;
            goto LABEL_48;
          }
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          v20 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 208));
          v21 = (int *)v20;
          if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v20);
          }
          v22 = *v21;
          v23 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
          if ( v23 != 0 && v23 <= 3 )
          {
            LOBYTE(v19) = v23 != 0;
            __asan_report_store4(v3 + 64, v19);
          }
          *(_DWORD *)(v3 + 64) = v22;
          v24 = std::set<unsigned int>::insert(
                  (std::set<unsigned int> *const)(v3 + 400),
                  (const std::set<unsigned int>::value_type *)(v3 + 64));
          if ( !v24.second )
            break;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 208));
        }
        *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 336, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 336),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/LevelTagExcelConfig.cpp",
          "checkLevelTagGroupsConfig",
          492);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 336),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v26 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(v25, (const char (*)[75])byte_1ADB9140);
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, id);
        v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v27, (const char (*)[14])byte_1ADB91C0);
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v3 + 32));
        v30 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v29,
                (const char (*)[17])", level_tag_id: ");
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v30,
                (const unsigned int *)(v3 + 48));
        v32 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v31, (const char (*)[19])byte_1ADB9240);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
        *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v33 = 0;
LABEL_48:
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
        if ( v33 != 1 )
        {
          v18 = 0;
          goto LABEL_52;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 144));
      }
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 79) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 272, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 272),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/LevelTagExcelConfig.cpp",
        "checkLevelTagGroupsConfig",
        485);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 272),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v16, (const char (*)[36])byte_1ADB7BA0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v18 = 0;
LABEL_52:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
      v34 = v18 == 1;
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 400));
      v35 = ((v3 + 400) >> 3) + 2147450880;
      *(_DWORD *)v35 = -117901064;
      *(_WORD *)(v35 + 4) = -1800;
      if ( !v34 )
      {
        v36 = 0;
        goto LABEL_58;
      }
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
    }
    v36 = 1;
LABEL_58:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v36 != 1 )
    {
      v37 = 0;
      goto LABEL_62;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagGroupsExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LevelTagGroupsExcelConfig>,false,false> *const)(v3 + 80));
  }
  v37 = 1;
LABEL_62:
  if ( v37 == 1 )
    v2 = 0;
  result = v2;
  if ( v46 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 504: range 00000000145E4012-00000000145E43E4
std::pair<unsigned int,unsigned int> __fastcall LevelTagExcelConfigMgr::getLevelTagSeriesGroupPair(
        const LevelTagExcelConfigMgr *const this,
        __int64 level_tag_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *p_level_tag_series_group_map; // rdx
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *v6; // rdx
  char *v7; // rsi
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::pointer v9; // rdx
  std::pair<unsigned int,unsigned int> *p_second; // rax
  std::pair<unsigned int,unsigned int> result; // rax
  char v12[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 9 <unknown> 64 4 9 <unknown> 80 4 16 level_tag_id:503 96 8 8 iter:505 128 8 9 <unknown> 1"
                        "60 8 9 <unknown> 192 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = LevelTagExcelConfigMgr::getLevelTagSeriesGroupPair;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -202116352;
  *(_DWORD *)(v2 + 80) = level_tag_id;
  p_level_tag_series_group_map = &this->level_tag_series_group_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, level_tag_id);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::find(p_level_tag_series_group_map, (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v2 + 80));
  v6 = &this->level_tag_series_group_map_;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v2 + 80);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(v6);
  v7 = (char *)(v2 + 128);
  v8 = std::__detail::operator!=<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 96),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 128));
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v2 + 96));
    p_second = &v9->second;
    if ( ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&p_second->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)p_second + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&p_second->second + 3) >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load_n(p_second, 8LL);
    }
    result = v9->second;
  }
  else
  {
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 64, v7);
    *(_DWORD *)(v2 + 64) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, v7);
    *(_DWORD *)(v2 + 48) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v7);
    *(std::pair<int,int> *)(v2 + 160) = std::make_pair<int,int>((int *)(v2 + 48), (int *)(v2 + 64));
    std::pair<unsigned int,unsigned int>::pair<int,int,true>(
      (std::pair<unsigned int,unsigned int> *const)(v2 + 192),
      (std::pair<int,int> *)(v2 + 160));
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 192);
    result = *(std::pair<unsigned int,unsigned int> *)(v2 + 192);
  }
  if ( v12 == (char *)v2 )
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

// Line 515: range 00000000145E43E6-00000000145E4407
uint32_t __cdecl LevelTagExcelConfigMgr::getLevelTagSeriesId(
        const LevelTagExcelConfigMgr *const this,
        uint32_t level_tag_id)
{
  return LevelTagExcelConfigMgr::getLevelTagSeriesGroupPair(this, level_tag_id).first;
};

// Line 520: range 00000000145E4408-00000000145E4625
const std::vector<unsigned int> *__fastcall LevelTagExcelConfigMgr::getRelatedGroupIdVec(
        const LevelTagExcelConfigMgr *const this,
        __int64 series_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_related_group_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v6; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 13 series_id:519 64 8 8 iter:521 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = LevelTagExcelConfigMgr::getRelatedGroupIdVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = series_id;
  p_related_group_map = &this->related_group_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, series_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_related_group_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->related_group_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64))->second;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'LevelTagExcelConfigMgr::getRelatedGroupIdVec(unsigned int)::empty_vec
      && __cxa_guard_acquire(&`guard variable for'LevelTagExcelConfigMgr::getRelatedGroupIdVec(unsigned int)::empty_vec) )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)&LevelTagExcelConfigMgr::getRelatedGroupIdVec(unsigned int)const::empty_vec);
      __cxa_guard_release(&`guard variable for'LevelTagExcelConfigMgr::getRelatedGroupIdVec(unsigned int)::empty_vec);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
        (void *)&LevelTagExcelConfigMgr::getRelatedGroupIdVec(unsigned int)const::empty_vec,
        &_dso_handle);
    }
    result = &LevelTagExcelConfigMgr::getRelatedGroupIdVec(unsigned int)const::empty_vec;
  }
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

// Line 532: range 00000000145E4626-00000000145E4843
const std::vector<unsigned int> *__fastcall LevelTagExcelConfigMgr::getLevelTagResetSeriesIdVec(
        const LevelTagExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_level_tag_reset_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v6; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:531 64 8 8 iter:533 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = LevelTagExcelConfigMgr::getLevelTagResetSeriesIdVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_level_tag_reset_map = &this->level_tag_reset_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_level_tag_reset_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->level_tag_reset_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64))->second;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'LevelTagExcelConfigMgr::getLevelTagResetSeriesIdVec(unsigned int)::empty_vec
      && __cxa_guard_acquire(&`guard variable for'LevelTagExcelConfigMgr::getLevelTagResetSeriesIdVec(unsigned int)::empty_vec) )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)&LevelTagExcelConfigMgr::getLevelTagResetSeriesIdVec(unsigned int)const::empty_vec);
      __cxa_guard_release(&`guard variable for'LevelTagExcelConfigMgr::getLevelTagResetSeriesIdVec(unsigned int)::empty_vec);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
        (void *)&LevelTagExcelConfigMgr::getLevelTagResetSeriesIdVec(unsigned int)const::empty_vec,
        &_dso_handle);
    }
    result = &LevelTagExcelConfigMgr::getLevelTagResetSeriesIdVec(unsigned int)const::empty_vec;
  }
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

// Line 544: range 00000000145E4844-00000000145E4A05
const data::CustomGadgetSlotLevelTagConfig *__fastcall LevelTagExcelConfigMgr::findCustomGadgetSlotByLevelTagId(
        const LevelTagExcelConfigMgr *const this,
        __int64 level_tag_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig> *p_level_tag_id_2_custom_gadget_map; // rdx
  std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig> *v6; // rdx
  bool v7; // al
  const data::CustomGadgetSlotLevelTagConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 16 level_tag_id:543 64 8 8 iter:545 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = LevelTagExcelConfigMgr::findCustomGadgetSlotByLevelTagId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_tag_id;
  p_level_tag_id_2_custom_gadget_map = &this->level_tag_id_2_custom_gadget_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_tag_id);
  *(std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig>::find(p_level_tag_id_2_custom_gadget_map, (const std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig>::key_type *)(v2 + 48));
  v6 = &this->level_tag_id_2_custom_gadget_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::CustomGadgetSlotLevelTagConfig>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CustomGadgetSlotLevelTagConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 554: range 00000000145E4A06-00000000145E4BC7
const std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >> *__fastcall LevelTagExcelConfigMgr::getSceneTagInfoMap(
        const LevelTagExcelConfigMgr *const this,
        __int64 level_tag_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >>> *p_level_tag_id_2_scene_tag_info_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >>> *v6; // rdx
  bool v7; // al
  const std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 16 level_tag_id:553 64 8 8 iter:555 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = LevelTagExcelConfigMgr::getSceneTagInfoMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_tag_id;
  p_level_tag_id_2_scene_tag_info_map = &this->level_tag_id_2_scene_tag_info_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_tag_id);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>>::find(p_level_tag_id_2_scene_tag_info_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >>>::key_type *)(v2 + 48));
  v6 = &this->level_tag_id_2_scene_tag_info_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int>>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<std::vector<unsigned int>,std::vector<unsigned int> >> >,false,false> *const)(v2 + 64))->second;
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
