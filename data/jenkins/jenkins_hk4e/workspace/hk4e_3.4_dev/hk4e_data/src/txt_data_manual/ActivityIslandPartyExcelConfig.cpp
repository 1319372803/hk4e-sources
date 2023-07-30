// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp

// Line 20: range 0000000012C6CAEA-0000000012C6CCCD
int32_t __cdecl ActivityIslandPartyExcelConfigMgr::rewriteConfig(
        ActivityIslandPartyExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityIslandPartyExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityIslandPartyExcelConfigMgr::rewriteIslandPartyStageConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
      "rewriteConfig",
      23);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v5, (const char (*)[21])"rewriteConfig failed");
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

// Line 30: range 0000000012C6CCCE-0000000012C6D941
int32_t __cdecl ActivityIslandPartyExcelConfigMgr::rewriteIslandPartyStageConfig(
        ActivityIslandPartyExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::ActivityIslandPartyStageExcelConfig *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  _BOOL4 v12; // edx
  unsigned __int64 v13; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v15; // rax
  std::set<unsigned int>::size_type v16; // r15
  std::set<unsigned int> *v17; // r8
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  _BOOL4 v20; // r15d
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>,bool> v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  unsigned __int64 v26; // rax
  const unsigned int *v27; // r15
  std::vector<unsigned int>::const_iterator v28; // rax
  std::set<unsigned int>::size_type v29; // r15
  std::set<unsigned int> *v30; // r8
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int v33; // r15d
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>,bool> v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  int v41; // eax
  int32_t result; // eax
  data::ActivityIslandPartyStageExcelConfigMap *__for_range; // [rsp+20h] [rbp-290h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false>::reference v44; // [rsp+28h] [rbp-288h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig> >::type *id; // [rsp+30h] [rbp-280h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig> >::type *config; // [rsp+38h] [rbp-278h]
  char v47[624]; // [rsp+40h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 8 14 __for_begin:31 64 8 12 __for_end:31 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unk"
                        "nown> 288 32 9 <unknown> 352 32 9 <unknown> 416 48 26 exhibition_score_id_set:38 496 48 25 exhib"
                        "ition_card_id_set:49";
  *(_QWORD *)(v3 + 16) = ActivityIslandPartyExcelConfigMgr::rewriteIslandPartyStageConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862737] = -202116109;
  __for_range = &this->activity_island_party_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false> *)(v3 + 64)) )
  {
    v44 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::ActivityIslandPartyStageExcelConfig>(v44);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityIslandPartyStageExcelConfig>(v44);
    v7 = std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::emplace<unsigned int const&,data::ActivityIslandPartyStageExcelConfig const&>(
           &this->gallery_id_config_map,
           &config->gallery_id,
           config,
           (const unsigned int *)&this->gallery_id_config_map,
           v6);
    if ( !v7.second )
    {
      *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
        "rewriteIslandPartyStageConfig",
        35);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v8, (const char (*)[36])byte_1AA66960);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->gallery_id);
      v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v10, (const char (*)[5])" id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
    }
    else
    {
      v13 = ((v3 + 416) >> 3) + 2147450880;
      *(_DWORD *)v13 = 0;
      *(_WORD *)(v13 + 4) = 0;
      M_current = std::vector<unsigned int>::end(&config->exhibition_score_id_list)._M_current;
      v15._M_current = std::vector<unsigned int>::begin(&config->exhibition_score_id_list)._M_current;
      std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
        (std::set<unsigned int> *const)(v3 + 416),
        v15,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
      v16 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 416));
      if ( v16 == std::vector<unsigned int>::size(&config->exhibition_score_id_list) )
      {
        v21 = std::unordered_map<unsigned int,std::set<unsigned int>>::emplace<unsigned int const&,std::set<unsigned int>&>(
                &this->stage_id_score_map,
                id,
                (std::set<unsigned int> *)(v3 + 416),
                (const unsigned int *)&this->stage_id_score_map,
                v17);
        if ( !v21.second )
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
            "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
            "rewriteIslandPartyStageConfig",
            46);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v22, (const char (*)[28])byte_1AA66A20);
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, id);
          v25 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v24, (const char (*)[5])" id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
          *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v20 = 0;
        }
        else
        {
          v26 = ((v3 + 496) >> 3) + 2147450880;
          *(_DWORD *)v26 = 0;
          *(_WORD *)(v26 + 4) = 0;
          v27 = std::vector<unsigned int>::end(&config->exhibition_card_id_list)._M_current;
          v28._M_current = std::vector<unsigned int>::begin(&config->exhibition_card_id_list)._M_current;
          std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
            (std::set<unsigned int> *const)(v3 + 496),
            v28,
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v27);
          v29 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 496));
          if ( v29 == std::vector<unsigned int>::size(&config->exhibition_card_id_list) )
          {
            v34 = std::unordered_map<unsigned int,std::set<unsigned int>>::emplace<unsigned int const&,std::set<unsigned int>&>(
                    &this->stage_id_card_map,
                    id,
                    (std::set<unsigned int> *)(v3 + 496),
                    (const unsigned int *)&this->stage_id_card_map,
                    v30);
            if ( !v34.second )
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
                "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
                "rewriteIslandPartyStageConfig",
                57);
              v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 352),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v36 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      v35,
                      (const char (*)[28])byte_1AA66A20);
              v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, id);
              v38 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v37, (const char (*)[5])" id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
              *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v33 = 0;
            }
            else
            {
              v33 = 1;
            }
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
              "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
              "rewriteIslandPartyStageConfig",
              52);
            v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 288),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v32 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                    v31,
                    (const char (*)[60])byte_1AA66A60);
            common::milog::MiLogStream::operator<<<unsigned int>(v32, &config->exhibition_card_id_list);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
            *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v33 = 0;
          }
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 496));
          v20 = v33 == 1;
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
          "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
          "rewriteIslandPartyStageConfig",
          41);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v18, (const char (*)[61])byte_1AA669C0);
        common::milog::MiLogStream::operator<<<unsigned int>(v19, &config->exhibition_score_id_list);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v20 = 0;
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 416));
      v12 = v20;
    }
    v39 = ((v3 + 416) >> 3) + 2147450880;
    *(_DWORD *)v39 = -117901064;
    *(_WORD *)(v39 + 4) = -1800;
    v40 = ((v3 + 496) >> 3) + 2147450880;
    *(_DWORD *)v40 = -117901064;
    *(_WORD *)(v40 + 4) = -1800;
    if ( !v12 )
    {
      v41 = 0;
      goto LABEL_37;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false> *const)(v3 + 32));
  }
  v41 = 1;
LABEL_37:
  if ( v41 == 1 )
    v2 = 0;
  result = v2;
  if ( v47 == (char *)v3 )
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

// Line 65: range 0000000012C6D942-0000000012C6DB4D
int32_t __cdecl ActivityIslandPartyExcelConfigMgr::checkConfig(
        ActivityIslandPartyExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityIslandPartyExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityIslandPartyExcelConfigMgr::checkIslandPartyOverallConfig(this, txt_config_mgr)
    || ActivityIslandPartyExcelConfigMgr::checkIslandPartyStageConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
      "checkConfig",
      69);
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

// Line 76: range 0000000012C6DB4E-0000000012C6E6E3
int32_t __cdecl ActivityIslandPartyExcelConfigMgr::checkIslandPartyOverallConfig(
        const ActivityIslandPartyExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  data::ActivityIslandPartyOverallExcelConfigMap *p_activity_island_party_overall_excel_config_map; // rdx
  data::ActivityIslandPartyOverallExcelConfigMap *v8; // rdx
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyOverallExcelConfig>,false,false>::pointer v12; // rax
  uint32_t settle_transfer_group_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::vector<unsigned int>::size_type v20; // rax
  common::milog::MiLogStream *v21; // rax
  char *v22; // rsi
  unsigned int *v23; // rax
  int *v24; // rdx
  int v25; // ecx
  char v26; // al
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // eax
  int32_t result; // eax
  LuaConfigMgr *lua_config_mgr; // [rsp+18h] [rbp-278h]
  const data::ActivityIslandPartyOverallExcelConfig *overall_config; // [rsp+20h] [rbp-270h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+28h] [rbp-268h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-260h]
  char v37[592]; // [rsp+40h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 4 11 group_id:90 48 4 19 point_config_id:102 64 8 7 iter:83 96 8 9 <unknown> 128 8 9 <unkn"
                        "own> 160 8 15 __for_begin:102 192 8 13 __for_end:102 224 32 9 <unknown> 288 32 9 <unknown> 352 3"
                        "2 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityIslandPartyExcelConfigMgr::checkIslandPartyOverallConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  if ( std::unordered_map<unsigned int,data::ActivityIslandPartyOverallExcelConfig>::empty(&this->activity_island_party_overall_excel_config_map) )
  {
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
      "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
      "checkIslandPartyOverallConfig",
      80);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 224),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v6, (const char (*)[42])byte_1AA66C00);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    v2 = -1;
  }
  else
  {
    p_activity_island_party_overall_excel_config_map = &this->activity_island_party_overall_excel_config_map;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::ActivityIslandPartyOverallExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityIslandPartyOverallExcelConfig>::begin(p_activity_island_party_overall_excel_config_map);
    v8 = &this->activity_island_party_overall_excel_config_map;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::ActivityIslandPartyOverallExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityIslandPartyOverallExcelConfig>::end(v8);
    v9 = (char *)(v3 + 96);
    v10 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityIslandPartyOverallExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyOverallExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyOverallExcelConfig>,false> *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
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
        "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
        "checkIslandPartyOverallConfig",
        86);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v11, (const char (*)[48])byte_1AA66C60);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v2 = -1;
    }
    else
    {
      v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyOverallExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyOverallExcelConfig>,false,false> *const)(v3 + 64));
      overall_config = &v12->second;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((unsigned __int64)&v12->second.settle_transfer_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v12->second.settle_transfer_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v12->second.settle_transfer_group_id);
      }
      settle_transfer_group_id = overall_config->settle_transfer_group_id;
      v14 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v9) = v14 != 0;
        __asan_report_store4(v3 + 32, v9);
      }
      *(_DWORD *)(v3 + 32) = settle_transfer_group_id;
      v15 = *(unsigned int *)(v3 + 32);
      group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, v15);
      if ( group_script_config_ptr )
      {
        if ( std::vector<unsigned int>::size(&overall_config->settle_transfer_config_id_list) == 4 )
        {
          __for_range = &overall_config->settle_transfer_config_id_list;
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 160, v15);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range);
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 192, v15);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range);
          while ( 1 )
          {
            v22 = (char *)(v3 + 192);
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
            {
              v31 = 1;
              goto LABEL_46;
            }
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
            v23 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
            v24 = (int *)v23;
            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v23);
            }
            v25 = *v24;
            v26 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
            if ( v26 != 0 && v26 <= 3 )
            {
              LOBYTE(v22) = v26 != 0;
              __asan_report_store4(v3 + 48, v22);
            }
            *(_DWORD *)(v3 + 48) = v25;
            if ( !GroupScriptConfig::findPointConfig(group_script_config_ptr, *(unsigned int *)(v3 + 48)) )
              break;
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
          }
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 480, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 480),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
            "checkIslandPartyOverallConfig",
            107);
          v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 480),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v28 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  v27,
                  (const char (*)[50])"[ISLAND_PARTY] point config not found, group_id: ");
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v28,
                  (const unsigned int *)(v3 + 32));
          v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v29,
                  (const char (*)[14])", config_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
          v2 = -1;
          v31 = 0;
LABEL_46:
          if ( v31 == 1 )
            v2 = 0;
        }
        else
        {
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 416, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 416),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
            "checkIslandPartyOverallConfig",
            99);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 416),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v19 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  v18,
                  (const char (*)[55])"[ISLAND_PARTY] settle_transfer_config_id_list.size(): ");
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
          v20 = std::vector<unsigned int>::size(&overall_config->settle_transfer_config_id_list);
          if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
            v20 = __asan_report_store8(v3 + 128, "[ISLAND_PARTY] settle_transfer_config_id_list.size(): ");
          *(_QWORD *)(v3 + 128) = v20;
          v21 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v19,
                  (const unsigned __int64 *)(v3 + 128));
          common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" != 4");
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
          v2 = -1;
        }
      }
      else
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
          "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
          "checkIslandPartyOverallConfig",
          94);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                v16,
                (const char (*)[57])"[ISLAND_PARTY] group script config not found, group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        v2 = -1;
      }
    }
  }
  result = v2;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 116: range 0000000012C6E6E4-0000000012C6F775
int32_t __cdecl ActivityIslandPartyExcelConfigMgr::checkIslandPartyStageConfig(
        const ActivityIslandPartyExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ExhibitionExcelConfigMgr *p_exhibition_config_mgr; // rcx
  uint32_t *p_activity_id; // rax
  __int64 activity_id; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  _BOOL4 v16; // eax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  unsigned __int64 v20; // rax
  ExhibitionExcelConfigMgr *p_series_id; // rdi
  uint32_t series_id; // esi
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  int v26; // edx
  _BOOL4 v27; // r15d
  unsigned __int64 v28; // rax
  ExhibitionExcelConfigMgr *v29; // rdi
  uint32_t v30; // esi
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  int v34; // edx
  _BOOL4 v35; // r15d
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  int v38; // eax
  int32_t result; // eax
  const data::ActivityIslandPartyOverallExcelConfig *overall_config; // [rsp+20h] [rbp-340h]
  const std::set<unsigned int> *series_id_set_ptr; // [rsp+28h] [rbp-338h]
  data::ActivityIslandPartyStageExcelConfigMap *__for_range; // [rsp+30h] [rbp-330h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false>::reference v44; // [rsp+38h] [rbp-328h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig> >::type *config; // [rsp+48h] [rbp-318h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-310h]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference score_id; // [rsp+58h] [rbp-308h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+60h] [rbp-300h]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference card_id; // [rsp+68h] [rbp-2F8h]
  char v50[752]; // [rsp+70h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 8 15 __for_begin:124 64 8 13 __for_end:124 96 8 15 __for_begin:140 128 8 13 __for_end:140 "
                        "160 8 15 __for_begin:150 192 8 13 __for_end:150 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <"
                        "unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 48 13 score_set:139 624 48 12 card_set:149";
  *(_QWORD *)(v3 + 16) = ActivityIslandPartyExcelConfigMgr::checkIslandPartyStageConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -219021312;
  v5[536862739] = 62194;
  v5[536862741] = -202116109;
  overall_config = ActivityIslandPartyExcelConfigMgr::getOverallConfig(this);
  p_exhibition_config_mgr = &txt_config_mgr->exhibition_config_mgr;
  p_activity_id = &overall_config->activity_id;
  if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_activity_id);
  }
  activity_id = overall_config->activity_id;
  series_id_set_ptr = ExhibitionExcelConfigMgr::getSeriesIdSetByActivityId(p_exhibition_config_mgr, activity_id);
  if ( series_id_set_ptr )
  {
    __for_range = &this->activity_island_party_stage_excel_config_map;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 32, activity_id);
    *(std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, activity_id);
    *(std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::end(__for_range);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false> *)(v3 + 32),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false> *)(v3 + 64)) )
    {
      v44 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false> *const)(v3 + 32));
      std::get<0ul,unsigned int const,data::ActivityIslandPartyStageExcelConfig>(v44);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityIslandPartyStageExcelConfig>(v44);
      p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->gallery_id);
      }
      if ( data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, config->gallery_id) )
      {
        if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                series_id_set_ptr,
                &config->series_id) )
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
            "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
            "checkIslandPartyStageConfig",
            135);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  v17,
                  (const char (*)[27])"[ISLAND_PARTY] series_id: ");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->series_id);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])byte_1AA207E0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        else
        {
          v20 = ((v3 + 544) >> 3) + 2147450880;
          *(_DWORD *)v20 = 0;
          *(_WORD *)(v20 + 4) = 0;
          p_series_id = &txt_config_mgr->exhibition_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&config->series_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->series_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            p_series_id = (ExhibitionExcelConfigMgr *)&config->series_id;
            __asan_report_load4(&config->series_id);
          }
          series_id = config->series_id;
          if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) )
          {
            series_id = 48;
            p_series_id = (ExhibitionExcelConfigMgr *)(v3 + 544);
            __asan_report_store_n(v3 + 544, 48LL);
          }
          ExhibitionExcelConfigMgr::getScoreSetBySeriesId((std::set<unsigned int> *)(v3 + 544), p_series_id, series_id);
          __for_range_0 = &config->exhibition_score_id_list;
          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 96, p_series_id);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::begin(__for_range_0);
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 128, p_series_id);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::end(__for_range_0);
          while ( 1 )
          {
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128)) )
            {
              v26 = 1;
              goto LABEL_42;
            }
            score_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
            if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                    (std::set<unsigned int> *)(v3 + 544),
                    score_id) )
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
            "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
            "checkIslandPartyStageConfig",
            144);
          v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 416),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v24 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  v23,
                  (const char (*)[26])"[ISLAND_PARTY] score_id: ");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, score_id);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])byte_1AA207E0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v26 = 0;
LABEL_42:
          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
          if ( v26 == 1 )
          {
            v28 = ((v3 + 624) >> 3) + 2147450880;
            *(_DWORD *)v28 = 0;
            *(_WORD *)(v28 + 4) = 0;
            v29 = &txt_config_mgr->exhibition_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&config->series_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->series_id >> 3)
                                                                    + 0x7FFF8000) )
            {
              v29 = (ExhibitionExcelConfigMgr *)&config->series_id;
              __asan_report_load4(&config->series_id);
            }
            v30 = config->series_id;
            if ( *(char *)(((v3 + 624) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) )
            {
              v30 = 48;
              v29 = (ExhibitionExcelConfigMgr *)(v3 + 624);
              __asan_report_store_n(v3 + 624, 48LL);
            }
            ExhibitionExcelConfigMgr::getCardSetBySeriesId((std::set<unsigned int> *)(v3 + 624), v29, v30);
            __for_range_1 = &config->exhibition_card_id_list;
            *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 160, v29);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_1);
            *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 192, v29);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_1);
            while ( 1 )
            {
              if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
              {
                v34 = 1;
                goto LABEL_60;
              }
              card_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
              if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                      (std::set<unsigned int> *)(v3 + 624),
                      card_id) )
                break;
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
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
              "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
              "checkIslandPartyStageConfig",
              154);
            v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 480),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v32 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    v31,
                    (const char (*)[25])"[ISLAND_PARTY] card_id: ");
            v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, card_id);
            common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v33, (const char (*)[8])byte_1AA207E0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
            *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v34 = 0;
LABEL_60:
            *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
            v35 = v34 == 1;
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 624));
            v27 = v35;
          }
          else
          {
            v27 = 0;
          }
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 544));
          v16 = v27;
        }
      }
      else
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
          "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
          "checkIslandPartyStageConfig",
          129);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                v13,
                (const char (*)[28])"[ISLAND_PARTY] gallery_id: ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->gallery_id);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])byte_1AA207E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v16 = 0;
      }
      v36 = ((v3 + 544) >> 3) + 2147450880;
      *(_DWORD *)v36 = -117901064;
      *(_WORD *)(v36 + 4) = -1800;
      v37 = ((v3 + 624) >> 3) + 2147450880;
      *(_DWORD *)v37 = -117901064;
      *(_WORD *)(v37 + 4) = -1800;
      if ( !v16 )
      {
        v38 = 0;
        goto LABEL_66;
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false> *const)(v3 + 32));
    }
    v38 = 1;
LABEL_66:
    if ( v38 == 1 )
      v2 = 0;
  }
  else
  {
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
      "./src/txt_data_manual/ActivityIslandPartyExcelConfig.cpp",
      "checkIslandPartyStageConfig",
      121);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 224),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            v9,
            (const char (*)[29])"[ISLAND_PARTY] activity_id: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &overall_config->activity_id);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])byte_1AA207E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    v2 = -1;
  }
  result = v2;
  if ( v50 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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

// Line 163: range 0000000012C6F776-0000000012C6F937
const data::ActivityIslandPartyStageExcelConfig *__fastcall ActivityIslandPartyExcelConfigMgr::findConfigByGalleryId(
        const ActivityIslandPartyExcelConfigMgr *const this,
        __int64 gallery_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig> *p_gallery_id_config_map; // rdx
  std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig> *v6; // rdx
  bool v7; // al
  const data::ActivityIslandPartyStageExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gallery_id:162 64 8 8 iter:164 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityIslandPartyExcelConfigMgr::findConfigByGalleryId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gallery_id;
  p_gallery_id_config_map = &this->gallery_id_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gallery_id);
  *(std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::find(p_gallery_id_config_map, (const std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->gallery_id_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 176: range 0000000012C6F938-0000000012C6FB1F
const data::ActivityIslandPartyOverallExcelConfig *__cdecl ActivityIslandPartyExcelConfigMgr::getOverallConfig(
        const ActivityIslandPartyExcelConfigMgr *const this)
{
  const data::ActivityIslandPartyOverallExcelConfig *v1; // rsi
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyOverallExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityIslandPartyOverallExcelConfigMap *p_activity_island_party_overall_excel_config_map; // rdx
  data::ActivityIslandPartyOverallExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityIslandPartyOverallExcelConfig *result; // rax
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyOverallExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyOverallExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyOverallExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyOverallExcelConfig>,false>::__node_type *)"2 32 8 8 iter:178 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyOverallExcelConfig>,false>::__node_type *)ActivityIslandPartyExcelConfigMgr::getOverallConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( !(_BYTE)`guard variable for'ActivityIslandPartyExcelConfigMgr::getOverallConfig(void)::dummy
    && __cxa_guard_acquire(&`guard variable for'ActivityIslandPartyExcelConfigMgr::getOverallConfig(void)::dummy) )
  {
    data::ActivityIslandPartyOverallExcelConfig::ActivityIslandPartyOverallExcelConfig((data::ActivityIslandPartyOverallExcelConfig *const)&ActivityIslandPartyExcelConfigMgr::getOverallConfig(void)const::dummy);
    __cxa_guard_release(&`guard variable for'ActivityIslandPartyExcelConfigMgr::getOverallConfig(void)::dummy);
    v1 = &ActivityIslandPartyExcelConfigMgr::getOverallConfig(void)const::dummy;
    __cxa_atexit(
      (void (__fastcall *)(void *))data::ActivityIslandPartyOverallExcelConfig::~ActivityIslandPartyOverallExcelConfig,
      (void *)&ActivityIslandPartyExcelConfigMgr::getOverallConfig(void)const::dummy,
      &_dso_handle);
  }
  p_activity_island_party_overall_excel_config_map = &this->activity_island_party_overall_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ActivityIslandPartyOverallExcelConfig>::begin(p_activity_island_party_overall_excel_config_map)._M_cur;
  v6 = &this->activity_island_party_overall_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ActivityIslandPartyOverallExcelConfig>::end(v6)._M_cur;
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityIslandPartyOverallExcelConfig>,false>(
         v2 + 4,
         v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &ActivityIslandPartyExcelConfigMgr::getOverallConfig(void)const::dummy;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyOverallExcelConfig>,false,false>::operator->(v2 + 4)->second;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyOverallExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 187: range 0000000012C6FBB8-0000000012C6FDBB
// local variable allocation has failed, the output may be wrong!
uint32_t __cdecl ActivityIslandPartyExcelConfigMgr::findStageIdByDraftId(
        const ActivityIslandPartyExcelConfigMgr *const this,
        uint32_t draft_id)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false>::__node_type *M_cur; // r15
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false>::__node_type *v6; // rcx
  data::ActivityIslandPartyStageExcelConfigMap *p_activity_island_party_stage_excel_config_map; // rdx
  bool v8; // al
  uint32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false>::pointer v10; // rax
  char v11[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false>::__node_type *)"2 32 8 8 iter:189 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false>::__node_type *)ActivityIslandPartyExcelConfigMgr::findStageIdByDraftId;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  M_cur = std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::end(&this->activity_island_party_stage_excel_config_map)._M_cur;
  v6 = std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::begin(&this->activity_island_party_stage_excel_config_map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], *(_QWORD *)&draft_id);
  v2[4]._M_cur = std::find_if<std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false>,ActivityIslandPartyExcelConfigMgr::findStageIdByDraftId(unsigned int)::{lambda(std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig> const&)#1}>(
                   (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false>)v6,
                   (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false>)M_cur,
                   (ActivityIslandPartyExcelConfigMgr::findStageIdByDraftId::<lambda(const std::pair<unsigned int const, data::ActivityIslandPartyStageExcelConfig>&)>)draft_id)._M_cur;
  p_activity_island_party_stage_excel_config_map = &this->activity_island_party_stage_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], M_cur);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::end(p_activity_island_party_stage_excel_config_map)._M_cur;
  v8 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false>(
         v2 + 4,
         v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false>::operator->(v2 + 4);
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v10);
    }
    result = v10->first;
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 189: range 0000000012C6FB20-0000000012C6FBB6
bool __cdecl ActivityIslandPartyExcelConfigMgr::findStageIdByDraftId(unsigned int)const::{lambda(std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig> const&)#1}::operator()(
        const ActivityIslandPartyExcelConfigMgr::findStageIdByDraftId::<lambda(const std::pair<unsigned int const, data::ActivityIslandPartyStageExcelConfig>&)> *const __closure,
        const std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig> *c)
{
  uint32_t draft_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&c->second.draft_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)c + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&c->second.draft_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&c->second.draft_id);
  }
  draft_id = c->second.draft_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return draft_id == __closure->__draft_id;
};

// Line 198: range 0000000012C6FDBC-0000000012C700AE
std::vector<unsigned int> *__fastcall ActivityIslandPartyExcelConfigMgr::findScoreVecByStageId(
        std::vector<unsigned int> *retstr,
        const ActivityIslandPartyExcelConfigMgr *const this,
        uint32_t stage_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_stage_id_score_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::pointer v9; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::pointer v11; // rax
  std::set<unsigned int>::iterator v12; // rax
  char v15[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 9 <unknown> 48 4 12 stage_id:197 64 8 8 iter:199 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityIslandPartyExcelConfigMgr::findScoreVecByStageId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = stage_id;
  p_stage_id_score_map = &this->stage_id_score_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_stage_id_score_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->stage_id_score_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<unsigned int>::vector(retstr);
  }
  else
  {
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
    std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 32));
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64));
    M_node = std::set<unsigned int>::end(&v9->second)._M_node;
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64));
    v12._M_node = std::set<unsigned int>::begin(&v11->second)._M_node;
    std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
      retstr,
      v12,
      (std::_Rb_tree_const_iterator<unsigned int>)M_node,
      (const std::vector<unsigned int>::allocator_type *)(v3 + 32));
    std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 32));
  }
  if ( v15 == (char *)v3 )
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
  return retstr;
};

// Line 208: range 0000000012C700B0-0000000012C703A2
std::vector<unsigned int> *__fastcall ActivityIslandPartyExcelConfigMgr::findCardVecByStageId(
        std::vector<unsigned int> *retstr,
        const ActivityIslandPartyExcelConfigMgr *const this,
        uint32_t stage_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_stage_id_card_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::pointer v9; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::pointer v11; // rax
  std::set<unsigned int>::iterator v12; // rax
  char v15[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 9 <unknown> 48 4 12 stage_id:207 64 8 8 iter:209 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityIslandPartyExcelConfigMgr::findCardVecByStageId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = stage_id;
  p_stage_id_card_map = &this->stage_id_card_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_stage_id_card_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->stage_id_card_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<unsigned int>::vector(retstr);
  }
  else
  {
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
    std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 32));
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64));
    M_node = std::set<unsigned int>::end(&v9->second)._M_node;
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64));
    v12._M_node = std::set<unsigned int>::begin(&v11->second)._M_node;
    std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
      retstr,
      v12,
      (std::_Rb_tree_const_iterator<unsigned int>)M_node,
      (const std::vector<unsigned int>::allocator_type *)(v3 + 32));
    std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 32));
  }
  if ( v15 == (char *)v3 )
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
  return retstr;
};
