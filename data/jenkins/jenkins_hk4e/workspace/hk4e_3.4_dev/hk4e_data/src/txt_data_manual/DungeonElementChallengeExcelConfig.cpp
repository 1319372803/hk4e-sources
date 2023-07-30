// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/DungeonElementChallengeExcelConfig.cpp

// Line 22: range 0000000013A946AA-0000000013A9488D
int32_t __cdecl DungeonElementChallengeExcelConfigMgr::rewriteConfig(
        DungeonElementChallengeExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = DungeonElementChallengeExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( DungeonElementChallengeExcelConfigMgr::rewriteDungeonElementChallengeConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/DungeonElementChallengeExcelConfig.cpp",
      "rewriteConfig",
      25);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v5,
      (const char (*)[44])"rewriteDungeonElementChallengeConfig failed");
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

// Line 32: range 0000000013A9488E-0000000013A94A71
int32_t __cdecl DungeonElementChallengeExcelConfigMgr::checkConfig(
        DungeonElementChallengeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = DungeonElementChallengeExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( DungeonElementChallengeExcelConfigMgr::checkDungeonElementChallengeConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/DungeonElementChallengeExcelConfig.cpp",
      "checkConfig",
      35);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])"checkConfig failed");
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

// Line 42: range 0000000013A94A72-0000000013A94EC4
int32_t __cdecl DungeonElementChallengeExcelConfigMgr::rewriteDungeonElementChallengeConfig(
        DungeonElementChallengeExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  unsigned __int64 v9; // rax
  std::vector<unsigned int> *v10; // rax
  unsigned __int64 v11; // rax
  int32_t result; // eax
  data::DungeonElementChallengeExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonElementChallengeExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DungeonElementChallengeExcelConfig> >::type *config; // [rsp+28h] [rbp-118h]
  char v16[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 14 __for_begin:43 64 8 12 __for_end:43 96 24 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DungeonElementChallengeExcelConfigMgr::rewriteDungeonElementChallengeConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->dungeon_element_challenge_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonElementChallengeExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::DungeonElementChallengeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonElementChallengeExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::DungeonElementChallengeExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DungeonElementChallengeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonElementChallengeExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonElementChallengeExcelConfig>,false> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonElementChallengeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonElementChallengeExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::DungeonElementChallengeExcelConfig>(v14);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::DungeonElementChallengeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DungeonElementChallengeExcelConfig>(v14);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<unsigned int>>,unsigned int>(
           &this->dungeon_id_to_trial_map,
           &config->dungeon_id) )
    {
      break;
    }
    v9 = ((v3 + 96) >> 3) + 2147450880;
    *(_WORD *)v9 = 0;
    *(_BYTE *)(v9 + 2) = 0;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96), &config->trial_avatar_id);
    v10 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
            &this->dungeon_id_to_trial_map,
            &config->dungeon_id);
    std::vector<unsigned int>::operator=(v10, (std::vector<unsigned int> *)(v3 + 96));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
    v11 = ((v3 + 96) >> 3) + 2147450880;
    *(_WORD *)v11 = -1800;
    *(_BYTE *)(v11 + 2) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonElementChallengeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonElementChallengeExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/DungeonElementChallengeExcelConfig.cpp",
    "rewriteDungeonElementChallengeConfig",
    47);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 160),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v6, (const char (*)[48])byte_1AC6A540);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->dungeon_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v8 = 0;
LABEL_16:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 56: range 0000000013A94EC6-0000000013A95767
int32_t __cdecl DungeonElementChallengeExcelConfigMgr::checkDungeonElementChallengeConfig(
        DungeonElementChallengeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  char *v13; // rsi
  unsigned int *v14; // rax
  int *v15; // rdx
  int v16; // ecx
  char v17; // al
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int v22; // edx
  int32_t result; // eax
  std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range; // [rsp+18h] [rbp-1D8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::reference v26; // [rsp+20h] [rbp-1D0h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *dungeon_id; // [rsp+28h] [rbp-1C8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *trial_vec; // [rsp+30h] [rbp-1C0h]
  char v29[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 11 trial_id:69 64 8 14 __for_begin:57 96 8 12 __for_end:57 128 8 14 __for_begin:69 160 8 "
                        "12 __for_end:69 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DungeonElementChallengeExcelConfigMgr::checkDungeonElementChallengeConfig;
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
  __for_range = &this->dungeon_id_to_trial_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 96)) )
    {
      v10 = 1;
      goto LABEL_40;
    }
    v26 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
    dungeon_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v26);
    trial_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v26);
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dungeon_id);
    }
    v7 = *dungeon_id;
    if ( !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, v7) )
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
        "./src/txt_data_manual/DungeonElementChallengeExcelConfig.cpp",
        "checkDungeonElementChallengeConfig",
        61);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v8, (const char (*)[36])byte_1AC6A6C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      v2 = -1;
      v10 = 0;
      goto LABEL_40;
    }
    if ( std::vector<unsigned int>::empty(trial_vec) )
      break;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v7);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(trial_vec);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v7);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(trial_vec);
    while ( 1 )
    {
      v13 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v22 = 1;
        goto LABEL_36;
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
      if ( !data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
              &txt_config_mgr->trial_avatar_config_mgr,
              *(unsigned int *)(v3 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
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
      "./src/txt_data_manual/DungeonElementChallengeExcelConfig.cpp",
      "checkDungeonElementChallengeConfig",
      73);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v19 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v18, (const char (*)[51])byte_1AC6A780);
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, dungeon_id);
    v21 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v20, (const char (*)[21])byte_1AC6A7E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v22 = 0;
LABEL_36:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v22 != 1 )
    {
      v10 = 0;
      goto LABEL_40;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/DungeonElementChallengeExcelConfig.cpp",
    "checkDungeonElementChallengeConfig",
    66);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 256),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v12 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v11, (const char (*)[57])byte_1AC6A720);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, dungeon_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  v2 = -1;
  v10 = 0;
LABEL_40:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v29 == (char *)v3 )
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
