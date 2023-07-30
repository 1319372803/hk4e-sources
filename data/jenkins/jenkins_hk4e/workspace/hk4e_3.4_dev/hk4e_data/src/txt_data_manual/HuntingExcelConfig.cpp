// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/HuntingExcelConfig.cpp

// Line 20: range 000000001448306A-00000000144832CC
int32_t __cdecl HuntingExcelConfigMgr::rewriteConfig(HuntingExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = HuntingExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( HuntingExcelConfigMgr::rewriteHuntingRefreshConfig(this, txt_config_mgr)
    || HuntingExcelConfigMgr::rewriteHuntingRegionConfig(this, txt_config_mgr)
    || HuntingExcelConfigMgr::rewriteHuntingMonsterConfig(this, txt_config_mgr)
    || HuntingExcelConfigMgr::rewriteHuntingClueMonsterConfig(this, txt_config_mgr)
    || HuntingExcelConfigMgr::rewriteHuntingClueGatherConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HuntingExcelConfig.cpp",
      "rewriteConfig",
      27);
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

// Line 34: range 00000000144832CE-0000000014483560
int32_t __cdecl HuntingExcelConfigMgr::rewriteHuntingRefreshConfig(
        HuntingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int> *v5; // rdx
  int32_t result; // eax
  data::HuntingRefreshExcelConfigMap *__for_range; // [rsp+18h] [rbp-A8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false,false>::reference v8; // [rsp+20h] [rbp-A0h]
  std::tuple_element<0,std::pair<unsigned int const,data::HuntingRefreshExcelConfig> >::type *refresh_id; // [rsp+28h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HuntingRefreshExcelConfig> >::type *refresh_config; // [rsp+30h] [rbp-90h]
  std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::mapped_type *difficulty_vec; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false>::__node_type *)"2 32 8 14 __for_begin:35 64 8 12 __for_end:35";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false>::__node_type *)HuntingExcelConfigMgr::rewriteHuntingRefreshConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->hunting_refresh_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false,false>::operator*(v2 + 4);
    refresh_id = std::get<0ul,unsigned int const,data::HuntingRefreshExcelConfig>(v8);
    refresh_config = (std::tuple_element<1,const std::pair<unsigned int const,data::HuntingRefreshExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HuntingRefreshExcelConfig>(v8);
    difficulty_vec = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::operator[](
                       &this->city_difficulty_hunting_refresh_config_map_,
                       &refresh_config->city_id);
    if ( !std::vector<std::vector<unsigned int>>::size(difficulty_vec) )
      std::vector<std::vector<unsigned int>>::resize(difficulty_vec, 3uLL);
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config->difficulty >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&refresh_config->difficulty >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&refresh_config->difficulty);
    }
    v5 = std::vector<std::vector<unsigned int>>::operator[](difficulty_vec, (unsigned int)refresh_config->difficulty);
    std::vector<unsigned int>::push_back(v5, refresh_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 48: range 0000000014483562-0000000014484280
int32_t __cdecl HuntingExcelConfigMgr::rewriteHuntingRegionConfig(
        HuntingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  unsigned int *v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  std::unordered_set<unsigned int> *v11; // rax
  HuntingExcelConfigMgr *v12; // rdx
  __int64 v13; // rsi
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // eax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  data::HuntingCluePointType point_type; // ecx
  char v20; // al
  int v21; // eax
  __int64 v22; // rsi
  char *v23; // rsi
  unsigned int *v24; // rax
  int *v25; // rdx
  int v26; // ecx
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // edx
  int32_t result; // eax
  data::HuntingRegionExcelConfigMap *__for_range; // [rsp+10h] [rbp-270h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false,false>::reference v33; // [rsp+18h] [rbp-268h]
  std::tuple_element<0,std::pair<unsigned int const,data::HuntingRegionExcelConfig> >::type *region_id; // [rsp+20h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HuntingRegionExcelConfig> >::type *config; // [rsp+28h] [rbp-258h]
  std::unordered_map<unsigned int,std::map<unsigned int,std::unordered_set<unsigned int>>>::mapped_type *type_map; // [rsp+30h] [rbp-250h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-248h]
  data::HuntingGroupInfoExcelConfig *group_info_config_ptr; // [rsp+40h] [rbp-240h]
  std::map<unsigned int,std::unordered_set<unsigned int>>::mapped_type *group_set; // [rsp+48h] [rbp-238h]
  std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::mapped_type *certain_monster_vec; // [rsp+50h] [rbp-230h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+58h] [rbp-228h]
  data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+60h] [rbp-220h]
  std::vector<std::vector<unsigned int>>::reference montser_vec; // [rsp+68h] [rbp-218h]
  char v44[528]; // [rsp+70h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 4 11 group_id:52 64 4 9 <unknown> 80 4 13 monster_id:76 96 8 14 __for_begin:49 128 8 12 __"
                        "for_end:49 160 8 14 __for_begin:52 192 8 12 __for_end:52 224 8 14 __for_begin:76 256 8 12 __for_"
                        "end:76 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HuntingExcelConfigMgr::rewriteHuntingRegionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -202116109;
  __for_range = &this->hunting_region_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false> *)(v3 + 128)) )
  {
    v33 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false,false> *const)(v3 + 96));
    region_id = std::get<0ul,unsigned int const,data::HuntingRegionExcelConfig>(v33);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::HuntingRegionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HuntingRegionExcelConfig>(v33);
    type_map = std::unordered_map<unsigned int,std::map<unsigned int,std::unordered_set<unsigned int>>>::operator[](
                 &this->hunting_region_clue_type_group_map_,
                 region_id);
    __for_range_0 = &config->clue_group;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, region_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, region_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v3 + 192);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
      {
        v16 = 1;
        goto LABEL_38;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(v3 + 48, v6);
      }
      *(_DWORD *)(v3 + 48) = v9;
      v11 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
              &this->hunting_region_clue_group_map_,
              region_id);
      std::unordered_set<unsigned int>::insert(v11, (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
      v12 = this;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      v13 = *(unsigned int *)(v3 + 48);
      group_info_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig(v12, v13);
      if ( !group_info_config_ptr )
      {
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/HuntingExcelConfig.cpp",
          "rewriteHuntingRegionConfig",
          58);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])byte_1AD837E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v16 = 0;
        goto LABEL_38;
      }
      if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&group_info_config_ptr->point_type);
      }
      if ( group_info_config_ptr->point_type == HUNTING_CLUE_FINAL )
        break;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&group_info_config_ptr->point_type);
      }
      point_type = group_info_config_ptr->point_type;
      v20 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
      if ( v20 != 0 && v20 <= 3 )
      {
        LOBYTE(v13) = v20 != 0;
        __asan_report_store4(v3 + 64, v13);
      }
      *(_DWORD *)(v3 + 64) = point_type;
      group_set = std::map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                    type_map,
                    (std::map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v3 + 64));
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      std::unordered_set<unsigned int>::insert(
        group_set,
        (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
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
      "./src/txt_data_manual/HuntingExcelConfig.cpp",
      "rewriteHuntingRegionConfig",
      63);
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 352),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v18 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v17, (const char (*)[43])byte_1AD83820);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v16 = 0;
LABEL_38:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v16 != 1 )
    {
      v21 = 0;
      goto LABEL_65;
    }
    if ( !std::vector<unsigned int>::empty(&config->certain_final_monster_id) )
    {
      v22 = (__int64)region_id;
      certain_monster_vec = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::operator[](
                              &this->region_certain_monster_id_map_,
                              region_id);
      if ( !std::vector<std::vector<unsigned int>>::size(certain_monster_vec) )
      {
        v22 = 3LL;
        std::vector<std::vector<unsigned int>>::resize(certain_monster_vec, 3uLL);
      }
      __for_range_1 = &config->certain_final_monster_id;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v22);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v22);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v23 = (char *)(v3 + 256);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256)) )
        {
          v30 = 1;
          goto LABEL_61;
        }
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        v24 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
        v25 = (int *)v24;
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v24);
        }
        v26 = *v25;
        v27 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
        if ( v27 != 0 && v27 <= 3 )
        {
          LOBYTE(v23) = v27 != 0;
          __asan_report_store4(v3 + 80, v23);
        }
        *(_DWORD *)(v3 + 80) = v26;
        monster_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingMonsterExcelConfig(
                               this,
                               *(unsigned int *)(v3 + 80));
        if ( !monster_config_ptr )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->difficulty >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->difficulty >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&monster_config_ptr->difficulty);
        }
        montser_vec = std::vector<std::vector<unsigned int>>::operator[](
                        certain_monster_vec,
                        (unsigned int)monster_config_ptr->difficulty);
        std::vector<unsigned int>::push_back(montser_vec, (const std::vector<unsigned int>::value_type *)(v3 + 80));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
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
        "./src/txt_data_manual/HuntingExcelConfig.cpp",
        "rewriteHuntingRegionConfig",
        81);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v29 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v28, (const char (*)[38])byte_1AD83880);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v30 = 0;
LABEL_61:
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      if ( v30 != 1 )
      {
        v21 = 0;
        goto LABEL_65;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false,false> *const)(v3 + 96));
  }
  v21 = 1;
LABEL_65:
  if ( v21 == 1 )
    v2 = 0;
  result = v2;
  if ( v44 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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

// Line 93: range 0000000014484282-00000000144848C2
int32_t __cdecl HuntingExcelConfigMgr::rewriteHuntingMonsterConfig(
        HuntingExcelConfigMgr *const this,
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
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  std::vector<unsigned int> *v15; // rdx
  int32_t result; // eax
  data::HuntingMonsterExcelConfigMap *__for_range; // [rsp+10h] [rbp-160h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-158h]
  const std::vector<unsigned int>::value_type *monster_config_id; // [rsp+20h] [rbp-150h]
  std::tuple_element<1,std::pair<unsigned int const,data::HuntingMonsterExcelConfig> >::type *monster_config; // [rsp+28h] [rbp-148h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-140h]
  std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::mapped_type *difficulty_vec; // [rsp+38h] [rbp-138h]
  char v23[304]; // [rsp+40h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 11 city_id:101 64 8 14 __for_begin:94 96 8 12 __for_end:94 128 8 15 __for_begin:101 160 8"
                        " 13 __for_end:101 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HuntingExcelConfigMgr::rewriteHuntingMonsterConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  __for_range = &this->hunting_monster_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false> *)(v3 + 96)) )
    {
      v9 = 1;
      goto LABEL_35;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false,false> *const)(v3 + 64));
    monster_config_id = std::get<0ul,unsigned int const,data::HuntingMonsterExcelConfig>(__in);
    monster_config = std::get<1ul,unsigned int const,data::HuntingMonsterExcelConfig>(__in);
    if ( std::vector<unsigned int>::empty(&monster_config->city_list) )
      break;
    __for_range_0 = &monster_config->city_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<unsigned int>::iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v10 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160)) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v11 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
      v12 = (int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
      v14 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v10) = v14 != 0;
        __asan_report_store4(v3 + 48, v10);
      }
      *(_DWORD *)(v3 + 48) = v13;
      difficulty_vec = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::operator[](
                         &this->city_difficulty_hunting_monster_config_map_,
                         (const std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::key_type *)(v3 + 48));
      if ( !std::vector<std::vector<unsigned int>>::size(difficulty_vec) )
        std::vector<std::vector<unsigned int>>::resize(difficulty_vec, 3uLL);
      if ( *(_BYTE *)(((unsigned __int64)&monster_config->difficulty >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&monster_config->difficulty >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&monster_config->difficulty);
      }
      v15 = std::vector<std::vector<unsigned int>>::operator[](difficulty_vec, (unsigned int)monster_config->difficulty);
      std::vector<unsigned int>::push_back(v15, monster_config_id);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&monster_config->hunting_finish_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)monster_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config->hunting_finish_type >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&monster_config->hunting_finish_type);
    }
    if ( monster_config->hunting_finish_type == HUNTING_FINISH_TYPE_NONE )
      monster_config->hunting_finish_type = HUNTING_FINISH_TYPE_TARGET_MONSTER;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/HuntingExcelConfig.cpp",
    "rewriteHuntingMonsterConfig",
    98);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 192),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v7, (const char (*)[46])byte_1AD839C0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, monster_config_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  v2 = -1;
  v9 = 0;
LABEL_35:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 121: range 00000000144848C4-00000000144853F5
int32_t __cdecl HuntingExcelConfigMgr::rewriteHuntingClueMonsterConfig(
        HuntingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  std::vector<unsigned int> *v7; // rdx
  char *v8; // rsi
  char *v9; // rsi
  unsigned int *v10; // rax
  int *v11; // rdx
  int v12; // ecx
  char v13; // al
  __int64 v14; // rsi
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // eax
  common::milog::MiLogStream *v18; // rax
  int v19; // eax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *v22; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v23; // rax
  uint32_t *v24; // rdx
  char v25; // cl
  int32_t result; // eax
  uint32_t clue_monster_id; // [rsp+2Ch] [rbp-244h]
  data::HuntingClueMonsterExcelConfigMap *__for_range; // [rsp+30h] [rbp-240h]
  std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range_0; // [rsp+38h] [rbp-238h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::reference v30; // [rsp+40h] [rbp-230h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *monster_group_id; // [rsp+48h] [rbp-228h]
  const std::tuple_element<1,std::pair<unsigned int const,std::vector<unsigned int> > >::type *__for_range_1; // [rsp+58h] [rbp-218h]
  data::HuntingClueMonsterExcelConfig *clue_monster_config_ptr; // [rsp+60h] [rbp-210h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false,false>::reference __in; // [rsp+68h] [rbp-208h]
  const std::vector<unsigned int>::value_type *monster_config_id; // [rsp+70h] [rbp-200h]
  std::tuple_element<1,std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig> >::type *monster_config; // [rsp+78h] [rbp-1F8h]
  char v37[496]; // [rsp+80h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 4 21 monster_config_id:134 64 8 15 __for_begin:122 96 8 13 __for_end:122 128 8 15 __for_be"
                        "gin:131 160 8 13 __for_end:131 192 8 15 __for_begin:134 224 8 13 __for_end:134 256 32 9 <unknown"
                        "> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HuntingExcelConfigMgr::rewriteHuntingClueMonsterConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -202116109;
  __for_range = &this->hunting_clue_monster_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false> *)(v3 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false,false> *const)(v3 + 64));
    monster_config_id = std::get<0ul,unsigned int const,data::HuntingClueMonsterExcelConfig>(__in);
    monster_config = std::get<1ul,unsigned int const,data::HuntingClueMonsterExcelConfig>(__in);
    v7 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
           &this->hunting_clue_monster_group_2_config_id_,
           &monster_config->monster_group_id);
    std::vector<unsigned int>::push_back(v7, monster_config_id);
    if ( *(_BYTE *)(((unsigned __int64)&monster_config->group_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)monster_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config->group_type >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&monster_config->group_type);
    }
    if ( monster_config->group_type == HUNTING_GROUP_TYPE_NONE )
      monster_config->group_type = HUNTING_GROUP_TYPE_CLUE;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false,false> *const)(v3 + 64));
  }
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->hunting_clue_monster_group_2_config_id_;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v6);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, v6);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range_0);
  while ( 2 )
  {
    v8 = (char *)(v3 + 160);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 160)) )
    {
      v19 = 1;
      goto LABEL_57;
    }
    v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 128));
    monster_group_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v30);
    clue_monster_id = 0;
    __for_range_1 = std::get<1ul,unsigned int const,std::vector<unsigned int>>(v30);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v8);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v8);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v9 = (char *)(v3 + 224);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224)) )
      {
        v17 = 1;
        goto LABEL_47;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
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
      v14 = *(unsigned int *)(v3 + 48);
      clue_monster_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingClueMonsterExcelConfig(this, v14);
      if ( !clue_monster_config_ptr )
      {
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/HuntingExcelConfig.cpp",
          "rewriteHuntingClueMonsterConfig",
          139);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v15, (const char (*)[28])byte_1AD83B60);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v17 = 0;
        goto LABEL_47;
      }
      if ( *(char *)(((unsigned __int64)&clue_monster_config_ptr->is_clue_monster >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&clue_monster_config_ptr->is_clue_monster, v14, &clue_monster_config_ptr->is_clue_monster);
      if ( clue_monster_config_ptr->is_clue_monster )
        break;
LABEL_45:
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
    }
    if ( !clue_monster_id )
    {
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      clue_monster_id = *(_DWORD *)(v3 + 48);
      goto LABEL_45;
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
      "./src/txt_data_manual/HuntingExcelConfig.cpp",
      "rewriteHuntingClueMonsterConfig",
      146);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v18, (const char (*)[23])"duplicate clue monster");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v17 = 0;
LABEL_47:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v19 = 0;
      goto LABEL_57;
    }
    if ( clue_monster_id )
    {
      v22 = monster_group_id;
      v23 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->hunting_clue_monster_group_2_clue_config_id_,
              monster_group_id);
      v24 = v23;
      v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
      if ( v25 != 0 && (char)(((unsigned __int8)v23 & 7) + 3) >= v25 )
      {
        LOBYTE(v22) = v25 != 0;
        __asan_report_store4(v23, v22);
      }
      *v24 = clue_monster_id;
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 128));
      continue;
    }
    break;
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
    "./src/txt_data_manual/HuntingExcelConfig.cpp",
    "rewriteHuntingClueMonsterConfig",
    154);
  v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 384),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v21 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v20, (const char (*)[54])byte_1AD83BE0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, monster_group_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
  v2 = -1;
  v19 = 0;
LABEL_57:
  if ( v19 == 1 )
    v2 = 0;
  result = v2;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 163: range 00000000144853F6-0000000014485ED2
int32_t __cdecl HuntingExcelConfigMgr::rewriteHuntingClueGatherConfig(
        HuntingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  std::vector<unsigned int> *v7; // rdx
  char *v8; // rsi
  char *v9; // rsi
  unsigned int *v10; // rax
  int *v11; // rdx
  int v12; // ecx
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdx
  common::milog::MiLogStream *v19; // rax
  int v20; // eax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *v23; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v24; // rax
  uint32_t *v25; // rdx
  char v26; // cl
  int32_t result; // eax
  uint32_t clue_gather_id; // [rsp+2Ch] [rbp-244h]
  data::HuntingClueGatherExcelConfigMap *__for_range; // [rsp+30h] [rbp-240h]
  std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range_0; // [rsp+38h] [rbp-238h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::reference v31; // [rsp+40h] [rbp-230h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *gather_group_id; // [rsp+48h] [rbp-228h]
  const std::tuple_element<1,std::pair<unsigned int const,std::vector<unsigned int> > >::type *__for_range_1; // [rsp+58h] [rbp-218h]
  data::HuntingClueGatherExcelConfig *clue_gather_config_ptr; // [rsp+60h] [rbp-210h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false,false>::reference v35; // [rsp+68h] [rbp-208h]
  std::tuple_element<0,std::pair<unsigned int const,data::HuntingClueGatherExcelConfig> >::type *gather_config_id; // [rsp+70h] [rbp-200h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HuntingClueGatherExcelConfig> >::type *gather_config; // [rsp+78h] [rbp-1F8h]
  char v38[496]; // [rsp+80h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 4 20 gather_config_id:172 64 8 15 __for_begin:164 96 8 13 __for_end:164 128 8 15 __for_beg"
                        "in:169 160 8 13 __for_end:169 192 8 15 __for_begin:172 224 8 13 __for_end:172 256 32 9 <unknown>"
                        " 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HuntingExcelConfigMgr::rewriteHuntingClueGatherConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -202116109;
  __for_range = &this->hunting_clue_gather_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false> *)(v3 + 96)) )
      break;
    v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false,false> *const)(v3 + 64));
    gather_config_id = std::get<0ul,unsigned int const,data::HuntingClueGatherExcelConfig>(v35);
    gather_config = (std::tuple_element<1,const std::pair<unsigned int const,data::HuntingClueGatherExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HuntingClueGatherExcelConfig>(v35);
    v7 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
           &this->hunting_clue_gather_group_2_config_id_,
           &gather_config->gather_group_id);
    std::vector<unsigned int>::push_back(v7, gather_config_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false,false> *const)(v3 + 64));
  }
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->hunting_clue_gather_group_2_config_id_;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v6);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, v6);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range_0);
  while ( 2 )
  {
    v8 = (char *)(v3 + 160);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 160)) )
    {
      v20 = 1;
      goto LABEL_53;
    }
    v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 128));
    gather_group_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v31);
    clue_gather_id = 0;
    __for_range_1 = std::get<1ul,unsigned int const,std::vector<unsigned int>>(v31);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v8);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v8);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v9 = (char *)(v3 + 224);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224)) )
      {
        v16 = 1;
        goto LABEL_43;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
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
      clue_gather_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingClueGatherExcelConfig(
                                 this,
                                 *(unsigned int *)(v3 + 48));
      if ( !clue_gather_config_ptr )
      {
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/HuntingExcelConfig.cpp",
          "rewriteHuntingClueGatherConfig",
          177);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v14, (const char (*)[45])byte_1AD83D80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v16 = 0;
        goto LABEL_43;
      }
      v17 = ((_BYTE)clue_gather_config_ptr + 20) & 7;
      v18 = (*(_BYTE *)(((unsigned __int64)&clue_gather_config_ptr->is_clue_gather >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&clue_gather_config_ptr->is_clue_gather >> 3) + 0x7FFF8000));
      if ( (_BYTE)v18 )
        __asan_report_load1(&clue_gather_config_ptr->is_clue_gather, v17, v18);
      if ( clue_gather_config_ptr->is_clue_gather )
        break;
LABEL_41:
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
    }
    if ( !clue_gather_id )
    {
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      clue_gather_id = *(_DWORD *)(v3 + 48);
      goto LABEL_41;
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
      "./src/txt_data_manual/HuntingExcelConfig.cpp",
      "rewriteHuntingClueGatherConfig",
      184);
    v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v19, (const char (*)[22])"duplicate clue gather");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v16 = 0;
LABEL_43:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v16 != 1 )
    {
      v20 = 0;
      goto LABEL_53;
    }
    if ( clue_gather_id )
    {
      v23 = gather_group_id;
      v24 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->hunting_clue_gather_2_clue_config_id_,
              gather_group_id);
      v25 = v24;
      v26 = *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000);
      if ( v26 != 0 && (char)(((unsigned __int8)v24 & 7) + 3) >= v26 )
      {
        LOBYTE(v23) = v26 != 0;
        __asan_report_store4(v24, v23);
      }
      *v25 = clue_gather_id;
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 128));
      continue;
    }
    break;
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
    "./src/txt_data_manual/HuntingExcelConfig.cpp",
    "rewriteHuntingClueGatherConfig",
    192);
  v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 384),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v22 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v21, (const char (*)[59])byte_1AD83E20);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, gather_group_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
  v2 = -1;
  v20 = 0;
LABEL_53:
  if ( v20 == 1 )
    v2 = 0;
  result = v2;
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 201: range 0000000014485ED4-0000000014486431
int32_t __cdecl HuntingExcelConfigMgr::checkConfig(
        HuntingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  int32_t result; // eax
  uint32_t next_idx; // [rsp+14h] [rbp-13Ch]
  const std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string >> *__for_range; // [rsp+20h] [rbp-130h]
  std::_Rb_tree_const_iterator<std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > >::reference v13; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > >::type *type; // [rsp+30h] [rbp-120h]
  char v15[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:215 64 8 13 __for_end:215 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HuntingExcelConfigMgr::checkConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  if ( HuntingExcelConfigMgr::checkHuntingRefreshConfig(this, txt_config_mgr)
    || HuntingExcelConfigMgr::checkHuntingRegionConfig(this, txt_config_mgr)
    || HuntingExcelConfigMgr::checkHuntingGroupInfoConfig(this, txt_config_mgr)
    || HuntingExcelConfigMgr::checkHuntingClueMonsterConfig(this, txt_config_mgr)
    || HuntingExcelConfigMgr::checkHuntingClueGatherConfig(this, txt_config_mgr)
    || HuntingExcelConfigMgr::checkHuntingMonsterConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/HuntingExcelConfig.cpp",
      "checkConfig",
      209);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])"checkConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    v2 = -1;
  }
  else
  {
    next_idx = 0;
    __for_range = data::getHuntingOfferDifficultyTypeEnumMap[abi:cxx11]();
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 32, txt_config_mgr);
    *(std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string >>::const_iterator *)(v3 + 32) = std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string>>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, txt_config_mgr);
    *(std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string >>::const_iterator *)(v3 + 64) = std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string>>::end(__for_range);
    while ( 1 )
    {
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > >::_Self *)(v3 + 32),
              (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > >::_Self *)(v3 + 64)) )
      {
        v9 = 1;
        goto LABEL_30;
      }
      v13 = std::_Rb_tree_const_iterator<std::pair<data::HuntingOfferDifficultyType const,std::pair<std::string,std::string>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > > *const)(v3 + 32));
      type = std::get<0ul,data::HuntingOfferDifficultyType const,std::pair<std::string,std::string>>(v13);
      std::get<1ul,data::HuntingOfferDifficultyType const,std::pair<std::string,std::string>>(v13);
      if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(type);
      }
      if ( next_idx != *type )
        break;
      ++next_idx;
      std::_Rb_tree_const_iterator<std::pair<data::HuntingOfferDifficultyType const,std::pair<std::string,std::string>>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > > *const)(v3 + 32));
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
      "./src/txt_data_manual/HuntingExcelConfig.cpp",
      "checkConfig",
      219);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v8, (const char (*)[28])byte_1AD83EE0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    v2 = -1;
    v9 = 0;
LABEL_30:
    if ( v9 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v15 == (char *)v3 )
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

// Line 228: range 0000000014486432-0000000014486C98
int32_t __cdecl HuntingExcelConfigMgr::checkHuntingRefreshConfig(
        HuntingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *v6; // rsi
  HuntingExcelConfigMgr *v7; // rcx
  uint32_t *p_region_id; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int v17; // eax
  int32_t result; // eax
  data::HuntingRefreshExcelConfigMap *__for_range; // [rsp+10h] [rbp-1D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false,false>::reference v21; // [rsp+18h] [rbp-1C8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HuntingRefreshExcelConfig> >::type *config; // [rsp+28h] [rbp-1B8h]
  std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>> *__for_range_0; // [rsp+30h] [rbp-1B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::reference v24; // [rsp+38h] [rbp-1A8h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<std::vector<unsigned int>> > >::type *city_id; // [rsp+40h] [rbp-1A0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<std::vector<unsigned int>> > >::type *difficulty_vec; // [rsp+48h] [rbp-198h]
  char v27[400]; // [rsp+50h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 15 __for_begin:229 64 8 13 __for_end:229 96 8 15 __for_begin:245 128 8 13 __for_end:245 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HuntingExcelConfigMgr::checkHuntingRefreshConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  __for_range = &this->hunting_refresh_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (const char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_25;
    }
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::HuntingRefreshExcelConfig>(v21);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::HuntingRefreshExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HuntingRefreshExcelConfig>(v21);
    v7 = this;
    p_region_id = &config->region_id;
    if ( *(_BYTE *)(((unsigned __int64)p_region_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_region_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_region_id);
    }
    if ( !data::HuntingExcelConfigMgrBase::findHuntingRegionExcelConfig(v7, config->region_id) )
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
        "./src/txt_data_manual/HuntingExcelConfig.cpp",
        "checkHuntingRefreshConfig",
        233);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v9, (const char (*)[49])byte_1AD84000);
      v6 = (const char *)&config->region_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->region_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
      goto LABEL_25;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->finish_reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->finish_reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->finish_reward_id);
    }
    if ( config->finish_reward_id
      && (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            config->finish_reward_id,
                            ITEM_LIMIT_HUNTING_REWARD) != 1 )
    {
      break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/HuntingExcelConfig.cpp",
    "checkHuntingRefreshConfig",
    240);
  v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])"reward_id:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->finish_reward_id);
  v6 = byte_1AD7AF20;
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])byte_1AD7AF20);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v11 = 0;
LABEL_25:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v11 == 1 )
  {
    __for_range_0 = &this->city_difficulty_hunting_refresh_config_map_;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::end(__for_range_0);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false> *)(v3 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false> *)(v3 + 128)) )
      {
        v17 = 1;
        goto LABEL_38;
      }
      v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v3 + 96));
      city_id = std::get<0ul,unsigned int const,std::vector<std::vector<unsigned int>>>(v24);
      difficulty_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<std::vector<unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::vector<std::vector<unsigned int>>>(v24);
      if ( std::vector<std::vector<unsigned int>>::size(difficulty_vec) != 3 )
        break;
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v3 + 96));
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
      "./src/txt_data_manual/HuntingExcelConfig.cpp",
      "checkHuntingRefreshConfig",
      249);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 288),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v16 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v15, (const char (*)[51])byte_1AD84060);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, city_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    v2 = -1;
    v17 = 0;
LABEL_38:
    if ( v17 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 258: range 0000000014486C9A-000000001448A1D0
int32_t __cdecl HuntingExcelConfigMgr::checkHuntingRegionConfig(
        HuntingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  unsigned int *v14; // rax
  int *v15; // rdx
  int v16; // ecx
  char v17; // al
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int v20; // eax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  const LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  unsigned int *v32; // rax
  int *v33; // rdx
  int v34; // ecx
  char v35; // al
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  int v38; // eax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  const LuaConfigMgr *v41; // rcx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rdx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  unsigned int *v50; // rax
  int *v51; // rdx
  int v52; // ecx
  char v53; // al
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  int v56; // eax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rdx
  unsigned int *v61; // rax
  int *v62; // rdx
  int v63; // ecx
  char v64; // al
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  int v67; // eax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // rsi
  char *v72; // rsi
  unsigned int *v73; // rax
  int *v74; // rdx
  int v75; // ecx
  char v76; // al
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  int v79; // edx
  common::milog::MiLogStream *v80; // rax
  unsigned __int64 v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rdx
  int v84; // edx
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  std::initializer_list<data::HuntingOfferDifficultyType> __l; // [rsp+0h] [rbp-9B0h]
  int v89; // [rsp+1Ch] [rbp-994h]
  int32_t ret; // [rsp+34h] [rbp-97Ch]
  const HK4EDesignConfig *design_config; // [rsp+38h] [rbp-978h]
  data::HuntingRegionExcelConfigMap *__for_range; // [rsp+40h] [rbp-970h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false,false>::reference v93; // [rsp+48h] [rbp-968h]
  std::tuple_element<0,std::pair<unsigned int const,data::HuntingRegionExcelConfig> >::type *region_id; // [rsp+50h] [rbp-960h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HuntingRegionExcelConfig> >::type *config; // [rsp+58h] [rbp-958h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-950h]
  data::HuntingGroupInfoExcelConfig *group_info_config_ptr; // [rsp+68h] [rbp-948h]
  const GroupInfoScriptConfig *group_info_script_ptr; // [rsp+70h] [rbp-940h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+78h] [rbp-938h]
  data::HuntingGroupInfoExcelConfig *group_info_config_ptr_0; // [rsp+80h] [rbp-930h]
  const GroupInfoScriptConfig *group_info_script_ptr_0; // [rsp+88h] [rbp-928h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+90h] [rbp-920h]
  data::HuntingGroupInfoExcelConfig *group_info_config_ptr_1; // [rsp+98h] [rbp-918h]
  const std::vector<unsigned int> *__for_range_3; // [rsp+A0h] [rbp-910h]
  data::HuntingGroupInfoExcelConfig *group_info_config_ptr_2; // [rsp+A8h] [rbp-908h]
  const std::vector<unsigned int> *__for_range_4; // [rsp+B0h] [rbp-900h]
  data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+B8h] [rbp-8F8h]
  std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>> *__for_range_5; // [rsp+C0h] [rbp-8F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::reference v109; // [rsp+C8h] [rbp-8E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<std::vector<unsigned int>> > >::type *city_id; // [rsp+D0h] [rbp-8E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<std::vector<unsigned int>> > >::type *difficulty_vec; // [rsp+D8h] [rbp-8D8h]
  char v112[2256]; // [rsp+E0h] [rbp-8D0h] BYREF

  v3 = (unsigned __int64)v112;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(2208LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "46 48 1 9 <unknown> 64 1 9 <unknown> 80 4 12 group_id:282 96 4 12 group_id:317 112 4 12 group_id"
                        ":352 128 4 12 group_id:374 144 4 14 monster_id:393 160 8 15 __for_begin:262 192 8 13 __for_end:2"
                        "62 224 8 15 __for_begin:282 256 8 13 __for_end:282 288 8 15 __for_begin:317 320 8 13 __for_end:3"
                        "17 352 8 15 __for_begin:352 384 8 13 __for_end:352 416 8 15 __for_begin:374 448 8 13 __for_end:3"
                        "74 480 8 15 __for_begin:393 512 8 13 __for_end:393 544 8 15 __for_begin:410 576 8 13 __for_end:4"
                        "10 608 12 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown"
                        "> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unkno"
                        "wn> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <u"
                        "nknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 32 "
                        "9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 48 22 error_group_i"
                        "d_set:261 2128 48 23 all_difficulty_type:392";
  *(_QWORD *)(v3 + 16) = HuntingExcelConfigMgr::checkHuntingRegionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
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
  v5[536862737] = -218959360;
  v5[536862738] = -218959360;
  v5[536862739] = -219020288;
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
  v5[536862769] = -218959118;
  v5[536862771] = -218959118;
  v5[536862773] = -218959118;
  v5[536862775] = -218959118;
  v5[536862777] = -218959118;
  v5[536862779] = -218959118;
  v5[536862781] = -218959118;
  v5[536862783] = -218959118;
  v5[536862785] = -219021312;
  v5[536862786] = 62194;
  v5[536862788] = -202116109;
  design_config = TxtConfigMgr::getConfig(txt_config_mgr);
  ret = 0;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 2048));
  __for_range = &this->hunting_region_excel_config_map;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (const char *)(v3 + 192);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false> *)(v3 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false> *)(v3 + 192)) )
    {
      v9 = 1;
      goto LABEL_190;
    }
    v93 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false,false> *const)(v3 + 160));
    region_id = std::get<0ul,unsigned int const,data::HuntingRegionExcelConfig>(v93);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::HuntingRegionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HuntingRegionExcelConfig>(v93);
    if ( std::vector<float>::size(&config->center_pos_list) != 3 )
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
        "./src/txt_data_manual/HuntingExcelConfig.cpp",
        "checkHuntingRegionConfig",
        266);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 640),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v7, (const char (*)[41])byte_1AD84500);
      v6 = (const char *)region_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, region_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
      *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
      goto LABEL_190;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->center_radius >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->center_radius >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->center_radius);
    }
    if ( !config->center_radius )
    {
      *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 704, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 704),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/HuntingExcelConfig.cpp",
        "checkHuntingRegionConfig",
        272);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 704),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v10, (const char (*)[36])byte_1AD84560);
      v6 = (const char *)region_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, region_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
      *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
      goto LABEL_190;
    }
    if ( !std::vector<unsigned int>::size(&config->safe_clue_group) )
    {
      *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 768, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 768),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/HuntingExcelConfig.cpp",
        "checkHuntingRegionConfig",
        278);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 768),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v12, (const char (*)[41])byte_1AD845C0);
      v6 = (const char *)region_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, region_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
      *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
      goto LABEL_190;
    }
    __for_range_0 = &config->safe_clue_group;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (const char *)(v3 + 256);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256)) )
      {
        v20 = 1;
        goto LABEL_58;
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v14 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
      v15 = (int *)v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      v16 = *v15;
      v17 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( v17 != 0 && v17 <= 3 )
      {
        LOBYTE(v6) = v17 != 0;
        __asan_report_store4(v3 + 80, v6);
      }
      *(_DWORD *)(v3 + 80) = v16;
      group_info_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig(
                                this,
                                *(unsigned int *)(v3 + 80));
      if ( !group_info_config_ptr )
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
          "./src/txt_data_manual/HuntingExcelConfig.cpp",
          "checkHuntingRegionConfig",
          287);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 832),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v18, (const char (*)[31])byte_1AD84620);
        v6 = (const char *)(v3 + 80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
        *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v20 = 0;
        goto LABEL_58;
      }
      if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->point_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&group_info_config_ptr->point_type);
      }
      if ( group_info_config_ptr->point_type == HUNTING_CLUE_FINAL )
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
          "./src/txt_data_manual/HuntingExcelConfig.cpp",
          "checkHuntingRegionConfig",
          292);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 896),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v21, (const char (*)[37])byte_1AD84660);
        v6 = (const char *)(v3 + 80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
        *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v20 = 0;
        goto LABEL_58;
      }
      p_lua_config_mgr = &design_config->lua_config_mgr;
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 80);
      group_info_script_ptr = LuaConfigMgr::findGroupInfoConfig(p_lua_config_mgr, *(_DWORD *)(v3 + 80));
      if ( !group_info_script_ptr )
        break;
      v26 = ((_BYTE)group_info_script_ptr - 76) & 7;
      v27 = (*(_BYTE *)(((unsigned __int64)&group_info_script_ptr->replaceable_info >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v26 >= *(_BYTE *)(((unsigned __int64)&group_info_script_ptr->replaceable_info >> 3) + 0x7FFF8000));
      if ( (_BYTE)v27 )
        __asan_report_load1(&group_info_script_ptr->replaceable_info, v26, v27);
      if ( group_info_script_ptr->replaceable_info.value )
      {
        *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1024) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1024, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1024),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/HuntingExcelConfig.cpp",
          "checkHuntingRegionConfig",
          304);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1024),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v28, (const char (*)[38])byte_1AD84700);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
        *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
        std::set<unsigned int>::insert(
          (std::set<unsigned int> *const)(v3 + 2048),
          (const std::set<unsigned int>::value_type *)(v3 + 80));
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
    }
    *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 960, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 960),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/HuntingExcelConfig.cpp",
      "checkHuntingRegionConfig",
      298);
    v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 960),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v25 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v24, (const char (*)[24])byte_1AD846C0);
    v6 = (const char *)(v3 + 80);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
    *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v20 = 0;
LABEL_58:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v20 != 1 )
    {
      v9 = 0;
      goto LABEL_190;
    }
    if ( !std::vector<unsigned int>::size(&config->safe_destination_group) )
    {
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
        "./src/txt_data_manual/HuntingExcelConfig.cpp",
        "checkHuntingRegionConfig",
        313);
      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1088),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v31 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v30, (const char (*)[41])byte_1AD845C0);
      v6 = (const char *)region_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, region_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1088));
      *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
      goto LABEL_190;
    }
    __for_range_1 = &config->safe_destination_group;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v6 = (const char *)(v3 + 320);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 320)) )
      {
        v38 = 1;
        goto LABEL_98;
      }
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
      v32 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
      v33 = (int *)v32;
      if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v32);
      }
      v34 = *v33;
      v35 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
      if ( v35 != 0 && v35 <= 3 )
      {
        LOBYTE(v6) = v35 != 0;
        __asan_report_store4(v3 + 96, v6);
      }
      *(_DWORD *)(v3 + 96) = v34;
      group_info_config_ptr_0 = data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig(
                                  this,
                                  *(unsigned int *)(v3 + 96));
      if ( !group_info_config_ptr_0 )
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
          "./src/txt_data_manual/HuntingExcelConfig.cpp",
          "checkHuntingRegionConfig",
          322);
        v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1152),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v37 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v36, (const char (*)[31])byte_1AD84620);
        v6 = (const char *)(v3 + 96);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1152));
        *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v38 = 0;
        goto LABEL_98;
      }
      if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr_0->point_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr_0->point_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&group_info_config_ptr_0->point_type);
      }
      if ( group_info_config_ptr_0->point_type != HUNTING_CLUE_FINAL )
      {
        *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1216) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1216, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1216),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/HuntingExcelConfig.cpp",
          "checkHuntingRegionConfig",
          327);
        v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1216),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v40 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v39, (const char (*)[37])byte_1AD84660);
        v6 = (const char *)(v3 + 96);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1216));
        *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v38 = 0;
        goto LABEL_98;
      }
      v41 = &design_config->lua_config_mgr;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 96);
      group_info_script_ptr_0 = LuaConfigMgr::findGroupInfoConfig(v41, *(_DWORD *)(v3 + 96));
      if ( !group_info_script_ptr_0 )
        break;
      v44 = ((_BYTE)group_info_script_ptr_0 - 76) & 7;
      v45 = (*(_BYTE *)(((unsigned __int64)&group_info_script_ptr_0->replaceable_info >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v44 >= *(_BYTE *)(((unsigned __int64)&group_info_script_ptr_0->replaceable_info >> 3) + 0x7FFF8000));
      if ( (_BYTE)v45 )
        __asan_report_load1(&group_info_script_ptr_0->replaceable_info, v44, v45);
      if ( group_info_script_ptr_0->replaceable_info.value )
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
          "./src/txt_data_manual/HuntingExcelConfig.cpp",
          "checkHuntingRegionConfig",
          339);
        v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1344),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v47 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v46, (const char (*)[38])byte_1AD84700);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1344));
        *(_DWORD *)(((v3 + 1344) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
        std::set<unsigned int>::insert(
          (std::set<unsigned int> *const)(v3 + 2048),
          (const std::set<unsigned int>::value_type *)(v3 + 96));
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
    }
    *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1280) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1280, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1280),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/HuntingExcelConfig.cpp",
      "checkHuntingRegionConfig",
      333);
    v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 1280),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v43 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v42, (const char (*)[24])byte_1AD846C0);
    v6 = (const char *)(v3 + 96);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)(v3 + 96));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1280));
    *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v38 = 0;
LABEL_98:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( v38 != 1 )
    {
      v9 = 0;
      goto LABEL_190;
    }
    if ( !std::vector<unsigned int>::size(&config->clue_group) )
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
        "./src/txt_data_manual/HuntingExcelConfig.cpp",
        "checkHuntingRegionConfig",
        348);
      v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1408),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v49 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v48, (const char (*)[41])byte_1AD84760);
      v6 = (const char *)region_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, region_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1408));
      *(_DWORD *)(((v3 + 1408) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
      goto LABEL_190;
    }
    __for_range_2 = &config->clue_group;
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 352, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 352) = std::vector<unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 384, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 384) = std::vector<unsigned int>::end(__for_range_2);
    while ( 1 )
    {
      v6 = (const char *)(v3 + 384);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 352),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 384)) )
      {
        v56 = 1;
        goto LABEL_126;
      }
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
      v50 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 352));
      v51 = (int *)v50;
      if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v50);
      }
      v52 = *v51;
      v53 = *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000);
      if ( v53 != 0 && v53 <= 3 )
      {
        LOBYTE(v6) = v53 != 0;
        __asan_report_store4(v3 + 112, v6);
      }
      *(_DWORD *)(v3 + 112) = v52;
      group_info_config_ptr_1 = data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig(
                                  this,
                                  *(unsigned int *)(v3 + 112));
      if ( !group_info_config_ptr_1 )
      {
        *(_DWORD *)(((v3 + 1472) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1472) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1472, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1472),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/HuntingExcelConfig.cpp",
          "checkHuntingRegionConfig",
          357);
        v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1472),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v55 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v54, (const char (*)[31])byte_1AD84620);
        v6 = (const char *)(v3 + 112);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, (const unsigned int *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1472));
        *(_DWORD *)(((v3 + 1472) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v56 = 0;
        goto LABEL_126;
      }
      if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr_1->point_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr_1->point_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&group_info_config_ptr_1->point_type);
      }
      if ( group_info_config_ptr_1->point_type == HUNTING_CLUE_FINAL )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 352));
    }
    *(_DWORD *)(((v3 + 1536) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1536) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1567) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 1567) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1536, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1536),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/HuntingExcelConfig.cpp",
      "checkHuntingRegionConfig",
      363);
    v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 1536),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v58 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v57, (const char (*)[37])byte_1AD84660);
    v6 = (const char *)(v3 + 112);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, (const unsigned int *)(v3 + 112));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1536));
    *(_DWORD *)(((v3 + 1536) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v56 = 0;
LABEL_126:
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
    if ( v56 != 1 )
    {
      v9 = 0;
      goto LABEL_190;
    }
    if ( !std::vector<unsigned int>::size(&config->destination_group) )
      break;
    __for_range_3 = &config->destination_group;
    *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 416, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 416) = std::vector<unsigned int>::begin(__for_range_3);
    *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 448, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 448) = std::vector<unsigned int>::end(__for_range_3);
    while ( 1 )
    {
      v6 = (const char *)(v3 + 448);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 416),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 448)) )
      {
        v67 = 1;
        goto LABEL_154;
      }
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
      v61 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 416));
      v62 = (int *)v61;
      if ( *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v61 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v61);
      }
      v63 = *v62;
      v64 = *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000);
      if ( v64 != 0 && v64 <= 3 )
      {
        LOBYTE(v6) = v64 != 0;
        __asan_report_store4(v3 + 128, v6);
      }
      *(_DWORD *)(v3 + 128) = v63;
      group_info_config_ptr_2 = data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig(
                                  this,
                                  *(unsigned int *)(v3 + 128));
      if ( !group_info_config_ptr_2 )
      {
        *(_DWORD *)(((v3 + 1664) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1664) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1695) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1695) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1664, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1664),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/HuntingExcelConfig.cpp",
          "checkHuntingRegionConfig",
          379);
        v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1664),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v66 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v65, (const char (*)[31])byte_1AD84620);
        v6 = (const char *)(v3 + 128);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, (const unsigned int *)(v3 + 128));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1664));
        *(_DWORD *)(((v3 + 1664) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v67 = 0;
        goto LABEL_154;
      }
      if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr_2->point_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr_2->point_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&group_info_config_ptr_2->point_type);
      }
      if ( group_info_config_ptr_2->point_type != HUNTING_CLUE_FINAL )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 416));
    }
    *(_DWORD *)(((v3 + 1728) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1728) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1759) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 1759) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1728, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1728),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/HuntingExcelConfig.cpp",
      "checkHuntingRegionConfig",
      385);
    v68 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 1728),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v69 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v68, (const char (*)[37])byte_1AD84660);
    v6 = (const char *)(v3 + 128);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, (const unsigned int *)(v3 + 128));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1728));
    *(_DWORD *)(((v3 + 1728) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v67 = 0;
LABEL_154:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
    if ( v67 != 1 )
    {
      v9 = 0;
      goto LABEL_190;
    }
    if ( !std::vector<unsigned int>::empty(&config->certain_final_monster_id) )
    {
      v70 = ((v3 + 2128) >> 3) + 2147450880;
      *(_DWORD *)v70 = 0;
      *(_WORD *)(v70 + 4) = 0;
      *(_WORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 1024;
      if ( *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 608, v6);
      *(_DWORD *)(v3 + 608) = 0;
      v71 = (((_BYTE)v3 + 100) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 612) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 100) & 7) + 3) >= *(_BYTE *)(((v3 + 612) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 612, v71);
      }
      *(_DWORD *)(v3 + 612) = 1;
      if ( *(_BYTE *)(((v3 + 616) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 616) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 616, v71);
      *(_DWORD *)(v3 + 616) = 2;
      __l._M_array = (std::initializer_list<data::HuntingOfferDifficultyType>::iterator)(v3 + 608);
      __l._M_len = 3LL;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<data::HuntingOfferDifficultyType>::allocator((std::allocator<data::HuntingOfferDifficultyType> *const)(v3 + 64));
      v72 = (char *)(v3 + 608);
      std::set<data::HuntingOfferDifficultyType>::set(
        (std::set<data::HuntingOfferDifficultyType> *const)(v3 + 2128),
        __l,
        (const std::less<data::HuntingOfferDifficultyType> *)(v3 + 48),
        (const std::set<data::HuntingOfferDifficultyType>::allocator_type *)(v3 + 64));
      std::allocator<data::HuntingOfferDifficultyType>::~allocator((std::allocator<data::HuntingOfferDifficultyType> *const)(v3 + 64));
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_WORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -1800;
      __for_range_4 = &config->certain_final_monster_id;
      *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 480, v72);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 480) = std::vector<unsigned int>::begin(__for_range_4);
      *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 512, v72);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 512) = std::vector<unsigned int>::end(__for_range_4);
      while ( 1 )
      {
        v6 = (const char *)(v3 + 512);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 480),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 512)) )
        {
          v79 = 1;
          goto LABEL_179;
        }
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 4;
        v73 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 480));
        v74 = (int *)v73;
        if ( *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v73 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v73);
        }
        v75 = *v74;
        v76 = *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000);
        if ( v76 != 0 && v76 <= 3 )
        {
          LOBYTE(v6) = v76 != 0;
          __asan_report_store4(v3 + 144, v6);
        }
        *(_DWORD *)(v3 + 144) = v75;
        monster_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingMonsterExcelConfig(
                               this,
                               *(unsigned int *)(v3 + 144));
        if ( !monster_config_ptr )
          break;
        std::set<data::HuntingOfferDifficultyType>::erase(
          (std::set<data::HuntingOfferDifficultyType> *const)(v3 + 2128),
          &monster_config_ptr->difficulty);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 480));
      }
      *(_DWORD *)(((v3 + 1792) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1792) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1823) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 1823) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1792, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1792),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/HuntingExcelConfig.cpp",
        "checkHuntingRegionConfig",
        398);
      v77 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1792),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v78 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v77, (const char (*)[38])byte_1AD83880);
      v6 = (const char *)(v3 + 144);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v78, (const unsigned int *)(v3 + 144));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1792));
      *(_DWORD *)(((v3 + 1792) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v79 = 0;
LABEL_179:
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
      if ( v79 == 1 )
      {
        if ( !std::set<data::HuntingOfferDifficultyType>::empty((const std::set<data::HuntingOfferDifficultyType> *const)(v3 + 2128)) )
        {
          *(_DWORD *)(((v3 + 1856) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1856) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1887) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1887) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1856, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1856),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/HuntingExcelConfig.cpp",
            "checkHuntingRegionConfig",
            405);
          v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1856),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v6 = byte_1AD84820;
          common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v80, (const char (*)[48])byte_1AD84820);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1856));
          *(_DWORD *)(((v3 + 1856) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v89 = 0;
        }
        else
        {
          v89 = 1;
        }
      }
      else
      {
        v89 = 0;
      }
      std::set<data::HuntingOfferDifficultyType>::~set((std::set<data::HuntingOfferDifficultyType> *const)(v3 + 2128));
      v81 = ((v3 + 2128) >> 3) + 2147450880;
      *(_DWORD *)v81 = -117901064;
      *(_WORD *)(v81 + 4) = -1800;
      if ( v89 != 1 )
      {
        v9 = 0;
        goto LABEL_190;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false,false> *const)(v3 + 160));
  }
  *(_DWORD *)(((v3 + 1600) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 1600) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 1600, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 1600),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/HuntingExcelConfig.cpp",
    "checkHuntingRegionConfig",
    370);
  v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 1600),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v60 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v59, (const char (*)[38])byte_1AD847C0);
  v6 = (const char *)region_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, region_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1600));
  *(_DWORD *)(((v3 + 1600) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v9 = 0;
LABEL_190:
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
  if ( v9 == 1 )
  {
    __for_range_5 = &this->city_difficulty_hunting_monster_config_map_;
    *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 544, v6);
    *(std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::iterator *)(v3 + 544) = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::begin(__for_range_5);
    *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 576, v6);
    *(std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::iterator *)(v3 + 576) = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::end(__for_range_5);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false> *)(v3 + 544),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false> *)(v3 + 576)) )
      {
        v84 = 1;
        goto LABEL_203;
      }
      v109 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v3 + 544));
      city_id = std::get<0ul,unsigned int const,std::vector<std::vector<unsigned int>>>(v109);
      difficulty_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<std::vector<unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::vector<std::vector<unsigned int>>>(v109);
      if ( std::vector<std::vector<unsigned int>>::size(difficulty_vec) != 3 )
        break;
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v3 + 544));
    }
    *(_DWORD *)(((v3 + 1920) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1920) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1951) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1951) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1920, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1920),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/HuntingExcelConfig.cpp",
      "checkHuntingRegionConfig",
      414);
    v82 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 1920),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v83 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v82, (const char (*)[51])byte_1AD84060);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v83, city_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1920));
    *(_DWORD *)(((v3 + 1920) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v84 = 0;
LABEL_203:
    *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = -8;
    if ( v84 == 1 )
    {
      if ( ret )
      {
        *(_DWORD *)(((v3 + 1984) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1984) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 2015) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 2015) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1984, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1984),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/HuntingExcelConfig.cpp",
          "checkHuntingRegionConfig",
          420);
        v85 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1984),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v86 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v85,
                (const char (*)[19])" error group set: ");
        common::milog::MiLogStream::operator<<<unsigned int>(v86, (const std::set<unsigned int> *)(v3 + 2048));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1984));
        *(_DWORD *)(((v3 + 1984) >> 3) + 0x7FFF8000) = -117901064;
        v2 = ret;
      }
      else
      {
        v2 = 0;
      }
    }
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 2048));
  if ( v112 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80F8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 256) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8104) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF810C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 2208LL, v112);
  }
  return v2;
};

// Line 427: range 000000001448A1D2-000000001448AEBB
int32_t __cdecl HuntingExcelConfigMgr::checkHuntingGroupInfoConfig(
        HuntingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  HuntingExcelConfigMgr *v11; // rcx
  __int64 region_id; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  data::HuntingCluePointType point_type; // eax
  char *v17; // rsi
  unsigned int *v18; // rax
  int *v19; // rdx
  int v20; // ecx
  char v21; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // edx
  char *v25; // rsi
  unsigned int *v26; // rax
  int *v27; // rdx
  int v28; // ecx
  char v29; // al
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int v32; // edx
  int32_t result; // eax
  const HK4EDesignConfig *design_config; // [rsp+10h] [rbp-270h]
  data::HuntingGroupInfoExcelConfigMap *__for_range; // [rsp+18h] [rbp-268h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false,false>::reference v36; // [rsp+20h] [rbp-260h]
  std::tuple_element<0,std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig> >::type *group_id; // [rsp+28h] [rbp-258h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig> >::type *config; // [rsp+30h] [rbp-250h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+40h] [rbp-240h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-238h]
  char v41[560]; // [rsp+50h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 4 9 index:446 48 4 9 index:458 64 8 15 __for_begin:429 96 8 13 __for_end:429 128 8 15 __fo"
                        "r_begin:446 160 8 13 __for_end:446 192 8 15 __for_begin:458 224 8 13 __for_end:458 256 32 9 <unk"
                        "nown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HuntingExcelConfigMgr::checkHuntingGroupInfoConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -202116109;
  design_config = TxtConfigMgr::getConfig(txt_config_mgr);
  __for_range = &this->hunting_group_info_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingGroupInfoExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HuntingGroupInfoExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingGroupInfoExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::HuntingGroupInfoExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false> *)(v3 + 96)) )
    {
      v10 = 1;
      goto LABEL_65;
    }
    v36 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false,false> *const)(v3 + 64));
    group_id = std::get<0ul,unsigned int const,data::HuntingGroupInfoExcelConfig>(v36);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HuntingGroupInfoExcelConfig>(v36);
    p_lua_config_mgr = &design_config->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(group_id);
    }
    if ( !LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, *group_id) )
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
        "./src/txt_data_manual/HuntingExcelConfig.cpp",
        "checkHuntingGroupInfoConfig",
        434);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])"group_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, group_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      v2 = -1;
      v10 = 0;
      goto LABEL_65;
    }
    v11 = this;
    if ( *(_BYTE *)(((unsigned __int64)&config->region_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->region_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->region_id);
    }
    region_id = config->region_id;
    if ( !data::HuntingExcelConfigMgrBase::findHuntingRegionExcelConfig(v11, region_id) )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&config->point_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->point_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->point_type);
    }
    point_type = config->point_type;
    if ( point_type == HUNTING_CLUE_MONSTER )
    {
      __for_range_0 = &config->ref_index;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, region_id);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, region_id);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v17 = (char *)(v3 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
        {
          v24 = 1;
          goto LABEL_43;
        }
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
        v18 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
        v19 = (int *)v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        v20 = *v19;
        v21 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
        if ( v21 != 0 && v21 <= 3 )
        {
          LOBYTE(v17) = v21 != 0;
          __asan_report_store4(v3 + 32, v17);
        }
        *(_DWORD *)(v3 + 32) = v20;
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<unsigned int>>,unsigned int>(
                &this->hunting_clue_monster_group_2_config_id_,
                (const unsigned int *)(v3 + 32)) )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
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
        "./src/txt_data_manual/HuntingExcelConfig.cpp",
        "checkHuntingGroupInfoConfig",
        450);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v23 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v22, (const char (*)[26])byte_1AD84A80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v24 = 0;
LABEL_43:
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v24 != 1 )
      {
        v10 = 0;
        goto LABEL_65;
      }
    }
    else if ( point_type == HUNTING_CLUE_GATHER )
    {
      __for_range_1 = &config->ref_index;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, region_id);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, region_id);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v25 = (char *)(v3 + 224);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224)) )
        {
          v32 = 1;
          goto LABEL_61;
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v26 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
        v27 = (int *)v26;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v26);
        }
        v28 = *v27;
        v29 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v29 != 0 && v29 <= 3 )
        {
          LOBYTE(v25) = v29 != 0;
          __asan_report_store4(v3 + 48, v25);
        }
        *(_DWORD *)(v3 + 48) = v28;
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<unsigned int>>,unsigned int>(
                &this->hunting_clue_gather_group_2_config_id_,
                (const unsigned int *)(v3 + 48)) )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
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
        "./src/txt_data_manual/HuntingExcelConfig.cpp",
        "checkHuntingGroupInfoConfig",
        462);
      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v31 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v30, (const char (*)[26])byte_1AD84A80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v32 = 0;
LABEL_61:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( v32 != 1 )
      {
        v10 = 0;
        goto LABEL_65;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/HuntingExcelConfig.cpp",
    "checkHuntingGroupInfoConfig",
    439);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 320),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])"region_id:");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->region_id);
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])byte_1AD7AF20);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
  v2 = -1;
  v10 = 0;
LABEL_65:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v41 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
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

// Line 476: range 000000001448AEBC-000000001448B418
int32_t __cdecl HuntingExcelConfigMgr::checkHuntingClueMonsterConfig(
        HuntingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  uint32_t *p_monster_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  ReviseLevelGrowExcelConfigMgr *p_revise_level_grow_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  data::HuntingClueMonsterExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false,false>::reference v18; // [rsp+18h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig> >::type *config; // [rsp+28h] [rbp-118h]
  char v20[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:477 64 8 13 __for_end:477 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HuntingExcelConfigMgr::checkHuntingClueMonsterConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->hunting_clue_monster_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_24;
    }
    v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::HuntingClueMonsterExcelConfig>(v18);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HuntingClueMonsterExcelConfig>(v18);
    p_monster_config_mgr = &txt_config_mgr->monster_config_mgr;
    p_monster_id = &config->monster_id;
    if ( *(_BYTE *)(((unsigned __int64)p_monster_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_monster_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_monster_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_monster_id);
    }
    if ( !data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(p_monster_config_mgr, config->monster_id) )
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
        "./src/txt_data_manual/HuntingExcelConfig.cpp",
        "checkHuntingClueMonsterConfig",
        481);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])"monster_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->monster_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v11 = 0;
      goto LABEL_24;
    }
    p_revise_level_grow_config_mgr = &txt_config_mgr->revise_level_grow_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->revise_level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->revise_level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->revise_level_id);
    }
    if ( !data::ReviseLevelGrowExcelConfigMgrBase::findReviseLevelGrowExcelConfig(
            p_revise_level_grow_config_mgr,
            config->revise_level_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/HuntingExcelConfig.cpp",
    "checkHuntingClueMonsterConfig",
    487);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])"revise_level_id:");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->revise_level_id);
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])byte_1AD7AF20);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v11 = 0;
LABEL_24:
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

// Line 495: range 000000001448B41A-000000001448B7B4
int32_t __cdecl HuntingExcelConfigMgr::checkHuntingClueGatherConfig(
        HuntingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GatherExcelConfigMgr *p_gather_config_mgr; // rcx
  uint32_t *p_gather_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::HuntingClueGatherExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HuntingClueGatherExcelConfig> >::type *config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:496 64 8 13 __for_end:496 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HuntingExcelConfigMgr::checkHuntingClueGatherConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->hunting_clue_gather_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_18;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::HuntingClueGatherExcelConfig>(v14);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::HuntingClueGatherExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HuntingClueGatherExcelConfig>(v14);
    p_gather_config_mgr = &txt_config_mgr->gather_config_mgr;
    p_gather_id = &config->gather_id;
    if ( *(_BYTE *)(((unsigned __int64)p_gather_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gather_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gather_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_gather_id);
    }
    if ( !data::GatherExcelConfigMgrBase::findGatherExcelConfig(p_gather_config_mgr, config->gather_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/HuntingExcelConfig.cpp",
    "checkHuntingClueGatherConfig",
    500);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])"gather_id:");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->gather_id);
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])byte_1AD7AF20);
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

// Line 508: range 000000001448B7B6-000000001448CA87
int32_t __cdecl HuntingExcelConfigMgr::checkHuntingMonsterConfig(
        HuntingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  uint32_t *p_monster_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_hunting_clue_monster_group_2_config_id; // rdx
  const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *p_associated_monster_group_id; // rcx
  __int64 v14; // rsi
  const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *v15; // rsi
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v16; // rdx
  char *v17; // rsi
  bool v18; // al
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  _BOOL4 v21; // eax
  char *v22; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v23; // rax
  int *v24; // rdx
  int v25; // ecx
  char v26; // al
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // eax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  ReviseLevelGrowExcelConfigMgr *p_revise_level_grow_config_mgr; // rcx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  __int64 v36; // rsi
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  char *v39; // rsi
  unsigned int *v40; // rax
  int *v41; // rdx
  int v42; // ecx
  char v43; // al
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  int v47; // edx
  int32_t result; // eax
  data::HuntingMonsterExcelConfigMap *__for_range; // [rsp+18h] [rbp-368h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false,false>::reference v51; // [rsp+20h] [rbp-360h]
  std::tuple_element<0,std::pair<unsigned int const,data::HuntingMonsterExcelConfig> >::type *config_id; // [rsp+28h] [rbp-358h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HuntingMonsterExcelConfig> >::type *config; // [rsp+30h] [rbp-350h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-348h]
  data::HuntingClueMonsterExcelConfig *clue_monster_config_ptr; // [rsp+40h] [rbp-340h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-338h]
  char v57[816]; // [rsp+50h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 32 4 21 monster_config_id:525 48 4 12 affix_id:558 64 8 15 __for_begin:509 96 8 13 __for_end:"
                        "509 128 8 8 iter:519 160 8 9 <unknown> 192 8 15 __for_begin:525 224 8 13 __for_end:525 256 8 15 "
                        "__for_begin:558 288 8 13 __for_end:558 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> "
                        "512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HuntingExcelConfigMgr::checkHuntingMonsterConfig;
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
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -202116109;
  __for_range = &this->hunting_monster_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false> *)(v3 + 96)) )
    {
      v11 = 1;
      goto LABEL_84;
    }
    v51 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false,false> *const)(v3 + 64));
    config_id = std::get<0ul,unsigned int const,data::HuntingMonsterExcelConfig>(v51);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::HuntingMonsterExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HuntingMonsterExcelConfig>(v51);
    p_monster_config_mgr = &txt_config_mgr->monster_config_mgr;
    p_monster_id = &config->monster_id;
    if ( *(_BYTE *)(((unsigned __int64)p_monster_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_monster_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_monster_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_monster_id);
    }
    if ( !data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(p_monster_config_mgr, config->monster_id) )
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
        "./src/txt_data_manual/HuntingExcelConfig.cpp",
        "checkHuntingMonsterConfig",
        513);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])"monster_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->monster_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      v2 = -1;
      v11 = 0;
      goto LABEL_84;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->associated_monster_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->associated_monster_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->associated_monster_group_id);
    }
    if ( config->associated_monster_group_id )
    {
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      p_hunting_clue_monster_group_2_config_id = &this->hunting_clue_monster_group_2_config_id_;
      p_associated_monster_group_id = &config->associated_monster_group_id;
      v14 = *(unsigned __int8 *)(((v3 + 128) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v14 )
        __asan_report_store8(v3 + 128, v14);
      v15 = p_associated_monster_group_id;
      *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                              p_hunting_clue_monster_group_2_config_id,
                                                                                              p_associated_monster_group_id);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      v16 = &this->hunting_clue_monster_group_2_config_id_;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v15);
      *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v16);
      v17 = (char *)(v3 + 160);
      v18 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 128),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 160));
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v18 )
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
          "./src/txt_data_manual/HuntingExcelConfig.cpp",
          "checkHuntingMonsterConfig",
          522);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v19, (const char (*)[22])byte_1AD84E40);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v20,
          &config->associated_monster_group_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v21 = 0;
      }
      else
      {
        __for_range_0 = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 128))->second;
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 192, v17);
        *(std::vector<unsigned int>::iterator *)(v3 + 192) = std::vector<unsigned int>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 224, v17);
        *(std::vector<unsigned int>::iterator *)(v3 + 224) = std::vector<unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          v22 = (char *)(v3 + 224);
          if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 192),
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 224)) )
          {
            v29 = 1;
            goto LABEL_49;
          }
          *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
          v23 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 192));
          v24 = (int *)v23;
          if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v23);
          }
          v25 = *v24;
          v26 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
          if ( v26 != 0 && v26 <= 3 )
          {
            LOBYTE(v22) = v26 != 0;
            __asan_report_store4(v3 + 32, v22);
          }
          *(_DWORD *)(v3 + 32) = v25;
          clue_monster_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingClueMonsterExcelConfig(
                                      this,
                                      *(unsigned int *)(v3 + 32));
          if ( !clue_monster_config_ptr )
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
              "./src/txt_data_manual/HuntingExcelConfig.cpp",
              "checkHuntingMonsterConfig",
              530);
            v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 448),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v28 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                    v27,
                    (const char (*)[53])"clue_monster_config_ptr is null, monster_config_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
            *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v29 = 0;
            goto LABEL_49;
          }
          if ( *(_BYTE *)(((unsigned __int64)&clue_monster_config_ptr->group_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)clue_monster_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&clue_monster_config_ptr->group_type >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&clue_monster_config_ptr->group_type);
          }
          if ( clue_monster_config_ptr->group_type != HUNTING_GROUP_TYPE_ASSOCIATED )
            break;
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 192));
        }
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/HuntingExcelConfig.cpp",
          "checkHuntingMonsterConfig",
          535);
        v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v31 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v30, (const char (*)[52])byte_1AD84EE0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v29 = 0;
LABEL_49:
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
        v21 = v29 == 1;
      }
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( !v21 )
      {
        v11 = 0;
        goto LABEL_84;
      }
    }
    p_revise_level_grow_config_mgr = &txt_config_mgr->revise_level_grow_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->revise_level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->revise_level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->revise_level_id);
    }
    if ( !data::ReviseLevelGrowExcelConfigMgrBase::findReviseLevelGrowExcelConfig(
            p_revise_level_grow_config_mgr,
            config->revise_level_id) )
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
        "./src/txt_data_manual/HuntingExcelConfig.cpp",
        "checkHuntingMonsterConfig",
        543);
      v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 576),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v34 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v33, (const char (*)[17])"revise_level_id:");
      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &config->revise_level_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v35, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
      v2 = -1;
      v11 = 0;
      goto LABEL_84;
    }
    v36 = (((_BYTE)config + 124) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&config->limit_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->limit_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->limit_time);
    }
    if ( !config->limit_time )
      break;
    __for_range_1 = &config->affix;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v36);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v36);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v39 = (char *)(v3 + 288);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288)) )
      {
        v47 = 1;
        goto LABEL_80;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v40 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 256));
      v41 = (int *)v40;
      if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v40);
      }
      v42 = *v41;
      v43 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v43 != 0 && v43 <= 3 )
      {
        LOBYTE(v39) = v43 != 0;
        __asan_report_store4(v3 + 48, v39);
      }
      *(_DWORD *)(v3 + 48) = v42;
      if ( !data::MonsterExcelConfigMgrBase::findMonsterAffixExcelConfig(
              &txt_config_mgr->monster_config_mgr,
              *(unsigned int *)(v3 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 256));
    }
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
      "./src/txt_data_manual/HuntingExcelConfig.cpp",
      "checkHuntingMonsterConfig",
      562);
    v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 704),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v45 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v44, (const char (*)[10])"affix_id:");
    v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v46, (const char (*)[7])byte_1AD7AF20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
    *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v47 = 0;
LABEL_80:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    if ( v47 != 1 )
    {
      v11 = 0;
      goto LABEL_84;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false,false> *const)(v3 + 64));
  }
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
    "./src/txt_data_manual/HuntingExcelConfig.cpp",
    "checkHuntingMonsterConfig",
    554);
  v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 640),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v38 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v37, (const char (*)[36])byte_1AD84F40);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, config_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
  v2 = -1;
  v11 = 0;
LABEL_84:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v57 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF805C) = 0;
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
  }
  return result;
};

// Line 571: range 000000001448CA88-000000001448CC83
__int64 __fastcall HuntingExcelConfigMgr::findClueMonsterConfigIdByMonsterGroupId(
        const HuntingExcelConfigMgr *const this,
        __int64 monster_group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_hunting_clue_monster_group_2_clue_config_id; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 20 monster_group_id:570 64 8 8 iter:572 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HuntingExcelConfigMgr::findClueMonsterConfigIdByMonsterGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = monster_group_id;
  p_hunting_clue_monster_group_2_clue_config_id = &this->hunting_clue_monster_group_2_clue_config_id_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, monster_group_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_hunting_clue_monster_group_2_clue_config_id,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->hunting_clue_monster_group_2_clue_config_id_;
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

// Line 582: range 000000001448CC84-000000001448CE7F
__int64 __fastcall HuntingExcelConfigMgr::findClueGatherConfigIdByGatherGroupId(
        const HuntingExcelConfigMgr *const this,
        __int64 gather_group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_hunting_clue_gather_2_clue_config_id; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 19 gather_group_id:581 64 8 8 iter:583 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HuntingExcelConfigMgr::findClueGatherConfigIdByGatherGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gather_group_id;
  p_hunting_clue_gather_2_clue_config_id = &this->hunting_clue_gather_2_clue_config_id_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gather_group_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_hunting_clue_gather_2_clue_config_id,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->hunting_clue_gather_2_clue_config_id_;
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

// Line 593: range 000000001448CE80-000000001448D041
const std::vector<std::vector<unsigned int>> *__fastcall HuntingExcelConfigMgr::findRegionCertainMonsterVec(
        const HuntingExcelConfigMgr *const this,
        __int64 region_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>> *p_region_certain_monster_id_map; // rdx
  std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>> *v6; // rdx
  bool v7; // al
  const std::vector<std::vector<unsigned int>> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 region_id:592 64 8 8 iter:594 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HuntingExcelConfigMgr::findRegionCertainMonsterVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = region_id;
  p_region_certain_monster_id_map = &this->region_certain_monster_id_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, region_id);
  *(std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::find(p_region_certain_monster_id_map, (const std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::key_type *)(v2 + 48));
  v6 = &this->region_certain_monster_id_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v2 + 64))->second;
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
