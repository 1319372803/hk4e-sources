// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp

// Line 19: range 0000000012AD5094-0000000012AD53D6
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::rewriteConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t reta; // [rsp+1Ch] [rbp-84h]
  int retb; // [rsp+1Ch] [rbp-84h]
  int retc; // [rsp+1Ch] [rbp-84h]
  int retd; // [rsp+1Ch] [rbp-84h]
  int rete; // [rsp+1Ch] [rbp-84h]
  int retf; // [rsp+1Ch] [rbp-84h]
  int retg; // [rsp+1Ch] [rbp-84h]
  int reth; // [rsp+1Ch] [rbp-84h]
  int reti; // [rsp+1Ch] [rbp-84h]
  int retj; // [rsp+1Ch] [rbp-84h]
  int retk; // [rsp+1Ch] [rbp-84h]
  int ret; // [rsp+1Ch] [rbp-84h]
  char v19[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChannellerSlabExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  reta = ActivityChannellerSlabExcelConfigMgr::rewritePreviewConfig(this, txt_config_mgr);
  retb = ActivityChannellerSlabExcelConfigMgr::rewriteChapterConfig(this, txt_config_mgr) | reta;
  retc = ActivityChannellerSlabExcelConfigMgr::rewriteLevelConfig(this, txt_config_mgr) | retb;
  retd = ActivityChannellerSlabExcelConfigMgr::rewriteOneoffDungeonConfig(this, txt_config_mgr) | retc;
  rete = ActivityChannellerSlabExcelConfigMgr::rewriteBuffConfig(this, txt_config_mgr) | retd;
  retf = ActivityChannellerSlabExcelConfigMgr::rewriteBuffEnergyConfig(this, txt_config_mgr) | rete;
  retg = ActivityChannellerSlabExcelConfigMgr::rewriteBuffCostConfig(this, txt_config_mgr) | retf;
  reth = ActivityChannellerSlabExcelConfigMgr::rewriteLoopDungeonPreviewConfig(this, txt_config_mgr) | retg;
  reti = ActivityChannellerSlabExcelConfigMgr::rewriteLoopDungeonConfig(this, txt_config_mgr) | reth;
  retj = ActivityChannellerSlabExcelConfigMgr::rewriteLoopDungeonDifficultyConfig(this, txt_config_mgr) | reti;
  retk = ActivityChannellerSlabExcelConfigMgr::rewriteLoopDungeonConditionConfig(this, txt_config_mgr) | retj;
  ret = ActivityChannellerSlabExcelConfigMgr::rewriteLoopDungeonRewardConfig(this, txt_config_mgr) | retk;
  if ( ret )
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
      "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
      "rewriteConfig",
      35);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v5, (const char (*)[20])"rewriteConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  result = ret;
  if ( v19 == (char *)v2 )
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

// Line 41: range 0000000012AD53D8-0000000012AD571A
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::checkConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t reta; // [rsp+1Ch] [rbp-84h]
  int retb; // [rsp+1Ch] [rbp-84h]
  int retc; // [rsp+1Ch] [rbp-84h]
  int retd; // [rsp+1Ch] [rbp-84h]
  int rete; // [rsp+1Ch] [rbp-84h]
  int retf; // [rsp+1Ch] [rbp-84h]
  int retg; // [rsp+1Ch] [rbp-84h]
  int reth; // [rsp+1Ch] [rbp-84h]
  int reti; // [rsp+1Ch] [rbp-84h]
  int retj; // [rsp+1Ch] [rbp-84h]
  int retk; // [rsp+1Ch] [rbp-84h]
  int ret; // [rsp+1Ch] [rbp-84h]
  char v19[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChannellerSlabExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  reta = ActivityChannellerSlabExcelConfigMgr::checkPreviewConfig(this, txt_config_mgr);
  retb = ActivityChannellerSlabExcelConfigMgr::checkChapterConfig(this, txt_config_mgr) | reta;
  retc = ActivityChannellerSlabExcelConfigMgr::checkLevelConfig(this, txt_config_mgr) | retb;
  retd = ActivityChannellerSlabExcelConfigMgr::checkOneoffDungeonConfig(this, txt_config_mgr) | retc;
  rete = ActivityChannellerSlabExcelConfigMgr::checkBuffConfig(this, txt_config_mgr) | retd;
  retf = ActivityChannellerSlabExcelConfigMgr::checkBuffEnergyConfig(this, txt_config_mgr) | rete;
  retg = ActivityChannellerSlabExcelConfigMgr::checkBuffCostConfig(this, txt_config_mgr) | retf;
  reth = ActivityChannellerSlabExcelConfigMgr::checkLoopDungeonPreviewConfig(this, txt_config_mgr) | retg;
  reti = ActivityChannellerSlabExcelConfigMgr::checkLoopDungeonConfig(this, txt_config_mgr) | reth;
  retj = ActivityChannellerSlabExcelConfigMgr::checkLoopDungeonDifficultyConfig(this, txt_config_mgr) | reti;
  retk = ActivityChannellerSlabExcelConfigMgr::checkLoopDungeonConditionConfig(this, txt_config_mgr) | retj;
  ret = ActivityChannellerSlabExcelConfigMgr::checkLoopDungeonRewardConfig(this, txt_config_mgr) | retk;
  if ( ret )
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
      "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
      "checkConfig",
      57);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v5, (const char (*)[18])"checkConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  result = ret;
  if ( v19 == (char *)v2 )
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

// Line 63: range 0000000012AD571C-0000000012AD5EB4
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::checkPreviewConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t *p_activity_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-17Ch]
  data::ChannellerSlabPreviewExcelConfigMap *__for_range; // [rsp+20h] [rbp-170h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabPreviewExcelConfig>,false,false>::reference v21; // [rsp+28h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabPreviewExcelConfig> >::type *preview_config; // [rsp+38h] [rbp-158h]
  char v23[320]; // [rsp+50h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 14 __for_begin:66 64 8 12 __for_end:66 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChannellerSlabExcelConfigMgr::checkPreviewConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->channeller_slab_preview_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabPreviewExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ChannellerSlabPreviewExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabPreviewExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabPreviewExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabPreviewExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabPreviewExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabPreviewExcelConfig>,false> *)(v2 + 64)) )
  {
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabPreviewExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabPreviewExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::ChannellerSlabPreviewExcelConfig>(v21);
    preview_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabPreviewExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabPreviewExcelConfig>(v21);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    p_activity_id = &preview_config->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_activity_id);
    }
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
            p_new_activity_config_mgr,
            preview_config->activity_id) )
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
        "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
        "checkPreviewConfig",
        72);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v7, (const char (*)[32])byte_1AA23A20);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &preview_config->activity_id);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v9, (const char (*)[42])byte_1AA23A60);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&preview_config->activity_stay_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&preview_config->activity_stay_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&preview_config->activity_stay_time);
    }
    if ( !preview_config->activity_stay_time )
    {
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
        "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
        "checkPreviewConfig",
        78);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v10, (const char (*)[32])byte_1AA23A20);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &preview_config->activity_id);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v12, (const char (*)[37])byte_1AA23AC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&preview_config->level_reward_gadget_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&preview_config->level_reward_gadget_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&preview_config->level_reward_gadget_id);
    }
    if ( preview_config->level_reward_gadget_id
      && !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
            &txt_config_mgr->gadget_config_mgr,
            preview_config->level_reward_gadget_id) )
    {
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
        "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
        "checkPreviewConfig",
        87);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v13, (const char (*)[32])byte_1AA23A20);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &preview_config->activity_id);
      v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v15, (const char (*)[18])byte_1AA23B20);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v16,
              &preview_config->level_reward_gadget_id);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v17, (const char (*)[33])byte_1AA23B60);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabPreviewExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabPreviewExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v23 == (char *)v2 )
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

// Line 96: range 0000000012AD5EB6-0000000012AD5EC8
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::rewritePreviewConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 101: range 0000000012AD5ECA-0000000012AD6C0E
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::checkChapterConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  const std::tuple_element<1,std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig> >::type *v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*> >::type *v10; // rax
  const data::ChannellerSlabChapterExcelConfig **v11; // r8
  char v12; // dl
  char *v13; // rsi
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  __int64 v18; // rsi
  std::unordered_map<unsigned int,const data::ChannellerSlabChapterExcelConfig*> *p_stage_config_map; // rcx
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*>,false,false>,bool> >::type *v20; // rax
  char v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdx
  std::unordered_map<unsigned int,const data::ChannellerSlabChapterExcelConfig*> *v24; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*>,false,false>::pointer v25; // rax
  char v26; // dl
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*>,false,false>::pointer v33; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-288h]
  uint32_t prev_chapter; // [rsp+1Ch] [rbp-284h]
  data::ChannellerSlabChapterExcelConfigMap *__for_range; // [rsp+20h] [rbp-280h]
  std::map<unsigned int,const data::ChannellerSlabChapterExcelConfig*> *__for_range_0; // [rsp+28h] [rbp-278h]
  std::tuple_element<1,const std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*> >::type *config_ptr; // [rsp+38h] [rbp-268h]
  const data::ChannellerSlabChapterExcelConfig *chapter_config_0; // [rsp+40h] [rbp-260h]
  std::tuple_element<0,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*>,false,false>,bool> >::type *iter; // [rsp+48h] [rbp-258h]
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*>,false,false>,bool> >::type *is_new; // [rsp+50h] [rbp-250h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig>,false,false>::reference v43; // [rsp+58h] [rbp-248h]
  char v44[560]; // [rsp+70h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 4 9 <unknown> 48 8 15 __for_begin:104 80 8 13 __for_end:104 112 8 15 __for_begin:110 144 8"
                        " 13 __for_end:110 176 8 9 <unknown> 208 8 9 <unknown> 240 16 9 <unknown> 272 16 9 <unknown> 304 "
                        "32 9 <unknown> 368 32 9 <unknown> 432 48 26 chapter_config_ptr_map:103";
  *(_QWORD *)(v2 + 16) = ActivityChannellerSlabExcelConfigMgr::checkChapterConfig;
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
  v4[536862728] = 62194;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862735] = -202116109;
  ret = 0;
  std::map<unsigned int,data::ChannellerSlabChapterExcelConfig const*>::map((std::map<unsigned int,const data::ChannellerSlabChapterExcelConfig*> *const)(v2 + 432));
  __for_range = &this->channeller_slab_chapter_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabChapterExcelConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::ChannellerSlabChapterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabChapterExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::ChannellerSlabChapterExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig>,false> *)(v2 + 80)) )
      break;
    v43 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig>,false,false> *const)(v2 + 48));
    std::get<0ul,unsigned int const,data::ChannellerSlabChapterExcelConfig>(v43);
    v6 = std::get<1ul,unsigned int const,data::ChannellerSlabChapterExcelConfig>(v43);
    v7 = (unsigned __int64)std::map<unsigned int,data::ChannellerSlabChapterExcelConfig const*>::operator[](
                             (std::map<unsigned int,const data::ChannellerSlabChapterExcelConfig*> *const)(v2 + 432),
                             &v6->chapter_id);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8(v7, &v6->chapter_id);
    *(_QWORD *)v7 = v6;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig>,false,false> *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  prev_chapter = 0;
  __for_range_0 = (std::map<unsigned int,const data::ChannellerSlabChapterExcelConfig*> *)(v2 + 432);
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, v5);
  *(std::map<unsigned int,const data::ChannellerSlabChapterExcelConfig*>::iterator *)(v2 + 112) = std::map<unsigned int,data::ChannellerSlabChapterExcelConfig const*>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 144, v5);
  *(std::map<unsigned int,const data::ChannellerSlabChapterExcelConfig*>::iterator *)(v2 + 144) = std::map<unsigned int,data::ChannellerSlabChapterExcelConfig const*>::end(__for_range_0);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*> >::_Self *)(v2 + 112),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*> >::_Self *)(v2 + 144)) )
  {
    *(_WORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
    v8 = (unsigned __int64)std::_Rb_tree_iterator<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig const*>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*> > *const)(v2 + 112));
    if ( *(_WORD *)(((v2 + 240) >> 3) + 0x7FFF8000) )
      v8 = __asan_report_store16();
    if ( *(_WORD *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load16(v8);
    v9 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v2 + 240) = *(_QWORD *)v8;
    *(_QWORD *)(v2 + 248) = v9;
    std::get<0ul,unsigned int const,data::ChannellerSlabChapterExcelConfig const*>((const std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*> *)(v2 + 240));
    v10 = (std::tuple_element<1,const std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabChapterExcelConfig const*>((const std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*> *)(v2 + 240));
    config_ptr = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v10);
    if ( *config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(config_ptr);
      chapter_config_0 = *config_ptr;
      v12 = *(_BYTE *)(((unsigned __int64)&(*config_ptr)->chapter_id >> 3) + 0x7FFF8000);
      v13 = (char *)((((unsigned __int8)*config_ptr + 12) & 7u) + 3);
      if ( v12 != 0 && (char)((((unsigned __int8)*config_ptr + 12) & 7) + 3) >= v12 )
        __asan_report_load4(&(*config_ptr)->chapter_id);
      if ( chapter_config_0->chapter_id != prev_chapter + 1 )
      {
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
          "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
          "checkChapterConfig",
          119);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 304),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v14, (const char (*)[22])byte_1AA23D20);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &chapter_config_0->chapter_id);
        v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v16, (const char (*)[21])byte_1AA23D60);
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
        v18 = prev_chapter + 1;
        if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 32, v18);
        *(_DWORD *)(v2 + 32) = v18;
        v13 = (char *)(v2 + 32);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 32));
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
        *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      ++prev_chapter;
      *(_WORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
      p_stage_config_map = &this->stage_config_map;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 176, v13);
      *(_QWORD *)(v2 + 176) = chapter_config_0;
      if ( *(_WORD *)(((v2 + 272) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      *(std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*>,false,false>,bool> *)(v2 + 272) = std::unordered_map<unsigned int,data::ChannellerSlabChapterExcelConfig const*>::emplace<unsigned int const&,data::ChannellerSlabChapterExcelConfig const*>(p_stage_config_map, &chapter_config_0->chapter_id, (const data::ChannellerSlabChapterExcelConfig **)(v2 + 176), (const unsigned int *)p_stage_config_map, v11);
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      iter = std::get<0ul,std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig const*>,false,false>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*>,false,false>,bool> *)(v2 + 272));
      v20 = std::get<1ul,std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig const*>,false,false>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*>,false,false>,bool> *)(v2 + 272));
      is_new = v20;
      v21 = 0;
      v22 = (unsigned __int8)v20 & 7;
      v23 = (*(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000));
      if ( (_BYTE)v23 )
        __asan_report_load1(v20, v22, v23);
      if ( *is_new )
        goto LABEL_50;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
      v24 = &this->stage_config_map;
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 208, v22);
      *(std::unordered_map<unsigned int,const data::ChannellerSlabChapterExcelConfig*>::iterator *)(v2 + 208) = std::unordered_map<unsigned int,data::ChannellerSlabChapterExcelConfig const*>::end(v24);
      v21 = 1;
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig const*>,false>(
              iter,
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*>,false> *)(v2 + 208)) )
        goto LABEL_50;
      v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig const*>,false,false>::operator->(iter);
      if ( *(_BYTE *)(((unsigned __int64)&v25->second >> 3) + 0x7FFF8000) )
        __asan_report_load8(&v25->second);
      if ( v25->second )
        v26 = 1;
      else
LABEL_50:
        v26 = 0;
      if ( v21 )
        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      if ( v26 )
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
          "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
          "checkChapterConfig",
          126);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 368),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v27, (const char (*)[31])byte_1AA23DA0);
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &chapter_config_0->chapter_id);
        v30 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v29, (const char (*)[12])" config_id:");
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &chapter_config_0->id);
        v32 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v31, (const char (*)[15])" vs config_id:");
        v33 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig const*>,false,false>::operator->(iter);
        if ( *(_BYTE *)(((unsigned __int64)&v33->second >> 3) + 0x7FFF8000) )
          __asan_report_load8(&v33->second);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &v33->second->id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
        *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    *(_WORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -1800;
    std::_Rb_tree_iterator<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig const*>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*> > *const)(v2 + 112));
  }
  *(_WORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
  std::map<unsigned int,data::ChannellerSlabChapterExcelConfig const*>::~map((std::map<unsigned int,const data::ChannellerSlabChapterExcelConfig*> *const)(v2 + 432));
  result = ret;
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
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

// Line 134: range 0000000012AD6C10-0000000012AD7194
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::rewriteChapterConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  const std::tuple_element<1,std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig> >::type *v6; // r14
  unsigned __int64 v7; // rax
  std::tuple_element<1,const std::pair<unsigned int const,const data::ChannellerSlabLevelExcelConfig*> >::type *v8; // rax
  std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> *v9; // rax
  int32_t result; // eax
  data::ChannellerSlabLevelExcelConfigMap *__for_range; // [rsp+10h] [rbp-180h]
  std::map<unsigned int,const data::ChannellerSlabLevelExcelConfig*> *__for_range_0; // [rsp+18h] [rbp-178h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,const data::ChannellerSlabLevelExcelConfig*> >::reference v13; // [rsp+20h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,const data::ChannellerSlabLevelExcelConfig*> >::type *level_config_ptr; // [rsp+30h] [rbp-160h]
  const data::ChannellerSlabLevelExcelConfig *level_config_0; // [rsp+38h] [rbp-158h]
  std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>::mapped_type *round_camp_config_vec; // [rsp+40h] [rbp-150h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig>,false,false>::reference v17; // [rsp+48h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig> >::type *config_id; // [rsp+50h] [rbp-140h]
  char v19[304]; // [rsp+60h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 8 15 __for_begin:136 80 8 13 __for_end:136 112 8 15 __for_begin:140 144 8 13 __for_end:140 "
                        "176 48 24 level_config_ptr_map:135";
  *(_QWORD *)(v2 + 16) = ActivityChannellerSlabExcelConfigMgr::rewriteChapterConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  std::map<unsigned int,data::ChannellerSlabLevelExcelConfig const*>::map((std::map<unsigned int,const data::ChannellerSlabLevelExcelConfig*> *const)(v2 + 176));
  __for_range = &this->channeller_slab_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLevelExcelConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::ChannellerSlabLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLevelExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::ChannellerSlabLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig>,false> *)(v2 + 80)) )
      break;
    v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig>,false,false> *const)(v2 + 48));
    config_id = std::get<0ul,unsigned int const,data::ChannellerSlabLevelExcelConfig>(v17);
    v6 = std::get<1ul,unsigned int const,data::ChannellerSlabLevelExcelConfig>(v17);
    v7 = (unsigned __int64)std::map<unsigned int,data::ChannellerSlabLevelExcelConfig const*>::operator[](
                             (std::map<unsigned int,const data::ChannellerSlabLevelExcelConfig*> *const)(v2 + 176),
                             config_id);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8(v7, config_id);
    *(_QWORD *)v7 = v6;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig>,false,false> *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = (std::map<unsigned int,const data::ChannellerSlabLevelExcelConfig*> *)(v2 + 176);
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, v5);
  *(std::map<unsigned int,const data::ChannellerSlabLevelExcelConfig*>::iterator *)(v2 + 112) = std::map<unsigned int,data::ChannellerSlabLevelExcelConfig const*>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 144, v5);
  *(std::map<unsigned int,const data::ChannellerSlabLevelExcelConfig*>::iterator *)(v2 + 144) = std::map<unsigned int,data::ChannellerSlabLevelExcelConfig const*>::end(__for_range_0);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,const data::ChannellerSlabLevelExcelConfig*> >::_Self *)(v2 + 112),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,const data::ChannellerSlabLevelExcelConfig*> >::_Self *)(v2 + 144)) )
  {
    v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig const*>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,const data::ChannellerSlabLevelExcelConfig*> > *const)(v2 + 112));
    std::get<0ul,unsigned int const,data::ChannellerSlabLevelExcelConfig const*>(v13);
    v8 = (std::tuple_element<1,const std::pair<unsigned int const,const data::ChannellerSlabLevelExcelConfig*> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabLevelExcelConfig const*>(v13);
    level_config_ptr = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    if ( *level_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)level_config_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(level_config_ptr);
      level_config_0 = *level_config_ptr;
      v9 = std::map<unsigned int,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::operator[](
             &this->stage_rounds_level_config_map,
             &(*level_config_ptr)->stage_id);
      round_camp_config_vec = std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::operator[](
                                v9,
                                &level_config_0->wave_id);
      std::vector<data::ChannellerSlabLevelExcelConfig const*>::push_back(round_camp_config_vec, level_config_ptr);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig const*>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,const data::ChannellerSlabLevelExcelConfig*> > *const)(v2 + 112));
  }
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
  std::map<unsigned int,data::ChannellerSlabLevelExcelConfig const*>::~map((std::map<unsigned int,const data::ChannellerSlabLevelExcelConfig*> *const)(v2 + 176));
  result = 0;
  if ( v19 == (char *)v2 )
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

// Line 154: range 0000000012AD7196-0000000012AD880F
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::checkLevelConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  uint32_t *p_stage_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::unordered_map<unsigned int,ChannellerSlabGroupInfo> *p_group_info_map; // rcx
  __int64 v23; // rsi
  __int64 wave_id; // rsi
  __int64 v25; // rsi
  __int64 reward_id; // rsi
  ChannellerSlabGroupInfo *v27; // r8
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false,false>,bool> >::type *v28; // rax
  char v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdx
  std::unordered_map<unsigned int,ChannellerSlabGroupInfo> *v32; // rdx
  char v33; // dl
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false,false>::pointer v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false,false>::pointer v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  __int64 v52; // rsi
  unsigned int v53; // ecx
  char v54; // al
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  unsigned int v59; // ecx
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rdx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  int32_t ret; // [rsp+1Ch] [rbp-394h]
  data::ChannellerSlabLevelExcelConfigMap *__for_range; // [rsp+20h] [rbp-390h]
  StageRoundsMap *__for_range_0; // [rsp+28h] [rbp-388h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::reference v69; // [rsp+30h] [rbp-380h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::type *stage_id; // [rsp+38h] [rbp-378h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::type *round_level_config_map; // [rsp+40h] [rbp-370h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::reference v72; // [rsp+50h] [rbp-360h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::type *round_id; // [rsp+58h] [rbp-358h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig>,false,false>::reference v74; // [rsp+68h] [rbp-348h]
  std::tuple_element<0,std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig> >::type *config_id; // [rsp+70h] [rbp-340h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig> >::type *level_config; // [rsp+78h] [rbp-338h]
  std::tuple_element<0,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false,false>,bool> >::type *iter; // [rsp+90h] [rbp-320h]
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false,false>,bool> >::type *is_new; // [rsp+98h] [rbp-318h]
  char v79[784]; // [rsp+A0h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "17 32 4 14 prev_stage:191 48 4 14 prev_round:201 64 8 15 __for_begin:156 96 8 13 __for_end:156 1"
                        "28 8 9 <unknown> 160 8 15 __for_begin:192 192 8 13 __for_end:192 224 8 15 __for_begin:202 256 8 "
                        "13 __for_end:202 288 16 9 <unknown> 320 16 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480"
                        " 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChannellerSlabExcelConfigMgr::checkLevelConfig;
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
  v4[536862729] = -219021312;
  v4[536862730] = -219021312;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -202116109;
  ret = 0;
  __for_range = &this->channeller_slab_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLevelExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ChannellerSlabLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig>,false> *)(v2 + 96)) )
      break;
    v74 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig>,false,false> *const)(v2 + 64));
    config_id = std::get<0ul,unsigned int const,data::ChannellerSlabLevelExcelConfig>(v74);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabLevelExcelConfig>(v74);
    p_stage_id = &level_config->stage_id;
    if ( *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_stage_id);
    }
    if ( !ActivityChannellerSlabExcelConfigMgr::findChapterConfigByStageID(this, level_config->stage_id) )
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
        "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
        "checkLevelConfig",
        162);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v7, (const char (*)[28])byte_1AA240A0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &level_config->id);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])byte_1AA240E0);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &level_config->stage_id);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v11, (const char (*)[45])byte_1AA24120);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&level_config->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->group_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&level_config->group_id);
    }
    if ( LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, level_config->group_id) )
    {
      *(_WORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      p_group_info_map = &this->group_info_map;
      *(_WORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&level_config->stage_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->stage_id >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&level_config->stage_id);
      }
      v23 = level_config->stage_id;
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, v23);
      *(_DWORD *)(v2 + 320) = v23;
      if ( *(_BYTE *)(((unsigned __int64)&level_config->wave_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_config->wave_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&level_config->wave_id);
      }
      wave_id = level_config->wave_id;
      if ( *(_BYTE *)(((v2 + 324) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 32 + 100) & 7) + 3) >= *(_BYTE *)(((v2 + 324) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 324, wave_id);
      }
      *(_DWORD *)(v2 + 324) = wave_id;
      if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(config_id);
      }
      v25 = *config_id;
      if ( *(_BYTE *)(((v2 + 328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 328) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 328, v25);
      *(_DWORD *)(v2 + 328) = v25;
      if ( *(_BYTE *)(((unsigned __int64)&level_config->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&level_config->reward_id);
      }
      reward_id = level_config->reward_id;
      v27 = (ChannellerSlabGroupInfo *)((((_BYTE)v2 - 32 + 108) & 7u) + 3);
      if ( *(_BYTE *)(((v2 + 332) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 32 + 108) & 7) + 3) >= *(_BYTE *)(((v2 + 332) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 332, reward_id);
      }
      *(_DWORD *)(v2 + 332) = reward_id;
      if ( *(_WORD *)(((v2 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      *(std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false,false>,bool> *)(v2 + 288) = std::unordered_map<unsigned int,ChannellerSlabGroupInfo>::emplace<unsigned int const&,ChannellerSlabGroupInfo>(p_group_info_map, &level_config->group_id, (ChannellerSlabGroupInfo *)(v2 + 320), (const unsigned int *)p_group_info_map, v27);
      *(_WORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -1800;
      iter = std::get<0ul,std::__detail::_Node_iterator<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false,false>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false,false>,bool> *)(v2 + 288));
      v28 = std::get<1ul,std::__detail::_Node_iterator<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false,false>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false,false>,bool> *)(v2 + 288));
      is_new = v28;
      v29 = 0;
      v30 = (unsigned __int8)v28 & 7;
      v31 = (*(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v30 >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000));
      if ( (_BYTE)v31 )
        __asan_report_load1(v28, v30, v31);
      if ( *is_new )
        goto LABEL_47;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      v32 = &this->group_info_map;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, v30);
      *(std::unordered_map<unsigned int,ChannellerSlabGroupInfo>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,ChannellerSlabGroupInfo>::end(v32);
      v29 = 1;
      if ( std::__detail::operator!=<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false>(
             iter,
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false> *)(v2 + 128)) )
      {
        v33 = 1;
      }
      else
      {
LABEL_47:
        v33 = 0;
      }
      if ( v29 )
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( v33 )
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
          "checkLevelConfig",
          179);
        v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v35 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v34, (const char (*)[28])byte_1AA24280);
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &level_config->group_id);
        v37 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v36, (const char (*)[12])byte_1AA242C0);
        v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &level_config->stage_id);
        v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v38, (const char (*)[11])byte_1AA24300);
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &level_config->wave_id);
        v41 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v40, (const char (*)[5])" vs ");
        v42 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v41, (const char (*)[10])byte_1AA24340);
        v43 = std::__detail::_Node_iterator<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false,false>::operator->(iter);
        v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &v43->second.stage_id);
        v45 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v44, (const char (*)[11])byte_1AA24300);
        v46 = std::__detail::_Node_iterator<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false,false>::operator->(iter);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &v46->second.round_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&level_config->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&level_config->reward_id);
      }
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              level_config->reward_id,
                              ITEM_LIMIT_ACTIVITY_CHANNELLER_SLAB) != 1 )
      {
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
          "checkLevelConfig",
          186);
        v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v48 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v47, (const char (*)[28])byte_1AA240A0);
        v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &level_config->id);
        v50 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v49, (const char (*)[12])byte_1AA24380);
        v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, &level_config->reward_id);
        common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v51, (const char (*)[9])byte_1AA20200);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
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
        "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
        "checkLevelConfig",
        170);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v13, (const char (*)[28])byte_1AA240A0);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &level_config->id);
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])byte_1AA24180);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &level_config->stage_id);
      v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])byte_1AA241C0);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &level_config->wave_id);
      v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v19, (const char (*)[17])byte_1AA24200);
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &level_config->group_id);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])byte_1AA24240);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_WORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -1800;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLevelExcelConfig>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v5);
  *(_DWORD *)(v2 + 32) = 0;
  __for_range_0 = &this->stage_rounds_level_config_map;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v5);
  *(std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>>::iterator *)(v2 + 160) = std::map<unsigned int,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, v5);
  *(std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>>::iterator *)(v2 + 192) = std::map<unsigned int,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::end(__for_range_0);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::_Self *)(v2 + 160),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::_Self *)(v2 + 192)) )
  {
    v69 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > > *const)(v2 + 160));
    stage_id = std::get<0ul,unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>(v69);
    round_level_config_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>(v69);
    v52 = ((unsigned __int8)stage_id & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    v53 = *stage_id;
    v54 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    LOBYTE(v52) = v54 != 0;
    if ( v54 != 0 && v54 <= 3 )
      __asan_report_load4(v2 + 32);
    if ( v53 == *(_DWORD *)(v2 + 32) + 1 )
    {
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 32);
      ++*(_DWORD *)(v2 + 32);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 48, v52);
      *(_DWORD *)(v2 + 48) = 0;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 224, v52);
      *(std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>::const_iterator *)(v2 + 224) = std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::begin(round_level_config_map);
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 256, v52);
      *(std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>::const_iterator *)(v2 + 256) = std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::end(round_level_config_map);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::_Self *)(v2 + 224),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::_Self *)(v2 + 256)) )
      {
        v72 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > > *const)(v2 + 224));
        round_id = std::get<0ul,unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>(v72);
        std::get<1ul,unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>(v72);
        if ( *(_BYTE *)(((unsigned __int64)round_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)round_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)round_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(round_id);
        }
        v59 = *round_id;
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 48);
        if ( v59 == *(_DWORD *)(v2 + 48) + 1 )
        {
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 48);
          ++*(_DWORD *)(v2 + 48);
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
            "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
            "checkLevelConfig",
            206);
          v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 672),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v61 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v60, (const char (*)[35])byte_1AA24480);
          v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, round_id);
          v63 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v62, (const char (*)[47])byte_1AA244E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > > *const)(v2 + 224));
      }
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
    }
    else
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
        "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
        "checkLevelConfig",
        196);
      v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v56 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v55, (const char (*)[35])byte_1AA243C0);
      v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, stage_id);
      v58 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v57, (const char (*)[49])byte_1AA24420);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > > *const)(v2 + 160));
  }
  if ( v79 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
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

// Line 218: range 0000000012AD8810-0000000012AD8822
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::rewriteLevelConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 223: range 0000000012AD8824-0000000012AD902A
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::checkOneoffDungeonConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-184h]
  data::ChannellerSlabDungeonExcelConfigMap *__for_range; // [rsp+20h] [rbp-180h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabDungeonExcelConfig>,false,false>::reference v23; // [rsp+28h] [rbp-178h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabDungeonExcelConfig> >::type *dungeon_config; // [rsp+38h] [rbp-168h]
  char v25[336]; // [rsp+50h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:225 64 8 13 __for_end:225 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChannellerSlabExcelConfigMgr::checkOneoffDungeonConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->channeller_slab_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabDungeonExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ChannellerSlabDungeonExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabDungeonExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabDungeonExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabDungeonExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabDungeonExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabDungeonExcelConfig>,false> *)(v2 + 64)) )
  {
    v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabDungeonExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabDungeonExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::ChannellerSlabDungeonExcelConfig>(v23);
    dungeon_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabDungeonExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabDungeonExcelConfig>(v23);
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->stage_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config->stage_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config->stage_id);
    }
    if ( !ActivityChannellerSlabExcelConfigMgr::findChapterConfigByStageID(this, dungeon_config->stage_id) )
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
        "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
        "checkOneoffDungeonConfig",
        231);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v5, (const char (*)[37])byte_1AA24600);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &dungeon_config->stage_id);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v7, (const char (*)[45])byte_1AA24120);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config->reward_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            dungeon_config->reward_id,
                            ITEM_LIMIT_ACTIVITY_CHANNELLER_SLAB) != 1 )
    {
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
        "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
        "checkOneoffDungeonConfig",
        237);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v8, (const char (*)[37])byte_1AA24600);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &dungeon_config->stage_id);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])byte_1AA24380);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &dungeon_config->reward_id);
      common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])byte_1AA20200);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config->dungeon_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config->dungeon_id);
    }
    if ( !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, dungeon_config->dungeon_id) )
    {
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
        "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
        "checkOneoffDungeonConfig",
        245);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v14, (const char (*)[37])byte_1AA24600);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &dungeon_config->stage_id);
      v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])byte_1AA24660);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &dungeon_config->dungeon_id);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v18, (const char (*)[34])byte_1AA20160);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v19 = (unsigned __int64)std::unordered_map<unsigned int,data::ChannellerSlabDungeonExcelConfig const*>::operator[](
                              &this->dungeon_config_map,
                              &dungeon_config->dungeon_id);
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      v19 = __asan_report_store8(v19, &dungeon_config->dungeon_id);
    *(_QWORD *)v19 = dungeon_config;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabDungeonExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabDungeonExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v25 == (char *)v2 )
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

// Line 255: range 0000000012AD902C-0000000012AD903E
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::rewriteOneoffDungeonConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 260: range 0000000012AD9040-0000000012AD93C8
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::checkBuffConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  int32_t result; // eax
  data::ChannellerSlabBuffExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig>,false,false>::reference v12; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig> >::type *id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:261 64 8 13 __for_end:261 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabExcelConfigMgr::checkBuffConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->channeller_slab_buff_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabBuffExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ChannellerSlabBuffExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabBuffExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabBuffExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_22;
    }
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::ChannellerSlabBuffExcelConfig>(v12);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabBuffExcelConfig>(v12);
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->buff_quality_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->buff_quality_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->buff_quality_type);
    }
    if ( excel_config->buff_quality_type == QUALITY_NONE || !data::isValidQualityType(excel_config->buff_quality_type) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
    "checkBuffConfig",
    265);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(v7, (const char (*)[66])byte_1AA24740);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_22:
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

// Line 274: range 0000000012AD93CA-0000000012AD93DC
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::rewriteBuffConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 279: range 0000000012AD93DE-0000000012AD93F0
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::checkBuffEnergyConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 284: range 0000000012AD93F2-0000000012AD972D
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::rewriteBuffEnergyConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::ChannellerSlabBuffEnergyExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  int32_t result; // eax
  data::ChannellerSlabBuffEnergyExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig>,false,false>::reference v12; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v14[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:285 64 8 13 __for_end:285 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabExcelConfigMgr::rewriteBuffEnergyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->channeller_slab_buff_energy_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabBuffEnergyExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ChannellerSlabBuffEnergyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabBuffEnergyExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabBuffEnergyExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_16;
    }
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig>(v12);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig>(v12);
    v7 = std::map<unsigned int,data::ChannellerSlabBuffEnergyExcelConfig>::emplace<unsigned int const&,data::ChannellerSlabBuffEnergyExcelConfig const&>(
           &this->buff_energy_config_map,
           &excel_config->avatar_level,
           excel_config,
           (const unsigned int *)&this->buff_energy_config_map,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
    "rewriteBuffEnergyConfig",
    289);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(v8, (const char (*)[71])byte_1AA24860);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_16:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v14 == (char *)v3 )
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

// Line 298: range 0000000012AD972E-0000000012AD9ABE
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::checkBuffCostConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::QualityType *p_buff_quality_type; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  int32_t result; // eax
  data::ChannellerSlabBuffCostExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig>,false,false>::reference v13; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig> >::type *id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:299 64 8 13 __for_end:299 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabExcelConfigMgr::checkBuffCostConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->channeller_slab_buff_cost_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabBuffCostExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ChannellerSlabBuffCostExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabBuffCostExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabBuffCostExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_22;
    }
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::ChannellerSlabBuffCostExcelConfig>(v13);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabBuffCostExcelConfig>(v13);
    p_buff_quality_type = &excel_config->buff_quality_type;
    if ( *(_BYTE *)(((unsigned __int64)p_buff_quality_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_buff_quality_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_buff_quality_type >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(p_buff_quality_type);
    }
    if ( excel_config->buff_quality_type == QUALITY_NONE || !data::isValidQualityType(excel_config->buff_quality_type) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
    "checkBuffCostConfig",
    303);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(v8, (const char (*)[72])byte_1AA24980);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_22:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 312: range 0000000012AD9AC0-0000000012AD9DFE
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::rewriteBuffCostConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  int32_t result; // eax
  data::ChannellerSlabBuffCostExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig>,false,false>::reference v12; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v14[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:313 64 8 13 __for_end:313 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabExcelConfigMgr::rewriteBuffCostConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->channeller_slab_buff_cost_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabBuffCostExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ChannellerSlabBuffCostExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabBuffCostExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabBuffCostExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_16;
    }
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ChannellerSlabBuffCostExcelConfig>(v12);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabBuffCostExcelConfig>(v12);
    v7 = std::unordered_map<unsigned int,unsigned int>::emplace<data::QualityType const&,unsigned int const&>(
           &this->buff_quality_cost_map,
           &excel_config->buff_quality_type,
           &excel_config->buff_cost,
           &excel_config->buff_quality_type,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffCostExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
    "rewriteBuffCostConfig",
    317);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(v8, (const char (*)[66])byte_1AA24AA0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_16:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v14 == (char *)v3 )
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

// Line 326: range 0000000012AD9E00-0000000012ADA14A
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::checkLoopDungeonPreviewConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  int32_t result; // eax
  data::ChannellerSlabLoopDungeonPreviewExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false,false>::reference v11; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v13[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:327 64 8 13 __for_end:327 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabExcelConfigMgr::checkLoopDungeonPreviewConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->channeller_slab_loop_dungeon_preview_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_16;
    }
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>(v11);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>(v11);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::NewActivityExcelConfig> const,unsigned int>(
            &txt_config_mgr->new_activity_config_mgr.new_activity_excel_config_map,
            &excel_config->activity_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
    "checkLoopDungeonPreviewConfig",
    331);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v6, (const char (*)[56])byte_1AA24BC0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &excel_config->activity_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v8 = 0;
LABEL_16:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v13 == (char *)v3 )
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

// Line 340: range 0000000012ADA14C-0000000012ADA4A0
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::rewriteLoopDungeonPreviewConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::ChannellerSlabLoopDungeonPreviewExcelConfig *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false,false>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  int32_t result; // eax
  data::ChannellerSlabLoopDungeonPreviewExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false,false>::reference v13; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:341 64 8 13 __for_end:341 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabExcelConfigMgr::rewriteLoopDungeonPreviewConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->channeller_slab_loop_dungeon_preview_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_16;
    }
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>(v13);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>(v13);
    v7 = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig>::emplace<unsigned int const&,data::ChannellerSlabLoopDungeonPreviewExcelConfig const&>(
           &this->loop_dungeon_preview_map,
           &excel_config->activity_id,
           excel_config,
           (const unsigned int *)&this->loop_dungeon_preview_map,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
    "rewriteLoopDungeonPreviewConfig",
    345);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v8, (const char (*)[56])byte_1AA24CC0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->activity_id);
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

// Line 354: range 0000000012ADA4A2-0000000012ADABC4
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::checkLoopDungeonConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 first_pass_reward_id; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  char *v10; // rsi
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  int32_t result; // eax
  data::ChannellerSlabLoopDungeonExcelConfigMap *__for_range; // [rsp+18h] [rbp-198h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonExcelConfig>,false,false>::reference v21; // [rsp+20h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabLoopDungeonExcelConfig> >::type *excel_config; // [rsp+30h] [rbp-180h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-178h]
  char v24[368]; // [rsp+40h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 16 condition_id:363 64 8 15 __for_begin:355 96 8 13 __for_end:355 128 8 15 __for_begin:36"
                        "3 160 8 13 __for_end:363 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabExcelConfigMgr::checkLoopDungeonConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  __for_range = &this->channeller_slab_loop_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonExcelConfig>,false> *)(v3 + 96)) )
    {
      v9 = 1;
      goto LABEL_36;
    }
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::ChannellerSlabLoopDungeonExcelConfig>(v21);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabLoopDungeonExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabLoopDungeonExcelConfig>(v21);
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->first_pass_reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->first_pass_reward_id);
    }
    first_pass_reward_id = excel_config->first_pass_reward_id;
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            first_pass_reward_id,
                            ITEM_LIMIT_ACTIVITY_CHANNELLER_SLAB) != 1 )
      break;
    __for_range_0 = &excel_config->limiting_condition_vec;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, first_pass_reward_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, first_pass_reward_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v10 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v17 = 1;
        goto LABEL_32;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v11 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
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
      if ( !data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabLoopDungeonConditionExcelConfig(
              this,
              *(unsigned int *)(v3 + 48)) )
        break;
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
      "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
      "checkLoopDungeonConfig",
      367);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v16 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v15, (const char (*)[60])byte_1AA24E60);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v17 = 0;
LABEL_32:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v9 = 0;
      goto LABEL_36;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonExcelConfig>,false,false> *const)(v3 + 64));
  }
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
    "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
    "checkLoopDungeonConfig",
    359);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 192),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v7, (const char (*)[62])byte_1AA24E00);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &excel_config->first_pass_reward_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  v2 = -1;
  v9 = 0;
LABEL_36:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
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

// Line 377: range 0000000012ADABC6-0000000012ADABD8
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::rewriteLoopDungeonConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 382: range 0000000012ADABDA-0000000012ADB3A3
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::checkLoopDungeonDifficultyConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  uint32_t stage_id; // ecx
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // eax
  int32_t result; // eax
  data::ChannellerSlabLoopDungeonDifficultyExcelConfigMap *__for_range; // [rsp+10h] [rbp-190h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false,false>::reference v22; // [rsp+18h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig> >::type *id; // [rsp+20h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-178h]
  char v25[368]; // [rsp+30h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 17 dungeon_index:385 64 8 15 __for_begin:383 96 8 13 __for_end:383 128 32 9 <unknown> 192"
                        " 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabExcelConfigMgr::checkLoopDungeonDifficultyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  __for_range = &this->channeller_slab_loop_dungeon_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false> *)(v3 + 96)) )
      break;
    v22 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>(v22);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>(v22);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->stage_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->stage_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->stage_id);
    }
    stage_id = excel_config->stage_id;
    v8 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(v3 + 48, v6);
    }
    *(_DWORD *)(v3 + 48) = stage_id;
    if ( data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabLoopDungeonExcelConfig(
           this,
           *(unsigned int *)(v3 + 48)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->difficulty >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->difficulty >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&excel_config->difficulty);
      }
      if ( excel_config->difficulty == CHANNELLER_SLAB_DIFFICULTY_NONE
        || !data::isValidChannellerSlabDifficulty(excel_config->difficulty) )
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
          "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
          "checkLoopDungeonDifficultyConfig",
          394);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v13, (const char (*)[64])byte_1AA25040);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
      else
      {
        p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&excel_config->dungeon_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->dungeon_id >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&excel_config->dungeon_id);
        }
        if ( data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, excel_config->dungeon_id) )
        {
          v11 = 1;
        }
        else
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
            "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
            "checkLoopDungeonDifficultyConfig",
            400);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(v16, (const char (*)[68])byte_1AA250A0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &excel_config->dungeon_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
          *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v11 = 0;
        }
      }
    }
    else
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
        "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
        "checkLoopDungeonDifficultyConfig",
        388);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(v9, (const char (*)[82])byte_1AA24FC0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v11 != 1 )
    {
      v18 = 0;
      goto LABEL_39;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false,false> *const)(v3 + 64));
  }
  v18 = 1;
LABEL_39:
  if ( v18 == 1 )
    v2 = 0;
  result = v2;
  if ( v25 == (char *)v3 )
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

// Line 409: range 0000000012ADB3A4-0000000012ADBABD
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::rewriteLoopDungeonDifficultyConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  uint32_t stage_id; // ecx
  char v8; // al
  __int64 v9; // rsi
  data::ChannellerSlabDifficulty difficulty; // ecx
  char v11; // al
  std::pair<unsigned int,unsigned int> *v12; // rcx
  const data::ChannellerSlabLoopDungeonDifficultyExcelConfig *v13; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false,true>,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int v17; // eax
  std::unordered_set<unsigned int> *v18; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  int v22; // eax
  int32_t result; // eax
  data::ChannellerSlabLoopDungeonDifficultyExcelConfigMap *__for_range; // [rsp+20h] [rbp-170h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false,false>::reference v25; // [rsp+28h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig> >::type *id; // [rsp+30h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-158h]
  char v28[336]; // [rsp+40h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 17 dungeon_index:412 48 4 17 difficulty_id:413 64 8 15 __for_begin:410 96 8 13 __for_end:"
                        "410 128 8 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabExcelConfigMgr::rewriteLoopDungeonDifficultyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->channeller_slab_loop_dungeon_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false> *)(v3 + 96)) )
      break;
    v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>(v25);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>(v25);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->stage_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->stage_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->stage_id);
    }
    stage_id = excel_config->stage_id;
    v8 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(v3 + 32, v6);
    }
    *(_DWORD *)(v3 + 32) = stage_id;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    v9 = (((_BYTE)excel_config + 20) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->difficulty >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->difficulty >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->difficulty);
    }
    difficulty = excel_config->difficulty;
    v11 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(v9) = v11 != 0;
    if ( v11 != 0 && v11 <= 3 )
      __asan_report_store4(v3 + 48, v9);
    *(_DWORD *)(v3 + 48) = difficulty;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v9);
    *(std::pair<unsigned int,unsigned int> *)(v3 + 128) = std::make_pair<unsigned int &,unsigned int &>(
                                                            (unsigned int *)(v3 + 32),
                                                            (unsigned int *)(v3 + 48));
    v14 = std::unordered_map<std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>>>::emplace<std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig const&>(
            &this->loop_dungeon_difficulty_map,
            (std::pair<unsigned int,unsigned int> *)(v3 + 128),
            excel_config,
            v12,
            v13);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( !v14.second )
    {
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
        "rewriteLoopDungeonDifficultyConfig",
        416);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v15, (const char (*)[58])byte_1AA25220);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v17 = 0;
    }
    else
    {
      v18 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
              &this->loop_dungeon_map,
              (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v3 + 32));
      v19 = std::unordered_set<unsigned int>::emplace<unsigned int const&>(
              v18,
              &excel_config->dungeon_id,
              (const unsigned int *)v18);
      if ( !v19.second )
      {
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
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
          "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
          "rewriteLoopDungeonDifficultyConfig",
          421);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v20, (const char (*)[58])byte_1AA25220);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v17 = 0;
      }
      else
      {
        v17 = 1;
      }
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v22 = 0;
      goto LABEL_33;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false,false> *const)(v3 + 64));
  }
  v22 = 1;
LABEL_33:
  if ( v22 == 1 )
    v2 = 0;
  result = v2;
  if ( v28 == (char *)v3 )
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

// Line 430: range 0000000012ADBABE-0000000012ADC50E
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::checkLoopDungeonConditionConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ChannellerSlabCondition *p_condition_type; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int32_t result; // eax
  data::ChannellerSlabLoopDungeonConditionExcelConfigMap *__for_range; // [rsp+18h] [rbp-1F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonConditionExcelConfig>,false,false>::reference v22; // [rsp+20h] [rbp-1F0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ChannellerSlabLoopDungeonConditionExcelConfig> >::type *id; // [rsp+28h] [rbp-1E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabLoopDungeonConditionExcelConfig> >::type *excel_config; // [rsp+30h] [rbp-1E0h]
  const std::vector<data::DungeonLevelEntityConfig> *level_config_vec_ptr; // [rsp+38h] [rbp-1D8h]
  char v26[464]; // [rsp+40h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 15 __for_begin:431 64 8 13 __for_end:431 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabExcelConfigMgr::checkLoopDungeonConditionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  __for_range = &this->channeller_slab_loop_dungeon_condition_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonConditionExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonConditionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonConditionExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonConditionExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonConditionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonConditionExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonConditionExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_52;
    }
    v22 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonConditionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonConditionExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::ChannellerSlabLoopDungeonConditionExcelConfig>(v22);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabLoopDungeonConditionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabLoopDungeonConditionExcelConfig>(v22);
    p_condition_type = &excel_config->condition_type;
    if ( *(_BYTE *)(((unsigned __int64)p_condition_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_condition_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_condition_type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(p_condition_type);
    }
    if ( excel_config->condition_type == CHANNELLER_SLAB_CONDITION_LIMIT )
    {
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->condition_param1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&excel_config->condition_param1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&excel_config->condition_param1);
      }
      if ( !excel_config->condition_param1 )
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
          "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
          "checkLoopDungeonConditionConfig",
          437);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(v7, (const char (*)[74])byte_1AA25360);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
        v2 = -1;
        v9 = 0;
        goto LABEL_52;
      }
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->exclusive_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&excel_config->exclusive_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&excel_config->exclusive_id);
      }
      if ( !excel_config->exclusive_id )
      {
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
          "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
          "checkLoopDungeonConditionConfig",
          443);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [97],(char *[97])0>(v10, (const char (*)[97])byte_1AA253E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        v2 = -1;
        v9 = 0;
        goto LABEL_52;
      }
      goto LABEL_44;
    }
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->condition_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->condition_type >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->condition_type);
    }
    if ( excel_config->condition_type != CHANNELLER_SLAB_CONDITION_CONFIG )
      break;
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->condition_param1 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->condition_param1 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->condition_param1);
    }
    level_config_vec_ptr = DungeonExcelConfigMgr::findDungeonLevelConfigVec(
                             p_dungeon_config_mgr,
                             excel_config->condition_param1);
    if ( !level_config_vec_ptr || std::vector<data::DungeonLevelEntityConfig>::empty(level_config_vec_ptr) )
    {
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
        "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
        "checkLoopDungeonConditionConfig",
        452);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v14, (const char (*)[64])byte_1AA25480);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      v2 = -1;
      v9 = 0;
      goto LABEL_52;
    }
LABEL_44:
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->score >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->score);
    }
    if ( excel_config->score < 0 )
    {
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
        "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
        "checkLoopDungeonConditionConfig",
        468);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(v18, (const char (*)[65])byte_1AA25560);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      v2 = -1;
      v9 = 0;
      goto LABEL_52;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonConditionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonConditionExcelConfig>,false,false> *const)(v3 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)&excel_config->condition_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->condition_type >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&excel_config->condition_type);
  }
  if ( excel_config->condition_type == CHANNELLER_SLAB_LINEUP_REPLACE )
    goto LABEL_44;
  if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 288, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 288),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
    "checkLoopDungeonConditionConfig",
    462);
  v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 288),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v17 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(v16, (const char (*)[70])byte_1AA254E0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
  v2 = -1;
  v9 = 0;
LABEL_52:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
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

// Line 477: range 0000000012ADC510-0000000012ADC522
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::rewriteLoopDungeonConditionConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 482: range 0000000012ADC524-0000000012ADC8A1
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::checkLoopDungeonRewardConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  int32_t result; // eax
  data::ChannellerSlabLoopDungeonRewardExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonRewardExcelConfig>,false,false>::reference v11; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabLoopDungeonRewardExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v13[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:483 64 8 13 __for_end:483 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabExcelConfigMgr::checkLoopDungeonRewardConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->channeller_slab_loop_dungeon_reward_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonRewardExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonRewardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonRewardExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonRewardExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonRewardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonRewardExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonRewardExcelConfig>,false> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_18;
    }
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonRewardExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonRewardExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ChannellerSlabLoopDungeonRewardExcelConfig>(v11);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabLoopDungeonRewardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabLoopDungeonRewardExcelConfig>(v11);
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->reward_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            excel_config->reward_id,
                            ITEM_LIMIT_ACTIVITY_CHANNELLER_SLAB) != 1 )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonRewardExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonRewardExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityChannellerSlabExcelConfig.cpp",
    "checkLoopDungeonRewardConfig",
    487);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(v6, (const char (*)[68])byte_1AA25680);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &excel_config->reward_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v8 = 0;
LABEL_18:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v13 == (char *)v3 )
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

// Line 496: range 0000000012ADC8A2-0000000012ADC8B4
int32_t __cdecl ActivityChannellerSlabExcelConfigMgr::rewriteLoopDungeonRewardConfig(
        ActivityChannellerSlabExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 501: range 0000000012ADC8B6-0000000012ADCA98
const data::ChannellerSlabChapterExcelConfig *__fastcall ActivityChannellerSlabExcelConfigMgr::findChapterConfigByStageID(
        const ActivityChannellerSlabExcelConfigMgr *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,const data::ChannellerSlabChapterExcelConfig*> *p_stage_config_map; // rdx
  std::unordered_map<unsigned int,const data::ChannellerSlabChapterExcelConfig*> *v6; // rdx
  bool v7; // al
  const data::ChannellerSlabChapterExcelConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*>,false,false>::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 stage_id:500 64 8 8 iter:502 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChannellerSlabExcelConfigMgr::findChapterConfigByStageID;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_stage_config_map = &this->stage_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::unordered_map<unsigned int,const data::ChannellerSlabChapterExcelConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabChapterExcelConfig const*>::find(p_stage_config_map, (const std::unordered_map<unsigned int,const data::ChannellerSlabChapterExcelConfig*>::key_type *)(v2 + 48));
  v6 = &this->stage_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,const data::ChannellerSlabChapterExcelConfig*>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ChannellerSlabChapterExcelConfig const*>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig const*>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ChannellerSlabChapterExcelConfig const*>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,const data::ChannellerSlabChapterExcelConfig*>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v9->second);
    result = v9->second;
  }
  if ( v10 == (char *)v2 )
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

// Line 511: range 0000000012ADCA9A-0000000012ADCC7C
const data::ChannellerSlabDungeonExcelConfig *__fastcall ActivityChannellerSlabExcelConfigMgr::findOneoffDungeonConfigByDungeonID(
        const ActivityChannellerSlabExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,const data::ChannellerSlabDungeonExcelConfig*> *p_dungeon_config_map; // rdx
  std::unordered_map<unsigned int,const data::ChannellerSlabDungeonExcelConfig*> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,const data::ChannellerSlabDungeonExcelConfig*>,false,false>::pointer v8; // rax
  const data::ChannellerSlabDungeonExcelConfig *result; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:510 64 8 8 iter:512 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChannellerSlabExcelConfigMgr::findOneoffDungeonConfigByDungeonID;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_config_map = &this->dungeon_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,const data::ChannellerSlabDungeonExcelConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabDungeonExcelConfig const*>::find(p_dungeon_config_map, (const std::unordered_map<unsigned int,const data::ChannellerSlabDungeonExcelConfig*>::key_type *)(v2 + 48));
  v6 = &this->dungeon_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,const data::ChannellerSlabDungeonExcelConfig*>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ChannellerSlabDungeonExcelConfig const*>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabDungeonExcelConfig const*>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::ChannellerSlabDungeonExcelConfig*>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::ChannellerSlabDungeonExcelConfig*>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ChannellerSlabDungeonExcelConfig const*>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,const data::ChannellerSlabDungeonExcelConfig*>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v8->second);
    result = v8->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v10 == (char *)v2 )
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

// Line 521: range 0000000012ADCC7E-0000000012ADCE3F
const RoundCampsMap *__fastcall ActivityChannellerSlabExcelConfigMgr::getRoundCampsMapByStageID(
        const ActivityChannellerSlabExcelConfigMgr *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  StageRoundsMap *p_stage_rounds_level_config_map; // rdx
  StageRoundsMap *v6; // rdx
  bool v7; // al
  const RoundCampsMap *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 stage_id:520 64 8 8 iter:522 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChannellerSlabExcelConfigMgr::getRoundCampsMapByStageID;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_stage_rounds_level_config_map = &this->stage_rounds_level_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::find(p_stage_rounds_level_config_map, (const std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>>::key_type *)(v2 + 48));
  v6 = &this->stage_rounds_level_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > > *const)(v2 + 64))->second;
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

// Line 531: range 0000000012ADCE40-0000000012ADD001
const ChannellerSlabGroupInfo *__fastcall ActivityChannellerSlabExcelConfigMgr::findCampGroupInfoByGroupID(
        const ActivityChannellerSlabExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,ChannellerSlabGroupInfo> *p_group_info_map; // rdx
  std::unordered_map<unsigned int,ChannellerSlabGroupInfo> *v6; // rdx
  bool v7; // al
  const ChannellerSlabGroupInfo *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:530 64 8 8 iter:532 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChannellerSlabExcelConfigMgr::findCampGroupInfoByGroupID;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_info_map = &this->group_info_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,ChannellerSlabGroupInfo>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,ChannellerSlabGroupInfo>::find(
                                                                                             p_group_info_map,
                                                                                             (const std::unordered_map<unsigned int,ChannellerSlabGroupInfo>::key_type *)(v2 + 48));
  v6 = &this->group_info_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,ChannellerSlabGroupInfo>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,ChannellerSlabGroupInfo>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,ChannellerSlabGroupInfo>,false,false> *const)(v2 + 64))->second;
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

// Line 541: range 0000000012ADD002-0000000012ADD25B
const data::ChannellerSlabLevelExcelConfig *__fastcall ActivityChannellerSlabExcelConfigMgr::findLevelConfigByStageRoundCampIndex(
        const ActivityChannellerSlabExcelConfigMgr *const this,
        uint32_t stage_id,
        uint32_t round_id,
        uint32_t camp_index)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  const data::ChannellerSlabLevelExcelConfig *result; // rax
  bool v8; // al
  std::vector<const data::ChannellerSlabLevelExcelConfig*>::const_reference v9; // rax
  const std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> *round_camps_map_ptr; // [rsp+20h] [rbp-B0h]
  std::vector<const data::ChannellerSlabLevelExcelConfig*> *camp_configs_vec; // [rsp+28h] [rbp-A8h]
  char v14[160]; // [rsp+30h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 12 round_id:540 64 8 14 round_iter:547 96 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityChannellerSlabExcelConfigMgr::findLevelConfigByStageRoundCampIndex;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 48) = round_id;
  round_camps_map_ptr = ActivityChannellerSlabExcelConfigMgr::getRoundCampsMapByStageID(this, stage_id);
  if ( round_camps_map_ptr )
  {
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 64, stage_id);
    *(std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>::const_iterator *)(v4 + 64) = std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::find(round_camps_map_ptr, (const std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>::key_type *)(v4 + 48));
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 96, v4 + 48);
    *(std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>::const_iterator *)(v4 + 96) = std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::end(round_camps_map_ptr);
    v8 = std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::_Self *)(v4 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::_Self *)(v4 + 96));
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      result = 0LL;
    }
    else
    {
      camp_configs_vec = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > > *const)(v4 + 64))->second;
      if ( camp_index < std::vector<data::ChannellerSlabLevelExcelConfig const*>::size(camp_configs_vec) )
      {
        v9 = std::vector<data::ChannellerSlabLevelExcelConfig const*>::operator[](camp_configs_vec, camp_index);
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v9);
        result = *v9;
      }
      else
      {
        result = 0LL;
      }
    }
  }
  else
  {
    result = 0LL;
  }
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 561: range 0000000012ADD25C-0000000012ADD41D
const data::ChannellerSlabLoopDungeonPreviewExcelConfig *__fastcall ActivityChannellerSlabExcelConfigMgr::findLoopDungeonPreviewConfigByActivityId(
        const ActivityChannellerSlabExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig> *p_loop_dungeon_preview_map; // rdx
  std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig> *v6; // rdx
  bool v7; // al
  const data::ChannellerSlabLoopDungeonPreviewExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:560 64 8 8 iter:562 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChannellerSlabExcelConfigMgr::findLoopDungeonPreviewConfigByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_loop_dungeon_preview_map = &this->loop_dungeon_preview_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig>::find(p_loop_dungeon_preview_map, (const std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->loop_dungeon_preview_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ChannellerSlabLoopDungeonPreviewExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ChannellerSlabLoopDungeonPreviewExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 572: range 0000000012ADD41E-0000000012ADD617
bool __fastcall ActivityChannellerSlabExcelConfigMgr::isLoopDungeonConditionIdAvailable(
        const ActivityChannellerSlabExcelConfigMgr *const this,
        uint32_t dungeon_index,
        uint32_t condition_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool result; // al
  const unsigned int *M_current; // r14
  const unsigned int *v8; // rcx
  const data::ChannellerSlabLoopDungeonExcelConfig *dungeon_config_ptr; // [rsp+10h] [rbp-C0h]
  const std::vector<unsigned int> *condition_id_vec; // [rsp+18h] [rbp-B8h]
  char v12[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 16 condition_id:571 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabExcelConfigMgr::isLoopDungeonConditionIdAvailable;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = condition_id;
  dungeon_config_ptr = data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabLoopDungeonExcelConfig(
                         this,
                         dungeon_index);
  if ( dungeon_config_ptr )
  {
    condition_id_vec = &dungeon_config_ptr->limiting_condition_vec;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, dungeon_index);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::end(condition_id_vec);
    M_current = std::vector<unsigned int>::end(condition_id_vec)._M_current;
    v8 = std::vector<unsigned int>::begin(condition_id_vec)._M_current;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, dungeon_index);
    *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                   (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v8,
                                                                                                   (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                   (const unsigned int *)(v3 + 48));
    result = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
               (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
               (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96));
  }
  else
  {
    result = 0;
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

// Line 584: range 0000000012ADD618-0000000012ADD86F
const data::ChannellerSlabLoopDungeonDifficultyExcelConfig *__fastcall ActivityChannellerSlabExcelConfigMgr::findLoopDungeonDifficultyConfig(
        const ActivityChannellerSlabExcelConfigMgr *const this,
        __int64 dungeon_index,
        uint32_t difficulty_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig> > > *p_loop_dungeon_difficulty_map; // rdx
  bool v7; // al
  const data::ChannellerSlabLoopDungeonDifficultyExcelConfig *result; // rax
  char v10[208]; // [rsp+10h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 17 dungeon_index:583 48 4 17 difficulty_id:583 64 8 8 iter:585 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabExcelConfigMgr::findLoopDungeonDifficultyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 32) = dungeon_index;
  *(_DWORD *)(v3 + 48) = difficulty_id;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, dungeon_index);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v3 + 32),
                                                         (unsigned int *)(v3 + 48));
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v3 + 48);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig> > >::const_iterator *)(v3 + 64) = std::unordered_map<std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>>>::find(&this->loop_dungeon_difficulty_map, (const std::unordered_map<std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig> > >::key_type *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_loop_dungeon_difficulty_map = &this->loop_dungeon_difficulty_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v3 + 96);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig> > >::const_iterator *)(v3 + 128) = std::unordered_map<std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>>>::end(p_loop_dungeon_difficulty_map);
  v7 = std::__detail::operator==<std::pair<std::pair const<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,true> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,true> *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::ChannellerSlabLoopDungeonDifficultyExcelConfig>,false,true> *const)(v3 + 64))->second;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 594: range 0000000012ADD870-0000000012ADDAD7
__int64 __fastcall ActivityChannellerSlabExcelConfigMgr::findLoopDungeonIndexByDungeonId(
        const ActivityChannellerSlabExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  __int64 result; // rax
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *__for_range; // [rsp+10h] [rbp-D0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false>::reference v9; // [rsp+18h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *dungeon_index; // [rsp+20h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *dungeon_id_set; // [rsp+28h] [rbp-B8h]
  char v12[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 dungeon_id:593 64 8 15 __for_begin:595 96 8 13 __for_end:595";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabExcelConfigMgr::findLoopDungeonIndexByDungeonId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = dungeon_id;
  __for_range = &this->loop_dungeon_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, dungeon_id);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 96)) )
    {
      v6 = 1;
      goto LABEL_16;
    }
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v3 + 64));
    dungeon_index = std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(v9);
    dungeon_id_set = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(v9);
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
           dungeon_id_set,
           (const unsigned int *)(v3 + 48)) )
    {
      break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v3 + 64));
  }
  if ( *(_BYTE *)(((unsigned __int64)dungeon_index >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)dungeon_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(dungeon_index);
  }
  v2 = *dungeon_index;
  v6 = 0;
LABEL_16:
  if ( v6 == 1 )
    v2 = 0;
  result = v2;
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

// Line 606: range 0000000012ADDAD8-0000000012ADDD19
// local variable allocation has failed, the output may be wrong!
const data::ChannellerSlabBuffEnergyExcelConfig *__cdecl ActivityChannellerSlabExcelConfigMgr::findBuffEnergyConfigByAvatarLevel(
        const ActivityChannellerSlabExcelConfigMgr *const this,
        uint32_t target_avatar_level)
{
  const data::ChannellerSlabBuffEnergyExcelConfig *v2; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig> >::_Self *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  const data::ChannellerSlabBuffEnergyExcelConfig *result; // rax
  std::map<unsigned int,data::ChannellerSlabBuffEnergyExcelConfig> *__for_range; // [rsp+10h] [rbp-B0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig> >::reference v9; // [rsp+18h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig> >::type *avatar_level; // [rsp+20h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-98h]
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig> >::_Self *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig> >::_Self *)v4;
  }
  v3->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig> >::_Base_ptr)1102416563;
  v3[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig> >::_Base_ptr)"2 32 8 15 __for_begin:607 64 8 13 __for_end:607";
  v3[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig> >::_Base_ptr)ActivityChannellerSlabExcelConfigMgr::findBuffEnergyConfigByAvatarLevel;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  __for_range = &this->buff_energy_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], *(_QWORD *)&target_avatar_level);
  v3[4]._M_node = std::map<unsigned int,data::ChannellerSlabBuffEnergyExcelConfig>::begin(__for_range)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], *(_QWORD *)&target_avatar_level);
  v3[8]._M_node = std::map<unsigned int,data::ChannellerSlabBuffEnergyExcelConfig>::end(__for_range)._M_node;
  while ( std::operator!=(v3 + 4, v3 + 8) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig>>::operator*(v3 + 4);
    avatar_level = std::get<0ul,unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig>(v9);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig>(v9);
    if ( *(_BYTE *)(((unsigned __int64)avatar_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)avatar_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(avatar_level);
    }
    if ( target_avatar_level <= *avatar_level )
    {
      v2 = excel_config;
      v6 = 0;
      goto LABEL_16;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig>>::operator++(v3 + 4);
  }
  v6 = 1;
LABEL_16:
  if ( v6 == 1 )
    v2 = 0LL;
  result = v2;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffEnergyExcelConfig> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 619: range 0000000012ADDD1A-0000000012ADDF15
__int64 __fastcall ActivityChannellerSlabExcelConfigMgr::getBuffCostByQualityType(
        const ActivityChannellerSlabExcelConfigMgr *const this,
        __int64 quality_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_buff_quality_cost_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 16 quality_type:618 64 8 8 iter:620 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityChannellerSlabExcelConfigMgr::getBuffCostByQualityType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = quality_type;
  p_buff_quality_cost_map = &this->buff_quality_cost_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, quality_type);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_buff_quality_cost_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->buff_quality_cost_map;
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
