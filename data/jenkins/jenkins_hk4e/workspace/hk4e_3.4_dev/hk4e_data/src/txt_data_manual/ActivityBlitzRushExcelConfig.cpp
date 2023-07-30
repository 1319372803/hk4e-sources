// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityBlitzRushExcelConfig.cpp

// Line 19: range 0000000012AC4796-0000000012AC4C0B
int32_t __cdecl ActivityBlitzRushExcelConfigMgr::checkConfig(
        ActivityBlitzRushExcelConfigMgr *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityBlitzRushExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( ActivityBlitzRushExcelConfigMgr::checkBlitzRushPreviewConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBlitzRushExcelConfig.cpp",
      "checkConfig",
      22);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      v5,
      (const char (*)[46])"[BLITZ_RUSH] checkBlitzRushPreviewConfig fail");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityBlitzRushExcelConfigMgr::checkBlitzRushParkourConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBlitzRushExcelConfig.cpp",
      "checkConfig",
      27);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      v7,
      (const char (*)[46])"[BLITZ_RUSH] checkBlitzRushParkourConfig fail");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityBlitzRushExcelConfigMgr::checkBlitzRushStageConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBlitzRushExcelConfig.cpp",
      "checkConfig",
      32);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v8,
      (const char (*)[44])"[BLITZ_RUSH] checkBlitzRushStageConfig fail");
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

// Line 39: range 0000000012AC4C0C-0000000012AC4F30
int32_t __cdecl ActivityBlitzRushExcelConfigMgr::rewriteConfig(
        ActivityBlitzRushExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityBlitzRushExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivityBlitzRushExcelConfigMgr::rewriteBlitzRushPreviewConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBlitzRushExcelConfig.cpp",
      "rewriteConfig",
      42);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      v5,
      (const char (*)[48])"[BLITZ_RUSH] rewriteBlitzRushPreviewConfig fail");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( ActivityBlitzRushExcelConfigMgr::rewriteBlitzRushParkourConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBlitzRushExcelConfig.cpp",
      "rewriteConfig",
      47);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      v7,
      (const char (*)[48])"[BLITZ_RUSH] rewriteBlitzRushParkourConfig fail");
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

// Line 54: range 0000000012AC4F32-0000000012AC5293
int32_t __cdecl ActivityBlitzRushExcelConfigMgr::rewriteBlitzRushPreviewConfig(
        ActivityBlitzRushExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::BlitzRushExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::BlitzRushExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlitzRushExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:55 64 8 12 __for_end:55 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBlitzRushExcelConfigMgr::rewriteBlitzRushPreviewConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->blitz_rush_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlitzRushExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BlitzRushExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlitzRushExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BlitzRushExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BlitzRushExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlitzRushExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlitzRushExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::BlitzRushExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlitzRushExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlitzRushExcelConfig>(v14);
    v7 = std::map<unsigned int,data::BlitzRushExcelConfig>::emplace<unsigned int const&,data::BlitzRushExcelConfig const&>(
           &this->blitz_rush_preview_config_map_,
           &excel_config->activity_id,
           excel_config,
           (const unsigned int *)&this->blitz_rush_preview_config_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityBlitzRushExcelConfig.cpp",
    "rewriteBlitzRushPreviewConfig",
    59);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v8, (const char (*)[40])byte_1AA1FDC0);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->activity_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])byte_1AA1BDC0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_16:
  if ( v11 == 1 )
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

// Line 67: range 0000000012AC5294-0000000012AC55F5
int32_t __cdecl ActivityBlitzRushExcelConfigMgr::rewriteBlitzRushParkourConfig(
        ActivityBlitzRushExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::BlitzRushParkourExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::BlitzRushParkourExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> >::type *config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:68 64 8 12 __for_end:68 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBlitzRushExcelConfigMgr::rewriteBlitzRushParkourConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->blitz_rush_parkour_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlitzRushParkourExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BlitzRushParkourExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlitzRushParkourExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BlitzRushParkourExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::BlitzRushParkourExcelConfig>(v14);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlitzRushParkourExcelConfig>(v14);
    v7 = std::map<unsigned int,data::BlitzRushParkourExcelConfig>::emplace<unsigned int const&,data::BlitzRushParkourExcelConfig const&>(
           &this->group_id_to_parkour_config_map_,
           &config->group_id,
           config,
           (const unsigned int *)&this->group_id_to_parkour_config_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityBlitzRushExcelConfig.cpp",
    "rewriteBlitzRushParkourConfig",
    72);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v8, (const char (*)[44])byte_1AA1FEA0);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->group_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])byte_1AA1BDC0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_16:
  if ( v11 == 1 )
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

// Line 80: range 0000000012AC55F6-0000000012AC59AA
int32_t __cdecl ActivityBlitzRushExcelConfigMgr::checkBlitzRushParkourConfig(
        const ActivityBlitzRushExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  int32_t result; // eax
  data::BlitzRushParkourExcelConfigMap *__for_range; // [rsp+18h] [rbp-F8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false,false>::reference v14; // [rsp+20h] [rbp-F0h]
  std::tuple_element<0,std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> >::type *parkour_id; // [rsp+28h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> >::type *config; // [rsp+30h] [rbp-E0h]
  char v17[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:81 64 8 12 __for_end:81 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBlitzRushExcelConfigMgr::checkBlitzRushParkourConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->blitz_rush_parkour_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlitzRushParkourExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BlitzRushParkourExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlitzRushParkourExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BlitzRushParkourExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_18;
    }
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false,false> *const)(v3 + 32));
    parkour_id = std::get<0ul,unsigned int const,data::BlitzRushParkourExcelConfig>(v14);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlitzRushParkourExcelConfig>(v14);
    p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->group_id);
    }
    if ( !LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, config->group_id) )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityBlitzRushExcelConfig.cpp",
    "checkBlitzRushParkourConfig",
    86);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v7, (const char (*)[38])byte_1AA1FF80);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->group_id);
  v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])byte_1AA1FFE0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, parkour_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_18:
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

// Line 94: range 0000000012AC59AC-0000000012AC60B0
int32_t __cdecl ActivityBlitzRushExcelConfigMgr::checkBlitzRushPreviewConfig(
        const ActivityBlitzRushExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t *p_activity_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  data::BlitzRushExcelConfigMap *__for_range; // [rsp+10h] [rbp-180h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig>,false,false>::reference v20; // [rsp+18h] [rbp-178h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlitzRushExcelConfig> >::type *config; // [rsp+28h] [rbp-168h]
  char v22[336]; // [rsp+40h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 14 __for_begin:95 64 8 12 __for_end:95 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBlitzRushExcelConfigMgr::checkBlitzRushPreviewConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->blitz_rush_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlitzRushExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BlitzRushExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BlitzRushExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BlitzRushExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BlitzRushExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlitzRushExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlitzRushExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_30;
    }
    v20 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::BlitzRushExcelConfig>(v20);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlitzRushExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlitzRushExcelConfig>(v20);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    p_activity_id = &config->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_activity_id);
    }
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
            p_new_activity_config_mgr,
            config->activity_id) )
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
        "./src/txt_data_manual/ActivityBlitzRushExcelConfig.cpp",
        "checkBlitzRushPreviewConfig",
        100);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             v8,
             (const char (*)[21])"invalid activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v10 = 0;
      goto LABEL_30;
    }
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->dungeon_id);
    }
    if ( !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, config->dungeon_id) )
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
        "./src/txt_data_manual/ActivityBlitzRushExcelConfig.cpp",
        "checkBlitzRushPreviewConfig",
        106);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v12, (const char (*)[22])byte_1AA20120);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->dungeon_id);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v14, (const char (*)[34])byte_1AA20160);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v10 = 0;
      goto LABEL_30;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->dungeon_reward_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->dungeon_reward_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->dungeon_reward_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            config->dungeon_reward_id,
                            ITEM_LIMIT_ACTIVITY_BLITZ_RUSH_REWARD) != 1 )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityBlitzRushExcelConfig.cpp",
    "checkBlitzRushPreviewConfig",
    111);
  v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v15, (const char (*)[28])byte_1AA201C0);
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->dungeon_reward_id);
  common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])byte_1AA20200);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v10 = 0;
LABEL_30:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v22 == (char *)v3 )
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

// Line 119: range 0000000012AC60B2-0000000012AC698B
int32_t __cdecl ActivityBlitzRushExcelConfigMgr::checkBlitzRushStageConfig(
        const ActivityBlitzRushExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  char *v8; // rsi
  uint32_t *p_open_day; // rax
  uint32_t v10; // r15d
  std::tuple_element<0,std::pair<unsigned int const,data::BlitzRushStageExcelConfig> >::type *v11; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  uint32_t *v13; // rdx
  char v14; // cl
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int v20; // edx
  int32_t result; // eax
  uint32_t pre_open_day; // [rsp+2Ch] [rbp-1F4h]
  data::BlitzRushStageExcelConfigMap *__for_range; // [rsp+30h] [rbp-1F0h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+38h] [rbp-1E8h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v25; // [rsp+40h] [rbp-1E0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *stage_id_0; // [rsp+48h] [rbp-1D8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *open_day; // [rsp+50h] [rbp-1D0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushStageExcelConfig>,false,false>::reference v28; // [rsp+58h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::BlitzRushStageExcelConfig> >::type *stage_id; // [rsp+60h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlitzRushStageExcelConfig> >::type *config; // [rsp+68h] [rbp-1B8h]
  char v31[432]; // [rsp+70h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 8 15 __for_begin:126 80 8 13 __for_end:126 112 8 15 __for_begin:131 144 8 13 __for_end:131 "
                        "176 32 9 <unknown> 240 32 9 <unknown> 304 48 28 stage_id_to_open_day_map:125";
  *(_QWORD *)(v3 + 16) = ActivityBlitzRushExcelConfigMgr::checkBlitzRushStageConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862731] = -202116109;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig> const,unsigned int>(
          &this->blitz_rush_stage_excel_config_map,
          &ActivityBlitzRushExcelConfigMgr::DUNGEON_STAGE_ID) )
  {
    if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityBlitzRushExcelConfig.cpp",
      "checkBlitzRushStageConfig",
      122);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 176),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v6, (const char (*)[38])byte_1AA20340);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v7,
      &ActivityBlitzRushExcelConfigMgr::DUNGEON_STAGE_ID);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
    v2 = -1;
  }
  else
  {
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 304));
    __for_range = &this->blitz_rush_stage_excel_config_map;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 48, &ActivityBlitzRushExcelConfigMgr::DUNGEON_STAGE_ID);
    *(std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig>::const_iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 80, &ActivityBlitzRushExcelConfigMgr::DUNGEON_STAGE_ID);
    *(std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig>::const_iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig>::end(__for_range);
    while ( 1 )
    {
      v8 = (char *)(v3 + 80);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BlitzRushStageExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlitzRushStageExcelConfig>,false> *)(v3 + 48),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlitzRushStageExcelConfig>,false> *)(v3 + 80)) )
        break;
      v28 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushStageExcelConfig>,false,false> *const)(v3 + 48));
      stage_id = std::get<0ul,unsigned int const,data::BlitzRushStageExcelConfig>(v28);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlitzRushStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlitzRushStageExcelConfig>(v28);
      p_open_day = &config->open_day;
      if ( *(_BYTE *)(((unsigned __int64)p_open_day >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_open_day & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_open_day >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_open_day);
      }
      v10 = config->open_day;
      v11 = stage_id;
      v12 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v3 + 304),
              stage_id);
      v13 = v12;
      v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
      {
        LOBYTE(v11) = v14 != 0;
        __asan_report_store4(v12, v11);
      }
      *v13 = v10;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushStageExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushStageExcelConfig>,false,false> *const)(v3 + 48));
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    pre_open_day = 0;
    __for_range_0 = (std::map<unsigned int,unsigned int> *)(v3 + 304);
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, v8);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 112) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, v8);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 144) = std::map<unsigned int,unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 112),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 144)) )
      {
        v20 = 1;
        goto LABEL_35;
      }
      v25 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 112));
      stage_id_0 = std::get<0ul,unsigned int const,unsigned int>(v25);
      v15 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v25);
      open_day = v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      if ( pre_open_day >= *open_day )
        break;
      if ( *(_BYTE *)(((unsigned __int64)open_day >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)open_day & 7) + 3) >= *(_BYTE *)(((unsigned __int64)open_day >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(open_day);
      }
      pre_open_day = *open_day;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 112));
    }
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 240, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 240),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityBlitzRushExcelConfig.cpp",
      "checkBlitzRushStageConfig",
      135);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 240),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v17 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v16, (const char (*)[62])byte_1AA203A0);
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, stage_id_0);
    v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v18, (const char (*)[16])byte_1AA20400);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, open_day);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v20 = 0;
LABEL_35:
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v20 == 1 )
      v2 = 0;
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 304));
  }
  result = v2;
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 144: range 0000000012AC698C-0000000012AC6B7E
__int64 __fastcall ActivityBlitzRushExcelConfigMgr::getActivityStayTime(
        const ActivityBlitzRushExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::BlitzRushExcelConfig> *p_blitz_rush_preview_config_map; // rdx
  std::map<unsigned int,data::BlitzRushExcelConfig> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig> >::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:143 64 8 8 iter:145 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBlitzRushExcelConfigMgr::getActivityStayTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_blitz_rush_preview_config_map = &this->blitz_rush_preview_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,data::BlitzRushExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::BlitzRushExcelConfig>::find(
                                                                                      p_blitz_rush_preview_config_map,
                                                                                      (const std::map<unsigned int,data::BlitzRushExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->blitz_rush_preview_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::BlitzRushExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::BlitzRushExcelConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second.content_duration >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->second.content_duration >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v9->second.content_duration);
    }
    result = v9->second.content_duration;
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

// Line 155: range 0000000012AC6B80-0000000012AC6D41
const data::BlitzRushExcelConfig *__fastcall ActivityBlitzRushExcelConfigMgr::findBlitzRushPreviewExcelConfigByActivityId(
        const ActivityBlitzRushExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::BlitzRushExcelConfig> *p_blitz_rush_preview_config_map; // rdx
  std::map<unsigned int,data::BlitzRushExcelConfig> *v6; // rdx
  bool v7; // al
  const data::BlitzRushExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:154 64 8 8 iter:156 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBlitzRushExcelConfigMgr::findBlitzRushPreviewExcelConfigByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_blitz_rush_preview_config_map = &this->blitz_rush_preview_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,data::BlitzRushExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::BlitzRushExcelConfig>::find(
                                                                                      p_blitz_rush_preview_config_map,
                                                                                      (const std::map<unsigned int,data::BlitzRushExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->blitz_rush_preview_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::BlitzRushExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::BlitzRushExcelConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BlitzRushExcelConfig> > *const)(v2 + 64))->second;
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

// Line 166: range 0000000012AC6D42-0000000012AC6F03
const data::BlitzRushParkourExcelConfig *__fastcall ActivityBlitzRushExcelConfigMgr::findBlitzRushParkourExcelConfigByGroupId(
        const ActivityBlitzRushExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::BlitzRushParkourExcelConfig> *p_group_id_to_parkour_config_map; // rdx
  std::map<unsigned int,data::BlitzRushParkourExcelConfig> *v6; // rdx
  bool v7; // al
  const data::BlitzRushParkourExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:165 64 8 8 iter:167 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBlitzRushExcelConfigMgr::findBlitzRushParkourExcelConfigByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_id_to_parkour_config_map = &this->group_id_to_parkour_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::map<unsigned int,data::BlitzRushParkourExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::BlitzRushParkourExcelConfig>::find(
                                                                                             p_group_id_to_parkour_config_map,
                                                                                             (const std::map<unsigned int,data::BlitzRushParkourExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->group_id_to_parkour_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::BlitzRushParkourExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::BlitzRushParkourExcelConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> > *const)(v2 + 64))->second;
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
