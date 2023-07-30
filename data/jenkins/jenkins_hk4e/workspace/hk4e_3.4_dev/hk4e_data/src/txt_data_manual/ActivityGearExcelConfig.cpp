// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityGearExcelConfig.cpp

// Line 19: range 0000000012C374BC-0000000012C37931
int32_t __cdecl ActivityGearExcelConfigMgr::rewriteConfig(
        ActivityGearExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityGearExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( ActivityGearExcelConfigMgr::rewriteGearConfigData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
      "rewriteConfig",
      22);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v5,
      (const char (*)[37])"[GEAR] rewriteGearConfigData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityGearExcelConfigMgr::rewriteGearLevelConfigData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
      "rewriteConfig",
      28);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v7,
      (const char (*)[42])"[GEAR] rewriteGearLevelConfigData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityGearExcelConfigMgr::rewriteGearJigSawConfigData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
      "rewriteConfig",
      34);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      v8,
      (const char (*)[43])"[GEAR] rewriteGearJigSawConfigData failed.");
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

// Line 42: range 0000000012C37932-0000000012C37D06
int32_t __cdecl ActivityGearExcelConfigMgr::rewriteGearConfigData(
        ActivityGearExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::ActivityGearExcelConfig **v6; // r8
  std::map<unsigned int,const data::ActivityGearExcelConfig*> *p_activity_gear_config_map; // rcx
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,const data::ActivityGearExcelConfig*> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::ActivityGearExcelConfigMap *__for_range; // [rsp+10h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGearExcelConfig> >::type *gear_excel_config; // [rsp+28h] [rbp-F8h]
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 14 __for_begin:43 64 8 12 __for_end:43 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGearExcelConfigMgr::rewriteGearConfigData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  __for_range = &this->activity_gear_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGearExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityGearExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGearExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityGearExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGearExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGearExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGearExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_18;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ActivityGearExcelConfig>(v14);
    gear_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGearExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGearExcelConfig>(v14);
    p_activity_gear_config_map = &this->activity_gear_config_map_;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 64);
    *(_QWORD *)(v3 + 96) = gear_excel_config;
    v8 = std::map<unsigned int,data::ActivityGearExcelConfig const*>::emplace<unsigned int const&,data::ActivityGearExcelConfig const*>(
           p_activity_gear_config_map,
           &gear_excel_config->activity_id,
           (const data::ActivityGearExcelConfig **)(v3 + 96),
           (const unsigned int *)p_activity_gear_config_map,
           v6);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v8.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
    "rewriteGearConfigData",
    47);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          v9,
          (const char (*)[44])"[GEAR] dumplicate activity_id, activity_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &gear_excel_config->activity_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  v2 = -1;
  v11 = 0;
LABEL_18:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 56: range 0000000012C37D08-0000000012C3808E
int32_t __cdecl ActivityGearExcelConfigMgr::rewriteGearLevelConfigData(
        ActivityGearExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::map<unsigned int,unsigned int>::key_type *v5; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  int32_t result; // eax
  data::ActivityGearLevelExcelConfigMap *__for_range; // [rsp+18h] [rbp-F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false,false>::reference v9; // [rsp+20h] [rbp-F0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityGearLevelExcelConfig> >::type *level_id; // [rsp+28h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGearLevelExcelConfig> >::type *gear_level_excel_config; // [rsp+30h] [rbp-E0h]
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::mapped_type *gear_cnt_map; // [rsp+38h] [rbp-D8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-D0h]
  char v14[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 14 __for_begin:57 64 8 12 __for_end:57 96 8 14 __for_begin:60 128 8 12 __for_end:60";
  *(_QWORD *)(v2 + 16) = ActivityGearExcelConfigMgr::rewriteGearLevelConfigData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  __for_range = &this->activity_gear_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGearLevelExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityGearLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGearLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGearLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false,false> *const)(v2 + 32));
    level_id = std::get<0ul,unsigned int const,data::ActivityGearLevelExcelConfig>(v9);
    gear_level_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGearLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGearLevelExcelConfig>(v9);
    gear_cnt_map = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                     &this->level_gear_data_map_,
                     level_id);
    __for_range_0 = &gear_level_excel_config->provided_gears;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, level_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 96) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, level_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128)) )
    {
      v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
      v6 = std::map<unsigned int,unsigned int>::operator[](gear_cnt_map, v5);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      ++*v6;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
  if ( v14 == (char *)v2 )
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

// Line 70: range 0000000012C38090-0000000012C38526
int32_t __cdecl ActivityGearExcelConfigMgr::rewriteGearJigSawConfigData(
        ActivityGearExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  data::ActivityGearJigsawExcelConfigMap *p_activity_gear_jigsaw_excel_config_map; // rdx
  data::ActivityGearJigsawExcelConfigMap *v8; // rdx
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearJigsawExcelConfig>,false,false>::pointer v12; // rax
  uint32_t quest_state_trigger_id; // ecx
  char v14; // al
  char v15[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 7 iter:77 64 8 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGearExcelConfigMgr::rewriteGearJigSawConfigData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( std::unordered_map<unsigned int,data::ActivityGearJigsawExcelConfig>::size(&this->activity_gear_jigsaw_excel_config_map) == 1 )
  {
    p_activity_gear_jigsaw_excel_config_map = &this->activity_gear_jigsaw_excel_config_map;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 32, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::ActivityGearJigsawExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityGearJigsawExcelConfig>::begin(p_activity_gear_jigsaw_excel_config_map);
    v8 = &this->activity_gear_jigsaw_excel_config_map;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::ActivityGearJigsawExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGearJigsawExcelConfig>::end(v8);
    v9 = (char *)(v2 + 64);
    v10 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityGearJigsawExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGearJigsawExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGearJigsawExcelConfig>,false> *)(v2 + 64));
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
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
        "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
        "rewriteGearJigSawConfigData",
        80);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
        v11,
        (const char (*)[52])"[GEAR] activity_gear_jigsaw_excel_config_map empty.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      result = -1;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearJigsawExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearJigsawExcelConfig>,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v12->second.quest_state_trigger_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v12->second.quest_state_trigger_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v12->second.quest_state_trigger_id);
      }
      quest_state_trigger_id = v12->second.quest_state_trigger_id;
      v14 = *(_BYTE *)(((unsigned __int64)&this->quest_state_trigger_id_ >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v9) = v14 != 0;
        __asan_report_store4(&this->quest_state_trigger_id_, v9);
      }
      this->quest_state_trigger_id_ = quest_state_trigger_id;
      result = 0;
    }
  }
  else
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
      "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
      "rewriteGearJigSawConfigData",
      73);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      v5,
      (const char (*)[49])"[GEAR] ActivityGearJigsawData size should  be 1.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = -1;
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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

// Line 90: range 0000000012C38528-0000000012C38AD2
int32_t __cdecl ActivityGearExcelConfigMgr::checkConfig(
        ActivityGearExcelConfigMgr *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityGearExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( ActivityGearExcelConfigMgr::checkGearConfigData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
      "checkConfig",
      93);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v5,
      (const char (*)[28])"checkGearConfigData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityGearExcelConfigMgr::checkGearLevelConfigData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
      "checkConfig",
      99);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v7,
      (const char (*)[33])"checkGearLevelConfigData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityGearExcelConfigMgr::checkGearGadgetConfigData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
      "checkConfig",
      105);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v8,
      (const char (*)[34])"checkGearGadgetConfigData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivityGearExcelConfigMgr::checkJigsawDetailConfigData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
      "checkConfig",
      111);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v9,
      (const char (*)[36])"checkJigsawDetailConfigData failed.");
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

// Line 119: range 0000000012C38AD4-0000000012C393F0
int32_t __cdecl ActivityGearExcelConfigMgr::checkGearConfigData(
        ActivityGearExcelConfigMgr *const this,
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
  _BOOL4 v10; // eax
  NewActivityExcelConfigMgr *v11; // rcx
  data::NewActivityType ActivitiyTypeByActivityId; // edx
  char v13; // al
  __int64 activity_id; // rsi
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v17; // rax
  ActivityGearExcelConfigMgr *v18; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  int v21; // edx
  int v22; // eax
  int32_t result; // eax
  data::ActivityGearExcelConfigMap *__for_range; // [rsp+18h] [rbp-1E8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearExcelConfig>,false,false>::reference v26; // [rsp+20h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGearExcelConfig> >::type *gear_excel_config; // [rsp+30h] [rbp-1D0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-1C0h]
  const unsigned int *level_id; // [rsp+48h] [rbp-1B8h]
  char v30[432]; // [rsp+50h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 17 activity_type:131 64 8 15 __for_begin:120 96 8 13 __for_end:120 128 8 15 __for_begin:1"
                        "38 160 8 13 __for_end:138 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGearExcelConfigMgr::checkGearConfigData;
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
  __for_range = &this->activity_gear_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGearExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityGearExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGearExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityGearExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGearExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGearExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGearExcelConfig>,false> *)(v3 + 96)) )
  {
    v26 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::ActivityGearExcelConfig>(v26);
    gear_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGearExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGearExcelConfig>(v26);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    p_activity_id = &gear_excel_config->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_activity_id);
    }
    if ( data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
           p_new_activity_config_mgr,
           gear_excel_config->activity_id) )
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v11 = &txt_config_mgr->new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&gear_excel_config->activity_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gear_excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gear_excel_config->activity_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&gear_excel_config->activity_id);
      }
      activity_id = gear_excel_config->activity_id;
      ActivitiyTypeByActivityId = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(v11, activity_id);
      v13 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(activity_id) = v13 != 0;
      if ( v13 != 0 && v13 <= 3 )
        __asan_report_store4(v3 + 48, activity_id);
      *(_DWORD *)(v3 + 48) = ActivitiyTypeByActivityId;
      if ( *(_DWORD *)(v3 + 48) == 2802 )
      {
        __for_range_0 = &gear_excel_config->gear_level_id_list;
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 128, activity_id);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, activity_id);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
          {
            v21 = 1;
            goto LABEL_38;
          }
          v17 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
          level_id = v17;
          v18 = this;
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v17);
          }
          if ( !data::ActivityGearExcelConfigMgrBase::findActivityGearLevelExcelConfig(v18, *level_id) )
            break;
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
          "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
          "checkGearConfigData",
          142);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                v19,
                (const char (*)[57])"[GEAR] findActivityGearLevelExcelConfig fails, level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, level_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v21 = 0;
LABEL_38:
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        v10 = v21 == 1;
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
          "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
          "checkGearConfigData",
          134);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                v15,
                (const char (*)[43])"[GEAR] activity_type error, activity_type:");
        common::milog::MiLogStream::operator<<<data::NewActivityType,(data::NewActivityType*)0>(
          v16,
          (const data::NewActivityType *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v10 = 0;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
        "checkGearConfigData",
        126);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             v8,
             (const char (*)[28])"[GEAR] invalid activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &gear_excel_config->activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !v10 )
    {
      v22 = 0;
      goto LABEL_43;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearExcelConfig>,false,false> *const)(v3 + 64));
  }
  v22 = 1;
LABEL_43:
  if ( v22 == 1 )
    v2 = 0;
  result = v2;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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

// Line 152: range 0000000012C393F2-0000000012C398F4
int32_t __cdecl ActivityGearExcelConfigMgr::checkGearLevelConfigData(
        ActivityGearExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rax
  ActivityGearExcelConfigMgr *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // edx
  int v12; // eax
  int32_t result; // eax
  data::ActivityGearLevelExcelConfigMap *__for_range; // [rsp+10h] [rbp-140h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false,false>::reference v15; // [rsp+18h] [rbp-138h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-120h]
  const unsigned int *gear_id; // [rsp+38h] [rbp-118h]
  char v18[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 15 __for_begin:153 64 8 13 __for_end:153 96 8 15 __for_begin:155 128 8 13 __for_end:155 1"
                        "60 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGearExcelConfigMgr::checkGearLevelConfigData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -202116109;
  __for_range = &this->activity_gear_level_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGearLevelExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityGearLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGearLevelExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityGearLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false> *)(v3 + 64)) )
      break;
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ActivityGearLevelExcelConfig>(v15);
    __for_range_0 = &std::get<1ul,unsigned int const,data::ActivityGearLevelExcelConfig>(v15)->provided_gears;
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
        goto LABEL_24;
      }
      v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
      gear_id = v7;
      v8 = this;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      if ( !data::ActivityGearExcelConfigMgrBase::findActivityGearGadgetGearExcelConfig(v8, *gear_id) )
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
      "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
      "checkGearLevelConfigData",
      159);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
            v9,
            (const char (*)[61])"[GEAR] findActivityGearGadgetGearExcelConfig fails, gear_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, gear_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v11 = 0;
LABEL_24:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v11 != 1 )
    {
      v12 = 0;
      goto LABEL_28;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false,false> *const)(v3 + 32));
  }
  v12 = 1;
LABEL_28:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v18 == (char *)v3 )
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

// Line 169: range 0000000012C398F6-0000000012C39E32
int32_t __cdecl ActivityGearExcelConfigMgr::checkGearGadgetConfigData(
        ActivityGearExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  uint32_t *p_gadget_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  data::ActivityGearGadgetGearExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearGadgetGearExcelConfig>,false,false>::reference v16; // [rsp+18h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGearGadgetGearExcelConfig> >::type *gear_gadget_excel_config; // [rsp+28h] [rbp-118h]
  char v18[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:170 64 8 13 __for_end:170 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGearExcelConfigMgr::checkGearGadgetConfigData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->activity_gear_gadget_gear_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGearGadgetGearExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityGearGadgetGearExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGearGadgetGearExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityGearGadgetGearExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGearGadgetGearExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGearGadgetGearExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGearGadgetGearExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_24;
    }
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearGadgetGearExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearGadgetGearExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ActivityGearGadgetGearExcelConfig>(v16);
    gear_gadget_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGearGadgetGearExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGearGadgetGearExcelConfig>(v16);
    p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
    p_gadget_id = &gear_gadget_excel_config->gadget_id;
    if ( *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_gadget_id);
    }
    if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
            p_gadget_config_mgr,
            gear_gadget_excel_config->gadget_id) )
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
        "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
        "checkGearGadgetConfigData",
        174);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             v8,
             (const char (*)[47])"[GEAR] findGadgetExcelConfig fails, gadget_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &gear_gadget_excel_config->gadget_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v10 = 0;
      goto LABEL_24;
    }
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&gear_gadget_excel_config->material_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gear_gadget_excel_config->material_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gear_gadget_excel_config->material_id);
    }
    if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
            p_material_config_mgr,
            gear_gadget_excel_config->material_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearGadgetGearExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearGadgetGearExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
    "checkGearGadgetConfigData",
    179);
  v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v13 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
          v12,
          (const char (*)[51])"[GEAR] findMaterialExcelConfig fails, material_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &gear_gadget_excel_config->material_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v10 = 0;
LABEL_24:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v18 == (char *)v3 )
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

// Line 187: range 0000000012C39E34-0000000012C3A37A
int32_t __cdecl ActivityGearExcelConfigMgr::checkJigsawDetailConfigData(
        ActivityGearExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  uint32_t *p_gadget_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  data::ActivityGearGadgetJigsawExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearGadgetJigsawExcelConfig>,false,false>::reference v16; // [rsp+18h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGearGadgetJigsawExcelConfig> >::type *jigsaw_detail_data_config; // [rsp+28h] [rbp-118h]
  char v18[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:188 64 8 13 __for_end:188 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGearExcelConfigMgr::checkJigsawDetailConfigData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->activity_gear_gadget_jigsaw_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGearGadgetJigsawExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityGearGadgetJigsawExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGearGadgetJigsawExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityGearGadgetJigsawExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGearGadgetJigsawExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGearGadgetJigsawExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGearGadgetJigsawExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_24;
    }
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearGadgetJigsawExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearGadgetJigsawExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ActivityGearGadgetJigsawExcelConfig>(v16);
    jigsaw_detail_data_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGearGadgetJigsawExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGearGadgetJigsawExcelConfig>(v16);
    p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
    p_gadget_id = &jigsaw_detail_data_config->gadget_id;
    if ( *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_gadget_id);
    }
    if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
            p_gadget_config_mgr,
            jigsaw_detail_data_config->gadget_id) )
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
        "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
        "checkJigsawDetailConfigData",
        192);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             v8,
             (const char (*)[47])"[GEAR] findGadgetExcelConfig fails, gadget_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &jigsaw_detail_data_config->gadget_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v10 = 0;
      goto LABEL_24;
    }
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&jigsaw_detail_data_config->material_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)jigsaw_detail_data_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&jigsaw_detail_data_config->material_id >> 3)
                                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(&jigsaw_detail_data_config->material_id);
    }
    if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
            p_material_config_mgr,
            jigsaw_detail_data_config->material_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearGadgetJigsawExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGearGadgetJigsawExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityGearExcelConfig.cpp",
    "checkJigsawDetailConfigData",
    197);
  v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v13 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
          v12,
          (const char (*)[51])"[GEAR] findMaterialExcelConfig fails, material_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &jigsaw_detail_data_config->material_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v10 = 0;
LABEL_24:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v18 == (char *)v3 )
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

// Line 205: range 0000000012C3A37C-0000000012C3A6A3
__int64 __fastcall ActivityGearExcelConfigMgr::findGearCntByLevelIdAndGearId(
        const ActivityGearExcelConfigMgr *const this,
        __int64 level_id,
        uint32_t gear_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *p_level_gear_data_map; // rdx
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::map<unsigned int,unsigned int> *p_second; // rdx
  std::map<unsigned int,unsigned int> *v11; // rdx
  bool v12; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v13; // rdx
  unsigned int *v14; // rax
  char v16[224]; // [rsp+10h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 12 level_id:204 48 4 11 gear_id:204 64 8 8 iter:206 96 8 9 <unknown> 128 8 12 sub_iter:21"
                        "2 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGearExcelConfigMgr::findGearCntByLevelIdAndGearId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = level_id;
  *(_DWORD *)(v3 + 48) = gear_id;
  p_level_gear_data_map = &this->level_gear_data_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, level_id);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                               p_level_gear_data_map,
                                                                                               (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->level_gear_data_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 128) = std::map<unsigned int,unsigned int>::find(
                                                                           p_second,
                                                                           (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v11 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 160) = std::map<unsigned int,unsigned int>::end(v11);
    v12 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      result = 0LL;
    }
    else
    {
      v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 128));
      v14 = &v13->second;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      result = v13->second;
    }
  }
  if ( v16 == (char *)v3 )
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
  return result;
};

// Line 222: range 0000000012C3A6A4-0000000012C3A886
const data::ActivityGearExcelConfig *__fastcall ActivityGearExcelConfigMgr::findActivityGearExcelConfigByActivityId(
        const ActivityGearExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,const data::ActivityGearExcelConfig*> *p_activity_gear_config_map; // rdx
  std::map<unsigned int,const data::ActivityGearExcelConfig*> *v6; // rdx
  bool v7; // al
  const data::ActivityGearExcelConfig *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,const data::ActivityGearExcelConfig*> >::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:221 64 8 8 iter:223 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGearExcelConfigMgr::findActivityGearExcelConfigByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_activity_gear_config_map = &this->activity_gear_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,const data::ActivityGearExcelConfig*>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::ActivityGearExcelConfig const*>::find(
                                                                                                p_activity_gear_config_map,
                                                                                                (const std::map<unsigned int,const data::ActivityGearExcelConfig*>::key_type *)(v2 + 48));
  v6 = &this->activity_gear_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,const data::ActivityGearExcelConfig*>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::ActivityGearExcelConfig const*>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,const data::ActivityGearExcelConfig*> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,const data::ActivityGearExcelConfig*> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityGearExcelConfig const*>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,const data::ActivityGearExcelConfig*> > *const)(v2 + 64));
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

// Line 233: range 0000000012C3A888-0000000012C3A8D4
uint32_t __cdecl ActivityGearExcelConfigMgr::getJigsawQuestStateTriggerId(const ActivityGearExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_state_trigger_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_state_trigger_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->quest_state_trigger_id_);
  }
  return this->quest_state_trigger_id_;
};
