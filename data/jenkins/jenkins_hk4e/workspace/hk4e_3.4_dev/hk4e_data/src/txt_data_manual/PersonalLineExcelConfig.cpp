// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/PersonalLineExcelConfig.cpp

// Line 19: range 000000001462C4BA-000000001462D19A
int32_t __cdecl PersonalLineExcelConfigMgr::rewriteConfig(
        PersonalLineExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int *v6; // r8
  __int64 TimeByStr; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  __int64 start_quest_id; // rsi
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  char *v19; // rsi
  unsigned int *v20; // rax
  int *v21; // rdx
  int v22; // ecx
  char v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // edx
  int v27; // eax
  int32_t result; // eax
  data::PersonalLineExcelConfigMap *__for_range; // [rsp+18h] [rbp-268h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false,false>::reference v31; // [rsp+20h] [rbp-260h]
  std::tuple_element<0,std::pair<unsigned int const,data::PersonalLineExcelConfig> >::type *personal_line_id; // [rsp+28h] [rbp-258h]
  std::tuple_element<1,const std::pair<unsigned int const,data::PersonalLineExcelConfig> >::type *config; // [rsp+30h] [rbp-250h]
  std::vector<unsigned int> *rely_quest_id_vec; // [rsp+38h] [rbp-248h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-238h]
  char v36[560]; // [rsp+50h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 4 12 timestamp:22 48 4 15 pre_quest_id:52 64 8 14 __for_begin:20 96 8 12 __for_end:20 128 "
                        "8 14 __for_begin:52 160 8 12 __for_end:52 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknow"
                        "n> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = PersonalLineExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -202116109;
  __for_range = &this->personal_line_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PersonalLineExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::PersonalLineExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PersonalLineExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::PersonalLineExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false> *)(v3 + 96)) )
  {
    v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false,false> *const)(v3 + 64));
    personal_line_id = std::get<0ul,unsigned int const,data::PersonalLineExcelConfig>(v31);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::PersonalLineExcelConfig> >::type *)std::get<1ul,unsigned int const,data::PersonalLineExcelConfig>(v31);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32, v3 + 96);
    *(_DWORD *)(v3 + 32) = 0;
    if ( (unsigned __int8)std::string::empty() == 1 )
      goto LABEL_19;
    TimeByStr = (unsigned int)common::tools::TimeUtils::getTimeByStr(&config->start_time);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32, TimeByStr);
    *(_DWORD *)(v3 + 32) = TimeByStr;
    if ( *(_DWORD *)(v3 + 32) )
    {
LABEL_19:
      v11 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
              &this->personal_line_id_open_timestamp_map_,
              personal_line_id,
              (unsigned int *)(v3 + 32),
              (const unsigned int *)&this->personal_line_id_open_timestamp_map_,
              v6);
      if ( !v11.second )
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
          "./src/txt_data_manual/PersonalLineExcelConfig.cpp",
          "rewriteConfig",
          34);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v12, (const char (*)[20])byte_1ADC7860);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, personal_line_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v10 = 0;
      }
      else
      {
        rely_quest_id_vec = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                              &this->personal_line_rely_quest_id_map_,
                              personal_line_id);
        if ( !std::vector<unsigned int>::empty(rely_quest_id_vec) )
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
            "./src/txt_data_manual/PersonalLineExcelConfig.cpp",
            "rewriteConfig",
            41);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v14, (const char (*)[20])byte_1ADC7860);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, personal_line_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
          *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v10 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->start_quest_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->start_quest_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->start_quest_id);
          }
          if ( !config->start_quest_id )
            goto LABEL_52;
          start_quest_id = config->start_quest_id;
          if ( data::QuestExcelConfigMgrBase::findQuestExcelConfig(&txt_config_mgr->quest_config_mgr, start_quest_id) )
          {
            __for_range_0 = &config->pre_quest_id;
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 128, start_quest_id);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
            *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 160, start_quest_id);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
            while ( 1 )
            {
              v19 = (char *)(v3 + 160);
              if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
              {
                v26 = 1;
                goto LABEL_50;
              }
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
              v20 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
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
              if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(
                      &txt_config_mgr->quest_config_mgr,
                      *(unsigned int *)(v3 + 48)) )
                break;
              std::vector<unsigned int>::push_back(
                rely_quest_id_vec,
                (const std::vector<unsigned int>::value_type *)(v3 + 48));
              std::unordered_set<unsigned int>::insert(
                &this->personal_line_rely_quest_id_set_,
                (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
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
              "./src/txt_data_manual/PersonalLineExcelConfig.cpp",
              "rewriteConfig",
              56);
            v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 448),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v25 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    v24,
                    (const char (*)[43])byte_1ADC78E0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
            *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v26 = 0;
LABEL_50:
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
            if ( v26 != 1 )
            {
              v10 = 0;
              goto LABEL_53;
            }
LABEL_52:
            v10 = 1;
            goto LABEL_53;
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
            "./src/txt_data_manual/PersonalLineExcelConfig.cpp",
            "rewriteConfig",
            49);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v17, (const char (*)[26])byte_1ADC78A0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->start_quest_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
          *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v10 = 0;
        }
      }
    }
    else
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
        "./src/txt_data_manual/PersonalLineExcelConfig.cpp",
        "rewriteConfig",
        28);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v8, (const char (*)[24])byte_1ADC7820);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &config->start_time);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
LABEL_53:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v10 != 1 )
    {
      v27 = 0;
      goto LABEL_57;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false,false> *const)(v3 + 64));
  }
  v27 = 1;
LABEL_57:
  if ( v27 == 1 )
    v2 = 0;
  result = v2;
  if ( v36 == (char *)v3 )
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

// Line 69: range 000000001462D19C-000000001462D1C0
int32_t __cdecl PersonalLineExcelConfigMgr::checkConfig(
        PersonalLineExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return PersonalLineExcelConfigMgr::checkPersonalLineConfig(this, txt_config_mgr);
};

// Line 74: range 000000001462D1C2-000000001462D6F8
int32_t __cdecl PersonalLineExcelConfigMgr::checkPersonalLineConfig(
        const PersonalLineExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  uint32_t *p_chapter_id; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  data::PersonalLineExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,data::PersonalLineExcelConfig> >::type *config; // [rsp+28h] [rbp-118h]
  char v16[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 14 __for_begin:75 64 8 12 __for_end:75 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = PersonalLineExcelConfigMgr::checkPersonalLineConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->personal_line_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PersonalLineExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::PersonalLineExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PersonalLineExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::PersonalLineExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_28;
    }
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::PersonalLineExcelConfig>(v14);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::PersonalLineExcelConfig> >::type *)std::get<1ul,unsigned int const,data::PersonalLineExcelConfig>(v14);
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    p_chapter_id = &config->chapter_id;
    if ( *(_BYTE *)(((unsigned __int64)p_chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_chapter_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_chapter_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_chapter_id);
    }
    if ( !data::QuestExcelConfigMgrBase::findChapterExcelConfig(p_quest_config_mgr, config->chapter_id) )
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
        1u,
        "./src/txt_data_manual/PersonalLineExcelConfig.cpp",
        "checkPersonalLineConfig",
        79);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[21])byte_1ADC79E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->chapter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v9 = 0;
      goto LABEL_28;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->start_quest_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->start_quest_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->start_quest_id);
    }
    if ( config->start_quest_id
      && !data::QuestExcelConfigMgrBase::findQuestExcelConfig(&txt_config_mgr->quest_config_mgr, config->start_quest_id) )
    {
      break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PersonalLineExcelConfig>,false,false> *const)(v3 + 32));
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
    1u,
    "./src/txt_data_manual/PersonalLineExcelConfig.cpp",
    "checkPersonalLineConfig",
    84);
  v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[27])byte_1ADC7A20);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->start_quest_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v9 = 0;
LABEL_28:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 92: range 000000001462D6FA-000000001462D8FE
bool __fastcall PersonalLineExcelConfigMgr::isPersonalLineOpen(
        const PersonalLineExcelConfigMgr *const this,
        __int64 personal_line_id,
        uint32_t timestamp)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,unsigned int> *p_personal_line_id_open_timestamp_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v7; // rdx
  bool v8; // al
  bool result; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v10; // rdx
  unsigned int *p_second; // rax
  char v13[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 19 personal_line_id:91 64 8 7 iter:93 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = PersonalLineExcelConfigMgr::isPersonalLineOpen;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = personal_line_id;
  p_personal_line_id_open_timestamp_map = &this->personal_line_id_open_timestamp_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, personal_line_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_personal_line_id_open_timestamp_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  v7 = &this->personal_line_id_open_timestamp_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = timestamp >= v10->second;
  }
  if ( v13 == (char *)v3 )
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

// Line 103: range 000000001462D900-000000001462DB8E
std::vector<unsigned int> *__cdecl PersonalLineExcelConfigMgr::getAllOpenPersonalLineVec(
        std::vector<unsigned int> *retstr,
        const PersonalLineExcelConfigMgr *const this,
        uint32_t timestamp)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rax
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v10; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *personal_line_id; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *open_timestamp; // [rsp+38h] [rbp-88h]
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)"2 32 8 15 __for_begin:105 64 8 13 __for_end:105";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)PersonalLineExcelConfigMgr::getAllOpenPersonalLineVec;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  std::vector<unsigned int>::vector(retstr);
  __for_range = &this->personal_line_id_open_timestamp_map_;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], this);
  v3[4]._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], this);
  v3[8]._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(v3 + 4, v3 + 8) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(v3 + 4);
    personal_line_id = std::get<0ul,unsigned int const,unsigned int>(v10);
    v6 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v10);
    open_timestamp = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    if ( timestamp >= *open_timestamp )
      std::vector<unsigned int>::push_back(retstr, personal_line_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(v3 + 4);
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 117: range 000000001462DB90-000000001462DDC2
std::vector<unsigned int> *__fastcall PersonalLineExcelConfigMgr::getPersonlineRelyQuestVec(
        std::vector<unsigned int> *retstr,
        const PersonalLineExcelConfigMgr *const this,
        uint32_t personal_line_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_personal_line_rely_quest_id_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v9; // rax
  const unsigned int *M_current; // r14
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v11; // rax
  std::vector<unsigned int>::const_iterator v12; // rax
  char v15[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 20 personal_line_id:116 64 8 8 iter:119 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = PersonalLineExcelConfigMgr::getPersonlineRelyQuestVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = personal_line_id;
  std::vector<unsigned int>::vector(retstr);
  p_personal_line_rely_quest_id_map = &this->personal_line_rely_quest_id_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_personal_line_rely_quest_id_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->personal_line_rely_quest_id_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v7);
  v8 = std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
    M_current = std::vector<unsigned int>::end(&v9->second)._M_current;
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
    v12._M_current = std::vector<unsigned int>::begin(&v11->second)._M_current;
    std::vector<unsigned int>::assign<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
      retstr,
      v12,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
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
