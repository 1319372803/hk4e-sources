// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/FishExcelConfig.cpp

// Line 20: range 00000000143FB8F0-00000000143FBB35
int32_t __cdecl FishExcelConfigMgr::checkConfig(FishExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = FishExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( FishExcelConfigMgr::checkFishConfig(this, txt_config_mgr)
    || FishExcelConfigMgr::checkFishPoolConfig(this, txt_config_mgr)
    || FishExcelConfigMgr::checkFishStockConfig(this, txt_config_mgr)
    || FishExcelConfigMgr::checkFishBaitConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/FishExcelConfig.cpp",
      "checkConfig",
      26);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v6, (const char (*)[28])byte_1AD68860);
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

// Line 33: range 00000000143FBB36-00000000143FC4D1
int32_t __cdecl FishExcelConfigMgr::checkFishConfig(FishExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  uint32_t *p_monster_id; // rax
  __int64 monster_id; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  char *v21; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v22; // rax
  int *v23; // rdx
  int v24; // ecx
  char v25; // al
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // edx
  int32_t result; // eax
  data::FishExcelConfigMap *__for_range; // [rsp+18h] [rbp-1D8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-1D0h]
  const unsigned int *id; // [rsp+28h] [rbp-1C8h]
  std::tuple_element<1,std::pair<unsigned int const,data::FishExcelConfig> >::type *fish_config; // [rsp+30h] [rbp-1C0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1B8h]
  char v39[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 10 drop_id:48 64 8 14 __for_begin:34 96 8 12 __for_end:34 128 8 14 __for_begin:48 160 8 1"
                        "2 __for_end:48 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = FishExcelConfigMgr::checkFishConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -202116109;
  __for_range = &this->fish_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FishExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FishExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FishExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::FishExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FishExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FishExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FishExcelConfig>,false> *)(v3 + 96)) )
    {
      v14 = 1;
      goto LABEL_46;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::FishExcelConfig>(__in);
    fish_config = std::get<1ul,unsigned int const,data::FishExcelConfig>(__in);
    p_monster_config_mgr = &txt_config_mgr->monster_config_mgr;
    p_monster_id = &fish_config->monster_id;
    if ( *(_BYTE *)(((unsigned __int64)p_monster_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_monster_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_monster_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_monster_id);
    }
    monster_id = fish_config->monster_id;
    if ( !data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(p_monster_config_mgr, monster_id) )
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
        4u,
        "./src/txt_data_manual/FishExcelConfig.cpp",
        "checkFishConfig",
        38);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])"fish_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" monster_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &fish_config->monster_id);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v13, (const char (*)[18])" config not found");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      v2 = -1;
      v14 = 0;
      goto LABEL_46;
    }
    if ( *(_BYTE *)(((unsigned __int64)&fish_config->reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&fish_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&fish_config->reward_id);
    }
    if ( fish_config->reward_id )
    {
      monster_id = fish_config->reward_id;
      if ( !data::RewardExcelConfigMgrBase::findRewardExcelConfig(&txt_config_mgr->reward_config_mgr, monster_id) )
        break;
    }
    __for_range_0 = &fish_config->drop_id_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, monster_id);
    *(std::vector<unsigned int>::iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, monster_id);
    *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v21 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v31 = 1;
        goto LABEL_42;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v22 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
      v23 = (int *)v22;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v22);
      }
      v24 = *v23;
      v25 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v25 != 0 && v25 <= 3 )
      {
        LOBYTE(v21) = v25 != 0;
        __asan_report_store4(v3 + 48, v21);
      }
      *(_DWORD *)(v3 + 48) = v24;
      if ( !data::DropExcelConfigMgrBase::findDropExcelConfig(
              &txt_config_mgr->drop_config_mgr,
              *(unsigned int *)(v3 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
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
      "./src/txt_data_manual/FishExcelConfig.cpp",
      "checkFishConfig",
      52);
    v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])"fish_id:");
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, id);
    v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])" drop_id:");
    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v30, (const char (*)[18])" config not found");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v31 = 0;
LABEL_42:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v31 != 1 )
    {
      v14 = 0;
      goto LABEL_46;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishExcelConfig>,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/FishExcelConfig.cpp",
    "checkFishConfig",
    44);
  v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 256),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])"fish_id:");
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id);
  v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" reward_id:");
  v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &fish_config->reward_id);
  common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v20, (const char (*)[18])" config not found");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  v2 = -1;
  v14 = 0;
LABEL_46:
  if ( v14 == 1 )
    v2 = 0;
  result = v2;
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
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

// Line 61: range 00000000143FC4D2-00000000143FD19E
int32_t __cdecl FishExcelConfigMgr::checkFishPoolConfig(
        FishExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  const char *v7; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  int v18; // eax
  const char *v19; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v20; // rax
  int *v21; // rdx
  int v22; // ecx
  char v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // edx
  FishExcelConfigMgr *v30; // rcx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  int v36; // edx
  int32_t result; // eax
  data::FishPoolExcelConfigMap *__for_range; // [rsp+10h] [rbp-280h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishPoolExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-278h]
  const unsigned int *id; // [rsp+20h] [rbp-270h]
  std::tuple_element<1,std::pair<unsigned int const,data::FishPoolExcelConfig> >::type *pool_config; // [rsp+28h] [rbp-268h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-260h]
  std::vector<unsigned int> *__for_range_1; // [rsp+38h] [rbp-258h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+40h] [rbp-250h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v46; // [rsp+48h] [rbp-248h]
  const unsigned int *stock_id; // [rsp+50h] [rbp-240h]
  char v48[560]; // [rsp+60h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 4 10 drop_id:65 48 4 11 stock_id:74 64 8 14 __for_begin:62 96 8 12 __for_end:62 128 8 14 _"
                        "_for_begin:65 160 8 12 __for_end:65 192 8 14 __for_begin:74 224 8 12 __for_end:74 256 8 14 __for"
                        "_begin:83 288 8 12 __for_end:83 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = FishExcelConfigMgr::checkFishPoolConfig;
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
  v5[536862735] = -202116109;
  __for_range = &this->fish_pool_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FishPoolExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FishPoolExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FishPoolExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::FishPoolExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FishPoolExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FishPoolExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FishPoolExcelConfig>,false> *)(v3 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishPoolExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishPoolExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::FishPoolExcelConfig>(__in);
    pool_config = std::get<1ul,unsigned int const,data::FishPoolExcelConfig>(__in);
    __for_range_0 = &pool_config->drop_id_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<unsigned int>::iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (const char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v17 = 1;
        goto LABEL_26;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v7) = v11 != 0;
        __asan_report_store4(v3 + 32, v7);
      }
      *(_DWORD *)(v3 + 32) = v10;
      if ( !data::DropExcelConfigMgrBase::findDropExcelConfig(
              &txt_config_mgr->drop_config_mgr,
              *(unsigned int *)(v3 + 32)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
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
      "./src/txt_data_manual/FishExcelConfig.cpp",
      "checkFishPoolConfig",
      69);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])"fish_pool_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
    v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" drop_id:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
    v7 = " config not found";
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v16, (const char (*)[18])" config not found");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v17 = 0;
LABEL_26:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v18 = 0;
      goto LABEL_64;
    }
    __for_range_1 = &pool_config->stock_list;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v7);
    *(std::vector<unsigned int>::iterator *)(v3 + 192) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v7);
    *(std::vector<unsigned int>::iterator *)(v3 + 224) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v19 = (const char *)(v3 + 224);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 192),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 224)) )
      {
        v29 = 1;
        goto LABEL_44;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v20 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 192));
      v21 = (int *)v20;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v20);
      }
      v22 = *v21;
      v23 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v23 != 0 && v23 <= 3 )
      {
        LOBYTE(v19) = v23 != 0;
        __asan_report_store4(v3 + 48, v19);
      }
      *(_DWORD *)(v3 + 48) = v22;
      if ( !data::FishExcelConfigMgrBase::findFishStockExcelConfig(this, *(unsigned int *)(v3 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 192));
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
      "./src/txt_data_manual/FishExcelConfig.cpp",
      "checkFishPoolConfig",
      78);
    v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 384),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v24, (const char (*)[14])"fish_pool_id:");
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
    v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])" stock_id:");
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 48));
    v19 = " not found";
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])" not found");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
    *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v29 = 0;
LABEL_44:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v29 != 1 )
    {
      v18 = 0;
      goto LABEL_64;
    }
    __for_range_2 = &pool_config->stock_guarantee;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v19);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 256) = std::map<unsigned int,unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v19);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 288) = std::map<unsigned int,unsigned int>::end(__for_range_2);
    while ( 1 )
    {
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 256),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 288)) )
      {
        v36 = 1;
        goto LABEL_60;
      }
      v46 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 256));
      stock_id = std::get<0ul,unsigned int const,unsigned int>(v46);
      std::get<1ul,unsigned int const,unsigned int>(v46);
      v30 = this;
      if ( *(_BYTE *)(((unsigned __int64)stock_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stock_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stock_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(stock_id);
      }
      if ( !data::FishExcelConfigMgrBase::findFishStockExcelConfig(v30, *stock_id) )
        break;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 256));
    }
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
      "./src/txt_data_manual/FishExcelConfig.cpp",
      "checkFishPoolConfig",
      87);
    v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 448),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v32 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v31, (const char (*)[14])"fish_pool_id:");
    v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, id);
    v34 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v33, (const char (*)[11])" stock_id:");
    v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, stock_id);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v35, (const char (*)[11])" not found");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
    *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v36 = 0;
LABEL_60:
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    if ( v36 != 1 )
    {
      v18 = 0;
      goto LABEL_64;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishPoolExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishPoolExcelConfig>,false,false> *const)(v3 + 64));
  }
  v18 = 1;
LABEL_64:
  if ( v18 == 1 )
    v2 = 0;
  result = v2;
  if ( v48 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
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
  }
  return result;
};

// Line 96: range 00000000143FD1A0-00000000143FD701
int32_t __cdecl FishExcelConfigMgr::checkFishStockConfig(
        FishExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  FishExcelConfigMgr *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  int v13; // edx
  int v14; // eax
  int32_t result; // eax
  data::FishStockExcelConfigMap *__for_range; // [rsp+10h] [rbp-150h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishStockExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-148h]
  const unsigned int *id; // [rsp+20h] [rbp-140h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+30h] [rbp-130h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v20; // [rsp+38h] [rbp-128h]
  const unsigned int *fish_id; // [rsp+40h] [rbp-120h]
  char v22[272]; // [rsp+50h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 14 __for_begin:97 64 8 12 __for_end:97 96 8 14 __for_begin:99 128 8 12 __for_end:99 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = FishExcelConfigMgr::checkFishStockConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -202116109;
  __for_range = &this->fish_stock_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FishStockExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::FishStockExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FishStockExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FishStockExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FishStockExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FishStockExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FishStockExcelConfig>,false> *)(v3 + 64)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishStockExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishStockExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::FishStockExcelConfig>(__in);
    __for_range_0 = &std::get<1ul,unsigned int const,data::FishStockExcelConfig>(__in)->fish_weight;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 128) = std::map<unsigned int,unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 128)) )
      {
        v13 = 1;
        goto LABEL_24;
      }
      v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 96));
      fish_id = std::get<0ul,unsigned int const,unsigned int>(v20);
      std::get<1ul,unsigned int const,unsigned int>(v20);
      v7 = this;
      if ( *(_BYTE *)(((unsigned __int64)fish_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)fish_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fish_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(fish_id);
      }
      if ( !data::FishExcelConfigMgrBase::findFishExcelConfig(v7, *fish_id) )
        break;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 96));
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
      "./src/txt_data_manual/FishExcelConfig.cpp",
      "checkFishStockConfig",
      103);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])"fish_stock_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
    v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" fish_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, fish_id);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])byte_1AD68E40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v13 = 0;
LABEL_24:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v13 != 1 )
    {
      v14 = 0;
      goto LABEL_28;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishStockExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishStockExcelConfig>,false,false> *const)(v3 + 32));
  }
  v14 = 1;
LABEL_28:
  if ( v14 == 1 )
    v2 = 0;
  result = v2;
  if ( v22 == (char *)v3 )
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

// Line 112: range 00000000143FD702-00000000143FDA93
int32_t __cdecl FishExcelConfigMgr::checkFishBaitConfig(
        FishExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  int32_t result; // eax
  data::FishBaitExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishBaitExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-E8h]
  uint32_t *id; // [rsp+20h] [rbp-E0h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:113 64 8 13 __for_end:113 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = FishExcelConfigMgr::checkFishBaitConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->fish_bait_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FishBaitExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::FishBaitExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FishBaitExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FishBaitExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FishBaitExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FishBaitExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FishBaitExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_18;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishBaitExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishBaitExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::FishBaitExcelConfig>(__in);
    std::get<1ul,unsigned int const,data::FishBaitExcelConfig>(__in);
    p_item_config_mgr = &txt_config_mgr->item_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, *id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishBaitExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishBaitExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/FishExcelConfig.cpp",
    "checkFishBaitConfig",
    117);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])byte_1AD68F20);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
  common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])byte_1AD68F60);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_18:
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

// Line 125: range 00000000143FDA94-00000000143FDAEF
int32_t __cdecl FishExcelConfigMgr::rewriteConfig(FishExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  if ( FishExcelConfigMgr::rewriteFishBaitConfig(this, txt_config_mgr)
    || FishExcelConfigMgr::rewriteFishDataConfig(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 135: range 00000000143FDAF0-00000000143FDE9E
int32_t __cdecl FishExcelConfigMgr::rewriteFishBaitConfig(FishExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::FishBaitFeature *v5; // rdx
  int32_t result; // eax
  data::FishBaitExcelConfigMap *__for_range; // [rsp+18h] [rbp-F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishBaitExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-F0h]
  const std::map<unsigned int,std::map<unsigned int,data::FishBaitFeature>>::key_type *id; // [rsp+28h] [rbp-E8h]
  std::tuple_element<1,std::pair<unsigned int const,data::FishBaitExcelConfig> >::type *bait_config; // [rsp+30h] [rbp-E0h]
  std::map<unsigned int,std::map<unsigned int,data::FishBaitFeature>>::mapped_type *feature_map; // [rsp+38h] [rbp-D8h]
  std::vector<data::FishBaitFeature> *__for_range_0; // [rsp+40h] [rbp-D0h]
  data::FishBaitFeature *feature; // [rsp+48h] [rbp-C8h]
  char v14[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:136 64 8 13 __for_end:136 96 8 15 __for_begin:139 128 8 13 __for_end:139";
  *(_QWORD *)(v2 + 16) = FishExcelConfigMgr::rewriteFishBaitConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  __for_range = &this->fish_bait_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FishBaitExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::FishBaitExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FishBaitExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FishBaitExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FishBaitExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FishBaitExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FishBaitExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishBaitExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishBaitExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::FishBaitExcelConfig>(__in);
    bait_config = std::get<1ul,unsigned int const,data::FishBaitExcelConfig>(__in);
    feature_map = std::map<unsigned int,std::map<unsigned int,data::FishBaitFeature>>::operator[](
                    &this->bait_feature_map_,
                    id);
    __for_range_0 = &bait_config->feature_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, id);
    *(std::vector<data::FishBaitFeature>::iterator *)(v2 + 96) = std::vector<data::FishBaitFeature>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, id);
    *(std::vector<data::FishBaitFeature>::iterator *)(v2 + 128) = std::vector<data::FishBaitFeature>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::FishBaitFeature *,std::vector<data::FishBaitFeature>>(
              (const __gnu_cxx::__normal_iterator<data::FishBaitFeature*,std::vector<data::FishBaitFeature> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<data::FishBaitFeature*,std::vector<data::FishBaitFeature> > *)(v2 + 128)) )
    {
      feature = __gnu_cxx::__normal_iterator<data::FishBaitFeature *,std::vector<data::FishBaitFeature>>::operator*((const __gnu_cxx::__normal_iterator<data::FishBaitFeature*,std::vector<data::FishBaitFeature> > *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&feature->feature_tag >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&feature->feature_tag >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&feature->feature_tag);
      }
      if ( feature->feature_tag )
      {
        v5 = std::map<unsigned int,data::FishBaitFeature>::operator[](feature_map, &feature->feature_tag);
        data::FishBaitFeature::operator=(v5, feature);
      }
      __gnu_cxx::__normal_iterator<data::FishBaitFeature *,std::vector<data::FishBaitFeature>>::operator++((__gnu_cxx::__normal_iterator<data::FishBaitFeature*,std::vector<data::FishBaitFeature> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishBaitExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishBaitExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
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

// Line 152: range 00000000143FDEA0-00000000143FE294
int32_t __cdecl FishExcelConfigMgr::rewriteFishDataConfig(FishExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  uint32_t monster_id; // esi
  std::unordered_set<unsigned int> *v7; // rax
  unsigned __int64 v8; // rax
  int32_t result; // eax
  data::FishExcelConfigMap *__for_range; // [rsp+10h] [rbp-100h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-F8h]
  std::tuple_element<1,std::pair<unsigned int const,data::FishExcelConfig> >::type *fish_config; // [rsp+28h] [rbp-E8h]
  char v14[224]; // [rsp+30h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:153 64 8 13 __for_end:153 96 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = FishExcelConfigMgr::rewriteFishDataConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  __for_range = &this->fish_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FishExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::FishExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FishExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FishExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FishExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FishExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FishExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::FishExcelConfig>(__in);
    fish_config = std::get<1ul,unsigned int const,data::FishExcelConfig>(__in);
    v5 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v5 = 0;
    *(_WORD *)(v5 + 4) = 0;
    *(_BYTE *)(v5 + 6) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&fish_config->monster_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)fish_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_config->monster_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&fish_config->monster_id);
    }
    monster_id = fish_config->monster_id;
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 151) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 105) & 7) >= *(_BYTE *)(((v2 + 151) >> 3) + 0x7FFF8000) )
    {
      monster_id = 56;
      __asan_report_store_n(v2 + 96, 56LL);
    }
    TxtConfigMgr::getMonsterFeatures((std::unordered_set<unsigned int> *)(v2 + 96), txt_config_mgr, monster_id);
    v7 = std::map<unsigned int,std::unordered_set<unsigned int>>::operator[](&this->fish_feature_map_, &fish_config->id);
    std::unordered_set<unsigned int>::operator=(v7, (std::unordered_set<unsigned int> *)(v2 + 96));
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 96));
    v8 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&fish_config->fish_cate_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&fish_config->fish_cate_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&fish_config->fish_cate_id);
    }
    if ( fish_config->fish_cate_id )
      std::set<unsigned int>::insert(&this->furniture_fish_set_, &fish_config->id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FishExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
  if ( v14 == (char *)v2 )
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

// Line 165: range 00000000143FE296-00000000143FE457
const std::unordered_set<unsigned int> *__fastcall FishExcelConfigMgr::findFishFeatureSet(
        const FishExcelConfigMgr *const this,
        __int64 fish_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::unordered_set<unsigned int>> *p_fish_feature_map; // rdx
  std::map<unsigned int,std::unordered_set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::unordered_set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 fish_id:164 64 8 8 iter:166 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = FishExcelConfigMgr::findFishFeatureSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = fish_id;
  p_fish_feature_map = &this->fish_feature_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, fish_id);
  *(std::map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::unordered_set<unsigned int>>::find(
                                                                                            p_fish_feature_map,
                                                                                            (const std::map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->fish_feature_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::unordered_set<unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > > *const)(v2 + 64))->second;
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

// Line 175: range 00000000143FE458-00000000143FEB29
const data::FishBaitFeature *__fastcall FishExcelConfigMgr::findFishBaitFeature(
        const FishExcelConfigMgr *const this,
        __int64 bait_id,
        uint32_t fish_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::map<unsigned int,data::FishBaitFeature>> *p_bait_feature_map; // rdx
  std::map<unsigned int,std::map<unsigned int,data::FishBaitFeature>> *v7; // rdx
  bool v8; // al
  const data::FishBaitFeature *result; // rax
  std::map<unsigned int,std::unordered_set<unsigned int>> *p_fish_feature_map; // rdx
  std::map<unsigned int,std::unordered_set<unsigned int>> *v11; // rdx
  char *v12; // rsi
  bool v13; // al
  bool v14; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FishBaitFeature> >::pointer v15; // rdx
  float *p_weight; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FishBaitFeature> >::pointer v17; // rdx
  float *v18; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FishBaitFeature> >::pointer v19; // rdx
  float *v20; // rax
  float min_weight; // [rsp+1Ch] [rbp-194h]
  data::FishBaitFeature *fish_bait_feature_ptr; // [rsp+20h] [rbp-190h]
  data::FishBaitFeature *only_attract_feature_ptr; // [rsp+28h] [rbp-188h]
  std::unordered_set<unsigned int> *feature_set; // [rsp+30h] [rbp-180h]
  std::map<unsigned int,data::FishBaitFeature> *feature_map; // [rsp+38h] [rbp-178h]
  const unsigned int *feature_tag; // [rsp+48h] [rbp-168h]
  char v28[352]; // [rsp+50h] [rbp-160h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 4 11 bait_id:174 48 4 11 fish_id:174 64 8 8 iter:176 96 8 9 <unknown> 128 8 16 feature_ite"
                        "r:181 160 8 9 <unknown> 192 8 15 __for_begin:191 224 8 13 __for_end:191 256 8 12 tag_iter:193 288 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = FishExcelConfigMgr::findFishBaitFeature;
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
  v5[536862729] = -202116352;
  *(_DWORD *)(v3 + 32) = bait_id;
  *(_DWORD *)(v3 + 48) = fish_id;
  p_bait_feature_map = &this->bait_feature_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, bait_id);
  *(std::map<unsigned int,std::map<unsigned int,data::FishBaitFeature>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,data::FishBaitFeature>>::find(p_bait_feature_map, (const std::map<unsigned int,std::map<unsigned int,data::FishBaitFeature>>::key_type *)(v3 + 32));
  v7 = &this->bait_feature_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::map<unsigned int,data::FishBaitFeature>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,data::FishBaitFeature>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::FishBaitFeature> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::FishBaitFeature> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_fish_feature_map = &this->fish_feature_map_;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 128) = std::map<unsigned int,std::unordered_set<unsigned int>>::find(
                                                                                               p_fish_feature_map,
                                                                                               (const std::map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v11 = &this->fish_feature_map_;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 160) = std::map<unsigned int,std::unordered_set<unsigned int>>::end(v11);
    v12 = (char *)(v3 + 160);
    v13 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v13 )
    {
      result = 0LL;
    }
    else
    {
      feature_set = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > > *const)(v3 + 128))->second;
      feature_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::FishBaitFeature>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::FishBaitFeature> > > *const)(v3 + 64))->second;
      fish_bait_feature_ptr = 0LL;
      only_attract_feature_ptr = 0LL;
      min_weight = 3.4028235e38;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v12);
      *(std::unordered_set<unsigned int>::const_iterator *)(v3 + 192) = std::unordered_set<unsigned int>::begin(feature_set);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v12);
      *(std::unordered_set<unsigned int>::const_iterator *)(v3 + 224) = std::unordered_set<unsigned int>::end(feature_set);
      while ( std::__detail::operator!=<unsigned int,false>(
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 192),
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 224)) )
      {
        feature_tag = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)(v3 + 192));
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 256, v3 + 224);
        *(std::map<unsigned int,data::FishBaitFeature>::const_iterator *)(v3 + 256) = std::map<unsigned int,data::FishBaitFeature>::find(
                                                                                        feature_map,
                                                                                        feature_tag);
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 288, feature_tag);
        *(std::map<unsigned int,data::FishBaitFeature>::const_iterator *)(v3 + 288) = std::map<unsigned int,data::FishBaitFeature>::end(feature_map);
        v14 = std::operator==(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FishBaitFeature> >::_Self *)(v3 + 256),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FishBaitFeature> >::_Self *)(v3 + 288));
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
        if ( !v14 )
        {
          v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FishBaitFeature>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FishBaitFeature> > *const)(v3 + 256));
          p_weight = &v15->second.weight;
          if ( *(_BYTE *)(((unsigned __int64)p_weight >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_weight >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_weight);
          }
          if ( v15->second.weight == 0.0 )
          {
            only_attract_feature_ptr = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FishBaitFeature>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FishBaitFeature> > *const)(v3 + 256))->second;
          }
          else
          {
            v17 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FishBaitFeature>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FishBaitFeature> > *const)(v3 + 256));
            v18 = &v17->second.weight;
            if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v18);
            }
            if ( v17->second.weight < min_weight )
            {
              v19 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FishBaitFeature>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FishBaitFeature> > *const)(v3 + 256));
              v20 = &v19->second.weight;
              if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v20);
              }
              min_weight = v19->second.weight;
              fish_bait_feature_ptr = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FishBaitFeature>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FishBaitFeature> > *const)(v3 + 256))->second;
            }
          }
        }
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
        std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)(v3 + 192));
      }
      if ( fish_bait_feature_ptr )
        result = fish_bait_feature_ptr;
      else
        result = only_attract_feature_ptr;
    }
  }
  if ( v28 == (char *)v3 )
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

// Line 218: range 00000000143FEB2A-00000000143FED6F
const data::FishStockLimit *__cdecl FishExcelConfigMgr::findFishStockLimitConfig(
        const FishExcelConfigMgr *const this,
        uint32_t pool_id,
        data::FishStockType stock_type)
{
  const data::FishStockLimit *v3; // r14
  __gnu_cxx::__normal_iterator<const data::FishStockLimit*,std::vector<data::FishStockLimit> > *v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  int v7; // eax
  const data::FishStockLimit *result; // rax
  const data::FishPoolExcelConfig *pool_config_ptr; // [rsp+18h] [rbp-A8h]
  const std::vector<data::FishStockLimit> *__for_range; // [rsp+20h] [rbp-A0h]
  const data::FishStockLimit *limit_config; // [rsp+28h] [rbp-98h]
  char v13[144]; // [rsp+30h] [rbp-90h] BYREF

  v4 = (__gnu_cxx::__normal_iterator<const data::FishStockLimit*,std::vector<data::FishStockLimit> > *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = (__gnu_cxx::__normal_iterator<const data::FishStockLimit*,std::vector<data::FishStockLimit> > *)v5;
  }
  v4->_M_current = (const data::FishStockLimit *)1102416563;
  v4[1]._M_current = (const data::FishStockLimit *)"2 32 8 15 __for_begin:224 64 8 13 __for_end:224";
  v4[2]._M_current = (const data::FishStockLimit *)FishExcelConfigMgr::findFishStockLimitConfig;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  pool_config_ptr = data::FishExcelConfigMgrBase::findFishPoolExcelConfig(this, pool_id);
  if ( pool_config_ptr )
  {
    __for_range = &pool_config_ptr->stock_limit_list;
    if ( *(_BYTE *)(((unsigned __int64)&v4[4] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v4[4], pool_id);
    v4[4]._M_current = std::vector<data::FishStockLimit>::begin(__for_range)._M_current;
    if ( *(_BYTE *)(((unsigned __int64)&v4[8] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v4[8], pool_id);
    v4[8]._M_current = std::vector<data::FishStockLimit>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<data::FishStockLimit const*,std::vector<data::FishStockLimit>>(v4 + 4, v4 + 8) )
    {
      limit_config = __gnu_cxx::__normal_iterator<data::FishStockLimit const*,std::vector<data::FishStockLimit>>::operator*(v4 + 4);
      if ( *(_BYTE *)(((unsigned __int64)&limit_config->stock_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&limit_config->stock_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&limit_config->stock_type);
      }
      if ( stock_type == limit_config->stock_type )
      {
        v3 = limit_config;
        v7 = 0;
        goto LABEL_18;
      }
      __gnu_cxx::__normal_iterator<data::FishStockLimit const*,std::vector<data::FishStockLimit>>::operator++(v4 + 4);
    }
    v7 = 1;
LABEL_18:
    if ( v7 == 1 )
      v3 = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  result = v3;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v4->_M_current = (const data::FishStockLimit *)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 235: range 00000000143FED70-00000000143FEE47
bool __fastcall FishExcelConfigMgr::isFurnitureFish(const FishExcelConfigMgr *const this, uint32_t fish_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 fish_id:234";
  *(_QWORD *)(v2 + 16) = FishExcelConfigMgr::isFurnitureFish;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = fish_id;
  result = std::set<unsigned int>::count(
             &this->furniture_fish_set_,
             (const std::set<unsigned int>::key_type *)(v2 + 32)) != 0;
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
