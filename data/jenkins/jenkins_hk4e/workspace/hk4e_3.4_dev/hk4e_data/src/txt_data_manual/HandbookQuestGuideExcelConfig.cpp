// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/HandbookQuestGuideExcelConfig.cpp

// Line 18: range 000000001446B2EA-000000001446BDD5
int32_t __cdecl HandbookQuestGuideExcelConfigMgr::checkConfig(
        HandbookQuestGuideExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  std::set<unsigned int> *v17; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-214h]
  data::HandbookQuestGuideExcelConfigMap *__for_range; // [rsp+20h] [rbp-210h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HandbookQuestGuideExcelConfig>,false,false>::reference v24; // [rsp+28h] [rbp-208h]
  std::tuple_element<0,std::pair<unsigned int const,data::HandbookQuestGuideExcelConfig> >::type *id; // [rsp+30h] [rbp-200h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HandbookQuestGuideExcelConfig> >::type *config; // [rsp+38h] [rbp-1F8h]
  char v27[496]; // [rsp+40h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 8 14 __for_begin:21 80 8 12 __for_end:21 112 32 9 <unknown> 176 32 9 <unknown> 240 32 9 <un"
                        "known> 304 32 9 <unknown> 368 48 21 type_order_set_map:20";
  *(_QWORD *)(v2 + 16) = HandbookQuestGuideExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862733] = -202116109;
  ret = 0;
  std::map<unsigned int,std::set<unsigned int>>::map((std::map<unsigned int,std::set<unsigned int>> *const)(v2 + 368));
  __for_range = &this->handbook_quest_guide_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HandbookQuestGuideExcelConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::HandbookQuestGuideExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HandbookQuestGuideExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::HandbookQuestGuideExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::HandbookQuestGuideExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HandbookQuestGuideExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HandbookQuestGuideExcelConfig>,false> *)(v2 + 80)) )
  {
    v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HandbookQuestGuideExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HandbookQuestGuideExcelConfig>,false,false> *const)(v2 + 48));
    id = std::get<0ul,unsigned int const,data::HandbookQuestGuideExcelConfig>(v24);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::HandbookQuestGuideExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HandbookQuestGuideExcelConfig>(v24);
    if ( *(_BYTE *)(((unsigned __int64)&config->main_quest_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->main_quest_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->main_quest_id);
    }
    if ( config->main_quest_id
      && !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(
            &txt_config_mgr->quest_config_mgr,
            config->main_quest_id) )
    {
      *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 112, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 112),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/HandbookQuestGuideExcelConfig.cpp",
        "checkConfig",
        25);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 112),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v6, (const char (*)[41])byte_1AD7DA80);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->main_quest_id);
      v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])", id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 112));
      *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->chapter_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->chapter_id);
    }
    if ( config->chapter_id
      && !data::QuestExcelConfigMgrBase::findChapterExcelConfig(&txt_config_mgr->quest_config_mgr, config->chapter_id) )
    {
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
        "./src/txt_data_manual/HandbookQuestGuideExcelConfig.cpp",
        "checkConfig",
        30);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 176),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v11, (const char (*)[35])byte_1AD7DB20);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->chapter_id);
      v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->chapter_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->chapter_id);
    }
    if ( config->chapter_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->main_quest_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->main_quest_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->main_quest_id);
      }
      if ( config->main_quest_id )
      {
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
          "./src/txt_data_manual/HandbookQuestGuideExcelConfig.cpp",
          "checkConfig",
          35);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 240),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(v15, (const char (*)[69])byte_1AD7DB80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
        *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    v17 = std::map<unsigned int,std::set<unsigned int>>::operator[](
            (std::map<unsigned int,std::set<unsigned int>> *const)(v2 + 368),
            &config->type_id);
    v18 = std::set<unsigned int>::emplace<unsigned int const&>(v17, &config->order, (const unsigned int *)v17);
    if ( !v18.second )
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
        "./src/txt_data_manual/HandbookQuestGuideExcelConfig.cpp",
        "checkConfig",
        40);
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 304),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v20 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v19, (const char (*)[53])byte_1AD7DC00);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HandbookQuestGuideExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HandbookQuestGuideExcelConfig>,false,false> *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  std::map<unsigned int,std::set<unsigned int>>::~map((std::map<unsigned int,std::set<unsigned int>> *const)(v2 + 368));
  result = ret;
  if ( v27 == (char *)v2 )
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
