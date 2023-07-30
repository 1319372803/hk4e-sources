// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp

// Line 19: range 0000000012C73224-0000000012C73699
int32_t __cdecl ActivityLunaRiteExcelConfigMgr::checkConfig(
        ActivityLunaRiteExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (common::milog::MiLogStream *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityLunaRiteExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( ActivityLunaRiteExcelConfigMgr::checkBattleConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
      "checkConfig",
      22);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v5, (const char (*)[25])"checkBattleConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityLunaRiteExcelConfigMgr::checkSearchingConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
      "checkConfig",
      27);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v7,
      (const char (*)[28])"checkSearchingConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityLunaRiteExcelConfigMgr::checkBuffConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
      "checkConfig",
      32);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v8, (const char (*)[23])"checkBuffConfig failed");
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

// Line 39: range 0000000012C7369A-0000000012C73B0F
int32_t __cdecl ActivityLunaRiteExcelConfigMgr::rewriteConfig(
        ActivityLunaRiteExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (common::milog::MiLogStream *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityLunaRiteExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( ActivityLunaRiteExcelConfigMgr::rewiteBattleConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
      "rewriteConfig",
      42);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v5, (const char (*)[26])"rewiteBattleConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityLunaRiteExcelConfigMgr::rewiteBuffConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
      "rewriteConfig",
      47);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v7, (const char (*)[24])"rewiteBuffConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityLunaRiteExcelConfigMgr::rewiteSearchingConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
      "rewriteConfig",
      52);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v8,
      (const char (*)[29])"rewiteSearchingConfig failed");
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

// Line 59: range 0000000012C73B10-0000000012C74811
int32_t __cdecl ActivityLunaRiteExcelConfigMgr::checkBattleConfig(
        ActivityLunaRiteExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  ActivityGroupLinksExcelConfigMgr *p_activity_group_links_config_mgr; // rcx
  uint32_t *p_group_bundle_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  data::LunaRiteRegionType v17; // r14d
  std::tuple_element<0,std::pair<unsigned int const,data::LunaRiteBattleExcelConfig> >::type *v18; // rsi
  std::map<unsigned int,data::LunaRiteRegionType>::mapped_type *v19; // rax
  data::LunaRiteRegionType *v20; // rdx
  char v21; // cl
  std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteRegionType> >::type *v22; // rax
  int v23; // ecx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  __int64 v28; // rsi
  unsigned int v29; // ecx
  char v30; // al
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-238h]
  data::LunaRiteRegionType prev_region_type; // [rsp+1Ch] [rbp-234h]
  data::LunaRiteBattleExcelConfigMap *__for_range; // [rsp+20h] [rbp-230h]
  std::map<unsigned int,data::LunaRiteRegionType> *__for_range_0; // [rsp+28h] [rbp-228h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::LunaRiteRegionType> >::reference v37; // [rsp+30h] [rbp-220h]
  std::tuple_element<0,std::pair<unsigned int const,data::LunaRiteRegionType> >::type *id_0; // [rsp+38h] [rbp-218h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteRegionType> >::type *region_type; // [rsp+40h] [rbp-210h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false>::reference v40; // [rsp+48h] [rbp-208h]
  std::tuple_element<0,std::pair<unsigned int const,data::LunaRiteBattleExcelConfig> >::type *id; // [rsp+50h] [rbp-200h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteBattleExcelConfig> >::type *config; // [rsp+58h] [rbp-1F8h]
  char v43[496]; // [rsp+60h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 4 10 prev_id:79 48 8 14 __for_begin:62 80 8 12 __for_end:62 112 8 14 __for_begin:81 144 8 1"
                        "2 __for_end:81 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 48 23 id_2_region_type_map:61";
  *(_QWORD *)(v2 + 16) = ActivityLunaRiteExcelConfigMgr::checkBattleConfig;
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
  v4[536862733] = -202116109;
  ret = 0;
  std::map<unsigned int,data::LunaRiteRegionType>::map((std::map<unsigned int,data::LunaRiteRegionType> *const)(v2 + 368));
  __for_range = &this->luna_rite_battle_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false> *)(v2 + 80)) )
      break;
    v40 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false> *const)(v2 + 48));
    id = std::get<0ul,unsigned int const,data::LunaRiteBattleExcelConfig>(v40);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteBattleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LunaRiteBattleExcelConfig>(v40);
    p_activity_group_links_config_mgr = &txt_config_mgr->activity_group_links_config_mgr;
    p_group_bundle_id = &config->group_bundle_id;
    if ( *(_BYTE *)(((unsigned __int64)p_group_bundle_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_group_bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_group_bundle_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(p_group_bundle_id);
    }
    if ( data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
           p_activity_group_links_config_mgr,
           config->group_bundle_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->consecrate_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->consecrate_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->consecrate_id);
      }
      if ( config->consecrate_id
        && !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
              &txt_config_mgr->material_config_mgr,
              config->consecrate_id) )
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
          "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
          "checkBattleConfig",
          73);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 240),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v13, (const char (*)[49])byte_1AA68240);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->consecrate_id);
        v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
        *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->region_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->region_type >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->region_type);
        }
        v17 = config->region_type;
        v18 = id;
        v19 = std::map<unsigned int,data::LunaRiteRegionType>::operator[](
                (std::map<unsigned int,data::LunaRiteRegionType> *const)(v2 + 368),
                id);
        v20 = v19;
        v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
        if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
        {
          LOBYTE(v18) = v21 != 0;
          __asan_report_store4(v19, v18);
        }
        *v20 = v17;
      }
    }
    else
    {
      ret = -1;
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
        "checkBattleConfig",
        67);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 176),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v8, (const char (*)[51])byte_1AA681E0);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->group_bundle_id);
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false> *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v5);
  *(_DWORD *)(v2 + 32) = 0;
  prev_region_type = LUNA_RITE_REGION_TYPE_INVALID;
  __for_range_0 = (std::map<unsigned int,data::LunaRiteRegionType> *)(v2 + 368);
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, v5);
  *(std::map<unsigned int,data::LunaRiteRegionType>::iterator *)(v2 + 112) = std::map<unsigned int,data::LunaRiteRegionType>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 144, v5);
  *(std::map<unsigned int,data::LunaRiteRegionType>::iterator *)(v2 + 144) = std::map<unsigned int,data::LunaRiteRegionType>::end(__for_range_0);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::LunaRiteRegionType> >::_Self *)(v2 + 112),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::LunaRiteRegionType> >::_Self *)(v2 + 144)) )
  {
    v37 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::LunaRiteRegionType>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::LunaRiteRegionType> > *const)(v2 + 112));
    id_0 = std::get<0ul,unsigned int const,data::LunaRiteRegionType>(v37);
    v22 = (std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteRegionType> >::type *)std::get<1ul,unsigned int const,data::LunaRiteRegionType>(v37);
    region_type = v22;
    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v22);
    }
    if ( prev_region_type == *region_type )
    {
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 32);
      v23 = *(_DWORD *)(v2 + 32) + 1;
      if ( *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id_0);
      }
      if ( v23 != *id_0 )
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
          "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
          "checkBattleConfig",
          86);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 304),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v24, (const char (*)[31])byte_1AA682A0);
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id_0);
        v27 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v26, (const char (*)[15])byte_1AA682E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
        *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
        break;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)region_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)region_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(region_type);
    }
    prev_region_type = *region_type;
    v28 = ((unsigned __int8)id_0 & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id_0);
    }
    v29 = *id_0;
    v30 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    if ( v30 != 0 && v30 <= 3 )
    {
      LOBYTE(v28) = v30 != 0;
      __asan_report_store4(v2 + 32, v28);
    }
    *(_DWORD *)(v2 + 32) = v29;
    std::_Rb_tree_iterator<std::pair<unsigned int const,data::LunaRiteRegionType>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::LunaRiteRegionType> > *const)(v2 + 112));
  }
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
  std::map<unsigned int,data::LunaRiteRegionType>::~map((std::map<unsigned int,data::LunaRiteRegionType> *const)(v2 + 368));
  result = ret;
  if ( v43 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 96: range 0000000012C74812-0000000012C74F80
int32_t __cdecl ActivityLunaRiteExcelConfigMgr::rewiteBattleConfig(
        ActivityLunaRiteExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<0,std::pair<unsigned int const,data::LunaRiteBattleExcelConfig> >::type *v6; // rsi
  const unsigned int *v7; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int v13; // edx
  data::LunaRiteRegionType region_type; // r14d
  uint32_t *p_group_bundle_id; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v16; // rax
  data::LunaRiteRegionType *v17; // rdx
  char v18; // cl
  ActivityLunaRiteExcelConfigMgr *v19; // rcx
  data::LunaRiteRegionType v20; // ecx
  uint32_t group_bundle_id; // r14d
  uint32_t *v22; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v23; // rax
  uint32_t *v24; // rdx
  char v25; // cl
  int32_t result; // eax
  data::LunaRiteBattleExcelConfigMap *__for_range; // [rsp+28h] [rbp-158h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false>::reference v28; // [rsp+30h] [rbp-150h]
  std::tuple_element<0,std::pair<unsigned int const,data::LunaRiteBattleExcelConfig> >::type *id; // [rsp+38h] [rbp-148h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteBattleExcelConfig> >::type *config; // [rsp+40h] [rbp-140h]
  data::LunaRiteBattleExcelConfigMap *__for_range_0; // [rsp+48h] [rbp-138h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false>::reference v32; // [rsp+50h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,data::LunaRiteBattleExcelConfig> >::type *id_0; // [rsp+58h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteBattleExcelConfig> >::type *config_0; // [rsp+60h] [rbp-120h]
  data::LunaRiteBattleExcelConfig *next_config_ptr; // [rsp+68h] [rbp-118h]
  char v36[272]; // [rsp+70h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 14 __for_begin:97 64 8 12 __for_end:97 96 8 15 __for_begin:106 128 8 13 __for_end:106 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityLunaRiteExcelConfigMgr::rewiteBattleConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -202116109;
  __for_range = &this->luna_rite_battle_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (std::tuple_element<0,std::pair<unsigned int const,data::LunaRiteBattleExcelConfig> >::type *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false> *)(v3 + 64)) )
    {
      v13 = 1;
      goto LABEL_20;
    }
    v28 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::LunaRiteBattleExcelConfig>(v28);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteBattleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LunaRiteBattleExcelConfig>(v28);
    v8 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->bundle_to_battle_map,
           &config->group_bundle_id,
           id,
           (const unsigned int *)&this->bundle_to_battle_map,
           v7);
    if ( !v8.second )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&config->region_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->region_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->region_type);
    }
    region_type = config->region_type;
    p_group_bundle_id = &config->group_bundle_id;
    v16 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->bundle_to_area_map, &config->group_bundle_id);
    v17 = (data::LunaRiteRegionType *)v16;
    v18 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
    if ( v18 != 0 && (char)(((unsigned __int8)v16 & 7) + 3) >= v18 )
    {
      LOBYTE(p_group_bundle_id) = v18 != 0;
      __asan_report_store4(v16, p_group_bundle_id);
    }
    *v17 = region_type;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
    "rewiteBattleConfig",
    101);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 160),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          v9,
          (const char (*)[40])"repeated group link bundle. bundle_id: ");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->group_bundle_id);
  v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" id: ");
  v6 = id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v13 = 0;
LABEL_20:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v13 == 1 )
  {
    __for_range_0 = &this->luna_rite_battle_excel_config_map;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::LunaRiteBattleExcelConfig>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false> *)(v3 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false> *)(v3 + 128)) )
    {
      v32 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false> *const)(v3 + 96));
      id_0 = std::get<0ul,unsigned int const,data::LunaRiteBattleExcelConfig>(v32);
      config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteBattleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LunaRiteBattleExcelConfig>(v32);
      v19 = this;
      if ( *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id_0);
      }
      next_config_ptr = data::ActivityLunaRiteExcelConfigMgrBase::findLunaRiteBattleExcelConfig(v19, *id_0 + 1);
      if ( next_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_0->region_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_0->region_type >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&config_0->region_type);
        }
        v20 = config_0->region_type;
        if ( *(_BYTE *)(((unsigned __int64)&next_config_ptr->region_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)next_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&next_config_ptr->region_type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&next_config_ptr->region_type);
        }
        if ( v20 == next_config_ptr->region_type )
        {
          if ( *(_BYTE *)(((unsigned __int64)&next_config_ptr->group_bundle_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)next_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&next_config_ptr->group_bundle_id >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&next_config_ptr->group_bundle_id);
          }
          group_bundle_id = next_config_ptr->group_bundle_id;
          v22 = &config_0->group_bundle_id;
          v23 = std::unordered_map<unsigned int,unsigned int>::operator[](
                  &this->next_bundle_map,
                  &config_0->group_bundle_id);
          v24 = v23;
          v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
          if ( v25 != 0 && (char)(((unsigned __int8)v23 & 7) + 3) >= v25 )
          {
            LOBYTE(v22) = v25 != 0;
            __asan_report_store4(v23, v22);
          }
          *v24 = group_bundle_id;
        }
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleExcelConfig>,false,false> *const)(v3 + 96));
    }
    v2 = 0;
  }
  result = v2;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 118: range 0000000012C74F82-0000000012C75361
int32_t __cdecl ActivityLunaRiteExcelConfigMgr::checkBuffConfig(
        ActivityLunaRiteExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t *p_reward_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::LunaRiteBattleBuffExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleBuffExcelConfig>,false,false>::reference v14; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::LunaRiteBattleBuffExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteBattleBuffExcelConfig> >::type *config; // [rsp+38h] [rbp-C8h]
  char v17[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:120 64 8 13 __for_end:120 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityLunaRiteExcelConfigMgr::checkBuffConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->luna_rite_battle_buff_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LunaRiteBattleBuffExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::LunaRiteBattleBuffExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LunaRiteBattleBuffExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LunaRiteBattleBuffExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LunaRiteBattleBuffExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LunaRiteBattleBuffExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LunaRiteBattleBuffExcelConfig>,false> *)(v2 + 64)) )
  {
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleBuffExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleBuffExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::LunaRiteBattleBuffExcelConfig>(v14);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteBattleBuffExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LunaRiteBattleBuffExcelConfig>(v14);
    p_reward_id = &config->reward_id;
    if ( *(_BYTE *)(((unsigned __int64)p_reward_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reward_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_reward_id);
    }
    if ( config->reward_id
      && (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            config->reward_id,
                            ITEM_LIMIT_ACTIVITY_LUNA_RITE) != 1 )
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
        "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
        "checkBuffConfig",
        125);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v7, (const char (*)[33])byte_1AA684A0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->reward_id);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleBuffExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteBattleBuffExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 133: range 0000000012C75362-0000000012C75374
int32_t __cdecl ActivityLunaRiteExcelConfigMgr::rewiteBuffConfig(
        ActivityLunaRiteExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 138: range 0000000012C75376-0000000012C77115
int32_t __cdecl ActivityLunaRiteExcelConfigMgr::checkSearchingConfig(
        ActivityLunaRiteExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  const data::NewActivityExcelConfigMgrBase *v6; // rcx
  uint32_t *p_rune_cond; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  uint32_t ActivityIdByCondId; // edx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  const data::NewActivityExcelConfigMgrBase *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  uint32_t v22; // edx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  char *v27; // rsi
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  std::_Rb_tree_const_iterator<unsigned int>::reference v30; // rax
  __int64 v31; // rsi
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
  common::milog::MiLogStream *v42; // rax
  const char *v43; // rsi
  common::milog::MiLogStream *v44; // rcx
  data::EntityType entity_type; // edi
  char v46; // al
  char *v47; // rsi
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  std::_Rb_tree_const_iterator<unsigned int>::reference v50; // rax
  __int64 v51; // rsi
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rdx
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rdx
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rdx
  common::milog::MiLogStream *v62; // rax
  const char *v63; // rsi
  common::milog::MiLogStream *v64; // rcx
  data::EntityType v65; // edi
  char v66; // al
  int32_t ret; // [rsp+1Ch] [rbp-594h]
  LuaConfigMgr *lua_config_mgr; // [rsp+20h] [rbp-590h]
  NewActivityExcelConfigMgr *new_activity_config_mgr; // [rsp+28h] [rbp-588h]
  data::LunaRiteSearchingExcelConfigMap *__for_range; // [rsp+30h] [rbp-580h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range_0; // [rsp+38h] [rbp-578h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range_3; // [rsp+40h] [rbp-570h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v75; // [rsp+48h] [rbp-568h]
  const unsigned int *area_id_1; // [rsp+50h] [rbp-560h]
  const std::set<unsigned int> *group_id_set_0; // [rsp+58h] [rbp-558h]
  const unsigned int *group_id_0; // [rsp+68h] [rbp-548h]
  const GroupScriptConfig *group_script_ptr_0; // [rsp+70h] [rbp-540h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_5; // [rsp+78h] [rbp-538h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::reference v81; // [rsp+80h] [rbp-530h]
  std::tuple_element<0,std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id_0; // [rsp+88h] [rbp-528h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *gadget_config_0; // [rsp+90h] [rbp-520h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference __in; // [rsp+98h] [rbp-518h]
  const unsigned int *area_id_0; // [rsp+A0h] [rbp-510h]
  const std::set<unsigned int> *group_id_set; // [rsp+A8h] [rbp-508h]
  const unsigned int *group_id; // [rsp+B8h] [rbp-4F8h]
  const GroupScriptConfig *group_script_ptr; // [rsp+C0h] [rbp-4F0h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_2; // [rsp+C8h] [rbp-4E8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::reference v90; // [rsp+D0h] [rbp-4E0h]
  std::tuple_element<0,std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id; // [rsp+D8h] [rbp-4D8h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *gadget_config; // [rsp+E0h] [rbp-4D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig>,false,false>::reference v93; // [rsp+E8h] [rbp-4C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig> >::type *area_id; // [rsp+F0h] [rbp-4C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig> >::type *config; // [rsp+F8h] [rbp-4B8h]
  char v96[1184]; // [rsp+110h] [rbp-4A0h] BYREF

  v2 = (unsigned __int64)v96;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1152LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "26 32 4 9 <unknown> 48 4 9 <unknown> 64 8 15 __for_begin:142 96 8 13 __for_end:142 128 8 15 __fo"
                        "r_begin:177 160 8 13 __for_end:177 192 8 15 __for_begin:185 224 8 13 __for_end:185 256 8 15 __fo"
                        "r_begin:194 288 8 13 __for_end:194 320 8 15 __for_begin:205 352 8 13 __for_end:205 384 8 15 __fo"
                        "r_begin:213 416 8 13 __for_end:213 448 8 15 __for_begin:222 480 8 13 __for_end:222 512 32 9 <unk"
                        "nown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unkn"
                        "own> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityLunaRiteExcelConfigMgr::checkSearchingConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862733] = -218959360;
  v4[536862734] = -218959360;
  v4[536862735] = -218959360;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -202116109;
  ret = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
  __for_range = &this->luna_rite_searching_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LunaRiteSearchingExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LunaRiteSearchingExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LunaRiteSearchingExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::LunaRiteSearchingExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig>,false> *)(v2 + 96)) )
      break;
    v93 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig>,false,false> *const)(v2 + 64));
    area_id = std::get<0ul,unsigned int const,data::LunaRiteSearchingExcelConfig>(v93);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LunaRiteSearchingExcelConfig>(v93);
    v6 = new_activity_config_mgr;
    p_rune_cond = &config->rune_cond;
    if ( *(_BYTE *)(((unsigned __int64)p_rune_cond >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_rune_cond & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_rune_cond >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_rune_cond);
    }
    if ( data::NewActivityExcelConfigMgrBase::findNewActivityCondExcelConfig(v6, config->rune_cond) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->rune_cond >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->rune_cond >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->rune_cond);
      }
      ActivityIdByCondId = NewActivityExcelConfigMgr::getActivityIdByCondId(new_activity_config_mgr, config->rune_cond);
      if ( NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(new_activity_config_mgr, ActivityIdByCondId) != NEW_ACTIVITY_LUNA_RITE )
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
          "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
          "checkSearchingConfig",
          155);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v13, (const char (*)[50])byte_1AA68820);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->rune_cond);
        v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])byte_1AA687E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, area_id);
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
        "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
        "checkSearchingConfig",
        148);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 512),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v8, (const char (*)[47])byte_1AA68780);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->rune_cond);
      v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])byte_1AA687E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, area_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v17 = new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->chest_cond >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->chest_cond >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->chest_cond);
    }
    if ( data::NewActivityExcelConfigMgrBase::findNewActivityCondExcelConfig(v17, config->chest_cond) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->chest_cond >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->chest_cond >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->chest_cond);
      }
      v22 = NewActivityExcelConfigMgr::getActivityIdByCondId(new_activity_config_mgr, config->chest_cond);
      if ( NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(new_activity_config_mgr, v22) != NEW_ACTIVITY_LUNA_RITE )
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
          "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
          "checkSearchingConfig",
          171);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 704),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v24 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v23, (const char (*)[50])byte_1AA688E0);
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &config->chest_cond);
        v26 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v25, (const char (*)[10])byte_1AA687E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, area_id);
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
        "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
        "checkSearchingConfig",
        164);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 640),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v18, (const char (*)[47])byte_1AA68880);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &config->chest_cond);
      v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])byte_1AA687E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, area_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->searching_rune_group_map;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v5);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range_0);
  while ( 1 )
  {
    v27 = (char *)(v2 + 160);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 160)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 128));
    area_id_0 = std::get<0ul,unsigned int const,std::set<unsigned int>>(__in);
    group_id_set = std::get<1ul,unsigned int const,std::set<unsigned int>>(__in);
    if ( std::set<unsigned int>::empty(group_id_set) )
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
        "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
        "checkSearchingConfig",
        181);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 768),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v29 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v28, (const char (*)[51])byte_1AA68940);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, area_id_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
      *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, v27);
      *(std::set<unsigned int>::iterator *)(v2 + 192) = std::set<unsigned int>::begin(group_id_set);
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 224, v27);
      *(std::set<unsigned int>::iterator *)(v2 + 224) = std::set<unsigned int>::end(group_id_set);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 192),
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 224)) )
      {
        v30 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 192));
        group_id = v30;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v30);
        }
        v31 = *group_id;
        group_script_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, v31);
        if ( group_script_ptr )
        {
          __for_range_2 = &group_script_ptr->gadget_config_map;
          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 256, v31);
          *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v2 + 256) = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(__for_range_2);
          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 288, v31);
          *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v2 + 288) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_2);
          while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v2 + 256),
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v2 + 288)) )
          {
            v90 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v2 + 256));
            config_id = std::get<0ul,unsigned int const,GadgetScriptConfig>(v90);
            gadget_config = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v90);
            if ( *(_BYTE *)(((unsigned __int64)&gadget_config->entity_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&gadget_config->entity_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&gadget_config->entity_type);
            }
            if ( gadget_config->entity_type != GatherPoint )
            {
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
                "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
                "checkSearchingConfig",
                198);
              v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 896),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v37 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
                      v36,
                      (const char (*)[75])byte_1AA68A00);
              v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, area_id_0);
              v39 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v38,
                      (const char (*)[12])" group_id: ");
              v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, group_id);
              v41 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v40,
                      (const char (*)[13])" config_id: ");
              v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, config_id);
              v43 = " entity type: ";
              v44 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v42,
                      (const char (*)[15])" entity type: ");
              *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((unsigned __int64)&gadget_config->entity_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&gadget_config->entity_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&gadget_config->entity_type);
              }
              entity_type = gadget_config->entity_type;
              v46 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
              if ( v46 != 0 && v46 <= 3 )
              {
                entity_type = v2 + 32;
                LOBYTE(v43) = v46 != 0;
                __asan_report_store4(v2 + 32, v43);
              }
              *(_DWORD *)(v2 + 32) = entity_type;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v44,
                (const unsigned int *)(v2 + 32));
              *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
              *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v2 + 256));
          }
          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
        }
        else
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
            "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
            "checkSearchingConfig",
            190);
          v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 832),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v33 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v32, (const char (*)[49])byte_1AA689A0);
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, group_id);
          v35 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v34, (const char (*)[10])byte_1AA687E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, area_id_0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 192));
      }
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 128));
  }
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  __for_range_3 = &this->searching_chest_group_map;
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 320, v27);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 320) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range_3);
  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 352, v27);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 352) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range_3);
  while ( 1 )
  {
    v47 = (char *)(v2 + 352);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 320),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 352)) )
      break;
    v75 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 320));
    area_id_1 = std::get<0ul,unsigned int const,std::set<unsigned int>>(v75);
    group_id_set_0 = std::get<1ul,unsigned int const,std::set<unsigned int>>(v75);
    if ( std::set<unsigned int>::empty(group_id_set_0) )
    {
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
        "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
        "checkSearchingConfig",
        209);
      v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 960),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v49 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v48, (const char (*)[51])byte_1AA68B40);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, area_id_1);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
      *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 384, v47);
      *(std::set<unsigned int>::iterator *)(v2 + 384) = std::set<unsigned int>::begin(group_id_set_0);
      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 416, v47);
      *(std::set<unsigned int>::iterator *)(v2 + 416) = std::set<unsigned int>::end(group_id_set_0);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 384),
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 416)) )
      {
        v50 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 384));
        group_id_0 = v50;
        if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v50);
        }
        v51 = *group_id_0;
        group_script_ptr_0 = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, v51);
        if ( group_script_ptr_0 )
        {
          __for_range_5 = &group_script_ptr_0->gadget_config_map;
          *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 448, v51);
          *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v2 + 448) = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(__for_range_5);
          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 480, v51);
          *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v2 + 480) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_5);
          while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v2 + 448),
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v2 + 480)) )
          {
            v81 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v2 + 448));
            config_id_0 = std::get<0ul,unsigned int const,GadgetScriptConfig>(v81);
            gadget_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v81);
            if ( *(_BYTE *)(((unsigned __int64)&gadget_config_0->entity_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&gadget_config_0->entity_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&gadget_config_0->entity_type);
            }
            if ( gadget_config_0->entity_type != Chest )
            {
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
                "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
                "checkSearchingConfig",
                226);
              v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1088),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v57 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                      v56,
                      (const char (*)[72])byte_1AA68BA0);
              v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, area_id_1);
              v59 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v58,
                      (const char (*)[12])" group_id: ");
              v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, group_id_0);
              v61 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v60,
                      (const char (*)[13])" config_id: ");
              v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, config_id_0);
              v63 = " entity type: ";
              v64 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v62,
                      (const char (*)[15])" entity type: ");
              *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((unsigned __int64)&gadget_config_0->entity_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&gadget_config_0->entity_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&gadget_config_0->entity_type);
              }
              v65 = gadget_config_0->entity_type;
              v66 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
              if ( v66 != 0 && v66 <= 3 )
              {
                v65 = v2 + 48;
                LOBYTE(v63) = v66 != 0;
                __asan_report_store4(v2 + 48, v63);
              }
              *(_DWORD *)(v2 + 48) = v65;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v64,
                (const unsigned int *)(v2 + 48));
              *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
              *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v2 + 448));
          }
          *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
        }
        else
        {
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
            "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
            "checkSearchingConfig",
            218);
          v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1024),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v53 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v52, (const char (*)[49])byte_1AA689A0);
          v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, group_id_0);
          v55 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v54, (const char (*)[10])byte_1AA687E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, area_id_1);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
          *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 384));
      }
      *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 320));
  }
  if ( v96 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 144) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1152LL, v96);
  }
  return ret;
};

// Line 237: range 0000000012C77116-0000000012C78DE1
int32_t __cdecl ActivityLunaRiteExcelConfigMgr::rewiteSearchingConfig(
        ActivityLunaRiteExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::unordered_set<unsigned int> *p_searching_area_id_set; // rcx
  data::LunaRiteRegionType *p_region_type; // rax
  __int64 region_type; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  char *v14; // rsi
  unsigned int type; // eax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // rdx
  std::insert_iterator<std::set<unsigned int> > v17; // rax
  std::set<unsigned int> *container; // r14
  const std::_Rb_tree_node_base *v19; // r15
  std::vector<std::string>::iterator v20; // rax
  std::insert_iterator<std::set<unsigned int> > v21; // rdx
  char *v22; // rsi
  unsigned int *v23; // rax
  int *v24; // rdx
  int v25; // ecx
  char v26; // al
  std::unordered_map<unsigned int,std::set<unsigned int>>::key_type v27; // r14d
  char *v28; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v29; // rax
  std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *v30; // rdx
  char v31; // cl
  NewActivityExcelConfigMgr *v32; // rcx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  char *v37; // rsi
  unsigned int v38; // eax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v39; // rdx
  std::insert_iterator<std::set<unsigned int> > v40; // rax
  std::set<unsigned int> *v41; // r14
  const std::_Rb_tree_node_base *v42; // r15
  std::vector<std::string>::iterator v43; // rax
  std::insert_iterator<std::set<unsigned int> > v44; // rdx
  char *v45; // rsi
  unsigned int *v46; // rax
  int *v47; // rdx
  int v48; // ecx
  char v49; // al
  std::unordered_map<unsigned int,std::set<unsigned int>>::key_type v50; // r14d
  char *v51; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v52; // rax
  std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *v53; // rdx
  char v54; // cl
  char *v55; // rsi
  unsigned int *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rdx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rdx
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rdx
  const unsigned int *v63; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v64; // rax
  uint32_t *v65; // rdx
  char v66; // cl
  char *v67; // rsi
  unsigned int *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rdx
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rdx
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rdx
  const unsigned int *v75; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v76; // rax
  uint32_t *v77; // rdx
  char v78; // cl
  std::string *__last; // [rsp+0h] [rbp-570h]
  std::string *__lasta; // [rsp+0h] [rbp-570h]
  int32_t ret; // [rsp+2Ch] [rbp-544h]
  uint32_t max_num; // [rsp+30h] [rbp-540h]
  uint32_t max_num_0; // [rsp+34h] [rbp-53Ch]
  const LuaConfigMgr *lua_config_mgr; // [rsp+38h] [rbp-538h]
  data::LunaRiteSearchingExcelConfigMap *__for_range; // [rsp+40h] [rbp-530h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range_4; // [rsp+48h] [rbp-528h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range_6; // [rsp+50h] [rbp-520h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v90; // [rsp+58h] [rbp-518h]
  const unsigned int *area_id_1; // [rsp+60h] [rbp-510h]
  std::set<unsigned int> *__for_range_7; // [rsp+70h] [rbp-500h]
  uint32_t *group_id_0; // [rsp+78h] [rbp-4F8h]
  const GroupScriptConfig *group_script_ptr_0; // [rsp+80h] [rbp-4F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference __in; // [rsp+88h] [rbp-4E8h]
  const unsigned int *area_id_0; // [rsp+90h] [rbp-4E0h]
  std::set<unsigned int> *__for_range_5; // [rsp+A0h] [rbp-4D0h]
  uint32_t *group_id; // [rsp+A8h] [rbp-4C8h]
  const GroupScriptConfig *group_script_ptr; // [rsp+B0h] [rbp-4C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig>,false,false>::reference v100; // [rsp+B8h] [rbp-4B8h]
  std::tuple_element<0,std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig> >::type *area_id; // [rsp+C0h] [rbp-4B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig> >::type *config; // [rsp+C8h] [rbp-4A8h]
  data::NewActivityCondExcelConfig *rune_cond_config_ptr; // [rsp+D0h] [rbp-4A0h]
  std::set<unsigned int> *rune_group_set; // [rsp+D8h] [rbp-498h]
  std::vector<data::NewActivityExec> *__for_range_0; // [rsp+E0h] [rbp-490h]
  data::NewActivityCondExcelConfig *chest_cond_config_ptr; // [rsp+F0h] [rbp-480h]
  std::set<unsigned int> *chest_group_set; // [rsp+F8h] [rbp-478h]
  std::vector<data::NewActivityExec> *__for_range_2; // [rsp+100h] [rbp-470h]
  data::NewActivityExec *exec_0; // [rsp+110h] [rbp-460h]
  data::NewActivityExec *exec; // [rsp+118h] [rbp-458h]
  char v111[1104]; // [rsp+120h] [rbp-450h] BYREF

  v2 = (unsigned __int64)v111;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1056LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "27 48 4 9 <unknown> 64 4 12 group_id:265 80 4 12 group_id:292 96 8 15 __for_begin:240 128 8 13 _"
                        "_for_end:240 160 8 15 __for_begin:252 192 8 13 __for_end:252 224 8 15 __for_begin:265 256 8 13 _"
                        "_for_end:265 288 8 15 __for_begin:279 320 8 13 __for_end:279 352 8 15 __for_begin:292 384 8 13 _"
                        "_for_end:292 416 8 15 __for_begin:299 448 8 13 __for_end:299 480 8 15 __for_begin:302 512 8 13 _"
                        "_for_end:302 544 8 15 __for_begin:320 576 8 13 __for_end:320 608 8 15 __for_begin:323 640 8 13 _"
                        "_for_end:323 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 "
                        "9 <unknown> 992 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityLunaRiteExcelConfigMgr::rewiteSearchingConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862733] = -218959360;
  v4[536862734] = -218959360;
  v4[536862735] = -218959360;
  v4[536862736] = -218959360;
  v4[536862737] = -218959360;
  v4[536862738] = -218959360;
  v4[536862739] = -218959360;
  v4[536862740] = -218959360;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -202116109;
  ret = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->luna_rite_searching_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LunaRiteSearchingExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::LunaRiteSearchingExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LunaRiteSearchingExcelConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::LunaRiteSearchingExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig>,false> *)(v2 + 128)) )
      break;
    v100 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig>,false,false> *const)(v2 + 96));
    area_id = std::get<0ul,unsigned int const,data::LunaRiteSearchingExcelConfig>(v100);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LunaRiteSearchingExcelConfig>(v100);
    p_searching_area_id_set = &this->searching_area_id_set;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    p_region_type = &config->region_type;
    if ( *(_BYTE *)(((unsigned __int64)p_region_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_region_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_region_type);
    }
    region_type = (unsigned int)config->region_type;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, region_type);
    *(_DWORD *)(v2 + 48) = region_type;
    std::unordered_set<unsigned int>::insert(
      p_searching_area_id_set,
      (std::unordered_set<unsigned int>::value_type *)(v2 + 48));
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->rune_cond >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->rune_cond >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->rune_cond);
    }
    rune_cond_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityCondExcelConfig(
                             p_new_activity_config_mgr,
                             config->rune_cond);
    if ( rune_cond_config_ptr )
    {
      rune_group_set = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                         &this->searching_rune_group_map,
                         area_id);
      __for_range_0 = &rune_cond_config_ptr->meet_exec;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, area_id);
      *(std::vector<data::NewActivityExec>::iterator *)(v2 + 160) = std::vector<data::NewActivityExec>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, area_id);
      *(std::vector<data::NewActivityExec>::iterator *)(v2 + 192) = std::vector<data::NewActivityExec>::end(__for_range_0);
      while ( 1 )
      {
        v14 = (char *)(v2 + 192);
        if ( !__gnu_cxx::operator!=<data::NewActivityExec *,std::vector<data::NewActivityExec>>(
                (const __gnu_cxx::__normal_iterator<data::NewActivityExec*,std::vector<data::NewActivityExec> > *)(v2 + 160),
                (const __gnu_cxx::__normal_iterator<data::NewActivityExec*,std::vector<data::NewActivityExec> > *)(v2 + 192)) )
          break;
        exec = __gnu_cxx::__normal_iterator<data::NewActivityExec *,std::vector<data::NewActivityExec>>::operator*((const __gnu_cxx::__normal_iterator<data::NewActivityExec*,std::vector<data::NewActivityExec> > *const)(v2 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&exec->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&exec->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&exec->type);
        }
        type = exec->type;
        if ( type <= 0x2C && ((1LL << type) & 0x100000020040LL) != 0 )
        {
          M_node = std::set<unsigned int>::end(rune_group_set)._M_node;
          v17 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
                  rune_group_set,
                  (std::_Rb_tree_const_iterator<unsigned int>)M_node);
          container = v17.container;
          v19 = v17.iter._M_node;
          __last = std::vector<std::string>::end(&exec->param)._M_current;
          v20._M_current = std::vector<std::string>::begin(&exec->param)._M_current;
          v21.container = container;
          v21.iter._M_node = v19;
          std::transform<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>,std::insert_iterator<std::set<unsigned int>>,unsigned int (*)(std::string const&)>(
            v20,
            (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)__last,
            v21,
            (unsigned int (*)(const std::string *))common::tools::Converter<unsigned int>::convertTo);
        }
        __gnu_cxx::__normal_iterator<data::NewActivityExec *,std::vector<data::NewActivityExec>>::operator++((__gnu_cxx::__normal_iterator<data::NewActivityExec*,std::vector<data::NewActivityExec> > *const)(v2 + 160));
      }
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 224, v14);
      *(std::set<unsigned int>::iterator *)(v2 + 224) = std::set<unsigned int>::begin(rune_group_set);
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 256, v14);
      *(std::set<unsigned int>::iterator *)(v2 + 256) = std::set<unsigned int>::end(rune_group_set);
      while ( 1 )
      {
        v22 = (char *)(v2 + 256);
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 224),
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 256)) )
          break;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
        v23 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 224));
        v24 = (int *)v23;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v23);
        }
        v25 = *v24;
        v26 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
        if ( v26 != 0 && v26 <= 3 )
        {
          LOBYTE(v22) = v26 != 0;
          __asan_report_store4(v2 + 64, v22);
        }
        *(_DWORD *)(v2 + 64) = v25;
        if ( *(_BYTE *)(((unsigned __int64)area_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)area_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)area_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(area_id);
        }
        v27 = *area_id;
        v28 = (char *)(v2 + 64);
        v29 = std::unordered_map<unsigned int,unsigned int>::operator[](
                &this->group_to_area_map,
                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 64));
        v30 = v29;
        v31 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
        if ( v31 != 0 && (char)(((unsigned __int8)v29 & 7) + 3) >= v31 )
        {
          LOBYTE(v28) = v31 != 0;
          __asan_report_store4(v29, v28);
        }
        *v30 = v27;
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 224));
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
      v32 = &txt_config_mgr->new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->chest_cond >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->chest_cond >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->chest_cond);
      }
      chest_cond_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityCondExcelConfig(
                                v32,
                                config->chest_cond);
      if ( chest_cond_config_ptr )
      {
        chest_group_set = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                            &this->searching_chest_group_map,
                            area_id);
        __for_range_2 = &chest_cond_config_ptr->meet_exec;
        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 288, area_id);
        *(std::vector<data::NewActivityExec>::iterator *)(v2 + 288) = std::vector<data::NewActivityExec>::begin(__for_range_2);
        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 320, area_id);
        *(std::vector<data::NewActivityExec>::iterator *)(v2 + 320) = std::vector<data::NewActivityExec>::end(__for_range_2);
        while ( 1 )
        {
          v37 = (char *)(v2 + 320);
          if ( !__gnu_cxx::operator!=<data::NewActivityExec *,std::vector<data::NewActivityExec>>(
                  (const __gnu_cxx::__normal_iterator<data::NewActivityExec*,std::vector<data::NewActivityExec> > *)(v2 + 288),
                  (const __gnu_cxx::__normal_iterator<data::NewActivityExec*,std::vector<data::NewActivityExec> > *)(v2 + 320)) )
            break;
          exec_0 = __gnu_cxx::__normal_iterator<data::NewActivityExec *,std::vector<data::NewActivityExec>>::operator*((const __gnu_cxx::__normal_iterator<data::NewActivityExec*,std::vector<data::NewActivityExec> > *const)(v2 + 288));
          if ( *(_BYTE *)(((unsigned __int64)&exec_0->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&exec_0->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&exec_0->type);
          }
          v38 = exec_0->type;
          if ( v38 <= 0x2C && ((1LL << v38) & 0x100000020040LL) != 0 )
          {
            v39 = std::set<unsigned int>::end(chest_group_set)._M_node;
            v40 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
                    chest_group_set,
                    (std::_Rb_tree_const_iterator<unsigned int>)v39);
            v41 = v40.container;
            v42 = v40.iter._M_node;
            __lasta = std::vector<std::string>::end(&exec_0->param)._M_current;
            v43._M_current = std::vector<std::string>::begin(&exec_0->param)._M_current;
            v44.container = v41;
            v44.iter._M_node = v42;
            std::transform<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>,std::insert_iterator<std::set<unsigned int>>,unsigned int (*)(std::string const&)>(
              v43,
              (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)__lasta,
              v44,
              (unsigned int (*)(const std::string *))common::tools::Converter<unsigned int>::convertTo);
          }
          __gnu_cxx::__normal_iterator<data::NewActivityExec *,std::vector<data::NewActivityExec>>::operator++((__gnu_cxx::__normal_iterator<data::NewActivityExec*,std::vector<data::NewActivityExec> > *const)(v2 + 288));
        }
        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 352, v37);
        *(std::set<unsigned int>::iterator *)(v2 + 352) = std::set<unsigned int>::begin(chest_group_set);
        *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 384, v37);
        *(std::set<unsigned int>::iterator *)(v2 + 384) = std::set<unsigned int>::end(chest_group_set);
        while ( 1 )
        {
          v45 = (char *)(v2 + 384);
          if ( !std::operator!=(
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 352),
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 384)) )
            break;
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
          v46 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 352));
          v47 = (int *)v46;
          if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v46 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v46);
          }
          v48 = *v47;
          v49 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
          if ( v49 != 0 && v49 <= 3 )
          {
            LOBYTE(v45) = v49 != 0;
            __asan_report_store4(v2 + 80, v45);
          }
          *(_DWORD *)(v2 + 80) = v48;
          if ( *(_BYTE *)(((unsigned __int64)area_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)area_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)area_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(area_id);
          }
          v50 = *area_id;
          v51 = (char *)(v2 + 80);
          v52 = std::unordered_map<unsigned int,unsigned int>::operator[](
                  &this->group_to_area_map,
                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 80));
          v53 = v52;
          v54 = *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000);
          if ( v54 != 0 && (char)(((unsigned __int8)v52 & 7) + 3) >= v54 )
          {
            LOBYTE(v51) = v54 != 0;
            __asan_report_store4(v52, v51);
          }
          *v53 = v50;
          std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 352));
        }
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 736, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 736),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
          "rewiteSearchingConfig",
          274);
        v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 736),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v34 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v33, (const char (*)[47])byte_1AA68880);
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &config->chest_cond);
        v36 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v35, (const char (*)[10])byte_1AA687E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, area_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
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
        "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
        "rewiteSearchingConfig",
        247);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 672),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v10, (const char (*)[47])byte_1AA68780);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->rune_cond);
      v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])byte_1AA687E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, area_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LunaRiteSearchingExcelConfig>,false,false> *const)(v2 + 96));
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  __for_range_4 = &this->searching_rune_group_map;
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 416, v5);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 416) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range_4);
  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 448, v5);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 448) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range_4);
  while ( 1 )
  {
    v55 = (char *)(v2 + 448);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 416),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 448)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 416));
    area_id_0 = std::get<0ul,unsigned int const,std::set<unsigned int>>(__in);
    max_num = 0;
    __for_range_5 = std::get<1ul,unsigned int const,std::set<unsigned int>>(__in);
    *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 480, v55);
    *(std::set<unsigned int>::iterator *)(v2 + 480) = std::set<unsigned int>::begin(__for_range_5);
    *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 512, v55);
    *(std::set<unsigned int>::iterator *)(v2 + 512) = std::set<unsigned int>::end(__for_range_5);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 480),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 512)) )
    {
      v56 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 480));
      group_id = v56;
      if ( *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v56 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v56);
      }
      group_script_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, *group_id);
      if ( group_script_ptr )
      {
        max_num += std::unordered_map<unsigned int,GadgetScriptConfig>::size(&group_script_ptr->gadget_config_map);
      }
      else
      {
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
          "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
          "rewiteSearchingConfig",
          307);
        v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 800),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v58 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v57, (const char (*)[48])byte_1AA68EC0);
        v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, group_id);
        v60 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v59, (const char (*)[10])byte_1AA687E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, area_id_0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 480));
    }
    *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
    if ( !max_num )
    {
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
        "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
        "rewiteSearchingConfig",
        315);
      v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 864),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v62 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v61, (const char (*)[39])byte_1AA68F20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, area_id_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
      *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v63 = area_id_0;
    v64 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->searching_rune_num_map, area_id_0);
    v65 = v64;
    v66 = *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000);
    if ( v66 != 0 && (char)(((unsigned __int8)v64 & 7) + 3) >= v66 )
    {
      LOBYTE(v63) = v66 != 0;
      __asan_report_store4(v64, v63);
    }
    *v65 = max_num;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 416));
  }
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
  __for_range_6 = &this->searching_chest_group_map;
  *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 544, v55);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 544) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range_6);
  *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 576, v55);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 576) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range_6);
  while ( 1 )
  {
    v67 = (char *)(v2 + 576);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 544),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 576)) )
      break;
    v90 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 544));
    area_id_1 = std::get<0ul,unsigned int const,std::set<unsigned int>>(v90);
    max_num_0 = 0;
    __for_range_7 = std::get<1ul,unsigned int const,std::set<unsigned int>>(v90);
    *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 608, v67);
    *(std::set<unsigned int>::iterator *)(v2 + 608) = std::set<unsigned int>::begin(__for_range_7);
    *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 640, v67);
    *(std::set<unsigned int>::iterator *)(v2 + 640) = std::set<unsigned int>::end(__for_range_7);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 608),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 640)) )
    {
      v68 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 608));
      group_id_0 = v68;
      if ( *(_BYTE *)(((unsigned __int64)v68 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v68 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v68 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v68);
      }
      group_script_ptr_0 = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, *group_id_0);
      if ( group_script_ptr_0 )
      {
        max_num_0 += std::unordered_map<unsigned int,GadgetScriptConfig>::size(&group_script_ptr_0->gadget_config_map);
      }
      else
      {
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
          "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
          "rewiteSearchingConfig",
          328);
        v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 928),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v70 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v69, (const char (*)[49])byte_1AA689A0);
        v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, group_id_0);
        v72 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v71, (const char (*)[10])byte_1AA687E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, area_id_1);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
        *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 608));
    }
    *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
    if ( !max_num_0 )
    {
      *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 992, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 992),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityLunaRiteExcelConfig.cpp",
        "rewiteSearchingConfig",
        336);
      v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 992),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v74 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v73, (const char (*)[39])byte_1AA68F80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, area_id_1);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
      *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v75 = area_id_1;
    v76 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->searching_chest_num_map, area_id_1);
    v77 = v76;
    v78 = *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000);
    if ( v78 != 0 && (char)(((unsigned __int8)v76 & 7) + 3) >= v78 )
    {
      LOBYTE(v75) = v78 != 0;
      __asan_report_store4(v76, v75);
    }
    *v77 = max_num_0;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 544));
  }
  if ( v111 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 132) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1056LL, v111);
  }
  return ret;
};

// Line 345: range 0000000012C78DE2-0000000012C78FDD
__int64 __fastcall ActivityLunaRiteExcelConfigMgr::findNextBundleId(
        const ActivityLunaRiteExcelConfigMgr *const this,
        __int64 bundle_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_next_bundle_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 13 bundle_id:344 64 8 8 iter:346 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityLunaRiteExcelConfigMgr::findNextBundleId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = bundle_id;
  p_next_bundle_map = &this->next_bundle_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, bundle_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_next_bundle_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->next_bundle_map;
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

// Line 355: range 0000000012C78FDE-0000000012C791D9
__int64 __fastcall ActivityLunaRiteExcelConfigMgr::getAreaIdByGroupId(
        const ActivityLunaRiteExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_group_to_area_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:354 64 8 8 iter:356 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityLunaRiteExcelConfigMgr::getAreaIdByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_to_area_map = &this->group_to_area_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_group_to_area_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->group_to_area_map;
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

// Line 365: range 0000000012C791DA-0000000012C793D5
__int64 __fastcall ActivityLunaRiteExcelConfigMgr::getAreaIdByBundleId(
        const ActivityLunaRiteExcelConfigMgr *const this,
        __int64 bundle_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_bundle_to_area_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 13 bundle_id:364 64 8 8 iter:366 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityLunaRiteExcelConfigMgr::getAreaIdByBundleId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = bundle_id;
  p_bundle_to_area_map = &this->bundle_to_area_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, bundle_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_bundle_to_area_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->bundle_to_area_map;
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

// Line 375: range 0000000012C793D6-0000000012C7956E
bool __fastcall ActivityLunaRiteExcelConfigMgr::isSearchingAreaId(
        const ActivityLunaRiteExcelConfigMgr *const this,
        __int64 area_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_set<unsigned int> *p_searching_area_id_set; // rdx
  std::unordered_set<unsigned int> *v6; // rdx
  bool result; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 area_id:374 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityLunaRiteExcelConfigMgr::isSearchingAreaId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = area_id;
  p_searching_area_id_set = &this->searching_area_id_set;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, area_id);
  *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 96) = std::unordered_set<unsigned int>::end(p_searching_area_id_set);
  v6 = &this->searching_area_id_set;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, area_id);
  *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 64) = std::unordered_set<unsigned int>::find(
                                                                     v6,
                                                                     (const std::unordered_set<unsigned int>::key_type *)(v2 + 48));
  result = std::__detail::operator!=<unsigned int,false>(
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 64),
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 96));
  if ( v8 == (char *)v2 )
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

// Line 380: range 0000000012C79570-0000000012C79781
const data::LunaRiteBattleExcelConfig *__fastcall ActivityLunaRiteExcelConfigMgr::findLunaRiteBattleExcelConfigByBundleId(
        const ActivityLunaRiteExcelConfigMgr *const this,
        __int64 bundle_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_bundle_to_battle_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  const data::LunaRiteBattleExcelConfig *result; // rax
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
  *(_QWORD *)(v2 + 8) = "3 48 4 13 bundle_id:379 64 8 8 iter:381 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityLunaRiteExcelConfigMgr::findLunaRiteBattleExcelConfigByBundleId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = bundle_id;
  p_bundle_to_battle_map = &this->bundle_to_battle_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, bundle_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_bundle_to_battle_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->bundle_to_battle_map;
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
    result = data::ActivityLunaRiteExcelConfigMgrBase::findLunaRiteBattleExcelConfig(this, v9->second);
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

// Line 390: range 0000000012C79782-0000000012C79943
const std::set<unsigned int> *__fastcall ActivityLunaRiteExcelConfigMgr::findChestGroupIdSet(
        const ActivityLunaRiteExcelConfigMgr *const this,
        __int64 area_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_searching_chest_group_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 11 area_id:389 64 8 8 iter:391 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityLunaRiteExcelConfigMgr::findChestGroupIdSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = area_id;
  p_searching_chest_group_map = &this->searching_chest_group_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, area_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_searching_chest_group_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->searching_chest_group_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::cend(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
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

// Line 400: range 0000000012C79944-0000000012C79B05
const std::set<unsigned int> *__fastcall ActivityLunaRiteExcelConfigMgr::findRuneGroupIdSet(
        const ActivityLunaRiteExcelConfigMgr *const this,
        __int64 area_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_searching_rune_group_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 11 area_id:399 64 8 8 iter:401 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityLunaRiteExcelConfigMgr::findRuneGroupIdSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = area_id;
  p_searching_rune_group_map = &this->searching_rune_group_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, area_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_searching_rune_group_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->searching_rune_group_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::cend(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
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

// Line 410: range 0000000012C79B06-0000000012C79D01
__int64 __fastcall ActivityLunaRiteExcelConfigMgr::getChestNum(
        const ActivityLunaRiteExcelConfigMgr *const this,
        __int64 arae_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_searching_chest_num_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 11 arae_id:409 64 8 8 iter:411 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityLunaRiteExcelConfigMgr::getChestNum;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = arae_id;
  p_searching_chest_num_map = &this->searching_chest_num_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, arae_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_searching_chest_num_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->searching_chest_num_map;
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

// Line 420: range 0000000012C79D02-0000000012C79EFD
__int64 __fastcall ActivityLunaRiteExcelConfigMgr::getRuneNum(
        const ActivityLunaRiteExcelConfigMgr *const this,
        __int64 arae_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_searching_rune_num_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 11 arae_id:419 64 8 8 iter:421 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityLunaRiteExcelConfigMgr::getRuneNum;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = arae_id;
  p_searching_rune_num_map = &this->searching_rune_num_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, arae_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_searching_rune_num_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->searching_rune_num_map;
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
