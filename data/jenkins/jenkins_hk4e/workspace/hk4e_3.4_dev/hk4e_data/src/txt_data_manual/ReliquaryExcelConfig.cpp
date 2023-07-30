// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ReliquaryExcelConfig.cpp

// Line 29: range 000000001463A060-000000001463A288
int32_t __cdecl ReliquaryExcelConfigMgr::checkConfig(
        ReliquaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReliquaryExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ReliquaryExcelConfigMgr::checkReliquaryExcelConfig(this, txt_config_mgr)
    || ReliquaryExcelConfigMgr::checkReliquarySetExcelConfig(this, txt_config_mgr)
    || ReliquaryExcelConfigMgr::checkReliquaryMainPropGuaranteeExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
      "checkConfig",
      34);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v6,
      (const char (*)[36])"checkReliquarySetExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
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
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 41: range 000000001463A28A-000000001463A4DD
int32_t __cdecl ReliquaryExcelConfigMgr::rewriteConfig(
        ReliquaryExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
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
  *(_QWORD *)(v2 + 16) = ReliquaryExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ReliquaryExcelConfigMgr::rewriteReliquaryExcelConfig(this, txt_config_mgr)
    || ReliquaryExcelConfigMgr::rewriteReliquaryMainPropExcelConfig(this, txt_config_mgr)
    || ReliquaryExcelConfigMgr::rewriteReliquaryAffixExcelConfig(this, txt_config_mgr)
    || ReliquaryExcelConfigMgr::rewriteReliquaryLevelExcelConfig(this, txt_config_mgr)
    || ReliquaryExcelConfigMgr::rewriteReliquaryMainPropGuaranteeExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
      "rewriteConfig",
      49);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[21])"rewriteConfig failed");
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

// Line 56: range 000000001463A4DE-000000001463AE3D
__int64 __fastcall ReliquaryExcelConfigMgr::generateMainPropId(
        const ReliquaryExcelConfigMgr *const this,
        uint32_t item_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  __int64 v7; // rsi
  uint32_t main_prop_depot_id; // ecx
  char v9; // al
  std::map<unsigned int,std::vector<data::ReliquaryMainPropExcelConfig>> *p_main_depot_prop_config_map; // rdx
  std::map<unsigned int,std::vector<data::ReliquaryMainPropExcelConfig>> *v11; // rdx
  bool v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::vector<data::ReliquaryMainPropExcelConfig>::size_type v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::vector<data::ReliquaryMainPropExcelConfig>::size_type v19; // rax
  std::vector<data::ReliquaryMainPropExcelConfig>::const_reference v20; // rax
  const data::ReliquaryExcelConfig *reliquary_config_ptr; // [rsp+10h] [rbp-200h]
  std::vector<data::ReliquaryMainPropExcelConfig> *main_prop_vec; // [rsp+18h] [rbp-1F8h]
  char v23[496]; // [rsp+20h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 4 21 main_prop_depot_id:64 64 4 13 select_idx:73 80 4 10 item_id:55 96 8 7 iter:65 128 8 9"
                        " <unknown> 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReliquaryExcelConfigMgr::generateMainPropId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  *(_DWORD *)(v2 + 80) = item_id;
  reliquary_config_ptr = data::ReliquaryExcelConfigMgrBase::findReliquaryExcelConfig(this, *(unsigned int *)(v2 + 80));
  if ( reliquary_config_ptr )
  {
    v7 = (((_BYTE)reliquary_config_ptr + 84) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->main_prop_depot_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)reliquary_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->main_prop_depot_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&reliquary_config_ptr->main_prop_depot_id);
    }
    main_prop_depot_id = reliquary_config_ptr->main_prop_depot_id;
    v9 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v9 != 0;
    if ( v9 != 0 && v9 <= 3 )
      __asan_report_store4(v2 + 48, v7);
    *(_DWORD *)(v2 + 48) = main_prop_depot_id;
    p_main_depot_prop_config_map = &this->main_depot_prop_config_map;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v7);
    *(std::map<unsigned int,std::vector<data::ReliquaryMainPropExcelConfig>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::vector<data::ReliquaryMainPropExcelConfig>>::find(p_main_depot_prop_config_map, (const std::map<unsigned int,std::vector<data::ReliquaryMainPropExcelConfig>>::key_type *)(v2 + 48));
    v11 = &this->main_depot_prop_config_map;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v2 + 48);
    *(std::map<unsigned int,std::vector<data::ReliquaryMainPropExcelConfig>>::const_iterator *)(v2 + 128) = std::map<unsigned int,std::vector<data::ReliquaryMainPropExcelConfig>>::end(v11);
    v12 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryMainPropExcelConfig> > >::_Self *)(v2 + 96),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryMainPropExcelConfig> > >::_Self *)(v2 + 128));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
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
        3u,
        "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
        "generateMainPropId",
        68);
      v13 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[37])"main_prop_depot not found, depot_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0LL;
    }
    else
    {
      main_prop_vec = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryMainPropExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryMainPropExcelConfig> > > *const)(v2 + 96))->second;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, v2 + 128);
      *(_DWORD *)(v2 + 64) = 0;
      if ( common::tools::RandomUtils::weightSelectOne<data::ReliquaryMainPropExcelConfig,unsigned int data::ReliquaryMainPropExcelConfig::*>(
             main_prop_vec,
             (uint32_t *)(v2 + 64),
             (unsigned int *)0x14,
             0) )
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
          3u,
          "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
          "generateMainPropId",
          76);
        v14 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[63])"weightSelectOne ReliquaryMainPropExcelConfig failed, depot_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        result = 0LL;
      }
      else
      {
        if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 64);
        v15 = *(unsigned int *)(v2 + 64);
        if ( v15 < std::vector<data::ReliquaryMainPropExcelConfig>::size(main_prop_vec) )
        {
          if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 64);
          v20 = std::vector<data::ReliquaryMainPropExcelConfig>::operator[](main_prop_vec, *(unsigned int *)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v20->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v20->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v20->id);
          }
          result = v20->id;
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
            3u,
            "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
            "generateMainPropId",
            82);
          v16 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                  (common::milog::MiLogStream *const)(v2 + 384),
                  (const char (*)[59])"select_idx is greator than main_prop_vec size, select_idx:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v2 + 64));
          v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])" size:");
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
          v19 = std::vector<data::ReliquaryMainPropExcelConfig>::size(main_prop_vec);
          if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
            v19 = __asan_report_store8(v2 + 160, " size:");
          *(_QWORD *)(v2 + 160) = v19;
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v18,
            (const unsigned __int64 *)(v2 + 160));
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
          result = 0LL;
        }
      }
    }
  }
  else
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
      3u,
      "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
      "generateMainPropId",
      60);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[42])"findReliquaryExcelConfig failed, item_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0LL;
  }
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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

// Line 90: range 000000001463AE3E-000000001463C754
__int64 __fastcall ReliquaryExcelConfigMgr::generateAppendPropId(
        const ReliquaryExcelConfigMgr *const this,
        uint32_t item_id,
        uint32_t main_prop_id,
        const std::vector<unsigned int> *append_prop_id_vec)
{
  unsigned int id; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rsi
  common::milog::MiLogStream *v10; // rax
  uint32_t append_prop_depot_id; // ecx
  char v12; // al
  std::map<unsigned int,std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>> *p_append_depot_group_config_map; // rdx
  std::map<unsigned int,std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>> *v14; // rdx
  char *v15; // rsi
  bool v16; // al
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  char *v21; // rsi
  unsigned int *v22; // rax
  int *v23; // rdx
  int v24; // ecx
  char v25; // al
  common::milog::MiLogStream *v26; // rax
  int v27; // edx
  char *v28; // rsi
  const data::ReliquaryAffixExcelConfig *v29; // r14
  const data::ReliquaryAffixExcelConfig *M_current; // r14
  data::FightPropType *p_prop_type; // rax
  data::FightPropType prop_type; // ecx
  __int64 v33; // rdx
  common::milog::MiLogStream *v34; // rax
  std::vector<data::ReliquaryAffixExcelConfig>::size_type v35; // r14
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  std::vector<data::ReliquaryAffixExcelConfig>::size_type v39; // rax
  std::vector<data::ReliquaryAffixExcelConfig>::reference v40; // rax
  const data::ReliquaryAffixExcelConfig *__last; // [rsp+0h] [rbp-570h]
  const data::ReliquaryAffixExcelConfig *__lasta; // [rsp+0h] [rbp-570h]
  bool is_upgrade; // [rsp+27h] [rbp-549h]
  const data::ReliquaryExcelConfig *reliquary_config_ptr; // [rsp+28h] [rbp-548h]
  const data::ReliquaryMainPropExcelConfig *main_prop_config_ptr; // [rsp+30h] [rbp-540h]
  std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>> *group_prop_config_map; // [rsp+38h] [rbp-538h]
  const data::ReliquaryAffixExcelConfig *append_prop_config_ptr; // [rsp+48h] [rbp-528h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig> > >::reference v51; // [rsp+58h] [rbp-518h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig> > >::type *group_id_0; // [rsp+60h] [rbp-510h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig> > >::type *append_prop_config_vec_0; // [rsp+68h] [rbp-508h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig> > >::reference v54; // [rsp+78h] [rbp-4F8h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig> > >::type *group_id; // [rsp+80h] [rbp-4F0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig> > >::type *append_prop_config_vec; // [rsp+88h] [rbp-4E8h]
  std::vector<data::ReliquaryAffixExcelConfig> *__for_range_2; // [rsp+90h] [rbp-4E0h]
  const data::ReliquaryAffixExcelConfig *append_prop_config; // [rsp+98h] [rbp-4D8h]
  char v59[1232]; // [rsp+A0h] [rbp-4D0h] BYREF

  v5 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_5(1184LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "29 32 4 24 append_prop_depot_id:105 48 4 18 append_prop_id:120 64 4 14 select_idx:171 80 4 10 it"
                        "em_id:89 96 4 15 main_prop_id:89 112 8 8 iter:107 144 8 9 <unknown> 176 8 15 __for_begin:120 208"
                        " 8 13 __for_end:120 240 8 15 __for_begin:137 272 8 13 __for_end:137 304 8 9 <unknown> 336 8 9 <u"
                        "nknown> 368 8 15 __for_begin:149 400 8 13 __for_end:149 432 8 9 <unknown> 464 8 9 <unknown> 496 "
                        "8 15 __for_begin:161 528 8 13 __for_end:161 560 8 9 <unknown> 592 24 26 result_append_prop_vec:1"
                        "15 656 24 23 tmp_append_prop_vec:116 720 32 9 <unknown> 784 32 9 <unknown> 848 32 9 <unknown> 91"
                        "2 32 9 <unknown> 976 32 9 <unknown> 1040 32 9 <unknown> 1104 48 19 owned_group_set:119";
  *(_QWORD *)(v5 + 16) = ReliquaryExcelConfigMgr::generateAppendPropId;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = 61956;
  v7[536862723] = -234881024;
  v7[536862724] = 62194;
  v7[536862724] = -234881024;
  v7[536862725] = 62194;
  v7[536862725] = -234881024;
  v7[536862726] = 62194;
  v7[536862726] = -234881024;
  v7[536862727] = 62194;
  v7[536862727] = -234881024;
  v7[536862728] = 62194;
  v7[536862728] = -234881024;
  v7[536862729] = 62194;
  v7[536862729] = -234881024;
  v7[536862730] = 62194;
  v7[536862730] = -234881024;
  v7[536862731] = 62194;
  v7[536862731] = -234881024;
  v7[536862732] = 62194;
  v7[536862732] = -234881024;
  v7[536862733] = 62194;
  v7[536862733] = -234881024;
  v7[536862734] = 62194;
  v7[536862734] = -234881024;
  v7[536862735] = 62194;
  v7[536862735] = -234881024;
  v7[536862736] = 62194;
  v7[536862736] = -234881024;
  v7[536862737] = 62194;
  v7[536862737] = -234881024;
  v7[536862738] = 62194;
  v7[536862739] = -218959360;
  v7[536862740] = 62194;
  v7[536862741] = -218959360;
  v7[536862742] = 62194;
  v7[536862743] = -219021312;
  v7[536862744] = 62194;
  v7[536862745] = -219021312;
  v7[536862746] = 62194;
  v7[536862747] = -219021312;
  v7[536862748] = 62194;
  v7[536862749] = -219021312;
  v7[536862750] = 62194;
  v7[536862751] = -219021312;
  v7[536862752] = 62194;
  v7[536862753] = -219021312;
  v7[536862754] = 62194;
  v7[536862756] = -202116109;
  *(_DWORD *)(v5 + 80) = item_id;
  *(_DWORD *)(v5 + 96) = main_prop_id;
  reliquary_config_ptr = data::ReliquaryExcelConfigMgrBase::findReliquaryExcelConfig(this, *(unsigned int *)(v5 + 80));
  if ( reliquary_config_ptr )
  {
    v9 = *(unsigned int *)(v5 + 96);
    main_prop_config_ptr = data::ReliquaryExcelConfigMgrBase::findReliquaryMainPropExcelConfig(this, v9);
    if ( main_prop_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->append_prop_depot_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->append_prop_depot_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&reliquary_config_ptr->append_prop_depot_id);
      }
      append_prop_depot_id = reliquary_config_ptr->append_prop_depot_id;
      v12 = *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v12 != 0;
      if ( v12 != 0 && v12 <= 3 )
        __asan_report_store4(v5 + 32, v9);
      *(_DWORD *)(v5 + 32) = append_prop_depot_id;
      p_append_depot_group_config_map = &this->append_depot_group_config_map;
      if ( *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 112, v9);
      *(std::map<unsigned int,std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>>::const_iterator *)(v5 + 112) = std::map<unsigned int,std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>>::find(p_append_depot_group_config_map, (const std::map<unsigned int,std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>>::key_type *)(v5 + 32));
      v14 = &this->append_depot_group_config_map;
      if ( *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 144, v5 + 32);
      *(std::map<unsigned int,std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>>::const_iterator *)(v5 + 144) = std::map<unsigned int,std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>>::end(v14);
      v15 = (char *)(v5 + 144);
      v16 = std::operator==(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>> > >::_Self *)(v5 + 112),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>> > >::_Self *)(v5 + 144));
      *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = -8;
      if ( v16 )
      {
        *(_DWORD *)(((v5 + 848) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 848) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 879) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 879) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 848, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 848),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
          "generateAppendPropId",
          110);
        v17 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                (common::milog::MiLogStream *const)(v5 + 848),
                (const char (*)[56])"append_prop_depot_id not found in appendProp, depot_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 848));
        id = 0;
      }
      else
      {
        v18 = ((v5 + 592) >> 3) + 2147450880;
        *(_WORD *)v18 = 0;
        *(_BYTE *)(v18 + 2) = 0;
        std::vector<data::ReliquaryAffixExcelConfig>::vector((std::vector<data::ReliquaryAffixExcelConfig> *const)(v5 + 592));
        v19 = ((v5 + 656) >> 3) + 2147450880;
        *(_WORD *)v19 = 0;
        *(_BYTE *)(v19 + 2) = 0;
        std::vector<data::ReliquaryAffixExcelConfig>::vector((std::vector<data::ReliquaryAffixExcelConfig> *const)(v5 + 656));
        group_prop_config_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>> > > *const)(v5 + 112))->second;
        v20 = ((v5 + 1104) >> 3) + 2147450880;
        *(_DWORD *)v20 = 0;
        *(_WORD *)(v20 + 4) = 0;
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v5 + 1104));
        *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 176, v15);
        *(std::vector<unsigned int>::const_iterator *)(v5 + 176) = std::vector<unsigned int>::begin(append_prop_id_vec);
        *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 208, v15);
        *(std::vector<unsigned int>::const_iterator *)(v5 + 208) = std::vector<unsigned int>::end(append_prop_id_vec);
        while ( 1 )
        {
          v21 = (char *)(v5 + 208);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 176),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 208)) )
          {
            v27 = 1;
            goto LABEL_40;
          }
          *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
          v22 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 176));
          v23 = (int *)v22;
          if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v22);
          }
          v24 = *v23;
          v25 = *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000);
          if ( v25 != 0 && v25 <= 3 )
          {
            LOBYTE(v21) = v25 != 0;
            __asan_report_store4(v5 + 48, v21);
          }
          *(_DWORD *)(v5 + 48) = v24;
          append_prop_config_ptr = data::ReliquaryExcelConfigMgrBase::findReliquaryAffixExcelConfig(
                                     this,
                                     *(unsigned int *)(v5 + 48));
          if ( !append_prop_config_ptr )
            break;
          std::set<unsigned int>::insert((std::set<unsigned int> *const)(v5 + 1104), &append_prop_config_ptr->group_id);
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 176));
        }
        *(_DWORD *)(((v5 + 912) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 912) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 943) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 943) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 912, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 912),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
          "generateAppendPropId",
          125);
        v26 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                (common::milog::MiLogStream *const)(v5 + 912),
                (const char (*)[54])"findReliquaryAffixExcelConfig failed, append_prop_id:");
        v21 = (char *)(v5 + 48);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 912));
        *(_DWORD *)(((v5 + 912) >> 3) + 0x7FFF8000) = -117901064;
        id = 0;
        v27 = 0;
LABEL_40:
        *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) = -8;
        if ( v27 == 1 )
        {
          is_upgrade = 0;
          if ( std::vector<unsigned int>::size(append_prop_id_vec) > 3 )
          {
            *(_BYTE *)(((v5 + 368) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v5 + 368) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v5 + 368, v21);
            *(std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>::const_iterator *)(v5 + 368) = std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>::begin(group_prop_config_map);
            *(_BYTE *)(((v5 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v5 + 400) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v5 + 400, v21);
            *(std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>::const_iterator *)(v5 + 400) = std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>::end(group_prop_config_map);
            while ( 1 )
            {
              v28 = (char *)(v5 + 400);
              if ( !std::operator!=(
                      (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig> > >::_Self *)(v5 + 368),
                      (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig> > >::_Self *)(v5 + 400)) )
                break;
              v51 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig> > > *const)(v5 + 368));
              group_id_0 = std::get<0ul,unsigned int const,std::vector<data::ReliquaryAffixExcelConfig>>(v51);
              append_prop_config_vec_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig> > >::type *)std::get<1ul,unsigned int const,std::vector<data::ReliquaryAffixExcelConfig>>(v51);
              if ( std::set<unsigned int>::count((const std::set<unsigned int> *const)(v5 + 1104), group_id_0) )
              {
                __lasta = std::vector<data::ReliquaryAffixExcelConfig>::end(append_prop_config_vec_0)._M_current;
                M_current = std::vector<data::ReliquaryAffixExcelConfig>::begin(append_prop_config_vec_0)._M_current;
                *(_BYTE *)(((v5 + 464) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v5 + 432) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v5 + 432) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v5 + 432, group_id_0);
                *(std::vector<data::ReliquaryAffixExcelConfig>::iterator *)(v5 + 432) = std::vector<data::ReliquaryAffixExcelConfig>::end((std::vector<data::ReliquaryAffixExcelConfig> *const)(v5 + 656));
                __gnu_cxx::__normal_iterator<data::ReliquaryAffixExcelConfig const*,std::vector<data::ReliquaryAffixExcelConfig>>::__normal_iterator<data::ReliquaryAffixExcelConfig*>(
                  (__gnu_cxx::__normal_iterator<const data::ReliquaryAffixExcelConfig*,std::vector<data::ReliquaryAffixExcelConfig> > *const)(v5 + 464),
                  (const __gnu_cxx::__normal_iterator<data::ReliquaryAffixExcelConfig*,std::vector<data::ReliquaryAffixExcelConfig> > *)(v5 + 432));
                if ( *(_BYTE *)(((v5 + 464) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v5 + 464);
                std::vector<data::ReliquaryAffixExcelConfig>::insert<__gnu_cxx::__normal_iterator<data::ReliquaryAffixExcelConfig const*,std::vector<data::ReliquaryAffixExcelConfig>>,void>(
                  (std::vector<data::ReliquaryAffixExcelConfig> *const)(v5 + 656),
                  *(std::vector<data::ReliquaryAffixExcelConfig>::const_iterator *)(v5 + 464),
                  (__gnu_cxx::__normal_iterator<const data::ReliquaryAffixExcelConfig*,std::vector<data::ReliquaryAffixExcelConfig> >)M_current,
                  (__gnu_cxx::__normal_iterator<const data::ReliquaryAffixExcelConfig*,std::vector<data::ReliquaryAffixExcelConfig> >)__lasta);
                *(_BYTE *)(((v5 + 464) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v5 + 432) >> 3) + 0x7FFF8000) = -8;
              }
              std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig> > > *const)(v5 + 368));
            }
            *(_BYTE *)(((v5 + 368) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v5 + 400) >> 3) + 0x7FFF8000) = -8;
            is_upgrade = 1;
          }
          else
          {
            *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v5 + 240, v21);
            *(std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>::const_iterator *)(v5 + 240) = std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>::begin(group_prop_config_map);
            *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v5 + 272, v21);
            *(std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>::const_iterator *)(v5 + 272) = std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>::end(group_prop_config_map);
            while ( 1 )
            {
              v28 = (char *)(v5 + 272);
              if ( !std::operator!=(
                      (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig> > >::_Self *)(v5 + 240),
                      (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig> > >::_Self *)(v5 + 272)) )
                break;
              v54 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig> > > *const)(v5 + 240));
              group_id = std::get<0ul,unsigned int const,std::vector<data::ReliquaryAffixExcelConfig>>(v54);
              append_prop_config_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig> > >::type *)std::get<1ul,unsigned int const,std::vector<data::ReliquaryAffixExcelConfig>>(v54);
              if ( !std::set<unsigned int>::count((const std::set<unsigned int> *const)(v5 + 1104), group_id) )
              {
                __last = std::vector<data::ReliquaryAffixExcelConfig>::end(append_prop_config_vec)._M_current;
                v29 = std::vector<data::ReliquaryAffixExcelConfig>::begin(append_prop_config_vec)._M_current;
                *(_BYTE *)(((v5 + 336) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v5 + 304, group_id);
                *(std::vector<data::ReliquaryAffixExcelConfig>::iterator *)(v5 + 304) = std::vector<data::ReliquaryAffixExcelConfig>::end((std::vector<data::ReliquaryAffixExcelConfig> *const)(v5 + 656));
                __gnu_cxx::__normal_iterator<data::ReliquaryAffixExcelConfig const*,std::vector<data::ReliquaryAffixExcelConfig>>::__normal_iterator<data::ReliquaryAffixExcelConfig*>(
                  (__gnu_cxx::__normal_iterator<const data::ReliquaryAffixExcelConfig*,std::vector<data::ReliquaryAffixExcelConfig> > *const)(v5 + 336),
                  (const __gnu_cxx::__normal_iterator<data::ReliquaryAffixExcelConfig*,std::vector<data::ReliquaryAffixExcelConfig> > *)(v5 + 304));
                if ( *(_BYTE *)(((v5 + 336) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v5 + 336);
                std::vector<data::ReliquaryAffixExcelConfig>::insert<__gnu_cxx::__normal_iterator<data::ReliquaryAffixExcelConfig const*,std::vector<data::ReliquaryAffixExcelConfig>>,void>(
                  (std::vector<data::ReliquaryAffixExcelConfig> *const)(v5 + 656),
                  *(std::vector<data::ReliquaryAffixExcelConfig>::const_iterator *)(v5 + 336),
                  (__gnu_cxx::__normal_iterator<const data::ReliquaryAffixExcelConfig*,std::vector<data::ReliquaryAffixExcelConfig> >)v29,
                  (__gnu_cxx::__normal_iterator<const data::ReliquaryAffixExcelConfig*,std::vector<data::ReliquaryAffixExcelConfig> >)__last);
                *(_BYTE *)(((v5 + 336) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) = -8;
              }
              std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReliquaryAffixExcelConfig> > > *const)(v5 + 240));
            }
            *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) = -8;
          }
          __for_range_2 = (std::vector<data::ReliquaryAffixExcelConfig> *)(v5 + 656);
          *(_BYTE *)(((v5 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v5 + 496) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v5 + 496, v28);
          *(std::vector<data::ReliquaryAffixExcelConfig>::iterator *)(v5 + 496) = std::vector<data::ReliquaryAffixExcelConfig>::begin(__for_range_2);
          *(_BYTE *)(((v5 + 528) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v5 + 528) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v5 + 528, v28);
          *(std::vector<data::ReliquaryAffixExcelConfig>::iterator *)(v5 + 528) = std::vector<data::ReliquaryAffixExcelConfig>::end(__for_range_2);
          while ( __gnu_cxx::operator!=<data::ReliquaryAffixExcelConfig *,std::vector<data::ReliquaryAffixExcelConfig>>(
                    (const __gnu_cxx::__normal_iterator<data::ReliquaryAffixExcelConfig*,std::vector<data::ReliquaryAffixExcelConfig> > *)(v5 + 496),
                    (const __gnu_cxx::__normal_iterator<data::ReliquaryAffixExcelConfig*,std::vector<data::ReliquaryAffixExcelConfig> > *)(v5 + 528)) )
          {
            append_prop_config = __gnu_cxx::__normal_iterator<data::ReliquaryAffixExcelConfig *,std::vector<data::ReliquaryAffixExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ReliquaryAffixExcelConfig*,std::vector<data::ReliquaryAffixExcelConfig> > *const)(v5 + 496));
            p_prop_type = &append_prop_config->prop_type;
            if ( *(_BYTE *)(((unsigned __int64)p_prop_type >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_prop_type >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(p_prop_type);
            }
            prop_type = append_prop_config->prop_type;
            if ( *(_BYTE *)(((unsigned __int64)&main_prop_config_ptr->prop_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&main_prop_config_ptr->prop_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&main_prop_config_ptr->prop_type);
            }
            if ( prop_type != main_prop_config_ptr->prop_type )
              std::vector<data::ReliquaryAffixExcelConfig>::emplace_back<data::ReliquaryAffixExcelConfig const&>(
                (std::vector<data::ReliquaryAffixExcelConfig> *const)(v5 + 592),
                append_prop_config,
                append_prop_config);
            __gnu_cxx::__normal_iterator<data::ReliquaryAffixExcelConfig *,std::vector<data::ReliquaryAffixExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ReliquaryAffixExcelConfig*,std::vector<data::ReliquaryAffixExcelConfig> > *const)(v5 + 496));
          }
          *(_BYTE *)(((v5 + 496) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v5 + 528) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v5 + 64, v5 + 528);
          *(_DWORD *)(v5 + 64) = 0;
          if ( is_upgrade )
            v33 = 32LL;
          else
            v33 = 28LL;
          if ( common::tools::RandomUtils::weightSelectOne<data::ReliquaryAffixExcelConfig,unsigned int data::ReliquaryAffixExcelConfig::*>(
                 (const std::vector<data::ReliquaryAffixExcelConfig> *)(v5 + 592),
                 (uint32_t *)(v5 + 64),
                 (unsigned int *)v33,
                 0) )
          {
            *(_DWORD *)(((v5 + 976) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 976) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 1007) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 1007) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 976, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 976),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
              "generateAppendPropId",
              174);
            v34 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                    (common::milog::MiLogStream *const)(v5 + 976),
                    (const char (*)[62])"weightSelectOne ReliquaryMainPropExcelConfig failed, item_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v5 + 80));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 976));
            *(_DWORD *)(((v5 + 976) >> 3) + 0x7FFF8000) = -117901064;
            id = 0;
          }
          else
          {
            if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v5 + 64);
            v35 = *(unsigned int *)(v5 + 64);
            if ( v35 < std::vector<data::ReliquaryAffixExcelConfig>::size((const std::vector<data::ReliquaryAffixExcelConfig> *const)(v5 + 592)) )
            {
              if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v5 + 64);
              v40 = std::vector<data::ReliquaryAffixExcelConfig>::operator[](
                      (std::vector<data::ReliquaryAffixExcelConfig> *const)(v5 + 592),
                      *(unsigned int *)(v5 + 64));
              if ( *(_BYTE *)(((unsigned __int64)&v40->id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v40->id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&v40->id);
              }
              id = v40->id;
            }
            else
            {
              *(_DWORD *)(((v5 + 1040) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v5 + 1040) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v5 + 1071) >> 3) + 0x7FFF8000) != 0
                && (char)((v5 + 47) & 7) >= *(_BYTE *)(((v5 + 1071) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v5 + 1040, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v5 + 1040),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
                "generateAppendPropId",
                180);
              v36 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                      (common::milog::MiLogStream *const)(v5 + 1040),
                      (const char (*)[59])"select_idx is greator than main_prop_vec size, select_idx:");
              v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v36,
                      (const unsigned int *)(v5 + 64));
              v38 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v37, (const char (*)[7])" size:");
              *(_BYTE *)(((v5 + 560) >> 3) + 0x7FFF8000) = 0;
              v39 = std::vector<data::ReliquaryAffixExcelConfig>::size((const std::vector<data::ReliquaryAffixExcelConfig> *const)(v5 + 592));
              if ( *(_BYTE *)(((v5 + 560) >> 3) + 0x7FFF8000) )
                v39 = __asan_report_store8(v5 + 560, " size:");
              *(_QWORD *)(v5 + 560) = v39;
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v38,
                (const unsigned __int64 *)(v5 + 560));
              *(_BYTE *)(((v5 + 560) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1040));
              *(_DWORD *)(((v5 + 1040) >> 3) + 0x7FFF8000) = -117901064;
              id = 0;
            }
          }
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v5 + 1104));
        std::vector<data::ReliquaryAffixExcelConfig>::~vector((std::vector<data::ReliquaryAffixExcelConfig> *const)(v5 + 656));
        std::vector<data::ReliquaryAffixExcelConfig>::~vector((std::vector<data::ReliquaryAffixExcelConfig> *const)(v5 + 592));
      }
    }
    else
    {
      if ( *(char *)(((v5 + 784) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 815) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 47) & 7) >= *(_BYTE *)(((v5 + 815) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 784, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 784),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
        "generateAppendPropId",
        101);
      v10 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              (common::milog::MiLogStream *const)(v5 + 784),
              (const char (*)[55])"findReliquaryMainPropExcelConfig failed, main_prop_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 784));
      id = 0;
    }
  }
  else
  {
    if ( *(char *)(((v5 + 720) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 751) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 751) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 720, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 720),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
      "generateAppendPropId",
      94);
    v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           (common::milog::MiLogStream *const)(v5 + 720),
           (const char (*)[42])"findReliquaryExcelConfig failed, item_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 720));
    id = -1;
  }
  if ( v59 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v7 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v7 + 2147450880 - (((_DWORD)v7 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v5 >> 3) + 0x7FFF8090) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    __asan_stack_free_5(v5, 1184LL, v59);
  }
  return id;
};

// Line 188: range 000000001463C756-000000001463CC4A
uint32_t __cdecl ReliquaryExcelConfigMgr::randomPowerUpRate(const ReliquaryExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t result; // eax
  int v6; // eax
  std::vector<data::ReliquaryPowerupExcelConfig>::size_type v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::vector<data::ReliquaryPowerupExcelConfig>::size_type v11; // rax
  data::ReliquaryPowerupExcelConfigVec *p_reliquary_powerup_excel_config_vec; // rcx
  std::vector<data::ReliquaryPowerupExcelConfig>::const_reference v13; // rax
  char v14[272]; // [rsp+10h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 14 select_idx:189 64 8 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReliquaryExcelConfigMgr::randomPowerUpRate;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 0;
  if ( common::tools::RandomUtils::weightSelectOne<data::ReliquaryPowerupExcelConfig,unsigned int data::ReliquaryPowerupExcelConfig::*>(
         &this->reliquary_powerup_excel_config_vec,
         (uint32_t *)(v2 + 48),
         (unsigned int *)0xC,
         0) )
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
      3u,
      "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
      "randomPowerUpRate",
      192);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[51])"weightSelectOne ReliquaryPowerupExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 1;
  }
  else
  {
    v6 = *(unsigned __int8 *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v6 != 0 && (char)v6 <= 3 )
      __asan_report_load4(v2 + 48);
    v7 = *(unsigned int *)(v2 + 48);
    if ( v7 < std::vector<data::ReliquaryPowerupExcelConfig>::size(&this->reliquary_powerup_excel_config_vec) )
    {
      p_reliquary_powerup_excel_config_vec = &this->reliquary_powerup_excel_config_vec;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      v13 = std::vector<data::ReliquaryPowerupExcelConfig>::operator[](
              p_reliquary_powerup_excel_config_vec,
              *(unsigned int *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&v13->powerup_multiple >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v13->powerup_multiple >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v13->powerup_multiple);
      }
      result = v13->powerup_multiple;
    }
    else
    {
      if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
        "randomPowerUpRate",
        198);
      v8 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[57])"select_idx is greator than powerup_vec_size, select_idx:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" size:");
      v11 = std::vector<data::ReliquaryPowerupExcelConfig>::size(&this->reliquary_powerup_excel_config_vec);
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        v11 = __asan_report_store8(v2 + 64, " size:");
      *(_QWORD *)(v2 + 64) = v11;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, (const unsigned __int64 *)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      result = 1;
    }
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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

// Line 206: range 000000001463CC4C-000000001463CF3E
const data::ReliquaryLevelExcelConfig *__fastcall ReliquaryExcelConfigMgr::findReliquaryLevelExcelConfig(
        const ReliquaryExcelConfigMgr *const this,
        __int64 rank_level,
        uint32_t level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::map<unsigned int,data::ReliquaryLevelExcelConfig>> *p_rank_level_config_map; // rdx
  std::map<unsigned int,std::map<unsigned int,data::ReliquaryLevelExcelConfig>> *v7; // rdx
  bool v8; // al
  const data::ReliquaryLevelExcelConfig *result; // rax
  bool v10; // al
  std::map<unsigned int,data::ReliquaryLevelExcelConfig> *level_config_map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 14 rank_level:205 48 4 9 level:205 64 8 13 rank_iter:207 96 8 9 <unknown> 128 8 14 level_"
                        "iter:214 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReliquaryExcelConfigMgr::findReliquaryLevelExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = rank_level;
  *(_DWORD *)(v3 + 48) = level;
  p_rank_level_config_map = &this->rank_level_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, rank_level);
  *(std::map<unsigned int,std::map<unsigned int,data::ReliquaryLevelExcelConfig>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,data::ReliquaryLevelExcelConfig>>::find(p_rank_level_config_map, (const std::map<unsigned int,std::map<unsigned int,data::ReliquaryLevelExcelConfig>>::key_type *)(v3 + 32));
  v7 = &this->rank_level_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::map<unsigned int,data::ReliquaryLevelExcelConfig>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,data::ReliquaryLevelExcelConfig>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReliquaryLevelExcelConfig> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReliquaryLevelExcelConfig> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    level_config_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReliquaryLevelExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReliquaryLevelExcelConfig> > > *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,data::ReliquaryLevelExcelConfig>::const_iterator *)(v3 + 128) = std::map<unsigned int,data::ReliquaryLevelExcelConfig>::find(
                                                                                              level_config_map,
                                                                                              (const std::map<unsigned int,data::ReliquaryLevelExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,data::ReliquaryLevelExcelConfig>::const_iterator *)(v3 + 160) = std::map<unsigned int,data::ReliquaryLevelExcelConfig>::end(level_config_map);
    v10 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReliquaryLevelExcelConfig> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReliquaryLevelExcelConfig> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
      result = 0LL;
    else
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReliquaryLevelExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReliquaryLevelExcelConfig> > *const)(v3 + 128))->second;
  }
  if ( v13 == (char *)v3 )
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

// Line 224: range 000000001463CF40-000000001463D26C
__int64 __fastcall ReliquaryExcelConfigMgr::getTotalExpToLevel(
        const ReliquaryExcelConfigMgr *const this,
        __int64 rank_level,
        uint32_t level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *p_rank_level_total_exp_map; // rdx
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  bool v10; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v11; // rdx
  unsigned int *p_second; // rax
  std::map<unsigned int,unsigned int> *level_total_exp_map; // [rsp+18h] [rbp-E8h]
  char v15[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 14 rank_level:223 48 4 9 level:223 64 8 13 rank_iter:225 96 8 9 <unknown> 128 8 14 level_"
                        "iter:232 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReliquaryExcelConfigMgr::getTotalExpToLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = rank_level;
  *(_DWORD *)(v3 + 48) = level;
  p_rank_level_total_exp_map = &this->rank_level_total_exp_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, rank_level);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                               p_rank_level_total_exp_map,
                                                                                               (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->rank_level_total_exp_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    level_total_exp_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 128) = std::map<unsigned int,unsigned int>::find(
                                                                           level_total_exp_map,
                                                                           (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 160) = std::map<unsigned int,unsigned int>::end(level_total_exp_map);
    v10 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      result = 0LL;
    }
    else
    {
      v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 128));
      p_second = &v11->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      result = v11->second;
    }
  }
  if ( v15 == (char *)v3 )
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

// Line 244: range 000000001463D26E-000000001463D469
uint32_t __fastcall ReliquaryExcelConfigMgr::getSuitActiveNeedEquipTypeNum(
        const ReliquaryExcelConfigMgr *const this,
        __int64 suit_id,
        uint32_t level)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // al
  uint32_t result; // eax
  const std::set<unsigned int> *v8; // rax
  char v10[176]; // [rsp+10h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 11 suit_id:243 48 4 9 level:243 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReliquaryExcelConfigMgr::getSuitActiveNeedEquipTypeNum;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = suit_id;
  *(_DWORD *)(v3 + 48) = level;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, suit_id);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 64) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v3 + 32),
                                                         (unsigned int *)(v3 + 48));
  v6 = common::tools::MiscUtils::isContains<std::map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>> const,std::pair<unsigned int,unsigned int>>(
         &this->reliquary_suit_need_reliquary_num_map,
         (const std::pair<unsigned int,unsigned int> *)(v3 + 64));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( !v6 )
  {
    result = std::numeric_limits<unsigned int>::max();
  }
  else
  {
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 64);
    *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                           (unsigned int *)(v3 + 32),
                                                           (unsigned int *)(v3 + 48));
    v8 = std::map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>>::at(
           &this->reliquary_suit_need_reliquary_num_map,
           (const std::map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>>::key_type *)(v3 + 96));
    result = std::set<unsigned int>::size(v8);
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

// Line 255: range 000000001463D46A-000000001463DAC5
int32_t __cdecl ReliquaryExcelConfigMgr::rewriteReliquaryExcelConfig(
        ReliquaryExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ItemConfig **v6; // r8
  ItemExcelConfigMgr *p_item_config_mgr; // rdi
  uint32_t rank_level; // ecx
  char v9; // dl
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  uint32_t *p_rank_level; // rsi
  uint32_t *v14; // rax
  uint32_t *v15; // rdx
  uint32_t v16; // ecx
  char v17; // al
  unsigned int *v18; // rcx
  unsigned int *p_set_id; // rdx
  __int64 v20; // rsi
  std::set<unsigned int> *p_equip_type; // rdi
  __int64 v22; // rsi
  data::EquipType equip_type; // ecx
  char v24; // al
  int32_t result; // eax
  data::ReliquaryExcelConfigMap *__for_range; // [rsp+20h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,data::ReliquaryExcelConfig> >::type *equip_id; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,data::ReliquaryExcelConfig> >::type *reliquary_config; // [rsp+38h] [rbp-118h]
  char v32[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 9 <unknown> 64 8 15 __for_begin:256 96 8 13 __for_end:256 128 8 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReliquaryExcelConfigMgr::rewriteReliquaryExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -202116109;
  __for_range = &this->reliquary_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReliquaryExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ReliquaryExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReliquaryExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ReliquaryExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ReliquaryExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryExcelConfig>,false> *)(v3 + 96)) )
    {
      v12 = 1;
      goto LABEL_34;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryExcelConfig>,false,false> *const)(v3 + 64));
    equip_id = std::get<0ul,unsigned int const,data::ReliquaryExcelConfig>(__in);
    reliquary_config = std::get<1ul,unsigned int const,data::ReliquaryExcelConfig>(__in);
    p_item_config_mgr = &txt_config_mgr->item_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&reliquary_config->rank_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&reliquary_config->rank_level >> 3) + 0x7FFF8000) <= 3 )
    {
      p_item_config_mgr = (ItemExcelConfigMgr *)&reliquary_config->rank_level;
      __asan_report_load4(&reliquary_config->rank_level);
    }
    rank_level = reliquary_config->rank_level;
    v9 = *(_BYTE *)(((unsigned __int64)equip_id >> 3) + 0x7FFF8000);
    LOBYTE(v6) = v9 != 0;
    if ( v9 != 0 && (char)(((unsigned __int8)equip_id & 7) + 3) >= v9 )
    {
      p_item_config_mgr = (ItemExcelConfigMgr *)equip_id;
      __asan_report_load4(equip_id);
    }
    if ( (unsigned int)ItemExcelConfigMgr::addItemConfig(
                         p_item_config_mgr,
                         *equip_id,
                         (data::ItemConfig *)reliquary_config,
                         rank_level,
                         v6) )
      break;
    p_rank_level = &reliquary_config->rank_level;
    v14 = (uint32_t *)std::max<unsigned int>(&this->max_reliquary_rank, &reliquary_config->rank_level);
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    v16 = *v15;
    v17 = *(_BYTE *)(((unsigned __int64)&this->max_reliquary_rank >> 3) + 0x7FFF8000);
    if ( v17 != 0 && v17 <= 3 )
    {
      LOBYTE(p_rank_level) = v17 != 0;
      __asan_report_store4(&this->max_reliquary_rank, p_rank_level);
    }
    this->max_reliquary_rank = v16;
    if ( *(_BYTE *)(((unsigned __int64)&reliquary_config->set_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&reliquary_config->set_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&reliquary_config->set_id);
    }
    if ( reliquary_config->set_id )
    {
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      v18 = &reliquary_config->rank_level;
      p_set_id = &reliquary_config->set_id;
      v20 = *(unsigned __int8 *)(((v3 + 128) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v20 )
        __asan_report_store8(v3 + 128, v20);
      *(std::pair<unsigned int,unsigned int> *)(v3 + 128) = std::make_pair<unsigned int &,unsigned int &>(p_set_id, v18);
      p_equip_type = std::map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>>::operator[](
                       &this->reliquary_suit_need_reliquary_num_map,
                       (std::map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>>::key_type *)(v3 + 128));
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v22 = (((_BYTE)reliquary_config + 76) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&reliquary_config->equip_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)reliquary_config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reliquary_config->equip_type >> 3)
                                                                        + 0x7FFF8000) )
      {
        p_equip_type = (std::set<unsigned int> *)&reliquary_config->equip_type;
        __asan_report_load4(&reliquary_config->equip_type);
      }
      equip_type = reliquary_config->equip_type;
      v24 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v24 != 0 && v24 <= 3 )
      {
        p_equip_type = (std::set<unsigned int> *)(v3 + 48);
        LOBYTE(v22) = v24 != 0;
        __asan_report_store4(v3 + 48, v22);
      }
      *(_DWORD *)(v3 + 48) = equip_type;
      std::set<unsigned int>::insert(p_equip_type, (std::set<unsigned int>::value_type *)(v3 + 48));
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryExcelConfig>,false,false> *const)(v3 + 64));
  }
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
    "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
    "rewriteReliquaryExcelConfig",
    260);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          v10,
          (const char (*)[32])"addItemConfig failed, equip_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, equip_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v12 = 0;
LABEL_34:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 276: range 000000001463DAC6-000000001463DCDB
int32_t __cdecl ReliquaryExcelConfigMgr::rewriteReliquaryMainPropExcelConfig(
        ReliquaryExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::ReliquaryMainPropExcelConfigMap *__for_range; // [rsp+18h] [rbp-A8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-A0h]
  std::tuple_element<1,std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig> >::type *main_prop_config; // [rsp+30h] [rbp-90h]
  std::map<unsigned int,std::vector<data::ReliquaryMainPropExcelConfig>>::mapped_type *main_prop_config_vec; // [rsp+38h] [rbp-88h]
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false,false> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:277 64 8 13 __for_end:277";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false>::__node_type *)ReliquaryExcelConfigMgr::rewriteReliquaryMainPropExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->reliquary_main_prop_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ReliquaryMainPropExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ReliquaryMainPropExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::ReliquaryMainPropExcelConfig>(__in);
    main_prop_config = std::get<1ul,unsigned int const,data::ReliquaryMainPropExcelConfig>(__in);
    main_prop_config_vec = std::map<unsigned int,std::vector<data::ReliquaryMainPropExcelConfig>>::operator[](
                             &this->main_depot_prop_config_map,
                             &main_prop_config->prop_depot_id);
    std::vector<data::ReliquaryMainPropExcelConfig>::emplace_back<data::ReliquaryMainPropExcelConfig&>(
      main_prop_config_vec,
      main_prop_config,
      main_prop_config);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 287: range 000000001463DCDC-000000001463DF17
int32_t __cdecl ReliquaryExcelConfigMgr::rewriteReliquaryAffixExcelConfig(
        ReliquaryExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryAffixExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::ReliquaryAffixExcelConfigMap *__for_range; // [rsp+10h] [rbp-B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryAffixExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-A8h]
  std::tuple_element<1,std::pair<unsigned int const,data::ReliquaryAffixExcelConfig> >::type *append_prop_config; // [rsp+28h] [rbp-98h]
  std::map<unsigned int,std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>>::mapped_type *append_group_config_map; // [rsp+30h] [rbp-90h]
  std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>::mapped_type *append_config_vec; // [rsp+38h] [rbp-88h]
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryAffixExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryAffixExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryAffixExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryAffixExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:288 64 8 13 __for_end:288";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryAffixExcelConfig>,false>::__node_type *)ReliquaryExcelConfigMgr::rewriteReliquaryAffixExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->reliquary_affix_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ReliquaryAffixExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ReliquaryAffixExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ReliquaryAffixExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryAffixExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::ReliquaryAffixExcelConfig>(__in);
    append_prop_config = std::get<1ul,unsigned int const,data::ReliquaryAffixExcelConfig>(__in);
    append_group_config_map = std::map<unsigned int,std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>>::operator[](
                                &this->append_depot_group_config_map,
                                &append_prop_config->depot_id);
    append_config_vec = std::map<unsigned int,std::vector<data::ReliquaryAffixExcelConfig>>::operator[](
                          append_group_config_map,
                          &append_prop_config->group_id);
    std::vector<data::ReliquaryAffixExcelConfig>::emplace_back<data::ReliquaryAffixExcelConfig&>(
      append_config_vec,
      append_prop_config,
      append_prop_config);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryAffixExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryAffixExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 299: range 000000001463DF18-000000001463E665
int32_t __cdecl ReliquaryExcelConfigMgr::rewriteReliquaryLevelExcelConfig(
        ReliquaryExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_level; // rsi
  data::ReliquaryLevelExcelConfig *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::ReliquaryLevelExcelConfig> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // edx
  char *v14; // rsi
  std::map<unsigned int,unsigned int> *v15; // rdx
  std::tuple_element<0,std::pair<unsigned int const,data::ReliquaryLevelExcelConfig> >::type *v16; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v17; // rax
  uint32_t *v18; // rdx
  char v19; // cl
  int32_t result; // eax
  uint32_t total_exp; // [rsp+14h] [rbp-1ACh]
  data::ReliquaryLevelExcelConfigVec *__for_range; // [rsp+18h] [rbp-1A8h]
  data::ReliquaryLevelExcelConfig *level_config; // [rsp+20h] [rbp-1A0h]
  std::map<unsigned int,std::map<unsigned int,data::ReliquaryLevelExcelConfig>>::mapped_type *level_config_map; // [rsp+28h] [rbp-198h]
  std::map<unsigned int,std::map<unsigned int,data::ReliquaryLevelExcelConfig>> *__for_range_0; // [rsp+30h] [rbp-190h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReliquaryLevelExcelConfig> > >::reference v26; // [rsp+38h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,data::ReliquaryLevelExcelConfig> > >::type *rank; // [rsp+40h] [rbp-180h]
  const std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,data::ReliquaryLevelExcelConfig> > >::type *__for_range_1; // [rsp+50h] [rbp-170h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReliquaryLevelExcelConfig> >::reference v29; // [rsp+58h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,data::ReliquaryLevelExcelConfig> >::type *level; // [rsp+60h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ReliquaryLevelExcelConfig> >::type *level_config_0; // [rsp+68h] [rbp-158h]
  char v32[336]; // [rsp+70h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 15 __for_begin:300 64 8 13 __for_end:300 96 8 15 __for_begin:311 128 8 13 __for_end:311 1"
                        "60 8 15 __for_begin:314 192 8 13 __for_end:314 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReliquaryExcelConfigMgr::rewriteReliquaryLevelExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -202116109;
  __for_range = &this->reliquary_level_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::vector<data::ReliquaryLevelExcelConfig>::iterator *)(v3 + 32) = std::vector<data::ReliquaryLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::ReliquaryLevelExcelConfig>::iterator *)(v3 + 64) = std::vector<data::ReliquaryLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_level = (uint32_t *)(v3 + 64);
    if ( !__gnu_cxx::operator!=<data::ReliquaryLevelExcelConfig *,std::vector<data::ReliquaryLevelExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::ReliquaryLevelExcelConfig*,std::vector<data::ReliquaryLevelExcelConfig> > *)(v3 + 32),
            (const __gnu_cxx::__normal_iterator<data::ReliquaryLevelExcelConfig*,std::vector<data::ReliquaryLevelExcelConfig> > *)(v3 + 64)) )
    {
      v13 = 1;
      goto LABEL_16;
    }
    level_config = __gnu_cxx::__normal_iterator<data::ReliquaryLevelExcelConfig *,std::vector<data::ReliquaryLevelExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ReliquaryLevelExcelConfig*,std::vector<data::ReliquaryLevelExcelConfig> > *const)(v3 + 32));
    level_config_map = std::map<unsigned int,std::map<unsigned int,data::ReliquaryLevelExcelConfig>>::operator[](
                         &this->rank_level_config_map,
                         &level_config->rank);
    v8 = std::map<unsigned int,data::ReliquaryLevelExcelConfig>::emplace<unsigned int &,data::ReliquaryLevelExcelConfig&>(
           level_config_map,
           &level_config->level,
           level_config,
           &level_config->level,
           v7);
    if ( !v8.second )
      break;
    __gnu_cxx::__normal_iterator<data::ReliquaryLevelExcelConfig *,std::vector<data::ReliquaryLevelExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ReliquaryLevelExcelConfig*,std::vector<data::ReliquaryLevelExcelConfig> > *const)(v3 + 32));
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
    "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
    "rewriteReliquaryLevelExcelConfig",
    305);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 224),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          v9,
          (const char (*)[42])"duplicate ReliquaryLevelExcelConfig rank:");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &level_config->rank);
  v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" level:");
  p_level = &level_config->level;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &level_config->level);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v13 = 0;
LABEL_16:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v13 == 1 )
  {
    __for_range_0 = &this->rank_level_config_map;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, p_level);
    *(std::map<unsigned int,std::map<unsigned int,data::ReliquaryLevelExcelConfig>>::iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,data::ReliquaryLevelExcelConfig>>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_level);
    *(std::map<unsigned int,std::map<unsigned int,data::ReliquaryLevelExcelConfig>>::iterator *)(v3 + 128) = std::map<unsigned int,std::map<unsigned int,data::ReliquaryLevelExcelConfig>>::end(__for_range_0);
    while ( 1 )
    {
      v14 = (char *)(v3 + 128);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReliquaryLevelExcelConfig> > >::_Self *)(v3 + 96),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReliquaryLevelExcelConfig> > >::_Self *)(v3 + 128)) )
        break;
      v26 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReliquaryLevelExcelConfig>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReliquaryLevelExcelConfig> > > *const)(v3 + 96));
      rank = std::get<0ul,unsigned int const,std::map<unsigned int,data::ReliquaryLevelExcelConfig>>(v26);
      total_exp = 0;
      __for_range_1 = std::get<1ul,unsigned int const,std::map<unsigned int,data::ReliquaryLevelExcelConfig>>(v26);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v14);
      *(std::map<unsigned int,data::ReliquaryLevelExcelConfig>::const_iterator *)(v3 + 160) = std::map<unsigned int,data::ReliquaryLevelExcelConfig>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v14);
      *(std::map<unsigned int,data::ReliquaryLevelExcelConfig>::const_iterator *)(v3 + 192) = std::map<unsigned int,data::ReliquaryLevelExcelConfig>::end(__for_range_1);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReliquaryLevelExcelConfig> >::_Self *)(v3 + 160),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReliquaryLevelExcelConfig> >::_Self *)(v3 + 192)) )
      {
        v29 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReliquaryLevelExcelConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReliquaryLevelExcelConfig> > *const)(v3 + 160));
        level = std::get<0ul,unsigned int const,data::ReliquaryLevelExcelConfig>(v29);
        level_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::ReliquaryLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ReliquaryLevelExcelConfig>(v29);
        v15 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                &this->rank_level_total_exp_map,
                rank);
        v16 = level;
        v17 = std::map<unsigned int,unsigned int>::operator[](v15, level);
        v18 = v17;
        v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
        if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
        {
          LOBYTE(v16) = v19 != 0;
          __asan_report_store4(v17, v16);
        }
        *v18 = total_exp;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_0->exp >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&level_config_0->exp >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&level_config_0->exp);
        }
        total_exp += level_config_0->exp;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReliquaryLevelExcelConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReliquaryLevelExcelConfig> > *const)(v3 + 160));
      }
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReliquaryLevelExcelConfig>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReliquaryLevelExcelConfig> > > *const)(v3 + 96));
    }
    v2 = 0;
  }
  result = v2;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 324: range 000000001463E666-000000001463F606
int32_t __cdecl ReliquaryExcelConfigMgr::checkReliquarySetExcelConfig(
        const ReliquaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  _BOOL4 v10; // eax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v11; // rax
  _DWORD *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  int v16; // edx
  unsigned __int64 v17; // rax
  unsigned int *M_current; // r15
  std::vector<unsigned int>::iterator v19; // rax
  unsigned int *v20; // r15
  unsigned int *v21; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  int v25; // r15d
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  unsigned __int64 v38; // rdx
  int v39; // eax
  data::ReliquarySetExcelConfigMap *__for_range; // [rsp+28h] [rbp-2F8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquarySetExcelConfig>,false,false>::reference v43; // [rsp+30h] [rbp-2F0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ReliquarySetExcelConfig> >::type *set_id; // [rsp+38h] [rbp-2E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ReliquarySetExcelConfig> >::type *set_config; // [rsp+40h] [rbp-2E0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-2D8h]
  char v47[720]; // [rsp+50h] [rbp-2D0h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 32 8 15 __for_begin:325 64 8 13 __for_end:325 96 8 15 __for_begin:333 128 8 13 __for_end:333 "
                        "160 8 9 <unknown> 192 8 9 <unknown> 224 8 9 <unknown> 256 8 9 <unknown> 288 24 17 need_num_list:"
                        "342 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReliquaryExcelConfigMgr::checkReliquarySetExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
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
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -202116109;
  __for_range = &this->reliquary_set_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReliquarySetExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ReliquarySetExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReliquarySetExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ReliquarySetExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ReliquarySetExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquarySetExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquarySetExcelConfig>,false> *)(v3 + 64)) )
      break;
    v43 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquarySetExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquarySetExcelConfig>,false,false> *const)(v3 + 32));
    set_id = std::get<0ul,unsigned int const,data::ReliquarySetExcelConfig>(v43);
    set_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ReliquarySetExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ReliquarySetExcelConfig>(v43);
    if ( std::vector<unsigned int>::empty(&set_config->set_need_num) )
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
        "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
        "checkReliquarySetExcelConfig",
        329);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])byte_1ADCB0C0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, set_id);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v9, (const char (*)[37])byte_1ADCB100);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    else
    {
      __for_range_0 = &set_config->set_need_num;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v6);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v6);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128)) )
        {
          v16 = 1;
          goto LABEL_28;
        }
        v11 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        if ( !*v12 )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
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
        "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
        "checkReliquarySetExcelConfig",
        337);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v13, (const char (*)[18])byte_1ADCB0C0);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, set_id);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v15, (const char (*)[35])byte_1ADCB160);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v16 = 0;
LABEL_28:
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( v16 == 1 )
      {
        v17 = ((v3 + 288) >> 3) + 2147450880;
        *(_WORD *)v17 = 0;
        *(_BYTE *)(v17 + 2) = 0;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 288), &set_config->set_need_num);
        M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 288))._M_current;
        v19._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 288))._M_current;
        std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
          v19,
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 192, M_current);
        *(std::vector<unsigned int>::iterator *)(v3 + 192) = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 288));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 256),
          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 192));
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        v20 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 288))._M_current;
        v21 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 288))._M_current;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, v3 + 192);
        *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160) = std::unique<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
                                                                                                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v21,
                                                                                                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v20);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224),
          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160));
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v3 + 224);
        if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v3 + 256);
        std::vector<unsigned int>::erase(
          (std::vector<unsigned int> *const)(v3 + 288),
          *(std::vector<unsigned int>::const_iterator *)(v3 + 224),
          *(std::vector<unsigned int>::const_iterator *)(v3 + 256));
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( std::operator!=<unsigned int,std::allocator<unsigned int>>(
               (const std::vector<unsigned int> *)(v3 + 288),
               &set_config->set_need_num) )
        {
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 480, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 480),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
            "checkReliquarySetExcelConfig",
            347);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 480),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v22, (const char (*)[18])byte_1ADCB0C0);
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, set_id);
          common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(v24, (const char (*)[76])byte_1ADCB1C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v25 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&set_config->equip_affix_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&set_config->equip_affix_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&set_config->equip_affix_id);
          }
          if ( set_config->equip_affix_id
            && !EquipAffixExcelConfigMgr::isEquipAffixValid(
                  &txt_config_mgr->equip_affix_config_mgr,
                  set_config->equip_affix_id) )
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
              "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
              "checkReliquarySetExcelConfig",
              355);
            v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 544),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v28 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v27,
                    (const char (*)[18])byte_1ADCB0C0);
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, set_id);
            v30 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    v29,
                    (const char (*)[27])byte_1ADCB240);
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    &set_config->equip_affix_id);
            common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v31, (const char (*)[8])byte_1ADCB280);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v25 = 0;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&set_config->guarantee_depot_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)set_config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&set_config->guarantee_depot_id >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4(&set_config->guarantee_depot_id);
            }
            if ( set_config->guarantee_depot_id <= 2 )
            {
              v25 = 1;
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
                "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
                "checkReliquarySetExcelConfig",
                361);
              v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 608),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v33 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v32,
                      (const char (*)[18])byte_1ADCB0C0);
              v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, set_id);
              v35 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      v34,
                      (const char (*)[31])byte_1ADCB2C0);
              v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v35,
                      &set_config->guarantee_depot_id);
              v37 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                      v36,
                      (const char (*)[23])byte_1ADCB300);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v37,
                &ReliquaryExcelConfigMgr::main_prop_guarantee_depot_num);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
              *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v25 = 0;
            }
          }
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 288));
        v10 = v25 == 1;
      }
      else
      {
        v10 = 0;
      }
    }
    v38 = ((v3 + 288) >> 3) + 2147450880;
    *(_WORD *)v38 = -1800;
    *(_BYTE *)(v38 + 2) = -8;
    if ( !v10 )
    {
      v39 = 0;
      goto LABEL_64;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquarySetExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquarySetExcelConfig>,false,false> *const)(v3 + 32));
  }
  v39 = 1;
LABEL_64:
  if ( v39 == 1 )
    v2 = 0;
  if ( v47 == (char *)v3 )
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

// Line 370: range 000000001463F608-00000000146415E4
int32_t __cdecl ReliquaryExcelConfigMgr::checkReliquaryExcelConfig(
        const ReliquaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  const unsigned int *M_current; // r13
  std::vector<unsigned int>::const_iterator v7; // rax
  unsigned __int64 v8; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r13
  char v10; // r13
  unsigned __int64 v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int v14; // r13d
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  ConstValueExcelConfigMgr *p_const_value_config_mgr; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  std::vector<unsigned int>::size_type v32; // r13
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r13
  std::vector<unsigned int>::size_type v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r13
  std::vector<unsigned int>::size_type v40; // rax
  __int64 v41; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v42; // rax
  int *v43; // rdx
  int v44; // ecx
  char v45; // al
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  __int64 v54; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v55; // rax
  int *v56; // rdx
  int v57; // ecx
  char v58; // al
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  const std::string *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // r13
  const std::string *v64; // rax
  int v65; // eax
  unsigned int v66; // ecx
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  unsigned __int64 v71; // rax
  int v72; // eax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __first; // [rsp+8h] [rbp-548h]
  int32_t v75; // [rsp+28h] [rbp-528h]
  char v76; // [rsp+2Dh] [rbp-523h]
  char v77; // [rsp+2Eh] [rbp-522h]
  int32_t ret; // [rsp+40h] [rbp-510h]
  uint32_t i; // [rsp+44h] [rbp-50Ch]
  data::ReliquaryExcelConfigMap *__for_range; // [rsp+48h] [rbp-508h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryExcelConfig>,false,false>::reference v82; // [rsp+50h] [rbp-500h]
  std::tuple_element<0,std::pair<unsigned int const,data::ReliquaryExcelConfig> >::type *equip_id; // [rsp+58h] [rbp-4F8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ReliquaryExcelConfig> >::type *reliquary_config; // [rsp+60h] [rbp-4F0h]
  data::ItemConfig *item_config_ptr; // [rsp+68h] [rbp-4E8h]
  const data::ConstValueExcelConfig *const_value_conf_ptr; // [rsp+70h] [rbp-4E0h]
  const std::vector<std::string> *const_value_string_vec; // [rsp+78h] [rbp-4D8h]
  char v88[1232]; // [rsp+80h] [rbp-4D0h] BYREF

  v2 = (unsigned __int64)v88;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1184LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "24 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 13 return_id:415 112 4 16 return_coun"
                        "t:434 128 4 16 return_limit:453 144 8 15 __for_begin:372 176 8 13 __for_end:372 208 8 9 <unknown"
                        "> 240 8 9 <unknown> 272 24 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> "
                        "528 32 9 <unknown> 592 32 9 <unknown> 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unknown> 8"
                        "48 32 9 <unknown> 912 32 9 <unknown> 976 32 9 <unknown> 1040 32 9 <unknown> 1104 48 13 level_set:374";
  *(_QWORD *)(v2 + 16) = ReliquaryExcelConfigMgr::checkReliquaryExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = 61956;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862729] = -218959360;
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
  v4[536862749] = -219021312;
  v4[536862750] = 62194;
  v4[536862751] = -219021312;
  v4[536862752] = 62194;
  v4[536862753] = -219021312;
  v4[536862754] = 62194;
  v4[536862756] = -202116109;
  ret = 0;
  __for_range = &this->reliquary_excel_config_map;
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 144, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReliquaryExcelConfig>::const_iterator *)(v2 + 144) = std::unordered_map<unsigned int,data::ReliquaryExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 176, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReliquaryExcelConfig>::const_iterator *)(v2 + 176) = std::unordered_map<unsigned int,data::ReliquaryExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ReliquaryExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryExcelConfig>,false> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryExcelConfig>,false> *)(v2 + 176)) )
  {
    v82 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryExcelConfig>,false,false> *const)(v2 + 144));
    equip_id = std::get<0ul,unsigned int const,data::ReliquaryExcelConfig>(v82);
    reliquary_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ReliquaryExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ReliquaryExcelConfig>(v82);
    v5 = ((v2 + 1104) >> 3) + 2147450880;
    *(_DWORD *)v5 = 0;
    *(_WORD *)(v5 + 4) = 0;
    M_current = std::vector<unsigned int>::begin(&reliquary_config->add_prop_levels)._M_current;
    v7._M_current = std::vector<unsigned int>::end(&reliquary_config->add_prop_levels)._M_current;
    std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      (std::set<unsigned int> *const)(v2 + 1104),
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
      v7);
    v77 = 0;
    v76 = 0;
    v8 = ((v2 + 272) >> 3) + 2147450880;
    *(_WORD *)v8 = 0;
    *(_BYTE *)(v8 + 2) = 0;
    __first = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 1104))._M_node;
    M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 1104))._M_node;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v2 + 48));
    std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
      (std::vector<unsigned int> *const)(v2 + 272),
      (std::_Rb_tree_const_iterator<unsigned int>)__first,
      (std::_Rb_tree_const_iterator<unsigned int>)M_node,
      (const std::vector<unsigned int>::allocator_type *)(v2 + 48));
    if ( std::operator!=<unsigned int,std::allocator<unsigned int>>(
           (const std::vector<unsigned int> *)(v2 + 272),
           &reliquary_config->add_prop_levels) )
    {
      goto LABEL_17;
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 64, &reliquary_config->add_prop_levels);
    *(_DWORD *)(v2 + 64) = 0;
    v77 = 1;
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,int>(
           (std::set<unsigned int> *)(v2 + 1104),
           (const int *)(v2 + 64)) )
    {
      goto LABEL_17;
    }
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 80, v2 + 64);
    *(_DWORD *)(v2 + 80) = 1;
    v76 = 1;
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,int>(
           (std::set<unsigned int> *)(v2 + 1104),
           (const int *)(v2 + 80)) )
    {
LABEL_17:
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    if ( v76 )
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v77 )
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 272));
    v11 = ((v2 + 272) >> 3) + 2147450880;
    *(_WORD *)v11 = -1800;
    *(_BYTE *)(v11 + 2) = -8;
    std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v2 + 48));
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
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
        "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
        "checkReliquaryExcelConfig",
        379);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 336),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v12, (const char (*)[46])byte_1ADCB580);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, equip_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
      *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
      v75 = -1;
      v14 = 0;
    }
    else if ( !common::tools::MiscUtils::isContains<std::set<data::EquipType> const,data::EquipType>(
                 &ReliquaryExcelConfigMgr::reliquary_equip_type_set,
                 &reliquary_config->equip_type) )
    {
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
        "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
        "checkReliquaryExcelConfig",
        384);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 400),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v15, (const char (*)[28])byte_1ADCB5E0);
      v17 = common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(
              v16,
              &reliquary_config->equip_type);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v17, (const char (*)[16])", reliquary_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, equip_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
      *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = -117901064;
      v75 = -1;
      v14 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&reliquary_config->destroy_rule >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&reliquary_config->destroy_rule >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&reliquary_config->destroy_rule);
      }
      if ( !data::isValidMaterialDestroyType(reliquary_config->destroy_rule) )
      {
        *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 464) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 79) & 7) >= *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 464, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 464),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
          "checkReliquaryExcelConfig",
          390);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 464),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])"reliquary_id:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, equip_id);
        v22 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v21, (const char (*)[28])byte_1ADBBB00);
        common::milog::MiLogStream::operator<<<data::MaterialDestroyType,(data::MaterialDestroyType*)0>(
          v22,
          &reliquary_config->destroy_rule);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 464));
        *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&reliquary_config->rank_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&reliquary_config->rank_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&reliquary_config->rank_level);
      }
      if ( !reliquary_config->rank_level )
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
          "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
          "checkReliquaryExcelConfig",
          395);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 528),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])"reliquary_id:");
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, equip_id);
        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v25, (const char (*)[13])" RankLevel=0");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 528));
        *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      p_const_value_config_mgr = &txt_config_mgr->const_value_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&reliquary_config->rank_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&reliquary_config->rank_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&reliquary_config->rank_level);
      }
      if ( !ConstValueExcelConfigMgr::isContainsReliquaryRankLevel(
              p_const_value_config_mgr,
              reliquary_config->rank_level) )
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
          "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
          "checkReliquaryExcelConfig",
          400);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 592),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v27, (const char (*)[14])"reliquary_id:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, equip_id);
        v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v29, (const char (*)[13])" rank_level:");
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &reliquary_config->rank_level);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v31, (const char (*)[32])byte_1ADCB720);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 592));
        *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      v32 = std::vector<unsigned int>::size(&reliquary_config->destroy_return_material);
      if ( v32 == std::vector<unsigned int>::size(&reliquary_config->destroy_return_material_count) )
      {
        for ( i = 0; i < std::vector<unsigned int>::size(&reliquary_config->destroy_return_material); ++i )
        {
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
          v41 = i;
          v42 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&reliquary_config->destroy_return_material, i);
          v43 = (int *)v42;
          if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v42);
          }
          v44 = *v43;
          v45 = *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000);
          if ( v45 != 0 && v45 <= 3 )
          {
            LOBYTE(v41) = v45 != 0;
            __asan_report_store4(v2 + 96, v41);
          }
          *(_DWORD *)(v2 + 96) = v44;
          if ( *(_DWORD *)(v2 + 96) )
          {
            p_material_config_mgr = &txt_config_mgr->material_config_mgr;
            if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 96);
            if ( data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                   p_material_config_mgr,
                   *(unsigned int *)(v2 + 96)) )
            {
              p_item_config_mgr = &txt_config_mgr->item_config_mgr;
              if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 96);
              item_config_ptr = ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, *(unsigned int *)(v2 + 96));
              if ( item_config_ptr )
              {
                *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
                v54 = i;
                v55 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&reliquary_config->destroy_return_material_count, i);
                v56 = (int *)v55;
                if ( *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v55 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v55);
                }
                v57 = *v56;
                v58 = *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000);
                if ( v58 != 0 && v58 <= 3 )
                {
                  LOBYTE(v54) = v58 != 0;
                  __asan_report_store4(v2 + 112, v54);
                }
                *(_DWORD *)(v2 + 112) = v57;
                if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_load4(&item_config_ptr->item_type);
                }
                if ( item_config_ptr->item_type != ITEM_VIRTUAL )
                {
                  const_value_conf_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(
                                           &txt_config_mgr->const_value_config_mgr,
                                           181LL);
                  if ( const_value_conf_ptr )
                  {
                    const_value_string_vec = &const_value_conf_ptr->value;
                    if ( std::vector<std::string>::empty(&const_value_conf_ptr->value) )
                    {
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
                        "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
                        "checkReliquaryExcelConfig",
                        448);
                      v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 912),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                        v60,
                        (const char (*)[69])byte_1ADBBDC0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 912));
                      *(_DWORD *)(((v2 + 912) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                    else
                    {
                      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 4;
                      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_store4(v2 + 128, 181LL);
                      }
                      *(_DWORD *)(v2 + 128) = 0;
                      v61 = std::vector<std::string>::operator[](const_value_string_vec, 0LL);
                      if ( common::tools::StringUtils::strToNum<unsigned int>(v61, (unsigned int *)(v2 + 128), 1) )
                      {
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
                          "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
                          "checkReliquaryExcelConfig",
                          456);
                        v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 976),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v63 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                                v62,
                                (const char (*)[78])byte_1ADBBE40);
                        v64 = std::vector<std::string>::operator[](const_value_string_vec, 0LL);
                        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v63, v64);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 976));
                        *(_DWORD *)(((v2 + 976) >> 3) + 0x7FFF8000) = -117901064;
                        ret = -1;
                      }
                      else
                      {
                        v65 = *(unsigned __int8 *)(((v2 + 112) >> 3) + 0x7FFF8000);
                        if ( (_BYTE)v65 != 0 && (char)v65 <= 3 )
                          __asan_report_load4(v2 + 112);
                        v66 = *(_DWORD *)(v2 + 112);
                        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4(v2 + 128);
                        }
                        if ( v66 > *(_DWORD *)(v2 + 128) )
                        {
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
                            "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
                            "checkReliquaryExcelConfig",
                            463);
                          v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 1040),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v68 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                  v67,
                                  (const char (*)[11])"return_id:");
                          v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v68,
                                  (const unsigned int *)(v2 + 96));
                          v70 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                                  v69,
                                  (const char (*)[52])byte_1ADBBEC0);
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v70,
                            (const unsigned int *)(v2 + 112));
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1040));
                          *(_DWORD *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -117901064;
                          ret = -1;
                        }
                      }
                    }
                  }
                  else
                  {
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
                      "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
                      "checkReliquaryExcelConfig",
                      440);
                    v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 848),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                      v59,
                      (const char (*)[66])byte_1ADBBD40);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 848));
                    *(_DWORD *)(((v2 + 848) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
                }
              }
              else
              {
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
                  "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
                  "checkReliquaryExcelConfig",
                  429);
                v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 784),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v52 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v51,
                        (const char (*)[11])"return_id:");
                v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v52,
                        (const unsigned int *)(v2 + 96));
                common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v53, (const char (*)[10])byte_1ADBBD00);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 784));
                *(_DWORD *)(((v2 + 784) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
            else
            {
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
                "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
                "checkReliquaryExcelConfig",
                421);
              v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 720),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v48 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v47,
                      (const char (*)[11])"return_id:");
              v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v48,
                      (const unsigned int *)(v2 + 96));
              common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v49, (const char (*)[13])byte_1ADBBCC0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 720));
              *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        }
      }
      else
      {
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
          "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
          "checkReliquaryExcelConfig",
          406);
        v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 656),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v34 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v33, (const char (*)[14])"reliquary_id:");
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, equip_id);
        v36 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(v35, (const char (*)[80])byte_1ADBBBC0);
        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
        v37 = std::vector<unsigned int>::size(&reliquary_config->destroy_return_material);
        if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
          v37 = __asan_report_store8(v2 + 208, byte_1ADBBBC0);
        *(_QWORD *)(v2 + 208) = v37;
        v38 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v36,
                (const unsigned __int64 *)(v2 + 208));
        v39 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v38, (const char (*)[30])byte_1ADBBC40);
        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
        v40 = std::vector<unsigned int>::size(&reliquary_config->destroy_return_material_count);
        if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
          v40 = __asan_report_store8(v2 + 240, byte_1ADBBC40);
        *(_QWORD *)(v2 + 240) = v40;
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v39,
          (const unsigned __int64 *)(v2 + 240));
        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 656));
        *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      v14 = 1;
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 1104));
    v71 = ((v2 + 1104) >> 3) + 2147450880;
    *(_DWORD *)v71 = -117901064;
    *(_WORD *)(v71 + 4) = -1800;
    if ( v14 != 1 )
    {
      v72 = 0;
      goto LABEL_112;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryExcelConfig>,false,false> *const)(v2 + 144));
  }
  v72 = 1;
LABEL_112:
  if ( v72 == 1 )
    v75 = ret;
  if ( v88 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF808C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 148) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1184LL, v88);
  }
  return v75;
};

// Line 476: range 00000000146415E6-0000000014641E57
int32_t __cdecl ReliquaryExcelConfigMgr::rewriteReliquaryMainPropGuaranteeExcelConfig(
        ReliquaryExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ReliquaryExcelConfigMgr *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  __int64 v8; // rsi
  uint32_t prop_depot_id; // ecx
  char v10; // dl
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  std::vector<float>::reference v16; // rax
  float *v17; // rdx
  __int64 v18; // rsi
  std::vector<float>::reference v19; // rax
  float *v20; // rdx
  int v21; // edi
  int32_t result; // eax
  float base_guarantee_count; // [rsp+Ch] [rbp-144h]
  float v24; // [rsp+Ch] [rbp-144h]
  int32_t ret; // [rsp+24h] [rbp-12Ch]
  data::ReliquaryMainPropGuaranteeExcelConfigMap *__for_range; // [rsp+28h] [rbp-128h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-120h]
  const unsigned int *main_prop_id; // [rsp+38h] [rbp-118h]
  std::tuple_element<1,std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig> >::type *guarantee_config; // [rsp+40h] [rbp-110h]
  data::ReliquaryMainPropExcelConfig *main_prop_config_ptr; // [rsp+48h] [rbp-108h]
  char v32[256]; // [rsp+50h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:478 64 8 13 __for_end:478 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReliquaryExcelConfigMgr::rewriteReliquaryMainPropGuaranteeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->reliquary_main_prop_guarantee_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReliquaryMainPropGuaranteeExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ReliquaryMainPropGuaranteeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReliquaryMainPropGuaranteeExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ReliquaryMainPropGuaranteeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false,false> *const)(v2 + 32));
    main_prop_id = std::get<0ul,unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>(__in);
    guarantee_config = std::get<1ul,unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>(__in);
    v5 = this;
    if ( *(_BYTE *)(((unsigned __int64)main_prop_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)main_prop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)main_prop_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(main_prop_id);
    }
    main_prop_config_ptr = data::ReliquaryExcelConfigMgrBase::findReliquaryMainPropExcelConfig(v5, *main_prop_id);
    if ( main_prop_config_ptr )
    {
      v8 = (((_BYTE)main_prop_config_ptr + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&main_prop_config_ptr->prop_depot_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)main_prop_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&main_prop_config_ptr->prop_depot_id >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&main_prop_config_ptr->prop_depot_id);
      }
      prop_depot_id = main_prop_config_ptr->prop_depot_id;
      v10 = *(_BYTE *)(((unsigned __int64)&guarantee_config->main_prop_depot_id >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)((((_BYTE)guarantee_config + 12) & 7) + 3) >= v10 )
      {
        LOBYTE(v8) = v10 != 0;
        __asan_report_store4(&guarantee_config->main_prop_depot_id, v8);
      }
      guarantee_config->main_prop_depot_id = prop_depot_id;
      std::unordered_set<unsigned int>::insert(
        &this->guaranteed_main_prop_depot_id_set,
        &guarantee_config->main_prop_depot_id);
      if ( std::vector<float>::size(&guarantee_config->base_guarantee_count_range) == 2 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&guarantee_config->base_guarantee_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)guarantee_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&guarantee_config->base_guarantee_count >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&guarantee_config->base_guarantee_count);
        }
        base_guarantee_count = (float)(int)guarantee_config->base_guarantee_count;
        v16 = std::vector<float>::operator[](&guarantee_config->base_guarantee_count_range, 0LL);
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        v18 = (unsigned int)(int)std::ceil(*v17 * base_guarantee_count);
        if ( *(_BYTE *)(((unsigned __int64)&guarantee_config->min_guarantee_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&guarantee_config->min_guarantee_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&guarantee_config->min_guarantee_count, v18);
        }
        guarantee_config->min_guarantee_count = v18;
        if ( *(_BYTE *)(((unsigned __int64)&guarantee_config->base_guarantee_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)guarantee_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&guarantee_config->base_guarantee_count >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&guarantee_config->base_guarantee_count);
        }
        v24 = (float)(int)guarantee_config->base_guarantee_count;
        v19 = std::vector<float>::operator[](&guarantee_config->base_guarantee_count_range, 1uLL);
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        v21 = (int)std::ceil(*v20 * v24);
        if ( *(_BYTE *)(((unsigned __int64)&guarantee_config->max_guarantee_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)guarantee_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&guarantee_config->max_guarantee_count >> 3)
                                                                          + 0x7FFF8000) )
        {
          v21 = (_DWORD)guarantee_config + 52;
          __asan_report_store4(&guarantee_config->max_guarantee_count, (((_BYTE)guarantee_config + 52) & 7u) + 3);
        }
        guarantee_config->max_guarantee_count = v21;
      }
      else
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
          "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
          "rewriteReliquaryMainPropGuaranteeExcelConfig",
          491);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                v11,
                (const char (*)[44])"base_guarantee_count_range's size is not 2!");
        v13 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                v12,
                (const char (*)[29])" base_guarantee_count_range:");
        v14 = common::milog::MiLogStream::operator<<<float>(v13, &guarantee_config->base_guarantee_count_range);
        v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])" main_prop_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, main_prop_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
        "rewriteReliquaryMainPropGuaranteeExcelConfig",
        483);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             v6,
             (const char (*)[53])"findReliquaryMainPropExcelConfig fail, main_prop_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, main_prop_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v32 == (char *)v2 )
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

// Line 504: range 0000000014641E58-0000000014643E84
int32_t __cdecl ReliquaryExcelConfigMgr::checkReliquaryMainPropGuaranteeExcelConfig(
        const ReliquaryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char v6; // al
  std::set<unsigned int> *v7; // rdx
  std::unordered_map<unsigned int,float>::mapped_type *v8; // rax
  float v9; // xmm1_4
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  const ReliquaryExcelConfigMgr *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  data::FightPropType fight_prop_type; // ecx
  uint32_t main_prop_depot_id; // ecx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  __int64 v19; // rsi
  uint32_t v20; // ecx
  char v21; // al
  std::set<unsigned int> *v22; // rdx
  std::set<data::FightPropType> *v23; // rax
  std::pair<std::_Rb_tree_const_iterator<data::FightPropType>,bool> v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  uint32_t min_guarantee_count; // ecx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  uint32_t max_guarantee_count; // ecx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  float weight; // xmm0_4
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rdx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  int v50; // xmm0_4
  __m128i v51; // xmm0
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  unsigned __int64 v60; // rax
  data::ReliquaryMainPropGuaranteeExcelConfigMap *p_reliquary_main_prop_guarantee_excel_config_map; // rsi
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  int32_t v67; // r14d
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  int32_t ret; // [rsp+18h] [rbp-648h]
  float expect_base_guarantee_count; // [rsp+1Ch] [rbp-644h]
  data::ReliquaryMainPropExcelConfigMap *__for_range; // [rsp+20h] [rbp-640h]
  data::ReliquaryMainPropGuaranteeExcelConfigMap *__for_range_0; // [rsp+28h] [rbp-638h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false,false>::reference v78; // [rsp+30h] [rbp-630h]
  std::tuple_element<0,std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig> >::type *main_prop_id_0; // [rsp+38h] [rbp-628h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig> >::type *guarantee_config; // [rsp+40h] [rbp-620h]
  const data::ReliquaryMainPropExcelConfig *main_prop_config_ptr; // [rsp+48h] [rbp-618h]
  common::tools::transcribe_cv_t_3 *depot_total_weight_ptr; // [rsp+50h] [rbp-610h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false,false>::reference v83; // [rsp+58h] [rbp-608h]
  std::tuple_element<0,std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig> >::type *main_prop_id; // [rsp+60h] [rbp-600h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig> >::type *main_prop_config; // [rsp+68h] [rbp-5F8h]
  char v86[1520]; // [rsp+70h] [rbp-5F0h] BYREF

  v2 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1472LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "24 48 4 22 main_prop_depot_id:537 64 4 15 prop_weight:569 80 4 22 depot_total_weight:583 96 8 15"
                        " __for_begin:509 128 8 13 __for_end:509 160 8 15 __for_begin:521 192 8 13 __for_end:521 224 32 9"
                        " <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 "
                        "<unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <"
                        "unknown> 928 48 35 all_guaranteed_main_prop_id_set:506 1008 48 37 config_guarantee_main_prop_id_"
                        "set:593 1088 56 35 guaranteed_main_prop_id_set_map:507 1184 56 41 guaranteed_main_prop_total_wei"
                        "ght_map:508 1280 56 41 config_guarantee_main_prop_id_set_map:518 1376 56 26 config_depot_props_map:519";
  *(_QWORD *)(v2 + 16) = ReliquaryExcelConfigMgr::checkReliquaryMainPropGuaranteeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
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
  v4[536862750] = -219021312;
  v4[536862751] = 62194;
  v4[536862753] = -218959118;
  v4[536862755] = -234881024;
  v4[536862756] = -218959118;
  v4[536862758] = -234881024;
  v4[536862759] = -218959118;
  v4[536862761] = -234881024;
  v4[536862762] = -218959118;
  v4[536862764] = -218103808;
  v4[536862765] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 928));
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v2 + 1088));
  std::unordered_map<unsigned int,float>::unordered_map((std::unordered_map<unsigned int,float> *const)(v2 + 1184));
  __for_range = &this->reliquary_main_prop_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReliquaryMainPropExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ReliquaryMainPropExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReliquaryMainPropExcelConfig>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::ReliquaryMainPropExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false> *)(v2 + 128)) )
      break;
    v83 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false,false> *const)(v2 + 96));
    main_prop_id = std::get<0ul,unsigned int const,data::ReliquaryMainPropExcelConfig>(v83);
    main_prop_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ReliquaryMainPropExcelConfig>(v83);
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
            &this->guaranteed_main_prop_depot_id_set,
            &main_prop_config->prop_depot_id) )
      goto LABEL_15;
    if ( *(_BYTE *)(((unsigned __int64)&main_prop_config->weight >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)main_prop_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&main_prop_config->weight >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&main_prop_config->weight);
    }
    if ( main_prop_config->weight )
      v6 = 1;
    else
LABEL_15:
      v6 = 0;
    if ( v6 )
    {
      std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 928), main_prop_id);
      v7 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
             (std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v2 + 1088),
             &main_prop_config->prop_depot_id);
      std::set<unsigned int>::insert(v7, main_prop_id);
      v8 = std::unordered_map<unsigned int,float>::operator[](
             (std::unordered_map<unsigned int,float> *const)(v2 + 1184),
             &main_prop_config->prop_depot_id);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v9 = *v8;
      if ( *(_BYTE *)(((unsigned __int64)&main_prop_config->weight >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)main_prop_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&main_prop_config->weight >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&main_prop_config->weight);
      }
      *v8 = (float)(int)main_prop_config->weight + v9;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryMainPropExcelConfig>,false,false> *const)(v2 + 96));
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  v10 = ((v2 + 1280) >> 3) + 2147450880;
  *(_DWORD *)v10 = 0;
  *(_WORD *)(v10 + 4) = 0;
  *(_BYTE *)(v10 + 6) = 0;
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v2 + 1280));
  v11 = ((v2 + 1376) >> 3) + 2147450880;
  *(_DWORD *)v11 = 0;
  *(_WORD *)(v11 + 4) = 0;
  *(_BYTE *)(v11 + 6) = 0;
  std::unordered_map<unsigned int,std::set<data::FightPropType>>::unordered_map((std::unordered_map<unsigned int,std::set<data::FightPropType>> *const)(v2 + 1376));
  ret = 0;
  __for_range_0 = &this->reliquary_main_prop_guarantee_excel_config_map;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v5);
  *(std::unordered_map<unsigned int,data::ReliquaryMainPropGuaranteeExcelConfig>::const_iterator *)(v2 + 160) = std::unordered_map<unsigned int,data::ReliquaryMainPropGuaranteeExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, v5);
  *(std::unordered_map<unsigned int,data::ReliquaryMainPropGuaranteeExcelConfig>::const_iterator *)(v2 + 192) = std::unordered_map<unsigned int,data::ReliquaryMainPropGuaranteeExcelConfig>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false> *)(v2 + 192)) )
  {
    v78 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false,false> *const)(v2 + 160));
    main_prop_id_0 = std::get<0ul,unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>(v78);
    guarantee_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>(v78);
    v12 = this;
    if ( *(_BYTE *)(((unsigned __int64)main_prop_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)main_prop_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)main_prop_id_0 >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(main_prop_id_0);
    }
    main_prop_config_ptr = data::ReliquaryExcelConfigMgrBase::findReliquaryMainPropExcelConfig(v12, *main_prop_id_0);
    if ( main_prop_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&guarantee_config->fight_prop_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&guarantee_config->fight_prop_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&guarantee_config->fight_prop_type);
      }
      fight_prop_type = guarantee_config->fight_prop_type;
      if ( *(_BYTE *)(((unsigned __int64)&main_prop_config_ptr->prop_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&main_prop_config_ptr->prop_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&main_prop_config_ptr->prop_type);
      }
      if ( fight_prop_type != main_prop_config_ptr->prop_type )
        goto LABEL_45;
      if ( *(_BYTE *)(((unsigned __int64)&guarantee_config->main_prop_depot_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)guarantee_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&guarantee_config->main_prop_depot_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&guarantee_config->main_prop_depot_id);
      }
      main_prop_depot_id = guarantee_config->main_prop_depot_id;
      if ( *(_BYTE *)(((unsigned __int64)&main_prop_config_ptr->prop_depot_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)main_prop_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&main_prop_config_ptr->prop_depot_id >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&main_prop_config_ptr->prop_depot_id);
      }
      if ( main_prop_depot_id == main_prop_config_ptr->prop_depot_id )
      {
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v19 = (((_BYTE)guarantee_config + 12) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&guarantee_config->main_prop_depot_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)guarantee_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&guarantee_config->main_prop_depot_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&guarantee_config->main_prop_depot_id);
        }
        v20 = guarantee_config->main_prop_depot_id;
        v21 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v21 != 0 && v21 <= 3 )
        {
          LOBYTE(v19) = v21 != 0;
          __asan_report_store4(v2 + 48, v19);
        }
        *(_DWORD *)(v2 + 48) = v20;
        v22 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                (std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v2 + 1280),
                (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
        std::set<unsigned int>::insert(v22, main_prop_id_0);
        v23 = std::unordered_map<unsigned int,std::set<data::FightPropType>>::operator[](
                (std::unordered_map<unsigned int,std::set<data::FightPropType>> *const)(v2 + 1376),
                (const std::unordered_map<unsigned int,std::set<data::FightPropType>>::key_type *)(v2 + 48));
        v24 = std::set<data::FightPropType>::insert(v23, &guarantee_config->fight_prop_type);
        if ( !v24.second )
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
            "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
            "checkReliquaryMainPropGuaranteeExcelConfig",
            542);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  v25,
                  (const char (*)[47])"duplicate fight_prop_type! main_prop_depot_id:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v2 + 48));
          v28 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v27,
                  (const char (*)[15])" main_prop_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, main_prop_id_0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
          *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&guarantee_config->base_guarantee_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)guarantee_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&guarantee_config->base_guarantee_count >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&guarantee_config->base_guarantee_count);
          }
          if ( guarantee_config->base_guarantee_count )
          {
            if ( *(_BYTE *)(((unsigned __int64)&guarantee_config->min_guarantee_count >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&guarantee_config->min_guarantee_count >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&guarantee_config->min_guarantee_count);
            }
            min_guarantee_count = guarantee_config->min_guarantee_count;
            if ( *(_BYTE *)(((unsigned __int64)&guarantee_config->base_guarantee_count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)guarantee_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&guarantee_config->base_guarantee_count >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&guarantee_config->base_guarantee_count);
            }
            if ( min_guarantee_count >= guarantee_config->base_guarantee_count )
            {
              if ( *(_BYTE *)(((unsigned __int64)&guarantee_config->max_guarantee_count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)guarantee_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&guarantee_config->max_guarantee_count >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_load4(&guarantee_config->max_guarantee_count);
              }
              max_guarantee_count = guarantee_config->max_guarantee_count;
              if ( *(_BYTE *)(((unsigned __int64)&guarantee_config->min_guarantee_count >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&guarantee_config->min_guarantee_count >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&guarantee_config->min_guarantee_count);
              }
              if ( max_guarantee_count >= guarantee_config->min_guarantee_count )
              {
                *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
                if ( *(_BYTE *)(((unsigned __int64)&main_prop_config_ptr->weight >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)main_prop_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&main_prop_config_ptr->weight >> 3)
                                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4(&main_prop_config_ptr->weight);
                }
                weight = (float)(int)main_prop_config_ptr->weight;
                if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v2 + 64, (((_BYTE)main_prop_config_ptr + 20) & 7u) + 3);
                *(float *)(v2 + 64) = weight;
                if ( *(float *)(v2 + 64) == 0.0 )
                {
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
                    "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
                    "checkReliquaryMainPropGuaranteeExcelConfig",
                    572);
                  v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 608),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v45 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                          v44,
                          (const char (*)[39])"main_prop's weight is 0! main_prop_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, main_prop_id_0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
                  *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
                else
                {
                  depot_total_weight_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,float>>(
                                             (std::unordered_map<unsigned int,float> *)(v2 + 1184),
                                             (const std::unordered_map<unsigned int,float>::key_type *)(v2 + 48));
                  if ( depot_total_weight_ptr )
                  {
                    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
                    if ( *(_BYTE *)(((unsigned __int64)depot_total_weight_ptr >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)depot_total_weight_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)depot_total_weight_ptr >> 3)
                                                                                               + 0x7FFF8000) )
                    {
                      __asan_report_load4(depot_total_weight_ptr);
                    }
                    v50 = *(_DWORD *)depot_total_weight_ptr;
                    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(v2 + 80, ((unsigned __int8)depot_total_weight_ptr & 7u) + 3);
                    }
                    *(_DWORD *)(v2 + 80) = v50;
                    v51 = (__m128i)0x40A00000u;
                    *(float *)v51.m128i_i32 = 5.0 * *(float *)(v2 + 80);
                    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      *(double *)v51.m128i_i64 = __asan_report_load4(v2 + 64);
                    }
                    *(float *)v51.m128i_i32 = std::ceil(*(float *)v51.m128i_i32 / *(float *)(v2 + 64));
                    expect_base_guarantee_count = COERCE_FLOAT(_mm_cvtsi128_si32(v51));
                    if ( *(_BYTE *)(((unsigned __int64)&guarantee_config->base_guarantee_count >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)guarantee_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&guarantee_config->base_guarantee_count >> 3)
                                                                                      + 0x7FFF8000) )
                    {
                      __asan_report_load4(&guarantee_config->base_guarantee_count);
                    }
                    if ( (float)(int)guarantee_config->base_guarantee_count != expect_base_guarantee_count )
                    {
                      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 736, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 736),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
                        "checkReliquaryMainPropGuaranteeExcelConfig",
                        587);
                      v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 736),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v53 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                              v52,
                              (const char (*)[46])"base_guarantee_count not match! main_prop_id:");
                      v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, main_prop_id_0);
                      v55 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                              v54,
                              (const char (*)[21])" main_prop_depot_id:");
                      v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v55,
                              (const unsigned int *)(v2 + 48));
                      v57 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                              v56,
                              (const char (*)[21])" depot_total_weight:");
                      v58 = common::milog::MiLogStream::operator<<<float,(float *)0>(v57, (const float *)(v2 + 80));
                      v59 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                              v58,
                              (const char (*)[14])" prop_weight:");
                      common::milog::MiLogStream::operator<<<float,(float *)0>(v59, (const float *)(v2 + 64));
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
                      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 672, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 672),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
                      "checkReliquaryMainPropGuaranteeExcelConfig",
                      579);
                    v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 672),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v47 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                            v46,
                            (const char (*)[49])"main_prop_depot_id not guaranteed! main_prop_id:");
                    v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, main_prop_id_0);
                    v49 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                            v48,
                            (const char (*)[21])" main_prop_depot_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v49,
                      (const unsigned int *)(v2 + 48));
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
                    *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                }
              }
              else
              {
                *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 544, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 544),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
                  "checkReliquaryMainPropGuaranteeExcelConfig",
                  563);
                v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 544),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v38 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                        v37,
                        (const char (*)[29])"invalid min_guarantee_count:");
                v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v38,
                        &guarantee_config->min_guarantee_count);
                v40 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        v39,
                        (const char (*)[22])" max_guarantee_count:");
                v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v40,
                        &guarantee_config->max_guarantee_count);
                v42 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v41,
                        (const char (*)[15])" main_prop_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, main_prop_id_0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
                *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
            else
            {
              *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 480, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 480),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
                "checkReliquaryMainPropGuaranteeExcelConfig",
                556);
              v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v33 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      v32,
                      (const char (*)[29])"invalid min_guarantee_count:");
              v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v33,
                      &guarantee_config->min_guarantee_count);
              v35 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v34,
                      (const char (*)[15])" main_prop_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, main_prop_id_0);
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
              && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 416, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 416),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
              "checkReliquaryMainPropGuaranteeExcelConfig",
              550);
            v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 416),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v30 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    v29,
                    (const char (*)[41])"base_guarantee_count is 0! main_prop_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, main_prop_id_0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
            *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
      }
      else
      {
LABEL_45:
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
          "checkReliquaryMainPropGuaranteeExcelConfig",
          533);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                v17,
                (const char (*)[63])"fight_prop_type or main_prop_depot_id not match! main_prop_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, main_prop_id_0);
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
        && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
        "checkReliquaryMainPropGuaranteeExcelConfig",
        526);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              v13,
              (const char (*)[53])"findReliquaryMainPropExcelConfig fail, main_prop_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, main_prop_id_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false,false> *const)(v2 + 160));
  }
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
  v60 = ((v2 + 1008) >> 3) + 2147450880;
  *(_DWORD *)v60 = 0;
  *(_WORD *)(v60 + 4) = 0;
  p_reliquary_main_prop_guarantee_excel_config_map = &this->reliquary_main_prop_guarantee_excel_config_map;
  if ( *(char *)(((v2 + 1008) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
  {
    p_reliquary_main_prop_guarantee_excel_config_map = (data::ReliquaryMainPropGuaranteeExcelConfigMap *)48;
    __asan_report_store_n(v2 + 1008, 48LL);
  }
  common::tools::MiscUtils::getAllMapKeysSet<std::unordered_map<unsigned int,data::ReliquaryMainPropGuaranteeExcelConfig>>(
    (std::set<unsigned int> *)(v2 + 1008),
    p_reliquary_main_prop_guarantee_excel_config_map);
  if ( std::operator!=<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
         (const std::set<unsigned int> *)(v2 + 928),
         (const std::set<unsigned int> *)(v2 + 1008)) )
  {
    *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 800, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 800),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
      "checkReliquaryMainPropGuaranteeExcelConfig",
      596);
    v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 800),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v63 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            v62,
            (const char (*)[43])"all_guaranteed_main_prop_id_set not match!");
    v64 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            v63,
            (const char (*)[36])" config_guarantee_main_prop_id_set:");
    v65 = common::milog::MiLogStream::operator<<<unsigned int>(v64, (const std::set<unsigned int> *)(v2 + 1008));
    v66 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            v65,
            (const char (*)[34])" all_guaranteed_main_prop_id_set:");
    common::milog::MiLogStream::operator<<<unsigned int>(v66, (const std::set<unsigned int> *)(v2 + 928));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
    *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
    v67 = -1;
  }
  else if ( std::operator!=<unsigned int,std::set<unsigned int>,std::hash<unsigned int>,std::equal_to<unsigned int>,std::allocator<std::pair<unsigned int const,std::set<unsigned int>>>>(
              (const std::unordered_map<unsigned int,std::set<unsigned int>> *)(v2 + 1088),
              (const std::unordered_map<unsigned int,std::set<unsigned int>> *)(v2 + 1280)) )
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
      "./src/txt_data_manual/ReliquaryExcelConfig.cpp",
      "checkReliquaryMainPropGuaranteeExcelConfig",
      603);
    v68 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 864),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v69 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            v68,
            (const char (*)[43])"guaranteed_main_prop_id_set_map not match!");
    v70 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            v69,
            (const char (*)[34])" guaranteed_main_prop_id_set_map:");
    v71 = common::milog::MiLogStream::operator<<<unsigned int,std::set<unsigned int>>(
            v70,
            (const std::unordered_map<unsigned int,std::set<unsigned int>> *)(v2 + 1088));
    v72 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            v71,
            (const char (*)[40])" config_guarantee_main_prop_id_set_map:");
    common::milog::MiLogStream::operator<<<unsigned int,std::set<unsigned int>>(
      v72,
      (const std::unordered_map<unsigned int,std::set<unsigned int>> *)(v2 + 1280));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
    *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
    v67 = -1;
  }
  else
  {
    v67 = ret;
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 1008));
  std::unordered_map<unsigned int,std::set<data::FightPropType>>::~unordered_map((std::unordered_map<unsigned int,std::set<data::FightPropType>> *const)(v2 + 1376));
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v2 + 1280));
  std::unordered_map<unsigned int,float>::~unordered_map((std::unordered_map<unsigned int,float> *const)(v2 + 1184));
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v2 + 1088));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 928));
  if ( v86 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 116) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8084) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A4) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B0) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1472LL, v86);
  }
  return v67;
};
