// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/BoredExcelConfig.cpp

// Line 20: range 0000000013A424B8-0000000013A42E54
int32_t __cdecl BoredExcelConfigMgr::rewriteConfig(BoredExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int v7; // eax
  char *v8; // rsi
  uint32_t total_weight; // ecx
  common::milog::MiLogStream *v10; // rax
  std::vector<unsigned int> *p_affix_vec; // rdx
  char *v12; // rsi
  unsigned int *M_current; // r15
  unsigned int *v14; // rcx
  data::BoredActionPriorityExcelConfigVec *__for_range; // [rsp+20h] [rbp-220h]
  data::BoredMonsterPoolConfigMap *__for_range_0; // [rsp+28h] [rbp-218h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BoredMonsterPoolConfig>,false,false>::reference __in; // [rsp+30h] [rbp-210h]
  std::tuple_element<1,std::pair<unsigned int const,data::BoredMonsterPoolConfig> >::type *monster_config; // [rsp+40h] [rbp-200h]
  const data::BoredActionPriorityExcelConfig *action_config; // [rsp+48h] [rbp-1F8h]
  char v20[496]; // [rsp+50h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 4 9 <unknown> 64 8 14 __for_begin:28 96 8 12 __for_end:28 128 8 14 __for_begin:39 160 8 12"
                        " __for_end:39 192 8 9 <unknown> 224 8 9 <unknown> 256 8 9 <unknown> 288 8 9 <unknown> 320 32 9 <"
                        "unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BoredExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  if ( BoredExcelConfigMgr::rewriteBoredEventExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/BoredExcelConfig.cpp",
      "rewriteConfig",
      23);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v5,
      (const char (*)[36])"rewriteBoredEventExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    result = -1;
  }
  else
  {
    v7 = *(unsigned __int8 *)(((unsigned __int64)&this->total_weight_ >> 3) + 0x7FFF8000);
    if ( (_BYTE)v7 != 0 && (char)v7 <= 3 )
      __asan_report_store4(&this->total_weight_, txt_config_mgr);
    this->total_weight_ = 0;
    __for_range = &this->bored_action_priority_excel_config_vec;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, txt_config_mgr);
    *(std::vector<data::BoredActionPriorityExcelConfig>::iterator *)(v2 + 64) = std::vector<data::BoredActionPriorityExcelConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, txt_config_mgr);
    *(std::vector<data::BoredActionPriorityExcelConfig>::iterator *)(v2 + 96) = std::vector<data::BoredActionPriorityExcelConfig>::end(__for_range);
    while ( 1 )
    {
      v8 = (char *)(v2 + 96);
      if ( !__gnu_cxx::operator!=<data::BoredActionPriorityExcelConfig *,std::vector<data::BoredActionPriorityExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<data::BoredActionPriorityExcelConfig*,std::vector<data::BoredActionPriorityExcelConfig> > *)(v2 + 64),
              (const __gnu_cxx::__normal_iterator<data::BoredActionPriorityExcelConfig*,std::vector<data::BoredActionPriorityExcelConfig> > *)(v2 + 96)) )
        break;
      action_config = __gnu_cxx::__normal_iterator<data::BoredActionPriorityExcelConfig *,std::vector<data::BoredActionPriorityExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::BoredActionPriorityExcelConfig*,std::vector<data::BoredActionPriorityExcelConfig> > *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->total_weight_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->total_weight_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->total_weight_);
      }
      total_weight = this->total_weight_;
      if ( *(_BYTE *)(((unsigned __int64)&action_config->weight >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)action_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action_config->weight >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&action_config->weight);
      }
      this->total_weight_ = total_weight + action_config->weight;
      __gnu_cxx::__normal_iterator<data::BoredActionPriorityExcelConfig *,std::vector<data::BoredActionPriorityExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::BoredActionPriorityExcelConfig*,std::vector<data::BoredActionPriorityExcelConfig> > *const)(v2 + 64));
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&this->total_weight_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->total_weight_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->total_weight_);
    }
    if ( this->total_weight_ )
    {
      __for_range_0 = &this->bored_monster_pool_config_map;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, v8);
      *(std::unordered_map<unsigned int,data::BoredMonsterPoolConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::BoredMonsterPoolConfig>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v8);
      *(std::unordered_map<unsigned int,data::BoredMonsterPoolConfig>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,data::BoredMonsterPoolConfig>::end(__for_range_0);
      while ( std::__detail::operator!=<std::pair<unsigned int const,data::BoredMonsterPoolConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BoredMonsterPoolConfig>,false> *)(v2 + 128),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BoredMonsterPoolConfig>,false> *)(v2 + 160)) )
      {
        __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BoredMonsterPoolConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BoredMonsterPoolConfig>,false,false> *const)(v2 + 128));
        std::get<0ul,unsigned int const,data::BoredMonsterPoolConfig>(__in);
        monster_config = std::get<1ul,unsigned int const,data::BoredMonsterPoolConfig>(__in);
        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        p_affix_vec = &monster_config->affix_vec;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, v2 + 160);
        *(std::vector<unsigned int>::iterator *)(v2 + 224) = std::vector<unsigned int>::end(p_affix_vec);
        v12 = (char *)(v2 + 224);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 288),
          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 224));
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 48, v12);
        *(_DWORD *)(v2 + 48) = 0;
        M_current = std::vector<unsigned int>::end(&monster_config->affix_vec)._M_current;
        v14 = std::vector<unsigned int>::begin(&monster_config->affix_vec)._M_current;
        if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 192, v12);
        *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 192) = std::remove<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,int>(
                                                                                                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v14,
                                                                                                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                                  (const int *)(v2 + 48));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 256),
          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 192));
        if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v2 + 256);
        if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v2 + 288);
        std::vector<unsigned int>::erase(
          &monster_config->affix_vec,
          *(std::vector<unsigned int>::const_iterator *)(v2 + 256),
          *(std::vector<unsigned int>::const_iterator *)(v2 + 288));
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
        std::__detail::_Node_iterator<std::pair<unsigned int const,data::BoredMonsterPoolConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BoredMonsterPoolConfig>,false,false> *const)(v2 + 128));
      }
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/BoredExcelConfig.cpp",
        "rewriteConfig",
        34);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v10, (const char (*)[46])byte_1AC59660);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = -1;
    }
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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

// Line 50: range 0000000013A42E56-0000000013A4318B
int32_t __cdecl BoredExcelConfigMgr::rewriteBoredEventExcelConfig(
        BoredExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::BoredEventExcelConfig *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::BoredEventExcelConfig>,false,false>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::BoredEventExcelConfigVec *__for_range; // [rsp+10h] [rbp-E0h]
  const data::BoredEventExcelConfig *bored_event_config; // [rsp+18h] [rbp-D8h]
  char v15[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:51 64 8 12 __for_end:51 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BoredExcelConfigMgr::rewriteBoredEventExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->bored_event_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::vector<data::BoredEventExcelConfig>::iterator *)(v3 + 32) = std::vector<data::BoredEventExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::BoredEventExcelConfig>::iterator *)(v3 + 64) = std::vector<data::BoredEventExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<data::BoredEventExcelConfig *,std::vector<data::BoredEventExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::BoredEventExcelConfig*,std::vector<data::BoredEventExcelConfig> > *)(v3 + 32),
            (const __gnu_cxx::__normal_iterator<data::BoredEventExcelConfig*,std::vector<data::BoredEventExcelConfig> > *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    bored_event_config = __gnu_cxx::__normal_iterator<data::BoredEventExcelConfig *,std::vector<data::BoredEventExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::BoredEventExcelConfig*,std::vector<data::BoredEventExcelConfig> > *const)(v3 + 32));
    v7 = std::unordered_map<unsigned int,data::BoredEventExcelConfig>::emplace<data::BoardEventType const&,data::BoredEventExcelConfig const&>(
           &this->bored_event_config_map_,
           &bored_event_config->event_type,
           bored_event_config,
           (const data::BoardEventType *)&this->bored_event_config_map_,
           v6);
    if ( !v7.second )
      break;
    __gnu_cxx::__normal_iterator<data::BoredEventExcelConfig *,std::vector<data::BoredEventExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::BoredEventExcelConfig*,std::vector<data::BoredEventExcelConfig> > *const)(v3 + 32));
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
    "./src/txt_data_manual/BoredExcelConfig.cpp",
    "rewriteBoredEventExcelConfig",
    55);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])"BoredEventType ");
  v10 = common::milog::MiLogStream::operator<<<data::BoardEventType,(data::BoardEventType*)0>(
          v9,
          &bored_event_config->event_type);
  common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])byte_1AC59780);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_16:
  if ( v11 == 1 )
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

// Line 63: range 0000000013A4318C-0000000013A43601
int32_t __cdecl BoredExcelConfigMgr::checkConfig(BoredExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)BoredExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( BoredExcelConfigMgr::checkBoredEventExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/BoredExcelConfig.cpp",
      "checkConfig",
      66);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v5,
      (const char (*)[29])"checkBoredEventConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( BoredExcelConfigMgr::checkBoredMonsterExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/BoredExcelConfig.cpp",
      "checkConfig",
      71);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v7,
      (const char (*)[36])"checkBoredMonsterExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( BoredExcelConfigMgr::checkBoredMonsterPoolConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/BoredExcelConfig.cpp",
      "checkConfig",
      76);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v8,
      (const char (*)[35])"checkBoredMonsterPoolConfig failed");
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

// Line 83: range 0000000013A43602-0000000013A43F28
int32_t __cdecl BoredExcelConfigMgr::checkBoredEventExcelConfig(
        BoredExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t *p_add_bored; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  int32_t add_bored; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  signed int v15; // edx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,data::BoredEventExcelConfig> *__for_range; // [rsp+10h] [rbp-1B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BoredEventExcelConfig>,false,false>::reference v24; // [rsp+18h] [rbp-1A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::BoredEventExcelConfig> >::type *event_type; // [rsp+20h] [rbp-1A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BoredEventExcelConfig> >::type *event_config; // [rsp+28h] [rbp-198h]
  char v27[400]; // [rsp+30h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 14 __for_begin:84 64 8 12 __for_end:84 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unk"
                        "nown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BoredExcelConfigMgr::checkBoredEventExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  __for_range = &this->bored_event_config_map_;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BoredEventExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BoredEventExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BoredEventExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BoredEventExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BoredEventExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BoredEventExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BoredEventExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_43;
    }
    v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BoredEventExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BoredEventExcelConfig>,false,false> *const)(v3 + 32));
    event_type = std::get<0ul,unsigned int const,data::BoredEventExcelConfig>(v24);
    event_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BoredEventExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BoredEventExcelConfig>(v24);
    p_add_bored = &event_config->add_bored;
    if ( *(_BYTE *)(((unsigned __int64)p_add_bored >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_add_bored & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_add_bored >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_add_bored);
    }
    if ( !event_config->add_bored )
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
        "./src/txt_data_manual/BoredExcelConfig.cpp",
        "checkBoredEventExcelConfig",
        88);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])"event_type: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, event_type);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v9, (const char (*)[21])byte_1AC59A00);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v10 = 0;
      goto LABEL_43;
    }
    if ( *(_BYTE *)(((unsigned __int64)&event_config->add_bored >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config->add_bored >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&event_config->add_bored);
    }
    add_bored = event_config->add_bored;
    if ( *(_BYTE *)(((unsigned __int64)&event_config->max_bored >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event_config->max_bored >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event_config->max_bored);
    }
    if ( add_bored * event_config->max_bored <= 0 )
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
        "./src/txt_data_manual/BoredExcelConfig.cpp",
        "checkBoredEventExcelConfig",
        93);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])"event_type: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, event_type);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v14, (const char (*)[35])byte_1AC59A40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v10 = 0;
      goto LABEL_43;
    }
    if ( *(_BYTE *)(((unsigned __int64)&event_config->add_bored >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config->add_bored >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&event_config->add_bored);
    }
    v15 = abs32(event_config->add_bored);
    if ( *(_BYTE *)(((unsigned __int64)&event_config->max_bored >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event_config->max_bored >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event_config->max_bored);
    }
    if ( v15 > (int)abs32(event_config->max_bored) )
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
        "./src/txt_data_manual/BoredExcelConfig.cpp",
        "checkBoredEventExcelConfig",
        98);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])"event_type: ");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, event_type);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v18, (const char (*)[23])" add_bored > max_bored");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      v2 = -1;
      v10 = 0;
      goto LABEL_43;
    }
    if ( *(_BYTE *)(((unsigned __int64)event_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)event_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)event_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(event_type);
    }
    if ( *event_type == 101 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event_config->param >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config->param >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&event_config->param);
      }
      if ( !event_config->param )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BoredEventExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BoredEventExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/BoredExcelConfig.cpp",
    "checkBoredEventExcelConfig",
    103);
  v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 288),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])"event_type: ");
  v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, event_type);
  common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v21, (const char (*)[17])byte_1AC59AE0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
  v2 = -1;
  v10 = 0;
LABEL_43:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v27 == (char *)v3 )
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

// Line 111: range 0000000013A43F2A-0000000013A447F1
int32_t __cdecl BoredExcelConfigMgr::checkBoredMonsterExcelConfig(
        BoredExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  BoredExcelConfigMgr *v11; // rcx
  char v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // edx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int32_t result; // eax
  uint32_t last_level; // [rsp+18h] [rbp-1B8h]
  uint32_t total_weight; // [rsp+1Ch] [rbp-1B4h]
  data::BoredCreateMonsterExcelConfigVec *__for_range; // [rsp+20h] [rbp-1B0h]
  const data::BoredCreateMonsterExcelConfig *config; // [rsp+28h] [rbp-1A8h]
  const std::vector<data::BoredMonsterConfig> *__for_range_0; // [rsp+30h] [rbp-1A0h]
  const data::BoredMonsterConfig *monster_config; // [rsp+38h] [rbp-198h]
  char v27[400]; // [rsp+40h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 15 __for_begin:113 64 8 13 __for_end:113 96 8 15 __for_begin:124 128 8 13 __for_end:124 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BoredExcelConfigMgr::checkBoredMonsterExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  last_level = 0;
  __for_range = &this->bored_create_monster_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::vector<data::BoredCreateMonsterExcelConfig>::iterator *)(v3 + 32) = std::vector<data::BoredCreateMonsterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::BoredCreateMonsterExcelConfig>::iterator *)(v3 + 64) = std::vector<data::BoredCreateMonsterExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !__gnu_cxx::operator!=<data::BoredCreateMonsterExcelConfig *,std::vector<data::BoredCreateMonsterExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::BoredCreateMonsterExcelConfig*,std::vector<data::BoredCreateMonsterExcelConfig> > *)(v3 + 32),
            (const __gnu_cxx::__normal_iterator<data::BoredCreateMonsterExcelConfig*,std::vector<data::BoredCreateMonsterExcelConfig> > *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_46;
    }
    config = __gnu_cxx::__normal_iterator<data::BoredCreateMonsterExcelConfig *,std::vector<data::BoredCreateMonsterExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::BoredCreateMonsterExcelConfig*,std::vector<data::BoredCreateMonsterExcelConfig> > *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&config->player_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->player_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->player_level);
    }
    if ( last_level >= config->player_level )
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
        "./src/txt_data_manual/BoredExcelConfig.cpp",
        "checkBoredMonsterExcelConfig",
        118);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])byte_1AC59C00);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->player_level);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v9, (const char (*)[23])byte_1AC59C40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v10 = 0;
      goto LABEL_46;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->player_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->player_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->player_level);
    }
    last_level = config->player_level;
    total_weight = 0;
    __for_range_0 = &config->monster_config_vec;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::vector<data::BoredMonsterConfig>::const_iterator *)(v3 + 96) = std::vector<data::BoredMonsterConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<data::BoredMonsterConfig>::const_iterator *)(v3 + 128) = std::vector<data::BoredMonsterConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::BoredMonsterConfig const*,std::vector<data::BoredMonsterConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::BoredMonsterConfig*,std::vector<data::BoredMonsterConfig> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<const data::BoredMonsterConfig*,std::vector<data::BoredMonsterConfig> > *)(v3 + 128)) )
      {
        v16 = 1;
        goto LABEL_38;
      }
      monster_config = __gnu_cxx::__normal_iterator<data::BoredMonsterConfig const*,std::vector<data::BoredMonsterConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::BoredMonsterConfig*,std::vector<data::BoredMonsterConfig> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&monster_config->weight >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&monster_config->weight >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&monster_config->weight);
      }
      total_weight += monster_config->weight;
      if ( !monster_config->weight )
        goto LABEL_31;
      v11 = this;
      if ( *(_BYTE *)(((unsigned __int64)&monster_config->id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)monster_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config->id >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&monster_config->id);
      }
      if ( data::BoredExcelConfigMgrBase::findBoredMonsterPoolConfig(v11, monster_config->id) )
LABEL_31:
        v12 = 0;
      else
        v12 = 1;
      if ( v12 )
        break;
      __gnu_cxx::__normal_iterator<data::BoredMonsterConfig const*,std::vector<data::BoredMonsterConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::BoredMonsterConfig*,std::vector<data::BoredMonsterConfig> > *const)(v3 + 96));
    }
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
      "./src/txt_data_manual/BoredExcelConfig.cpp",
      "checkBoredMonsterExcelConfig",
      129);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 224),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v14 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v13, (const char (*)[20])byte_1AC59C80);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &monster_config->id);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])byte_1AC59CC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v16 = 0;
LABEL_38:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v16 != 1 )
    {
      v10 = 0;
      goto LABEL_46;
    }
    if ( !total_weight )
      break;
    __gnu_cxx::__normal_iterator<data::BoredCreateMonsterExcelConfig *,std::vector<data::BoredCreateMonsterExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::BoredCreateMonsterExcelConfig*,std::vector<data::BoredCreateMonsterExcelConfig> > *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/BoredExcelConfig.cpp",
    "checkBoredMonsterExcelConfig",
    135);
  v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 288),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v17, (const char (*)[15])byte_1AC59C00);
  v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->player_level);
  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v19, (const char (*)[33])byte_1AC59D00);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
  v2 = -1;
  v10 = 0;
LABEL_46:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 143: range 0000000013A447F2-0000000013A451E2
int32_t __cdecl BoredExcelConfigMgr::checkBoredMonsterPoolConfig(
        BoredExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  uint32_t *p_monster_id; // rax
  __int64 monster_id; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  DropExcelConfigMgr *p_drop_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  char *v19; // rsi
  unsigned int *v20; // rax
  int *v21; // rdx
  int v22; // ecx
  char v23; // al
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // edx
  int32_t result; // eax
  data::BoredMonsterPoolConfigMap *__for_range; // [rsp+10h] [rbp-1E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BoredMonsterPoolConfig>,false,false>::reference v34; // [rsp+18h] [rbp-1D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BoredMonsterPoolConfig> >::type *monster_config; // [rsp+28h] [rbp-1C8h]
  const data::MonsterDropExcelConfig *monster_drop_config_ptr; // [rsp+30h] [rbp-1C0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1B8h]
  char v38[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 12 affix_id:160 64 8 15 __for_begin:144 96 8 13 __for_end:144 128 8 15 __for_begin:160 16"
                        "0 8 13 __for_end:160 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BoredExcelConfigMgr::checkBoredMonsterPoolConfig;
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
  __for_range = &this->bored_monster_pool_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BoredMonsterPoolConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BoredMonsterPoolConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BoredMonsterPoolConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::BoredMonsterPoolConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BoredMonsterPoolConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BoredMonsterPoolConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BoredMonsterPoolConfig>,false> *)(v3 + 96)) )
    {
      v12 = 1;
      goto LABEL_50;
    }
    v34 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BoredMonsterPoolConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BoredMonsterPoolConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::BoredMonsterPoolConfig>(v34);
    monster_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BoredMonsterPoolConfig> >::type *)std::get<1ul,unsigned int const,data::BoredMonsterPoolConfig>(v34);
    p_monster_config_mgr = &txt_config_mgr->monster_config_mgr;
    p_monster_id = &monster_config->monster_id;
    if ( *(_BYTE *)(((unsigned __int64)p_monster_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_monster_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_monster_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_monster_id);
    }
    monster_id = monster_config->monster_id;
    if ( !data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(p_monster_config_mgr, monster_id) )
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
        "./src/txt_data_manual/BoredExcelConfig.cpp",
        "checkBoredMonsterPoolConfig",
        148);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])byte_1AC59E60);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &monster_config->monster_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])byte_1AC59EA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      v2 = -1;
      v12 = 0;
      goto LABEL_50;
    }
    if ( (unsigned __int8)std::string::empty() != 1 )
    {
      p_drop_config_mgr = &txt_config_mgr->drop_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&monster_config->level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&monster_config->level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&monster_config->level);
      }
      monster_drop_config_ptr = DropExcelConfigMgr::findMonsterDropConfig(
                                  p_drop_config_mgr,
                                  monster_config->level,
                                  &monster_config->drop_tag);
      if ( !monster_drop_config_ptr )
        break;
      monster_id = (((_BYTE)monster_drop_config_ptr + 52) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&monster_drop_config_ptr->drop_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)monster_drop_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_drop_config_ptr->drop_count >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&monster_drop_config_ptr->drop_count);
      }
      if ( monster_drop_config_ptr->drop_count != 1 )
        break;
    }
    __for_range_0 = &monster_config->affix_vec;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, monster_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, monster_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v19 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v30 = 1;
        goto LABEL_46;
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
      if ( *(_DWORD *)(v3 + 48)
        && !data::MonsterExcelConfigMgrBase::findMonsterAffixExcelConfig(
              &txt_config_mgr->monster_config_mgr,
              *(unsigned int *)(v3 + 48)) )
      {
        break;
      }
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
      "./src/txt_data_manual/BoredExcelConfig.cpp",
      "checkBoredMonsterPoolConfig",
      164);
    v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v25, (const char (*)[13])"mosnter_id: ");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &monster_config->monster_id);
    v28 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v27, (const char (*)[19])byte_1AC59FA0);
    v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v29, (const char (*)[7])byte_1AC59EA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v30 = 0;
LABEL_46:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v30 != 1 )
    {
      v12 = 0;
      goto LABEL_50;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BoredMonsterPoolConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BoredMonsterPoolConfig>,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/BoredExcelConfig.cpp",
    "checkBoredMonsterPoolConfig",
    156);
  v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 256),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])byte_1AC59E60);
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &monster_config->monster_id);
  v17 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v16, (const char (*)[23])byte_1AC59EE0);
  v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &monster_config->drop_tag);
  common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v18, (const char (*)[26])byte_1AC59F20);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  v2 = -1;
  v12 = 0;
LABEL_50:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v38 == (char *)v3 )
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

// Line 173: range 0000000013A451E4-0000000013A453A5
const data::BoredEventExcelConfig *__fastcall BoredExcelConfigMgr::findBoredEventExcelConfig(
        const BoredExcelConfigMgr *const this,
        __int64 event_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::BoredEventExcelConfig> *p_bored_event_config_map; // rdx
  std::unordered_map<unsigned int,data::BoredEventExcelConfig> *v6; // rdx
  bool v7; // al
  const data::BoredEventExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 event_type:172 64 8 8 iter:174 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BoredExcelConfigMgr::findBoredEventExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = event_type;
  p_bored_event_config_map = &this->bored_event_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, event_type);
  *(std::unordered_map<unsigned int,data::BoredEventExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BoredEventExcelConfig>::find(
                                                                                                 p_bored_event_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::BoredEventExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->bored_event_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::BoredEventExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::BoredEventExcelConfig>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,data::BoredEventExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BoredEventExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BoredEventExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BoredEventExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BoredEventExcelConfig>,false,false> *const)(v2 + 64))->second;
  else
    result = 0LL;
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

// Line 184: range 0000000013A453A6-0000000013A456AF
data::BoredActionType __cdecl BoredExcelConfigMgr::randomBoredActionType(const BoredExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::BoredActionType result; // eax
  int v6; // eax
  std::vector<data::BoredActionPriorityExcelConfig>::size_type v7; // r15
  data::BoredActionPriorityExcelConfigVec *p_bored_action_priority_excel_config_vec; // rcx
  std::vector<data::BoredActionPriorityExcelConfig>::const_reference v9; // rax
  char v10[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 selected:185 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BoredExcelConfigMgr::randomBoredActionType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 0;
  if ( common::tools::RandomUtils::weightSelectOne<data::BoredActionPriorityExcelConfig,unsigned int data::BoredActionPriorityExcelConfig::*>(
         &this->bored_action_priority_excel_config_vec,
         (uint32_t *)(v2 + 48),
         (unsigned int *)0xC,
         0) )
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
      "./src/txt_data_manual/BoredExcelConfig.cpp",
      "randomBoredActionType",
      188);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[24])"weightSelectOne failed!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = BORED_ACTION_NONE;
  }
  else
  {
    v6 = *(unsigned __int8 *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v6 != 0 && (char)v6 <= 3 )
      __asan_report_load4(v2 + 48);
    v7 = *(unsigned int *)(v2 + 48);
    if ( v7 >= std::vector<data::BoredActionPriorityExcelConfig>::size(&this->bored_action_priority_excel_config_vec) )
    {
      result = BORED_ACTION_NONE;
    }
    else
    {
      p_bored_action_priority_excel_config_vec = &this->bored_action_priority_excel_config_vec;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      v9 = std::vector<data::BoredActionPriorityExcelConfig>::operator[](
             p_bored_action_priority_excel_config_vec,
             *(unsigned int *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&v9->action_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->action_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v9->action_type);
      }
      result = v9->action_type;
    }
  }
  if ( v10 == (char *)v2 )
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

// Line 201: range 0000000013A456B0-0000000013A45F2E
const data::BoredMonsterPoolConfig *__fastcall BoredExcelConfigMgr::randomBoredMonsterConfig(
        const BoredExcelConfigMgr *const this,
        __int64 player_level)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  const data::BoredMonsterPoolConfig *result; // rax
  std::vector<data::BoredMonsterConfig>::size_type v8; // r15
  const std::vector<data::BoredMonsterConfig> *p_monster_config_vec; // rcx
  std::vector<data::BoredMonsterConfig>::size_type v10; // rsi
  std::vector<data::BoredMonsterConfig>::const_reference v11; // rdx
  uint32_t *p_id; // rax
  uint32_t id; // ecx
  char v14; // al
  const BoredExcelConfigMgr *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  const data::BoredCreateMonsterExcelConfig *config_ptr; // [rsp+10h] [rbp-1B0h]
  data::BoredCreateMonsterExcelConfigVec *__for_range; // [rsp+18h] [rbp-1A8h]
  const data::BoredCreateMonsterExcelConfig *config; // [rsp+20h] [rbp-1A0h]
  const data::BoredMonsterPoolConfig *monster_pool_config_ptr; // [rsp+28h] [rbp-198h]
  char v22[400]; // [rsp+30h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 12 selected:219 64 4 19 monster_pool_id:226 80 4 16 player_level:200 96 8 15 __for_begin:"
                        "203 128 8 13 __for_end:203 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BoredExcelConfigMgr::randomBoredMonsterConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  *(_DWORD *)(v2 + 80) = player_level;
  config_ptr = 0LL;
  __for_range = &this->bored_create_monster_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, player_level);
  *(std::vector<data::BoredCreateMonsterExcelConfig>::const_iterator *)(v2 + 96) = std::vector<data::BoredCreateMonsterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, player_level);
  *(std::vector<data::BoredCreateMonsterExcelConfig>::const_iterator *)(v2 + 128) = std::vector<data::BoredCreateMonsterExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::BoredCreateMonsterExcelConfig const*,std::vector<data::BoredCreateMonsterExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::BoredCreateMonsterExcelConfig*,std::vector<data::BoredCreateMonsterExcelConfig> > *)(v2 + 96),
            (const __gnu_cxx::__normal_iterator<const data::BoredCreateMonsterExcelConfig*,std::vector<data::BoredCreateMonsterExcelConfig> > *)(v2 + 128)) )
  {
    config = __gnu_cxx::__normal_iterator<data::BoredCreateMonsterExcelConfig const*,std::vector<data::BoredCreateMonsterExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::BoredCreateMonsterExcelConfig*,std::vector<data::BoredCreateMonsterExcelConfig> > *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&config->player_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->player_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->player_level);
    }
    if ( config->player_level > *(_DWORD *)(v2 + 80) )
      break;
    config_ptr = config;
    __gnu_cxx::__normal_iterator<data::BoredCreateMonsterExcelConfig const*,std::vector<data::BoredCreateMonsterExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::BoredCreateMonsterExcelConfig*,std::vector<data::BoredCreateMonsterExcelConfig> > *const)(v2 + 96));
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( config_ptr )
  {
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, v2 + 128);
    *(_DWORD *)(v2 + 48) = 0;
    if ( common::tools::RandomUtils::weightSelectOne<data::BoredMonsterConfig,unsigned int data::BoredMonsterConfig::*>(
           &config_ptr->monster_config_vec,
           (uint32_t *)(v2 + 48),
           (unsigned int *)8,
           0) )
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/BoredExcelConfig.cpp",
        "randomBoredMonsterConfig",
        222);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        (common::milog::MiLogStream *const)(v2 + 224),
        (const char (*)[24])"weightSelectOne failed!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      result = 0LL;
    }
    else
    {
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, v2 + 48);
      *(_DWORD *)(v2 + 64) = 0;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      v8 = *(unsigned int *)(v2 + 48);
      if ( v8 < std::vector<data::BoredMonsterConfig>::size(&config_ptr->monster_config_vec) )
      {
        p_monster_config_vec = &config_ptr->monster_config_vec;
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 48);
        v10 = *(unsigned int *)(v2 + 48);
        v11 = std::vector<data::BoredMonsterConfig>::operator[](p_monster_config_vec, v10);
        p_id = &v11->id;
        if ( *(_BYTE *)(((unsigned __int64)p_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_id);
        }
        id = v11->id;
        v14 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
        if ( v14 != 0 && v14 <= 3 )
        {
          LOBYTE(v10) = v14 != 0;
          __asan_report_store4(v2 + 64, v10);
        }
        *(_DWORD *)(v2 + 64) = id;
      }
      v15 = this;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 64);
      monster_pool_config_ptr = data::BoredExcelConfigMgrBase::findBoredMonsterPoolConfig(
                                  v15,
                                  *(unsigned int *)(v2 + 64));
      if ( !monster_pool_config_ptr )
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
          3u,
          "./src/txt_data_manual/BoredExcelConfig.cpp",
          "randomBoredMonsterConfig",
          235);
        v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[28])"findBoredMonsterPoolConfig ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      }
      result = monster_pool_config_ptr;
    }
  }
  else
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
      3u,
      "./src/txt_data_manual/BoredExcelConfig.cpp",
      "randomBoredMonsterConfig",
      214);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[35])"findBoredCreateMonsterExcelConfig ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0LL;
  }
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};
