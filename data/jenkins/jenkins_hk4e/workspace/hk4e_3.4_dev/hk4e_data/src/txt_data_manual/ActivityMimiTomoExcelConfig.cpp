// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp

// Line 19: range 0000000012C849EC-0000000012C86884
int32_t __cdecl ActivityMimiTomoExcelConfigMgr::checkAndFillLevelInfoMap(
        ActivityMimiTomoExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::FindHilichurlExcelConfig *config,
        FindHilichurlLevelInfoMap *level_info_map)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::vector<unsigned int>::size_type v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::vector<unsigned int>::size_type v16; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  __int64 activity_id; // rsi
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  char *v21; // rsi
  unsigned int *v22; // rax
  int *v23; // rdx
  int v24; // ecx
  char v25; // al
  data::FindHilichurlAssignmentExcelConfigMap *p_find_hilichurl_assignment_excel_config_map; // rdx
  data::FindHilichurlAssignmentExcelConfigMap *v27; // rdx
  bool HilichurlAssignmentExcel; // al
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // edx
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>,false,false>::pointer v32; // rax
  data::FindHilichurlAssignmentExcelConfig *v33; // rax
  int v34; // edx
  char *v35; // rsi
  char *v36; // rsi
  unsigned int *v37; // rax
  int *v38; // rdx
  int v39; // ecx
  char v40; // al
  data::FindHilichurlHiliWeiExcelConfigMap *p_find_hilichurl_hili_wei_excel_config_map; // rdx
  data::FindHilichurlHiliWeiExcelConfigMap *v42; // rdx
  bool HilichurlHiliWeiExcel; // al
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  int v46; // eax
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false,false>::pointer v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false,false>::pointer v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false,false>::pointer v53; // rax
  __int64 v54; // rsi
  uint32_t v55; // ecx
  char v56; // al
  uint32_t group_id; // ecx
  char v58; // dl
  uint32_t watcher_id; // ecx
  char v60; // al
  int v61; // edx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // r14
  std::map<unsigned int,FindHilichurlLevelInfo>::size_type v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // r14
  std::vector<unsigned int>::size_type v67; // rax
  char v68; // al
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  int v71; // eax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  data::FindHilichurlAssignmentExcelConfig *v76; // [rsp+8h] [rbp-568h]
  const data::FindHilichurlAssignmentExcelConfig *p_second; // [rsp+8h] [rbp-568h]
  data::FindHilichurlAssignmentExcelConfig *v78; // [rsp+8h] [rbp-568h]
  std::vector<unsigned int>::size_type v79; // [rsp+8h] [rbp-568h]
  const data::NewActivityExcelConfig *activity_config_ptr; // [rsp+30h] [rbp-540h]
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-538h]
  std::map<unsigned int,data::FindHilichurlAssignmentExcelConfig> *__for_range_0; // [rsp+40h] [rbp-530h]
  std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-528h]
  const data::FindHilichurlHiliWeiExcelConfig *hili_wei_config; // [rsp+50h] [rbp-520h]
  std::map<unsigned int,FindHilichurlLevelInfo>::mapped_type *level_info_0; // [rsp+58h] [rbp-518h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo> >::reference v88; // [rsp+68h] [rbp-508h]
  std::tuple_element<0,std::pair<unsigned int const,FindHilichurlLevelInfo> >::type *day_index; // [rsp+70h] [rbp-500h]
  std::tuple_element<1,const std::pair<unsigned int const,FindHilichurlLevelInfo> >::type *level_info_1; // [rsp+78h] [rbp-4F8h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig> >::reference v91; // [rsp+80h] [rbp-4F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig> >::type *assignment_config; // [rsp+90h] [rbp-4E0h]
  std::map<unsigned int,FindHilichurlLevelInfo>::mapped_type *level_info; // [rsp+98h] [rbp-4D8h]
  char v94[1232]; // [rsp+A0h] [rbp-4D0h] BYREF

  v5 = (unsigned __int64)v94;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_5(1184LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "27 48 4 16 assignment_id:35 64 4 14 hili_wei_id:52 80 8 9 <unknown> 112 8 9 <unknown> 144 8 14 _"
                        "_for_begin:35 176 8 12 __for_end:35 208 8 7 iter:37 240 8 9 <unknown> 272 8 14 __for_begin:46 30"
                        "4 8 12 __for_end:46 336 8 14 __for_begin:52 368 8 12 __for_end:52 400 8 7 iter:54 432 8 9 <unkno"
                        "wn> 464 8 9 <unknown> 496 8 9 <unknown> 528 8 14 __for_begin:77 560 8 12 __for_end:77 592 32 9 <"
                        "unknown> 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unknown> 848 32 9 <unknown> 912 32 9 <u"
                        "nknown> 976 32 9 <unknown> 1040 32 9 <unknown> 1104 48 31 sorted_assignment_config_map:34";
  *(_QWORD *)(v5 + 16) = ActivityMimiTomoExcelConfigMgr::checkAndFillLevelInfoMap;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = 61956;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862723] = -234881024;
  v7[536862724] = 62194;
  v7[536862724] = -234881024;
  v7[536862725] = 62194;
  v7[536862725] = -234881024;
  v7[536862726] = 62194;
  v7[536862726] = -234881024;
  v7[536862727] = 62194;
  v7[536862727] = -234881024;
  v7[536862728] = 62194;
  v7[536862728] = -234881024;
  v7[536862729] = 62194;
  v7[536862729] = -234881024;
  v7[536862730] = 62194;
  v7[536862730] = -234881024;
  v7[536862731] = 62194;
  v7[536862731] = -234881024;
  v7[536862732] = 62194;
  v7[536862732] = -234881024;
  v7[536862733] = 62194;
  v7[536862733] = -234881024;
  v7[536862734] = 62194;
  v7[536862734] = -234881024;
  v7[536862735] = 62194;
  v7[536862735] = -234881024;
  v7[536862736] = 62194;
  v7[536862736] = -234881024;
  v7[536862737] = 62194;
  v7[536862737] = -234881024;
  v7[536862738] = 62194;
  v7[536862739] = -219021312;
  v7[536862740] = 62194;
  v7[536862741] = -219021312;
  v7[536862742] = 62194;
  v7[536862743] = -219021312;
  v7[536862744] = 62194;
  v7[536862745] = -219021312;
  v7[536862746] = 62194;
  v7[536862747] = -219021312;
  v7[536862748] = 62194;
  v7[536862749] = -219021312;
  v7[536862750] = 62194;
  v7[536862751] = -219021312;
  v7[536862752] = 62194;
  v7[536862753] = -219021312;
  v7[536862754] = 62194;
  v7[536862756] = -202116109;
  if ( std::vector<unsigned int>::empty(&config->assignment_id_list)
    || std::vector<unsigned int>::empty(&config->hili_wei_id_list)
    || (v76 = (data::FindHilichurlAssignmentExcelConfig *)std::vector<unsigned int>::size(&config->assignment_id_list),
        v76 != (data::FindHilichurlAssignmentExcelConfig *)(2
                                                          * std::vector<unsigned int>::size(&config->hili_wei_id_list))) )
  {
    if ( *(char *)(((v5 + 592) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 623) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 623) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 592, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 592),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
      "checkAndFillLevelInfoMap",
      23);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v5 + 592),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            v9,
            (const char (*)[39])"checkActivityConfig fail. activity_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->activity_id);
    v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v11,
            (const char (*)[25])"assignment_id_list size:");
    v13 = std::vector<unsigned int>::size(&config->assignment_id_list);
    if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) )
      v13 = __asan_report_store8(v5 + 80, "assignment_id_list size:");
    *(_QWORD *)(v5 + 80) = v13;
    v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v12,
            (const unsigned __int64 *)(v5 + 80));
    v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v14,
            (const char (*)[23])"hili_wei_id_list size:");
    v16 = std::vector<unsigned int>::size(&config->hili_wei_id_list);
    if ( *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) )
      v16 = __asan_report_store8(v5 + 112, "hili_wei_id_list size:");
    *(_QWORD *)(v5 + 112) = v16;
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v15, (const unsigned __int64 *)(v5 + 112));
    *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 592));
    v4 = -1;
  }
  else
  {
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->activity_id);
    }
    activity_id = config->activity_id;
    activity_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
                            p_new_activity_config_mgr,
                            activity_id);
    if ( activity_config_ptr )
    {
      std::map<unsigned int,data::FindHilichurlAssignmentExcelConfig>::map((std::map<unsigned int,data::FindHilichurlAssignmentExcelConfig> *const)(v5 + 1104));
      __for_range = &config->assignment_id_list;
      if ( *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 144, activity_id);
      *(std::vector<unsigned int>::const_iterator *)(v5 + 144) = std::vector<unsigned int>::begin(__for_range);
      if ( *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 176, activity_id);
      *(std::vector<unsigned int>::const_iterator *)(v5 + 176) = std::vector<unsigned int>::end(__for_range);
      while ( 1 )
      {
        v21 = (char *)(v5 + 176);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 144),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 176)) )
          break;
        *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
        v22 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 144));
        v23 = (int *)v22;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v22);
        }
        v24 = *v23;
        v25 = *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000);
        LOBYTE(v21) = v25 != 0;
        if ( v25 != 0 && v25 <= 3 )
          __asan_report_store4(v5 + 48, v21);
        *(_DWORD *)(v5 + 48) = v24;
        *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) = 0;
        p_find_hilichurl_assignment_excel_config_map = &this->find_hilichurl_assignment_excel_config_map;
        if ( *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 208, v21);
        *(std::unordered_map<unsigned int,data::FindHilichurlAssignmentExcelConfig>::iterator *)(v5 + 208) = std::unordered_map<unsigned int,data::FindHilichurlAssignmentExcelConfig>::find(p_find_hilichurl_assignment_excel_config_map, (const std::unordered_map<unsigned int,data::FindHilichurlAssignmentExcelConfig>::key_type *)(v5 + 48));
        *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) = 0;
        v27 = &this->find_hilichurl_assignment_excel_config_map;
        if ( *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 240, v5 + 48);
        *(std::unordered_map<unsigned int,data::FindHilichurlAssignmentExcelConfig>::iterator *)(v5 + 240) = std::unordered_map<unsigned int,data::FindHilichurlAssignmentExcelConfig>::end(v27);
        HilichurlAssignmentExcel = std::__detail::operator==<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>,false>(
                                     (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>,false> *)(v5 + 208),
                                     (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>,false> *)(v5 + 240));
        *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) = -8;
        if ( HilichurlAssignmentExcel )
        {
          *(_DWORD *)(((v5 + 720) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 720) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 751) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 751) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 720, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 720),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
            "checkAndFillLevelInfoMap",
            40);
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 720),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v30 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  v29,
                  (const char (*)[55])"find_hilichurl_assignment_excel_config doesn't has id:");
          v21 = (char *)(v5 + 48);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v5 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 720));
          *(_DWORD *)(((v5 + 720) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
          v31 = 0;
        }
        else
        {
          p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>,false,false> *const)(v5 + 208))->second;
          v32 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>,false,false> *const)(v5 + 208));
          v33 = std::map<unsigned int,data::FindHilichurlAssignmentExcelConfig>::operator[](
                  (std::map<unsigned int,data::FindHilichurlAssignmentExcelConfig> *const)(v5 + 1104),
                  &v32->second.index);
          v21 = (char *)p_second;
          data::FindHilichurlAssignmentExcelConfig::operator=(v33, p_second);
          v31 = 1;
        }
        *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) = -8;
        if ( v31 != 1 )
        {
          v34 = 0;
          goto LABEL_46;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 144));
      }
      v34 = 1;
LABEL_46:
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = -8;
      if ( v34 == 1 )
      {
        __for_range_0 = (std::map<unsigned int,data::FindHilichurlAssignmentExcelConfig> *)(v5 + 1104);
        *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 272, v21);
        *(std::map<unsigned int,data::FindHilichurlAssignmentExcelConfig>::iterator *)(v5 + 272) = std::map<unsigned int,data::FindHilichurlAssignmentExcelConfig>::begin(__for_range_0);
        *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 304, v21);
        *(std::map<unsigned int,data::FindHilichurlAssignmentExcelConfig>::iterator *)(v5 + 304) = std::map<unsigned int,data::FindHilichurlAssignmentExcelConfig>::end(__for_range_0);
        while ( 1 )
        {
          v35 = (char *)(v5 + 304);
          if ( !std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig> >::_Self *)(v5 + 272),
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig> >::_Self *)(v5 + 304)) )
            break;
          v91 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig> > *const)(v5 + 272));
          std::get<0ul,unsigned int const,data::FindHilichurlAssignmentExcelConfig>(v91);
          assignment_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FindHilichurlAssignmentExcelConfig>(v91);
          level_info = std::map<unsigned int,FindHilichurlLevelInfo>::operator[](
                         level_info_map,
                         &assignment_config->day_index);
          std::vector<unsigned int>::push_back(&level_info->quest_id_vec, &assignment_config->quest_id);
          std::_Rb_tree_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig> > *const)(v5 + 272));
        }
        *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) = -8;
        __for_range_1 = &config->hili_wei_id_list;
        *(_BYTE *)(((v5 + 336) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 336) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 336, v35);
        *(std::vector<unsigned int>::const_iterator *)(v5 + 336) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v5 + 368) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 368) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 368, v35);
        *(std::vector<unsigned int>::const_iterator *)(v5 + 368) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v36 = (char *)(v5 + 368);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 336),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 368)) )
            break;
          *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = 4;
          v37 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 336));
          v38 = (int *)v37;
          if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v37);
          }
          v39 = *v38;
          v40 = *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000);
          LOBYTE(v36) = v40 != 0;
          if ( v40 != 0 && v40 <= 3 )
            __asan_report_store4(v5 + 64, v36);
          *(_DWORD *)(v5 + 64) = v39;
          *(_BYTE *)(((v5 + 400) >> 3) + 0x7FFF8000) = 0;
          p_find_hilichurl_hili_wei_excel_config_map = &this->find_hilichurl_hili_wei_excel_config_map;
          if ( *(_BYTE *)(((v5 + 400) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v5 + 400, v36);
          *(std::unordered_map<unsigned int,data::FindHilichurlHiliWeiExcelConfig>::iterator *)(v5 + 400) = std::unordered_map<unsigned int,data::FindHilichurlHiliWeiExcelConfig>::find(p_find_hilichurl_hili_wei_excel_config_map, (const std::unordered_map<unsigned int,data::FindHilichurlHiliWeiExcelConfig>::key_type *)(v5 + 64));
          *(_BYTE *)(((v5 + 432) >> 3) + 0x7FFF8000) = 0;
          v42 = &this->find_hilichurl_hili_wei_excel_config_map;
          if ( *(_BYTE *)(((v5 + 432) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v5 + 432, v5 + 64);
          *(std::unordered_map<unsigned int,data::FindHilichurlHiliWeiExcelConfig>::iterator *)(v5 + 432) = std::unordered_map<unsigned int,data::FindHilichurlHiliWeiExcelConfig>::end(v42);
          HilichurlHiliWeiExcel = std::__detail::operator==<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false>(
                                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false> *)(v5 + 400),
                                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false> *)(v5 + 432));
          *(_BYTE *)(((v5 + 432) >> 3) + 0x7FFF8000) = -8;
          if ( HilichurlHiliWeiExcel )
          {
            *(_DWORD *)(((v5 + 784) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 784) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 815) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 + 47) & 7) >= *(_BYTE *)(((v5 + 815) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 784, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 784),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
              "checkAndFillLevelInfoMap",
              57);
            v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 784),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v45 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                    v44,
                    (const char (*)[53])"find_hilichurl_hili_wei_excel_config doesn't has id:");
            v36 = (char *)(v5 + 64);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, (const unsigned int *)(v5 + 64));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 784));
            *(_DWORD *)(((v5 + 784) >> 3) + 0x7FFF8000) = -117901064;
            v4 = -1;
            v46 = 0;
          }
          else
          {
            v47 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false,false> *const)(v5 + 400));
            if ( !common::tools::MiscUtils::isContains<unsigned int>(
                    &activity_config_ptr->watcher_id,
                    &v47->second.watcher_id) )
            {
              *(_DWORD *)(((v5 + 848) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v5 + 848) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v5 + 879) >> 3) + 0x7FFF8000) != 0
                && (char)((v5 + 111) & 7) >= *(_BYTE *)(((v5 + 879) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v5 + 848, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v5 + 848),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
                "checkAndFillLevelInfoMap",
                62);
              v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v5 + 848),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v49 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      v48,
                      (const char (*)[37])byte_1AA6C2A0);
              v50 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false,false> *const)(v5 + 400));
              v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &v50->second.watcher_id);
              v52 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v51,
                      (const char (*)[14])byte_1AA6C300);
              v36 = (char *)(v5 + 64);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v52,
                (const unsigned int *)(v5 + 64));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 848));
              *(_DWORD *)(((v5 + 848) >> 3) + 0x7FFF8000) = -117901064;
              v4 = -1;
              v46 = 0;
            }
            else
            {
              v53 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false,false> *const)(v5 + 400));
              hili_wei_config = &v53->second;
              level_info_0 = std::map<unsigned int,FindHilichurlLevelInfo>::operator[](
                               level_info_map,
                               &v53->second.day_index);
              v54 = (((_BYTE)hili_wei_config + 12) & 7u) + 3;
              if ( *(_BYTE *)(((unsigned __int64)&hili_wei_config->day_index >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)hili_wei_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hili_wei_config->day_index >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(&hili_wei_config->day_index);
              }
              v55 = hili_wei_config->day_index;
              v56 = *(_BYTE *)(((unsigned __int64)&level_info_0->day_index >> 3) + 0x7FFF8000);
              if ( v56 != 0 && v56 <= 3 )
              {
                LOBYTE(v54) = v56 != 0;
                __asan_report_store4(&level_info_0->day_index, v54);
              }
              level_info_0->day_index = v55;
              if ( *(_BYTE *)(((unsigned __int64)&hili_wei_config->group_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&hili_wei_config->group_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&hili_wei_config->group_id);
              }
              group_id = hili_wei_config->group_id;
              v58 = *(_BYTE *)(((unsigned __int64)&level_info_0->group_id >> 3) + 0x7FFF8000);
              if ( v58 != 0 && (char)((((_BYTE)level_info_0 + 28) & 7) + 3) >= v58 )
              {
                LOBYTE(v54) = v58 != 0;
                __asan_report_store4(&level_info_0->group_id, v54);
              }
              level_info_0->group_id = group_id;
              v36 = (char *)((((_BYTE)hili_wei_config + 20) & 7u) + 3);
              if ( *(_BYTE *)(((unsigned __int64)&hili_wei_config->watcher_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)hili_wei_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hili_wei_config->watcher_id >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(&hili_wei_config->watcher_id);
              }
              watcher_id = hili_wei_config->watcher_id;
              v60 = *(_BYTE *)(((unsigned __int64)&level_info_0->watcher_id >> 3) + 0x7FFF8000);
              LOBYTE(v36) = v60 != 0;
              if ( v60 != 0 && v60 <= 3 )
                __asan_report_store4(&level_info_0->watcher_id, v36);
              level_info_0->watcher_id = watcher_id;
              v46 = 1;
            }
          }
          *(_BYTE *)(((v5 + 400) >> 3) + 0x7FFF8000) = -8;
          if ( v46 != 1 )
          {
            v61 = 0;
            goto LABEL_93;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 336));
        }
        v61 = 1;
LABEL_93:
        *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 336) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 368) >> 3) + 0x7FFF8000) = -8;
        if ( v61 == 1 )
        {
          v78 = (data::FindHilichurlAssignmentExcelConfig *)std::map<unsigned int,FindHilichurlLevelInfo>::size(level_info_map);
          if ( v78 == (data::FindHilichurlAssignmentExcelConfig *)std::vector<unsigned int>::size(&config->hili_wei_id_list) )
          {
            *(_BYTE *)(((v5 + 528) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v5 + 528) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v5 + 528, v36);
            *(std::map<unsigned int,FindHilichurlLevelInfo>::iterator *)(v5 + 528) = std::map<unsigned int,FindHilichurlLevelInfo>::begin(level_info_map);
            *(_BYTE *)(((v5 + 560) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v5 + 560) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v5 + 560, v36);
            *(std::map<unsigned int,FindHilichurlLevelInfo>::iterator *)(v5 + 560) = std::map<unsigned int,FindHilichurlLevelInfo>::end(level_info_map);
            while ( 1 )
            {
              if ( !std::operator!=(
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo> >::_Self *)(v5 + 528),
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo> >::_Self *)(v5 + 560)) )
              {
                v71 = 1;
                goto LABEL_136;
              }
              v88 = std::_Rb_tree_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo> > *const)(v5 + 528));
              day_index = std::get<0ul,unsigned int const,FindHilichurlLevelInfo>(v88);
              level_info_1 = (std::tuple_element<1,const std::pair<unsigned int const,FindHilichurlLevelInfo> >::type *)std::get<1ul,unsigned int const,FindHilichurlLevelInfo>(v88);
              if ( std::vector<unsigned int>::empty(&level_info_1->quest_id_vec) )
                goto LABEL_118;
              if ( *(_BYTE *)(((unsigned __int64)&level_info_1->day_index >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&level_info_1->day_index >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&level_info_1->day_index);
              }
              if ( !level_info_1->day_index )
                goto LABEL_118;
              if ( *(_BYTE *)(((unsigned __int64)&level_info_1->group_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)level_info_1 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_info_1->group_id >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(&level_info_1->group_id);
              }
              if ( !level_info_1->group_id )
                goto LABEL_118;
              if ( *(_BYTE *)(((unsigned __int64)&level_info_1->watcher_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&level_info_1->watcher_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&level_info_1->watcher_id);
              }
              if ( level_info_1->watcher_id )
                v68 = 0;
              else
LABEL_118:
                v68 = 1;
              if ( v68 )
              {
                *(_DWORD *)(((v5 + 976) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v5 + 976) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v5 + 1007) >> 3) + 0x7FFF8000) != 0
                  && (char)((v5 - 96 + 79) & 7) >= *(_BYTE *)(((v5 + 1007) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v5 + 976, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v5 + 976),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
                  "checkAndFillLevelInfoMap",
                  81);
                v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v5 + 976),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v70 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                        v69,
                        (const char (*)[25])"level_info not compelete");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, &level_info_1->day_index);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 976));
                *(_DWORD *)(((v5 + 976) >> 3) + 0x7FFF8000) = -117901064;
                v4 = -1;
                v71 = 0;
                goto LABEL_136;
              }
              if ( *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)day_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)day_index >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(day_index);
              }
              if ( !*day_index )
                break;
              v79 = *day_index;
              if ( v79 > std::vector<unsigned int>::size(&config->hili_wei_id_list) )
                break;
              std::_Rb_tree_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo> > *const)(v5 + 528));
            }
            *(_DWORD *)(((v5 + 1040) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 1040) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 1071) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 + 47) & 7) >= *(_BYTE *)(((v5 + 1071) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 1040, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 1040),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
              "checkAndFillLevelInfoMap",
              86);
            v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 1040),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v74 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    v73,
                    (const char (*)[29])"level_info invalid day_index");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, &level_info_1->day_index);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1040));
            *(_DWORD *)(((v5 + 1040) >> 3) + 0x7FFF8000) = -117901064;
            v4 = -1;
            v71 = 0;
LABEL_136:
            *(_BYTE *)(((v5 + 528) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v5 + 560) >> 3) + 0x7FFF8000) = -8;
            if ( v71 == 1 )
              v4 = 0;
          }
          else
          {
            *(_DWORD *)(((v5 + 912) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 912) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 943) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 943) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 912, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 912),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
              "checkAndFillLevelInfoMap",
              74);
            v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 912),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v63 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    v62,
                    (const char (*)[30])"invalid level_info_map size: ");
            *(_BYTE *)(((v5 + 464) >> 3) + 0x7FFF8000) = 0;
            v64 = std::map<unsigned int,FindHilichurlLevelInfo>::size(level_info_map);
            if ( *(_BYTE *)(((v5 + 464) >> 3) + 0x7FFF8000) )
              v64 = __asan_report_store8(v5 + 464, "invalid level_info_map size: ");
            *(_QWORD *)(v5 + 464) = v64;
            v65 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v63,
                    (const unsigned __int64 *)(v5 + 464));
            v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v65,
                    (const char (*)[16])" hili_wei size:");
            *(_BYTE *)(((v5 + 496) >> 3) + 0x7FFF8000) = 0;
            v67 = std::vector<unsigned int>::size(&config->hili_wei_id_list);
            if ( *(_BYTE *)(((v5 + 496) >> 3) + 0x7FFF8000) )
              v67 = __asan_report_store8(v5 + 496, " hili_wei size:");
            *(_QWORD *)(v5 + 496) = v67;
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v66,
              (const unsigned __int64 *)(v5 + 496));
            *(_BYTE *)(((v5 + 496) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v5 + 464) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 912));
            *(_DWORD *)(((v5 + 912) >> 3) + 0x7FFF8000) = -117901064;
            v4 = -1;
          }
        }
      }
      std::map<unsigned int,data::FindHilichurlAssignmentExcelConfig>::~map((std::map<unsigned int,data::FindHilichurlAssignmentExcelConfig> *const)(v5 + 1104));
    }
    else
    {
      if ( *(char *)(((v5 + 656) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 687) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 112 + 31) & 7) >= *(_BYTE *)(((v5 + 687) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 656, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 656),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
        "checkAndFillLevelInfoMap",
        30);
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 656),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v20 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v19,
              (const char (*)[21])"invalid activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &config->activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 656));
      v4 = -1;
    }
  }
  if ( v94 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v7 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v7 + 2147450880 - (((_DWORD)v7 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v5 >> 3) + 0x7FFF8090) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    __asan_stack_free_5(v5, 1184LL, v94);
  }
  return v4;
};

// Line 94: range 0000000012C86886-0000000012C883A2
int32_t __cdecl ActivityMimiTomoExcelConfigMgr::rewriteConfig(
        ActivityMimiTomoExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_activity_id; // rax
  __int64 v7; // rsi
  uint32_t activity_id; // ecx
  char v9; // al
  std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>>::mapped_type *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  _BOOL4 v13; // eax
  uint32_t end_quest_id; // r15d
  char *v15; // rsi
  std::map<unsigned int,FindHilichurlActivityInfo>::mapped_type *v16; // rdx
  char v17; // cl
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  __int64 v19; // rsi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned __int64 v22; // rax
  const unsigned int *v23; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v24; // rax
  NewActivityExcelConfigMgr *v25; // rcx
  __int64 v26; // rsi
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  int v29; // edx
  char *v30; // rsi
  unsigned int *v31; // rax
  int *v32; // rdx
  int v33; // ecx
  char v34; // al
  int v35; // r15d
  char *v36; // rsi
  unsigned int *v37; // rax
  int *v38; // rdx
  int v39; // ecx
  char v40; // al
  __int64 v41; // rsi
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  int v44; // eax
  char *v45; // rsi
  common::milog::MiLogStream *v46; // rax
  int v47; // eax
  std::map<unsigned int,FindHilichurlActivityInfo>::mapped_type *v48; // rax
  _DWORD *v49; // rdx
  common::milog::MiLogStream *v50; // rax
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v51; // rax
  int *v52; // rdx
  int v53; // r15d
  char *v54; // rsi
  std::map<unsigned int,FindHilichurlActivityInfo>::mapped_type *v55; // rax
  _DWORD *v56; // rdx
  char v57; // cl
  int v58; // edx
  std::map<unsigned int,FindHilichurlActivityInfo>::mapped_type *v59; // rax
  _DWORD *v60; // rdx
  common::milog::MiLogStream *v61; // rax
  unsigned __int64 v62; // rdx
  int v63; // eax
  data::FindHilichurlExcelConfigMap *__for_range; // [rsp+28h] [rbp-488h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false,false>::reference v67; // [rsp+30h] [rbp-480h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FindHilichurlExcelConfig> >::type *config; // [rsp+40h] [rbp-470h]
  data::NewActivityExcelConfig *activity_config_ptr; // [rsp+48h] [rbp-468h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-460h]
  const unsigned int *cond_group_id; // [rsp+58h] [rbp-458h]
  data::NewActivityCondGroupExcelConfig *cond_group_ptr; // [rsp+60h] [rbp-450h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+68h] [rbp-448h]
  std::set<unsigned int> *__for_range_2; // [rsp+70h] [rbp-440h]
  data::NewActivityCondExcelConfig *cond_config_ptr; // [rsp+78h] [rbp-438h]
  const std::vector<data::NewActivityExec> *__for_range_3; // [rsp+80h] [rbp-430h]
  const data::NewActivityExec *meet_action; // [rsp+88h] [rbp-428h]
  const std::vector<data::NewActivityCond> *__for_range_4; // [rsp+90h] [rbp-420h]
  const data::NewActivityCond *cond; // [rsp+98h] [rbp-418h]
  char v80[1040]; // [rsp+A0h] [rbp-410h] BYREF

  v3 = (unsigned __int64)v80;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(992LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "23 32 4 14 activity_id:97 48 4 11 cond_id:120 64 4 11 cond_id:125 80 8 14 __for_begin:95 112 8 1"
                        "2 __for_end:95 144 8 15 __for_begin:112 176 8 13 __for_end:112 208 8 15 __for_begin:120 240 8 13"
                        " __for_end:120 272 8 15 __for_begin:125 304 8 13 __for_end:125 336 8 15 __for_begin:134 368 8 13"
                        " __for_end:134 400 8 15 __for_begin:138 432 8 13 __for_end:138 464 32 9 <unknown> 528 32 9 <unkn"
                        "own> 592 32 9 <unknown> 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unknown> 848 32 9 <unkno"
                        "wn> 912 48 15 cond_id_set:111";
  *(_QWORD *)(v3 + 16) = ActivityMimiTomoExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
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
  v5[536862727] = -234881024;
  v5[536862728] = 62194;
  v5[536862728] = -234881024;
  v5[536862729] = 62194;
  v5[536862729] = -234881024;
  v5[536862730] = 62194;
  v5[536862730] = -234881024;
  v5[536862731] = 62194;
  v5[536862731] = -234881024;
  v5[536862732] = 62194;
  v5[536862732] = -234881024;
  v5[536862733] = 62194;
  v5[536862733] = -234881024;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862739] = -219021312;
  v5[536862740] = 62194;
  v5[536862741] = -219021312;
  v5[536862742] = 62194;
  v5[536862743] = -219021312;
  v5[536862744] = 62194;
  v5[536862745] = -219021312;
  v5[536862746] = 62194;
  v5[536862747] = -219021312;
  v5[536862748] = 62194;
  v5[536862750] = -202116109;
  __for_range = &this->find_hilichurl_excel_config_map;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FindHilichurlExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::FindHilichurlExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FindHilichurlExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::FindHilichurlExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false> *)(v3 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false> *)(v3 + 112)) )
  {
    v67 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false,false> *const)(v3 + 80));
    std::get<0ul,unsigned int const,data::FindHilichurlExcelConfig>(v67);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::FindHilichurlExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FindHilichurlExcelConfig>(v67);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    p_activity_id = &config->activity_id;
    v7 = (((_BYTE)config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_activity_id);
    }
    activity_id = config->activity_id;
    v9 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v7) = v9 != 0;
      __asan_report_store4(v3 + 32, v7);
    }
    *(_DWORD *)(v3 + 32) = activity_id;
    v10 = std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>>::operator[](
            &this->find_hilichurl_level_info_map_,
            (const std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>>::key_type *)(v3 + 32));
    if ( ActivityMimiTomoExcelConfigMgr::checkAndFillLevelInfoMap(this, txt_config_mgr, config, v10) )
    {
      *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 464, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 464),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
        "rewriteConfig",
        100);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 464),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              v11,
              (const char (*)[36])"fillLevelInfoMap fails activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
      *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v13 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->end_quest_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->end_quest_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->end_quest_id);
      }
      end_quest_id = config->end_quest_id;
      v15 = (char *)(v3 + 32);
      v16 = std::map<unsigned int,FindHilichurlActivityInfo>::operator[](
              &this->find_hilichurl_activity_info_map_,
              (const std::map<unsigned int,FindHilichurlActivityInfo>::key_type *)(v3 + 32));
      v17 = *(_BYTE *)(((unsigned __int64)&v16->end_quest_id >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)((((_BYTE)v16 + 4) & 7) + 3) >= v17 )
      {
        LOBYTE(v15) = v17 != 0;
        __asan_report_store4(&v16->end_quest_id, v15);
      }
      v16->end_quest_id = end_quest_id;
      p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      v19 = *(unsigned int *)(v3 + 32);
      activity_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
                              p_new_activity_config_mgr,
                              v19);
      if ( activity_config_ptr )
      {
        v22 = ((v3 + 912) >> 3) + 2147450880;
        *(_DWORD *)v22 = 0;
        *(_WORD *)(v22 + 4) = 0;
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 912));
        __for_range_0 = &activity_config_ptr->cond_group_id;
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 144, v19);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 144) = std::vector<unsigned int>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 176, v19);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 176) = std::vector<unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          v23 = (const unsigned int *)(v3 + 176);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 144),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 176)) )
          {
            v29 = 1;
            goto LABEL_53;
          }
          v24 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 144));
          cond_group_id = v24;
          v25 = &txt_config_mgr->new_activity_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v24);
          }
          v26 = *cond_group_id;
          cond_group_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityCondGroupExcelConfig(v25, v26);
          if ( !cond_group_ptr )
            break;
          __for_range_1 = &cond_group_ptr->cond_id;
          *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 208, v26);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 208) = std::vector<unsigned int>::begin(__for_range_1);
          *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 240, v26);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 240) = std::vector<unsigned int>::end(__for_range_1);
          while ( 1 )
          {
            v30 = (char *)(v3 + 240);
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 208),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 240)) )
              break;
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
            v31 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 208));
            v32 = (int *)v31;
            if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v31);
            }
            v33 = *v32;
            v34 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
            if ( v34 != 0 && v34 <= 3 )
            {
              LOBYTE(v30) = v34 != 0;
              __asan_report_store4(v3 + 48, v30);
            }
            *(_DWORD *)(v3 + 48) = v33;
            std::set<unsigned int>::insert(
              (std::set<unsigned int> *const)(v3 + 912),
              (const std::set<unsigned int>::value_type *)(v3 + 48));
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 208));
          }
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 144));
        }
        *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 592) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 592, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 592),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
          "rewriteConfig",
          117);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 592),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v27,
                (const char (*)[23])"invalid cond_group_id:");
        v23 = cond_group_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, cond_group_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 592));
        *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v29 = 0;
LABEL_53:
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
        if ( v29 == 1 )
        {
          __for_range_2 = (std::set<unsigned int> *)(v3 + 912);
          *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 272, v23);
          *(std::set<unsigned int>::iterator *)(v3 + 272) = std::set<unsigned int>::begin(__for_range_2);
          *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 304, v23);
          *(std::set<unsigned int>::iterator *)(v3 + 304) = std::set<unsigned int>::end(__for_range_2);
          while ( 1 )
          {
            v36 = (char *)(v3 + 304);
            if ( !std::operator!=(
                    (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 272),
                    (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 304)) )
            {
              v44 = 1;
              goto LABEL_112;
            }
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            v37 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 272));
            v38 = (int *)v37;
            if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v37);
            }
            v39 = *v38;
            v40 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
            if ( v40 != 0 && v40 <= 3 )
            {
              LOBYTE(v36) = v40 != 0;
              __asan_report_store4(v3 + 64, v36);
            }
            *(_DWORD *)(v3 + 64) = v39;
            v41 = *(unsigned int *)(v3 + 64);
            cond_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityCondExcelConfig(
                                &txt_config_mgr->new_activity_config_mgr,
                                v41);
            if ( !cond_config_ptr )
              break;
            __for_range_3 = &cond_config_ptr->meet_exec;
            *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 336, v41);
            *(std::vector<data::NewActivityExec>::const_iterator *)(v3 + 336) = std::vector<data::NewActivityExec>::begin(__for_range_3);
            *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 368, v41);
            *(std::vector<data::NewActivityExec>::const_iterator *)(v3 + 368) = std::vector<data::NewActivityExec>::end(__for_range_3);
            while ( 1 )
            {
              v45 = (char *)(v3 + 368);
              if ( !__gnu_cxx::operator!=<data::NewActivityExec const*,std::vector<data::NewActivityExec>>(
                      (const __gnu_cxx::__normal_iterator<const data::NewActivityExec*,std::vector<data::NewActivityExec> > *)(v3 + 336),
                      (const __gnu_cxx::__normal_iterator<const data::NewActivityExec*,std::vector<data::NewActivityExec> > *)(v3 + 368)) )
                break;
              meet_action = __gnu_cxx::__normal_iterator<data::NewActivityExec const*,std::vector<data::NewActivityExec>>::operator*((const __gnu_cxx::__normal_iterator<const data::NewActivityExec*,std::vector<data::NewActivityExec> > *const)(v3 + 336));
              if ( *(_BYTE *)(((unsigned __int64)&meet_action->type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&meet_action->type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&meet_action->type);
              }
              if ( meet_action->type == NEW_ACTIVITY_ACTION_CLOSE_FIND_HILICHURL_STAGE )
              {
                __for_range_4 = &cond_config_ptr->cond;
                *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 400, v45);
                *(std::vector<data::NewActivityCond>::const_iterator *)(v3 + 400) = std::vector<data::NewActivityCond>::begin(__for_range_4);
                *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 432, v45);
                *(std::vector<data::NewActivityCond>::const_iterator *)(v3 + 432) = std::vector<data::NewActivityCond>::end(__for_range_4);
                while ( 1 )
                {
                  if ( !__gnu_cxx::operator!=<data::NewActivityCond const*,std::vector<data::NewActivityCond>>(
                          (const __gnu_cxx::__normal_iterator<const data::NewActivityCond*,std::vector<data::NewActivityCond> > *)(v3 + 400),
                          (const __gnu_cxx::__normal_iterator<const data::NewActivityCond*,std::vector<data::NewActivityCond> > *)(v3 + 432)) )
                    goto LABEL_103;
                  cond = __gnu_cxx::__normal_iterator<data::NewActivityCond const*,std::vector<data::NewActivityCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::NewActivityCond*,std::vector<data::NewActivityCond> > *const)(v3 + 400));
                  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&cond->type);
                  }
                  if ( cond->type == NEW_ACTIVITY_COND_DAYS_GREAT_EQUAL )
                    break;
                  __gnu_cxx::__normal_iterator<data::NewActivityCond const*,std::vector<data::NewActivityCond>>::operator++((__gnu_cxx::__normal_iterator<const data::NewActivityCond*,std::vector<data::NewActivityCond> > *const)(v3 + 400));
                }
                if ( std::vector<int>::size(&cond->param) )
                {
                  v48 = std::map<unsigned int,FindHilichurlActivityInfo>::operator[](
                          &this->find_hilichurl_activity_info_map_,
                          (const std::map<unsigned int,FindHilichurlActivityInfo>::key_type *)(v3 + 32));
                  v49 = v48;
                  if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v48);
                  }
                  if ( !*v49 )
                  {
                    v51 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                              &cond->param,
                                                                                              0LL);
                    v52 = v51;
                    if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v51 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v51);
                    }
                    v53 = *v52;
                    v54 = (char *)(v3 + 32);
                    v55 = std::map<unsigned int,FindHilichurlActivityInfo>::operator[](
                            &this->find_hilichurl_activity_info_map_,
                            (const std::map<unsigned int,FindHilichurlActivityInfo>::key_type *)(v3 + 32));
                    v56 = v55;
                    v57 = *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000);
                    if ( v57 != 0 && (char)(((unsigned __int8)v55 & 7) + 3) >= v57 )
                    {
                      LOBYTE(v54) = v57 != 0;
                      __asan_report_store4(v55, v54);
                    }
                    *v56 = v53;
LABEL_103:
                    v47 = 1;
                    goto LABEL_104;
                  }
                  *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 784) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 815) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 32 + 79) & 7) >= *(_BYTE *)(((v3 + 815) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 784, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 784),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
                    "rewriteConfig",
                    149);
                  v50 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                          (common::milog::MiLogStream *const)(v3 + 784),
                          (const char (*)[46])"cond duplicate content_duration, activity id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v50,
                    (const unsigned int *)(v3 + 32));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 784));
                  *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v47 = 0;
                }
                else
                {
                  *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 720) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 720, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 720),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
                    "rewriteConfig",
                    144);
                  v46 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                          (common::milog::MiLogStream *const)(v3 + 720),
                          (const char (*)[36])"cond param size error, activity id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v46,
                    (const unsigned int *)(v3 + 32));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 720));
                  *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v47 = 0;
                }
LABEL_104:
                *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = -8;
                if ( v47 != 1 )
                {
                  v58 = 0;
                  goto LABEL_108;
                }
              }
              __gnu_cxx::__normal_iterator<data::NewActivityExec const*,std::vector<data::NewActivityExec>>::operator++((__gnu_cxx::__normal_iterator<const data::NewActivityExec*,std::vector<data::NewActivityExec> > *const)(v3 + 336));
            }
            v58 = 1;
LABEL_108:
            *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
            if ( v58 != 1 )
            {
              v44 = 0;
              goto LABEL_112;
            }
            std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 272));
          }
          *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 656) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 656, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 656),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
            "rewriteConfig",
            130);
          v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 656),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v43 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v42,
                  (const char (*)[17])"invalid cond_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 656));
          *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v44 = 0;
LABEL_112:
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
          if ( v44 == 1 )
          {
            v59 = std::map<unsigned int,FindHilichurlActivityInfo>::operator[](
                    &this->find_hilichurl_activity_info_map_,
                    (const std::map<unsigned int,FindHilichurlActivityInfo>::key_type *)(v3 + 32));
            v60 = v59;
            if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v59 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v59);
            }
            if ( *v60 )
            {
              v35 = 1;
            }
            else
            {
              *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 848) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 879) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 879) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 848, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 848),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
                "rewriteConfig",
                161);
              v61 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      (common::milog::MiLogStream *const)(v3 + 848),
                      (const char (*)[39])"cond no content_duration, activity id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v61,
                (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 848));
              *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v35 = 0;
            }
          }
          else
          {
            v35 = 0;
          }
        }
        else
        {
          v35 = 0;
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 912));
        v13 = v35 == 1;
      }
      else
      {
        *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 79) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 528, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 528),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
          "rewriteConfig",
          108);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 528),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v20,
                (const char (*)[21])"invalid activity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
        *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v13 = 0;
      }
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    v62 = ((v3 + 912) >> 3) + 2147450880;
    *(_DWORD *)v62 = -117901064;
    *(_WORD *)(v62 + 4) = -1800;
    if ( !v13 )
    {
      v63 = 0;
      goto LABEL_126;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false,false> *const)(v3 + 80));
  }
  v63 = 1;
LABEL_126:
  if ( v63 == 1 )
    v2 = 0;
  if ( v80 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 124) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8078) = -168430091;
  }
  return v2;
};

// Line 169: range 0000000012C883A4-0000000012C88EDE
int32_t __cdecl ActivityMimiTomoExcelConfigMgr::checkConfig(
        ActivityMimiTomoExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_activity_id; // rsi
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // edx
  uint32_t *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // edx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  data::FindHilichurlExcelConfigMap *__for_range; // [rsp+10h] [rbp-270h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false,false>::reference v20; // [rsp+18h] [rbp-268h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FindHilichurlExcelConfig> >::type *config; // [rsp+28h] [rbp-258h]
  data::FindHilichurlExcelConfigMap *__for_range_0; // [rsp+30h] [rbp-250h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false,false>::reference v23; // [rsp+38h] [rbp-248h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FindHilichurlExcelConfig> >::type *config_0; // [rsp+48h] [rbp-238h]
  char v25[560]; // [rsp+50h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 8 15 __for_begin:171 80 8 13 __for_end:171 112 8 15 __for_begin:179 144 8 13 __for_end:179 "
                        "176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 48 19 activity_id_set:170";
  *(_QWORD *)(v3 + 16) = ActivityMimiTomoExcelConfigMgr::checkConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862735] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 432));
  __for_range = &this->find_hilichurl_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FindHilichurlExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::FindHilichurlExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FindHilichurlExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::FindHilichurlExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_activity_id = (uint32_t *)(v3 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false> *)(v3 + 80)) )
    {
      v10 = 1;
      goto LABEL_16;
    }
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false,false> *const)(v3 + 48));
    std::get<0ul,unsigned int const,data::FindHilichurlExcelConfig>(v20);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::FindHilichurlExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FindHilichurlExcelConfig>(v20);
    v7 = std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 432), &config->activity_id);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false,false> *const)(v3 + 48));
  }
  if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 176, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 176),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
    "checkConfig",
    175);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 176),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v8, (const char (*)[23])"duplicate activity_id:");
  p_activity_id = &config->activity_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->activity_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
  *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v10 = 0;
LABEL_16:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v10 == 1 )
  {
    __for_range_0 = &this->find_hilichurl_excel_config_map;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, p_activity_id);
    *(std::unordered_map<unsigned int,data::FindHilichurlExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::FindHilichurlExcelConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, p_activity_id);
    *(std::unordered_map<unsigned int,data::FindHilichurlExcelConfig>::iterator *)(v3 + 144) = std::unordered_map<unsigned int,data::FindHilichurlExcelConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false> *)(v3 + 112),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false> *)(v3 + 144)) )
      {
        v14 = 1;
        goto LABEL_31;
      }
      v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false,false> *const)(v3 + 112));
      std::get<0ul,unsigned int const,data::FindHilichurlExcelConfig>(v23);
      config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::FindHilichurlExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FindHilichurlExcelConfig>(v23);
      v11 = &config_0->activity_id;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      if ( ActivityMimiTomoExcelConfigMgr::checkActivityConfig(this, txt_config_mgr, config_0->activity_id, config_0) )
        break;
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FindHilichurlExcelConfig>,false,false> *const)(v3 + 112));
    }
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 240, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 240),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
      "checkConfig",
      183);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 240),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            v12,
            (const char (*)[38])"checkActivityConfig fail activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config_0->activity_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v14 = 0;
LABEL_31:
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v14 == 1 )
    {
      if ( ActivityMimiTomoExcelConfigMgr::checkAssignmentExcelConfig(this, txt_config_mgr) )
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
          "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
          "checkConfig",
          189);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 304),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          v15,
          (const char (*)[32])"checkAssignmentExcelConfig fail");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
      }
      else if ( ActivityMimiTomoExcelConfigMgr::checkHiliweiExcelConfig(this, txt_config_mgr) )
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
          "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
          "checkConfig",
          194);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 368),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          v16,
          (const char (*)[29])"checkHiliweiExcelConfig fail");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
      }
      else
      {
        v2 = 0;
      }
    }
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 432));
  result = v2;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
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

// Line 201: range 0000000012C88EE0-0000000012C891CB
__int64 __fastcall ActivityMimiTomoExcelConfigMgr::checkActivityConfig(
        ActivityMimiTomoExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t activity_id,
        const data::FindHilichurlExcelConfig *config)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  __int64 result; // rax
  char v13[240]; // [rsp+20h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 15 activity_id:200 48 32 9 <unknown> 112 48 18 level_info_map:202";
  *(_QWORD *)(v4 + 16) = ActivityMimiTomoExcelConfigMgr::checkActivityConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = -219021312;
  v6[536862723] = 62194;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 32) = activity_id;
  std::map<unsigned int,FindHilichurlLevelInfo>::map((std::map<unsigned int,FindHilichurlLevelInfo> *const)(v4 + 112));
  if ( ActivityMimiTomoExcelConfigMgr::checkAndFillLevelInfoMap(
         this,
         txt_config_mgr,
         config,
         (FindHilichurlLevelInfoMap *)(v4 + 112)) )
  {
    if ( *(char *)(((v4 + 48) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 79) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 79) & 7) >= *(_BYTE *)(((v4 + 79) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 48, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 48),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
      "checkActivityConfig",
      205);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 48),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           v7,
           (const char (*)[44])"checkAndFillLevelInfoMap fails activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 48));
    *(_DWORD *)(((v4 + 48) >> 3) + 0x7FFF8000) = -117901064;
    v9 = -1;
  }
  else
  {
    v9 = 0;
  }
  std::map<unsigned int,FindHilichurlLevelInfo>::~map((std::map<unsigned int,FindHilichurlLevelInfo> *const)(v4 + 112));
  result = v9;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
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

// Line 212: range 0000000012C891CC-0000000012C89555
int32_t __cdecl ActivityMimiTomoExcelConfigMgr::checkAssignmentExcelConfig(
        const ActivityMimiTomoExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  uint32_t *p_quest_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  int32_t result; // eax
  data::FindHilichurlAssignmentExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>,false,false>::reference v13; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig> >::type *config; // [rsp+28h] [rbp-D8h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:213 64 8 13 __for_end:213 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMimiTomoExcelConfigMgr::checkAssignmentExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->find_hilichurl_assignment_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FindHilichurlAssignmentExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::FindHilichurlAssignmentExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FindHilichurlAssignmentExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FindHilichurlAssignmentExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_18;
    }
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::FindHilichurlAssignmentExcelConfig>(v13);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FindHilichurlAssignmentExcelConfig>(v13);
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    p_quest_id = &config->quest_id;
    if ( *(_BYTE *)(((unsigned __int64)p_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_quest_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_quest_id);
    }
    if ( !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(p_quest_config_mgr, config->quest_id) )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FindHilichurlAssignmentExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
    "checkAssignmentExcelConfig",
    217);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
         v8,
         (const char (*)[45])"checkAssignmentExcelConfig invalid quest_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->quest_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_18:
  if ( v10 == 1 )
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

// Line 225: range 0000000012C89556-0000000012C89AF0
int32_t __cdecl ActivityMimiTomoExcelConfigMgr::checkHiliweiExcelConfig(
        const ActivityMimiTomoExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int32_t result; // eax
  data::FindHilichurlHiliWeiExcelConfigMap *__for_range; // [rsp+10h] [rbp-140h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false,false>::reference v19; // [rsp+18h] [rbp-138h]
  std::tuple_element<0,std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig> >::type *id; // [rsp+20h] [rbp-130h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig> >::type *config; // [rsp+28h] [rbp-128h]
  char v22[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:226 64 8 13 __for_end:226 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMimiTomoExcelConfigMgr::checkHiliweiExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->find_hilichurl_hili_wei_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FindHilichurlHiliWeiExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::FindHilichurlHiliWeiExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FindHilichurlHiliWeiExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FindHilichurlHiliWeiExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_24;
    }
    v19 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::FindHilichurlHiliWeiExcelConfig>(v19);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FindHilichurlHiliWeiExcelConfig>(v19);
    p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->group_id);
    }
    if ( !LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, config->group_id) )
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
        "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
        "checkHiliweiExcelConfig",
        231);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v7, (const char (*)[25])byte_1AA6CCE0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->group_id);
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])byte_1AA6C300);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v11 = 0;
      goto LABEL_24;
    }
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->watcher_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->watcher_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->watcher_id);
    }
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
            p_new_activity_config_mgr,
            config->watcher_id) )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FindHilichurlHiliWeiExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityMimiTomoExcelConfig.cpp",
    "checkHiliweiExcelConfig",
    237);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v13, (const char (*)[27])byte_1AA6CD20);
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->watcher_id);
  v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])byte_1AA6C300);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v11 = 0;
LABEL_24:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v22 == (char *)v3 )
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

// Line 245: range 0000000012C89AF2-0000000012C89DDF
const FindHilichurlLevelInfo *__fastcall ActivityMimiTomoExcelConfigMgr::findLevelInfoByActivityIdAndDayIndex(
        const ActivityMimiTomoExcelConfigMgr *const this,
        __int64 activity_id,
        uint32_t day_index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>> *p_find_hilichurl_level_info_map; // rdx
  std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>> *v7; // rdx
  bool v8; // al
  const FindHilichurlLevelInfo *result; // rax
  std::map<unsigned int,FindHilichurlLevelInfo> *p_second; // rdx
  std::map<unsigned int,FindHilichurlLevelInfo> *v11; // rdx
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
  *(_QWORD *)(v3 + 8) = "6 32 4 15 activity_id:244 48 4 13 day_index:244 64 8 9 iter1:246 96 8 9 <unknown> 128 8 9 iter2:"
                        "251 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityMimiTomoExcelConfigMgr::findLevelInfoByActivityIdAndDayIndex;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = activity_id;
  *(_DWORD *)(v3 + 48) = day_index;
  p_find_hilichurl_level_info_map = &this->find_hilichurl_level_info_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, activity_id);
  *(std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>>::find(p_find_hilichurl_level_info_map, (const std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>>::key_type *)(v3 + 32));
  v7 = &this->find_hilichurl_level_info_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,FindHilichurlLevelInfo> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,FindHilichurlLevelInfo> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,FindHilichurlLevelInfo>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,FindHilichurlLevelInfo> > > *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,FindHilichurlLevelInfo>::const_iterator *)(v3 + 128) = std::map<unsigned int,FindHilichurlLevelInfo>::find(
                                                                                     p_second,
                                                                                     (const std::map<unsigned int,FindHilichurlLevelInfo>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v11 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,FindHilichurlLevelInfo>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,FindHilichurlLevelInfo> > > *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,FindHilichurlLevelInfo>::const_iterator *)(v3 + 160) = std::map<unsigned int,FindHilichurlLevelInfo>::end(v11);
    v12 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
      result = 0LL;
    else
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,FindHilichurlLevelInfo> > *const)(v3 + 128))->second;
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

// Line 260: range 0000000012C89DE0-0000000012C89FA1
const FindHilichurlLevelInfoMap *__fastcall ActivityMimiTomoExcelConfigMgr::findLevelInfoMapByActivityId(
        const ActivityMimiTomoExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>> *p_find_hilichurl_level_info_map; // rdx
  std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>> *v6; // rdx
  bool v7; // al
  const FindHilichurlLevelInfoMap *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:259 64 8 8 iter:261 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMimiTomoExcelConfigMgr::findLevelInfoMapByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_find_hilichurl_level_info_map = &this->find_hilichurl_level_info_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>>::find(p_find_hilichurl_level_info_map, (const std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>>::key_type *)(v2 + 48));
  v6 = &this->find_hilichurl_level_info_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<unsigned int,FindHilichurlLevelInfo>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,FindHilichurlLevelInfo> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,FindHilichurlLevelInfo> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,FindHilichurlLevelInfo>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,FindHilichurlLevelInfo> > > *const)(v2 + 64))->second;
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

// Line 270: range 0000000012C89FA2-0000000012C8A163
const FindHilichurlActivityInfo *__fastcall ActivityMimiTomoExcelConfigMgr::findActivityInfoByActivityId(
        const ActivityMimiTomoExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,FindHilichurlActivityInfo> *p_find_hilichurl_activity_info_map; // rdx
  std::map<unsigned int,FindHilichurlActivityInfo> *v6; // rdx
  bool v7; // al
  const FindHilichurlActivityInfo *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:269 64 8 8 iter:271 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityMimiTomoExcelConfigMgr::findActivityInfoByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_find_hilichurl_activity_info_map = &this->find_hilichurl_activity_info_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,FindHilichurlActivityInfo>::const_iterator *)(v2 + 64) = std::map<unsigned int,FindHilichurlActivityInfo>::find(
                                                                                     p_find_hilichurl_activity_info_map,
                                                                                     (const std::map<unsigned int,FindHilichurlActivityInfo>::key_type *)(v2 + 48));
  v6 = &this->find_hilichurl_activity_info_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,FindHilichurlActivityInfo>::const_iterator *)(v2 + 96) = std::map<unsigned int,FindHilichurlActivityInfo>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,FindHilichurlActivityInfo> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,FindHilichurlActivityInfo> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,FindHilichurlActivityInfo>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,FindHilichurlActivityInfo> > *const)(v2 + 64))->second;
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
