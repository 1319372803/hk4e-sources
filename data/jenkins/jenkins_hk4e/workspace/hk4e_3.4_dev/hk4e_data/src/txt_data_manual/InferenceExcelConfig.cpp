// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/InferenceExcelConfig.cpp

// Line 18: range 000000001448D042-000000001448D26A
int32_t __cdecl InferenceExcelConfigMgr::checkConfig(
        InferenceExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = InferenceExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( InferenceExcelConfigMgr::checkInferencePageConfig(this, txt_config_mgr)
    || InferenceExcelConfigMgr::checkInferenceWordConfig(this, txt_config_mgr)
    || InferenceExcelConfigMgr::checkInferenceConclusionConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/InferenceExcelConfig.cpp",
      "checkConfig",
      23);
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

// Line 30: range 000000001448D26C-000000001448D494
int32_t __cdecl InferenceExcelConfigMgr::rewriteConfig(
        InferenceExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = InferenceExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( InferenceExcelConfigMgr::rewriteInferencePageConfig(this, txt_config_mgr)
    || InferenceExcelConfigMgr::rewriteInferenceWordConfig(this, txt_config_mgr)
    || InferenceExcelConfigMgr::rewriteInferenceConclusionConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/InferenceExcelConfig.cpp",
      "rewriteConfig",
      35);
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

// Line 42: range 000000001448D496-000000001448DD9D
int32_t __cdecl InferenceExcelConfigMgr::checkInferencePageConfig(
        InferenceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  uint32_t *p_parent_quest_id; // rax
  __int64 parent_quest_id; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int v13; // eax
  char *v14; // rsi
  unsigned int *v15; // rax
  int *v16; // rdx
  int v17; // ecx
  char v18; // al
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  int v23; // edx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  int32_t result; // eax
  data::InferencePageExcelConfigMap *__for_range; // [rsp+18h] [rbp-1D8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferencePageExcelConfig>,false,false>::reference v31; // [rsp+20h] [rbp-1D0h]
  std::tuple_element<0,std::pair<unsigned int const,data::InferencePageExcelConfig> >::type *id; // [rsp+28h] [rbp-1C8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::InferencePageExcelConfig> >::type *config; // [rsp+30h] [rbp-1C0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1B8h]
  char v35[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 16 conclusion_id:50 64 8 14 __for_begin:43 96 8 12 __for_end:43 128 8 14 __for_begin:50 1"
                        "60 8 12 __for_end:50 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = InferenceExcelConfigMgr::checkInferencePageConfig;
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
  __for_range = &this->inference_page_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InferencePageExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::InferencePageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InferencePageExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::InferencePageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::InferencePageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InferencePageExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InferencePageExcelConfig>,false> *)(v3 + 96)) )
    {
      v13 = 1;
      goto LABEL_40;
    }
    v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferencePageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferencePageExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::InferencePageExcelConfig>(v31);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::InferencePageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::InferencePageExcelConfig>(v31);
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    p_parent_quest_id = &config->parent_quest_id;
    if ( *(_BYTE *)(((unsigned __int64)p_parent_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_parent_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_parent_quest_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(p_parent_quest_id);
    }
    parent_quest_id = config->parent_quest_id;
    if ( !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(p_quest_config_mgr, parent_quest_id) )
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
        "./src/txt_data_manual/InferenceExcelConfig.cpp",
        "checkInferencePageConfig",
        47);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              v9,
              (const char (*)[50])"findMainQuestExcelConfig failed, parent_quest_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->parent_quest_id);
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", page_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      v2 = -1;
      v13 = 0;
      goto LABEL_40;
    }
    __for_range_0 = &config->conclusion_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, parent_quest_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, parent_quest_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v14 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v23 = 1;
        goto LABEL_32;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v15 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v16 = (int *)v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      v17 = *v16;
      v18 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v18 != 0 && v18 <= 3 )
      {
        LOBYTE(v14) = v18 != 0;
        __asan_report_store4(v3 + 48, v14);
      }
      *(_DWORD *)(v3 + 48) = v17;
      if ( !data::InferenceExcelConfigMgrBase::findInferenceConclusionExcelConfig(this, *(unsigned int *)(v3 + 48)) )
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
      "./src/txt_data_manual/InferenceExcelConfig.cpp",
      "checkInferencePageConfig",
      54);
    v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v20 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            v19,
            (const char (*)[58])"findInferenceConclusionExcelConfig failed, conclusion_id:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 48));
    v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])", page_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v23 = 0;
LABEL_32:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v23 != 1 )
    {
      v13 = 0;
      goto LABEL_40;
    }
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>>,unsigned int>(
            &this->page_to_word_map,
            id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferencePageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferencePageExcelConfig>,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/InferenceExcelConfig.cpp",
    "checkInferencePageConfig",
    61);
  v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 320),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v25 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          v24,
          (const char (*)[41])"no word config in page, parent_quest_id:");
  v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &config->parent_quest_id);
  v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])", page_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
  v2 = -1;
  v13 = 0;
LABEL_40:
  if ( v13 == 1 )
    v2 = 0;
  result = v2;
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
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

// Line 69: range 000000001448DD9E-000000001448E467
int32_t __cdecl InferenceExcelConfigMgr::rewriteInferenceWordConfig(
        InferenceExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  InferenceExcelConfigMgr *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  std::set<unsigned int> *v12; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v13; // rax
  unsigned int *v14; // r8
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int32_t result; // eax
  data::InferenceWordExcelConfigMap *__for_range; // [rsp+18h] [rbp-178h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferenceWordExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-170h]
  const unsigned int *id; // [rsp+28h] [rbp-168h]
  std::tuple_element<1,std::pair<unsigned int const,data::InferenceWordExcelConfig> >::type *config; // [rsp+30h] [rbp-160h]
  data::InferencePageExcelConfig *page_config_ptr; // [rsp+38h] [rbp-158h]
  char v26[336]; // [rsp+40h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 14 __for_begin:70 64 8 12 __for_end:70 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = InferenceExcelConfigMgr::rewriteInferenceWordConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->inference_word_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InferenceWordExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::InferenceWordExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InferenceWordExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::InferenceWordExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::InferenceWordExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InferenceWordExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InferenceWordExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_26;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferenceWordExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferenceWordExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::InferenceWordExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::InferenceWordExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::InferenceAction,data::InferenceActionType data::InferenceAction::*>(
      &config->interpret_action,
      (data::InferenceActionType *)8);
    common::tools::MiscUtils::removeEmptyElement<data::InferenceAction,data::InferenceActionType data::InferenceAction::*>(
      &config->associate_action,
      (data::InferenceActionType *)8);
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)&config->page_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->page_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->page_id);
    }
    page_config_ptr = data::InferenceExcelConfigMgrBase::findInferencePageExcelConfig(v6, config->page_id);
    if ( !page_config_ptr )
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
        "./src/txt_data_manual/InferenceExcelConfig.cpp",
        "rewriteInferenceWordConfig",
        77);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             v7,
             (const char (*)[46])"findInferencePageExcelConfig failed, page_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->page_id);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])", word_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v11 = 0;
      goto LABEL_26;
    }
    v12 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](&this->page_to_word_map, &config->page_id);
    v13 = std::set<unsigned int>::insert(v12, id);
    if ( !v13.second )
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
        "./src/txt_data_manual/InferenceExcelConfig.cpp",
        "rewriteInferenceWordConfig",
        82);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v15,
              (const char (*)[24])"duplicate page word_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v11 = 0;
      goto LABEL_26;
    }
    v17 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
            &this->word_to_parent_quest_map,
            id,
            &page_config_ptr->parent_quest_id,
            (const unsigned int *)&this->word_to_parent_quest_map,
            v14);
    if ( !v17.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferenceWordExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferenceWordExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/InferenceExcelConfig.cpp",
    "rewriteInferenceWordConfig",
    88);
  v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v19 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          v18,
          (const char (*)[24])"duplicate page word_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v11 = 0;
LABEL_26:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v26 == (char *)v3 )
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

// Line 96: range 000000001448E468-000000001448EDC1
int32_t __cdecl InferenceExcelConfigMgr::checkInferenceWordConfig(
        InferenceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  InferenceExcelConfigMgr *v6; // rcx
  uint32_t *p_page_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  uint32_t associate_word_id; // esi
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  int32_t result; // eax
  data::InferenceWordExcelConfigMap *__for_range; // [rsp+10h] [rbp-1B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferenceWordExcelConfig>,false,false>::reference v25; // [rsp+18h] [rbp-1A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::InferenceWordExcelConfig> >::type *id; // [rsp+20h] [rbp-1A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::InferenceWordExcelConfig> >::type *config; // [rsp+28h] [rbp-198h]
  char v28[400]; // [rsp+30h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 14 __for_begin:97 64 8 12 __for_end:97 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unk"
                        "nown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = InferenceExcelConfigMgr::checkInferenceWordConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  __for_range = &this->inference_word_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InferenceWordExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::InferenceWordExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InferenceWordExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::InferenceWordExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::InferenceWordExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InferenceWordExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InferenceWordExcelConfig>,false> *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_41;
    }
    v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferenceWordExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferenceWordExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::InferenceWordExcelConfig>(v25);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::InferenceWordExcelConfig> >::type *)std::get<1ul,unsigned int const,data::InferenceWordExcelConfig>(v25);
    v6 = this;
    p_page_id = &config->page_id;
    if ( *(_BYTE *)(((unsigned __int64)p_page_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_page_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_page_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_page_id);
    }
    if ( !data::InferenceExcelConfigMgrBase::findInferencePageExcelConfig(v6, config->page_id) )
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
        "./src/txt_data_manual/InferenceExcelConfig.cpp",
        "checkInferenceWordConfig",
        101);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             v8,
             (const char (*)[46])"findInferencePageExcelConfig failed, page_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->page_id);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])", word_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v12 = 0;
      goto LABEL_41;
    }
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( InferenceExcelConfigMgr::checkInferenceActionConfig(this, txt_config_mgr, &config->interpret_action, *id) )
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
        "./src/txt_data_manual/InferenceExcelConfig.cpp",
        "checkInferenceWordConfig",
        106);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              v13,
              (const char (*)[40])"check interpret_action failed, word_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v12 = 0;
      goto LABEL_41;
    }
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( InferenceExcelConfigMgr::checkInferenceActionConfig(this, txt_config_mgr, &config->associate_action, *id) )
    {
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/InferenceExcelConfig.cpp",
        "checkInferenceWordConfig",
        111);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              v15,
              (const char (*)[40])"check associate_action failed, word_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      v2 = -1;
      v12 = 0;
      goto LABEL_41;
    }
    if ( *(char *)(((unsigned __int64)&config->is_can_associate >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->is_can_associate, txt_config_mgr, &config->is_can_associate);
    if ( config->is_can_associate )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->associate_word_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->associate_word_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->associate_word_id);
      }
      associate_word_id = config->associate_word_id;
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      if ( !InferenceExcelConfigMgr::isSameInferencePageButDifferentWords(this, *id, associate_word_id) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferenceWordExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferenceWordExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/InferenceExcelConfig.cpp",
    "checkInferenceWordConfig",
    118);
  v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 288),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v19 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
          v18,
          (const char (*)[58])"associate_word_id is not in same page, associate_word_id:");
  v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &config->associate_word_id);
  v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])", word_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
  v2 = -1;
  v12 = 0;
LABEL_41:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 127: range 000000001448EDC2-000000001448F506
int32_t __cdecl InferenceExcelConfigMgr::rewriteInferencePageConfig(
        InferenceExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  char *v7; // rsi
  unsigned int *v8; // rax
  const unsigned int *v9; // r8
  int *v10; // rdx
  int v11; // ecx
  char v12; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  int v18; // eax
  std::set<unsigned int> *v19; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  int v23; // eax
  int32_t result; // eax
  data::InferencePageExcelConfigMap *__for_range; // [rsp+18h] [rbp-198h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferencePageExcelConfig>,false,false>::reference v26; // [rsp+20h] [rbp-190h]
  std::tuple_element<0,std::pair<unsigned int const,data::InferencePageExcelConfig> >::type *id; // [rsp+28h] [rbp-188h]
  std::tuple_element<1,const std::pair<unsigned int const,data::InferencePageExcelConfig> >::type *config; // [rsp+30h] [rbp-180h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-178h]
  char v30[368]; // [rsp+40h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 17 conclusion_id:130 64 8 15 __for_begin:128 96 8 13 __for_end:128 128 8 15 __for_begin:1"
                        "30 160 8 13 __for_end:130 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = InferenceExcelConfigMgr::rewriteInferencePageConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  __for_range = &this->inference_page_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InferencePageExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::InferencePageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InferencePageExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::InferencePageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::InferencePageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InferencePageExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InferencePageExcelConfig>,false> *)(v3 + 96)) )
      break;
    v26 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferencePageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferencePageExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::InferencePageExcelConfig>(v26);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::InferencePageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::InferencePageExcelConfig>(v26);
    __for_range_0 = &config->conclusion_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v18 = 1;
        goto LABEL_30;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v10 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v11 = *v10;
      v12 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(v7) = v12 != 0;
        __asan_report_store4(v3 + 48, v7);
      }
      *(_DWORD *)(v3 + 48) = v11;
      v13 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
              &this->conclusion_to_page_map,
              (unsigned int *)(v3 + 48),
              id,
              (unsigned int *)&this->conclusion_to_page_map,
              v9);
      if ( !v13.second )
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
          "./src/txt_data_manual/InferenceExcelConfig.cpp",
          "rewriteInferencePageConfig",
          134);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v14,
                (const char (*)[25])"duplicate conclusion_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])", page_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v18 = 0;
        goto LABEL_30;
      }
      v19 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
              &this->parent_quest_to_page_map,
              &config->parent_quest_id);
      v20 = std::set<unsigned int>::insert(v19, id);
      if ( !v20.second )
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
      "./src/txt_data_manual/InferenceExcelConfig.cpp",
      "rewriteInferencePageConfig",
      139);
    v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v22 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            v21,
            (const char (*)[32])"duplicate parent quest page_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v18 = 0;
LABEL_30:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v18 != 1 )
    {
      v23 = 0;
      goto LABEL_34;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferencePageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferencePageExcelConfig>,false,false> *const)(v3 + 64));
  }
  v23 = 1;
LABEL_34:
  if ( v23 == 1 )
    v2 = 0;
  result = v2;
  if ( v30 == (char *)v3 )
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

// Line 148: range 000000001448F508-000000001448FC17
int32_t __cdecl InferenceExcelConfigMgr::rewriteInferenceConclusionConfig(
        InferenceExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  char *v10; // rsi
  unsigned int *v11; // rax
  const unsigned int *v12; // r8
  int *v13; // rdx
  int v14; // ecx
  char v15; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  int v21; // edx
  int32_t result; // eax
  data::InferenceConclusionExcelConfigMap *__for_range; // [rsp+18h] [rbp-198h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferenceConclusionExcelConfig>,false,false>::reference v24; // [rsp+20h] [rbp-190h]
  std::tuple_element<0,std::pair<unsigned int const,data::InferenceConclusionExcelConfig> >::type *id; // [rsp+28h] [rbp-188h]
  std::tuple_element<1,const std::pair<unsigned int const,data::InferenceConclusionExcelConfig> >::type *config; // [rsp+30h] [rbp-180h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-178h]
  char v28[368]; // [rsp+40h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 11 word_id:156 64 8 15 __for_begin:149 96 8 13 __for_end:149 128 8 15 __for_begin:156 160"
                        " 8 13 __for_end:156 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = InferenceExcelConfigMgr::rewriteInferenceConclusionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  __for_range = &this->inference_conclusion_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InferenceConclusionExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::InferenceConclusionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::InferenceConclusionExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::InferenceConclusionExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::InferenceConclusionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InferenceConclusionExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InferenceConclusionExcelConfig>,false> *)(v3 + 96)) )
    {
      v9 = 1;
      goto LABEL_34;
    }
    v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferenceConclusionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferenceConclusionExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::InferenceConclusionExcelConfig>(v24);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::InferenceConclusionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::InferenceConclusionExcelConfig>(v24);
    if ( !std::vector<unsigned int>::size(&config->word_list) )
      break;
    __for_range_0 = &config->word_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v10 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v21 = 1;
        goto LABEL_30;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v11 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v13 = (int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v14 = *v13;
      v15 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v15 != 0 && v15 <= 3 )
      {
        LOBYTE(v10) = v15 != 0;
        __asan_report_store4(v3 + 48, v10);
      }
      *(_DWORD *)(v3 + 48) = v14;
      v16 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
              &this->word_to_conclusion_map,
              (unsigned int *)(v3 + 48),
              id,
              (unsigned int *)&this->word_to_conclusion_map,
              v12);
      if ( !v16.second )
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
      "./src/txt_data_manual/InferenceExcelConfig.cpp",
      "rewriteInferenceConclusionConfig",
      160);
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v17, (const char (*)[19])"duplicate word_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
    v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v19, (const char (*)[17])", conclusion_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v21 = 0;
LABEL_30:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v21 != 1 )
    {
      v9 = 0;
      goto LABEL_34;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferenceConclusionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::InferenceConclusionExcelConfig>,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/InferenceExcelConfig.cpp",
    "rewriteInferenceConclusionConfig",
    153);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 192),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         v7,
         (const char (*)[44])"concluesion word_list empty, conclusion_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  v2 = -1;
  v9 = 0;
LABEL_34:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v28 == (char *)v3 )
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

// Line 169: range 000000001448FC18-00000000144904B0
int32_t __cdecl InferenceExcelConfigMgr::checkInferenceConclusionConfig(
        InferenceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  InferenceExcelConfigMgr *v6; // rcx
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  std::unordered_map<unsigned int,unsigned int> *p_conclusion_to_page_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v14; // rdx
  bool v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  uint32_t page_id; // r15d
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v19; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  int v25; // eax
  int32_t result; // eax
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-1B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v28; // [rsp+30h] [rbp-1B0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *word_id; // [rsp+38h] [rbp-1A8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *conclusion_id; // [rsp+40h] [rbp-1A0h]
  data::InferenceWordExcelConfig *word_config_ptr; // [rsp+48h] [rbp-198h]
  char v32[400]; // [rsp+50h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 15 __for_begin:170 64 8 13 __for_end:170 96 8 8 iter:178 128 8 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = InferenceExcelConfigMgr::checkInferenceConclusionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  __for_range = &this->word_to_conclusion_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64)) )
  {
    v28 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 32));
    word_id = std::get<0ul,unsigned int const,unsigned int>(v28);
    conclusion_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v28);
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)word_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)word_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)word_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(word_id);
    }
    v7 = *word_id;
    word_config_ptr = data::InferenceExcelConfigMgrBase::findInferenceWordExcelConfig(v6, v7);
    if ( word_config_ptr )
    {
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      p_conclusion_to_page_map = &this->conclusion_to_page_map;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v7);
      *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                p_conclusion_to_page_map,
                                                                                conclusion_id);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      v14 = &this->conclusion_to_page_map;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, conclusion_id);
      *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,unsigned int>::end(v14);
      v15 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 128));
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( v15 )
      {
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/InferenceExcelConfig.cpp",
          "checkInferenceConclusionConfig",
          181);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                v16,
                (const char (*)[58])"conclusion_id is not found in page config, conclusion_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, conclusion_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&word_config_ptr->page_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)word_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&word_config_ptr->page_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&word_config_ptr->page_id);
        }
        page_id = word_config_ptr->page_id;
        v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 96));
        p_second = &v19->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        if ( page_id == v19->second )
        {
          v12 = 1;
        }
        else
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
            "./src/txt_data_manual/InferenceExcelConfig.cpp",
            "checkInferenceConclusionConfig",
            186);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v22 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                  v21,
                  (const char (*)[57])"word->page is not match conclusion->page, conclusion_id:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, conclusion_id);
          v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])", word_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, word_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v12 = 0;
        }
      }
    }
    else
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
        "./src/txt_data_manual/InferenceExcelConfig.cpp",
        "checkInferenceConclusionConfig",
        175);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             v8,
             (const char (*)[38])"findInferenceWordExcelConfig word_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, word_id);
      v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v10, (const char (*)[17])", conclusion_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, conclusion_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v12 != 1 )
    {
      v25 = 0;
      goto LABEL_37;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 32));
  }
  v25 = 1;
LABEL_37:
  if ( v25 == 1 )
    v2 = 0;
  result = v2;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 194: range 00000000144904B2-0000000014490F9B
__int64 __fastcall InferenceExcelConfigMgr::checkInferenceActionConfig(
        InferenceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<data::InferenceAction> *action_vec,
        uint32_t word_id)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  __int64 v13; // rsi
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_word_to_unlock_word_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v19; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::pointer v20; // rax
  bool v21; // dl
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::set<unsigned int> *v26; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int v32; // eax
  __int64 result; // rax
  const data::InferenceAction *action; // [rsp+38h] [rbp-1F8h]
  char v37[496]; // [rsp+40h] [rbp-1F0h] BYREF

  v5 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(448LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 32 4 19 another_word_id:201 48 4 11 word_id:193 64 8 15 __for_begin:195 96 8 13 __for_end:195"
                        " 128 8 8 iter:212 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = InferenceExcelConfigMgr::checkInferenceActionConfig;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862727] = -218959118;
  v7[536862729] = -218959118;
  v7[536862731] = -218959118;
  v7[536862733] = -202116109;
  *(_DWORD *)(v5 + 48) = word_id;
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, txt_config_mgr);
  *(std::vector<data::InferenceAction>::const_iterator *)(v5 + 64) = std::vector<data::InferenceAction>::begin(action_vec);
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, txt_config_mgr);
  *(std::vector<data::InferenceAction>::const_iterator *)(v5 + 96) = std::vector<data::InferenceAction>::end(action_vec);
  while ( __gnu_cxx::operator!=<data::InferenceAction const*,std::vector<data::InferenceAction>>(
            (const __gnu_cxx::__normal_iterator<const data::InferenceAction*,std::vector<data::InferenceAction> > *)(v5 + 64),
            (const __gnu_cxx::__normal_iterator<const data::InferenceAction*,std::vector<data::InferenceAction> > *)(v5 + 96)) )
  {
    action = __gnu_cxx::__normal_iterator<data::InferenceAction const*,std::vector<data::InferenceAction>>::operator*((const __gnu_cxx::__normal_iterator<const data::InferenceAction*,std::vector<data::InferenceAction> > *const)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&action->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&action->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&action->type);
    }
    if ( action->type != INFERENCE_ACTION_UNLOCK_WORD )
    {
      v4 = -1;
      v32 = 0;
      goto LABEL_47;
    }
    *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v5 + 32, v5 + 96);
    *(_DWORD *)(v5 + 32) = 0;
    if ( common::tools::StringUtils::strToNum<unsigned int>(&action->param, (unsigned int *)(v5 + 32), 1) )
    {
      *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/InferenceExcelConfig.cpp",
        "checkInferenceActionConfig",
        204);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v5 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             v8,
             (const char (*)[24])"strToNum failed, param:");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &action->param);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])", word_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 192));
      *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
      v12 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v5 + 32);
      v13 = *(unsigned int *)(v5 + 48);
      if ( !InferenceExcelConfigMgr::isSameInferencePageButDifferentWords(this, v13, *(_DWORD *)(v5 + 32)) )
      {
        *(_DWORD *)(((v5 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/InferenceExcelConfig.cpp",
          "checkInferenceActionConfig",
          209);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                v14,
                (const char (*)[49])"unlock word is not in same page, unlock_word_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v5 + 32));
        v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])", word_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 256));
        *(_DWORD *)(((v5 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
        v12 = 0;
      }
      else
      {
        *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
        p_word_to_unlock_word_map = &this->word_to_unlock_word_map;
        if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 128, v13);
        *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v5 + 128) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                             p_word_to_unlock_word_map,
                                                                                             (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v5 + 32));
        *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
        v19 = &this->word_to_unlock_word_map;
        if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 160, v5 + 32);
        *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v5 + 160) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v19);
        v21 = 0;
        if ( std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v5 + 128),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v5 + 160)) )
        {
          v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v5 + 128));
          if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                 &v20->second,
                 (const unsigned int *)(v5 + 48)) )
          {
            v21 = 1;
          }
        }
        *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v21 )
        {
          *(_DWORD *)(((v5 + 320) >> 3) + 0x7FFF8000) = 0;
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
            "./src/txt_data_manual/InferenceExcelConfig.cpp",
            "checkInferenceActionConfig",
            216);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  v22,
                  (const char (*)[50])"nested references of unlock word, unlock_word_id:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v5 + 32));
          v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v24, (const char (*)[11])", word_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v5 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 320));
          *(_DWORD *)(((v5 + 320) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
          v12 = 0;
        }
        else
        {
          v26 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                  &this->word_to_unlock_word_map,
                  (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v5 + 48));
          v27 = std::set<unsigned int>::insert(v26, (const std::set<unsigned int>::value_type *)(v5 + 32));
          if ( !v27.second )
          {
            *(_DWORD *)(((v5 + 384) >> 3) + 0x7FFF8000) = 0;
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
              "./src/txt_data_manual/InferenceExcelConfig.cpp",
              "checkInferenceActionConfig",
              221);
            v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v29 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    v28,
                    (const char (*)[48])"duplicate unlock action config, unlock_word_id:");
            v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v29,
                    (const unsigned int *)(v5 + 32));
            v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v30, (const char (*)[11])", word_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v5 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 384));
            *(_DWORD *)(((v5 + 384) >> 3) + 0x7FFF8000) = -117901064;
            v4 = -1;
            v12 = 0;
          }
          else
          {
            v12 = 1;
          }
        }
      }
    }
    *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( !v12 )
    {
      v32 = 0;
      goto LABEL_47;
    }
    __gnu_cxx::__normal_iterator<data::InferenceAction const*,std::vector<data::InferenceAction>>::operator++((__gnu_cxx::__normal_iterator<const data::InferenceAction*,std::vector<data::InferenceAction> > *const)(v5 + 64));
  }
  v32 = 1;
LABEL_47:
  if ( v32 == 1 )
    v4 = 0;
  result = v4;
  if ( v37 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 234: range 0000000014490F9C-00000000144913DE
bool __fastcall InferenceExcelConfigMgr::isSameInferencePageButDifferentWords(
        InferenceExcelConfigMgr *const this,
        uint32_t word_id,
        uint32_t another_word_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool result; // al
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t page_id; // ecx
  data::InferenceWordExcelConfig *word_config_ptr; // [rsp+10h] [rbp-F0h]
  data::InferenceWordExcelConfig *another_word_config_ptr; // [rsp+18h] [rbp-E8h]
  char v15[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 11 word_id:233 48 4 19 another_word_id:233 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = InferenceExcelConfigMgr::isSameInferencePageButDifferentWords;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862723] = -218959118;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = word_id;
  *(_DWORD *)(v3 + 48) = another_word_id;
  if ( *(_DWORD *)(v3 + 32) == *(_DWORD *)(v3 + 48) )
  {
    result = 0;
  }
  else
  {
    word_config_ptr = data::InferenceExcelConfigMgrBase::findInferenceWordExcelConfig(this, *(unsigned int *)(v3 + 32));
    if ( word_config_ptr )
    {
      another_word_config_ptr = data::InferenceExcelConfigMgrBase::findInferenceWordExcelConfig(
                                  this,
                                  *(unsigned int *)(v3 + 48));
      if ( another_word_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&word_config_ptr->page_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)word_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&word_config_ptr->page_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&word_config_ptr->page_id);
        }
        page_id = word_config_ptr->page_id;
        if ( *(_BYTE *)(((unsigned __int64)&another_word_config_ptr->page_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)another_word_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&another_word_config_ptr->page_id >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&another_word_config_ptr->page_id);
        }
        result = page_id == another_word_config_ptr->page_id;
      }
      else
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
          "./src/txt_data_manual/InferenceExcelConfig.cpp",
          "isSameInferencePageButDifferentWords",
          248);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 128),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                v9,
                (const char (*)[46])"findInferenceWordExcelConfig failed, word_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
        result = 0;
      }
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
        "./src/txt_data_manual/InferenceExcelConfig.cpp",
        "isSameInferencePageButDifferentWords",
        242);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 64),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             v7,
             (const char (*)[46])"findInferenceWordExcelConfig failed, word_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
      result = 0;
    }
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
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
