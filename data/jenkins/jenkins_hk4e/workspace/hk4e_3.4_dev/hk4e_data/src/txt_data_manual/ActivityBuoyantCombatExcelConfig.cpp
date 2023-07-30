// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp

// Line 21: range 0000000012AD0C9E-0000000012AD1527
int32_t __cdecl ActivityBuoyantCombatExcelConfigMgr::rewriteLevelInfoMap(
        ActivityBuoyantCombatExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr,
        const data::BuoyantCombatExcelConfig *config)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t *p_activity_id; // rsi
  char *v8; // rsi
  unsigned int *v9; // rax
  int *v10; // rdx
  int v11; // ecx
  char v12; // al
  data::BuoyantCombatLevelExcelConfigMap *p_buoyant_combat_level_excel_config_map; // rdx
  data::BuoyantCombatLevelExcelConfigMap *v14; // rdx
  char *v15; // rsi
  bool v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  _BOOL4 v19; // eax
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false>::pointer v20; // rax
  uint32_t day_index; // ecx
  char v22; // al
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false>::pointer v23; // rdx
  uint32_t *p_gallery_id; // rax
  uint32_t gallery_id; // ecx
  char v26; // dl
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false>::pointer v27; // rax
  unsigned int *p_day_index; // rcx
  BuoyantCombatLevelInfo *v29; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> >,bool> v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false>::pointer v33; // rax
  int v34; // r15d
  int v35; // eax
  int32_t result; // eax
  std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::mapped_type *level_info_map; // [rsp+20h] [rbp-1C0h]
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-1B8h]
  char v40[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v4 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 4 11 level_id:23 64 8 14 __for_begin:23 96 8 12 __for_end:23 128 8 7 iter:25 160 8 9 <unkno"
                        "wn> 192 32 9 <unknown> 256 32 13 level_info:31 320 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityBuoyantCombatExcelConfigMgr::rewriteLevelInfoMap;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -202116109;
  p_activity_id = &config->activity_id;
  level_info_map = std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::operator[](
                     &this->buoyant_combat_level_info_map_,
                     &config->activity_id);
  __for_range = &config->level_id_list;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, p_activity_id);
  *(std::vector<unsigned int>::const_iterator *)(v4 + 64) = std::vector<unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, p_activity_id);
  *(std::vector<unsigned int>::const_iterator *)(v4 + 96) = std::vector<unsigned int>::end(__for_range);
  while ( 1 )
  {
    v8 = (char *)(v4 + 96);
    if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 64),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 96)) )
      break;
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
    v9 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 64));
    v10 = (int *)v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    v11 = *v10;
    v12 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(v8) = v12 != 0;
    if ( v12 != 0 && v12 <= 3 )
      __asan_report_store4(v4 + 48, v8);
    *(_DWORD *)(v4 + 48) = v11;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    p_buoyant_combat_level_excel_config_map = &this->buoyant_combat_level_excel_config_map;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, v8);
    *(std::unordered_map<unsigned int,data::BuoyantCombatLevelExcelConfig>::iterator *)(v4 + 128) = std::unordered_map<unsigned int,data::BuoyantCombatLevelExcelConfig>::find(p_buoyant_combat_level_excel_config_map, (const std::unordered_map<unsigned int,data::BuoyantCombatLevelExcelConfig>::key_type *)(v4 + 48));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    v14 = &this->buoyant_combat_level_excel_config_map;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 160, v4 + 48);
    *(std::unordered_map<unsigned int,data::BuoyantCombatLevelExcelConfig>::iterator *)(v4 + 160) = std::unordered_map<unsigned int,data::BuoyantCombatLevelExcelConfig>::end(v14);
    v15 = (char *)(v4 + 160);
    v16 = std::__detail::operator==<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false> *)(v4 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false> *)(v4 + 160));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v16 )
    {
      *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
        "rewriteLevelInfoMap",
        28);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              v17,
              (const char (*)[54])"buoyant_combat_level_excel_config_map doesn't has id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
      *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
      v19 = 0;
    }
    else
    {
      *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
      BuoyantCombatLevelInfo::BuoyantCombatLevelInfo((BuoyantCombatLevelInfo *const)(v4 + 256));
      v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false> *const)(v4 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v20->second.day_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v20->second.day_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v20->second.day_index);
      }
      day_index = v20->second.day_index;
      v22 = *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000);
      if ( v22 != 0 && v22 <= 3 )
      {
        LOBYTE(v15) = v22 != 0;
        __asan_report_store4(v4 + 256, v15);
      }
      *(_DWORD *)(v4 + 256) = day_index;
      v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false> *const)(v4 + 128));
      p_gallery_id = &v23->second.gallery_id;
      if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gallery_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(p_gallery_id);
      }
      gallery_id = v23->second.gallery_id;
      v26 = *(_BYTE *)(((v4 + 260) >> 3) + 0x7FFF8000);
      if ( v26 != 0 && (char)(((v4 + 4) & 7) + 3) >= v26 )
      {
        LOBYTE(v15) = v26 != 0;
        __asan_report_store4(v4 + 260, v15);
      }
      *(_DWORD *)(v4 + 260) = gallery_id;
      v27 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false> *const)(v4 + 128));
      std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v4 + 264), &v27->second.watcher_score);
      p_day_index = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false> *const)(v4 + 128))->second.day_index;
      v30 = std::map<unsigned int,BuoyantCombatLevelInfo>::emplace<unsigned int &,BuoyantCombatLevelInfo&>(
              level_info_map,
              p_day_index,
              (BuoyantCombatLevelInfo *)(v4 + 256),
              p_day_index,
              v29);
      if ( !v30.second )
      {
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
          "rewriteLevelInfoMap",
          37);
        v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v32 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                v31,
                (const char (*)[59])"buoyant_combat_level_excel_config_map duplicate day_index:");
        v33 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false> *const)(v4 + 128));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &v33->second.day_index);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
        *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v34 = 0;
      }
      else
      {
        v34 = 1;
      }
      BuoyantCombatLevelInfo::~BuoyantCombatLevelInfo((BuoyantCombatLevelInfo *const)(v4 + 256));
      v19 = v34 == 1;
    }
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -117901064;
    if ( !v19 )
    {
      v35 = 0;
      goto LABEL_40;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 64));
  }
  v35 = 1;
LABEL_40:
  if ( v35 == 1 )
    v3 = 0;
  result = v3;
  if ( v40 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 45: range 0000000012AD1528-0000000012AD242A
int32_t __cdecl ActivityBuoyantCombatExcelConfigMgr::checkLevelInfoMap(
        const ActivityBuoyantCombatExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::BuoyantCombatExcelConfig *config)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>> *p_buoyant_combat_level_info_map; // rdx
  uint32_t *p_activity_id; // rcx
  __int64 v9; // rsi
  uint32_t *v10; // rsi
  std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>> *v11; // rdx
  char *v12; // rsi
  bool v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::vector<unsigned int>::size_type v16; // r15
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  int v21; // eax
  std::vector<unsigned int>::size_type v22; // r15
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  int32_t result; // eax
  std::map<unsigned int,BuoyantCombatLevelInfo> *level_info_map; // [rsp+28h] [rbp-2D8h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> >::reference v37; // [rsp+38h] [rbp-2C8h]
  std::tuple_element<0,std::pair<unsigned int const,BuoyantCombatLevelInfo> >::type *day_index; // [rsp+40h] [rbp-2C0h]
  std::tuple_element<1,const std::pair<unsigned int const,BuoyantCombatLevelInfo> >::type *level_info; // [rsp+48h] [rbp-2B8h]
  char v40[688]; // [rsp+50h] [rbp-2B0h] BYREF

  v4 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(640LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 48 8 7 iter:47 80 8 9 <unknown> 112 8 14 __for_begin:59 144 8 12 __for_end:59 176 32 9 <unkno"
                        "wn> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknow"
                        "n> 560 48 17 gallery_id_set:46";
  *(_QWORD *)(v4 + 16) = ActivityBuoyantCombatExcelConfigMgr::checkLevelInfoMap;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862724] = -234881024;
  v6[536862725] = 62194;
  v6[536862726] = -219021312;
  v6[536862727] = 62194;
  v6[536862728] = -219021312;
  v6[536862729] = 62194;
  v6[536862730] = -219021312;
  v6[536862731] = 62194;
  v6[536862732] = -219021312;
  v6[536862733] = 62194;
  v6[536862734] = -219021312;
  v6[536862735] = 62194;
  v6[536862736] = -219021312;
  v6[536862737] = 62194;
  v6[536862739] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 560));
  p_buoyant_combat_level_info_map = &this->buoyant_combat_level_info_map_;
  p_activity_id = &config->activity_id;
  v9 = *(unsigned __int8 *)(((v4 + 48) >> 3) + 0x7FFF8000);
  if ( (_BYTE)v9 )
    __asan_report_store8(v4 + 48, v9);
  v10 = p_activity_id;
  *(std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::const_iterator *)(v4 + 48) = std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::find(p_buoyant_combat_level_info_map, p_activity_id);
  v11 = &this->buoyant_combat_level_info_map_;
  if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 80, v10);
  *(std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::const_iterator *)(v4 + 80) = std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::end(v11);
  v12 = (char *)(v4 + 80);
  v13 = std::operator==(
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo> > >::_Self *)(v4 + 48),
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo> > >::_Self *)(v4 + 80));
  *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v13 )
  {
    *(_DWORD *)(((v4 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 49) & 7) >= *(_BYTE *)(((v4 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
      "checkLevelInfoMap",
      50);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v4 + 176),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v15 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            v14,
            (const char (*)[40])"activity config not exist. activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->activity_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 176));
    *(_DWORD *)(((v4 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v3 = -1;
  }
  else
  {
    level_info_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo> > > *const)(v4 + 48))->second;
    v16 = std::vector<unsigned int>::size(&config->level_id_list);
    if ( v16 == std::map<unsigned int,BuoyantCombatLevelInfo>::size(level_info_map) )
    {
      *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 112, v12);
      *(std::map<unsigned int,BuoyantCombatLevelInfo>::const_iterator *)(v4 + 112) = std::map<unsigned int,BuoyantCombatLevelInfo>::begin(level_info_map);
      *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 144, v12);
      *(std::map<unsigned int,BuoyantCombatLevelInfo>::const_iterator *)(v4 + 144) = std::map<unsigned int,BuoyantCombatLevelInfo>::end(level_info_map);
      while ( 1 )
      {
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> >::_Self *)(v4 + 112),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> >::_Self *)(v4 + 144)) )
        {
          v21 = 1;
          goto LABEL_53;
        }
        v37 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> > *const)(v4 + 112));
        day_index = std::get<0ul,unsigned int const,BuoyantCombatLevelInfo>(v37);
        level_info = (std::tuple_element<1,const std::pair<unsigned int const,BuoyantCombatLevelInfo> >::type *)std::get<1ul,unsigned int const,BuoyantCombatLevelInfo>(v37);
        if ( *(_BYTE *)(((unsigned __int64)level_info >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)level_info >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(level_info);
        }
        if ( !level_info->day_index )
          goto LABEL_28;
        if ( *(_BYTE *)(((unsigned __int64)&level_info->gallery_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_info->gallery_id >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&level_info->gallery_id);
        }
        if ( !level_info->gallery_id )
        {
LABEL_28:
          *(_DWORD *)(((v4 + 304) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 304) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 335) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 + 79) & 7) >= *(_BYTE *)(((v4 + 335) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 304, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 304),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
            "checkLevelInfoMap",
            63);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 304),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v20 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  v19,
                  (const char (*)[37])"level_info not compelete. day_index:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &level_info->day_index);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 304));
          *(_DWORD *)(((v4 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v3 = -1;
          v21 = 0;
          goto LABEL_53;
        }
        if ( *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)day_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(day_index);
        }
        if ( !*day_index || (v22 = *day_index, v22 > std::vector<unsigned int>::size(&config->level_id_list)) )
        {
          *(_DWORD *)(((v4 + 368) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 368) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 399) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 113) & 7) >= *(_BYTE *)(((v4 + 399) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 368, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 368),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
            "checkLevelInfoMap",
            68);
          v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 368),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v25 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  v24,
                  (const char (*)[30])"level_info invalid day_index:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &level_info->day_index);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 368));
          *(_DWORD *)(((v4 + 368) >> 3) + 0x7FFF8000) = -117901064;
          v3 = -1;
          v21 = 0;
          goto LABEL_53;
        }
        p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&level_info->gallery_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_info->gallery_id >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&level_info->gallery_id);
        }
        if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, level_info->gallery_id) )
        {
          *(_DWORD *)(((v4 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 432) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 463) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 49) & 7) >= *(_BYTE *)(((v4 + 463) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 432, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
            "checkLevelInfoMap",
            73);
          v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 432),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v28 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v27,
                  (const char (*)[24])"level_info gallery_id: ");
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &level_info->gallery_id);
          common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])" invalid");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 432));
          *(_DWORD *)(((v4 + 432) >> 3) + 0x7FFF8000) = -117901064;
          v3 = -1;
          v21 = 0;
          goto LABEL_53;
        }
        v30 = std::set<unsigned int>::insert((std::set<unsigned int> *const)(v4 + 560), &level_info->gallery_id);
        if ( !v30.second )
          break;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> > *const)(v4 + 112));
      }
      *(_DWORD *)(((v4 + 496) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 496) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 527) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 15) & 7) >= *(_BYTE *)(((v4 + 527) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 496, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 496),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
        "checkLevelInfoMap",
        78);
      v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 496),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v32 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              v31,
              (const char (*)[44])"level_info gallery_id dunplicate day_index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &level_info->day_index);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 496));
      *(_DWORD *)(((v4 + 496) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
      v21 = 0;
LABEL_53:
      *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = -8;
      if ( v21 == 1 )
        v3 = 0;
    }
    else
    {
      *(_DWORD *)(((v4 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 15) & 7) >= *(_BYTE *)(((v4 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
        "checkLevelInfoMap",
        56);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 240),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              v17,
              (const char (*)[46])"level_info_map size not correct. activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 240));
      *(_DWORD *)(((v4 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
    }
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 560));
  result = v3;
  if ( v40 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 86: range 0000000012AD242C-0000000012AD2C90
int32_t __cdecl ActivityBuoyantCombatExcelConfigMgr::checkBuoyantCombatConfig(
        const ActivityBuoyantCombatExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t *p_activity_id; // rax
  __int64 activity_id; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  char *v12; // rsi
  unsigned int *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  data::BuoyantCombatLevelExcelConfigMap *p_buoyant_combat_level_excel_config_map; // rdx
  data::BuoyantCombatLevelExcelConfigMap *v18; // rdx
  bool v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  int v24; // edx
  int v25; // edx
  int32_t result; // eax
  data::BuoyantCombatExcelConfigMap *__for_range; // [rsp+10h] [rbp-1E0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false,false>::reference v29; // [rsp+18h] [rbp-1D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::BuoyantCombatExcelConfig> >::type *id; // [rsp+20h] [rbp-1D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BuoyantCombatExcelConfig> >::type *config; // [rsp+28h] [rbp-1C8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1B8h]
  char v33[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 11 level_id:95 64 8 14 __for_begin:87 96 8 12 __for_end:87 128 8 14 __for_begin:95 160 8 "
                        "12 __for_end:95 192 8 7 iter:97 224 8 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBuoyantCombatExcelConfigMgr::checkBuoyantCombatConfig;
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
  v5[536862731] = -202116109;
  __for_range = &this->buoyant_combat_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BuoyantCombatExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BuoyantCombatExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BuoyantCombatExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::BuoyantCombatExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false> *)(v3 + 96)) )
    {
      v11 = 1;
      goto LABEL_43;
    }
    v29 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::BuoyantCombatExcelConfig>(v29);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BuoyantCombatExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BuoyantCombatExcelConfig>(v29);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    p_activity_id = &config->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_activity_id);
    }
    activity_id = config->activity_id;
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(p_new_activity_config_mgr, activity_id) )
      break;
    __for_range_0 = &config->level_id_list;
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
      v12 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v13 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v14 = (int *)v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      v16 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v12) = v16 != 0;
      if ( v16 != 0 && v16 <= 3 )
        __asan_report_store4(v3 + 48, v12);
      *(_DWORD *)(v3 + 48) = v15;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      p_buoyant_combat_level_excel_config_map = &this->buoyant_combat_level_excel_config_map;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v12);
      *(std::unordered_map<unsigned int,data::BuoyantCombatLevelExcelConfig>::const_iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::BuoyantCombatLevelExcelConfig>::find(p_buoyant_combat_level_excel_config_map, (const std::unordered_map<unsigned int,data::BuoyantCombatLevelExcelConfig>::key_type *)(v3 + 48));
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      v18 = &this->buoyant_combat_level_excel_config_map;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v3 + 48);
      *(std::unordered_map<unsigned int,data::BuoyantCombatLevelExcelConfig>::const_iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::BuoyantCombatLevelExcelConfig>::end(v18);
      v19 = std::__detail::operator==<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false> *)(v3 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false> *)(v3 + 224));
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( v19 )
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
          "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
          "checkBuoyantCombatConfig",
          100);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                v20,
                (const char (*)[42])"checkBuoyantCombatConfig fail. level_id: ");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v3 + 48));
        v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])", id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v24 = 0;
      }
      else
      {
        v24 = 1;
      }
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v24 != 1 )
      {
        v25 = 0;
        goto LABEL_39;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    v25 = 1;
LABEL_39:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v25 != 1 )
    {
      v11 = 0;
      goto LABEL_43;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
    "checkBuoyantCombatConfig",
    92);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 256),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v9, (const char (*)[21])"invalid activity_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->activity_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  v2 = -1;
  v11 = 0;
LABEL_43:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 109: range 0000000012AD2C92-0000000012AD3F5F
int32_t __cdecl ActivityBuoyantCombatExcelConfigMgr::checkBuoyantCombatLevelConfig(
        const ActivityBuoyantCombatExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  uint32_t *p_gallery_id; // rax
  __int64 gallery_id; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  std::vector<unsigned int>::size_type v12; // r15
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::vector<unsigned int>::size_type v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::vector<unsigned int>::size_type v18; // rax
  char *v19; // rsi
  unsigned int *v20; // rax
  int *v21; // rdx
  int v22; // ecx
  char v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // eax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::vector<unsigned int>::size_type v29; // rax
  __int64 v30; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v31; // rax
  int *v32; // rdx
  int v33; // ecx
  char v34; // al
  const std::any *p_param; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  int v40; // edx
  int v41; // edx
  uint32_t idx; // [rsp+24h] [rbp-3ACh]
  data::BuoyantCombatLevelExcelConfigMap *__for_range; // [rsp+28h] [rbp-3A8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false>::reference v46; // [rsp+30h] [rbp-3A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig> >::type *config; // [rsp+40h] [rbp-390h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-388h]
  const data::NewActivityWatcherConfig *activity_watcher_config_ptr; // [rsp+50h] [rbp-380h]
  char v50[880]; // [rsp+60h] [rbp-370h] BYREF

  v3 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(832LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 32 4 19 each_watcher_id:125 48 4 17 watcher_score:138 64 8 15 __for_begin:112 96 8 13 __for_e"
                        "nd:112 128 8 9 <unknown> 160 8 9 <unknown> 192 8 15 __for_begin:125 224 8 13 __for_end:125 256 8"
                        " 9 <unknown> 288 8 9 param:141 320 24 14 watcher_id:110 384 24 17 watcher_score:111 448 32 9 <un"
                        "known> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBuoyantCombatExcelConfigMgr::checkBuoyantCombatLevelConfig;
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
  v5[536862730] = -234881024;
  v5[536862731] = -218959118;
  v5[536862732] = -234881024;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 320));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 384));
  __for_range = &this->buoyant_combat_level_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BuoyantCombatLevelExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BuoyantCombatLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BuoyantCombatLevelExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::BuoyantCombatLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false> *)(v3 + 96)) )
    {
      v11 = 1;
      goto LABEL_68;
    }
    v46 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::BuoyantCombatLevelExcelConfig>(v46);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BuoyantCombatLevelExcelConfig>(v46);
    p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
    p_gallery_id = &config->gallery_id;
    if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gallery_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_gallery_id);
    }
    gallery_id = config->gallery_id;
    if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, gallery_id) )
    {
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
        "checkBuoyantCombatLevelConfig",
        116);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 448),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              v9,
              (const char (*)[49])"checkBuoyantCombatLevelConfig fail. gallery_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->gallery_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
      goto LABEL_68;
    }
    v12 = std::vector<unsigned int>::size(&config->watcher_id);
    if ( v12 != std::vector<unsigned int>::size(&config->watcher_score) )
      break;
    idx = 0;
    __for_range_0 = &config->watcher_id;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, gallery_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, gallery_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v19 = (char *)(v3 + 224);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224)) )
        break;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v20 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
      v21 = (int *)v20;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v20);
      }
      v22 = *v21;
      v23 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v23 != 0 && v23 <= 3 )
      {
        LOBYTE(v19) = v23 != 0;
        __asan_report_store4(v3 + 32, v19);
      }
      *(_DWORD *)(v3 + 32) = v22;
      activity_watcher_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
                                      &txt_config_mgr->new_activity_config_mgr,
                                      *(unsigned int *)(v3 + 32));
      if ( activity_watcher_config_ptr )
      {
        if ( idx < std::vector<unsigned int>::size(&config->watcher_score) )
        {
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          v30 = idx;
          v31 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&config->watcher_score, idx);
          v32 = (int *)v31;
          if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v31);
          }
          v33 = *v32;
          v34 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          LOBYTE(v30) = v34 != 0;
          if ( v34 != 0 && v34 <= 3 )
            __asan_report_store4(v3 + 48, v30);
          *(_DWORD *)(v3 + 48) = v33;
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
          p_param = &activity_watcher_config_ptr->param;
          if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 288, v30);
          *(GalleryBuoyantCombatReachScoreWatcherParam *)(v3 + 288) = std::any_cast<GalleryBuoyantCombatReachScoreWatcherParam>(p_param);
          if ( *(_BYTE *)(((v3 + 292) >> 3) + 0x7FFF8000) != 0
            && (char)(((v3 + 36) & 7) + 3) >= *(_BYTE *)(((v3 + 292) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v3 + 292);
          }
          if ( *(_DWORD *)(v3 + 292) == *(_DWORD *)(v3 + 48) )
          {
            v40 = 1;
          }
          else
          {
            *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 704, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 704),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
              "checkBuoyantCombatLevelConfig",
              144);
            v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 704),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v37 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    v36,
                    (const char (*)[51])"checkBuoyantCombatLevelConfig fail. watcher_score:");
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v37,
                    (const unsigned int *)(v3 + 48));
            v39 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v38,
                    (const char (*)[15])", param.score:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v39,
              (const unsigned int *)(v3 + 292));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
            *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v40 = 0;
          }
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
          if ( v40 == 1 )
          {
            ++idx;
            v26 = 1;
          }
          else
          {
            v26 = 0;
          }
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
            4u,
            "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
            "checkBuoyantCombatLevelConfig",
            135);
          v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 640),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v28 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  v27,
                  (const char (*)[56])"checkBuoyantCombatLevelConfig fail. watcher_score size:");
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          v29 = std::vector<unsigned int>::size(&config->watcher_score);
          if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
            v29 = __asan_report_store8(v3 + 256, "checkBuoyantCombatLevelConfig fail. watcher_score size:");
          *(_QWORD *)(v3 + 256) = v29;
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v28,
            (const unsigned __int64 *)(v3 + 256));
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
          *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v26 = 0;
        }
      }
      else
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
          "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
          "checkBuoyantCombatLevelConfig",
          130);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v24, (const char (*)[63])byte_1AA23320);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
        *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v26 = 0;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v26 != 1 )
      {
        v41 = 0;
        goto LABEL_64;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
    }
    v41 = 1;
LABEL_64:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v41 != 1 )
    {
      v11 = 0;
      goto LABEL_68;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BuoyantCombatLevelExcelConfig>,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
    "checkBuoyantCombatLevelConfig",
    121);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 512),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
          v13,
          (const char (*)[53])"checkBuoyantCombatLevelConfig fail. watcher_id size:");
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  v15 = std::vector<unsigned int>::size(&config->watcher_id);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    v15 = __asan_report_store8(v3 + 128, "checkBuoyantCombatLevelConfig fail. watcher_id size:");
  *(_QWORD *)(v3 + 128) = v15;
  v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v14,
          (const unsigned __int64 *)(v3 + 128));
  v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v16,
          (const char (*)[22])", watcher_score size:");
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  v18 = std::vector<unsigned int>::size(&config->watcher_score);
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    v18 = __asan_report_store8(v3 + 160, ", watcher_score size:");
  *(_QWORD *)(v3 + 160) = v18;
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, (const unsigned __int64 *)(v3 + 160));
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
  *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v11 = 0;
LABEL_68:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v11 == 1 )
    v2 = 0;
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 384));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 320));
  if ( v50 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
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
  }
  return v2;
};

// Line 160: range 0000000012AD3F60-0000000012AD42A7
int32_t __cdecl ActivityBuoyantCombatExcelConfigMgr::rewriteConfig(
        ActivityBuoyantCombatExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  int32_t result; // eax
  data::BuoyantCombatExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false,false>::reference v11; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BuoyantCombatExcelConfig> >::type *config; // [rsp+28h] [rbp-D8h]
  char v13[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:161 64 8 13 __for_end:161 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBuoyantCombatExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->buoyant_combat_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BuoyantCombatExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BuoyantCombatExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BuoyantCombatExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BuoyantCombatExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_16;
    }
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::BuoyantCombatExcelConfig>(v11);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BuoyantCombatExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BuoyantCombatExcelConfig>(v11);
    if ( ActivityBuoyantCombatExcelConfigMgr::rewriteLevelInfoMap(this, txt_config_mgr, config) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
    "rewriteConfig",
    165);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
         v6,
         (const char (*)[39])"rewriteLevelInfoMap fails activity_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->activity_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v8 = 0;
LABEL_16:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v13 == (char *)v3 )
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

// Line 173: range 0000000012AD42A8-0000000012AD4876
int32_t __cdecl ActivityBuoyantCombatExcelConfigMgr::checkConfig(
        ActivityBuoyantCombatExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  int32_t result; // eax
  data::BuoyantCombatExcelConfigMap *__for_range; // [rsp+10h] [rbp-170h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false,false>::reference v13; // [rsp+18h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BuoyantCombatExcelConfig> >::type *config; // [rsp+28h] [rbp-158h]
  char v15[336]; // [rsp+30h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 15 __for_begin:184 64 8 13 __for_end:184 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBuoyantCombatExcelConfigMgr::checkConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  if ( ActivityBuoyantCombatExcelConfigMgr::checkBuoyantCombatConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
      "checkConfig",
      176);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v6,
      (const char (*)[31])"checkBuoyantCombatConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    v2 = -1;
  }
  else if ( ActivityBuoyantCombatExcelConfigMgr::checkBuoyantCombatLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
      "checkConfig",
      181);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v7,
      (const char (*)[36])"checkBuoyantCombatLevelConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    v2 = -1;
  }
  else
  {
    __for_range = &this->buoyant_combat_excel_config_map;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 32, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::BuoyantCombatExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BuoyantCombatExcelConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::BuoyantCombatExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BuoyantCombatExcelConfig>::end(__for_range);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false> *)(v3 + 32),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false> *)(v3 + 64)) )
      {
        v10 = 1;
        goto LABEL_24;
      }
      v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false,false> *const)(v3 + 32));
      std::get<0ul,unsigned int const,data::BuoyantCombatExcelConfig>(v13);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::BuoyantCombatExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BuoyantCombatExcelConfig>(v13);
      if ( ActivityBuoyantCombatExcelConfigMgr::checkLevelInfoMap(this, txt_config_mgr, config) )
        break;
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuoyantCombatExcelConfig>,false,false> *const)(v3 + 32));
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
      "./src/txt_data_manual/ActivityBuoyantCombatExcelConfig.cpp",
      "checkConfig",
      188);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 224),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           v8,
           (const char (*)[36])"checkLevelInfoMap fail activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->activity_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    v2 = -1;
    v10 = 0;
LABEL_24:
    if ( v10 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v15 == (char *)v3 )
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

// Line 196: range 0000000012AD4878-0000000012AD4B5F
const BuoyantCombatLevelInfo *__fastcall ActivityBuoyantCombatExcelConfigMgr::findLevelInfoByActivityIdAndDayIndex(
        const ActivityBuoyantCombatExcelConfigMgr *const this,
        __int64 activity_id,
        uint32_t day_index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>> *p_buoyant_combat_level_info_map; // rdx
  std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>> *v7; // rdx
  bool v8; // al
  const BuoyantCombatLevelInfo *result; // rax
  std::map<unsigned int,BuoyantCombatLevelInfo> *p_second; // rdx
  std::map<unsigned int,BuoyantCombatLevelInfo> *v11; // rdx
  bool v12; // al
  char v14[224]; // [rsp+10h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 15 activity_id:195 48 4 13 day_index:195 64 8 9 iter1:197 96 8 9 <unknown> 128 8 9 iter2:"
                        "202 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBuoyantCombatExcelConfigMgr::findLevelInfoByActivityIdAndDayIndex;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = activity_id;
  *(_DWORD *)(v3 + 48) = day_index;
  p_buoyant_combat_level_info_map = &this->buoyant_combat_level_info_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, activity_id);
  *(std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::find(p_buoyant_combat_level_info_map, (const std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::key_type *)(v3 + 32));
  v7 = &this->buoyant_combat_level_info_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo> > > *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,BuoyantCombatLevelInfo>::const_iterator *)(v3 + 128) = std::map<unsigned int,BuoyantCombatLevelInfo>::find(
                                                                                     p_second,
                                                                                     (const std::map<unsigned int,BuoyantCombatLevelInfo>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v11 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo> > > *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,BuoyantCombatLevelInfo>::const_iterator *)(v3 + 160) = std::map<unsigned int,BuoyantCombatLevelInfo>::end(v11);
    v12 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
      result = 0LL;
    else
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> > *const)(v3 + 128))->second;
  }
  if ( v14 == (char *)v3 )
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

// Line 211: range 0000000012AD4B60-0000000012AD4ED7
const BuoyantCombatLevelInfo *__fastcall ActivityBuoyantCombatExcelConfigMgr::findLevelInfoByActivityIdAndGalleryId(
        const ActivityBuoyantCombatExcelConfigMgr *const this,
        __int64 activity_id,
        uint32_t gallery_id)
{
  const BuoyantCombatLevelInfo *v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>> *p_buoyant_combat_level_info_map; // rdx
  std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>> *v8; // rdx
  char *v9; // rsi
  bool v10; // al
  uint32_t *p_gallery_id; // rax
  int v12; // eax
  const BuoyantCombatLevelInfo *result; // rax
  std::map<unsigned int,BuoyantCombatLevelInfo> *__for_range; // [rsp+10h] [rbp-110h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> >::reference v16; // [rsp+18h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,BuoyantCombatLevelInfo> >::type *level_info; // [rsp+28h] [rbp-F8h]
  char v18[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 15 activity_id:210 64 8 9 iter1:212 96 8 9 <unknown> 128 8 15 __for_begin:218 160 8 13 __for_end:218";
  *(_QWORD *)(v4 + 16) = ActivityBuoyantCombatExcelConfigMgr::findLevelInfoByActivityIdAndGalleryId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -202116352;
  *(_DWORD *)(v4 + 48) = activity_id;
  p_buoyant_combat_level_info_map = &this->buoyant_combat_level_info_map_;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, activity_id);
  *(std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::const_iterator *)(v4 + 64) = std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::find(p_buoyant_combat_level_info_map, (const std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::key_type *)(v4 + 48));
  v8 = &this->buoyant_combat_level_info_map_;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 48);
  *(std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::const_iterator *)(v4 + 96) = std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::end(v8);
  v9 = (char *)(v4 + 96);
  v10 = std::operator==(
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo> > >::_Self *)(v4 + 64),
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo> > >::_Self *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    v3 = 0LL;
  }
  else
  {
    __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo> > > *const)(v4 + 64))->second;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, v9);
    *(std::map<unsigned int,BuoyantCombatLevelInfo>::const_iterator *)(v4 + 128) = std::map<unsigned int,BuoyantCombatLevelInfo>::begin(__for_range);
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 160, v9);
    *(std::map<unsigned int,BuoyantCombatLevelInfo>::const_iterator *)(v4 + 160) = std::map<unsigned int,BuoyantCombatLevelInfo>::end(__for_range);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> >::_Self *)(v4 + 128),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> >::_Self *)(v4 + 160)) )
    {
      v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> > *const)(v4 + 128));
      std::get<0ul,unsigned int const,BuoyantCombatLevelInfo>(v16);
      level_info = (std::tuple_element<1,const std::pair<unsigned int const,BuoyantCombatLevelInfo> >::type *)std::get<1ul,unsigned int const,BuoyantCombatLevelInfo>(v16);
      p_gallery_id = &level_info->gallery_id;
      if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gallery_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(p_gallery_id);
      }
      if ( gallery_id == level_info->gallery_id )
      {
        v3 = level_info;
        v12 = 0;
        goto LABEL_22;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> > *const)(v4 + 128));
    }
    v12 = 1;
LABEL_22:
    if ( v12 == 1 )
      v3 = 0LL;
  }
  result = v3;
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 229: range 0000000012AD4ED8-0000000012AD5093
const BuoyantCombatLevelInfoMap *__fastcall ActivityBuoyantCombatExcelConfigMgr::findLevelInfoMapByActivityId(
        const ActivityBuoyantCombatExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>> *p_buoyant_combat_level_info_map; // rdx
  std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>> *v6; // rdx
  bool v7; // al
  const BuoyantCombatLevelInfoMap *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:228 64 8 8 iter:230 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBuoyantCombatExcelConfigMgr::findLevelInfoMapByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_buoyant_combat_level_info_map = &this->buoyant_combat_level_info_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::find(p_buoyant_combat_level_info_map, (const std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::key_type *)(v2 + 48));
  v6 = &this->buoyant_combat_level_info_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<unsigned int,BuoyantCombatLevelInfo>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,BuoyantCombatLevelInfo> > > *const)(v2 + 64))->second;
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
