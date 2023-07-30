// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityWinterCampExcelConfig.cpp

// Line 18: range 0000000012E610E2-0000000012E6168C
int32_t __cdecl ActivityWinterCampExcelConfigMgr::checkConfig(
        ActivityWinterCampExcelConfigMgr *const this,
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
  char v10[320]; // [rsp+10h] [rbp-140h] BYREF

  v2 = (common::milog::MiLogStream *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"4 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityWinterCampExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( ActivityWinterCampExcelConfigMgr::checkExploreConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
      "checkConfig",
      19);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v5,
      (const char (*)[27])"checkExploreConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityWinterCampExcelConfigMgr::checkBattleConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
      "checkConfig",
      20);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])"checkBattleConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityWinterCampExcelConfigMgr::checkRaceConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
      "checkConfig",
      21);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v8, (const char (*)[24])"checkRaceConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityWinterCampExcelConfigMgr::checkSnowmanConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
      "checkConfig",
      22);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v9,
      (const char (*)[27])"checkSnowmanConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v10 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 27: range 0000000012E6168E-0000000012E61C38
int32_t __cdecl ActivityWinterCampExcelConfigMgr::rewriteConfig(
        ActivityWinterCampExcelConfigMgr *const this,
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
  char v10[320]; // [rsp+10h] [rbp-140h] BYREF

  v2 = (common::milog::MiLogStream *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"4 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityWinterCampExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( ActivityWinterCampExcelConfigMgr::rewriteExploreConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
      "rewriteConfig",
      28);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v5,
      (const char (*)[29])"rewriteExploreConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityWinterCampExcelConfigMgr::rewriteBattleConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
      "rewriteConfig",
      29);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v7,
      (const char (*)[28])"rewriteBattleConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityWinterCampExcelConfigMgr::rewriteRaceConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
      "rewriteConfig",
      30);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v8, (const char (*)[26])"rewriteRaceConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityWinterCampExcelConfigMgr::rewriteSnowmanConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
      "rewriteConfig",
      31);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v9,
      (const char (*)[29])"rewriteSnowmanConfig failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v10 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 37: range 0000000012E61C3A-0000000012E63199
int32_t __cdecl ActivityWinterCampExcelConfigMgr::checkExploreConfig(
        ActivityWinterCampExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_reward_id; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  ActivityGroupLinksExcelConfigMgr *p_activity_group_links_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  __int64 group_id; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  char *v26; // rsi
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  char *v31; // rsi
  unsigned __int64 v32; // rax
  char *v33; // rsi
  unsigned int *v34; // rax
  int *v35; // rdx
  int v36; // ecx
  char v37; // al
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  unsigned __int64 v47; // rax
  int32_t ret; // [rsp+18h] [rbp-3D8h]
  uint32_t gadget_id; // [rsp+1Ch] [rbp-3D4h]
  LuaConfigMgr *lua_config_mgr; // [rsp+20h] [rbp-3D0h]
  data::WinterCampExploreExcelConfigMap *__for_range; // [rsp+28h] [rbp-3C8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampExploreExcelConfig>,false,false>::reference v54; // [rsp+30h] [rbp-3C0h]
  std::tuple_element<0,std::pair<unsigned int const,data::WinterCampExploreExcelConfig> >::type *id; // [rsp+38h] [rbp-3B8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampExploreExcelConfig> >::type *config; // [rsp+40h] [rbp-3B0h]
  const data::GroupLinksBundleExcelConfig *group_bundle_config_ptr; // [rsp+48h] [rbp-3A8h]
  const GroupScriptConfig *group_script_ptr; // [rsp+50h] [rbp-3A0h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_0; // [rsp+58h] [rbp-398h]
  const std::vector<data::WinterCampDropGroup> *__for_range_1; // [rsp+60h] [rbp-390h]
  const data::WinterCampDropGroup *drop_group; // [rsp+68h] [rbp-388h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+70h] [rbp-380h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::reference v63; // [rsp+78h] [rbp-378h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *gadget_config; // [rsp+88h] [rbp-368h]
  char v65[864]; // [rsp+90h] [rbp-360h] BYREF

  v2 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(832LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "17 32 4 10 drop_id:85 48 8 14 __for_begin:41 80 8 12 __for_end:41 112 8 14 __for_begin:69 144 8 "
                        "12 __for_end:69 176 8 14 __for_begin:82 208 8 12 __for_end:82 240 8 14 __for_begin:85 272 8 12 _"
                        "_for_end:85 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9"
                        " <unknown> 624 32 9 <unknown> 688 32 9 <unknown> 752 48 14 drop_id_set:84";
  *(_QWORD *)(v2 + 16) = ActivityWinterCampExcelConfigMgr::checkExploreConfig;
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
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862728] = -234881024;
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
  v4[536862740] = -219021312;
  v4[536862741] = 62194;
  v4[536862742] = -219021312;
  v4[536862743] = 62194;
  v4[536862745] = -202116109;
  ret = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  gadget_id = 0;
  __for_range = &this->winter_camp_explore_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WinterCampExploreExcelConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::WinterCampExploreExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WinterCampExploreExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::WinterCampExploreExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WinterCampExploreExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampExploreExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampExploreExcelConfig>,false> *)(v2 + 80)) )
  {
    v54 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampExploreExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampExploreExcelConfig>,false,false> *const)(v2 + 48));
    id = std::get<0ul,unsigned int const,data::WinterCampExploreExcelConfig>(v54);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampExploreExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WinterCampExploreExcelConfig>(v54);
    p_reward_id = &config->reward_id;
    if ( *(_BYTE *)(((unsigned __int64)p_reward_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reward_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_reward_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            config->reward_id,
                            ITEM_LIMIT_WINTER_CAMP_REWARD) != 1 )
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
        "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
        "checkExploreConfig",
        46);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 304),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v6, (const char (*)[33])byte_1AA684A0);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->reward_id);
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      p_activity_group_links_config_mgr = &txt_config_mgr->activity_group_links_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->group_link_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->group_link_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->group_link_id);
      }
      group_bundle_config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
                                  p_activity_group_links_config_mgr,
                                  config->group_link_id);
      if ( group_bundle_config_ptr )
      {
        if ( !common::tools::MiscUtils::isContains<unsigned int>(
                &group_bundle_config_ptr->group_list,
                &config->group_id) )
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
            "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
            "checkExploreConfig",
            59);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 432),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])byte_1AAB96A0);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->group_id);
          v18 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v17, (const char (*)[32])byte_1AAB96E0);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->group_link_id);
          v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
          *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->group_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&config->group_id);
          }
          group_id = config->group_id;
          group_script_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, group_id);
          if ( group_script_ptr )
          {
            __for_range_0 = &group_script_ptr->gadget_config_map;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 112, group_id);
            *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v2 + 112) = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(__for_range_0);
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 144, group_id);
            *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v2 + 144) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_0);
            while ( 1 )
            {
              v26 = (char *)(v2 + 144);
              if ( !std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v2 + 112),
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v2 + 144)) )
                break;
              v63 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v2 + 112));
              std::get<0ul,unsigned int const,GadgetScriptConfig>(v63);
              gadget_config = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v63);
              if ( !gadget_id )
              {
                if ( *(_BYTE *)(((unsigned __int64)&gadget_config->gadget_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)gadget_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config->gadget_id >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(&gadget_config->gadget_id);
                }
                gadget_id = gadget_config->gadget_id;
              }
              if ( *(_BYTE *)(((unsigned __int64)&gadget_config->gadget_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)gadget_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config->gadget_id >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(&gadget_config->gadget_id);
              }
              if ( gadget_id != gadget_config->gadget_id )
              {
                ret = -1;
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
                  "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
                  "checkExploreConfig",
                  79);
                v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 560),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v28 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        v27,
                        (const char (*)[47])byte_1AAB9720);
                v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &config->group_id);
                v30 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v29, (const char (*)[6])" ID: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 560));
                *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
              }
              std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v2 + 112));
            }
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            __for_range_1 = &config->drop_groups;
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 176, v26);
            *(std::vector<data::WinterCampDropGroup>::const_iterator *)(v2 + 176) = std::vector<data::WinterCampDropGroup>::begin(__for_range_1);
            *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 208, v26);
            *(std::vector<data::WinterCampDropGroup>::const_iterator *)(v2 + 208) = std::vector<data::WinterCampDropGroup>::end(__for_range_1);
            while ( 1 )
            {
              v31 = (char *)(v2 + 208);
              if ( !__gnu_cxx::operator!=<data::WinterCampDropGroup const*,std::vector<data::WinterCampDropGroup>>(
                      (const __gnu_cxx::__normal_iterator<const data::WinterCampDropGroup*,std::vector<data::WinterCampDropGroup> > *)(v2 + 176),
                      (const __gnu_cxx::__normal_iterator<const data::WinterCampDropGroup*,std::vector<data::WinterCampDropGroup> > *)(v2 + 208)) )
                break;
              drop_group = __gnu_cxx::__normal_iterator<data::WinterCampDropGroup const*,std::vector<data::WinterCampDropGroup>>::operator*((const __gnu_cxx::__normal_iterator<const data::WinterCampDropGroup*,std::vector<data::WinterCampDropGroup> > *const)(v2 + 176));
              v32 = ((v2 + 752) >> 3) + 2147450880;
              *(_DWORD *)v32 = 0;
              *(_WORD *)(v32 + 4) = 0;
              std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 752));
              __for_range_2 = &drop_group->drop_id;
              *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 240, v31);
              *(std::vector<unsigned int>::const_iterator *)(v2 + 240) = std::vector<unsigned int>::begin(__for_range_2);
              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 272, v31);
              *(std::vector<unsigned int>::const_iterator *)(v2 + 272) = std::vector<unsigned int>::end(__for_range_2);
              while ( 1 )
              {
                v33 = (char *)(v2 + 272);
                if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 240),
                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 272)) )
                  break;
                *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
                v34 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 240));
                v35 = (int *)v34;
                if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v34);
                }
                v36 = *v35;
                v37 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
                if ( v37 != 0 && v37 <= 3 )
                {
                  LOBYTE(v33) = v37 != 0;
                  __asan_report_store4(v2 + 32, v33);
                }
                *(_DWORD *)(v2 + 32) = v36;
                if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                                        txt_config_mgr,
                                        *(_DWORD *)(v2 + 32),
                                        ITEM_LIMIT_WINTER_CAMP_DROP) != 1 )
                {
                  ret = -1;
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
                    "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
                    "checkExploreConfig",
                    90);
                  v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 624),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v39 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                          v38,
                          (const char (*)[29])byte_1AAB9780);
                  v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v39,
                          (const unsigned int *)(v2 + 32));
                  v41 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v40, (const char (*)[6])" id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 624));
                  *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = -117901064;
                }
                else
                {
                  v42 = std::set<unsigned int>::insert(
                          (std::set<unsigned int> *const)(v2 + 752),
                          (const std::set<unsigned int>::value_type *)(v2 + 32));
                  if ( !v42.second )
                  {
                    ret = -1;
                    *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 688) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 688, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 688),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
                      "checkExploreConfig",
                      96);
                    v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 688),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v44 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                            v43,
                            (const char (*)[46])byte_1AAB97C0);
                    v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v44,
                            (const unsigned int *)(v2 + 32));
                    v46 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v45, (const char (*)[6])" id: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 688));
                    *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = -117901064;
                  }
                }
                __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 240));
              }
              *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
              std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 752));
              v47 = ((v2 + 752) >> 3) + 2147450880;
              *(_DWORD *)v47 = -117901064;
              *(_WORD *)(v47 + 4) = -1800;
              __gnu_cxx::__normal_iterator<data::WinterCampDropGroup const*,std::vector<data::WinterCampDropGroup>>::operator++((__gnu_cxx::__normal_iterator<const data::WinterCampDropGroup*,std::vector<data::WinterCampDropGroup> > *const)(v2 + 176));
            }
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
          }
          else
          {
            ret = -1;
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
              "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
              "checkExploreConfig",
              66);
            v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 496),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v23 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v22,
                    (const char (*)[39])"findGroupScriptConfig fail. group_id: ");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &config->group_id);
            v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" ID: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
            *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
      }
      else
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
          "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
          "checkExploreConfig",
          53);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 368),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v11, (const char (*)[40])byte_1AAB9640);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->group_link_id);
        v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
        *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampExploreExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampExploreExcelConfig>,false,false> *const)(v2 + 48));
  }
  if ( v65 == (char *)v2 )
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

// Line 106: range 0000000012E6319A-0000000012E64307
int32_t __cdecl ActivityWinterCampExcelConfigMgr::rewriteExploreConfig(
        ActivityWinterCampExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  unsigned int v6; // r14d
  uint32_t *p_priority; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  unsigned int *v9; // rdx
  char v10; // cl
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  __int64 v15; // rsi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  std::vector<unsigned int>::size_type v20; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::vector<unsigned int>::size_type v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v35; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v36; // r14d
  char *v37; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v38; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v39; // rdx
  char v40; // cl
  __int64 v41; // rsi
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v42; // ecx
  char v43; // al
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-314h]
  const LuaConfigMgr *lua_config_mgr; // [rsp+20h] [rbp-310h]
  data::WinterCampExploreExcelConfigMap *__for_range; // [rsp+28h] [rbp-308h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+30h] [rbp-300h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference __in; // [rsp+38h] [rbp-2F8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *id_0; // [rsp+48h] [rbp-2E8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampExploreExcelConfig>,false,false>::reference v51; // [rsp+50h] [rbp-2E0h]
  std::tuple_element<0,std::pair<unsigned int const,data::WinterCampExploreExcelConfig> >::type *id; // [rsp+58h] [rbp-2D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampExploreExcelConfig> >::type *config; // [rsp+60h] [rbp-2D0h]
  const GroupScriptConfig *group_script_ptr; // [rsp+68h] [rbp-2C8h]
  const std::vector<data::WinterCampDropGroup> *__for_range_0; // [rsp+70h] [rbp-2C0h]
  const data::WinterCampDropGroup *drop_group; // [rsp+78h] [rbp-2B8h]
  char v57[688]; // [rsp+80h] [rbp-2B0h] BYREF

  v2 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 4 14 gadget_num:122 64 4 11 prev_id:144 80 8 15 __for_begin:110 112 8 13 __for_end:110 144"
                        " 8 15 __for_begin:129 176 8 13 __for_end:129 208 8 9 <unknown> 240 8 15 __for_begin:145 272 8 13"
                        " __for_end:145 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 48 10 id_map:109";
  *(_QWORD *)(v2 + 16) = ActivityWinterCampExcelConfigMgr::rewriteExploreConfig;
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
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 560));
  __for_range = &this->winter_camp_explore_excel_config_map;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WinterCampExploreExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::WinterCampExploreExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WinterCampExploreExcelConfig>::iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::WinterCampExploreExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 112);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::WinterCampExploreExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampExploreExcelConfig>,false> *)(v2 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampExploreExcelConfig>,false> *)(v2 + 112)) )
      break;
    v51 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampExploreExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampExploreExcelConfig>,false,false> *const)(v2 + 80));
    id = std::get<0ul,unsigned int const,data::WinterCampExploreExcelConfig>(v51);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampExploreExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WinterCampExploreExcelConfig>(v51);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    v6 = *id;
    p_priority = &config->priority;
    v8 = std::map<unsigned int,unsigned int>::operator[](
           (std::map<unsigned int,unsigned int> *const)(v2 + 560),
           &config->priority);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
    {
      LOBYTE(p_priority) = v10 != 0;
      __asan_report_store4(v8, p_priority);
    }
    *v9 = v6;
    if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->group_id);
    }
    group_script_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, config->group_id);
    if ( group_script_ptr )
    {
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v15 = (unsigned int)std::unordered_map<unsigned int,GadgetScriptConfig>::size(&group_script_ptr->gadget_config_map);
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 48, v15);
      *(_DWORD *)(v2 + 48) = v15;
      if ( *(_DWORD *)(v2 + 48) )
      {
        __for_range_0 = &config->drop_groups;
        *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 144, v15);
        *(std::vector<data::WinterCampDropGroup>::const_iterator *)(v2 + 144) = std::vector<data::WinterCampDropGroup>::begin(__for_range_0);
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 176, v15);
        *(std::vector<data::WinterCampDropGroup>::const_iterator *)(v2 + 176) = std::vector<data::WinterCampDropGroup>::end(__for_range_0);
        while ( __gnu_cxx::operator!=<data::WinterCampDropGroup const*,std::vector<data::WinterCampDropGroup>>(
                  (const __gnu_cxx::__normal_iterator<const data::WinterCampDropGroup*,std::vector<data::WinterCampDropGroup> > *)(v2 + 144),
                  (const __gnu_cxx::__normal_iterator<const data::WinterCampDropGroup*,std::vector<data::WinterCampDropGroup> > *)(v2 + 176)) )
        {
          drop_group = __gnu_cxx::__normal_iterator<data::WinterCampDropGroup const*,std::vector<data::WinterCampDropGroup>>::operator*((const __gnu_cxx::__normal_iterator<const data::WinterCampDropGroup*,std::vector<data::WinterCampDropGroup> > *const)(v2 + 144));
          v20 = std::vector<unsigned int>::size(&drop_group->drop_id);
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 48);
          if ( v20 > *(unsigned int *)(v2 + 48) )
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
              "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
              "rewriteExploreConfig",
              134);
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 432),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v22 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                    v21,
                    (const char (*)[66])byte_1AAB9A60);
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config->group_id);
            v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v23,
                    (const char (*)[13])byte_1AAB9AE0);
            *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
            v25 = std::vector<unsigned int>::size(&drop_group->drop_id);
            if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
              v25 = __asan_report_store8(v2 + 208, byte_1AAB9AE0);
            *(_QWORD *)(v2 + 208) = v25;
            v26 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v24,
                    (const unsigned __int64 *)(v2 + 208));
            v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v26,
                    (const char (*)[13])byte_1AAB9B20);
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)(v2 + 48));
            v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" ID: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, id);
            *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
            *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
          }
          __gnu_cxx::__normal_iterator<data::WinterCampDropGroup const*,std::vector<data::WinterCampDropGroup>>::operator++((__gnu_cxx::__normal_iterator<const data::WinterCampDropGroup*,std::vector<data::WinterCampDropGroup> > *const)(v2 + 144));
        }
        *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
        v30 = std::map<unsigned int,unsigned int>::try_emplace<unsigned int &>(
                &this->group_gadget_num_map,
                &config->group_id,
                (unsigned int *)(v2 + 48),
                (unsigned int *)&this->group_gadget_num_map);
        if ( !v30.second )
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
            "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
            "rewriteExploreConfig",
            140);
          v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 496),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v32 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v31, (const char (*)[21])byte_1AAB9B60);
          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &config->group_id);
          v34 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v33, (const char (*)[6])" ID: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
          *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
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
          "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
          "rewriteExploreConfig",
          126);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 368),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v16, (const char (*)[34])byte_1AAB9A00);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &config->group_id);
        v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
        *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
        "rewriteExploreConfig",
        118);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 304),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v11, (const char (*)[36])byte_1AAB99A0);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->group_id);
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" ID: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampExploreExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampExploreExcelConfig>,false,false> *const)(v2 + 80));
  }
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 64, v5);
  *(_DWORD *)(v2 + 64) = 0;
  __for_range_1 = (std::map<unsigned int,unsigned int> *)(v2 + 560);
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 240, v5);
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 240) = std::map<unsigned int,unsigned int>::begin(__for_range_1);
  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 272, v5);
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 272) = std::map<unsigned int,unsigned int>::end(__for_range_1);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 240),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 272)) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 240));
    std::get<0ul,unsigned int const,unsigned int>(__in);
    v35 = std::get<1ul,unsigned int const,unsigned int>(__in);
    id_0 = v35;
    if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v35);
    }
    v36 = *id_0;
    v37 = (char *)(v2 + 64);
    v38 = std::map<unsigned int,unsigned int>::operator[](
            &this->explore_link_id_map,
            (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 64));
    v39 = v38;
    v40 = *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
    if ( v40 != 0 && (char)(((unsigned __int8)v38 & 7) + 3) >= v40 )
    {
      LOBYTE(v37) = v40 != 0;
      __asan_report_store4(v38, v37);
    }
    *v39 = v36;
    v41 = ((unsigned __int8)id_0 & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id_0);
    }
    v42 = *id_0;
    v43 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
    if ( v43 != 0 && v43 <= 3 )
    {
      LOBYTE(v41) = v43 != 0;
      __asan_report_store4(v2 + 64, v41);
    }
    *(_DWORD *)(v2 + 64) = v42;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 240));
  }
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 560));
  result = ret;
  if ( v57 == (char *)v2 )
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
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

// Line 154: range 0000000012E64308-0000000012E648D4
int32_t __cdecl ActivityWinterCampExcelConfigMgr::checkBattleConfig(
        ActivityWinterCampExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_reward_id; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  ActivityGroupLinksExcelConfigMgr *p_activity_group_links_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  data::WinterCampBattleExcelConfigMap *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampBattleExcelConfig>,false,false>::reference v18; // [rsp+28h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,data::WinterCampBattleExcelConfig> >::type *id; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampBattleExcelConfig> >::type *config; // [rsp+38h] [rbp-108h]
  char v21[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:156 64 8 13 __for_end:156 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityWinterCampExcelConfigMgr::checkBattleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->winter_camp_battle_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WinterCampBattleExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::WinterCampBattleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WinterCampBattleExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WinterCampBattleExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WinterCampBattleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampBattleExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampBattleExcelConfig>,false> *)(v2 + 64)) )
  {
    v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampBattleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampBattleExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::WinterCampBattleExcelConfig>(v18);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampBattleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WinterCampBattleExcelConfig>(v18);
    p_reward_id = &config->reward_id;
    if ( *(_BYTE *)(((unsigned __int64)p_reward_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reward_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_reward_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            config->reward_id,
                            ITEM_LIMIT_WINTER_CAMP_REWARD) != 1 )
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
        "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
        "checkBattleConfig",
        161);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v6, (const char (*)[33])byte_1AA684A0);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->reward_id);
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      p_activity_group_links_config_mgr = &txt_config_mgr->activity_group_links_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->group_link_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->group_link_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->group_link_id);
      }
      if ( !data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
              p_activity_group_links_config_mgr,
              config->group_link_id) )
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
          "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
          "checkBattleConfig",
          167);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v11, (const char (*)[40])byte_1AAB9640);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->group_link_id);
        v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampBattleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampBattleExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 175: range 0000000012E648D6-0000000012E64F57
int32_t __cdecl ActivityWinterCampExcelConfigMgr::rewriteBattleConfig(
        ActivityWinterCampExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::tuple_element<0,std::pair<unsigned int const,data::WinterCampBattleExcelConfig> >::type v6; // r14d
  uint32_t *p_priority; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  std::tuple_element<0,std::pair<unsigned int const,data::WinterCampBattleExcelConfig> >::type *v9; // rdx
  char v10; // cl
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v11; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v12; // r14d
  char *v13; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v15; // rdx
  char v16; // cl
  __int64 v17; // rsi
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v18; // ecx
  char v19; // al
  int32_t result; // eax
  data::WinterCampBattleExcelConfigMap *__for_range; // [rsp+10h] [rbp-170h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+18h] [rbp-168h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference __in; // [rsp+20h] [rbp-160h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *id_0; // [rsp+30h] [rbp-150h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampBattleExcelConfig>,false,false>::reference v25; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,data::WinterCampBattleExcelConfig> >::type *id; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampBattleExcelConfig> >::type *config; // [rsp+48h] [rbp-138h]
  char v28[304]; // [rsp+50h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 11 prev_id:181 48 8 15 __for_begin:177 80 8 13 __for_end:177 112 8 15 __for_begin:182 144"
                        " 8 13 __for_end:182 176 48 10 id_map:176";
  *(_QWORD *)(v2 + 16) = ActivityWinterCampExcelConfigMgr::rewriteBattleConfig;
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
  v4[536862727] = -202116109;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 176));
  __for_range = &this->winter_camp_battle_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WinterCampBattleExcelConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::WinterCampBattleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WinterCampBattleExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::WinterCampBattleExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::WinterCampBattleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampBattleExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampBattleExcelConfig>,false> *)(v2 + 80)) )
      break;
    v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampBattleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampBattleExcelConfig>,false,false> *const)(v2 + 48));
    id = std::get<0ul,unsigned int const,data::WinterCampBattleExcelConfig>(v25);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampBattleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WinterCampBattleExcelConfig>(v25);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    v6 = *id;
    p_priority = &config->priority;
    v8 = std::map<unsigned int,unsigned int>::operator[](
           (std::map<unsigned int,unsigned int> *const)(v2 + 176),
           &config->priority);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
    {
      LOBYTE(p_priority) = v10 != 0;
      __asan_report_store4(v8, p_priority);
    }
    *v9 = v6;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampBattleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampBattleExcelConfig>,false,false> *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v5);
  *(_DWORD *)(v2 + 32) = 0;
  __for_range_0 = (std::map<unsigned int,unsigned int> *)(v2 + 176);
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, v5);
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 112) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 144, v5);
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 144) = std::map<unsigned int,unsigned int>::end(__for_range_0);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 112),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 144)) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 112));
    std::get<0ul,unsigned int const,unsigned int>(__in);
    v11 = std::get<1ul,unsigned int const,unsigned int>(__in);
    id_0 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    v12 = *id_0;
    v13 = (char *)(v2 + 32);
    v14 = std::map<unsigned int,unsigned int>::operator[](
            &this->battle_link_id_map,
            (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    v15 = v14;
    v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
    if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
    {
      LOBYTE(v13) = v16 != 0;
      __asan_report_store4(v14, v13);
    }
    *v15 = v12;
    v17 = ((unsigned __int8)id_0 & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id_0);
    }
    v18 = *id_0;
    v19 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    if ( v19 != 0 && v19 <= 3 )
    {
      LOBYTE(v17) = v19 != 0;
      __asan_report_store4(v2 + 32, v17);
    }
    *(_DWORD *)(v2 + 32) = v18;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 112));
  }
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 176));
  result = 0;
  if ( v28 == (char *)v2 )
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

// Line 191: range 0000000012E64F58-0000000012E652F3
int32_t __cdecl ActivityWinterCampExcelConfigMgr::checkRaceConfig(
        ActivityWinterCampExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::WinterCampRaceExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false,false>::reference v11; // [rsp+28h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampRaceExcelConfig> >::type *config; // [rsp+38h] [rbp-C8h]
  char v13[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:193 64 8 13 __for_end:193 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityWinterCampExcelConfigMgr::checkRaceConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->winter_camp_race_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WinterCampRaceExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::WinterCampRaceExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WinterCampRaceExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WinterCampRaceExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false> *)(v2 + 64)) )
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::WinterCampRaceExcelConfig>(v11);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampRaceExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WinterCampRaceExcelConfig>(v11);
    p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->gallery_id);
    }
    if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, config->gallery_id) )
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
        "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
        "checkRaceConfig",
        198);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v6, (const char (*)[41])byte_1AAB9CE0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->gallery_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 206: range 0000000012E652F4-0000000012E65660
int32_t __cdecl ActivityWinterCampExcelConfigMgr::rewriteRaceConfig(
        ActivityWinterCampExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const unsigned int *v5; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::WinterCampRaceExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false,false>::reference v12; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::WinterCampRaceExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampRaceExcelConfig> >::type *config; // [rsp+38h] [rbp-C8h]
  char v15[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:208 64 8 13 __for_end:208 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityWinterCampExcelConfigMgr::rewriteRaceConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->winter_camp_race_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WinterCampRaceExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::WinterCampRaceExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WinterCampRaceExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WinterCampRaceExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false> *)(v2 + 64)) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::WinterCampRaceExcelConfig>(v12);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampRaceExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WinterCampRaceExcelConfig>(v12);
    v6 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->race_gallery_id_map,
           &config->gallery_id,
           id,
           (const unsigned int *)&this->race_gallery_id_map,
           v5);
    if ( !v6.second )
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
        "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
        "rewriteRaceConfig",
        213);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v7, (const char (*)[34])byte_1AAB9DA0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->gallery_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampRaceExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 221: range 0000000012E65662-0000000012E668FB
int32_t __cdecl ActivityWinterCampExcelConfigMgr::checkSnowmanConfig(
        ActivityWinterCampExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  char *v9; // rsi
  unsigned int *v10; // rax
  int *v11; // rdx
  int v12; // ecx
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  char *v27; // rsi
  unsigned int *v28; // rax
  int *v29; // rdx
  int v30; // ecx
  char v31; // al
  LuaConfigMgr *p_lua_config_mgr; // rcx
  __int64 v33; // rsi
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  int32_t ret; // [rsp+1Ch] [rbp-354h]
  data::WinterCampSnowmanExcelConfigMap *__for_range; // [rsp+20h] [rbp-350h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false,false>::reference v46; // [rsp+28h] [rbp-348h]
  std::tuple_element<0,std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig> >::type *schedule_id; // [rsp+30h] [rbp-340h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig> >::type *config; // [rsp+38h] [rbp-338h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-330h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-328h]
  const GroupInfoScriptConfig *group_config_ptr; // [rsp+50h] [rbp-320h]
  const data::HomeWorldFurnitureExcelConfig *item_config_ptr; // [rsp+58h] [rbp-318h]
  char v53[784]; // [rsp+60h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 48 4 11 item_id:232 64 4 12 group_id:254 80 8 15 __for_begin:224 112 8 13 __for_end:224 144 8"
                        " 15 __for_begin:232 176 8 13 __for_end:232 208 8 15 __for_begin:254 240 8 13 __for_end:254 272 3"
                        "2 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 9 <unknown> 592 32"
                        " 9 <unknown> 656 48 15 item_id_set:223";
  *(_QWORD *)(v2 + 16) = ActivityWinterCampExcelConfigMgr::checkSnowmanConfig;
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
  v4[536862729] = -219021312;
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
  v4[536862742] = -202116109;
  ret = 0;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 656));
  __for_range = &this->winter_camp_snowman_excel_config_map;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WinterCampSnowmanExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::WinterCampSnowmanExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WinterCampSnowmanExcelConfig>::iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::WinterCampSnowmanExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false> *)(v2 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false> *)(v2 + 112)) )
  {
    v46 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false,false> *const)(v2 + 80));
    schedule_id = std::get<0ul,unsigned int const,data::WinterCampSnowmanExcelConfig>(v46);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WinterCampSnowmanExcelConfig>(v46);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    v6 = *schedule_id;
    if ( data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(p_new_activity_config_mgr, v6) )
    {
      __for_range_0 = &config->item_id_list;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 144, v6);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 144) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 176, v6);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 176) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v9 = (char *)(v2 + 176);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 144),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 176)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 144));
        v11 = (int *)v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        v12 = *v11;
        v13 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v13 != 0 && v13 <= 3 )
        {
          LOBYTE(v9) = v13 != 0;
          __asan_report_store4(v2 + 48, v9);
        }
        *(_DWORD *)(v2 + 48) = v12;
        item_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
                            &txt_config_mgr->home_config_mgr,
                            *(unsigned int *)(v2 + 48));
        if ( item_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->special_furniture_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&item_config_ptr->special_furniture_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&item_config_ptr->special_furniture_type);
          }
          if ( item_config_ptr->special_furniture_type == CustomNodeFurnitrue )
          {
            v22 = std::set<unsigned int>::insert(
                    (std::set<unsigned int> *const)(v2 + 656),
                    (const std::set<unsigned int>::value_type *)(v2 + 48));
            if ( !v22.second )
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
                "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
                "checkSnowmanConfig",
                250);
              v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v24 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      v23,
                      (const char (*)[36])byte_1AABA060);
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v24,
                      (const unsigned int *)(v2 + 48));
              v26 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v25, (const char (*)[7])" id : ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, schedule_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 464));
              *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
          else
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
              "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
              "checkSnowmanConfig",
              244);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 400),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    v18,
                    (const char (*)[45])byte_1AABA000);
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v2 + 48));
            v21 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])" id : ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, schedule_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
            *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        else
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
            "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
            "checkSnowmanConfig",
            238);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 336),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v14, (const char (*)[42])byte_1AAB9FA0);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v2 + 48));
          v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" id : ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, schedule_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
          *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 144));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      __for_range_1 = &config->group_id_list;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 208, v9);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 208) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 240, v9);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 240) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v27 = (char *)(v2 + 240);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 208),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 240)) )
          break;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
        v28 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 208));
        v29 = (int *)v28;
        if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v28);
        }
        v30 = *v29;
        v31 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
        if ( v31 != 0 && v31 <= 3 )
        {
          LOBYTE(v27) = v31 != 0;
          __asan_report_store4(v2 + 64, v27);
        }
        *(_DWORD *)(v2 + 64) = v30;
        p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
        if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 64);
        v33 = *(unsigned int *)(v2 + 64);
        group_config_ptr = LuaConfigMgr::findGroupInfoConfig(p_lua_config_mgr, v33);
        if ( group_config_ptr )
        {
          if ( *(char *)(((unsigned __int64)&group_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&group_config_ptr->is_dynamic_load, v33, &group_config_ptr->is_dynamic_load);
          if ( !group_config_ptr->is_dynamic_load )
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
              "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
              "checkSnowmanConfig",
              266);
            v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 592),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v39 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v38,
                    (const char (*)[33])byte_1AA5D5E0);
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    (const unsigned int *)(v2 + 64));
            v41 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v40, (const char (*)[7])" id : ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, schedule_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 592));
            *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        else
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
            "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
            "checkSnowmanConfig",
            260);
          v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 528),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v35 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v34, (const char (*)[34])byte_1AA5D540);
          v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v35,
                  (const unsigned int *)(v2 + 64));
          v37 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v36, (const char (*)[7])" id : ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, schedule_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 528));
          *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = -117901064;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 208));
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
    }
    else
    {
      ret = -1;
      *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 79) & 7) >= *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 272, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 272),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityWinterCampExcelConfig.cpp",
        "checkSnowmanConfig",
        229);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 272),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v7, (const char (*)[25])byte_1AA5D500);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, schedule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false,false> *const)(v2 + 80));
  }
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 656));
  if ( v53 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = -168430091;
  }
  return ret;
};

// Line 275: range 0000000012E668FC-0000000012E66B93
int32_t __cdecl ActivityWinterCampExcelConfigMgr::rewriteSnowmanConfig(
        ActivityWinterCampExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::set<unsigned int> *v5; // r14
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v7; // rax
  std::set<unsigned int> *v8; // r14
  const unsigned int *v9; // r15
  std::vector<unsigned int>::const_iterator v10; // rax
  int32_t result; // eax
  data::WinterCampSnowmanExcelConfigMap *__for_range; // [rsp+20h] [rbp-B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false,false>::reference v13; // [rsp+28h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig> >::type *id; // [rsp+30h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig> >::type *config; // [rsp+38h] [rbp-98h]
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false,false> *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:276 64 8 13 __for_end:276";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false>::__node_type *)ActivityWinterCampExcelConfigMgr::rewriteSnowmanConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->winter_camp_snowman_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::WinterCampSnowmanExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::WinterCampSnowmanExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false,false>::operator*(v2 + 4);
    id = std::get<0ul,unsigned int const,data::WinterCampSnowmanExcelConfig>(v13);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WinterCampSnowmanExcelConfig>(v13);
    v5 = std::map<unsigned int,std::set<unsigned int>>::operator[](&this->snowman_item_id_map, id);
    M_current = std::vector<unsigned int>::end(&config->item_id_list)._M_current;
    v7._M_current = std::vector<unsigned int>::begin(&config->item_id_list)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      v5,
      v7,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
    v8 = std::map<unsigned int,std::set<unsigned int>>::operator[](&this->snowman_group_id_map, id);
    v9 = std::vector<unsigned int>::end(&config->group_id_list)._M_current;
    v10._M_current = std::vector<unsigned int>::begin(&config->group_id_list)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      v8,
      v10,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v9);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WinterCampSnowmanExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 285: range 0000000012E66B94-0000000012E66D8F
__int64 __fastcall ActivityWinterCampExcelConfigMgr::getGroupGadgetNum(
        const ActivityWinterCampExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_group_gadget_num_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:284 64 8 8 iter:286 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityWinterCampExcelConfigMgr::getGroupGadgetNum;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_gadget_num_map = &this->group_gadget_num_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_group_gadget_num_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->group_gadget_num_map;
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

// Line 295: range 0000000012E66D90-0000000012E66E61
const std::set<unsigned int> *__fastcall ActivityWinterCampExcelConfigMgr::findWinterCampSnowmanItemIdSet(
        const ActivityWinterCampExcelConfigMgr *const this,
        uint32_t schedule_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::set<unsigned int> *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 schedule_id:294";
  *(_QWORD *)(v2 + 16) = ActivityWinterCampExcelConfigMgr::findWinterCampSnowmanItemIdSet;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = schedule_id;
  result = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,std::set<unsigned int>> const>(
             &this->snowman_item_id_map,
             (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 32));
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

// Line 300: range 0000000012E66E62-0000000012E67042
bool __fastcall ActivityWinterCampExcelConfigMgr::isValidGroupId(
        const ActivityWinterCampExcelConfigMgr *const this,
        __int64 schedule_id,
        uint32_t group_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,std::set<unsigned int>> *p_snowman_group_id_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool v8; // al
  bool result; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::pointer v10; // rax
  char v12[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 15 schedule_id:299 48 4 12 group_id:299 64 8 8 iter:301 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityWinterCampExcelConfigMgr::isValidGroupId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = schedule_id;
  *(_DWORD *)(v3 + 48) = group_id;
  p_snowman_group_id_map = &this->snowman_group_id_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, schedule_id);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_snowman_group_id_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->snowman_group_id_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 64));
    result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
               &v10->second,
               (const unsigned int *)(v3 + 48));
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

// Line 310: range 0000000012E67044-0000000012E67255
const data::WinterCampExploreExcelConfig *__fastcall ActivityWinterCampExcelConfigMgr::findWinterCampNextExploreExcelConfig(
        const ActivityWinterCampExcelConfigMgr *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_explore_link_id_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  const data::WinterCampExploreExcelConfig *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:309 64 8 8 iter:311 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityWinterCampExcelConfigMgr::findWinterCampNextExploreExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_explore_link_id_map = &this->explore_link_id_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_explore_link_id_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->explore_link_id_map;
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
    result = data::ActivityWinterCampExcelConfigMgrBase::findWinterCampExploreExcelConfig(this, v9->second);
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

// Line 320: range 0000000012E67256-0000000012E67467
const data::WinterCampBattleExcelConfig *__fastcall ActivityWinterCampExcelConfigMgr::findWinterCampNextBattleExcelConfig(
        const ActivityWinterCampExcelConfigMgr *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_battle_link_id_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  const data::WinterCampBattleExcelConfig *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:319 64 8 8 iter:321 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityWinterCampExcelConfigMgr::findWinterCampNextBattleExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_battle_link_id_map = &this->battle_link_id_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_battle_link_id_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->battle_link_id_map;
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
    result = data::ActivityWinterCampExcelConfigMgrBase::findWinterCampBattleExcelConfig(this, v9->second);
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

// Line 330: range 0000000012E67468-0000000012E67679
const data::WinterCampRaceExcelConfig *__fastcall ActivityWinterCampExcelConfigMgr::findWinterCampRaceExcelConfigByGalleryId(
        const ActivityWinterCampExcelConfigMgr *const this,
        __int64 gallery_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_race_gallery_id_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  const data::WinterCampRaceExcelConfig *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gallery_id:329 64 8 8 iter:331 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityWinterCampExcelConfigMgr::findWinterCampRaceExcelConfigByGalleryId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gallery_id;
  p_race_gallery_id_map = &this->race_gallery_id_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gallery_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_race_gallery_id_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->race_gallery_id_map;
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
    result = data::ActivityWinterCampExcelConfigMgrBase::findWinterCampRaceExcelConfig(this, v9->second);
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

// Line 340: range 0000000012E6767A-0000000012E676E7
uint32_t __cdecl ActivityWinterCampExcelConfigMgr::getExplorePriority(
        const ActivityWinterCampExcelConfigMgr *const this,
        uint32_t id)
{
  const data::WinterCampExploreExcelConfig *config_ptr; // [rsp+18h] [rbp-8h]

  config_ptr = data::ActivityWinterCampExcelConfigMgrBase::findWinterCampExploreExcelConfig(this, id);
  if ( !config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->priority);
  }
  return config_ptr->priority;
};

// Line 350: range 0000000012E676E8-0000000012E67755
uint32_t __cdecl ActivityWinterCampExcelConfigMgr::getBattlePriority(
        const ActivityWinterCampExcelConfigMgr *const this,
        uint32_t id)
{
  const data::WinterCampBattleExcelConfig *config_ptr; // [rsp+18h] [rbp-8h]

  config_ptr = data::ActivityWinterCampExcelConfigMgrBase::findWinterCampBattleExcelConfig(this, id);
  if ( !config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->priority);
  }
  return config_ptr->priority;
};
