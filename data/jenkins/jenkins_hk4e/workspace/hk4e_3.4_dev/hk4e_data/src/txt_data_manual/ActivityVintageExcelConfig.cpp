// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityVintageExcelConfig.cpp

// Line 20: range 0000000012E42E4A-0000000012E433F4
int32_t __cdecl ActivityVintageExcelConfigMgr::rewriteConfig(
        ActivityVintageExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  char v10[320]; // [rsp+10h] [rbp-140h] BYREF

  v2 = (common::milog::MiLogStream *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"4 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityVintageExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( ActivityVintageExcelConfigMgr::rewriteVintageHuntingData(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
      "rewriteConfig",
      23);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v5,
      (const char (*)[34])"rewriteVintageHuntingData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityVintageExcelConfigMgr::rewriteVintageHuntingMonsterData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
      "rewriteConfig",
      29);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v7,
      (const char (*)[41])"rewriteVintageHuntingMonsterData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityVintageExcelConfigMgr::rewriteVintagePresentData(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
      "rewriteConfig",
      35);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v8,
      (const char (*)[34])"rewriteVintagePresentData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityVintageExcelConfigMgr::rewriteVintageCampData(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
      "rewriteConfig",
      41);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v9,
      (const char (*)[31])"rewriteVintageCampData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v10 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 49: range 0000000012E433F6-0000000012E43998
int32_t __cdecl ActivityVintageExcelConfigMgr::rewriteVintageHuntingData(
        ActivityVintageExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  __int64 v12; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v13; // rax
  uint32_t *v14; // rdx
  uint32_t v15; // ecx
  char v16; // al
  __int64 v17; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v18; // rax
  uint32_t *v19; // rdx
  uint32_t v20; // ecx
  char v21; // dl
  __int64 v22; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v23; // rax
  uint32_t *v24; // rdx
  uint32_t v25; // ecx
  char v26; // al
  int32_t result; // eax
  data::ActivityVintageHuntingExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false,false>::reference v29; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig> >::type *hunting_stage_id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig> >::type *hunting_config; // [rsp+28h] [rbp-D8h]
  char v32[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:50 64 8 12 __for_end:50 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityVintageExcelConfigMgr::rewriteVintageHuntingData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->activity_vintage_hunting_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageHuntingExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityVintageHuntingExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageHuntingExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityVintageHuntingExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_36;
    }
    v29 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false,false> *const)(v3 + 32));
    hunting_stage_id = std::get<0ul,unsigned int const,data::ActivityVintageHuntingExcelConfig>(v29);
    hunting_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityVintageHuntingExcelConfig>(v29);
    v7 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->gallery_hunting_stage_map_,
           &hunting_config->gallery_id,
           hunting_stage_id,
           (const unsigned int *)&this->gallery_hunting_stage_map_,
           v6);
    if ( !v7.second )
      break;
    if ( *(_BYTE *)(((unsigned __int64)hunting_stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)hunting_stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)hunting_stage_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(hunting_stage_id);
    }
    if ( *hunting_stage_id == 1 && std::vector<unsigned int>::size(&hunting_config->boar_score_list) == 3 )
    {
      v12 = 0LL;
      v13 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &hunting_config->boar_score_list,
                                                                                                  0LL);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      v16 = *(_BYTE *)(((unsigned __int64)&this->timid_score_ >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v12) = v16 != 0;
        __asan_report_store4(&this->timid_score_, v12);
      }
      this->timid_score_ = v15;
      v17 = 1LL;
      v18 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &hunting_config->boar_score_list,
                                                                                                  1uLL);
      v19 = v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v18);
      }
      v20 = *v19;
      v21 = *(_BYTE *)(((unsigned __int64)&this->brutal_score_ >> 3) + 0x7FFF8000);
      if ( v21 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v21 )
      {
        LOBYTE(v17) = v21 != 0;
        __asan_report_store4(&this->brutal_score_, v17);
      }
      this->brutal_score_ = v20;
      v22 = 2LL;
      v23 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &hunting_config->boar_score_list,
                                                                                                  2uLL);
      v24 = v23;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v23);
      }
      v25 = *v24;
      v26 = *(_BYTE *)(((unsigned __int64)&this->elite_score_ >> 3) + 0x7FFF8000);
      if ( v26 != 0 && v26 <= 3 )
      {
        LOBYTE(v22) = v26 != 0;
        __asan_report_store4(&this->elite_score_, v22);
      }
      this->elite_score_ = v25;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
    "rewriteVintageHuntingData",
    54);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         v8,
         (const char (*)[44])"[VINTAGE] duplicate gallery_id, gallery_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &hunting_config->gallery_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_36:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v32 == (char *)v3 )
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

// Line 69: range 0000000012E4399A-0000000012E43E6F
int32_t __cdecl ActivityVintageExcelConfigMgr::rewriteVintageHuntingMonsterData(
        ActivityVintageExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  const unsigned int *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // edx
  int v12; // eax
  int32_t result; // eax
  data::ActivityVintageHuntingMonsterExcelConfigMap *__for_range; // [rsp+10h] [rbp-140h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>,false,false>::reference v15; // [rsp+18h] [rbp-138h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig> >::type *id; // [rsp+20h] [rbp-130h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-120h]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference monster_id; // [rsp+38h] [rbp-118h]
  char v19[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 14 __for_begin:70 64 8 12 __for_end:70 96 8 14 __for_begin:72 128 8 12 __for_end:72 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityVintageExcelConfigMgr::rewriteVintageHuntingMonsterData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -202116109;
  __for_range = &this->activity_vintage_hunting_monster_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageHuntingMonsterExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityVintageHuntingMonsterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageHuntingMonsterExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityVintageHuntingMonsterExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>,false> *)(v3 + 64)) )
      break;
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>(v15);
    __for_range_0 = &std::get<1ul,unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>(v15)->monster_id_list;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128)) )
      {
        v11 = 1;
        goto LABEL_22;
      }
      monster_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
      v8 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
             &this->monster_id_type_map_,
             monster_id,
             id,
             (const unsigned int *)&this->monster_id_type_map_,
             v7);
      if ( !v8.second )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
    }
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
      "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
      "rewriteVintageHuntingMonsterData",
      76);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            v9,
            (const char (*)[44])"[VINTAGE] duplicate monster_id, monster_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, monster_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v11 = 0;
LABEL_22:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v11 != 1 )
    {
      v12 = 0;
      goto LABEL_26;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>,false,false> *const)(v3 + 32));
  }
  v12 = 1;
LABEL_26:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 85: range 0000000012E43E70-0000000012E4457E
int32_t __cdecl ActivityVintageExcelConfigMgr::rewriteVintagePresentData(
        ActivityVintageExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ActivityVintagePresentExcelConfigMap *p_activity_vintage_present_excel_config_map; // rdx
  data::ActivityVintagePresentExcelConfigMap *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  uint32_t *p_open_order; // rsi
  unsigned int *v13; // r8
  uint32_t v14; // ecx
  char v15; // al
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  uint32_t open_day; // r15d
  std::map<unsigned int,unsigned int>::mapped_type *v20; // rax
  uint32_t *v21; // rdx
  char v22; // cl
  int32_t result; // eax
  uint32_t present_size; // [rsp+28h] [rbp-148h]
  uint32_t index_size; // [rsp+2Ch] [rbp-144h]
  data::ActivityVintagePresentExcelConfig *present_config; // [rsp+30h] [rbp-140h]
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::mapped_type *present_id_index_map; // [rsp+38h] [rbp-138h]
  char v28[304]; // [rsp+40h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 13 present_id:88 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 32 9 <unknown> 19"
                        "2 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityVintageExcelConfigMgr::rewriteVintagePresentData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  present_size = std::unordered_map<unsigned int,data::ActivityVintagePresentExcelConfig>::size(&this->activity_vintage_present_excel_config_map);
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 32, txt_config_mgr);
  for ( *(_DWORD *)(v3 + 32) = 1; ; ++*(_DWORD *)(v3 + 32) )
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 32);
    if ( present_size < *(_DWORD *)(v3 + 32) )
    {
      v11 = 1;
      goto LABEL_32;
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    p_activity_vintage_present_excel_config_map = &this->activity_vintage_present_excel_config_map;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::ActivityVintagePresentExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityVintagePresentExcelConfig>::end(p_activity_vintage_present_excel_config_map);
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    v7 = &this->activity_vintage_present_excel_config_map;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::ActivityVintagePresentExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityVintagePresentExcelConfig>::find(v7, (const std::unordered_map<unsigned int,data::ActivityVintagePresentExcelConfig>::key_type *)(v3 + 32));
    v8 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityVintagePresentExcelConfig>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintagePresentExcelConfig>,false> *)(v3 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintagePresentExcelConfig>,false> *)(v3 + 96));
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "rewriteVintagePresentData",
        92);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              v9,
              (const char (*)[46])"[VINTAGE] don't have the present, presetn_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      v2 = -1;
      v11 = 0;
      goto LABEL_32;
    }
    present_config = std::unordered_map<unsigned int,data::ActivityVintagePresentExcelConfig>::operator[](
                       &this->activity_vintage_present_excel_config_map,
                       (const std::unordered_map<unsigned int,data::ActivityVintagePresentExcelConfig>::key_type *)(v3 + 32));
    p_open_order = &present_config->open_order;
    present_id_index_map = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                             &this->stage_present_map_,
                             &present_config->open_order);
    index_size = std::map<unsigned int,unsigned int>::size(present_id_index_map);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    v14 = index_size + 1;
    v15 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v15 != 0 && v15 <= 3 )
    {
      LOBYTE(p_open_order) = v15 != 0;
      __asan_report_store4(v3 + 48, p_open_order);
    }
    *(_DWORD *)(v3 + 48) = v14;
    v16 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int>(
            present_id_index_map,
            (unsigned int *)(v3 + 32),
            (unsigned int *)(v3 + 48),
            (unsigned int *)(v3 + 32),
            v13);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !v16.second )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&present_config->open_day >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&present_config->open_day >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&present_config->open_day);
    }
    open_day = present_config->open_day;
    txt_config_mgr = (TxtConfigMgr *)&present_config->open_order;
    v20 = std::map<unsigned int,unsigned int>::operator[](
            &this->present_stage_open_day_map_,
            &present_config->open_order);
    v21 = v20;
    v22 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
    LOBYTE(txt_config_mgr) = v22 != 0;
    if ( v22 != 0 && (char)(((unsigned __int8)v20 & 7) + 3) >= v22 )
      __asan_report_store4(v20, txt_config_mgr);
    *v21 = open_day;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 32);
  }
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
    "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
    "rewriteVintagePresentData",
    101);
  v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 192),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v18 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
          v17,
          (const char (*)[48])"[VINTAGE] duplicate present_config, present_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 32));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  v2 = -1;
  v11 = 0;
LABEL_32:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v28 == (char *)v3 )
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

// Line 112: range 0000000012E44580-0000000012E44BAC
int32_t __cdecl ActivityVintageExcelConfigMgr::rewriteVintageCampData(
        ActivityVintageExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActivityVintageExcelConfigMgr *v5; // rcx
  __int64 p_group_bundle_id; // rsi
  const data::ActivityVintageCampChallengeExcelConfig **v7; // r8
  uint32_t open_stage_id; // ecx
  char v9; // dl
  uint32_t group_bundle_id; // r14d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v11; // rax
  uint32_t *v12; // rdx
  char v13; // cl
  std::map<unsigned int,const data::ActivityVintageCampChallengeExcelConfig*> *p_camp_bundle_config_map; // rcx
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,const data::ActivityVintageCampChallengeExcelConfig*> >,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t open_day; // r14d
  uint32_t *p_open_stage_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v20; // rax
  uint32_t *v21; // rdx
  char v22; // cl
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-11Ch]
  data::ActivityVintageCampChallengeExcelConfigMap *__for_range; // [rsp+18h] [rbp-118h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig>,false,false>::reference v26; // [rsp+20h] [rbp-110h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig> >::type *id; // [rsp+28h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig> >::type *camp_config; // [rsp+30h] [rbp-100h]
  data::ActivityVintageCampChallengeExcelConfig *next_camp_config_ptr; // [rsp+38h] [rbp-F8h]
  char v30[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:114 64 8 13 __for_end:114 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageExcelConfigMgr::rewriteVintageCampData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  ret = 0;
  __for_range = &this->activity_vintage_camp_challenge_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageCampChallengeExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityVintageCampChallengeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageCampChallengeExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityVintageCampChallengeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig>,false> *)(v2 + 64)) )
  {
    v26 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::ActivityVintageCampChallengeExcelConfig>(v26);
    camp_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityVintageCampChallengeExcelConfig>(v26);
    v5 = this;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    p_group_bundle_id = *id + 1;
    next_camp_config_ptr = data::ActivityVintageExcelConfigMgrBase::findActivityVintageCampChallengeExcelConfig(
                             v5,
                             p_group_bundle_id);
    if ( next_camp_config_ptr )
    {
      p_group_bundle_id = (((_BYTE)next_camp_config_ptr + 20) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&next_camp_config_ptr->open_stage_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)next_camp_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&next_camp_config_ptr->open_stage_id >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&next_camp_config_ptr->open_stage_id);
      }
      open_stage_id = next_camp_config_ptr->open_stage_id;
      v9 = *(_BYTE *)(((unsigned __int64)&camp_config->open_stage_id >> 3) + 0x7FFF8000);
      LOBYTE(p_group_bundle_id) = v9 != 0;
      if ( v9 != 0 && (char)((((_BYTE)camp_config + 20) & 7) + 3) >= v9 )
        __asan_report_load4(&camp_config->open_stage_id);
      if ( open_stage_id == camp_config->open_stage_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&next_camp_config_ptr->group_bundle_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&next_camp_config_ptr->group_bundle_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&next_camp_config_ptr->group_bundle_id);
        }
        group_bundle_id = next_camp_config_ptr->group_bundle_id;
        p_group_bundle_id = (__int64)&camp_config->group_bundle_id;
        v11 = std::unordered_map<unsigned int,unsigned int>::operator[](
                &this->camp_next_bundle_map,
                &camp_config->group_bundle_id);
        v12 = v11;
        v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
        LOBYTE(p_group_bundle_id) = v13 != 0;
        if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
          __asan_report_store4(v11, p_group_bundle_id);
        *v12 = group_bundle_id;
      }
    }
    p_camp_bundle_config_map = &this->camp_bundle_config_map;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, p_group_bundle_id);
    *(_QWORD *)(v2 + 96) = camp_config;
    v15 = std::map<unsigned int,data::ActivityVintageCampChallengeExcelConfig const*>::emplace<unsigned int const&,data::ActivityVintageCampChallengeExcelConfig const*>(
            p_camp_bundle_config_map,
            &camp_config->group_bundle_id,
            (const data::ActivityVintageCampChallengeExcelConfig **)(v2 + 96),
            (const unsigned int *)p_camp_bundle_config_map,
            v7);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v15.second )
    {
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "rewriteVintageCampData",
        124);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              v16,
              (const char (*)[51])"[VINTAGE] duplicate group_bundle, group_bundle_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &camp_config->group_bundle_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&camp_config->open_day >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&camp_config->open_day >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&camp_config->open_day);
    }
    open_day = camp_config->open_day;
    p_open_stage_id = &camp_config->open_stage_id;
    v20 = std::map<unsigned int,unsigned int>::operator[](&this->camp_stage_open_day_map_, &camp_config->open_stage_id);
    v21 = v20;
    v22 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
    if ( v22 != 0 && (char)(((unsigned __int8)v20 & 7) + 3) >= v22 )
    {
      LOBYTE(p_open_stage_id) = v22 != 0;
      __asan_report_store4(v20, p_open_stage_id);
    }
    *v21 = open_day;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v30 == (char *)v2 )
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

// Line 135: range 0000000012E44BAE-0000000012E45648
int32_t __cdecl ActivityVintageExcelConfigMgr::checkConfig(
        ActivityVintageExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  char v14[576]; // [rsp+10h] [rbp-240h] BYREF

  v2 = (common::milog::MiLogStream *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"8 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityVintageExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -202116109;
  if ( ActivityVintageExcelConfigMgr::checkVintageData(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
      "checkConfig",
      138);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v5, (const char (*)[25])"checkVintageData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityVintageExcelConfigMgr::checkVintageQuestData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
      "checkConfig",
      144);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v7,
      (const char (*)[30])"checkVintageQuestData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityVintageExcelConfigMgr::checkVintageActivityData(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
      "checkConfig",
      150);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v8,
      (const char (*)[33])"checkVintageActivityData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityVintageExcelConfigMgr::checkVintageHuntingData(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
      "checkConfig",
      156);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v9,
      (const char (*)[32])"checkVintageHuntingData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( ActivityVintageExcelConfigMgr::checkVintageHuntingMonsterData(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[9], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
      "checkConfig",
      162);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v10,
      (const char (*)[39])"checkVintageHuntingMonsterData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( ActivityVintageExcelConfigMgr::checkVintagePresentData(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[11] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[11].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[11].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[11], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
      "checkConfig",
      168);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v11,
      (const char (*)[32])"checkVintagePresentData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else if ( ActivityVintageExcelConfigMgr::checkVinatgeBoothDecoData(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[13] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[13], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
      "checkConfig",
      174);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v12,
      (const char (*)[34])"checkVinatgeBoothDecoData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    result = -1;
  }
  else if ( ActivityVintageExcelConfigMgr::checkVintageChallengeData(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[15] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[15].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[15].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[15], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
      "checkConfig",
      180);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 15,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v13,
      (const char (*)[34])"checkVintageChallengeData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 15);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v14 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 188: range 0000000012E4564A-0000000012E46306
int32_t __cdecl ActivityVintageExcelConfigMgr::checkVintageData(
        const ActivityVintageExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t *p_activity_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  NewActivityExcelConfigMgr *v9; // rcx
  __int64 activity_id; // rsi
  data::NewActivityType ActivitiyTypeByActivityId; // edx
  char v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  QuestExcelConfigMgr *v18; // rcx
  __int64 second_pre_chapter_id; // rsi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  char *v22; // rsi
  unsigned int *v23; // rax
  int *v24; // rdx
  int v25; // ecx
  char v26; // al
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-254h]
  data::ActivityVintageDataExcelConfigMap *__for_range; // [rsp+20h] [rbp-250h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageDataExcelConfig>,false,false>::reference v33; // [rsp+28h] [rbp-248h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintageDataExcelConfig> >::type *vintage_config; // [rsp+38h] [rbp-238h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-228h]
  char v36[544]; // [rsp+50h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 4 17 activity_type:201 48 4 14 watcher_id:220 64 8 15 __for_begin:190 96 8 13 __for_end:19"
                        "0 128 8 15 __for_begin:220 160 8 13 __for_end:220 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9"
                        " <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageExcelConfigMgr::checkVintageData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -202116109;
  ret = 0;
  __for_range = &this->activity_vintage_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageDataExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityVintageDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageDataExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityVintageDataExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityVintageDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageDataExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageDataExcelConfig>,false> *)(v2 + 96)) )
  {
    v33 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageDataExcelConfig>,false,false> *const)(v2 + 64));
    std::get<0ul,unsigned int const,data::ActivityVintageDataExcelConfig>(v33);
    vintage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintageDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityVintageDataExcelConfig>(v33);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    p_activity_id = &vintage_config->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_activity_id);
    }
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
            p_new_activity_config_mgr,
            vintage_config->activity_id) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "checkVintageData",
        196);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             v7,
             (const char (*)[31])"[VINTAGE] invalid activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &vintage_config->activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    v9 = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&vintage_config->activity_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)vintage_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vintage_config->activity_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&vintage_config->activity_id);
    }
    activity_id = vintage_config->activity_id;
    ActivitiyTypeByActivityId = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(v9, activity_id);
    v12 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    if ( v12 != 0 && v12 <= 3 )
    {
      LOBYTE(activity_id) = v12 != 0;
      __asan_report_store4(v2 + 32, activity_id);
    }
    *(_DWORD *)(v2 + 32) = ActivitiyTypeByActivityId;
    if ( *(_DWORD *)(v2 + 32) != 3103 )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "checkVintageData",
        204);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              v13,
              (const char (*)[46])"[VINTAGE] activity_type error, activity_type:");
      common::milog::MiLogStream::operator<<<data::NewActivityType,(data::NewActivityType*)0>(
        v14,
        (const data::NewActivityType *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&vintage_config->first_pre_chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)vintage_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&vintage_config->first_pre_chapter_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&vintage_config->first_pre_chapter_id);
    }
    if ( !data::QuestExcelConfigMgrBase::findChapterExcelConfig(
            p_quest_config_mgr,
            vintage_config->first_pre_chapter_id) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "checkVintageData",
        211);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              v16,
              (const char (*)[52])"[VINTAGE] findChapterExcelConfig error, chapter_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &vintage_config->first_pre_chapter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v18 = &txt_config_mgr->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&vintage_config->second_pre_chapter_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&vintage_config->second_pre_chapter_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&vintage_config->second_pre_chapter_id);
    }
    second_pre_chapter_id = vintage_config->second_pre_chapter_id;
    if ( !data::QuestExcelConfigMgrBase::findChapterExcelConfig(v18, second_pre_chapter_id) )
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
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "checkVintageData",
        216);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v21 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              v20,
              (const char (*)[52])"[VINTAGE] findChapterExcelConfig error, chapter_id:");
      second_pre_chapter_id = (__int64)&vintage_config->second_pre_chapter_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v21,
        &vintage_config->second_pre_chapter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &vintage_config->weapon_watcher_ids;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, second_pre_chapter_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, second_pre_chapter_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v22 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v23 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v24 = (int *)v23;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v23);
      }
      v25 = *v24;
      v26 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v26 != 0 && v26 <= 3 )
      {
        LOBYTE(v22) = v26 != 0;
        __asan_report_store4(v2 + 48, v22);
      }
      *(_DWORD *)(v2 + 48) = v25;
      if ( !WatcherExcelConfigMgr::findWatcherConfig(&txt_config_mgr->watcher_config_mgr, *(_DWORD *)(v2 + 48)) )
      {
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
          "checkVintageData",
          224);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                v27,
                (const char (*)[47])"[VINTAGE] findWatcherConfig fails, watcher_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageDataExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageDataExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v36 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
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

// Line 234: range 0000000012E46308-0000000012E46895
int32_t __cdecl ActivityVintageExcelConfigMgr::checkVintageQuestData(
        const ActivityVintageExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  uint32_t *p_quest_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  data::ActivityVintageQuestDataExcelConfigMap *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageQuestDataExcelConfig>,false,false>::reference v14; // [rsp+28h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintageQuestDataExcelConfig> >::type *quest_config; // [rsp+38h] [rbp-108h]
  char v16[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:236 64 8 13 __for_end:236 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageExcelConfigMgr::checkVintageQuestData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->activity_vintage_quest_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageQuestDataExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityVintageQuestDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageQuestDataExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityVintageQuestDataExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityVintageQuestDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageQuestDataExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageQuestDataExcelConfig>,false> *)(v2 + 64)) )
  {
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageQuestDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageQuestDataExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::ActivityVintageQuestDataExcelConfig>(v14);
    quest_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintageQuestDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityVintageQuestDataExcelConfig>(v14);
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    p_quest_id = &quest_config->quest_id;
    if ( *(_BYTE *)(((unsigned __int64)p_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_quest_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_quest_id);
    }
    if ( !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(p_quest_config_mgr, quest_config->quest_id) )
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
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "checkVintageQuestData",
        240);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             v7,
             (const char (*)[52])"[VINTAGE] findMainQuestExcelConfig fails, quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &quest_config->quest_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&quest_config->pre_quest_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&quest_config->pre_quest_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&quest_config->pre_quest_id);
    }
    if ( quest_config->pre_quest_id
      && !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(
            &txt_config_mgr->quest_config_mgr,
            quest_config->pre_quest_id) )
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
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "checkVintageQuestData",
        248);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              v9,
              (const char (*)[56])"[VINTAGE] findMainQuestExcelConfig fails, pre_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &quest_config->pre_quest_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageQuestDataExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageQuestDataExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 258: range 0000000012E46896-0000000012E46C47
int32_t __cdecl ActivityVintageExcelConfigMgr::checkVintageActivityData(
        const ActivityVintageExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t *p_guide_quest_id; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::ActivityVintagePlayTypeExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintagePlayTypeExcelConfig>,false,false>::reference v11; // [rsp+28h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintagePlayTypeExcelConfig> >::type *activity_config; // [rsp+38h] [rbp-C8h]
  char v13[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:260 64 8 13 __for_end:260 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageExcelConfigMgr::checkVintageActivityData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->activity_vintage_play_type_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintagePlayTypeExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityVintagePlayTypeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintagePlayTypeExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityVintagePlayTypeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityVintagePlayTypeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintagePlayTypeExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintagePlayTypeExcelConfig>,false> *)(v2 + 64)) )
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintagePlayTypeExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintagePlayTypeExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::ActivityVintagePlayTypeExcelConfig>(v11);
    activity_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintagePlayTypeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityVintagePlayTypeExcelConfig>(v11);
    p_guide_quest_id = &activity_config->guide_quest_id;
    if ( *(_BYTE *)(((unsigned __int64)p_guide_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_guide_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_guide_quest_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(p_guide_quest_id);
    }
    if ( activity_config->guide_quest_id
      && !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(
            &txt_config_mgr->quest_config_mgr,
            activity_config->guide_quest_id) )
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
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "checkVintageActivityData",
        266);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
             v6,
             (const char (*)[58])"[VINTAGE] findMainQuestExcelConfig fails, guide_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &activity_config->guide_quest_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintagePlayTypeExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintagePlayTypeExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 276: range 0000000012E46C48-0000000012E4897B
int32_t __cdecl ActivityVintageExcelConfigMgr::checkVintageHuntingData(
        const ActivityVintageExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ActivityVintageHuntingExcelConfigMap *p_activity_vintage_hunting_excel_config_map; // rcx
  char v6; // al
  data::ActivityVintageHuntingExcelConfigMap *v7; // rdx
  const char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  unsigned __int64 v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  const data::QuestExcelConfigMgrBase *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  const data::GalleryExcelConfigMgrBase *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  __int64 point_id; // rsi
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  char *v28; // rsi
  unsigned int *v29; // rax
  int *v30; // rdx
  int v31; // ecx
  char v32; // al
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  char *v35; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v36; // rax
  const data::ActivityGroupLinksExcelConfigMgrBase *p_activity_group_links_config_mgr; // rcx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v40; // rax
  const WatcherExcelConfigMgr *p_watcher_config_mgr; // rcx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r15
  std::vector<unsigned int>::size_type v47; // rax
  const TxtConfigMgr *txt_config_mgra; // [rsp+0h] [rbp-560h]
  int32_t ret; // [rsp+14h] [rbp-54Ch]
  LuaConfigMgr *lua_config_mgr; // [rsp+18h] [rbp-548h]
  data::ActivityVintageHuntingExcelConfigMap *__for_range; // [rsp+20h] [rbp-540h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false,false>::reference v53; // [rsp+28h] [rbp-538h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig> >::type *id; // [rsp+30h] [rbp-530h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig> >::type *hunting_config; // [rsp+38h] [rbp-528h]
  const GroupScriptConfig *group_script_ptr; // [rsp+40h] [rbp-520h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-518h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-510h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+58h] [rbp-508h]
  const unsigned int *watcher_id; // [rsp+60h] [rbp-500h]
  const unsigned int *group_bundle_id; // [rsp+68h] [rbp-4F8h]
  char v62[1264]; // [rsp+70h] [rbp-4F0h] BYREF

  txt_config_mgra = txt_config_mgr;
  v2 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1216LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "25 48 4 9 <unknown> 64 4 19 trial_avatar_id:334 80 8 8 iter:280 112 8 9 <unknown> 144 8 15 __for"
                        "_begin:289 176 8 13 __for_end:289 208 8 15 __for_begin:334 240 8 13 __for_end:334 272 8 15 __for"
                        "_begin:344 304 8 13 __for_end:344 336 8 15 __for_begin:354 368 8 13 __for_end:354 400 8 9 <unkno"
                        "wn> 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <unknown> 624 32 9 <unknown> 688 32 9 <unknow"
                        "n> 752 32 9 <unknown> 816 32 9 <unknown> 880 32 9 <unknown> 944 32 9 <unknown> 1008 32 9 <unknow"
                        "n> 1072 32 9 <unknown> 1136 48 24 quest_trigger_id_set:287";
  *(_QWORD *)(v2 + 16) = ActivityVintageExcelConfigMgr::checkVintageHuntingData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
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
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862728] = -234881024;
  v4[536862729] = 62194;
  v4[536862729] = -234881024;
  v4[536862730] = 62194;
  v4[536862730] = -234881024;
  v4[536862731] = 62194;
  v4[536862731] = -234881024;
  v4[536862732] = 62194;
  v4[536862732] = -234881024;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862740] = -219021312;
  v4[536862741] = 62194;
  v4[536862742] = -219021312;
  v4[536862743] = 62194;
  v4[536862744] = -219021312;
  v4[536862745] = 62194;
  v4[536862746] = -219021312;
  v4[536862747] = 62194;
  v4[536862748] = -219021312;
  v4[536862749] = 62194;
  v4[536862750] = -219021312;
  v4[536862751] = 62194;
  v4[536862752] = -219021312;
  v4[536862753] = 62194;
  v4[536862754] = -219021312;
  v4[536862755] = 62194;
  v4[536862757] = -202116109;
  ret = 0;
  p_activity_vintage_hunting_excel_config_map = &this->activity_vintage_hunting_excel_config_map;
  v6 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
  LOBYTE(txt_config_mgr) = v6 != 0;
  if ( v6 != 0 && v6 <= 3 )
    __asan_report_store4(v2 + 48, txt_config_mgr);
  *(_DWORD *)(v2 + 48) = 1;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageHuntingExcelConfig>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::ActivityVintageHuntingExcelConfig>::find(p_activity_vintage_hunting_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityVintageHuntingExcelConfig>::key_type *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
  v7 = &this->activity_vintage_hunting_excel_config_map;
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityVintageHuntingExcelConfig>::const_iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::ActivityVintageHuntingExcelConfig>::end(v7);
  v8 = (const char *)(v2 + 112);
  v9 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false> *)(v2 + 80),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false> *)(v2 + 112));
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 432, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 432),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
      "checkVintageHuntingData",
      283);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 432),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = "[VINTAGE] hunting don't has stage 1.";
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v10,
      (const char (*)[37])"[VINTAGE] hunting don't has stage 1.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
    *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  v11 = ((v2 + 1136) >> 3) + 2147450880;
  *(_DWORD *)v11 = 0;
  *(_WORD *)(v11 + 4) = 0;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 1136));
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgra)->lua_config_mgr;
  __for_range = &this->activity_vintage_hunting_excel_config_map;
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 144, v8);
  *(std::unordered_map<unsigned int,data::ActivityVintageHuntingExcelConfig>::const_iterator *)(v2 + 144) = std::unordered_map<unsigned int,data::ActivityVintageHuntingExcelConfig>::begin(__for_range);
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 176, v8);
  *(std::unordered_map<unsigned int,data::ActivityVintageHuntingExcelConfig>::const_iterator *)(v2 + 176) = std::unordered_map<unsigned int,data::ActivityVintageHuntingExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false> *)(v2 + 176)) )
  {
    v53 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false,false> *const)(v2 + 144));
    id = std::get<0ul,unsigned int const,data::ActivityVintageHuntingExcelConfig>(v53);
    hunting_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityVintageHuntingExcelConfig>(v53);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( !ActivityVintageExcelConfigMgr::isHuntingStageValid(*id) )
    {
      *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 79) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 496, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 496),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "checkVintageHuntingData",
        293);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 496),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              v12,
              (const char (*)[48])"[VINTAGE] stage_id not valid, hunting_stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
      *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v14 = std::set<unsigned int>::emplace<unsigned int const&>(
            (std::set<unsigned int> *const)(v2 + 1136),
            &hunting_config->quest_trigger_id,
            &hunting_config->quest_trigger_id);
    if ( !v14.second )
    {
      *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 560) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 560, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 560),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "checkVintageHuntingData",
        299);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 560),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              v15,
              (const char (*)[56])"[VINTAGE] duplicate quest_trigger_id, quest_trigger_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &hunting_config->quest_trigger_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 560));
      *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_quest_config_mgr = &txt_config_mgra->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&hunting_config->guide_quest_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&hunting_config->guide_quest_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&hunting_config->guide_quest_id);
    }
    if ( !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(p_quest_config_mgr, hunting_config->guide_quest_id) )
    {
      *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 624) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 624, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 624),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "checkVintageHuntingData",
        306);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 624),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              v18,
              (const char (*)[58])"[VINTAGE] findMainQuestExcelConfig fails, guide_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &hunting_config->guide_quest_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 624));
      *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_gallery_config_mgr = &txt_config_mgra->gallery_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&hunting_config->gallery_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)hunting_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hunting_config->gallery_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&hunting_config->gallery_id);
    }
    if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, hunting_config->gallery_id) )
    {
      *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 688) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 688, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 688),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "checkVintageHuntingData",
        313);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 688),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v22 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              v21,
              (const char (*)[52])"[VINTAGE] findGalleryExcelConfig fails, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &hunting_config->gallery_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 688));
      *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&hunting_config->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&hunting_config->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&hunting_config->group_id);
    }
    group_script_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, hunting_config->group_id);
    if ( group_script_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&hunting_config->point_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)hunting_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hunting_config->point_id >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&hunting_config->point_id);
      }
      point_id = hunting_config->point_id;
      if ( !GroupScriptConfig::findPointConfig(group_script_ptr, point_id) )
      {
        *(_DWORD *)(((v2 + 816) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 816) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 847) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 847) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 816, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 816),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
          "checkVintageHuntingData",
          328);
        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 816),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v27 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                v26,
                (const char (*)[50])"[Vintage] findPointConfig failed, born_point_id: ");
        point_id = (__int64)&hunting_config->point_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &hunting_config->point_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 816));
        *(_DWORD *)(((v2 + 816) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 752) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 752) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 783) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 79) & 7) >= *(_BYTE *)(((v2 + 783) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 752, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 752),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "checkVintageHuntingData",
        321);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 752),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v24 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              v23,
              (const char (*)[39])"findGroupScriptConfig fail. group_id: ");
      point_id = (__int64)&hunting_config->group_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &hunting_config->group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 752));
      *(_DWORD *)(((v2 + 752) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &hunting_config->trial_avatar_id_list;
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, point_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 208) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 240, point_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 240) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v28 = (char *)(v2 + 240);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 208),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 240)) )
        break;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
      v29 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 208));
      v30 = (int *)v29;
      if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v29);
      }
      v31 = *v30;
      v32 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
      if ( v32 != 0 && v32 <= 3 )
      {
        LOBYTE(v28) = v32 != 0;
        __asan_report_store4(v2 + 64, v28);
      }
      *(_DWORD *)(v2 + 64) = v31;
      if ( !data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
              &txt_config_mgra->trial_avatar_config_mgr,
              *(unsigned int *)(v2 + 64)) )
      {
        *(_DWORD *)(((v2 + 880) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 880) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 911) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 911) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 880, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 880),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
          "checkVintageHuntingData",
          338);
        v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 880),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v34 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                v33,
                (const char (*)[63])"[Vintage] findTrialAvatarExcelConfig failed, trial_avatar_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 880));
        *(_DWORD *)(((v2 + 880) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 208));
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &hunting_config->group_bundle_id_list;
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 272, v28);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 272) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 304, v28);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 304) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v35 = (char *)(v2 + 304);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 272),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 304)) )
        break;
      v36 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 272));
      group_bundle_id = v36;
      p_activity_group_links_config_mgr = &txt_config_mgra->activity_group_links_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v36);
      }
      if ( !data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
              p_activity_group_links_config_mgr,
              *group_bundle_id) )
      {
        *(_DWORD *)(((v2 + 944) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 944) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 975) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 975) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 944, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 944),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
          "checkVintageHuntingData",
          348);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 944),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v39 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                v38,
                (const char (*)[66])"[VINTAGE] findGroupLinksBundleExcelConfig fails, group_bundle_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, group_bundle_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 944));
        *(_DWORD *)(((v2 + 944) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 272));
    }
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
    __for_range_2 = &hunting_config->watcher_ids;
    *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 336, v35);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 336) = std::vector<unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 368, v35);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 368) = std::vector<unsigned int>::end(__for_range_2);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 336),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 368)) )
    {
      v40 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 336));
      watcher_id = v40;
      p_watcher_config_mgr = &txt_config_mgra->watcher_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v40);
      }
      if ( !WatcherExcelConfigMgr::findWatcherConfig(p_watcher_config_mgr, *watcher_id) )
      {
        *(_DWORD *)(((v2 + 1008) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1008) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1039) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 79) & 7) >= *(_BYTE *)(((v2 + 1039) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1008, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1008),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
          "checkVintageHuntingData",
          358);
        v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1008),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v43 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                v42,
                (const char (*)[47])"[VINTAGE] findWatcherConfig fails, watcher_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, watcher_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1008));
        *(_DWORD *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 336));
    }
    *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( *id == 1 && std::vector<unsigned int>::size(&hunting_config->boar_score_list) != 3 )
    {
      *(_DWORD *)(((v2 + 1072) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1072) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1103) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 1103) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1072, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1072),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "checkVintageHuntingData",
        366);
      v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1072),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v46 = common::milog::MiLogStream::operator<<<char [89],(char *[89])0>(v45, (const char (*)[89])byte_1AAB45A0);
      *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
      v47 = std::vector<unsigned int>::size(&hunting_config->boar_score_list);
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) )
        v47 = __asan_report_store8(v2 + 400, byte_1AAB45A0);
      *(_QWORD *)(v2 + 400) = v47;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v46,
        (const unsigned __int64 *)(v2 + 400));
      *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1072));
      *(_DWORD *)(((v2 + 1072) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingExcelConfig>,false,false> *const)(v2 + 144));
  }
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 1136));
  if ( v62 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 144) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF8094) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1216LL, v62);
  }
  return ret;
};

// Line 375: range 0000000012E4897C-0000000012E48E6C
int32_t __cdecl ActivityVintageExcelConfigMgr::checkVintageHuntingMonsterData(
        const ActivityVintageExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  data::ActivityVintageHuntingMonsterExcelConfigMap *__for_range; // [rsp+20h] [rbp-130h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>,false,false>::reference v14; // [rsp+28h] [rbp-128h]
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-110h]
  const unsigned int *monster_id; // [rsp+48h] [rbp-108h]
  char v17[256]; // [rsp+50h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:377 64 8 13 __for_end:377 96 8 15 __for_begin:379 128 8 13 __for_end:379 1"
                        "60 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageExcelConfigMgr::checkVintageHuntingMonsterData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->activity_vintage_hunting_monster_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageHuntingMonsterExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityVintageHuntingMonsterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageHuntingMonsterExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityVintageHuntingMonsterExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>,false> *)(v2 + 64)) )
      break;
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>(v14);
    __for_range_0 = &std::get<1ul,unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>(v14)->monster_id_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 96) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128)) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
      monster_id = v6;
      p_monster_config_mgr = &txt_config_mgr->monster_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      if ( !data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(p_monster_config_mgr, *monster_id) )
      {
        ret = -1;
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
          "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
          "checkVintageHuntingMonsterData",
          384);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               v8,
               (const char (*)[42])"findMonsterExcelConfig fail. monster_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, monster_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageHuntingMonsterExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v17 == (char *)v2 )
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

// Line 392: range 0000000012E48E6E-0000000012E49CD8
int32_t __cdecl ActivityVintageExcelConfigMgr::checkVintagePresentData(
        const ActivityVintageExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  unsigned int *v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  __int64 v15; // rsi
  int SceneIdByGroupId; // edx
  char v17; // al
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  RewardExcelConfigMgr *p_reward_config_mgr; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  const ActivityVintageExcelConfigMgr *v29; // rcx
  uint32_t open_order; // ecx
  uint32_t open_day; // ecx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-26Ch]
  LuaConfigMgr *lua_config_mgr; // [rsp+18h] [rbp-268h]
  data::ActivityVintagePresentExcelConfigMap *__for_range; // [rsp+20h] [rbp-260h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintagePresentExcelConfig>,false,false>::reference v39; // [rsp+28h] [rbp-258h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityVintagePresentExcelConfig> >::type *id; // [rsp+30h] [rbp-250h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintagePresentExcelConfig> >::type *present_config; // [rsp+38h] [rbp-248h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-240h]
  const data::ActivityVintagePresentExcelConfig *next_present_config_ptr; // [rsp+48h] [rbp-238h]
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+58h] [rbp-228h]
  char v45[544]; // [rsp+60h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 4 12 group_id:398 48 4 12 scene_id:407 64 8 15 __for_begin:395 96 8 13 __for_end:395 128 8"
                        " 15 __for_begin:398 160 8 13 __for_end:398 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unkno"
                        "wn> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageExcelConfigMgr::checkVintagePresentData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -202116109;
  ret = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->activity_vintage_present_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintagePresentExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityVintagePresentExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintagePresentExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityVintagePresentExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityVintagePresentExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintagePresentExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintagePresentExcelConfig>,false> *)(v2 + 96)) )
      break;
    v39 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintagePresentExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintagePresentExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::ActivityVintagePresentExcelConfig>(v39);
    present_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintagePresentExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityVintagePresentExcelConfig>(v39);
    __for_range_0 = &present_config->group_id_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(v2 + 32, v6);
      }
      *(_DWORD *)(v2 + 32) = v9;
      if ( !LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, *(_DWORD *)(v2 + 32)) )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
          "checkVintagePresentData",
          404);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                v11,
                (const char (*)[39])"findGroupScriptConfig fail. group_id: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 32));
        v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 32);
      v15 = *(unsigned int *)(v2 + 32);
      SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, v15);
      v17 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v17 != 0 && v17 <= 3 )
      {
        LOBYTE(v15) = v17 != 0;
        __asan_report_store4(v2 + 48, v15);
      }
      *(_DWORD *)(v2 + 48) = SceneIdByGroupId;
      scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(
                           &txt_config_mgr->scene_config_mgr,
                           *(unsigned int *)(v2 + 48));
      if ( scene_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&scene_config_ptr->type);
        }
        if ( !SceneExcelConfigMgr::isPlayerScene(scene_config_ptr->type) )
        {
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
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
            "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
            "checkVintagePresentData",
            418);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v22, (const char (*)[45])byte_1AAB4920);
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v2 + 48));
          v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v24, (const char (*)[12])", group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
          "checkVintagePresentData",
          411);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v18, (const char (*)[43])byte_1AAB48C0);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v2 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])", group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    p_reward_config_mgr = &txt_config_mgr->reward_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&present_config->reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&present_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&present_config->reward_id);
    }
    if ( !data::RewardExcelConfigMgrBase::findRewardExcelConfig(p_reward_config_mgr, present_config->reward_id) )
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
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "checkVintagePresentData",
        426);
      v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v28 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              v27,
              (const char (*)[50])"[VINTAGE] findRewardExcelConfig fails, reward_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &present_config->reward_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v29 = this;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    next_present_config_ptr = data::ActivityVintageExcelConfigMgrBase::findActivityVintagePresentExcelConfig(
                                v29,
                                *id + 1);
    if ( next_present_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&present_config->open_order >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)present_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&present_config->open_order >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&present_config->open_order);
      }
      open_order = present_config->open_order;
      if ( *(_BYTE *)(((unsigned __int64)&next_present_config_ptr->open_order >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)next_present_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&next_present_config_ptr->open_order >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&next_present_config_ptr->open_order);
      }
      if ( open_order == next_present_config_ptr->open_order )
      {
        if ( *(_BYTE *)(((unsigned __int64)&present_config->open_day >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&present_config->open_day >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&present_config->open_day);
        }
        open_day = present_config->open_day;
        if ( *(_BYTE *)(((unsigned __int64)&next_present_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&next_present_config_ptr->open_day >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&next_present_config_ptr->open_day);
        }
        if ( open_day != next_present_config_ptr->open_day )
        {
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
            "checkVintagePresentData",
            435);
          v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v33 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  v32,
                  (const char (*)[42])"[VINTAGE] present open_day not same,  id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintagePresentExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintagePresentExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v45 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
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

// Line 443: range 0000000012E49CDA-0000000012E4A95B
int32_t __cdecl ActivityVintageExcelConfigMgr::checkVinatgeBoothDecoData(
        const ActivityVintageExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  unsigned int *v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  char *v15; // rsi
  unsigned int *v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  char *v22; // rsi
  unsigned int *v23; // rax
  int *v24; // rdx
  int v25; // ecx
  char v26; // al
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-284h]
  LuaConfigMgr *lua_config_mgr; // [rsp+20h] [rbp-280h]
  data::ActivityVintageDecoExcelConfigMap *__for_range; // [rsp+28h] [rbp-278h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageDecoExcelConfig>,false,false>::reference v34; // [rsp+30h] [rbp-270h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityVintageDecoExcelConfig> >::type *id; // [rsp+38h] [rbp-268h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintageDecoExcelConfig> >::type *booth_config; // [rsp+40h] [rbp-260h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-258h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-250h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+58h] [rbp-248h]
  char v40[576]; // [rsp+60h] [rbp-240h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 4 12 group_id:449 64 4 14 watcher_id:458 80 4 16 furniture_id:467 96 8 15 __for_begin:446 "
                        "128 8 13 __for_end:446 160 8 15 __for_begin:449 192 8 13 __for_end:449 224 8 15 __for_begin:458 "
                        "256 8 13 __for_end:458 288 8 15 __for_begin:467 320 8 13 __for_end:467 352 32 9 <unknown> 416 32"
                        " 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageExcelConfigMgr::checkVinatgeBoothDecoData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -202116109;
  ret = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->activity_vintage_deco_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageDecoExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityVintageDecoExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageDecoExcelConfig>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::ActivityVintageDecoExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityVintageDecoExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageDecoExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageDecoExcelConfig>,false> *)(v2 + 128)) )
      break;
    v34 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageDecoExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageDecoExcelConfig>,false,false> *const)(v2 + 96));
    id = std::get<0ul,unsigned int const,data::ActivityVintageDecoExcelConfig>(v34);
    booth_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintageDecoExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityVintageDecoExcelConfig>(v34);
    __for_range_0 = &booth_config->edit_group_id_list;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v2 + 192);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 160));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(v2 + 48, v6);
      }
      *(_DWORD *)(v2 + 48) = v9;
      if ( !LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, *(_DWORD *)(v2 + 48)) )
      {
        ret = -1;
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
          "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
          "checkVinatgeBoothDecoData",
          454);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                v11,
                (const char (*)[39])"findGroupScriptConfig fail. group_id: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 160));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &booth_config->watcher_ids;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v6);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 224) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 256, v6);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 256) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v15 = (char *)(v2 + 256);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 224),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 256)) )
        break;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
      v16 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 224));
      v17 = (int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v18 = *v17;
      v19 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
      if ( v19 != 0 && v19 <= 3 )
      {
        LOBYTE(v15) = v19 != 0;
        __asan_report_store4(v2 + 64, v15);
      }
      *(_DWORD *)(v2 + 64) = v18;
      if ( !WatcherExcelConfigMgr::findWatcherConfig(&txt_config_mgr->watcher_config_mgr, *(_DWORD *)(v2 + 64)) )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
          "checkVinatgeBoothDecoData",
          462);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                v20,
                (const char (*)[47])"[VINTAGE] findWatcherConfig fails, watcher_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 224));
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
    __for_range_2 = &booth_config->furniture_ids;
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 288, v15);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 288) = std::vector<unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 320, v15);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 320) = std::vector<unsigned int>::end(__for_range_2);
    while ( 1 )
    {
      v22 = (char *)(v2 + 320);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 288),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 320)) )
        break;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
      v23 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 288));
      v24 = (int *)v23;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v23);
      }
      v25 = *v24;
      v26 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
      if ( v26 != 0 && v26 <= 3 )
      {
        LOBYTE(v22) = v26 != 0;
        __asan_report_store4(v2 + 80, v22);
      }
      *(_DWORD *)(v2 + 80) = v25;
      if ( !data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
              &txt_config_mgr->home_config_mgr,
              *(unsigned int *)(v2 + 80)) )
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
          "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
          "checkVinatgeBoothDecoData",
          471);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                v27,
                (const char (*)[65])"[VINTAGE] findHomeWorldFurnitureExcelConfig fails, furniture_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 288));
    }
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageDecoExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageDecoExcelConfig>,false,false> *const)(v2 + 96));
  }
  result = ret;
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 481: range 0000000012E4A95C-0000000012E4BBA5
int32_t __cdecl ActivityVintageExcelConfigMgr::checkVintageChallengeData(
        const ActivityVintageExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  ActivityGroupLinksExcelConfigMgr *p_activity_group_links_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const ActivityVintageExcelConfigMgr *v9; // rcx
  uint32_t open_stage_id; // ecx
  uint32_t open_day; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  RewardExcelConfigMgr *p_reward_config_mgr; // rcx
  __int64 reward_id; // rsi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  char *v18; // rsi
  unsigned int *v19; // rax
  int *v20; // rdx
  int v21; // ecx
  char v22; // al
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::vector<unsigned int>::size_type v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int32_t ret; // [rsp+14h] [rbp-32Ch]
  data::ActivityVintageCampChallengeExcelConfigMap *__for_range; // [rsp+18h] [rbp-328h]
  std::map<unsigned int,std::vector<unsigned int>> *__for_range_1; // [rsp+20h] [rbp-320h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::reference v35; // [rsp+28h] [rbp-318h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *stage_id; // [rsp+30h] [rbp-310h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *order_vec_0; // [rsp+38h] [rbp-308h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig>,false,false>::reference v38; // [rsp+40h] [rbp-300h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig> >::type *id; // [rsp+48h] [rbp-2F8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig> >::type *camp_challenge_config; // [rsp+50h] [rbp-2F0h]
  std::map<unsigned int,std::vector<unsigned int>>::mapped_type *order_vec; // [rsp+58h] [rbp-2E8h]
  const data::ActivityVintageCampChallengeExcelConfig *next_camp_config_ptr; // [rsp+60h] [rbp-2E0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-2D8h]
  char v44[720]; // [rsp+70h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 4 14 watcher_id:511 64 4 5 i:524 80 8 15 __for_begin:484 112 8 13 __for_end:484 144 8 15 _"
                        "_for_begin:511 176 8 13 __for_end:511 208 8 15 __for_begin:522 240 8 13 __for_end:522 272 32 9 <"
                        "unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 9 <unknown> 592 48 20 s"
                        "tage_orders_map:483";
  *(_QWORD *)(v2 + 16) = ActivityVintageExcelConfigMgr::checkVintageChallengeData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
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
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862735] = -219021312;
  v4[536862736] = 62194;
  v4[536862737] = -219021312;
  v4[536862738] = 62194;
  v4[536862740] = -202116109;
  ret = 0;
  std::map<unsigned int,std::vector<unsigned int>>::map((std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 592));
  __for_range = &this->activity_vintage_camp_challenge_excel_config_map;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageCampChallengeExcelConfig>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::ActivityVintageCampChallengeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityVintageCampChallengeExcelConfig>::const_iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::ActivityVintageCampChallengeExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 112);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig>,false> *)(v2 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig>,false> *)(v2 + 112)) )
      break;
    v38 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig>,false,false> *const)(v2 + 80));
    id = std::get<0ul,unsigned int const,data::ActivityVintageCampChallengeExcelConfig>(v38);
    camp_challenge_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityVintageCampChallengeExcelConfig>(v38);
    order_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                  (std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 592),
                  &camp_challenge_config->open_stage_id);
    std::vector<unsigned int>::push_back(order_vec, &camp_challenge_config->open_order);
    p_activity_group_links_config_mgr = &txt_config_mgr->activity_group_links_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&camp_challenge_config->group_bundle_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&camp_challenge_config->group_bundle_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&camp_challenge_config->group_bundle_id);
    }
    if ( !data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
            p_activity_group_links_config_mgr,
            camp_challenge_config->group_bundle_id) )
    {
      *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 272, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 272),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "checkVintageChallengeData",
        491);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 272),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
             v7,
             (const char (*)[66])"[VINTAGE] findGroupLinksBundleExcelConfig fails, group_bundle_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v8,
        &camp_challenge_config->group_bundle_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v9 = this;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    next_camp_config_ptr = data::ActivityVintageExcelConfigMgrBase::findActivityVintageCampChallengeExcelConfig(
                             v9,
                             *id + 1);
    if ( next_camp_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&camp_challenge_config->open_stage_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)camp_challenge_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&camp_challenge_config->open_stage_id >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&camp_challenge_config->open_stage_id);
      }
      open_stage_id = camp_challenge_config->open_stage_id;
      if ( *(_BYTE *)(((unsigned __int64)&next_camp_config_ptr->open_stage_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)next_camp_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&next_camp_config_ptr->open_stage_id >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&next_camp_config_ptr->open_stage_id);
      }
      if ( open_stage_id == next_camp_config_ptr->open_stage_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&camp_challenge_config->open_day >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&camp_challenge_config->open_day >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&camp_challenge_config->open_day);
        }
        open_day = camp_challenge_config->open_day;
        if ( *(_BYTE *)(((unsigned __int64)&next_camp_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&next_camp_config_ptr->open_day >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&next_camp_config_ptr->open_day);
        }
        if ( open_day != next_camp_config_ptr->open_day )
        {
          *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 336) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 336, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 336),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
            "checkVintageChallengeData",
            500);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 336),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  v12,
                  (const char (*)[39])"[VINTAGE] camp open_day not same,  id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
          *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
    }
    p_reward_config_mgr = &txt_config_mgr->reward_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&camp_challenge_config->reward_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)camp_challenge_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&camp_challenge_config->reward_id >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&camp_challenge_config->reward_id);
    }
    reward_id = camp_challenge_config->reward_id;
    if ( !data::RewardExcelConfigMgrBase::findRewardExcelConfig(p_reward_config_mgr, reward_id) )
    {
      *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 400) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 400, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "checkVintageChallengeData",
        507);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 400),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              v16,
              (const char (*)[50])"[VINTAGE] findRewardExcelConfig fails, reward_id:");
      reward_id = (__int64)&camp_challenge_config->reward_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &camp_challenge_config->reward_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
      *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &camp_challenge_config->watcher_ids;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, reward_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 144) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, reward_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 176) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v18 = (char *)(v2 + 176);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 144),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 176)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v19 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 144));
      v20 = (int *)v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      v21 = *v20;
      v22 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v22 != 0 && v22 <= 3 )
      {
        LOBYTE(v18) = v22 != 0;
        __asan_report_store4(v2 + 48, v18);
      }
      *(_DWORD *)(v2 + 48) = v21;
      if ( !WatcherExcelConfigMgr::findWatcherConfig(&txt_config_mgr->watcher_config_mgr, *(_DWORD *)(v2 + 48)) )
      {
        *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 464) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 79) & 7) >= *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 464, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 464),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
          "checkVintageChallengeData",
          515);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 464),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v24 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                v23,
                (const char (*)[47])"[VINTAGE] findWatcherConfig fails, watcher_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 464));
        *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 144));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig>,false,false> *const)(v2 + 80));
  }
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  __for_range_1 = (std::map<unsigned int,std::vector<unsigned int>> *)(v2 + 592);
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 208, v5);
  *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 208) = std::map<unsigned int,std::vector<unsigned int>>::begin(__for_range_1);
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 240, v5);
  *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 240) = std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_1);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 208),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 240)) )
  {
    v35 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 208));
    stage_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v35);
    order_vec_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v35);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 64, v2 + 240);
    for ( *(_DWORD *)(v2 + 64) = 1; ; ++*(_DWORD *)(v2 + 64) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 64);
      v25 = *(unsigned int *)(v2 + 64);
      if ( v25 > std::vector<unsigned int>::size(order_vec_0) )
        break;
      if ( !common::tools::MiscUtils::isContains<unsigned int>(order_vec_0, (const unsigned int *)(v2 + 64)) )
      {
        *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 528) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 559) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 559) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 528, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 528),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
          "checkVintageChallengeData",
          528);
        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 528),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v27 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                v26,
                (const char (*)[37])"[VINTAGE] not consecutive, stage_id:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, stage_id);
        v29 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])", idx:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 528));
        *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 64);
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 208));
  }
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
  std::map<unsigned int,std::vector<unsigned int>>::~map((std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 592));
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = -168430091;
  }
  return ret;
};

// Line 538: range 0000000012E4BBA6-0000000012E4BDA1
__int64 __fastcall ActivityVintageExcelConfigMgr::getHuntingStageIdByGalleryId(
        const ActivityVintageExcelConfigMgr *const this,
        __int64 gallery_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_gallery_hunting_stage_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gallery_id:537 64 8 8 iter:539 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageExcelConfigMgr::getHuntingStageIdByGalleryId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gallery_id;
  p_gallery_hunting_stage_map = &this->gallery_hunting_stage_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gallery_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_gallery_hunting_stage_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->gallery_hunting_stage_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  else
  {
    result = 0LL;
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

// Line 549: range 0000000012E4BDA2-0000000012E4C4DF
__int64 __fastcall ActivityVintageExcelConfigMgr::getVintageHuntingTransferPosAndRot(
        const ActivityVintageExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t stage_id,
        unsigned __int64 pos,
        unsigned __int64 rot)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  const data::ActivityVintageHuntingExcelConfig *hunting_stage_config_ptr; // [rsp+38h] [rbp-138h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+40h] [rbp-130h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+48h] [rbp-128h]
  char v19[288]; // [rsp+50h] [rbp-120h] BYREF

  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 12 stage_id:548 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ActivityVintageExcelConfigMgr::getVintageHuntingTransferPosAndRot;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862723] = -218959118;
  v7[536862725] = -218959118;
  v7[536862727] = -202116109;
  *(_DWORD *)(v5 + 48) = stage_id;
  hunting_stage_config_ptr = data::ActivityVintageExcelConfigMgrBase::findActivityVintageHuntingExcelConfig(
                               this,
                               *(unsigned int *)(v5 + 48));
  if ( hunting_stage_config_ptr )
  {
    p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&hunting_stage_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&hunting_stage_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&hunting_stage_config_ptr->group_id);
    }
    group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, hunting_stage_config_ptr->group_id);
    if ( group_script_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&hunting_stage_config_ptr->point_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)hunting_stage_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hunting_stage_config_ptr->point_id >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&hunting_stage_config_ptr->point_id);
      }
      point_script_config_ptr = GroupScriptConfig::findPointConfig(
                                  group_script_config_ptr,
                                  hunting_stage_config_ptr->point_id);
      if ( point_script_config_ptr )
      {
        if ( (char)(pos & 7) >= *(_BYTE *)((pos >> 3) + 0x7FFF8000) && *(_BYTE *)((pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((pos + 11) & 7) >= *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(pos, 12LL);
        }
        if ( (((unsigned __int8)point_script_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3)
                                                                              + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)point_script_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z
                                                                                 + 3) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load_n(&point_script_config_ptr->pos, 12LL);
        }
        *(_QWORD *)pos = *(_QWORD *)&point_script_config_ptr->pos.x;
        *(float *)(pos + 8) = point_script_config_ptr->pos.z;
        if ( (char)(rot & 7) >= *(_BYTE *)((rot >> 3) + 0x7FFF8000) && *(_BYTE *)((rot >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((rot + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((rot + 11) & 7) >= *(_BYTE *)(((rot + 11) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(rot, 12LL);
        }
        if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                                 + 3) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
        }
        *(_QWORD *)rot = *(_QWORD *)&point_script_config_ptr->rot.x;
        *(float *)(rot + 8) = point_script_config_ptr->rot.z;
        result = 0LL;
      }
      else
      {
        if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
          "getVintageHuntingTransferPosAndRot",
          565);
        v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                (common::milog::MiLogStream *const)(v5 + 192),
                (const char (*)[50])"[Vintage] findPointConfig failed, born_point_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &hunting_stage_config_ptr->point_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 192));
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      if ( *(char *)(((v5 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
        "getVintageHuntingTransferPosAndRot",
        559);
      v11 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              (common::milog::MiLogStream *const)(v5 + 128),
              (const char (*)[51])"[Vintage] findGroupScriptConfig failed, group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &hunting_stage_config_ptr->group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 128));
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    if ( *(char *)(((v5 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityVintageExcelConfig.cpp",
      "getVintageHuntingTransferPosAndRot",
      553);
    v8 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           (common::milog::MiLogStream *const)(v5 + 64),
           (const char (*)[66])"[Vintage] findActivityVintageHuntingExcelConfig failed, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 64));
    result = 0xFFFFFFFFLL;
  }
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 576: range 0000000012E4C4E0-0000000012E4C6DB
__int64 __fastcall ActivityVintageExcelConfigMgr::findCampNextGroupBundleId(
        const ActivityVintageExcelConfigMgr *const this,
        __int64 group_bundle_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_camp_next_bundle_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 19 group_bundle_id:575 64 8 8 iter:577 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageExcelConfigMgr::findCampNextGroupBundleId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_bundle_id;
  p_camp_next_bundle_map = &this->camp_next_bundle_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_bundle_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_camp_next_bundle_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->camp_next_bundle_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::cend(v6);
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

// Line 587: range 0000000012E4C6DC-0000000012E4C8BE
const data::ActivityVintageCampChallengeExcelConfig *__fastcall ActivityVintageExcelConfigMgr::findCampConfigByGroupBundleId(
        const ActivityVintageExcelConfigMgr *const this,
        __int64 group_bundle_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,const data::ActivityVintageCampChallengeExcelConfig*> *p_camp_bundle_config_map; // rdx
  std::map<unsigned int,const data::ActivityVintageCampChallengeExcelConfig*> *v6; // rdx
  bool v7; // al
  const data::ActivityVintageCampChallengeExcelConfig *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,const data::ActivityVintageCampChallengeExcelConfig*> >::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 19 group_bundle_id:586 64 8 8 iter:588 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageExcelConfigMgr::findCampConfigByGroupBundleId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_bundle_id;
  p_camp_bundle_config_map = &this->camp_bundle_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_bundle_id);
  *(std::map<unsigned int,const data::ActivityVintageCampChallengeExcelConfig*>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::ActivityVintageCampChallengeExcelConfig const*>::find(p_camp_bundle_config_map, (const std::map<unsigned int,const data::ActivityVintageCampChallengeExcelConfig*>::key_type *)(v2 + 48));
  v6 = &this->camp_bundle_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,const data::ActivityVintageCampChallengeExcelConfig*>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::ActivityVintageCampChallengeExcelConfig const*>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,const data::ActivityVintageCampChallengeExcelConfig*> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,const data::ActivityVintageCampChallengeExcelConfig*> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityVintageCampChallengeExcelConfig const*>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,const data::ActivityVintageCampChallengeExcelConfig*> > *const)(v2 + 64));
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

// Line 598: range 0000000012E4C8C0-0000000012E4CA68
_BOOL8 __fastcall ActivityVintageExcelConfigMgr::isPresentStageValid(
        const ActivityVintageExcelConfigMgr *const this,
        __int64 present_stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *p_stage_present_map; // rdx
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *v6; // rdx
  _BOOL8 result; // rax
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 20 present_stage_id:597 64 8 8 iter:599 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageExcelConfigMgr::isPresentStageValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = present_stage_id;
  p_stage_present_map = &this->stage_present_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, present_stage_id);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                               p_stage_present_map,
                                                                                               (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->stage_present_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(v6);
  result = !std::operator==(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 64),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 96));
  if ( v8 == (char *)v2 )
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

// Line 610: range 0000000012E4CA6A-0000000012E4CC65
__int64 __fastcall ActivityVintageExcelConfigMgr::getPresentOpenDayByStageId(
        const ActivityVintageExcelConfigMgr *const this,
        __int64 present_stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_present_stage_open_day_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 20 present_stage_id:609 64 8 8 iter:611 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageExcelConfigMgr::getPresentOpenDayByStageId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = present_stage_id;
  p_present_stage_open_day_map = &this->present_stage_open_day_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, present_stage_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_present_stage_open_day_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->present_stage_open_day_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
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

// Line 621: range 0000000012E4CC66-0000000012E4CE61
__int64 __fastcall ActivityVintageExcelConfigMgr::getCampOpenDayByStageId(
        const ActivityVintageExcelConfigMgr *const this,
        __int64 camp_stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_camp_stage_open_day_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 17 camp_stage_id:620 64 8 8 iter:622 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageExcelConfigMgr::getCampOpenDayByStageId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = camp_stage_id;
  p_camp_stage_open_day_map = &this->camp_stage_open_day_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, camp_stage_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_camp_stage_open_day_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->camp_stage_open_day_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
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

// Line 632: range 0000000012E4CE62-0000000012E4D05D
__int64 __fastcall ActivityVintageExcelConfigMgr::getTypeIdByMonsterId(
        const ActivityVintageExcelConfigMgr *const this,
        __int64 monster_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_monster_id_type_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 monster_id:631 64 8 8 iter:633 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageExcelConfigMgr::getTypeIdByMonsterId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = monster_id;
  p_monster_id_type_map = &this->monster_id_type_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, monster_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_monster_id_type_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->monster_id_type_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
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
