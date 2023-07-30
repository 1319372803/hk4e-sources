// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityEchoShellExcelConfig.cpp

// Line 20: range 0000000012AFD682-0000000012AFD88D
int32_t __cdecl ActivityEchoShellExcelConfigMgr::rewriteConfig(
        ActivityEchoShellExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = ActivityEchoShellExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityEchoShellExcelConfigMgr::rewriteEchoShellExcelConfig(this, txt_config_mgr)
    || ActivityEchoShellExcelConfigMgr::rewriteEchoShellRewardData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityEchoShellExcelConfig.cpp",
      "rewriteConfig",
      24);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])"rewriteConfig failed");
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

// Line 31: range 0000000012AFD88E-0000000012AFDAD3
int32_t __cdecl ActivityEchoShellExcelConfigMgr::checkConfig(
        ActivityEchoShellExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityEchoShellExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityEchoShellExcelConfigMgr::checkEchoShellExcelConfig(this, txt_config_mgr)
    || ActivityEchoShellExcelConfigMgr::checkEchoShellRewardData(this, txt_config_mgr)
    || ActivityEchoShellExcelConfigMgr::checkEchoShellFloatSignal(this, txt_config_mgr)
    || ActivityEchoShellExcelConfigMgr::checkEchoShellSummerTimeDungeon(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityEchoShellExcelConfig.cpp",
      "checkConfig",
      37);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])"checkConfig failed");
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

// Line 44: range 0000000012AFDAD4-0000000012AFDE7E
int32_t __cdecl ActivityEchoShellExcelConfigMgr::rewriteEchoShellExcelConfig(
        ActivityEchoShellExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  int32_t result; // eax
  data::EchoShellExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::EchoShellExcelConfig>,false,false>::reference v12; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::EchoShellExcelConfig> >::type *id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EchoShellExcelConfig> >::type *config; // [rsp+28h] [rbp-D8h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:45 64 8 12 __for_end:45 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityEchoShellExcelConfigMgr::rewriteEchoShellExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->echo_shell_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EchoShellExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::EchoShellExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EchoShellExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::EchoShellExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::EchoShellExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EchoShellExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EchoShellExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_20;
    }
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::EchoShellExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::EchoShellExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::EchoShellExcelConfig>(v12);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::EchoShellExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EchoShellExcelConfig>(v12);
    v6 = std::unordered_set<unsigned int>::insert(&this->shell_set, id);
    if ( !v6.second )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&config->related_dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->related_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->related_dungeon_id);
    }
    if ( config->related_dungeon_id )
      std::unordered_set<unsigned int>::insert(&this->related_dungeon_set, &config->related_dungeon_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::EchoShellExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::EchoShellExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityEchoShellExcelConfig.cpp",
    "rewriteEchoShellExcelConfig",
    49);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v7, (const char (*)[20])"duplicate shell_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_20:
  if ( v9 == 1 )
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

// Line 61: range 0000000012AFDE80-0000000012AFE23D
int32_t __cdecl ActivityEchoShellExcelConfigMgr::checkEchoShellExcelConfig(
        const ActivityEchoShellExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  int32_t result; // eax
  data::EchoShellExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::EchoShellExcelConfig> >::type *id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EchoShellExcelConfig> >::type *config; // [rsp+28h] [rbp-D8h]
  char v17[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:62 64 8 12 __for_end:62 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityEchoShellExcelConfigMgr::checkEchoShellExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->echo_shell_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EchoShellExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::EchoShellExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EchoShellExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::EchoShellExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::EchoShellExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EchoShellExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EchoShellExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_22;
    }
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::EchoShellExcelConfig>(v14);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::EchoShellExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EchoShellExcelConfig>(v14);
    if ( *(_BYTE *)(((unsigned __int64)&config->related_dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->related_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->related_dungeon_id);
    }
    if ( config->related_dungeon_id
      && !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
            &txt_config_mgr->dungeon_config_mgr,
            config->related_dungeon_id) )
    {
      break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityEchoShellExcelConfig.cpp",
    "checkEchoShellExcelConfig",
    67);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v7, (const char (*)[40])byte_1AA2C580);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->related_dungeon_id);
  v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])byte_1AA2C5E0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_22:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v17 == (char *)v3 )
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

// Line 75: range 0000000012AFE23E-0000000012AFE62D
int32_t __cdecl ActivityEchoShellExcelConfigMgr::rewriteEchoShellRewardData(
        ActivityEchoShellExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *p_reward_id; // rcx
  const unsigned int *p_shell_count; // rdx
  __int64 v8; // rsi
  const unsigned int *v9; // rcx
  std::pair<unsigned int,unsigned int> *v10; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int v14; // eax
  int32_t result; // eax
  data::EchoShellRewardExcelConfigMap *__for_range; // [rsp+20h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::EchoShellRewardExcelConfig>,false,false>::reference v17; // [rsp+28h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,data::EchoShellRewardExcelConfig> >::type *id; // [rsp+30h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EchoShellRewardExcelConfig> >::type *config; // [rsp+38h] [rbp-F8h]
  char v20[240]; // [rsp+40h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 14 __for_begin:76 64 8 12 __for_end:76 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityEchoShellExcelConfigMgr::rewriteEchoShellRewardData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  __for_range = &this->echo_shell_reward_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EchoShellRewardExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::EchoShellRewardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EchoShellRewardExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::EchoShellRewardExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::EchoShellRewardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EchoShellRewardExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EchoShellRewardExcelConfig>,false> *)(v3 + 64)) )
    {
      v14 = 1;
      goto LABEL_18;
    }
    v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::EchoShellRewardExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::EchoShellRewardExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::EchoShellRewardExcelConfig>(v17);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::EchoShellRewardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EchoShellRewardExcelConfig>(v17);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    p_reward_id = &config->reward_id;
    p_shell_count = &config->shell_count;
    v8 = *(unsigned __int8 *)(((v3 + 96) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 )
      __asan_report_store8(v3 + 96, v8);
    *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                           p_shell_count,
                                                           p_reward_id);
    v11 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::emplace<unsigned int const&,std::pair<unsigned int,unsigned int>>(
            &this->shell_reward_map,
            id,
            (std::pair<unsigned int,unsigned int> *)(v3 + 96),
            v9,
            v10);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v11.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::EchoShellRewardExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::EchoShellRewardExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityEchoShellExcelConfig.cpp",
    "rewriteEchoShellRewardData",
    80);
  v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 128),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v13 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          v12,
          (const char (*)[28])"duplicate reward_config_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  v2 = -1;
  v14 = 0;
LABEL_18:
  if ( v14 == 1 )
    v2 = 0;
  result = v2;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 88: range 0000000012AFE62E-0000000012AFEC22
int32_t __cdecl ActivityEchoShellExcelConfigMgr::checkEchoShellRewardData(
        const ActivityEchoShellExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<1,std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::unordered_set<unsigned int>::size_type v11; // rax
  int v12; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int32_t result; // eax
  std::unordered_set<unsigned int>::size_type first; // [rsp+8h] [rbp-168h]
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+20h] [rbp-150h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::reference v20; // [rsp+28h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *id; // [rsp+30h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *pair; // [rsp+38h] [rbp-138h]
  char v23[304]; // [rsp+40h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 14 __for_begin:89 64 8 12 __for_end:89 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityEchoShellExcelConfigMgr::checkEchoShellRewardData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  __for_range = &this->shell_reward_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_26;
    }
    v20 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v20);
    v6 = (std::tuple_element<1,std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v20);
    pair = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    first = pair->first;
    if ( first > std::unordered_set<unsigned int>::size(&this->shell_set) )
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
        "./src/txt_data_manual/ActivityEchoShellExcelConfig.cpp",
        "checkEchoShellRewardData",
        93);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(v7, (const char (*)[81])byte_1AA2C740);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)pair);
      v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v9, (const char (*)[19])byte_1AA2C7C0);
      v11 = std::unordered_set<unsigned int>::size(&this->shell_set);
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        v11 = __asan_report_store8(v3 + 96, byte_1AA2C7C0);
      *(_QWORD *)(v3 + 96) = v11;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, (const unsigned __int64 *)(v3 + 96));
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      v2 = -1;
      v12 = 0;
      goto LABEL_26;
    }
    if ( *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pair->second);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            pair->second,
                            ITEM_LIMIT_ACTIVITY_ECHO_SHELL) != 1 )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ActivityEchoShellExcelConfig.cpp",
    "checkEchoShellRewardData",
    98);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 192),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
          v13,
          (const char (*)[54])"isValidRewardIdAndMatchItemLimitType fail, reward_id:");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &pair->second);
  v16 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v15, (const char (*)[20])", reward_config_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  v2 = -1;
  v12 = 0;
LABEL_26:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 106: range 0000000012AFEC24-0000000012AFF1B4
int32_t __cdecl ActivityEchoShellExcelConfigMgr::checkEchoShellFloatSignal(
        const ActivityEchoShellExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  data::EchoShellFloatSignalExcelConfigMap *__for_range; // [rsp+20h] [rbp-130h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig>,false,false>::reference v13; // [rsp+28h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig> >::type *float_signal_config; // [rsp+38h] [rbp-118h]
  const GroupScriptConfig *group_config_ptr; // [rsp+40h] [rbp-110h]
  char v16[256]; // [rsp+50h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:108 64 8 13 __for_end:108 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityEchoShellExcelConfigMgr::checkEchoShellFloatSignal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->echo_shell_float_signal_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EchoShellFloatSignalExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::EchoShellFloatSignalExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EchoShellFloatSignalExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::EchoShellFloatSignalExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig>,false> *)(v2 + 64)) )
  {
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::EchoShellFloatSignalExcelConfig>(v13);
    float_signal_config = (std::tuple_element<1,const std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EchoShellFloatSignalExcelConfig>(v13);
    p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&float_signal_config->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)float_signal_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&float_signal_config->group_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&float_signal_config->group_id);
    }
    group_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, float_signal_config->group_id);
    if ( group_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&float_signal_config->config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&float_signal_config->config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&float_signal_config->config_id);
      }
      if ( !GroupScriptConfig::findPointConfig(group_config_ptr, float_signal_config->config_id) )
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
          "./src/txt_data_manual/ActivityEchoShellExcelConfig.cpp",
          "checkEchoShellFloatSignal",
          120);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])byte_1AA2C980);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &float_signal_config->config_id);
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
        "./src/txt_data_manual/ActivityEchoShellExcelConfig.cpp",
        "checkEchoShellFloatSignal",
        113);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])byte_1AA2C940);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &float_signal_config->group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellFloatSignalExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v16 == (char *)v2 )
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

// Line 129: range 0000000012AFF1B6-0000000012AFF54F
int32_t __cdecl ActivityEchoShellExcelConfigMgr::checkEchoShellSummerTimeDungeon(
        const ActivityEchoShellExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::EchoShellSummerTimeDungeonExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>,false,false>::reference v11; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig> >::type *dungeon_id; // [rsp+30h] [rbp-D0h]
  char v13[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:131 64 8 13 __for_end:131 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityEchoShellExcelConfigMgr::checkEchoShellSummerTimeDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->echo_shell_summer_time_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EchoShellSummerTimeDungeonExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::EchoShellSummerTimeDungeonExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EchoShellSummerTimeDungeonExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::EchoShellSummerTimeDungeonExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>,false> *)(v2 + 64)) )
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>,false,false> *const)(v2 + 32));
    dungeon_id = std::get<0ul,unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>(v11);
    std::get<1ul,unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>(v11);
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dungeon_id);
    }
    if ( !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, *dungeon_id) )
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
        "./src/txt_data_manual/ActivityEchoShellExcelConfig.cpp",
        "checkEchoShellSummerTimeDungeon",
        135);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v6, (const char (*)[47])byte_1AA2CA60);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EchoShellSummerTimeDungeonExcelConfig>,false,false> *const)(v2 + 32));
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
