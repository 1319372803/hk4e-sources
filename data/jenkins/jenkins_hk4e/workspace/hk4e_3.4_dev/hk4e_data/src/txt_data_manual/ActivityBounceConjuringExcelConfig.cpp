// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityBounceConjuringExcelConfig.cpp

// Line 21: range 0000000012AC6F04-0000000012AC7228
int32_t __cdecl ActivityBounceConjuringExcelConfigMgr::checkConfig(
        ActivityBounceConjuringExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = ActivityBounceConjuringExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivityBounceConjuringExcelConfigMgr::checkBounceConjuringPreviewConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBounceConjuringExcelConfig.cpp",
      "checkConfig",
      24);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      v5,
      (const char (*)[60])"[BOUNCE_CONJURING] checkBounceConjuringPreviewConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( ActivityBounceConjuringExcelConfigMgr::checkBounceConjuringChapterConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBounceConjuringExcelConfig.cpp",
      "checkConfig",
      30);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      v7,
      (const char (*)[60])"[BOUNCE_CONJURING] checkBounceConjuringChapterConfig failed");
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

// Line 38: range 0000000012AC722A-0000000012AC754E
int32_t __cdecl ActivityBounceConjuringExcelConfigMgr::rewriteConfig(
        ActivityBounceConjuringExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityBounceConjuringExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivityBounceConjuringExcelConfigMgr::rewriteBounceConjuringPreviewConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBounceConjuringExcelConfig.cpp",
      "rewriteConfig",
      41);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
      v5,
      (const char (*)[62])"[BOUNCE_CONJURING] rewriteBounceConjuringPreviewConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( ActivityBounceConjuringExcelConfigMgr::rewriteBounceConjuringChapterConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBounceConjuringExcelConfig.cpp",
      "rewriteConfig",
      47);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
      v7,
      (const char (*)[62])"[BOUNCE_CONJURING] rewriteBounceConjuringChapterConfig failed");
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

// Line 55: range 0000000012AC7550-0000000012AC78E8
int32_t __cdecl ActivityBounceConjuringExcelConfigMgr::checkBounceConjuringPreviewConfig(
        ActivityBounceConjuringExcelConfigMgr *const this,
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
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::BounceConjuringPreviewExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:56 64 8 12 __for_end:56 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBounceConjuringExcelConfigMgr::checkBounceConjuringPreviewConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->bounce_conjuring_preview_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BounceConjuringPreviewExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BounceConjuringPreviewExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BounceConjuringPreviewExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BounceConjuringPreviewExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_18;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::BounceConjuringPreviewExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BounceConjuringPreviewExcelConfig>(v14);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    p_activity_id = &excel_config->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_activity_id);
    }
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
            p_new_activity_config_mgr,
            excel_config->activity_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityBounceConjuringExcelConfig.cpp",
    "checkBounceConjuringPreviewConfig",
    60);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v8, (const char (*)[46])byte_1AA20780);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->activity_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])byte_1AA207E0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_18:
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

// Line 69: range 0000000012AC78EA-0000000012AC83BF
int32_t __cdecl ActivityBounceConjuringExcelConfigMgr::checkBounceConjuringChapterConfig(
        ActivityBounceConjuringExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_gallery_id; // rax
  __int64 gallery_id; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  char *v13; // rsi
  unsigned int *v14; // rax
  int *v15; // rdx
  int v16; // ecx
  char v17; // al
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int v21; // edx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v22; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int32_t result; // eax
  data::BounceConjuringChapterExcelConfigMap *__for_range; // [rsp+18h] [rbp-238h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false>::reference v30; // [rsp+20h] [rbp-230h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> >::type *excel_config; // [rsp+30h] [rbp-220h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-218h]
  char v33[528]; // [rsp+40h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 13 watcher_id:79 64 8 14 __for_begin:71 96 8 12 __for_end:71 128 8 14 __for_begin:79 160 "
                        "8 12 __for_end:79 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 56 17 gallery_id_set:70";
  *(_QWORD *)(v3 + 16) = ActivityBounceConjuringExcelConfigMgr::checkBounceConjuringChapterConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218103808;
  v5[536862734] = -202116109;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 384));
  __for_range = &this->bounce_conjuring_chapter_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BounceConjuringChapterExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BounceConjuringChapterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BounceConjuringChapterExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::BounceConjuringChapterExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false> *)(v3 + 96)) )
    {
      v12 = 1;
      goto LABEL_50;
    }
    v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::BounceConjuringChapterExcelConfig>(v30);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BounceConjuringChapterExcelConfig>(v30);
    p_gallery_id = &excel_config->gallery_id;
    gallery_id = (((_BYTE)excel_config + 20) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gallery_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_gallery_id);
    }
    if ( excel_config->gallery_id )
    {
      gallery_id = excel_config->gallery_id;
      if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(&txt_config_mgr->gallery_config_mgr, gallery_id) )
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
          4u,
          "./src/txt_data_manual/ActivityBounceConjuringExcelConfig.cpp",
          "checkBounceConjuringChapterConfig",
          75);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v9, (const char (*)[48])byte_1AA20960);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &excel_config->gallery_id);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])byte_1AA207E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
        goto LABEL_50;
      }
    }
    __for_range_0 = &excel_config->watcher_id_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, gallery_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, gallery_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v13 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v21 = 1;
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
      if ( !data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
              &txt_config_mgr->new_activity_config_mgr,
              *(unsigned int *)(v3 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 63) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityBounceConjuringExcelConfig.cpp",
      "checkBounceConjuringChapterConfig",
      83);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v19 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v18, (const char (*)[48])byte_1AA209C0);
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])byte_1AA207E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v21 = 0;
LABEL_36:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v21 != 1 )
    {
      v12 = 0;
      goto LABEL_50;
    }
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->gallery_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->gallery_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->gallery_id);
    }
    if ( excel_config->gallery_id )
    {
      v22 = std::unordered_set<unsigned int>::emplace<unsigned int const&>(
              (std::unordered_set<unsigned int> *const)(v3 + 384),
              &excel_config->gallery_id,
              &excel_config->gallery_id);
      if ( !v22.second )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false> *const)(v3 + 64));
  }
  *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 32 + 127) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 320, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 320),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityBounceConjuringExcelConfig.cpp",
    "checkBounceConjuringChapterConfig",
    90);
  v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 320),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v25 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v24, (const char (*)[48])byte_1AA20960);
  v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &excel_config->gallery_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v26, (const char (*)[8])byte_1AA1BDC0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
  *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v12 = 0;
LABEL_50:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v12 == 1 )
    v2 = 0;
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 384));
  result = v2;
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
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

// Line 99: range 0000000012AC83C0-0000000012AC871E
int32_t __cdecl ActivityBounceConjuringExcelConfigMgr::rewriteBounceConjuringPreviewConfig(
        ActivityBounceConjuringExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::BounceConjuringPreviewExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::BounceConjuringPreviewExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:100 64 8 13 __for_end:100 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBounceConjuringExcelConfigMgr::rewriteBounceConjuringPreviewConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->bounce_conjuring_preview_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BounceConjuringPreviewExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BounceConjuringPreviewExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BounceConjuringPreviewExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BounceConjuringPreviewExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::BounceConjuringPreviewExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BounceConjuringPreviewExcelConfig>(v14);
    v7 = std::map<unsigned int,data::BounceConjuringPreviewExcelConfig>::emplace<unsigned int const&,data::BounceConjuringPreviewExcelConfig const&>(
           &this->bounce_conjuring_preview_config_map_,
           &excel_config->activity_id,
           excel_config,
           (const unsigned int *)&this->bounce_conjuring_preview_config_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityBounceConjuringExcelConfig.cpp",
    "rewriteBounceConjuringPreviewConfig",
    104);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v8, (const char (*)[46])byte_1AA20780);
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

// Line 113: range 0000000012AC8720-0000000012AC8A81
int32_t __cdecl ActivityBounceConjuringExcelConfigMgr::rewriteBounceConjuringChapterConfig(
        ActivityBounceConjuringExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::BounceConjuringChapterExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::BounceConjuringChapterExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:114 64 8 13 __for_end:114 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBounceConjuringExcelConfigMgr::rewriteBounceConjuringChapterConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->bounce_conjuring_chapter_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BounceConjuringChapterExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BounceConjuringChapterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BounceConjuringChapterExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BounceConjuringChapterExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::BounceConjuringChapterExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BounceConjuringChapterExcelConfig>(v14);
    v7 = std::map<unsigned int,data::BounceConjuringChapterExcelConfig>::emplace<unsigned int const&,data::BounceConjuringChapterExcelConfig const&>(
           &this->bounce_conjuring_chapter_config_map_,
           &excel_config->chapter_id,
           excel_config,
           (const unsigned int *)&this->bounce_conjuring_chapter_config_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityBounceConjuringExcelConfig.cpp",
    "rewriteBounceConjuringChapterConfig",
    118);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v8, (const char (*)[46])byte_1AA20BA0);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->chapter_id);
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

// Line 127: range 0000000012AC8A82-0000000012AC8C6E
__int64 __fastcall ActivityBounceConjuringExcelConfigMgr::getActivityStayTime(
        const ActivityBounceConjuringExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::BounceConjuringPreviewExcelConfig> *p_bounce_conjuring_preview_config_map; // rdx
  std::map<unsigned int,data::BounceConjuringPreviewExcelConfig> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig> >::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:126 64 8 8 iter:128 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBounceConjuringExcelConfigMgr::getActivityStayTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_bounce_conjuring_preview_config_map = &this->bounce_conjuring_preview_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,data::BounceConjuringPreviewExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::BounceConjuringPreviewExcelConfig>::find(
                                                                                                   p_bounce_conjuring_preview_config_map,
                                                                                                   (const std::map<unsigned int,data::BounceConjuringPreviewExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->bounce_conjuring_preview_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::BounceConjuringPreviewExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::BounceConjuringPreviewExcelConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BounceConjuringPreviewExcelConfig> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second.activity_stay_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->second.activity_stay_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v9->second.activity_stay_time);
    }
    result = v9->second.activity_stay_time;
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

// Line 138: range 0000000012AC8C70-0000000012AC8E31
const data::BounceConjuringChapterExcelConfig *__fastcall ActivityBounceConjuringExcelConfigMgr::findChapterConfigByChapterId(
        const ActivityBounceConjuringExcelConfigMgr *const this,
        __int64 chapter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::BounceConjuringChapterExcelConfig> *p_bounce_conjuring_chapter_config_map; // rdx
  std::map<unsigned int,data::BounceConjuringChapterExcelConfig> *v6; // rdx
  bool v7; // al
  const data::BounceConjuringChapterExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 chapter_id:137 64 8 8 iter:139 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBounceConjuringExcelConfigMgr::findChapterConfigByChapterId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = chapter_id;
  p_bounce_conjuring_chapter_config_map = &this->bounce_conjuring_chapter_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, chapter_id);
  *(std::map<unsigned int,data::BounceConjuringChapterExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::BounceConjuringChapterExcelConfig>::find(
                                                                                                   p_bounce_conjuring_chapter_config_map,
                                                                                                   (const std::map<unsigned int,data::BounceConjuringChapterExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->bounce_conjuring_chapter_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::BounceConjuringChapterExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::BounceConjuringChapterExcelConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> > *const)(v2 + 64))->second;
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

// Line 149: range 0000000012AC8E32-0000000012AC90B8
// local variable allocation has failed, the output may be wrong!
uint32_t __cdecl ActivityBounceConjuringExcelConfigMgr::findChapterIdByGalleryId(
        const ActivityBounceConjuringExcelConfigMgr *const this,
        uint32_t gallery_id)
{
  uint32_t chapter_id; // r14d
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t *p_gallery_id; // rax
  int v7; // eax
  uint32_t result; // eax
  data::BounceConjuringChapterExcelConfigMap *__for_range; // [rsp+10h] [rbp-B0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false>::reference v10; // [rsp+18h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-98h]
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:150 64 8 13 __for_end:150";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false>::__node_type *)ActivityBounceConjuringExcelConfigMgr::findChapterIdByGalleryId;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  __for_range = &this->bounce_conjuring_chapter_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], *(_QWORD *)&gallery_id);
  v3[4]._M_cur = std::unordered_map<unsigned int,data::BounceConjuringChapterExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], *(_QWORD *)&gallery_id);
  v3[8]._M_cur = std::unordered_map<unsigned int,data::BounceConjuringChapterExcelConfig>::end(__for_range)._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false>(
            v3 + 4,
            v3 + 8) )
    {
      v7 = 1;
      goto LABEL_18;
    }
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false>::operator*(v3 + 4);
    std::get<0ul,unsigned int const,data::BounceConjuringChapterExcelConfig>(v10);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BounceConjuringChapterExcelConfig>(v10);
    p_gallery_id = &excel_config->gallery_id;
    if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gallery_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_gallery_id);
    }
    if ( gallery_id == excel_config->gallery_id )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false>::operator++(v3 + 4);
  }
  if ( *(_BYTE *)(((unsigned __int64)&excel_config->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->chapter_id >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&excel_config->chapter_id);
  }
  chapter_id = excel_config->chapter_id;
  v7 = 0;
LABEL_18:
  if ( v7 == 1 )
    chapter_id = 0;
  result = chapter_id;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 161: range 0000000012AC90BA-0000000012AC940C
__int64 __fastcall ActivityBounceConjuringExcelConfigMgr::isContainsWatcher(
        const ActivityBounceConjuringExcelConfigMgr *const this,
        __int64 watcher_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  const unsigned int *M_current; // r14
  const unsigned int *v7; // rcx
  bool v8; // al
  int v9; // eax
  __int64 result; // rax
  unsigned __int8 v11; // [rsp+3h] [rbp-12Dh]
  data::BounceConjuringChapterExcelConfigMap *__for_range; // [rsp+18h] [rbp-118h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false>::reference v13; // [rsp+20h] [rbp-110h]
  std::vector<unsigned int> *watcher_id_vec; // [rsp+38h] [rbp-F8h]
  char v15[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 14 watcher_id:160 64 8 15 __for_begin:162 96 8 13 __for_end:162 128 8 9 <unknown> 160 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBounceConjuringExcelConfigMgr::isContainsWatcher;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202116352;
  *(_DWORD *)(v2 + 48) = watcher_id;
  __for_range = &this->bounce_conjuring_chapter_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, watcher_id);
  *(std::unordered_map<unsigned int,data::BounceConjuringChapterExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BounceConjuringChapterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, watcher_id);
  *(std::unordered_map<unsigned int,data::BounceConjuringChapterExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::BounceConjuringChapterExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false> *)(v2 + 96)) )
      break;
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false> *const)(v2 + 64));
    std::get<0ul,unsigned int const,data::BounceConjuringChapterExcelConfig>(v13);
    watcher_id_vec = &std::get<1ul,unsigned int const,data::BounceConjuringChapterExcelConfig>(v13)->watcher_id_list;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(watcher_id_vec);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    M_current = std::vector<unsigned int>::end(watcher_id_vec)._M_current;
    v7 = std::vector<unsigned int>::begin(watcher_id_vec)._M_current;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v7,
                                                                                                    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                    (const unsigned int *)(v2 + 48));
    v8 = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
           (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
           (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      v11 = 1;
      v9 = 0;
      goto LABEL_18;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>,false,false> *const)(v2 + 64));
  }
  v9 = 1;
LABEL_18:
  if ( v9 == 1 )
    v11 = 0;
  result = v11;
  if ( v15 == (char *)v2 )
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
