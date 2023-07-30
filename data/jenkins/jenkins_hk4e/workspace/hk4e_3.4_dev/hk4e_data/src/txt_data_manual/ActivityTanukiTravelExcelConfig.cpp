// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityTanukiTravelExcelConfig.cpp

// Line 18: range 0000000012E2E5E4-0000000012E2F58C
int32_t __cdecl ActivityTanukiTravelExcelConfigMgr::rewriteConfig(
        ActivityTanukiTravelExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::vector<unsigned int> *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >,bool> v7; // rax
  const unsigned int *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  _BOOL4 v11; // eax
  uint32_t *p_activity_id; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  char *v17; // rsi
  std::set<unsigned int> *v18; // r8
  unsigned int *v19; // rax
  int *v20; // rdx
  int v21; // ecx
  char v22; // al
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  uint32_t open_day_index; // r15d
  const unsigned int *p_quest_id; // rcx
  const unsigned int *v27; // rdx
  __int64 v28; // rsi
  char *v29; // rsi
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::mapped_type *v30; // rax
  uint32_t *v31; // rdx
  char v32; // cl
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >,bool> v33; // rax
  TanukiTravelActivityInfo *v34; // r8
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  int v37; // r15d
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,TanukiTravelActivityInfo> >,bool> v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  unsigned __int64 v41; // rdx
  int v42; // eax
  int32_t result; // eax
  data::ActivityTanukiTravelDataExcelConfigMap *__for_range; // [rsp+20h] [rbp-2E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig>,false,false>::reference v45; // [rsp+28h] [rbp-2D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig> >::type *config; // [rsp+38h] [rbp-2C8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-2C0h]
  data::ActivityTanukiTravelRouteDataExcelConfig *route_config_ptr; // [rsp+48h] [rbp-2B8h]
  char v49[688]; // [rsp+50h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 4 11 level_id:33 64 4 16 activity_info:50 80 8 14 __for_begin:19 112 8 12 __for_end:19 144"
                        " 8 14 __for_begin:33 176 8 12 __for_end:33 208 8 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknow"
                        "n> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 48 19 parent_quest_set:32";
  *(_QWORD *)(v3 + 16) = ActivityTanukiTravelExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862739] = -202116109;
  __for_range = &this->activity_tanuki_travel_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityTanukiTravelDataExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::ActivityTanukiTravelDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityTanukiTravelDataExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::ActivityTanukiTravelDataExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig>,false> *)(v3 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig>,false> *)(v3 + 112)) )
  {
    v45 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig>,false,false> *const)(v3 + 80));
    std::get<0ul,unsigned int const,data::ActivityTanukiTravelDataExcelConfig>(v45);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityTanukiTravelDataExcelConfig>(v45);
    v7 = std::map<unsigned int,std::vector<unsigned int>>::emplace<unsigned int const&,std::vector<unsigned int> const&>(
           &this->level_info_map,
           &config->activity_id,
           &config->activity_open_list,
           &config->activity_id,
           v6);
    if ( !v7.second )
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTanukiTravelExcelConfig.cpp",
        "rewriteConfig",
        23);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              v9,
              (const char (*)[59])"[TANUKI_TRAVEL] level_info_map emplace fails, activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
    }
    else
    {
      p_activity_id = &config->activity_id;
      v13 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
              &this->activity_guide_map,
              &config->activity_id,
              &config->guide_quest_id,
              &config->activity_id,
              v8);
      if ( !v13.second )
      {
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 304, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 304),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityTanukiTravelExcelConfig.cpp",
          "rewriteConfig",
          28);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 304),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                v14,
                (const char (*)[63])"[TANUKI_TRAVEL] activity_guide_map emplace fails, activity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->activity_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
      else
      {
        v16 = ((v3 + 560) >> 3) + 2147450880;
        *(_DWORD *)v16 = 0;
        *(_WORD *)(v16 + 4) = 0;
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 560));
        __for_range_0 = &config->activity_open_list;
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 144, p_activity_id);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 144) = std::vector<unsigned int>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 176, p_activity_id);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 176) = std::vector<unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          v17 = (char *)(v3 + 176);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 144),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 176)) )
            break;
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          v19 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 144));
          v20 = (int *)v19;
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v19);
          }
          v21 = *v20;
          v22 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          if ( v22 != 0 && v22 <= 3 )
          {
            LOBYTE(v17) = v22 != 0;
            __asan_report_store4(v3 + 48, v17);
          }
          *(_DWORD *)(v3 + 48) = v21;
          route_config_ptr = data::ActivityTanukiTravelExcelConfigMgrBase::findActivityTanukiTravelRouteDataExcelConfig(
                               this,
                               *(unsigned int *)(v3 + 48));
          if ( route_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&route_config_ptr->open_day_index >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&route_config_ptr->open_day_index >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&route_config_ptr->open_day_index);
            }
            open_day_index = route_config_ptr->open_day_index;
            *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
            p_quest_id = &route_config_ptr->quest_id;
            v27 = &config->activity_id;
            v28 = *(unsigned __int8 *)(((v3 + 208) >> 3) + 0x7FFF8000);
            if ( (_BYTE)v28 )
              __asan_report_store8(v3 + 208, v28);
            *(std::pair<unsigned int,unsigned int> *)(v3 + 208) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                                    v27,
                                                                    p_quest_id);
            v29 = (char *)(v3 + 208);
            v30 = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::operator[](
                    &this->last_quest_level_map,
                    (std::map<std::pair<unsigned int,unsigned int>,unsigned int>::key_type *)(v3 + 208));
            v31 = v30;
            v32 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
            if ( v32 != 0 && (char)(((unsigned __int8)v30 & 7) + 3) >= v32 )
            {
              LOBYTE(v29) = v32 != 0;
              __asan_report_store4(v30, v29);
            }
            *v31 = open_day_index;
            *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
            std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 560), &route_config_ptr->quest_id);
          }
          else
          {
            *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 368, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 368),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityTanukiTravelExcelConfig.cpp",
              "rewriteConfig",
              38);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 368),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v24 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                    v23,
                    (const char (*)[62])"findActivityTanukiTravelRouteDataExcelConfig fails, level_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
            *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 144));
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
        v33 = std::map<unsigned int,std::set<unsigned int>>::emplace<unsigned int const&,std::set<unsigned int>&>(
                &this->activity_parent_quest_map,
                &config->activity_id,
                (std::set<unsigned int> *)(v3 + 560),
                (const unsigned int *)&this->activity_parent_quest_map,
                v18);
        if ( !v33.second )
        {
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 432, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityTanukiTravelExcelConfig.cpp",
            "rewriteConfig",
            46);
          v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 432),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v36 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                  v35,
                  (const char (*)[70])"[TANUKI_TRAVEL] activity_parent_quest_map emplace fails, activity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &config->activity_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v37 = 0;
        }
        else
        {
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 64, &config->activity_id);
          *(_DWORD *)(v3 + 64) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&config->guide_quest_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->guide_quest_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->guide_quest_id);
          }
          *(_DWORD *)(v3 + 64) = config->guide_quest_id;
          v38 = std::map<unsigned int,TanukiTravelActivityInfo>::emplace<unsigned int const&,TanukiTravelActivityInfo&>(
                  &this->tanuki_travel_activity_info_map,
                  &config->activity_id,
                  (TanukiTravelActivityInfo *)(v3 + 64),
                  (const unsigned int *)&this->tanuki_travel_activity_info_map,
                  v34);
          if ( !v38.second )
          {
            *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 496, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 496),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityTanukiTravelExcelConfig.cpp",
              "rewriteConfig",
              54);
            v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 496),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v40 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                    v39,
                    (const char (*)[76])"[TANUKI_TRAVEL] tanuki_travel_activity_info_map emplace fails, activity_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &config->activity_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
            *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v37 = 0;
          }
          else
          {
            v37 = 1;
          }
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 560));
        v11 = v37 == 1;
      }
    }
    v41 = ((v3 + 560) >> 3) + 2147450880;
    *(_DWORD *)v41 = -117901064;
    *(_WORD *)(v41 + 4) = -1800;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !v11 )
    {
      v42 = 0;
      goto LABEL_58;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig>,false,false> *const)(v3 + 80));
  }
  v42 = 1;
LABEL_58:
  if ( v42 == 1 )
    v2 = 0;
  result = v2;
  if ( v49 == (char *)v3 )
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
  }
  return result;
};

// Line 62: range 0000000012E2F58E-0000000012E2F8B2
int32_t __cdecl ActivityTanukiTravelExcelConfigMgr::checkConfig(
        ActivityTanukiTravelExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityTanukiTravelExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivityTanukiTravelExcelConfigMgr::checkTanukiTravelData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityTanukiTravelExcelConfig.cpp",
      "checkConfig",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v5,
      (const char (*)[30])"checkTanukiTravelData failed.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( ActivityTanukiTravelExcelConfigMgr::checkTanukiTravelRouteData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityTanukiTravelExcelConfig.cpp",
      "checkConfig",
      70);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v7,
      (const char (*)[35])"checkTanukiTravelRouteData failed.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
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

// Line 77: range 0000000012E2F8B4-0000000012E30228
int32_t __cdecl ActivityTanukiTravelExcelConfigMgr::checkTanukiTravelData(
        ActivityTanukiTravelExcelConfigMgr *const this,
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
  char *v17; // rsi
  unsigned int *v18; // rax
  int *v19; // rdx
  int v20; // ecx
  char v21; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // edx
  int v25; // eax
  int32_t result; // eax
  data::ActivityTanukiTravelDataExcelConfigMap *__for_range; // [rsp+10h] [rbp-1E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig>,false,false>::reference v29; // [rsp+18h] [rbp-1D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig> >::type *config; // [rsp+28h] [rbp-1C8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1B8h]
  char v32[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 16 activity_type:87 48 4 11 route_id:94 64 8 14 __for_begin:78 96 8 12 __for_end:78 128 8"
                        " 14 __for_begin:94 160 8 12 __for_end:94 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityTanukiTravelExcelConfigMgr::checkTanukiTravelData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -202116109;
  __for_range = &this->activity_tanuki_travel_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityTanukiTravelDataExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityTanukiTravelDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityTanukiTravelDataExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityTanukiTravelDataExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig>,false> *)(v3 + 96)) )
  {
    v29 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::ActivityTanukiTravelDataExcelConfig>(v29);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityTanukiTravelDataExcelConfig>(v29);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    p_activity_id = &config->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_activity_id);
    }
    if ( data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(p_new_activity_config_mgr, config->activity_id) )
    {
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v11 = &txt_config_mgr->new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->activity_id);
      }
      activity_id = config->activity_id;
      ActivitiyTypeByActivityId = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(v11, activity_id);
      v13 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      LOBYTE(activity_id) = v13 != 0;
      if ( v13 != 0 && v13 <= 3 )
        __asan_report_store4(v3 + 32, activity_id);
      *(_DWORD *)(v3 + 32) = ActivitiyTypeByActivityId;
      if ( *(_DWORD *)(v3 + 32) == 2401 )
      {
        __for_range_0 = &config->activity_open_list;
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
          v17 = (char *)(v3 + 160);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
          {
            v24 = 1;
            goto LABEL_40;
          }
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          v18 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
          v19 = (int *)v18;
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v18);
          }
          v20 = *v19;
          v21 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          if ( v21 != 0 && v21 <= 3 )
          {
            LOBYTE(v17) = v21 != 0;
            __asan_report_store4(v3 + 48, v17);
          }
          *(_DWORD *)(v3 + 48) = v20;
          if ( !data::ActivityTanukiTravelExcelConfigMgrBase::findActivityTanukiTravelRouteDataExcelConfig(
                  this,
                  *(unsigned int *)(v3 + 48)) )
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
          "./src/txt_data_manual/ActivityTanukiTravelExcelConfig.cpp",
          "checkTanukiTravelData",
          98);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v22, (const char (*)[46])byte_1AAAF420);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v24 = 0;
LABEL_40:
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        v10 = v24 == 1;
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
          "./src/txt_data_manual/ActivityTanukiTravelExcelConfig.cpp",
          "checkTanukiTravelData",
          90);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v15, (const char (*)[47])byte_1AAAF3C0);
        common::milog::MiLogStream::operator<<<data::NewActivityType,(data::NewActivityType*)0>(
          v16,
          (const data::NewActivityType *)(v3 + 32));
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
        "./src/txt_data_manual/ActivityTanukiTravelExcelConfig.cpp",
        "checkTanukiTravelData",
        83);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v8, (const char (*)[33])byte_1AAAF360);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( !v10 )
    {
      v25 = 0;
      goto LABEL_45;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTanukiTravelDataExcelConfig>,false,false> *const)(v3 + 64));
  }
  v25 = 1;
LABEL_45:
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

// Line 107: range 0000000012E3022A-0000000012E30C7F
int32_t __cdecl ActivityTanukiTravelExcelConfigMgr::checkTanukiTravelRouteData(
        ActivityTanukiTravelExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int32_t result; // eax
  data::ActivityTanukiTravelRouteDataExcelConfigMap *__for_range; // [rsp+10h] [rbp-1F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTanukiTravelRouteDataExcelConfig>,false,false>::reference v25; // [rsp+18h] [rbp-1E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityTanukiTravelRouteDataExcelConfig> >::type *id; // [rsp+20h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityTanukiTravelRouteDataExcelConfig> >::type *config; // [rsp+28h] [rbp-1D8h]
  char v28[464]; // [rsp+30h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 15 __for_begin:108 64 8 13 __for_end:108 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityTanukiTravelExcelConfigMgr::checkTanukiTravelRouteData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  __for_range = &this->activity_tanuki_travel_route_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityTanukiTravelRouteDataExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityTanukiTravelRouteDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityTanukiTravelRouteDataExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityTanukiTravelRouteDataExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityTanukiTravelRouteDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityTanukiTravelRouteDataExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityTanukiTravelRouteDataExcelConfig>,false> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_51;
    }
    v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTanukiTravelRouteDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTanukiTravelRouteDataExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::ActivityTanukiTravelRouteDataExcelConfig>(v25);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityTanukiTravelRouteDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityTanukiTravelRouteDataExcelConfig>(v25);
    if ( *(_BYTE *)(((unsigned __int64)&config->open_day_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->open_day_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->open_day_index);
    }
    if ( !config->open_day_index || config->open_day_index > 7 )
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
        "./src/txt_data_manual/ActivityTanukiTravelExcelConfig.cpp",
        "checkTanukiTravelRouteData",
        113);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             v6,
             (const char (*)[51])"checkTanukiTravelRouteData invalid open_day_index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->open_day_index);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v8 = 0;
      goto LABEL_51;
    }
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->quest_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->quest_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->quest_id);
    }
    if ( !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(p_quest_config_mgr, config->quest_id) )
    {
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
        "./src/txt_data_manual/ActivityTanukiTravelExcelConfig.cpp",
        "checkTanukiTravelRouteData",
        119);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              v10,
              (const char (*)[45])"checkTanukiTravelRouteData invalid quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->quest_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v8 = 0;
      goto LABEL_51;
    }
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->watcher_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->watcher_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->watcher_id);
    }
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
            p_new_activity_config_mgr,
            config->watcher_id) )
    {
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTanukiTravelExcelConfig.cpp",
        "checkTanukiTravelRouteData",
        125);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v13, (const char (*)[27])byte_1AA6CD20);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->watcher_id);
      v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])", level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      v2 = -1;
      v8 = 0;
      goto LABEL_51;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->needed_home_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->needed_home_quest_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->needed_home_quest_id);
    }
    if ( config->needed_home_quest_id
      && !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(
            &txt_config_mgr->quest_config_mgr,
            config->needed_home_quest_id) )
    {
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
        "./src/txt_data_manual/ActivityTanukiTravelExcelConfig.cpp",
        "checkTanukiTravelRouteData",
        132);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              v18,
              (const char (*)[57])"checkTanukiTravelRouteData invalid needed_home_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &config->needed_home_quest_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v2 = -1;
      v8 = 0;
      goto LABEL_51;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->needed_fish_quest_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->needed_fish_quest_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->needed_fish_quest_id);
    }
    if ( config->needed_fish_quest_id
      && !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(
            &txt_config_mgr->quest_config_mgr,
            config->needed_fish_quest_id) )
    {
      break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTanukiTravelRouteDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityTanukiTravelRouteDataExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ActivityTanukiTravelExcelConfig.cpp",
    "checkTanukiTravelRouteData",
    138);
  v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 352),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v22 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
          v21,
          (const char (*)[57])"checkTanukiTravelRouteData invalid needed_fish_quest_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config->needed_fish_quest_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
  v2 = -1;
  v8 = 0;
LABEL_51:
  if ( v8 == 1 )
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 146: range 0000000012E30C80-0000000012E30E3B
const std::vector<unsigned int> *__fastcall ActivityTanukiTravelExcelConfigMgr::findTanukiTravelRouteIdVecByActivityId(
        const ActivityTanukiTravelExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::vector<unsigned int>> *p_level_info_map; // rdx
  std::map<unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::vector<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:145 64 8 8 iter:147 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityTanukiTravelExcelConfigMgr::findTanukiTravelRouteIdVecByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_level_info_map = &this->level_info_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                                     p_level_info_map,
                                                                                     (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->level_info_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 64))->second;
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

// Line 156: range 0000000012E30E3C-0000000012E310CD
__int64 __fastcall ActivityTanukiTravelExcelConfigMgr::findTanukiTravelDayIndexByQuestId(
        const ActivityTanukiTravelExcelConfigMgr *const this,
        __int64 activity_id,
        uint32_t parent_quest_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<std::pair<unsigned int,unsigned int>,unsigned int> *p_last_quest_level_map; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v12[208]; // [rsp+10h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 15 activity_id:155 48 4 19 parent_quest_id:155 64 8 8 iter:157 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityTanukiTravelExcelConfigMgr::findTanukiTravelDayIndexByQuestId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 32) = activity_id;
  *(_DWORD *)(v3 + 48) = parent_quest_id;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, activity_id);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v3 + 32),
                                                         (unsigned int *)(v3 + 48));
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v3 + 48);
  *(std::map<std::pair<unsigned int,unsigned int>,unsigned int>::const_iterator *)(v3 + 64) = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::find(
                                                                                                &this->last_quest_level_map,
                                                                                                (const std::map<std::pair<unsigned int,unsigned int>,unsigned int>::key_type *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_last_quest_level_map = &this->last_quest_level_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v3 + 96);
  *(std::map<std::pair<unsigned int,unsigned int>,unsigned int>::const_iterator *)(v3 + 128) = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::end(p_last_quest_level_map);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::_Self *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > *const)(v3 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v9->second;
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 167: range 0000000012E310CE-0000000012E3128F
const TanukiTravelActivityInfo *__fastcall ActivityTanukiTravelExcelConfigMgr::findActivityInfoByActivityId(
        const ActivityTanukiTravelExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,TanukiTravelActivityInfo> *p_tanuki_travel_activity_info_map; // rdx
  std::map<unsigned int,TanukiTravelActivityInfo> *v6; // rdx
  bool v7; // al
  const TanukiTravelActivityInfo *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:166 64 8 8 iter:168 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityTanukiTravelExcelConfigMgr::findActivityInfoByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_tanuki_travel_activity_info_map = &this->tanuki_travel_activity_info_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,TanukiTravelActivityInfo>::const_iterator *)(v2 + 64) = std::map<unsigned int,TanukiTravelActivityInfo>::find(
                                                                                    p_tanuki_travel_activity_info_map,
                                                                                    (const std::map<unsigned int,TanukiTravelActivityInfo>::key_type *)(v2 + 48));
  v6 = &this->tanuki_travel_activity_info_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,TanukiTravelActivityInfo>::const_iterator *)(v2 + 96) = std::map<unsigned int,TanukiTravelActivityInfo>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,TanukiTravelActivityInfo> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,TanukiTravelActivityInfo> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,TanukiTravelActivityInfo>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,TanukiTravelActivityInfo> > *const)(v2 + 64))->second;
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

// Line 178: range 0000000012E31290-0000000012E31551
bool __fastcall ActivityTanukiTravelExcelConfigMgr::isContainsParentQuestId(
        const ActivityTanukiTravelExcelConfigMgr *const this,
        __int64 activity_id,
        uint32_t parent_quest_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::set<unsigned int>> *p_activity_parent_quest_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  bool result; // al
  std::set<unsigned int> *p_second; // rdx
  std::set<unsigned int> *v12; // rdx
  char v14[224]; // [rsp+10h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 15 activity_id:177 48 4 19 parent_quest_id:177 64 8 8 iter:179 96 8 9 <unknown> 128 8 9 <"
                        "unknown> 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityTanukiTravelExcelConfigMgr::isContainsParentQuestId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = activity_id;
  *(_DWORD *)(v3 + 48) = parent_quest_id;
  p_activity_parent_quest_map = &this->activity_parent_quest_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, activity_id);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_activity_parent_quest_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->activity_parent_quest_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = (char *)(v3 + 96);
  v9 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = 0;
  }
  else
  {
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    *(std::set<unsigned int>::iterator *)(v3 + 160) = std::set<unsigned int>::end(p_second);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    v12 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v8);
    *(std::set<unsigned int>::const_iterator *)(v3 + 128) = std::set<unsigned int>::find(
                                                              v12,
                                                              (const std::set<unsigned int>::key_type *)(v3 + 48));
    result = std::operator!=(
               (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 128),
               (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 160));
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

// Line 190: range 0000000012E31552-0000000012E3174D
__int64 __fastcall ActivityTanukiTravelExcelConfigMgr::findTanukiTravelGuideQuestId(
        const ActivityTanukiTravelExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_activity_guide_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:189 64 8 8 iter:191 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityTanukiTravelExcelConfigMgr::findTanukiTravelGuideQuestId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_activity_guide_map = &this->activity_guide_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_activity_guide_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->activity_guide_map;
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
