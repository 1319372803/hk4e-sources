// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/CoopExcelConfig.cpp

// Line 19: range 0000000013A5C090-0000000013A5C2F2
int32_t __cdecl CoopExcelConfigMgr::checkConfig(CoopExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = CoopExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( CoopExcelConfigMgr::checkMainCoopConfig(this, txt_config_mgr)
    || CoopExcelConfigMgr::checkCoopPointConfig(this, txt_config_mgr)
    || CoopExcelConfigMgr::checkCoopChapterConfig(this, txt_config_mgr)
    || CoopExcelConfigMgr::checkCoopRewardConfig(this, txt_config_mgr)
    || CoopExcelConfigMgr::checkCoopCgConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/CoopExcelConfig.cpp",
      "checkConfig",
      26);
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

// Line 33: range 0000000013A5C2F4-0000000013A5C556
int32_t __cdecl CoopExcelConfigMgr::rewriteConfig(CoopExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = CoopExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( CoopExcelConfigMgr::rewriteMainCoopConfig(this, txt_config_mgr)
    || CoopExcelConfigMgr::rewriteCoopPointConfig(this, txt_config_mgr)
    || CoopExcelConfigMgr::rewriteCoopChapterConfig(this, txt_config_mgr)
    || CoopExcelConfigMgr::rewriteCoopRewardConfig(this, txt_config_mgr)
    || CoopExcelConfigMgr::rewriteCoopCgConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/CoopExcelConfig.cpp",
      "rewriteConfig",
      40);
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

// Line 47: range 0000000013A5C558-0000000013A5CA2A
int32_t __cdecl CoopExcelConfigMgr::rewriteMainCoopConfig(CoopExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v7; // rax
  const unsigned int *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  data::MainCoopExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MainCoopExcelConfig>,false,false>::reference v17; // [rsp+18h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,data::MainCoopExcelConfig> >::type *id; // [rsp+20h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MainCoopExcelConfig> >::type *config; // [rsp+28h] [rbp-118h]
  char v20[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 14 __for_begin:48 64 8 12 __for_end:48 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CoopExcelConfigMgr::rewriteMainCoopConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->main_coop_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MainCoopExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::MainCoopExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MainCoopExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MainCoopExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MainCoopExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MainCoopExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MainCoopExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_20;
    }
    v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MainCoopExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MainCoopExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::MainCoopExcelConfig>(v17);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::MainCoopExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MainCoopExcelConfig>(v17);
    v7 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->main_coop_to_series_map,
           id,
           &config->main_quest_series,
           (const unsigned int *)&this->main_coop_to_series_map,
           v6);
    if ( !v7.second )
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
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "rewriteMainCoopConfig",
        52);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v9, (const char (*)[40])byte_1AC5EF60);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v11 = 0;
      goto LABEL_20;
    }
    v12 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
            &this->series_to_main_coop_map,
            &config->main_quest_series,
            id,
            (const unsigned int *)&this->series_to_main_coop_map,
            v8);
    if ( !v12.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MainCoopExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MainCoopExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/CoopExcelConfig.cpp",
    "rewriteMainCoopConfig",
    57);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v13, (const char (*)[49])byte_1AC5EFC0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->main_quest_series);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v11 = 0;
LABEL_20:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 65: range 0000000013A5CA2C-0000000013A5E53C
int32_t __cdecl CoopExcelConfigMgr::checkMainCoopConfig(
        CoopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int v8; // eax
  std::tuple_element<0,std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *v9; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v10; // rax
  int *v11; // rdx
  int v12; // ecx
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  char *v16; // rsi
  char *v17; // rsi
  unsigned int *v18; // rax
  int *v19; // rdx
  int v20; // ecx
  char v21; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  char *v24; // rsi
  unsigned int *v25; // rax
  int *v26; // rdx
  int v27; // ecx
  char v28; // al
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int v33; // eax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  __int64 v35; // rsi
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  char *v38; // rsi
  unsigned int *v39; // rax
  int *v40; // rdx
  int v41; // ecx
  char v42; // al
  const std::set<unsigned int> *v43; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  char *v47; // rsi
  char *v48; // rsi
  unsigned int *v49; // rax
  int *v50; // rdx
  int v51; // ecx
  char v52; // al
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  int v55; // eax
  uint32_t CoopPointChapterId; // eax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  __int64 v59; // rsi
  uint32_t v60; // edx
  char v61; // al
  __int64 v62; // rsi
  uint32_t v63; // edx
  char v64; // al
  std::__optional_relop_t v65; // al
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  int v70; // edx
  int v71; // edx
  int v72; // eax
  bool is_quest_config_coop; // [rsp+27h] [rbp-4E9h]
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+28h] [rbp-4E8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::reference v77; // [rsp+30h] [rbp-4E0h]
  std::tuple_element<0,std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *chapter_id; // [rsp+38h] [rbp-4D8h]
  const std::unordered_map<unsigned int,std::set<unsigned int>>::mapped_type *parent_quest_set; // [rsp+48h] [rbp-4C8h]
  const data::MainQuestExcelConfig *main_quest_excel_config_ptr; // [rsp+60h] [rbp-4B0h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *quest_to_coop_point_map; // [rsp+68h] [rbp-4A8h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+70h] [rbp-4A0h]
  const std::unordered_map<unsigned int,std::set<unsigned int>>::mapped_type *__for_range_3; // [rsp+78h] [rbp-498h]
  char v84[1168]; // [rsp+80h] [rbp-490h] BYREF

  v3 = (unsigned __int64)v84;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1120LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "28 48 4 12 series_id:74 64 4 18 parent_quest_id:83 80 4 18 parent_quest_id:98 96 4 12 quest_id:1"
                        "13 112 4 17 coop_point_id:120 128 4 9 <unknown> 144 4 9 <unknown> 160 8 14 __for_begin:67 192 8 "
                        "12 __for_end:67 224 8 14 __for_begin:83 256 8 12 __for_end:83 288 8 14 __for_begin:98 320 8 12 _"
                        "_for_end:98 352 8 15 opt_chapter:111 384 8 15 __for_begin:113 416 8 13 __for_end:113 448 8 15 __"
                        "for_begin:120 480 8 13 __for_end:120 512 8 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672"
                        " 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 "
                        "32 9 <unknown> 1056 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CoopExcelConfigMgr::checkMainCoopConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862733] = -218959360;
  v5[536862734] = -218959360;
  v5[536862735] = -218959360;
  v5[536862736] = -218959360;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -218959118;
  v5[536862752] = -218959118;
  v5[536862754] = -202116109;
  __for_range = &this->chapter_unlock_item_map;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v3 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v3 + 192)) )
  {
    v77 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v3 + 160));
    chapter_id = std::get<0ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v77);
    std::get<1ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v77);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
            &this->main_coop_to_series_map,
            chapter_id) )
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
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkMainCoopConfig",
        71);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 544),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v6, (const char (*)[58])byte_1AC5F2E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, chapter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
      *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
      goto LABEL_134;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    v9 = chapter_id;
    v10 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->main_coop_to_series_map, chapter_id);
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
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>> const,unsigned int>(
            &txt_config_mgr->quest_config_mgr.parent_quest_series_map,
            (const unsigned int *)(v3 + 48)) )
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
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkMainCoopConfig",
        77);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v14, (const char (*)[55])byte_1AC5F340);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, chapter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
      *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
      goto LABEL_134;
    }
    v16 = (char *)(v3 + 48);
    parent_quest_set = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
                         &txt_config_mgr->quest_config_mgr.parent_quest_series_map,
                         (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
    is_quest_config_coop = 0;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v16);
    *(std::set<unsigned int>::iterator *)(v3 + 224) = std::set<unsigned int>::begin(parent_quest_set);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v16);
    *(std::set<unsigned int>::iterator *)(v3 + 256) = std::set<unsigned int>::end(parent_quest_set);
    while ( 1 )
    {
      v17 = (char *)(v3 + 256);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 224),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 256)) )
        break;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v18 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 224));
      v19 = (int *)v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v18);
      }
      v20 = *v19;
      v21 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
      if ( v21 != 0 && v21 <= 3 )
      {
        LOBYTE(v17) = v21 != 0;
        __asan_report_store4(v3 + 64, v17);
      }
      *(_DWORD *)(v3 + 64) = v20;
      v17 = (char *)(v3 + 64);
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             &txt_config_mgr->quest_config_mgr.coop_parent_quest_set,
             (const unsigned int *)(v3 + 64)) )
      {
        is_quest_config_coop = 1;
        break;
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 224));
    }
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( !is_quest_config_coop )
    {
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkMainCoopConfig",
        94);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 672),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v23 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(v22, (const char (*)[66])byte_1AC5F3A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, chapter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
      v8 = 1;
      goto LABEL_134;
    }
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v17);
    *(std::set<unsigned int>::iterator *)(v3 + 288) = std::set<unsigned int>::begin(parent_quest_set);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, v17);
    *(std::set<unsigned int>::iterator *)(v3 + 320) = std::set<unsigned int>::end(parent_quest_set);
    while ( 2 )
    {
      v24 = (char *)(v3 + 320);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 288),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 320)) )
      {
        v71 = 1;
        goto LABEL_131;
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v25 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 288));
      v26 = (int *)v25;
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v25);
      }
      v27 = *v26;
      v28 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( v28 != 0 && v28 <= 3 )
      {
        LOBYTE(v24) = v28 != 0;
        __asan_report_store4(v3 + 80, v24);
      }
      *(_DWORD *)(v3 + 80) = v27;
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
              &txt_config_mgr->quest_config_mgr.coop_parent_quest_set,
              (const unsigned int *)(v3 + 80)) )
      {
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 736, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 736),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "checkMainCoopConfig",
          102);
        v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 736),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v30 = common::milog::MiLogStream::operator<<<char [112],(char *[112])0>(v29, (const char (*)[112])byte_1AC5F420);
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, chapter_id);
        v32 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v31, (const char (*)[23])byte_1AC5F4C0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
        v33 = 0;
        goto LABEL_126;
      }
      p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 80);
      v35 = *(unsigned int *)(v3 + 80);
      main_quest_excel_config_ptr = data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(p_quest_config_mgr, v35);
      if ( !main_quest_excel_config_ptr )
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
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "checkMainCoopConfig",
          108);
        v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 800),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v37 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v36, (const char (*)[42])byte_1AC5F500);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
        *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v33 = 1;
        goto LABEL_126;
      }
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 352, v35);
      *(_QWORD *)(v3 + 352) = 0LL;
      quest_to_coop_point_map = &txt_config_mgr->quest_config_mgr.quest_to_coop_point_map;
      __for_range_2 = &main_quest_excel_config_ptr->child_quest_list;
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 384, v35);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 384) = std::vector<unsigned int>::begin(__for_range_2);
      *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 416, v35);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 416) = std::vector<unsigned int>::end(__for_range_2);
      while ( 2 )
      {
        v38 = (char *)(v3 + 416);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 384),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 416)) )
        {
          v70 = 1;
          goto LABEL_123;
        }
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
        v39 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 384));
        v40 = (int *)v39;
        if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v39);
        }
        v41 = *v40;
        v42 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
        if ( v42 != 0 && v42 <= 3 )
        {
          LOBYTE(v38) = v42 != 0;
          __asan_report_store4(v3 + 96, v38);
        }
        *(_DWORD *)(v3 + 96) = v41;
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>> const,unsigned int>(
                quest_to_coop_point_map,
                (const unsigned int *)(v3 + 96))
          || (v43 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
                      quest_to_coop_point_map,
                      (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 96)),
              !std::set<unsigned int>::size(v43)) )
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
            "./src/txt_data_manual/CoopExcelConfig.cpp",
            "checkMainCoopConfig",
            117);
          v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 864),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v46 = common::milog::MiLogStream::operator<<<char [132],(char *[132])0>(
                  v45,
                  (const char (*)[132])byte_1AC5F560);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, (const unsigned int *)(v3 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
          *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
          goto LABEL_121;
        }
        v47 = (char *)(v3 + 96);
        __for_range_3 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
                          quest_to_coop_point_map,
                          (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 96));
        *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 448, v47);
        *(std::set<unsigned int>::iterator *)(v3 + 448) = std::set<unsigned int>::begin(__for_range_3);
        *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 480, v47);
        *(std::set<unsigned int>::iterator *)(v3 + 480) = std::set<unsigned int>::end(__for_range_3);
        while ( 1 )
        {
          v48 = (char *)(v3 + 480);
          if ( !std::operator!=(
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 448),
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 480)) )
          {
            v55 = 1;
            goto LABEL_119;
          }
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
          v49 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 448));
          v50 = (int *)v49;
          if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v49);
          }
          v51 = *v50;
          v52 = *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000);
          if ( v52 != 0 && v52 <= 3 )
          {
            LOBYTE(v48) = v52 != 0;
            __asan_report_store4(v3 + 112, v48);
          }
          *(_DWORD *)(v3 + 112) = v51;
          if ( !data::CoopExcelConfigMgrBase::findCoopPointExcelConfig(this, *(unsigned int *)(v3 + 112)) )
          {
            *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 928, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 928),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/CoopExcelConfig.cpp",
              "checkMainCoopConfig",
              124);
            v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 928),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v54 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                    v53,
                    (const char (*)[62])byte_1AC5F620);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, (const unsigned int *)(v3 + 96));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
            *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v55 = 0;
            goto LABEL_119;
          }
          if ( std::optional<unsigned int>::operator bool((const std::optional<unsigned int> *const)(v3 + 352)) )
            break;
          if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 112);
          CoopPointChapterId = CoopExcelConfigMgr::getCoopPointChapterId(this, *(_DWORD *)(v3 + 112));
          if ( !data::CoopExcelConfigMgrBase::findCoopChapterExcelConfig(this, CoopPointChapterId) )
          {
            *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 992, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 992),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/CoopExcelConfig.cpp",
              "checkMainCoopConfig",
              131);
            v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 992),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v58 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
                    v57,
                    (const char (*)[80])byte_1AC5F680);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, (const unsigned int *)(v3 + 96));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
            *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v55 = 0;
            goto LABEL_119;
          }
          *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 112);
          v59 = *(unsigned int *)(v3 + 112);
          v60 = CoopExcelConfigMgr::getCoopPointChapterId(this, v59);
          v61 = *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000);
          if ( v61 != 0 && v61 <= 3 )
          {
            LOBYTE(v59) = v61 != 0;
            __asan_report_store4(v3 + 128, v59);
          }
          *(_DWORD *)(v3 + 128) = v60;
          std::optional<unsigned int>::optional<unsigned int,true>(
            (std::optional<unsigned int> *const)(v3 + 512),
            (unsigned int *)(v3 + 128));
          if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 352, v3 + 128);
          if ( *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) )
            __asan_report_load8(v3 + 512);
          *(_QWORD *)(v3 + 352) = *(_QWORD *)(v3 + 512);
          *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
LABEL_117:
          std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 448));
        }
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 112);
        v62 = *(unsigned int *)(v3 + 112);
        v63 = CoopExcelConfigMgr::getCoopPointChapterId(this, v62);
        v64 = *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000);
        if ( v64 != 0 && v64 <= 3 )
        {
          LOBYTE(v62) = v64 != 0;
          __asan_report_store4(v3 + 144, v62);
        }
        *(_DWORD *)(v3 + 144) = v63;
        v65 = std::operator!=<unsigned int,unsigned int>(
                (const std::optional<unsigned int> *)(v3 + 352),
                (const unsigned int *)(v3 + 144));
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
        if ( !v65 )
          goto LABEL_117;
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
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "checkMainCoopConfig",
          138);
        v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1056),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v67 = common::milog::MiLogStream::operator<<<char [98],(char *[98])0>(v66, (const char (*)[98])byte_1AC5F700);
        v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v67,
                (const unsigned int *)(v3 + 96));
        v69 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v68,
                (const char (*)[17])", coop_point_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, (const unsigned int *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
        *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v55 = 0;
LABEL_119:
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
        if ( v55 == 1 )
        {
LABEL_121:
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 384));
          continue;
        }
        break;
      }
      v70 = 0;
LABEL_123:
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
      if ( v70 == 1 )
        v33 = 2;
      else
        v33 = 1;
LABEL_126:
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
      if ( !v33 || v33 == 2 )
      {
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 288));
        continue;
      }
      break;
    }
    v71 = 0;
LABEL_131:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( v71 == 1 )
      v8 = 2;
    else
      v8 = 0;
LABEL_134:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !v8 )
    {
      v72 = 0;
      goto LABEL_138;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v3 + 160));
  }
  v72 = 1;
LABEL_138:
  if ( v72 == 1 )
    v2 = 0;
  if ( v84 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1120LL, v84);
  }
  return v2;
};

// Line 150: range 0000000013A5E53E-0000000013A5F8B9
int32_t __cdecl CoopExcelConfigMgr::rewriteCoopChapterConfig(
        CoopExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::set<unsigned int> *v6; // rdx
  std::tuple_element<0,std::pair<unsigned int const,data::CoopChapterExcelConfig> >::type *v7; // rsi
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  uint32_t open_material_id; // ecx
  char v13; // al
  __int64 v14; // rsi
  uint32_t open_material_num; // ecx
  char v16; // al
  const unsigned int *v17; // rcx
  std::pair<unsigned int,unsigned int> *v18; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  uint32_t v22; // r15d
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  int v27; // eax
  uint32_t v28; // r15d
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  __int64 TimeByStr; // rsi
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  std::set<unsigned int> *v38; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r15
  time_t v47; // rdi
  int v48; // eax
  data::CoopChapterExcelConfigMap *__for_range; // [rsp+20h] [rbp-400h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopChapterExcelConfig>,false,false>::reference v53; // [rsp+28h] [rbp-3F8h]
  std::tuple_element<0,std::pair<unsigned int const,data::CoopChapterExcelConfig> >::type *chapter_id; // [rsp+30h] [rbp-3F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CoopChapterExcelConfig> >::type *config; // [rsp+38h] [rbp-3E8h]
  const std::vector<data::CoopCondConfig> *__for_range_0; // [rsp+40h] [rbp-3E0h]
  __gnu_cxx::__normal_iterator<const data::CoopCondConfig*,std::vector<data::CoopCondConfig> >::reference cond; // [rsp+48h] [rbp-3D8h]
  char v58[976]; // [rsp+50h] [rbp-3D0h] BYREF

  v3 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(928LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 48 4 11 item_id:158 64 4 14 item_count:159 80 4 18 open_timestamp:179 96 8 15 __for_begin:151"
                        " 128 8 13 __for_end:151 160 8 9 <unknown> 192 8 15 __for_begin:166 224 8 13 __for_end:166 256 32"
                        " 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 "
                        "9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 40 9 <unknown> 848 40 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CoopExcelConfigMgr::rewriteCoopChapterConfig;
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
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959360;
  v5[536862746] = 62194;
  v5[536862747] = -218103808;
  v5[536862748] = -202116109;
  __for_range = &this->coop_chapter_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CoopChapterExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::CoopChapterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CoopChapterExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::CoopChapterExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::CoopChapterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CoopChapterExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CoopChapterExcelConfig>,false> *)(v3 + 128)) )
  {
    v53 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopChapterExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopChapterExcelConfig>,false,false> *const)(v3 + 96));
    chapter_id = std::get<0ul,unsigned int const,data::CoopChapterExcelConfig>(v53);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::CoopChapterExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CoopChapterExcelConfig>(v53);
    v6 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
           &this->avatar_chapter_map,
           &config->avatar_id);
    v7 = chapter_id;
    v8 = std::set<unsigned int>::insert(v6, chapter_id);
    if ( !v8.second )
    {
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "rewriteCoopChapterConfig",
        155);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v9, (const char (*)[21])byte_1AC5F9A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, chapter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((unsigned __int64)&config->open_material_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->open_material_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->open_material_id);
      }
      open_material_id = config->open_material_id;
      v13 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v7) = v13 != 0;
        __asan_report_store4(v3 + 48, v7);
      }
      *(_DWORD *)(v3 + 48) = open_material_id;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v14 = (((_BYTE)config + 44) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->open_material_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->open_material_num >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->open_material_num);
      }
      open_material_num = config->open_material_num;
      v16 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
      LOBYTE(v14) = v16 != 0;
      if ( v16 != 0 && v16 <= 3 )
        __asan_report_store4(v3 + 64, v14);
      *(_DWORD *)(v3 + 64) = open_material_num;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v14);
      *(std::pair<unsigned int,unsigned int> *)(v3 + 160) = std::make_pair<unsigned int &,unsigned int &>(
                                                              (unsigned int *)(v3 + 48),
                                                              (unsigned int *)(v3 + 64));
      v19 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::emplace<unsigned int const&,std::pair<unsigned int,unsigned int>>(
              &this->chapter_unlock_item_map,
              chapter_id,
              (std::pair<unsigned int,unsigned int> *)(v3 + 160),
              v17,
              v18);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( !v19.second )
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
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "rewriteCoopChapterConfig",
          162);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v20, (const char (*)[21])byte_1AC5F9A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, chapter_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
      else
      {
        __for_range_0 = &config->unlock_cond;
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 192, chapter_id);
        *(std::vector<data::CoopCondConfig>::const_iterator *)(v3 + 192) = std::vector<data::CoopCondConfig>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 224, chapter_id);
        *(std::vector<data::CoopCondConfig>::const_iterator *)(v3 + 224) = std::vector<data::CoopCondConfig>::end(__for_range_0);
        while ( 1 )
        {
          if ( !__gnu_cxx::operator!=<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>(
                  (const __gnu_cxx::__normal_iterator<const data::CoopCondConfig*,std::vector<data::CoopCondConfig> > *)(v3 + 192),
                  (const __gnu_cxx::__normal_iterator<const data::CoopCondConfig*,std::vector<data::CoopCondConfig> > *)(v3 + 224)) )
          {
            v27 = 1;
            goto LABEL_48;
          }
          cond = __gnu_cxx::__normal_iterator<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::CoopCondConfig*,std::vector<data::CoopCondConfig> > *const)(v3 + 192));
          if ( *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)chapter_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)chapter_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(chapter_id);
          }
          v22 = *chapter_id;
          v23 = ((v3 + 768) >> 3) + 2147450880;
          *(_DWORD *)v23 = 0;
          *(_BYTE *)(v23 + 4) = 0;
          data::CoopCondConfig::CoopCondConfig((data::CoopCondConfig *const)(v3 + 768), cond);
          LOBYTE(v22) = CoopExcelConfigMgr::checkCoopCondArgs(
                          this,
                          txt_config_mgr,
                          (data::CoopCondConfig *)(v3 + 768),
                          Chapter,
                          v22) != 0;
          data::CoopCondConfig::~CoopCondConfig((data::CoopCondConfig *const)(v3 + 768));
          v24 = ((v3 + 768) >> 3) + 2147450880;
          *(_DWORD *)v24 = -117901064;
          *(_BYTE *)(v24 + 4) = -8;
          if ( (_BYTE)v22 )
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
              "./src/txt_data_manual/CoopExcelConfig.cpp",
              "rewriteCoopChapterConfig",
              170);
            v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v26 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v25,
                    (const char (*)[33])byte_1AC5F9E0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, chapter_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
            *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v27 = 0;
            goto LABEL_48;
          }
          if ( *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)chapter_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)chapter_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(chapter_id);
          }
          v28 = *chapter_id;
          v29 = ((v3 + 848) >> 3) + 2147450880;
          *(_DWORD *)v29 = 0;
          *(_BYTE *)(v29 + 4) = 0;
          data::CoopCondConfig::CoopCondConfig((data::CoopCondConfig *const)(v3 + 848), cond);
          LOBYTE(v28) = CoopExcelConfigMgr::rewriteCoopCondConfig(this, (data::CoopCondConfig *)(v3 + 848), v28) != 0;
          data::CoopCondConfig::~CoopCondConfig((data::CoopCondConfig *const)(v3 + 848));
          v30 = ((v3 + 848) >> 3) + 2147450880;
          *(_DWORD *)v30 = -117901064;
          *(_BYTE *)(v30 + 4) = -8;
          if ( (_BYTE)v28 )
            break;
          __gnu_cxx::__normal_iterator<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::CoopCondConfig*,std::vector<data::CoopCondConfig> > *const)(v3 + 192));
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
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "rewriteCoopChapterConfig",
          175);
        v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v32 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v31, (const char (*)[39])byte_1AC5FA40);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, chapter_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
        *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v27 = 0;
LABEL_48:
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
        if ( v27 == 1 )
        {
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
          TimeByStr = (unsigned int)common::tools::TimeUtils::getTimeByStr(&config->begin_time_str);
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 80, TimeByStr);
          *(_DWORD *)(v3 + 80) = TimeByStr;
          if ( *(_DWORD *)(v3 + 80) )
          {
            v38 = std::map<unsigned int,std::set<unsigned int>>::operator[](
                    &this->time_to_chapter_map,
                    (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 80));
            v39 = std::set<unsigned int>::insert(v38, chapter_id);
            if ( !v39.second )
            {
              *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 576, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 576),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/CoopExcelConfig.cpp",
                "rewriteCoopChapterConfig",
                187);
              v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 576),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v41 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v40,
                      (const char (*)[21])byte_1AC5F9A0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, chapter_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
              *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v11 = 0;
            }
            else
            {
              *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 640, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 640),
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/txt_data_manual/CoopExcelConfig.cpp",
                "rewriteCoopChapterConfig",
                190);
              v42 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      (common::milog::MiLogStream *const)(v3 + 640),
                      (const char (*)[14])byte_1AC5FB40);
              v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, chapter_id);
              v44 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                      v43,
                      (const char (*)[23])byte_1AC5FB80);
              v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v44,
                      (const unsigned int *)(v3 + 80));
              v46 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      v45,
                      (const char (*)[29])byte_1AC5FBC0);
              *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 80);
              v47 = *(unsigned int *)(v3 + 80);
              if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
              {
                v47 = v3 + 704;
                __asan_report_store_n(v3 + 704, 32LL);
              }
              common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v3 + 704), v47);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v46, (const std::string *)(v3 + 704));
              std::string::~string((void *)(v3 + 704));
              *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
              *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
              v11 = 1;
            }
          }
          else
          {
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
              "./src/txt_data_manual/CoopExcelConfig.cpp",
              "rewriteCoopChapterConfig",
              182);
            v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 512),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v35 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    v34,
                    (const char (*)[42])byte_1AC5FAA0);
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, chapter_id);
            v37 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v36,
                    (const char (*)[18])byte_1AC5FB00);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, &config->begin_time_str);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
            *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v11 = 0;
          }
        }
        else
        {
          v11 = 0;
        }
      }
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v11 != 1 )
    {
      v48 = 0;
      goto LABEL_71;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopChapterExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopChapterExcelConfig>,false,false> *const)(v3 + 96));
  }
  v48 = 1;
LABEL_71:
  if ( v48 == 1 )
    v2 = 0;
  if ( v58 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF806C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 116) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8070) = -168430091;
  }
  return v2;
};

// Line 196: range 0000000013A5F8BA-0000000013A6032F
int32_t __cdecl CoopExcelConfigMgr::checkCoopChapterConfig(
        CoopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-20Ch]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range; // [rsp+18h] [rbp-208h]
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *__for_range_0; // [rsp+20h] [rbp-200h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::reference v25; // [rsp+28h] [rbp-1F8h]
  std::tuple_element<0,std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *chapter_id; // [rsp+30h] [rbp-1F0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *item_pair; // [rsp+38h] [rbp-1E8h]
  const data::MaterialExcelConfig *config_ptr; // [rsp+40h] [rbp-1E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v29; // [rsp+48h] [rbp-1D8h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *avatar_id; // [rsp+50h] [rbp-1D0h]
  char v31[448]; // [rsp+60h] [rbp-1C0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 8 15 __for_begin:198 64 8 13 __for_end:198 96 8 15 __for_begin:207 128 8 13 __for_end:207 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CoopExcelConfigMgr::checkCoopChapterConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  ret = 0;
  __for_range = &this->avatar_chapter_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64)) )
      break;
    v29 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 32));
    avatar_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v29);
    std::get<1ul,unsigned int const,std::set<unsigned int>>(v29);
    p_avatar_config_mgr = &txt_config_mgr->avatar_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(avatar_id);
    }
    if ( !data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, *avatar_id) )
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
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopChapterConfig",
        202);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v7, (const char (*)[45])byte_1AC5FD00);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, avatar_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->chapter_unlock_item_map;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 128)) )
  {
    v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v2 + 96));
    chapter_id = std::get<0ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v25);
    item_pair = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v25);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
            &this->main_coop_to_series_map,
            chapter_id) )
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopChapterConfig",
        211);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 224),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v9, (const char (*)[44])byte_1AC5FD60);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, chapter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      p_material_config_mgr = &txt_config_mgr->material_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)item_pair >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_pair >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_pair);
      }
      config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, item_pair->first);
      if ( config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&item_pair->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_pair->second >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&item_pair->second);
        }
        if ( !item_pair->second )
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
            "./src/txt_data_manual/CoopExcelConfig.cpp",
            "checkCoopChapterConfig",
            224);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(v14, (const char (*)[67])byte_1AC5FE40);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)item_pair);
          v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])byte_1AC5FEC0);
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &item_pair->second);
          v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v18, (const char (*)[19])byte_1AC5FF00);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &config_ptr->stack_limit);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
          *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "checkCoopChapterConfig",
          218);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(v12, (const char (*)[69])byte_1AC5FDC0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)item_pair);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v2 + 96));
  }
  result = ret;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 233: range 0000000013A60330-0000000013A60EF8
int32_t __cdecl CoopExcelConfigMgr::rewriteCoopRewardConfig(
        CoopExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::set<unsigned int> *v6; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v7; // rax
  const unsigned int *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  uint32_t v19; // r15d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  int v24; // eax
  uint32_t chapter_id; // r15d
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  int32_t result; // eax
  data::CoopRewardExcelConfigMap *__for_range; // [rsp+20h] [rbp-2A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopRewardExcelConfig>,false,false>::reference v32; // [rsp+28h] [rbp-298h]
  std::tuple_element<0,std::pair<unsigned int const,data::CoopRewardExcelConfig> >::type *config_id; // [rsp+30h] [rbp-290h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CoopRewardExcelConfig> >::type *config; // [rsp+38h] [rbp-288h]
  const std::vector<data::CoopCondConfig> *__for_range_0; // [rsp+40h] [rbp-280h]
  __gnu_cxx::__normal_iterator<const data::CoopCondConfig*,std::vector<data::CoopCondConfig> >::reference cond; // [rsp+48h] [rbp-278h]
  char v37[624]; // [rsp+50h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 8 15 __for_begin:234 64 8 13 __for_end:234 96 8 15 __for_begin:247 128 8 13 __for_end:247 "
                        "160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 40 9 <unknown> 4"
                        "96 40 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CoopExcelConfigMgr::rewriteCoopRewardConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959360;
  v5[536862735] = 62194;
  v5[536862736] = -218103808;
  v5[536862737] = -202116109;
  __for_range = &this->coop_reward_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CoopRewardExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::CoopRewardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CoopRewardExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::CoopRewardExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CoopRewardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CoopRewardExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CoopRewardExcelConfig>,false> *)(v3 + 64)) )
    {
      v13 = 1;
      goto LABEL_42;
    }
    v32 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopRewardExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopRewardExcelConfig>,false,false> *const)(v3 + 32));
    config_id = std::get<0ul,unsigned int const,data::CoopRewardExcelConfig>(v32);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::CoopRewardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CoopRewardExcelConfig>(v32);
    v6 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
           &this->chapter_reward_map,
           &config->chapter_id);
    v7 = std::set<unsigned int>::insert(v6, config_id);
    if ( !v7.second )
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
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "rewriteCoopRewardConfig",
        238);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v9, (const char (*)[42])byte_1AC60060);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, config_id);
      v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])byte_1AC600C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->chapter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v13 = 0;
      goto LABEL_42;
    }
    v14 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
            &this->coop_reward_map,
            config_id,
            &config->reward_id,
            (const unsigned int *)&this->coop_reward_map,
            v8);
    if ( !v14.second )
      break;
    __for_range_0 = &config->reward_cond;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, config_id);
    *(std::vector<data::CoopCondConfig>::const_iterator *)(v3 + 96) = std::vector<data::CoopCondConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, config_id);
    *(std::vector<data::CoopCondConfig>::const_iterator *)(v3 + 128) = std::vector<data::CoopCondConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::CoopCondConfig*,std::vector<data::CoopCondConfig> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<const data::CoopCondConfig*,std::vector<data::CoopCondConfig> > *)(v3 + 128)) )
      {
        v24 = 1;
        goto LABEL_38;
      }
      cond = __gnu_cxx::__normal_iterator<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::CoopCondConfig*,std::vector<data::CoopCondConfig> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(config_id);
      }
      v19 = *config_id;
      v20 = ((v3 + 416) >> 3) + 2147450880;
      *(_DWORD *)v20 = 0;
      *(_BYTE *)(v20 + 4) = 0;
      data::CoopCondConfig::CoopCondConfig((data::CoopCondConfig *const)(v3 + 416), cond);
      LOBYTE(v19) = CoopExcelConfigMgr::checkCoopCondArgs(
                      this,
                      txt_config_mgr,
                      (data::CoopCondConfig *)(v3 + 416),
                      Reward,
                      v19) != 0;
      data::CoopCondConfig::~CoopCondConfig((data::CoopCondConfig *const)(v3 + 416));
      v21 = ((v3 + 416) >> 3) + 2147450880;
      *(_DWORD *)v21 = -117901064;
      *(_BYTE *)(v21 + 4) = -8;
      if ( (_BYTE)v19 )
      {
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
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
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "rewriteCoopRewardConfig",
          251);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v22, (const char (*)[39])byte_1AC60100);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, config_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v24 = 0;
        goto LABEL_38;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->chapter_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->chapter_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->chapter_id);
      }
      chapter_id = config->chapter_id;
      v26 = ((v3 + 496) >> 3) + 2147450880;
      *(_DWORD *)v26 = 0;
      *(_BYTE *)(v26 + 4) = 0;
      data::CoopCondConfig::CoopCondConfig((data::CoopCondConfig *const)(v3 + 496), cond);
      LOBYTE(chapter_id) = CoopExcelConfigMgr::rewriteCoopCondConfig(
                             this,
                             (data::CoopCondConfig *)(v3 + 496),
                             chapter_id) != 0;
      data::CoopCondConfig::~CoopCondConfig((data::CoopCondConfig *const)(v3 + 496));
      v27 = ((v3 + 496) >> 3) + 2147450880;
      *(_DWORD *)v27 = -117901064;
      *(_BYTE *)(v27 + 4) = -8;
      if ( (_BYTE)chapter_id )
        break;
      __gnu_cxx::__normal_iterator<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::CoopCondConfig*,std::vector<data::CoopCondConfig> > *const)(v3 + 96));
    }
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
      "./src/txt_data_manual/CoopExcelConfig.cpp",
      "rewriteCoopRewardConfig",
      256);
    v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 352),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v29 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v28, (const char (*)[45])byte_1AC60160);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, config_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v24 = 0;
LABEL_38:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v24 != 1 )
    {
      v13 = 0;
      goto LABEL_42;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopRewardExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopRewardExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/CoopExcelConfig.cpp",
    "rewriteCoopRewardConfig",
    243);
  v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v16 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v15, (const char (*)[42])byte_1AC60060);
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, config_id);
  v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v17, (const char (*)[15])byte_1AC600C0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->chapter_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v13 = 0;
LABEL_42:
  if ( v13 == 1 )
    v2 = 0;
  result = v2;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
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

// Line 265: range 0000000013A60EFA-0000000013A615F8
int32_t __cdecl CoopExcelConfigMgr::checkCoopRewardConfig(
        CoopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  CoopExcelConfigMgr *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-184h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-180h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range_0; // [rsp+28h] [rbp-178h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v19; // [rsp+30h] [rbp-170h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *chapter_id; // [rsp+38h] [rbp-168h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v21; // [rsp+48h] [rbp-158h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *config_id; // [rsp+50h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *reward_id; // [rsp+58h] [rbp-148h]
  char v24[320]; // [rsp+60h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:267 64 8 13 __for_end:267 96 8 15 __for_begin:276 128 8 13 __for_end:276 1"
                        "60 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CoopExcelConfigMgr::checkCoopRewardConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->coop_reward_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64)) )
      break;
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 32));
    config_id = std::get<0ul,unsigned int const,unsigned int>(v21);
    v6 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v21);
    reward_id = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            *reward_id,
                            ITEM_LIMIT_COOP_TASK_REWARD) != 1 )
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
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopRewardConfig",
        271);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v7, (const char (*)[46])byte_1AC602A0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, config_id);
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])byte_1AC60300);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, reward_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->chapter_reward_map;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 128)) )
  {
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 96));
    chapter_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v19);
    std::get<1ul,unsigned int const,std::set<unsigned int>>(v19);
    v11 = this;
    if ( *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)chapter_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(chapter_id);
    }
    if ( !data::CoopExcelConfigMgrBase::findCoopChapterExcelConfig(v11, *chapter_id) )
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
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopRewardConfig",
        280);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v12, (const char (*)[46])byte_1AC60340);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, chapter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 96));
  }
  result = ret;
  if ( v24 == (char *)v2 )
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

// Line 289: range 0000000013A615FA-0000000013A624FB
int32_t __cdecl CoopExcelConfigMgr::rewriteCoopCgConfig(CoopExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::set<unsigned int> *v6; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v7; // rax
  const unsigned int *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  uint32_t CoopPointChapterId; // ecx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  std::set<unsigned int> *v18; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  uint32_t v22; // r15d
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  int v27; // eax
  uint32_t chapter_id; // r15d
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  int32_t result; // eax
  data::CoopCGExcelConfigMap *__for_range; // [rsp+20h] [rbp-320h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopCGExcelConfig>,false,false>::reference v35; // [rsp+28h] [rbp-318h]
  std::tuple_element<0,std::pair<unsigned int const,data::CoopCGExcelConfig> >::type *cg_id; // [rsp+30h] [rbp-310h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CoopCGExcelConfig> >::type *config; // [rsp+38h] [rbp-308h]
  const std::vector<data::CoopCondConfig> *__for_range_0; // [rsp+40h] [rbp-300h]
  __gnu_cxx::__normal_iterator<const data::CoopCondConfig*,std::vector<data::CoopCondConfig> >::reference cond; // [rsp+48h] [rbp-2F8h]
  char v40[752]; // [rsp+50h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 8 15 __for_begin:290 64 8 13 __for_end:290 96 8 15 __for_begin:313 128 8 13 __for_end:313 "
                        "160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 4"
                        "80 32 9 <unknown> 544 40 9 <unknown> 624 40 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CoopExcelConfigMgr::rewriteCoopCgConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959360;
  v5[536862739] = 62194;
  v5[536862740] = -218103808;
  v5[536862741] = -202116109;
  __for_range = &this->coop_cg_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CoopCGExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::CoopCGExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CoopCGExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::CoopCGExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CoopCGExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CoopCGExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CoopCGExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_54;
    }
    v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopCGExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopCGExcelConfig>,false,false> *const)(v3 + 32));
    cg_id = std::get<0ul,unsigned int const,data::CoopCGExcelConfig>(v35);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::CoopCGExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CoopCGExcelConfig>(v35);
    v6 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](&this->chapter_cg_map, &config->chapter_id);
    v7 = std::set<unsigned int>::insert(v6, cg_id);
    if ( !v7.second )
    {
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
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "rewriteCoopCgConfig",
        294);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v9, (const char (*)[28])byte_1AC604E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, cg_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v11 = 0;
      goto LABEL_54;
    }
    v12 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
            &this->cg_to_chapter_map,
            cg_id,
            &config->chapter_id,
            (const unsigned int *)&this->cg_to_chapter_map,
            v8);
    if ( !v12.second )
    {
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "rewriteCoopCgConfig",
        299);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v13, (const char (*)[28])byte_1AC604E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, cg_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      v2 = -1;
      v11 = 0;
      goto LABEL_54;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->unlock_point_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->unlock_point_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->unlock_point_id);
    }
    CoopPointChapterId = CoopExcelConfigMgr::getCoopPointChapterId(this, config->unlock_point_id);
    if ( *(_BYTE *)(((unsigned __int64)&config->chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->chapter_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->chapter_id);
    }
    if ( CoopPointChapterId != config->chapter_id )
    {
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "rewriteCoopCgConfig",
        304);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v16, (const char (*)[51])byte_1AC60520);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, cg_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v2 = -1;
      v11 = 0;
      goto LABEL_54;
    }
    v18 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
            &this->point_to_cg_map,
            &config->unlock_point_id);
    v19 = std::set<unsigned int>::insert(v18, cg_id);
    if ( !v19.second )
      break;
    __for_range_0 = &config->unlock_cond;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, cg_id);
    *(std::vector<data::CoopCondConfig>::const_iterator *)(v3 + 96) = std::vector<data::CoopCondConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, cg_id);
    *(std::vector<data::CoopCondConfig>::const_iterator *)(v3 + 128) = std::vector<data::CoopCondConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::CoopCondConfig*,std::vector<data::CoopCondConfig> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<const data::CoopCondConfig*,std::vector<data::CoopCondConfig> > *)(v3 + 128)) )
      {
        v27 = 1;
        goto LABEL_50;
      }
      cond = __gnu_cxx::__normal_iterator<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::CoopCondConfig*,std::vector<data::CoopCondConfig> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)cg_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)cg_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cg_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(cg_id);
      }
      v22 = *cg_id;
      v23 = ((v3 + 544) >> 3) + 2147450880;
      *(_DWORD *)v23 = 0;
      *(_BYTE *)(v23 + 4) = 0;
      data::CoopCondConfig::CoopCondConfig((data::CoopCondConfig *const)(v3 + 544), cond);
      LOBYTE(v22) = CoopExcelConfigMgr::checkCoopCondArgs(
                      this,
                      txt_config_mgr,
                      (data::CoopCondConfig *)(v3 + 544),
                      Cg,
                      v22) != 0;
      data::CoopCondConfig::~CoopCondConfig((data::CoopCondConfig *const)(v3 + 544));
      v24 = ((v3 + 544) >> 3) + 2147450880;
      *(_DWORD *)v24 = -117901064;
      *(_BYTE *)(v24 + 4) = -8;
      if ( (_BYTE)v22 )
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
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "rewriteCoopCgConfig",
          317);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v26 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v25, (const char (*)[29])byte_1AC60580);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, cg_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v27 = 0;
        goto LABEL_50;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->chapter_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->chapter_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->chapter_id);
      }
      chapter_id = config->chapter_id;
      v29 = ((v3 + 624) >> 3) + 2147450880;
      *(_DWORD *)v29 = 0;
      *(_BYTE *)(v29 + 4) = 0;
      data::CoopCondConfig::CoopCondConfig((data::CoopCondConfig *const)(v3 + 624), cond);
      LOBYTE(chapter_id) = CoopExcelConfigMgr::rewriteCoopCondConfig(
                             this,
                             (data::CoopCondConfig *)(v3 + 624),
                             chapter_id) != 0;
      data::CoopCondConfig::~CoopCondConfig((data::CoopCondConfig *const)(v3 + 624));
      v30 = ((v3 + 624) >> 3) + 2147450880;
      *(_DWORD *)v30 = -117901064;
      *(_BYTE *)(v30 + 4) = -8;
      if ( (_BYTE)chapter_id )
        break;
      __gnu_cxx::__normal_iterator<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::CoopCondConfig*,std::vector<data::CoopCondConfig> > *const)(v3 + 96));
    }
    *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 480, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 480),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/CoopExcelConfig.cpp",
      "rewriteCoopCgConfig",
      322);
    v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 480),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v32 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v31, (const char (*)[31])byte_1AC605C0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, cg_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
    *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v27 = 0;
LABEL_50:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v27 != 1 )
    {
      v11 = 0;
      goto LABEL_54;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopCGExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopCGExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/CoopExcelConfig.cpp",
    "rewriteCoopCgConfig",
    309);
  v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 352),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v21 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v20, (const char (*)[28])byte_1AC604E0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, cg_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
  v2 = -1;
  v11 = 0;
LABEL_54:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v40 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 331: range 0000000013A624FC-0000000013A6288F
int32_t __cdecl CoopExcelConfigMgr::checkCoopCgConfig(
        CoopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  CoopExcelConfigMgr *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v11; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *chapter_id; // [rsp+30h] [rbp-D0h]
  char v13[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:333 64 8 13 __for_end:333 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CoopExcelConfigMgr::checkCoopCgConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->chapter_reward_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64)) )
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 32));
    chapter_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v11);
    std::get<1ul,unsigned int const,std::set<unsigned int>>(v11);
    v5 = this;
    if ( *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)chapter_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(chapter_id);
    }
    if ( !data::CoopExcelConfigMgrBase::findCoopChapterExcelConfig(v5, *chapter_id) )
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
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopCgConfig",
        337);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v6, (const char (*)[42])byte_1AC606A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, chapter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 32));
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

// Line 346: range 0000000013A62890-0000000013A64C16
int32_t __cdecl CoopExcelConfigMgr::rewriteCoopPointConfig(
        CoopExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::set<unsigned int> *v6; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v7; // rax
  const unsigned int *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  uint32_t *p_chapter_id; // rsi
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v13; // rax
  const unsigned int *v14; // r8
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int type; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::set<unsigned int> *v21; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  char *v33; // rsi
  unsigned int *v34; // rax
  int *v35; // rdx
  int v36; // ecx
  char v37; // al
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  int v42; // eax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  std::unordered_set<unsigned int> *v47; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  std::vector<std::pair<unsigned int,unsigned int>> *v51; // rcx
  unsigned int *v52; // r8
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rdx
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  char v57; // al
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  const unsigned int *v60; // rcx
  std::pair<unsigned int,unsigned int> *v61; // rcx
  const unsigned int *v62; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>,bool> v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // r14
  const unsigned int *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // r14
  const unsigned int *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rdx
  char *v72; // rsi
  const unsigned int *v73; // r8
  unsigned int *v74; // rax
  const unsigned int *v75; // r8
  int *v76; // rdx
  int v77; // ecx
  char v78; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  int v82; // edx
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v83; // rax
  const unsigned int *v84; // r8
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rdx
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  unsigned int *__y; // [rsp+0h] [rbp-630h]
  bool is_finish_by_main_coop; // [rsp+2Fh] [rbp-601h]
  data::CoopPointExcelConfigMap *__for_range; // [rsp+30h] [rbp-600h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopPointExcelConfig>,false,false>::reference v94; // [rsp+38h] [rbp-5F8h]
  std::tuple_element<0,std::pair<unsigned int const,data::CoopPointExcelConfig> >::type *coop_point_id; // [rsp+40h] [rbp-5F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CoopPointExcelConfig> >::type *config; // [rsp+48h] [rbp-5E8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-5E0h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+58h] [rbp-5D8h]
  char v99[1488]; // [rsp+60h] [rbp-5D0h] BYREF

  v3 = (unsigned __int64)v99;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1440LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "27 32 4 22 post_coop_point_id:402 48 4 12 quest_id:465 64 8 15 __for_begin:347 96 8 13 __for_end"
                        ":347 128 8 15 __for_begin:402 160 8 13 __for_end:402 192 8 9 <unknown> 224 8 15 __for_begin:465 "
                        "256 8 13 __for_end:465 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknow"
                        "n> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown"
                        "> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknow"
                        "n> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CoopExcelConfigMgr::rewriteCoopPointConfig;
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
  v5[536862730] = -218959118;
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
  v5[536862758] = -218959118;
  v5[536862760] = -218959118;
  v5[536862762] = -218959118;
  v5[536862764] = -202116109;
  __for_range = &this->coop_point_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CoopPointExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::CoopPointExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CoopPointExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::CoopPointExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CoopPointExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CoopPointExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CoopPointExcelConfig>,false> *)(v3 + 96)) )
    {
      v11 = 1;
      goto LABEL_147;
    }
    v94 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopPointExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopPointExcelConfig>,false,false> *const)(v3 + 64));
    coop_point_id = std::get<0ul,unsigned int const,data::CoopPointExcelConfig>(v94);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::CoopPointExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CoopPointExcelConfig>(v94);
    v6 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
           &this->chapter_point_map,
           &config->chapter_id);
    v7 = std::set<unsigned int>::insert(v6, coop_point_id);
    if ( !v7.second )
    {
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "rewriteCoopPointConfig",
        352);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v9, (const char (*)[42])byte_1AC60980);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, coop_point_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v2 = -1;
      v11 = 0;
      goto LABEL_147;
    }
    p_chapter_id = coop_point_id;
    v13 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
            &this->point_to_chapter_map,
            coop_point_id,
            &config->chapter_id,
            (const unsigned int *)&this->point_to_chapter_map,
            v8);
    if ( !v13.second )
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
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "rewriteCoopPointConfig",
        357);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v15, (const char (*)[42])byte_1AC60980);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, coop_point_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      v2 = -1;
      v11 = 0;
      goto LABEL_147;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->type);
    }
    type = config->type;
    if ( type == 3 )
      break;
    if ( type > 3 )
      goto LABEL_33;
    if ( type == 1 )
    {
      p_chapter_id = &config->chapter_id;
      v18 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
              &this->chapter_start_point_map,
              &config->chapter_id,
              coop_point_id,
              (const unsigned int *)&this->chapter_start_point_map,
              v14);
      if ( !v18.second )
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
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "rewriteCoopPointConfig",
          366);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v19, (const char (*)[55])byte_1AC609E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &config->chapter_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        v2 = -1;
        v11 = 0;
        goto LABEL_147;
      }
    }
    else if ( type != 2 )
    {
LABEL_33:
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
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "rewriteCoopPointConfig",
        385);
      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 544),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v26 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v25, (const char (*)[48])byte_1AC60A40);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, coop_point_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
      v2 = -1;
      v11 = 0;
      goto LABEL_147;
    }
LABEL_36:
    if ( *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->type);
    }
    if ( config->type == POINT_END && std::vector<unsigned int>::size(&config->post_point_list) )
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
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "rewriteCoopPointConfig",
        393);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v29 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(v28, (const char (*)[69])byte_1AC60AA0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, coop_point_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
      v2 = -1;
      v11 = 0;
      goto LABEL_147;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->type);
    }
    if ( config->type != POINT_END && !std::vector<unsigned int>::size(&config->post_point_list) )
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
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "rewriteCoopPointConfig",
        398);
      v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 672),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v32 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(v31, (const char (*)[72])byte_1AC60B20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, coop_point_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
      v2 = -1;
      v11 = 0;
      goto LABEL_147;
    }
    __for_range_0 = &config->post_point_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_chapter_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_chapter_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v33 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v42 = 1;
        goto LABEL_84;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v34 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v35 = (int *)v34;
      if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v34);
      }
      v36 = *v35;
      v37 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v37 != 0 && v37 <= 3 )
      {
        LOBYTE(v33) = v37 != 0;
        __asan_report_store4(v3 + 32, v33);
      }
      *(_DWORD *)(v3 + 32) = v36;
      if ( *(_BYTE *)(((unsigned __int64)coop_point_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coop_point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coop_point_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(coop_point_id);
      }
      if ( !CoopExcelConfigMgr::isSameChapterPoint(this, *(_DWORD *)(v3 + 32), *coop_point_id) )
      {
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 736, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 736),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "rewriteCoopPointConfig",
          406);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 736),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v39 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(v38, (const char (*)[75])byte_1AC60BA0);
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, coop_point_id);
        v41 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v40, (const char (*)[19])byte_1AC60C20);
        v33 = (char *)(v3 + 32);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v42 = 0;
        goto LABEL_84;
      }
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      if ( CoopExcelConfigMgr::isStartCoopPoint(this, *(_DWORD *)(v3 + 32)) )
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
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "rewriteCoopPointConfig",
          411);
        v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 800),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v44 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v43, (const char (*)[63])byte_1AC60C60);
        v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, coop_point_id);
        v46 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v45, (const char (*)[19])byte_1AC60C20);
        v33 = (char *)(v3 + 32);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
        *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v42 = 0;
        goto LABEL_84;
      }
      v47 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
              &this->point_to_point_map,
              coop_point_id);
      v48 = std::unordered_set<unsigned int>::insert(
              v47,
              (const std::unordered_set<unsigned int>::value_type *)(v3 + 32));
      if ( !v48.second )
        break;
      v51 = std::unordered_map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::operator[](
              &this->chapter_point_edge_map,
              &config->chapter_id);
      std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<unsigned int const&,unsigned int &>(
        v51,
        coop_point_id,
        (unsigned int *)(v3 + 32),
        (const unsigned int *)v51,
        v52);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
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
      "./src/txt_data_manual/CoopExcelConfig.cpp",
      "rewriteCoopPointConfig",
      416);
    v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 864),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v50 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v49, (const char (*)[63])byte_1AC60CC0);
    v33 = (char *)(v3 + 32);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
    *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v42 = 0;
LABEL_84:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v42 != 1 )
    {
      v11 = 0;
      goto LABEL_147;
    }
    is_finish_by_main_coop = 0;
    if ( std::vector<unsigned int>::size(&config->end_main_coop) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->type);
      }
      if ( config->type != POINT_END )
      {
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
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "rewriteCoopPointConfig",
          426);
        v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 928),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v54 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v53, (const char (*)[56])byte_1AC60D20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, coop_point_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
        v2 = -1;
        v11 = 0;
        goto LABEL_147;
      }
      if ( std::vector<unsigned int>::size(&config->end_main_coop) != 2 )
      {
        *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 992, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 992),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "rewriteCoopPointConfig",
          431);
        v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 992),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v56 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v55, (const char (*)[55])byte_1AC60D80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, coop_point_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
        v2 = -1;
        v11 = 0;
        goto LABEL_147;
      }
      if ( std::vector<unsigned int>::size(&config->end_quest_list) )
        goto LABEL_101;
      if ( *(_BYTE *)(((unsigned __int64)&config->accept_quest >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->accept_quest >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->accept_quest);
      }
      if ( config->accept_quest )
LABEL_101:
        v57 = 1;
      else
        v57 = 0;
      if ( v57 )
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
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "rewriteCoopPointConfig",
          436);
        v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1056),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v59 = common::milog::MiLogStream::operator<<<char [90],(char *[90])0>(v58, (const char (*)[90])byte_1AC60DE0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, coop_point_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
        v2 = -1;
        v11 = 0;
        goto LABEL_147;
      }
      is_finish_by_main_coop = 1;
    }
    if ( is_finish_by_main_coop )
    {
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      __y = (unsigned int *)std::vector<unsigned int>::operator[](&config->end_main_coop, 1uLL);
      v60 = std::vector<unsigned int>::operator[](&config->end_main_coop, 0LL);
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, 0LL);
      *(std::pair<unsigned int,unsigned int> *)(v3 + 192) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                              v60,
                                                              __y);
      v63 = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::emplace<std::pair<unsigned int,unsigned int>,unsigned int const&>(
              &this->main_coop_finish_point_map,
              (std::pair<unsigned int,unsigned int> *)(v3 + 192),
              coop_point_id,
              v61,
              v62);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( !v63.second )
      {
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
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "rewriteCoopPointConfig",
          453);
        v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1120),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v65 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v64, (const char (*)[44])byte_1AC60E60);
        v66 = std::vector<unsigned int>::operator[](&config->end_main_coop, 0LL);
        v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, v66);
        v68 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v67, (const char (*)[18])byte_1AC60EC0);
        v69 = std::vector<unsigned int>::operator[](&config->end_main_coop, 1uLL);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, v69);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1120));
        v2 = -1;
        v11 = 0;
        goto LABEL_147;
      }
    }
    else
    {
      if ( !std::vector<unsigned int>::size(&config->end_quest_list) )
      {
        *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1184) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1184, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1184),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "rewriteCoopPointConfig",
          462);
        v70 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1184),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v71 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v70, (const char (*)[51])byte_1AC60F00);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, coop_point_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1184));
        v2 = -1;
        v11 = 0;
        goto LABEL_147;
      }
      __for_range_1 = &config->end_quest_list;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v33);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v33);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v72 = (char *)(v3 + 256);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256)) )
        {
          v82 = 1;
          goto LABEL_135;
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v74 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
        v76 = (int *)v74;
        if ( *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v74 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v74);
        }
        v77 = *v76;
        v78 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v78 != 0 && v78 <= 3 )
        {
          LOBYTE(v72) = v78 != 0;
          __asan_report_store4(v3 + 48, v72);
        }
        *(_DWORD *)(v3 + 48) = v77;
        v79 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
                &this->quest_finish_point_map,
                (unsigned int *)(v3 + 48),
                coop_point_id,
                (unsigned int *)&this->quest_finish_point_map,
                v75);
        if ( !v79.second )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
      }
      *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1248) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1248, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1248),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "rewriteCoopPointConfig",
        469);
      v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1248),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v81 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v80, (const char (*)[59])byte_1AC60F60);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1248));
      *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v82 = 0;
LABEL_135:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      if ( v82 != 1 )
      {
        v11 = 0;
        goto LABEL_147;
      }
      v83 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
              &this->point_accept_quest_map,
              coop_point_id,
              &config->accept_quest,
              (const unsigned int *)&this->point_accept_quest_map,
              v73);
      if ( !v83.second )
      {
        *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1312) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1343) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1343) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1312, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1312),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "rewriteCoopPointConfig",
          476);
        v85 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1312),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v86 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v85, (const char (*)[42])byte_1AC60980);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v86, coop_point_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1312));
        v2 = -1;
        v11 = 0;
        goto LABEL_147;
      }
      v87 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
              &this->quest_start_point_map,
              &config->accept_quest,
              coop_point_id,
              (const unsigned int *)&this->quest_start_point_map,
              v84);
      if ( !v87.second )
      {
        *(_DWORD *)(((v3 + 1376) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1376) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1407) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1407) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1376, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1376),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "rewriteCoopPointConfig",
          481);
        v88 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1376),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v89 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v88, (const char (*)[60])byte_1AC60FC0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v89, &config->accept_quest);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1376));
        v2 = -1;
        v11 = 0;
        goto LABEL_147;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopPointExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CoopPointExcelConfig>,false,false> *const)(v3 + 64));
  }
  v21 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
          &this->chapter_end_point_map,
          &config->chapter_id);
  p_chapter_id = coop_point_id;
  v22 = std::set<unsigned int>::insert(v21, coop_point_id);
  if ( v22.second )
    goto LABEL_36;
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
    "./src/txt_data_manual/CoopExcelConfig.cpp",
    "rewriteCoopPointConfig",
    378);
  v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 480),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v24 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v23, (const char (*)[42])byte_1AC60980);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, coop_point_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
  v2 = -1;
  v11 = 0;
LABEL_147:
  if ( v11 == 1 )
    v2 = 0;
  if ( v99 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8070) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8078) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8080) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8088) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8090) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80A0) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80A8) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80B0) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1440LL, v99);
  }
  return v2;
};

// Line 490: range 0000000013A64C18-0000000013A67451
int32_t __cdecl CoopExcelConfigMgr::checkCoopPointConfig(
        CoopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *v6; // rsi
  unsigned __int64 v7; // rax
  const std::pair<unsigned int const,std::set<unsigned int> > *v8; // rax
  CoopExcelConfigMgr *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int v14; // r15d
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int v19; // edx
  unsigned __int64 v20; // rax
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::size_type v21; // r15
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::size_type v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::unordered_map<unsigned int,std::set<unsigned int>>::size_type v27; // rax
  char *v28; // rsi
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  _BOOL4 v31; // edx
  unsigned __int64 v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  int v37; // r15d
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  unsigned __int64 v42; // rax
  int v43; // edx
  unsigned __int64 v44; // rax
  char *v45; // rsi
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rdx
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rdx
  int v51; // eax
  __int64 v52; // rsi
  __int64 v53; // rdx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rdx
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rdx
  __int64 v58; // rsi
  uint32_t CoopPointChapterId; // edx
  char v60; // al
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rdx
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v65; // rax
  int *v66; // rdx
  int v67; // ecx
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rdx
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rdx
  QuestExcelConfigMgr *v72; // rcx
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rdx
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rdx
  int v77; // eax
  __int64 v78; // rsi
  uint32_t v79; // edx
  char v80; // al
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rdx
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v85; // rax
  int *v86; // rdx
  int v87; // ecx
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rdx
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rdx
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range; // [rsp+28h] [rbp-778h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *chapter_id; // [rsp+30h] [rbp-770h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *point_set; // [rsp+38h] [rbp-768h]
  std::unordered_map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>> *__for_range_0; // [rsp+40h] [rbp-760h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> >,false,false>::reference v101; // [rsp+48h] [rbp-758h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > >::type *chapter_id_0; // [rsp+50h] [rbp-750h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > >::type *edge_vec; // [rsp+58h] [rbp-748h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_1; // [rsp+60h] [rbp-740h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v105; // [rsp+68h] [rbp-738h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *quest_id; // [rsp+70h] [rbp-730h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *coop_point_id; // [rsp+78h] [rbp-728h]
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+80h] [rbp-720h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_2; // [rsp+88h] [rbp-718h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v110; // [rsp+90h] [rbp-710h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *quest_id_0; // [rsp+98h] [rbp-708h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *coop_point_id_0; // [rsp+A0h] [rbp-700h]
  const data::QuestExcelConfig *quest_config_ptr_0; // [rsp+A8h] [rbp-6F8h]
  char v114[1776]; // [rsp+B0h] [rbp-6F0h] BYREF

  v3 = (unsigned __int64)v114;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1728LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "32 32 4 9 <unknown> 48 4 9 <unknown> 64 8 15 __for_begin:491 96 8 13 __for_end:491 128 8 9 <unkn"
                        "own> 160 8 9 <unknown> 192 8 15 __for_begin:516 224 8 13 __for_end:516 256 8 15 __for_begin:539 "
                        "288 8 13 __for_end:539 320 8 15 __for_begin:570 352 8 13 __for_end:570 384 24 9 cycle:524 448 32"
                        " 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 "
                        "11 err_msg:525 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088"
                        " 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> "
                        "1408 32 9 <unknown> 1472 32 9 <unknown> 1536 56 9 <unknown> 1632 56 28 quest_unload_chapter_set:538";
  *(_QWORD *)(v3 + 16) = CoopExcelConfigMgr::checkCoopPointConfig;
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
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -234881024;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -218959118;
  v5[536862753] = -218959118;
  v5[536862755] = -218959118;
  v5[536862757] = -218959118;
  v5[536862759] = -218959118;
  v5[536862761] = -218959118;
  v5[536862763] = -218959118;
  v5[536862765] = -218959118;
  v5[536862767] = -218959118;
  v5[536862769] = -234881024;
  v5[536862770] = -218959118;
  v5[536862772] = -218103808;
  v5[536862773] = -202116109;
  __for_range = &this->chapter_point_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range);
  while ( 1 )
  {
    v6 = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 96)) )
      break;
    v7 = ((v3 + 1536) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_WORD *)(v7 + 4) = 0;
    *(_BYTE *)(v7 + 6) = 0;
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64));
    std::pair<unsigned int const,std::set<unsigned int>>::pair(
      (std::pair<unsigned int const,std::set<unsigned int> > *const)(v3 + 1536),
      v8);
    chapter_id = std::get<0ul,unsigned int const,std::set<unsigned int>>((const std::pair<unsigned int const,std::set<unsigned int> > *)(v3 + 1536));
    point_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>((const std::pair<unsigned int const,std::set<unsigned int> > *)(v3 + 1536));
    v9 = this;
    if ( *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)chapter_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(chapter_id);
    }
    if ( data::CoopExcelConfigMgrBase::findCoopChapterExcelConfig(v9, *chapter_id) )
    {
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
              &this->chapter_start_point_map,
              chapter_id) )
      {
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "checkCoopPointConfig",
          500);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v15, (const char (*)[42])byte_1AC613C0);
        v6 = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)chapter_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, chapter_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
      }
      else
      {
        v6 = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)chapter_id;
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>>,unsigned int>(
                &this->chapter_end_point_map,
                chapter_id) )
        {
          *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 576, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 576),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/CoopExcelConfig.cpp",
            "checkCoopPointConfig",
            505);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 576),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v17, (const char (*)[42])byte_1AC61420);
          v6 = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)chapter_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, chapter_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
          *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
        }
        else
        {
          v14 = 1;
        }
      }
    }
    else
    {
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
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopPointConfig",
        495);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v10, (const char (*)[41])byte_1AC61320);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, chapter_id);
      v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v12, (const char (*)[30])byte_1AC61380);
      v6 = point_set;
      common::milog::MiLogStream::operator<<<unsigned int>(v13, point_set);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
    }
    std::pair<unsigned int const,std::set<unsigned int>>::~pair((std::pair<unsigned int const,std::set<unsigned int> > *const)(v3 + 1536));
    if ( v14 != 1 )
    {
      v19 = 0;
      goto LABEL_29;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64));
  }
  v19 = 1;
LABEL_29:
  v20 = ((v3 + 1536) >> 3) + 2147450880;
  *(_DWORD *)v20 = -117901064;
  *(_WORD *)(v20 + 4) = -1800;
  *(_BYTE *)(v20 + 6) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v19 != 1 )
    goto LABEL_145;
  v21 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::size(&this->chapter_unlock_item_map);
  if ( v21 != std::unordered_map<unsigned int,std::set<unsigned int>>::size(&this->chapter_point_map) )
  {
    *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 640, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 640),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/CoopExcelConfig.cpp",
      "checkCoopPointConfig",
      511);
    v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 640),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v23 = common::milog::MiLogStream::operator<<<char [120],(char *[120])0>(v22, (const char (*)[120])byte_1AC61480);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    v24 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::size(&this->chapter_unlock_item_map);
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      v24 = __asan_report_store8(v3 + 128, byte_1AC61480);
    *(_QWORD *)(v3 + 128) = v24;
    v25 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v23,
            (const unsigned __int64 *)(v3 + 128));
    v26 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v25, (const char (*)[40])byte_1AC61520);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v27 = std::unordered_map<unsigned int,std::set<unsigned int>>::size(&this->chapter_point_map);
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      v27 = __asan_report_store8(v3 + 160, byte_1AC61520);
    *(_QWORD *)(v3 + 160) = v27;
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v26, (const unsigned __int64 *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
    v2 = -1;
    goto LABEL_145;
  }
  __for_range_0 = &this->chapter_point_edge_map;
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, v6);
  *(std::unordered_map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 224, v6);
  *(std::unordered_map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::end(__for_range_0);
  while ( 1 )
  {
    v28 = (char *)(v3 + 224);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> >,false> *)(v3 + 192),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> >,false> *)(v3 + 224)) )
      break;
    v101 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> >,false,false> *const)(v3 + 192));
    chapter_id_0 = std::get<0ul,unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>(v101);
    edge_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>(v101);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>,unsigned int>(
            &this->chapter_unlock_item_map,
            chapter_id_0) )
    {
      *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 704, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 704),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopPointConfig",
        520);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 704),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v30 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v29, (const char (*)[44])byte_1AC61580);
      v28 = (char *)chapter_id_0;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, chapter_id_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
      *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v31 = 0;
    }
    else
    {
      v32 = ((v3 + 384) >> 3) + 2147450880;
      *(_WORD *)v32 = 0;
      *(_BYTE *)(v32 + 2) = 0;
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 384));
      *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 768);
      v28 = (char *)(v3 + 384);
      if ( common::tools::AlgorithmUtils::hasCycle(
             edge_vec,
             (std::vector<unsigned int> *)(v3 + 384),
             (std::string *)(v3 + 768)) )
      {
        *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 832) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 832, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 832),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "checkCoopPointConfig",
          528);
        v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 832),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v34 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                v33,
                (const char (*)[32])"CoopPoint dependency has cycle:");
        v35 = common::milog::MiLogStream::operator<<<unsigned int>(v34, (const std::vector<unsigned int> *)(v3 + 384));
        v36 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v35, (const char (*)[15])byte_1AC600C0);
        v28 = (char *)chapter_id_0;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, chapter_id_0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
        *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v37 = 0;
      }
      else if ( (unsigned __int8)std::string::empty() != 1 )
      {
        *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 896) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 896, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 896),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "checkCoopPointConfig",
          533);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 896),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v39 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                v38,
                (const char (*)[38])"CoopPoint cycle check error err_msg: ");
        v40 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, (const std::string *)(v3 + 768));
        v41 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v40, (const char (*)[15])byte_1AC600C0);
        v28 = (char *)chapter_id_0;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, chapter_id_0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
        *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v37 = 0;
      }
      else
      {
        v37 = 1;
      }
      std::string::~string((void *)(v3 + 768));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 384));
      v31 = v37 == 1;
    }
    v42 = ((v3 + 384) >> 3) + 2147450880;
    *(_WORD *)v42 = -1800;
    *(_BYTE *)(v42 + 2) = -8;
    *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
    if ( !v31 )
    {
      v43 = 0;
      goto LABEL_62;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> >,false,false> *const)(v3 + 192));
  }
  v43 = 1;
LABEL_62:
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
  if ( v43 != 1 )
    goto LABEL_145;
  v44 = ((v3 + 1632) >> 3) + 2147450880;
  *(_DWORD *)v44 = 0;
  *(_WORD *)(v44 + 4) = 0;
  *(_BYTE *)(v44 + 6) = 0;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 1632));
  __for_range_1 = &this->quest_start_point_map;
  *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 256, v28);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 256) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range_1);
  *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 288, v28);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 288) = std::unordered_map<unsigned int,unsigned int>::end(__for_range_1);
  while ( 1 )
  {
    v45 = (char *)(v3 + 288);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 256),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 288)) )
    {
      v51 = 1;
      goto LABEL_101;
    }
    v105 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 256));
    quest_id = std::get<0ul,unsigned int const,unsigned int>(v105);
    coop_point_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v105);
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)quest_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)quest_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(quest_id);
    }
    quest_config_ptr = data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, *quest_id);
    if ( !quest_config_ptr )
    {
      *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 960, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 960),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopPointConfig",
        544);
      v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 960),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v48 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v47, (const char (*)[50])byte_1AC61680);
      v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, coop_point_id);
      v50 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v49, (const char (*)[15])byte_1AC616E0);
      v45 = (char *)quest_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, quest_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
      *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v51 = 0;
      goto LABEL_101;
    }
    v52 = ((_BYTE)quest_config_ptr - 66) & 7;
    v53 = (*(_BYTE *)(((unsigned __int64)&quest_config_ptr->is_rewind >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v52 >= *(_BYTE *)(((unsigned __int64)&quest_config_ptr->is_rewind >> 3) + 0x7FFF8000));
    if ( (_BYTE)v53 )
      __asan_report_load1(&quest_config_ptr->is_rewind, v52, v53);
    if ( !quest_config_ptr->is_rewind )
    {
      *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1024) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1024, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1024),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopPointConfig",
        549);
      v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1024),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v55 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v54, (const char (*)[56])byte_1AC61720);
      v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, coop_point_id);
      v57 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v56, (const char (*)[15])byte_1AC616E0);
      v45 = (char *)quest_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, quest_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
      *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v51 = 0;
      goto LABEL_101;
    }
    if ( !std::vector<unsigned int>::size(&quest_config_ptr->coop_point_list) )
    {
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((unsigned __int64)coop_point_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coop_point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coop_point_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(coop_point_id);
      }
      v58 = *coop_point_id;
      CoopPointChapterId = CoopExcelConfigMgr::getCoopPointChapterId(this, v58);
      v60 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v60 != 0 && v60 <= 3 )
      {
        LOBYTE(v58) = v60 != 0;
        __asan_report_store4(v3 + 32, v58);
      }
      *(_DWORD *)(v3 + 32) = CoopPointChapterId;
      std::unordered_set<unsigned int>::insert(
        (std::unordered_set<unsigned int> *const)(v3 + 1632),
        (std::unordered_set<unsigned int>::value_type *)(v3 + 32));
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      goto LABEL_99;
    }
    if ( std::vector<unsigned int>::size(&quest_config_ptr->coop_point_list) > 1 )
      break;
    v65 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::front(&quest_config_ptr->coop_point_list);
    v66 = (int *)v65;
    if ( *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v65 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v65);
    }
    v67 = *v66;
    if ( *(_BYTE *)(((unsigned __int64)coop_point_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coop_point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coop_point_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(coop_point_id);
    }
    if ( v67 != *coop_point_id )
    {
      *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1152) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1152, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1152),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopPointConfig",
        565);
      v68 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1152),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v69 = common::milog::MiLogStream::operator<<<char [96],(char *[96])0>(v68, (const char (*)[96])byte_1AC61800);
      v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, coop_point_id);
      v71 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v70, (const char (*)[15])byte_1AC616E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, quest_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1152));
      *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = -117901064;
    }
LABEL_99:
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 256));
  }
  *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 1088) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 1088, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 1088),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/CoopExcelConfig.cpp",
    "checkCoopPointConfig",
    560);
  v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 1088),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v62 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(v61, (const char (*)[71])byte_1AC61780);
  v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, coop_point_id);
  v64 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v63, (const char (*)[15])byte_1AC616E0);
  v45 = (char *)quest_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, quest_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1088));
  *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v51 = 0;
LABEL_101:
  *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
  if ( v51 != 1 )
    goto LABEL_144;
  __for_range_2 = &this->quest_finish_point_map;
  *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 320, v45);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 320) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range_2);
  *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 352, v45);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 352) = std::unordered_map<unsigned int,unsigned int>::end(__for_range_2);
  while ( 2 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 320),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 352)) )
    {
      v77 = 1;
      goto LABEL_134;
    }
    v110 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 320));
    quest_id_0 = std::get<0ul,unsigned int const,unsigned int>(v110);
    coop_point_id_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v110);
    v72 = &txt_config_mgr->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)quest_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)quest_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)quest_id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(quest_id_0);
    }
    quest_config_ptr_0 = data::QuestExcelConfigMgrBase::findQuestExcelConfig(v72, *quest_id_0);
    if ( !quest_config_ptr_0 )
    {
      *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1216) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1216, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1216),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopPointConfig",
        575);
      v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1216),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v74 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v73, (const char (*)[50])byte_1AC61880);
      v75 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, coop_point_id_0);
      v76 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v75, (const char (*)[15])byte_1AC616E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, quest_id_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1216));
      *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v77 = 0;
      goto LABEL_134;
    }
    if ( !std::vector<unsigned int>::size(&quest_config_ptr_0->coop_point_list) )
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((unsigned __int64)coop_point_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coop_point_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coop_point_id_0 >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(coop_point_id_0);
      }
      v78 = *coop_point_id_0;
      v79 = CoopExcelConfigMgr::getCoopPointChapterId(this, v78);
      v80 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v80 != 0 && v80 <= 3 )
      {
        LOBYTE(v78) = v80 != 0;
        __asan_report_store4(v3 + 48, v78);
      }
      *(_DWORD *)(v3 + 48) = v79;
      std::unordered_set<unsigned int>::insert(
        (std::unordered_set<unsigned int> *const)(v3 + 1632),
        (std::unordered_set<unsigned int>::value_type *)(v3 + 48));
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
LABEL_132:
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 320));
      continue;
    }
    break;
  }
  if ( std::vector<unsigned int>::size(&quest_config_ptr_0->coop_point_list) <= 1 )
  {
    v85 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::front(&quest_config_ptr_0->coop_point_list);
    v86 = (int *)v85;
    if ( *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v85 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v85);
    }
    v87 = *v86;
    if ( *(_BYTE *)(((unsigned __int64)coop_point_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coop_point_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coop_point_id_0 >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(coop_point_id_0);
    }
    if ( v87 != *coop_point_id_0 )
    {
      *(_DWORD *)(((v3 + 1344) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1344) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1344, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1344),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopPointConfig",
        590);
      v88 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1344),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v89 = common::milog::MiLogStream::operator<<<char [96],(char *[96])0>(v88, (const char (*)[96])byte_1AC61960);
      v90 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v89, coop_point_id_0);
      v91 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v90, (const char (*)[15])byte_1AC616E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v91, quest_id_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1344));
      *(_DWORD *)(((v3 + 1344) >> 3) + 0x7FFF8000) = -117901064;
    }
    goto LABEL_132;
  }
  *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 1280) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 1280, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 1280),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/CoopExcelConfig.cpp",
    "checkCoopPointConfig",
    585);
  v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 1280),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v82 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(v81, (const char (*)[71])byte_1AC618E0);
  v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v82, coop_point_id_0);
  v84 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v83, (const char (*)[15])byte_1AC616E0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, quest_id_0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1280));
  *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v77 = 0;
LABEL_134:
  *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
  if ( v77 == 1 )
  {
    if ( !std::unordered_set<unsigned int>::empty((const std::unordered_set<unsigned int> *const)(v3 + 1632)) )
    {
      *(_DWORD *)(((v3 + 1408) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1408) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1439) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1439) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1408, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1408),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopPointConfig",
        599);
      v92 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1408),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v93 = common::milog::MiLogStream::operator<<<char [124],(char *[124])0>(v92, (const char (*)[124])byte_1AC619E0);
      common::milog::MiLogStream::operator<<<unsigned int>(v93, (const std::unordered_set<unsigned int> *)(v3 + 1632));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1408));
      *(_DWORD *)(((v3 + 1408) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( CoopExcelConfigMgr::checkRewindConfigValid(
           this,
           txt_config_mgr,
           (const std::unordered_set<unsigned int> *)(v3 + 1632)) )
    {
      *(_DWORD *)(((v3 + 1472) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1472) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1472, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1472),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopPointConfig",
        605);
      v94 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1472),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v94, (const char (*)[47])byte_1AC61A80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1472));
      *(_DWORD *)(((v3 + 1472) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
    }
    else
    {
      v2 = 0;
    }
  }
LABEL_144:
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 1632));
LABEL_145:
  if ( v114 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80C4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862743) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450964 - (((_DWORD)v5 + 2147450972) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF80D0) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1728LL, v114);
  }
  return v2;
};

// Line 612: range 0000000013A67452-0000000013A696B2
__int64 __fastcall CoopExcelConfigMgr::checkCoopCondArgs(
        CoopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        data::CoopCondConfig *p_cond,
        CoopExcelConfigMgr::CondUnlockTarget target,
        uint32_t target_id)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  std::vector<unsigned int>::reference v10; // rax
  unsigned int *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  const unsigned int *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  const unsigned int *v17; // rax
  std::vector<unsigned int>::reference v18; // rax
  unsigned int *v19; // rdx
  __int64 v20; // rsi
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  const unsigned int *v23; // rax
  char *v24; // rsi
  unsigned int *v25; // rax
  int *v26; // rdx
  int v27; // ecx
  char v28; // al
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  const unsigned int *v31; // rax
  int v32; // eax
  __int64 v33; // rsi
  __int64 v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  const unsigned int *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  std::vector<unsigned int>::reference v40; // rax
  uint32_t *v41; // rdx
  uint32_t v42; // r14d
  std::vector<unsigned int>::reference v43; // rax
  _DWORD *v44; // rdx
  char v45; // al
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // r14
  const unsigned int *v48; // rax
  std::vector<unsigned int>::reference v49; // rax
  unsigned int *v50; // rdx
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // r14
  const unsigned int *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  std::vector<unsigned int>::reference v57; // rax
  unsigned int *v58; // rdx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r14
  const unsigned int *v61; // rax
  std::vector<unsigned int>::reference v62; // rax
  _DWORD *v63; // rdx
  std::vector<unsigned int>::reference v64; // rax
  uint32_t *v65; // rdx
  uint32_t v66; // r14d
  char v67; // al
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // r14
  const unsigned int *v70; // rax
  std::vector<unsigned int>::reference v71; // rax
  unsigned int *v72; // rdx
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // r14
  const unsigned int *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  const unsigned int *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // r14
  const unsigned int *v82; // rax
  std::vector<unsigned int>::reference v83; // rax
  unsigned int *v84; // rdx
  const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *v85; // rax
  std::unordered_map<unsigned int,std::set<unsigned int>>::mapped_type *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // r14
  const unsigned int *v89; // rax
  std::vector<unsigned int>::reference v90; // rax
  unsigned int *v91; // rdx
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // r14
  const unsigned int *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // [rsp+8h] [rbp-618h]
  std::set<unsigned int>::size_type v100; // [rsp+8h] [rbp-618h]
  data::CoopChapterExcelConfig *config_ptr_1; // [rsp+38h] [rbp-5E8h]
  data::CoopChapterExcelConfig *config_ptr_0; // [rsp+40h] [rbp-5E0h]
  data::CoopPointExcelConfig *config_ptr; // [rsp+48h] [rbp-5D8h]
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+50h] [rbp-5D0h]
  const data::MainQuestExcelConfig *parent_quest_config_ptr; // [rsp+58h] [rbp-5C8h]
  const std::vector<unsigned int> *__for_range; // [rsp+60h] [rbp-5C0h]
  const data::QuestExcelConfig *child_quest_config_ptr; // [rsp+68h] [rbp-5B8h]
  char v112[1456]; // [rsp+70h] [rbp-5B0h] BYREF

  v6 = (unsigned __int64)v112;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_5(1408LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "24 32 4 18 child_quest_id:646 48 4 13 target_id:611 64 8 15 __for_begin:646 96 8 13 __for_end:64"
                        "6 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>"
                        " 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> "
                        "768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> "
                        "1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = CoopExcelConfigMgr::checkCoopCondArgs;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862725] = -218959118;
  v8[536862727] = -218959118;
  v8[536862729] = -218959118;
  v8[536862731] = -218959118;
  v8[536862733] = -218959118;
  v8[536862735] = -218959118;
  v8[536862737] = -218959118;
  v8[536862739] = -218959118;
  v8[536862741] = -218959118;
  v8[536862743] = -218959118;
  v8[536862745] = -218959118;
  v8[536862747] = -218959118;
  v8[536862749] = -218959118;
  v8[536862751] = -218959118;
  v8[536862753] = -218959118;
  v8[536862755] = -218959118;
  v8[536862757] = -218959118;
  v8[536862759] = -218959118;
  v8[536862761] = -218959118;
  v8[536862763] = -202116109;
  *(_DWORD *)(v6 + 48) = target_id;
  if ( *(_BYTE *)(((unsigned __int64)&p_cond->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&p_cond->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&p_cond->cond_type);
  }
  if ( p_cond->cond_type )
  {
    if ( std::vector<unsigned int>::size(&p_cond->args) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&p_cond->cond_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&p_cond->cond_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&p_cond->cond_type);
      }
      switch ( p_cond->cond_type )
      {
        case COOP_COND_FINISH_QUEST:
          v10 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
          v11 = v10;
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v10);
          }
          quest_config_ptr = data::QuestExcelConfigMgrBase::findQuestExcelConfig(
                               &txt_config_mgr->quest_config_mgr,
                               *v11);
          if ( quest_config_ptr )
          {
            if ( std::vector<unsigned int>::size(&quest_config_ptr->coop_point_list) )
            {
              if ( *(char *)(((v6 + 256) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v6 + 287) >> 3) + 0x7FFF8000) != 0
                && (char)((v6 + 31) & 7) >= *(_BYTE *)(((v6 + 287) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v6 + 256, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v6 + 256),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/CoopExcelConfig.cpp",
                "checkCoopCondArgs",
                636);
              v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v6 + 256),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v16 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                      v15,
                      (const char (*)[71])byte_1AC61DC0);
              v17 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, v17);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 256));
              v5 = -1;
            }
            else
            {
              p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
              v18 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
              v19 = v18;
              if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v18);
              }
              v20 = *v19;
              parent_quest_config_ptr = QuestExcelConfigMgr::findParentQuestConfigByChildId(p_quest_config_mgr, v20);
              if ( parent_quest_config_ptr )
              {
                __for_range = &parent_quest_config_ptr->child_quest_list;
                if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v6 + 64, v20);
                *(std::vector<unsigned int>::const_iterator *)(v6 + 64) = std::vector<unsigned int>::begin(__for_range);
                if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v6 + 96, v20);
                *(std::vector<unsigned int>::const_iterator *)(v6 + 96) = std::vector<unsigned int>::end(__for_range);
                while ( 1 )
                {
                  v24 = (char *)(v6 + 96);
                  if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                          (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v6 + 64),
                          (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v6 + 96)) )
                  {
                    v32 = 1;
                    goto LABEL_53;
                  }
                  v25 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v6 + 64));
                  v26 = (int *)v25;
                  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v25);
                  }
                  v27 = *v26;
                  v28 = *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000);
                  if ( v28 != 0 && v28 <= 3 )
                  {
                    LOBYTE(v24) = v28 != 0;
                    __asan_report_store4(v6 + 32, v24);
                  }
                  *(_DWORD *)(v6 + 32) = v27;
                  child_quest_config_ptr = data::QuestExcelConfigMgrBase::findQuestExcelConfig(
                                             &txt_config_mgr->quest_config_mgr,
                                             *(unsigned int *)(v6 + 32));
                  if ( !child_quest_config_ptr )
                  {
                    if ( *(char *)(((v6 + 384) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v6 + 415) >> 3) + 0x7FFF8000) != 0
                      && (char)((v6 - 97) & 7) >= *(_BYTE *)(((v6 + 415) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v6 + 384, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v6 + 384),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/CoopExcelConfig.cpp",
                      "checkCoopCondArgs",
                      651);
                    v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v6 + 384),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v30 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                            v29,
                            (const char (*)[58])byte_1AC61D60);
                    v31 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, v31);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 384));
                    v5 = -1;
                    v32 = 0;
                    goto LABEL_53;
                  }
                  v33 = ((_BYTE)child_quest_config_ptr - 67) & 7;
                  v34 = (*(_BYTE *)(((unsigned __int64)&child_quest_config_ptr->fail_parent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v33 >= *(_BYTE *)(((unsigned __int64)&child_quest_config_ptr->fail_parent >> 3) + 0x7FFF8000));
                  if ( (_BYTE)v34 )
                    __asan_report_load1(&child_quest_config_ptr->fail_parent, v33, v34);
                  if ( child_quest_config_ptr->fail_parent )
                    break;
                  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v6 + 64));
                }
                if ( *(char *)(((v6 + 448) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v6 + 479) >> 3) + 0x7FFF8000) != 0
                  && (char)((v6 - 33) & 7) >= *(_BYTE *)(((v6 + 479) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v6 + 448, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v6 + 448),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/CoopExcelConfig.cpp",
                  "checkCoopCondArgs",
                  656);
                v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v6 + 448),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v36 = common::milog::MiLogStream::operator<<<char [151],(char *[151])0>(
                        v35,
                        (const char (*)[151])byte_1AC61EA0);
                v37 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
                v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, v37);
                v39 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        v38,
                        (const char (*)[45])byte_1AC61F60);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v39,
                  (const unsigned int *)(v6 + 32));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 448));
                v5 = -1;
                v32 = 0;
LABEL_53:
                if ( v32 == 1 )
                  goto LABEL_145;
              }
              else
              {
                if ( *(char *)(((v6 + 320) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v6 + 351) >> 3) + 0x7FFF8000) != 0
                  && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 351) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v6 + 320, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v6 + 320),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/CoopExcelConfig.cpp",
                  "checkCoopCondArgs",
                  642);
                v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v6 + 320),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v22 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                        v21,
                        (const char (*)[64])byte_1AC61E40);
                v23 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, v23);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 320));
                v5 = -1;
              }
            }
          }
          else
          {
            if ( *(char *)(((v6 + 192) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v6 + 223) >> 3) + 0x7FFF8000) != 0
              && (char)((v6 - 33) & 7) >= *(_BYTE *)(((v6 + 223) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v6 + 192, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v6 + 192),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/CoopExcelConfig.cpp",
              "checkCoopCondArgs",
              630);
            v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v6 + 192),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v13 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                    v12,
                    (const char (*)[58])byte_1AC61D60);
            v14 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, v14);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
            v5 = -1;
          }
          break;
        case COOP_COND_PLAYER_LEVEL:
          v40 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
          v41 = v40;
          if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v40);
          }
          v42 = *v41;
          if ( v42 > PlayerExcelConfigMgr::getPlayerMaxLevel(&txt_config_mgr->player_config_mgr) )
            goto LABEL_61;
          v43 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
          v44 = v43;
          if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v43);
          }
          if ( *v44 )
            v45 = 0;
          else
LABEL_61:
            v45 = 1;
          if ( !v45 )
            goto LABEL_145;
          if ( *(char *)(((v6 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 543) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 + 31) & 7) >= *(_BYTE *)(((v6 + 543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/CoopExcelConfig.cpp",
            "checkCoopCondArgs",
            667);
          v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v6 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v47 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v46, (const char (*)[56])byte_1AC61FC0);
          v48 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, v48);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 512));
          v5 = -1;
          break;
        case COOP_COND_COOP_POINT_FINISH:
          v49 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
          v50 = v49;
          if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v49);
          }
          config_ptr = data::CoopExcelConfigMgrBase::findCoopPointExcelConfig(this, *v50);
          if ( config_ptr )
          {
            if ( target )
              goto LABEL_145;
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->chapter_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->chapter_id >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4(&config_ptr->chapter_id);
            }
            if ( config_ptr->chapter_id != *(_DWORD *)(v6 + 48) )
              goto LABEL_145;
            if ( *(char *)(((v6 + 640) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v6 + 671) >> 3) + 0x7FFF8000) != 0
              && (char)((v6 - 97) & 7) >= *(_BYTE *)(((v6 + 671) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v6 + 640, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v6 + 640),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/CoopExcelConfig.cpp",
              "checkCoopCondArgs",
              685);
            v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v6 + 640),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v55 = common::milog::MiLogStream::operator<<<char [124],(char *[124])0>(
                    v54,
                    (const char (*)[124])byte_1AC620A0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, (const unsigned int *)(v6 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 640));
            v5 = -1;
          }
          else
          {
            if ( *(char *)(((v6 + 576) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v6 + 607) >> 3) + 0x7FFF8000) != 0
              && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 607) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v6 + 576, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v6 + 576),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/CoopExcelConfig.cpp",
              "checkCoopCondArgs",
              678);
            v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v6 + 576),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v52 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                    v51,
                    (const char (*)[78])byte_1AC62020);
            v53 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, v53);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 576));
            v5 = -1;
          }
          break;
        case COOP_COND_AVATAR_FETTER_LEVEL:
          if ( std::vector<unsigned int>::size(&p_cond->args) > 1 )
          {
            v57 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
            v58 = v57;
            if ( *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v57 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v57);
            }
            if ( data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(&txt_config_mgr->avatar_config_mgr, *v58) )
            {
              v62 = std::vector<unsigned int>::operator[](&p_cond->args, 1uLL);
              v63 = v62;
              if ( *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v62 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v62);
              }
              if ( !*v63 )
                goto LABEL_96;
              v64 = std::vector<unsigned int>::operator[](&p_cond->args, 1uLL);
              v65 = v64;
              if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v64);
              }
              v66 = *v65;
              if ( v66 <= AvatarExcelConfigMgr::getAvatarMaxFetterLevel(&txt_config_mgr->avatar_config_mgr) )
                v67 = 0;
              else
LABEL_96:
                v67 = 1;
              if ( !v67 )
                goto LABEL_145;
              if ( *(char *)(((v6 + 832) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v6 + 863) >> 3) + 0x7FFF8000) != 0
                && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 863) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v6 + 832, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v6 + 832),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/CoopExcelConfig.cpp",
                "checkCoopCondArgs",
                705);
              v68 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v6 + 832),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v69 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                      v68,
                      (const char (*)[76])byte_1AC62220);
              v70 = std::vector<unsigned int>::operator[](&p_cond->args, 1uLL);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, v70);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 832));
              v5 = -1;
            }
            else
            {
              if ( *(char *)(((v6 + 768) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v6 + 799) >> 3) + 0x7FFF8000) != 0
                && (char)((v6 + 31) & 7) >= *(_BYTE *)(((v6 + 799) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v6 + 768, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v6 + 768),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/CoopExcelConfig.cpp",
                "checkCoopCondArgs",
                700);
              v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v6 + 768),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v60 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                      v59,
                      (const char (*)[74])byte_1AC621A0);
              v61 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, v61);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 768));
              v5 = -1;
            }
          }
          else
          {
            if ( *(char *)(((v6 + 704) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v6 + 735) >> 3) + 0x7FFF8000) != 0
              && (char)((v6 - 33) & 7) >= *(_BYTE *)(((v6 + 735) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v6 + 704, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v6 + 704),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/CoopExcelConfig.cpp",
              "checkCoopCondArgs",
              695);
            v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v6 + 704),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v56, (const char (*)[34])byte_1AC62140);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 704));
            v5 = -1;
          }
          break;
        case COOP_COND_CHAPTER_END_ALL_FINISH:
          v71 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
          v72 = v71;
          if ( *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v71 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v71);
          }
          config_ptr_0 = data::CoopExcelConfigMgrBase::findCoopChapterExcelConfig(this, *v72);
          if ( config_ptr_0 )
          {
            if ( target )
              goto LABEL_145;
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr_0->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config_ptr_0->id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config_ptr_0->id);
            }
            if ( config_ptr_0->id != *(_DWORD *)(v6 + 48) )
              goto LABEL_145;
            if ( *(char *)(((v6 + 960) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v6 + 991) >> 3) + 0x7FFF8000) != 0
              && (char)((v6 - 33) & 7) >= *(_BYTE *)(((v6 + 991) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v6 + 960, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v6 + 960),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/CoopExcelConfig.cpp",
              "checkCoopCondArgs",
              723);
            v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v6 + 960),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v77 = common::milog::MiLogStream::operator<<<char [124],(char *[124])0>(
                    v76,
                    (const char (*)[124])byte_1AC62320);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, (const unsigned int *)(v6 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 960));
            v5 = -1;
          }
          else
          {
            if ( *(char *)(((v6 + 896) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v6 + 927) >> 3) + 0x7FFF8000) != 0
              && (char)((v6 - 97) & 7) >= *(_BYTE *)(((v6 + 927) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v6 + 896, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v6 + 896),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/CoopExcelConfig.cpp",
              "checkCoopCondArgs",
              716);
            v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v6 + 896),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v74 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                    v73,
                    (const char (*)[69])byte_1AC622A0);
            v75 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, v75);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 896));
            v5 = -1;
          }
          break;
        case COOP_COND_CHAPTER_END_FINISH_COUNT:
          if ( std::vector<unsigned int>::size(&p_cond->args) > 1 )
          {
            v79 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
            if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>>,unsigned int>(
                    &this->chapter_end_point_map,
                    v79) )
            {
              if ( *(char *)(((v6 + 1088) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v6 + 1119) >> 3) + 0x7FFF8000) != 0
                && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 1119) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v6 + 1088, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v6 + 1088),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/CoopExcelConfig.cpp",
                "checkCoopCondArgs",
                738);
              v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v6 + 1088),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v81 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                      v80,
                      (const char (*)[66])byte_1AC62420);
              v82 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, v82);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1088));
              v5 = -1;
            }
            else
            {
              v83 = std::vector<unsigned int>::operator[](&p_cond->args, 1uLL);
              v84 = v83;
              if ( *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v83 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v83);
              }
              v100 = *v84;
              v85 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
              v86 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                      &this->chapter_end_point_map,
                      v85);
              if ( v100 <= std::set<unsigned int>::size(v86) )
              {
                v90 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
                v91 = v90;
                if ( *(_BYTE *)(((unsigned __int64)v90 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v90 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v90 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v90);
                }
                config_ptr_1 = data::CoopExcelConfigMgrBase::findCoopChapterExcelConfig(this, *v91);
                if ( config_ptr_1 )
                {
                  if ( target )
                    goto LABEL_145;
                  if ( *(_BYTE *)(((unsigned __int64)&config_ptr_1->id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&config_ptr_1->id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&config_ptr_1->id);
                  }
                  if ( config_ptr_1->id != *(_DWORD *)(v6 + 48) )
                  {
LABEL_145:
                    v5 = 0;
                  }
                  else
                  {
                    if ( *(char *)(((v6 + 1280) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v6 + 1311) >> 3) + 0x7FFF8000) != 0
                      && (char)((v6 + 31) & 7) >= *(_BYTE *)(((v6 + 1311) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v6 + 1280, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v6 + 1280),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/CoopExcelConfig.cpp",
                      "checkCoopCondArgs",
                      757);
                    v95 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v6 + 1280),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v96 = common::milog::MiLogStream::operator<<<char [124],(char *[124])0>(
                            v95,
                            (const char (*)[124])byte_1AC62320);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v96,
                      (const unsigned int *)(v6 + 48));
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1280));
                    v5 = -1;
                  }
                }
                else
                {
                  if ( *(char *)(((v6 + 1216) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v6 + 1247) >> 3) + 0x7FFF8000) != 0
                    && (char)((v6 - 33) & 7) >= *(_BYTE *)(((v6 + 1247) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v6 + 1216, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v6 + 1216),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/CoopExcelConfig.cpp",
                    "checkCoopCondArgs",
                    750);
                  v92 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v6 + 1216),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v93 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                          v92,
                          (const char (*)[69])byte_1AC622A0);
                  v94 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v93, v94);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1216));
                  v5 = -1;
                }
              }
              else
              {
                if ( *(char *)(((v6 + 1152) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v6 + 1183) >> 3) + 0x7FFF8000) != 0
                  && (char)((v6 - 97) & 7) >= *(_BYTE *)(((v6 + 1183) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v6 + 1152, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v6 + 1152),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/CoopExcelConfig.cpp",
                  "checkCoopCondArgs",
                  743);
                v87 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v6 + 1152),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v88 = common::milog::MiLogStream::operator<<<char [96],(char *[96])0>(
                        v87,
                        (const char (*)[96])byte_1AC624A0);
                v89 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v88, v89);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1152));
                v5 = -1;
              }
            }
          }
          else
          {
            if ( *(char *)(((v6 + 1024) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v6 + 1055) >> 3) + 0x7FFF8000) != 0
              && (char)((v6 + 31) & 7) >= *(_BYTE *)(((v6 + 1055) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v6 + 1024, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v6 + 1024),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/CoopExcelConfig.cpp",
              "checkCoopCondArgs",
              733);
            v78 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v6 + 1024),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v78, (const char (*)[43])byte_1AC623C0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1024));
            v5 = -1;
          }
          break;
        default:
          if ( *(char *)(((v6 + 1344) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 1375) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 1375) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 1344, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 1344),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/CoopExcelConfig.cpp",
            "checkCoopCondArgs",
            764);
          v97 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v6 + 1344),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v97, (const char (*)[22])byte_1AC62520);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1344));
          v5 = -1;
          break;
      }
    }
    else
    {
      if ( *(char *)(((v6 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v6 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v6 - 97) & 7) >= *(_BYTE *)(((v6 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v6 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopCondArgs",
        619);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v6 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v9, (const char (*)[30])byte_1AC61D20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 128));
      v5 = -1;
    }
  }
  else
  {
    v5 = 0;
  }
  if ( v112 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF804C) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8054) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF805C) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8064) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF806C) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8074) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF807C) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8084) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF808C) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8094) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF809C) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF80A4) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF80AC) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    __asan_stack_free_5(v6, 1408LL, v112);
  }
  return v5;
};

// Line 772: range 0000000013A696B4-0000000013A69B04
__int64 __fastcall CoopExcelConfigMgr::rewriteCoopCondConfig(
        CoopExcelConfigMgr *const this,
        data::CoopCondConfig *p_cond,
        uint32_t chapter_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *v8; // rax
  std::set<unsigned int> *v9; // rax
  const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *v10; // rax
  std::set<unsigned int> *v11; // rax
  const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *v12; // rax
  std::set<unsigned int> *v13; // rax
  const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *v14; // rax
  std::set<unsigned int> *v15; // rax
  char v17[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 chapter_id:771 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CoopExcelConfigMgr::rewriteCoopCondConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = chapter_id;
  if ( *(_BYTE *)(((unsigned __int64)&p_cond->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&p_cond->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&p_cond->cond_type);
  }
  if ( p_cond->cond_type )
  {
    if ( std::vector<unsigned int>::size(&p_cond->args) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&p_cond->cond_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&p_cond->cond_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&p_cond->cond_type);
      }
      switch ( p_cond->cond_type )
      {
        case COOP_COND_FINISH_QUEST:
          v8 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
          v9 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](&this->cond_quest_chapter_map, v8);
          std::set<unsigned int>::insert(v9, (const std::set<unsigned int>::value_type *)(v3 + 48));
          break;
        case COOP_COND_PLAYER_LEVEL:
          std::set<unsigned int>::insert(
            &this->cond_player_level_chapter_set,
            (const std::set<unsigned int>::value_type *)(v3 + 48));
          break;
        case COOP_COND_COOP_POINT_FINISH:
          v10 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
          v11 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                  &this->cond_coop_point_chapter_map,
                  v10);
          std::set<unsigned int>::insert(v11, (const std::set<unsigned int>::value_type *)(v3 + 48));
          break;
        case COOP_COND_AVATAR_FETTER_LEVEL:
          v12 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
          v13 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                  &this->cond_avatar_fetter_level_chapter_map,
                  v12);
          std::set<unsigned int>::insert(v13, (const std::set<unsigned int>::value_type *)(v3 + 48));
          break;
        case COOP_COND_CHAPTER_END_ALL_FINISH:
        case COOP_COND_CHAPTER_END_FINISH_COUNT:
          v14 = std::vector<unsigned int>::operator[](&p_cond->args, 0LL);
          v15 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                  &this->cond_chapter_end_chapter_map,
                  v14);
          std::set<unsigned int>::insert(v15, (const std::set<unsigned int>::value_type *)(v3 + 48));
          break;
        default:
          break;
      }
      result = 0LL;
    }
    else
    {
      if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 64, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "rewriteCoopCondConfig",
        779);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 64),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v7, (const char (*)[30])byte_1AC61D20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    result = 0LL;
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 823: range 0000000013A69B06-0000000013A69DFF
bool __fastcall CoopExcelConfigMgr::isSameChapterPoint(
        const CoopExcelConfigMgr *const this,
        uint32_t left_point_id,
        uint32_t right_point_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  bool result; // al
  uint32_t chapter_id; // ecx
  const data::CoopPointExcelConfig *left_config_ptr; // [rsp+10h] [rbp-B0h]
  const data::CoopPointExcelConfig *right_config_ptr; // [rsp+18h] [rbp-A8h]
  char v14[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 17 left_point_id:822 48 4 18 right_point_id:822 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CoopExcelConfigMgr::isSameChapterPoint;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 32) = left_point_id;
  *(_DWORD *)(v3 + 48) = right_point_id;
  left_config_ptr = data::CoopExcelConfigMgrBase::findCoopPointExcelConfig(this, *(unsigned int *)(v3 + 32));
  right_config_ptr = data::CoopExcelConfigMgrBase::findCoopPointExcelConfig(this, *(unsigned int *)(v3 + 48));
  if ( left_config_ptr && right_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&left_config_ptr->chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)left_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left_config_ptr->chapter_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&left_config_ptr->chapter_id);
    }
    chapter_id = left_config_ptr->chapter_id;
    if ( *(_BYTE *)(((unsigned __int64)&right_config_ptr->chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)right_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right_config_ptr->chapter_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&right_config_ptr->chapter_id);
    }
    result = chapter_id == right_config_ptr->chapter_id;
  }
  else
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/CoopExcelConfig.cpp",
      "isSameChapterPoint",
      828);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[48])"findCoopPointExcelConfig failed, left_point_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])", right_point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = 0;
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 835: range 0000000013A69E00-0000000013A6A053
bool __fastcall CoopExcelConfigMgr::isStartCoopPoint(const CoopExcelConfigMgr *const this, uint32_t coop_point_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  bool result; // al
  const data::CoopPointExcelConfig *config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 coop_point_id:834 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CoopExcelConfigMgr::isStartCoopPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = coop_point_id;
  config_ptr = data::CoopExcelConfigMgrBase::findCoopPointExcelConfig(this, *(unsigned int *)(v2 + 48));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->type);
    }
    result = config_ptr->type == POINT_START;
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/CoopExcelConfig.cpp",
      "isStartCoopPoint",
      839);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[48])"findCoopPointExcelConfig failed, coop_point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 846: range 0000000013A6A054-0000000013A6A2A7
bool __fastcall CoopExcelConfigMgr::isEndCoopPoint(const CoopExcelConfigMgr *const this, uint32_t coop_point_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  bool result; // al
  const data::CoopPointExcelConfig *config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 coop_point_id:845 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CoopExcelConfigMgr::isEndCoopPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = coop_point_id;
  config_ptr = data::CoopExcelConfigMgrBase::findCoopPointExcelConfig(this, *(unsigned int *)(v2 + 48));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->type);
    }
    result = config_ptr->type == POINT_END;
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/CoopExcelConfig.cpp",
      "isEndCoopPoint",
      850);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[48])"findCoopPointExcelConfig failed, coop_point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 857: range 0000000013A6A2A8-0000000013A6A4FD
__int64 __fastcall CoopExcelConfigMgr::getCoopPointChapterId(
        const CoopExcelConfigMgr *const this,
        uint32_t coop_point_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::CoopPointExcelConfig *config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 coop_point_id:856 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CoopExcelConfigMgr::getCoopPointChapterId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = coop_point_id;
  config_ptr = data::CoopExcelConfigMgrBase::findCoopPointExcelConfig(this, *(unsigned int *)(v2 + 48));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->chapter_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->chapter_id);
    }
    result = config_ptr->chapter_id;
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/CoopExcelConfig.cpp",
      "getCoopPointChapterId",
      861);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[48])"findCoopPointExcelConfig failed, coop_point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 868: range 0000000013A6A4FE-0000000013A6A74B
__int64 __fastcall CoopExcelConfigMgr::getCoopRewardChapterId(
        const CoopExcelConfigMgr *const this,
        uint32_t coop_reward_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::CoopRewardExcelConfig *config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 coop_reward_id:867 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CoopExcelConfigMgr::getCoopRewardChapterId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = coop_reward_id;
  config_ptr = data::CoopExcelConfigMgrBase::findCoopRewardExcelConfig(this, *(unsigned int *)(v2 + 48));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->chapter_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->chapter_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->chapter_id);
    }
    result = config_ptr->chapter_id;
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/CoopExcelConfig.cpp",
      "getCoopRewardChapterId",
      872);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[47])"getCoopRewardChapterId failed, coop_reward_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 879: range 0000000013A6A74C-0000000013A6A9A1
__int64 __fastcall CoopExcelConfigMgr::getCoopCgChapterId(const CoopExcelConfigMgr *const this, uint32_t coop_cg_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::CoopCGExcelConfig *config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 coop_cg_id:878 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CoopExcelConfigMgr::getCoopCgChapterId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = coop_cg_id;
  config_ptr = data::CoopExcelConfigMgrBase::findCoopCGExcelConfig(this, *(unsigned int *)(v2 + 48));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->chapter_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->chapter_id);
    }
    result = config_ptr->chapter_id;
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/CoopExcelConfig.cpp",
      "getCoopCgChapterId",
      883);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[42])"findCoopCGExcelConfig failed, coop_cg_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 890: range 0000000013A6A9A2-0000000013A6AACC
_BOOL8 __fastcall CoopExcelConfigMgr::isCoopPointEdge(
        const CoopExcelConfigMgr *const this,
        std::pair<unsigned int,unsigned int> edge)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  _BOOL8 result; // rax
  const std::unordered_set<unsigned int> *v6; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 edge:889";
  *(_QWORD *)(v2 + 16) = CoopExcelConfigMgr::isCoopPointEdge;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::pair<unsigned int,unsigned int> *)(v2 + 32) = edge;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_set<unsigned int>> const,unsigned int>(
          &this->point_to_point_map,
          (const unsigned int *)(v2 + 32)) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::at(
           &this->point_to_point_map,
           (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 32));
    result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
               v6,
               (const unsigned int *)(v2 + 36));
  }
  if ( v7 == (char *)v2 )
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

// Line 903: range 0000000013A6AACE-0000000013A6AC8F
const std::set<unsigned int> *__fastcall CoopExcelConfigMgr::findChapterCgSet(
        const CoopExcelConfigMgr *const this,
        __int64 chapter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_chapter_cg_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 chapter_id:902 64 8 8 iter:904 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CoopExcelConfigMgr::findChapterCgSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = chapter_id;
  p_chapter_cg_map = &this->chapter_cg_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, chapter_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_chapter_cg_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->chapter_cg_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v6);
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

// Line 917: range 0000000013A6AC90-0000000013A6AE51
const std::set<unsigned int> *__fastcall CoopExcelConfigMgr::findChapterRewardSet(
        const CoopExcelConfigMgr *const this,
        __int64 chapter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_chapter_reward_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 chapter_id:916 64 8 8 iter:918 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CoopExcelConfigMgr::findChapterRewardSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = chapter_id;
  p_chapter_reward_map = &this->chapter_reward_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, chapter_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_chapter_reward_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->chapter_reward_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v6);
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

// Line 930: range 0000000013A6AE52-0000000013A6B013
const std::set<unsigned int> *__fastcall CoopExcelConfigMgr::findChapterCoopPointSet(
        const CoopExcelConfigMgr *const this,
        __int64 chapter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_chapter_point_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 chapter_id:929 64 8 8 iter:931 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CoopExcelConfigMgr::findChapterCoopPointSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = chapter_id;
  p_chapter_point_map = &this->chapter_point_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, chapter_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_chapter_point_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->chapter_point_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v6);
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

// Line 943: range 0000000013A6B014-0000000013A6B1D5
const std::set<unsigned int> *__fastcall CoopExcelConfigMgr::findChapterEndCoopPointSet(
        const CoopExcelConfigMgr *const this,
        __int64 chapter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_chapter_end_point_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 chapter_id:942 64 8 8 iter:944 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CoopExcelConfigMgr::findChapterEndCoopPointSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = chapter_id;
  p_chapter_end_point_map = &this->chapter_end_point_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, chapter_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_chapter_end_point_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->chapter_end_point_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v6);
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

// Line 956: range 0000000013A6B1D6-0000000013A6B3D1
__int64 __fastcall CoopExcelConfigMgr::findChapterStartCoopPoint(
        const CoopExcelConfigMgr *const this,
        __int64 chapter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_chapter_start_point_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 chapter_id:955 64 8 8 iter:957 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CoopExcelConfigMgr::findChapterStartCoopPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = chapter_id;
  p_chapter_start_point_map = &this->chapter_start_point_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, chapter_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_chapter_start_point_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->chapter_start_point_map;
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

// Line 969: range 0000000013A6B3D2-0000000013A6B411
uint32_t __cdecl CoopExcelConfigMgr::getChapterEndCount(const CoopExcelConfigMgr *const this, uint32_t chapter_id)
{
  const std::set<unsigned int> *set_ptr; // [rsp+18h] [rbp-8h]

  set_ptr = CoopExcelConfigMgr::findChapterEndCoopPointSet(this, chapter_id);
  if ( set_ptr )
    return std::set<unsigned int>::size(set_ptr);
  else
    return 0;
};

// Line 979: range 0000000013A6B412-0000000013A6B7DA
std::set<unsigned int> *__fastcall CoopExcelConfigMgr::findNowOpenChapter(
        std::set<unsigned int> *retstr,
        const CoopExcelConfigMgr *const this,
        uint32_t stamp)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::set<unsigned int>> *p_time_to_chapter_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool v8; // al
  std::map<unsigned int,std::set<unsigned int>> *v9; // rdx
  char v10; // r14
  std::map<unsigned int,std::set<unsigned int>> *v11; // rdx
  char v12; // dl
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::pointer v13; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::pointer v15; // rax
  std::set<unsigned int>::iterator v16; // rax
  char v19[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 9 stamp:978 64 8 8 iter:985 96 8 9 <unknown> 128 8 6 it:990 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CoopExcelConfigMgr::findNowOpenChapter;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 48) = stamp;
  std::set<unsigned int>::set(retstr);
  if ( !std::map<unsigned int,std::set<unsigned int>>::empty(&this->time_to_chapter_map) )
  {
    p_time_to_chapter_map = &this->time_to_chapter_map;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, this);
    *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::set<unsigned int>>::upper_bound(
                                                                                    p_time_to_chapter_map,
                                                                                    (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
    v7 = &this->time_to_chapter_map;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 48);
    *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::set<unsigned int>>::begin(v7);
    v8 = std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v8 )
    {
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      v9 = &this->time_to_chapter_map;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v3 + 96);
      *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 128) = std::map<unsigned int,std::set<unsigned int>>::begin(v9);
      while ( 1 )
      {
        v10 = 0;
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 128),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 64)) )
          goto LABEL_18;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        v11 = &this->time_to_chapter_map;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, v3 + 64);
        *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 160) = std::map<unsigned int,std::set<unsigned int>>::end(v11);
        v10 = 1;
        if ( std::operator!=(
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 128),
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 160)) )
        {
          v12 = 1;
        }
        else
        {
LABEL_18:
          v12 = 0;
        }
        if ( v10 )
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( !v12 )
          break;
        v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 128));
        M_node = std::set<unsigned int>::end(&v13->second)._M_node;
        v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 128));
        v16._M_node = std::set<unsigned int>::begin(&v15->second)._M_node;
        std::set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
          retstr,
          v16,
          (std::_Rb_tree_const_iterator<unsigned int>)M_node);
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator++(
          (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 128),
          0);
      }
    }
  }
  if ( v19 == (char *)v3 )
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
  return retstr;
};

// Line 998: range 0000000013A6B7DC-0000000013A6BD63
int32_t __cdecl CoopExcelConfigMgr::checkRewindConfigValid(
        CoopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::unordered_set<unsigned int> *exclusive_chapter_set)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int v7; // edx
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  int ChapterStartCoopPoint; // edx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // r15d
  unsigned __int64 v15; // rax
  int v16; // eax
  int32_t result; // eax
  std::unordered_map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>> *__for_range; // [rsp+20h] [rbp-170h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> >,false,false>::reference v21; // [rsp+28h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > >::type *chapter_id; // [rsp+30h] [rbp-160h]
  char v23[336]; // [rsp+40h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 19 start_point_id:1006 64 8 15 __for_begin:999 96 8 13 __for_end:999 128 32 9 <unknown> 1"
                        "92 56 20 quest_order_map:1005";
  *(_QWORD *)(v4 + 16) = CoopExcelConfigMgr::checkRewindConfigValid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862725] = -218959118;
  v6[536862727] = -218103808;
  v6[536862728] = -202116109;
  __for_range = &this->chapter_point_edge_map;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::begin(__for_range);
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> >,false> *)(v4 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> >,false> *)(v4 + 96)) )
  {
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> >,false,false> *const)(v4 + 64));
    chapter_id = std::get<0ul,unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>(v21);
    std::get<1ul,unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>(v21);
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
           exclusive_chapter_set,
           chapter_id) )
    {
      v7 = 0;
    }
    else
    {
      v8 = ((v4 + 192) >> 3) + 2147450880;
      *(_DWORD *)v8 = 0;
      *(_WORD *)(v8 + 4) = 0;
      *(_BYTE *)(v8 + 6) = 0;
      std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map((std::unordered_map<unsigned int,std::vector<unsigned int>> *const)(v4 + 192));
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)chapter_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(chapter_id);
      }
      v9 = *chapter_id;
      ChapterStartCoopPoint = CoopExcelConfigMgr::findChapterStartCoopPoint(this, v9);
      v11 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v9) = v11 != 0;
        __asan_report_store4(v4 + 48, v9);
      }
      *(_DWORD *)(v4 + 48) = ChapterStartCoopPoint;
      if ( CoopExcelConfigMgr::checkCoopPointQuestOrderByDfs(
             this,
             txt_config_mgr,
             *(_DWORD *)(v4 + 48),
             (std::unordered_map<unsigned int,std::vector<unsigned int>> *)(v4 + 192)) )
      {
        *(_DWORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 128, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 128),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "checkRewindConfigValid",
          1009);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 128),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                v12,
                (const char (*)[54])"checkCoopPointQuestOrderByDfs failed, start_point_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
        *(_DWORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v14 = 0;
      }
      else
      {
        v14 = 1;
      }
      std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map((std::unordered_map<unsigned int,std::vector<unsigned int>> *const)(v4 + 192));
      if ( v14 == 1 )
        v7 = 2;
      else
        v7 = 1;
    }
    v15 = ((v4 + 192) >> 3) + 2147450880;
    *(_DWORD *)v15 = -117901064;
    *(_WORD *)(v15 + 4) = -1800;
    *(_BYTE *)(v15 + 6) = -8;
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v7 && v7 != 2 )
    {
      v16 = 0;
      goto LABEL_29;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> >,false,false> *const)(v4 + 64));
  }
  v16 = 1;
LABEL_29:
  if ( v16 == 1 )
    v3 = 0;
  result = v3;
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1017: range 0000000013A6BD64-0000000013A6CC9B
__int64 __fastcall CoopExcelConfigMgr::checkCoopPointQuestOrderByDfs(
        CoopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t coop_point_id,
        std::unordered_map<unsigned int,std::vector<unsigned int>> *quest_order_vec_map)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  char *v13; // rsi
  char *v14; // rsi
  std::unordered_map<unsigned int,std::vector<unsigned int>>::mapped_type *v15; // rax
  unsigned int v16; // r15d
  std::vector<unsigned int> *v17; // rax
  std::vector<unsigned int>::reference v18; // rax
  unsigned int *v19; // rdx
  char v20; // al
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::vector<unsigned int> *v27; // rax
  const unsigned int *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int v32; // edx
  char *v33; // rsi
  std::vector<unsigned int> *v34; // rax
  char *v35; // rsi
  unsigned int *v36; // rax
  int *v37; // rdx
  int v38; // ecx
  char v39; // al
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  int v42; // edx
  std::vector<unsigned int> *v43; // rax
  __int64 result; // rax
  data::CoopPointExcelConfig *point_config_ptr; // [rsp+30h] [rbp-2F0h]
  const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::mapped_type *quest_max_order_map; // [rsp+38h] [rbp-2E8h]
  const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::mapped_type *__for_range; // [rsp+48h] [rbp-2D8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v51; // [rsp+50h] [rbp-2D0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *main_quest_id; // [rsp+58h] [rbp-2C8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *order; // [rsp+60h] [rbp-2C0h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+70h] [rbp-2B0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v55; // [rsp+80h] [rbp-2A0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *main_quest_id_1; // [rsp+88h] [rbp-298h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v57; // [rsp+98h] [rbp-288h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *main_quest_id_0; // [rsp+A0h] [rbp-280h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *order_0; // [rsp+A8h] [rbp-278h]
  char v60[624]; // [rsp+B0h] [rbp-270h] BYREF

  v5 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(576LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "14 32 4 18 post_point_id:1057 48 4 18 coop_point_id:1016 64 8 16 __for_begin:1039 96 8 14 __for_"
                        "end:1039 128 8 16 __for_begin:1052 160 8 14 __for_end:1052 192 8 16 __for_begin:1057 224 8 14 __"
                        "for_end:1057 256 8 16 __for_begin:1066 288 8 14 __for_end:1066 320 32 9 <unknown> 384 32 9 <unkn"
                        "own> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = CoopExcelConfigMgr::checkCoopPointQuestOrderByDfs;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -218959360;
  v7[536862728] = -218959360;
  v7[536862729] = -218959360;
  v7[536862731] = -218959118;
  v7[536862733] = -218959118;
  v7[536862735] = -218959118;
  v7[536862737] = -202116109;
  *(_DWORD *)(v5 + 48) = coop_point_id;
  point_config_ptr = data::CoopExcelConfigMgrBase::findCoopPointExcelConfig(this, *(unsigned int *)(v5 + 48));
  if ( point_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&point_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&point_config_ptr->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&point_config_ptr->type);
    }
    if ( point_config_ptr->type == POINT_END )
    {
      v4 = 0;
    }
    else if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> const,unsigned int>(
                 &txt_config_mgr->quest_config_mgr.coop_point_to_quest_max_order_map,
                 (const unsigned int *)(v5 + 48))
           || !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> const,unsigned int>(
                 &txt_config_mgr->quest_config_mgr.coop_point_to_quest_min_order_map,
                 (const unsigned int *)(v5 + 48)) )
    {
      if ( *(char *)(((v5 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopPointQuestOrderByDfs",
        1033);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(v11, (const char (*)[65])byte_1AC62F80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 384));
      v4 = 0;
    }
    else
    {
      quest_max_order_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::at(
                              &txt_config_mgr->quest_config_mgr.coop_point_to_quest_max_order_map,
                              (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v5 + 48));
      v13 = (char *)(v5 + 48);
      __for_range = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::at(
                      &txt_config_mgr->quest_config_mgr.coop_point_to_quest_min_order_map,
                      (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v5 + 48));
      if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 64, v13);
      *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v5 + 64) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range);
      if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 96, v13);
      *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,unsigned int>::end(__for_range);
      while ( 1 )
      {
        v14 = (char *)(v5 + 96);
        if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v5 + 64),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v5 + 96)) )
        {
          v32 = 1;
          goto LABEL_41;
        }
        v51 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v5 + 64));
        main_quest_id = std::get<0ul,unsigned int const,unsigned int>(v51);
        order = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v51);
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<unsigned int>>,unsigned int>(
                quest_order_vec_map,
                main_quest_id) )
          goto LABEL_34;
        v15 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](quest_order_vec_map, main_quest_id);
        if ( !std::vector<unsigned int>::size(v15) )
          goto LABEL_34;
        if ( *(_BYTE *)(((unsigned __int64)order >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)order & 7) + 3) >= *(_BYTE *)(((unsigned __int64)order >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(order);
        }
        v16 = *order;
        v17 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](quest_order_vec_map, main_quest_id);
        v18 = std::vector<unsigned int>::back(v17);
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        if ( v16 <= *v19 )
          v20 = 1;
        else
LABEL_34:
          v20 = 0;
        if ( v20 )
          break;
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v5 + 64));
      }
      if ( *(char *)(((v5 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 33) & 7) >= *(_BYTE *)(((v5 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CoopExcelConfig.cpp",
        "checkCoopPointQuestOrderByDfs",
        1045);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v22 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(v21, (const char (*)[67])byte_1AC63000);
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, main_quest_id);
      v24 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])", CoopPointId:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v5 + 48));
      v26 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v25, (const char (*)[51])byte_1AC630C0);
      v27 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](quest_order_vec_map, main_quest_id);
      v28 = std::vector<unsigned int>::back(v27);
      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, v28);
      v30 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v29, (const char (*)[10])byte_1AC63120);
      v31 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v30, (const char (*)[51])byte_1AC63160);
      v14 = (char *)order;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, order);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 448));
      *(_DWORD *)(((v5 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
      v32 = 0;
LABEL_41:
      *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v32 == 1 )
      {
        *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 128, v14);
        *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v5 + 128) = std::unordered_map<unsigned int,unsigned int>::begin(quest_max_order_map);
        *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 160, v14);
        *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v5 + 160) = std::unordered_map<unsigned int,unsigned int>::end(quest_max_order_map);
        while ( 1 )
        {
          v33 = (char *)(v5 + 160);
          if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v5 + 128),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v5 + 160)) )
            break;
          v57 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v5 + 128));
          main_quest_id_0 = std::get<0ul,unsigned int const,unsigned int>(v57);
          order_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v57);
          v34 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                  quest_order_vec_map,
                  main_quest_id_0);
          std::vector<unsigned int>::push_back(v34, order_0);
          std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v5 + 128));
        }
        *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
        __for_range_1 = &point_config_ptr->post_point_list;
        *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 192, v33);
        *(std::vector<unsigned int>::const_iterator *)(v5 + 192) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 224, v33);
        *(std::vector<unsigned int>::const_iterator *)(v5 + 224) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v35 = (char *)(v5 + 224);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 192),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 224)) )
          {
            v42 = 1;
            goto LABEL_65;
          }
          *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = 4;
          v36 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 192));
          v37 = (int *)v36;
          if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v36);
          }
          v38 = *v37;
          v39 = *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000);
          if ( v39 != 0 && v39 <= 3 )
          {
            LOBYTE(v35) = v39 != 0;
            __asan_report_store4(v5 + 32, v35);
          }
          *(_DWORD *)(v5 + 32) = v38;
          if ( CoopExcelConfigMgr::checkCoopPointQuestOrderByDfs(
                 this,
                 txt_config_mgr,
                 *(_DWORD *)(v5 + 32),
                 quest_order_vec_map) )
          {
            break;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 192));
        }
        *(_DWORD *)(((v5 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 31) & 7) >= *(_BYTE *)(((v5 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CoopExcelConfig.cpp",
          "checkCoopPointQuestOrderByDfs",
          1061);
        v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v41 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                v40,
                (const char (*)[53])"checkCoopPointQuestOrderByDfs failed, post_point_id:");
        v35 = (char *)(v5 + 32);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v5 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 512));
        *(_DWORD *)(((v5 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
        v42 = 0;
LABEL_65:
        *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = -8;
        if ( v42 == 1 )
        {
          *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v5 + 256, v35);
          *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v5 + 256) = std::unordered_map<unsigned int,unsigned int>::begin(quest_max_order_map);
          *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v5 + 288, v35);
          *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v5 + 288) = std::unordered_map<unsigned int,unsigned int>::end(quest_max_order_map);
          while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v5 + 256),
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v5 + 288)) )
          {
            v55 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v5 + 256));
            main_quest_id_1 = std::get<0ul,unsigned int const,unsigned int>(v55);
            std::get<1ul,unsigned int const,unsigned int>(v55);
            v43 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                    quest_order_vec_map,
                    main_quest_id_1);
            std::vector<unsigned int>::pop_back(v43);
            std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v5 + 256));
          }
          v4 = 0;
        }
      }
    }
  }
  else
  {
    if ( *(char *)(((v5 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/CoopExcelConfig.cpp",
      "checkCoopPointQuestOrderByDfs",
      1021);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v5 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           v8,
           (const char (*)[48])"findCoopPointExcelConfig failed, coop_point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 320));
    v4 = -1;
  }
  result = v4;
  if ( v60 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
