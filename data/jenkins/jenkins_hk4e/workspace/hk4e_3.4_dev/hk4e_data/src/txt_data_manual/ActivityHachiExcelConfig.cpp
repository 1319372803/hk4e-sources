// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityHachiExcelConfig.cpp

// Line 19: range 0000000012C45ABE-0000000012C48FCE
int32_t __cdecl ActivityHachiExcelConfigMgr::checkConfig(
        ActivityHachiExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *p_quest_id; // rsi
  const std::set<unsigned int>::key_type *p_stage_id; // rdx
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  const std::set<unsigned int>::key_type *p_stealth_watcher; // rdx
  bool v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  uint32_t *v19; // rsi
  const std::set<unsigned int>::key_type *p_battle_watcher; // rdx
  bool v21; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v26; // rax
  int *v27; // rdx
  int v28; // ecx
  char v29; // al
  bool v30; // al
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  int v35; // eax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v43; // rax
  int *v44; // rdx
  int v45; // ecx
  char v46; // al
  bool v47; // al
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  int v52; // eax
  QuestExcelConfigMgr *v53; // rcx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // r14
  std::unordered_map<unsigned int,data::ActivityHachiFinalStageExcelConfig>::size_type v62; // rax
  data::ActivityHachiFinalStageExcelConfigMap *p_activity_hachi_final_stage_excel_config_map; // rdx
  data::ActivityHachiFinalStageExcelConfigMap *v64; // rdx
  char *v65; // rsi
  bool v66; // al
  const std::set<unsigned int>::key_type *v67; // rdx
  char *v68; // rsi
  bool v69; // al
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  const unsigned int *v72; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v73; // rax
  __int64 v74; // rsi
  bool v75; // al
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rdx
  int v80; // edx
  char *v81; // rsi
  unsigned int *v82; // rax
  int *v83; // rdx
  int v84; // ecx
  char v85; // al
  bool v86; // al
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  int v89; // eax
  QuestExcelConfigMgr *v90; // rcx
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  char *v95; // rsi
  unsigned int *v96; // rax
  int *v97; // rdx
  int v98; // ecx
  char v99; // al
  bool v100; // al
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rax
  int v103; // eax
  QuestExcelConfigMgr *v104; // rcx
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  data::ActivityHachiStageExcelConfigMap *__for_range; // [rsp+18h] [rbp-9E8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHachiStageExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-9E0h]
  std::tuple_element<1,std::pair<unsigned int const,data::ActivityHachiStageExcelConfig> >::type *config; // [rsp+30h] [rbp-9D0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-9C8h]
  std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-9B8h]
  data::ActivityHachiFinalStageExcelConfig *final_stage_config; // [rsp+58h] [rbp-9A8h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+60h] [rbp-9A0h]
  const unsigned int *watcher_id; // [rsp+68h] [rbp-998h]
  const std::vector<unsigned int> *__for_range_3; // [rsp+70h] [rbp-990h]
  const std::vector<unsigned int> *__for_range_4; // [rsp+80h] [rbp-980h]
  char v122[2416]; // [rsp+90h] [rbp-970h] BYREF

  v3 = (unsigned __int64)v122;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(2368LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "55 48 4 11 quest_id:48 64 4 11 quest_id:63 80 4 12 quest_id:107 96 4 12 quest_id:123 112 8 14 __"
                        "for_begin:23 144 8 12 __for_end:23 176 8 9 <unknown> 208 8 9 <unknown> 240 8 9 <unknown> 272 8 9"
                        " <unknown> 304 8 9 <unknown> 336 8 9 <unknown> 368 8 14 __for_begin:48 400 8 12 __for_end:48 432"
                        " 8 9 <unknown> 464 8 9 <unknown> 496 8 14 __for_begin:63 528 8 12 __for_end:63 560 8 9 <unknown>"
                        " 592 8 9 <unknown> 624 8 9 <unknown> 656 8 23 final_stage_map_iter:85 688 8 9 <unknown> 720 8 9 "
                        "<unknown> 752 8 9 <unknown> 784 8 14 __for_begin:94 816 8 12 __for_end:94 848 8 9 <unknown> 880 "
                        "8 9 <unknown> 912 8 15 __for_begin:107 944 8 13 __for_end:107 976 8 9 <unknown> 1008 8 9 <unknow"
                        "n> 1040 8 15 __for_begin:123 1072 8 13 __for_end:123 1104 8 9 <unknown> 1136 8 9 <unknown> 1168 "
                        "32 9 <unknown> 1232 32 9 <unknown> 1296 32 9 <unknown> 1360 32 9 <unknown> 1424 32 9 <unknown> 1"
                        "488 32 9 <unknown> 1552 32 9 <unknown> 1616 32 9 <unknown> 1680 32 9 <unknown> 1744 32 9 <unknow"
                        "n> 1808 32 9 <unknown> 1872 32 9 <unknown> 1936 32 9 <unknown> 2000 32 9 <unknown> 2064 32 9 <un"
                        "known> 2128 48 12 stage_set:20 2208 48 14 watcher_set:21 2288 48 18 total_quest_set:22";
  *(_QWORD *)(v3 + 16) = ActivityHachiExcelConfigMgr::checkConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = 61956;
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
  v5[536862734] = -234881024;
  v5[536862735] = 62194;
  v5[536862735] = -234881024;
  v5[536862736] = 62194;
  v5[536862736] = -234881024;
  v5[536862737] = 62194;
  v5[536862737] = -234881024;
  v5[536862738] = 62194;
  v5[536862738] = -234881024;
  v5[536862739] = 62194;
  v5[536862739] = -234881024;
  v5[536862740] = 62194;
  v5[536862740] = -234881024;
  v5[536862741] = 62194;
  v5[536862741] = -234881024;
  v5[536862742] = 62194;
  v5[536862742] = -234881024;
  v5[536862743] = 62194;
  v5[536862743] = -234881024;
  v5[536862744] = 62194;
  v5[536862744] = -234881024;
  v5[536862745] = 62194;
  v5[536862745] = -234881024;
  v5[536862746] = 62194;
  v5[536862746] = -234881024;
  v5[536862747] = 62194;
  v5[536862747] = -234881024;
  v5[536862748] = 62194;
  v5[536862748] = -234881024;
  v5[536862749] = 62194;
  v5[536862749] = -234881024;
  v5[536862750] = 62194;
  v5[536862750] = -234881024;
  v5[536862751] = 62194;
  v5[536862751] = -234881024;
  v5[536862752] = 62194;
  v5[536862752] = -234881024;
  v5[536862753] = 62194;
  v5[536862753] = -234881024;
  v5[536862754] = 62194;
  v5[536862754] = -234881024;
  v5[536862755] = 62194;
  v5[536862755] = -234881024;
  v5[536862756] = 62194;
  v5[536862757] = -219021312;
  v5[536862758] = 62194;
  v5[536862759] = -219021312;
  v5[536862760] = 62194;
  v5[536862761] = -219021312;
  v5[536862762] = 62194;
  v5[536862763] = -219021312;
  v5[536862764] = 62194;
  v5[536862765] = -219021312;
  v5[536862766] = 62194;
  v5[536862767] = -219021312;
  v5[536862768] = 62194;
  v5[536862769] = -219021312;
  v5[536862770] = 62194;
  v5[536862771] = -219021312;
  v5[536862772] = 62194;
  v5[536862773] = -219021312;
  v5[536862774] = 62194;
  v5[536862775] = -219021312;
  v5[536862776] = 62194;
  v5[536862777] = -219021312;
  v5[536862778] = 62194;
  v5[536862779] = -219021312;
  v5[536862780] = 62194;
  v5[536862781] = -219021312;
  v5[536862782] = 62194;
  v5[536862783] = -219021312;
  v5[536862784] = 62194;
  v5[536862785] = -219021312;
  v5[536862786] = 62194;
  v5[536862788] = -218959118;
  v5[536862790] = -219021312;
  v5[536862791] = 62194;
  v5[536862793] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 2128));
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 2208));
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 2288));
  __for_range = &this->activity_hachi_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityHachiStageExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::ActivityHachiStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 144, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityHachiStageExcelConfig>::iterator *)(v3 + 144) = std::unordered_map<unsigned int,data::ActivityHachiStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_quest_id = (char *)(v3 + 144);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityHachiStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityHachiStageExcelConfig>,false> *)(v3 + 112),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityHachiStageExcelConfig>,false> *)(v3 + 144)) )
    {
      v12 = 1;
      goto LABEL_100;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHachiStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHachiStageExcelConfig>,false,false> *const)(v3 + 112));
    std::get<0ul,unsigned int const,data::ActivityHachiStageExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::ActivityHachiStageExcelConfig>(__in);
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 208, p_quest_id);
    *(std::set<unsigned int>::iterator *)(v3 + 208) = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 2128));
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    p_stage_id = &config->stage_id;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, p_quest_id);
    *(std::set<unsigned int>::iterator *)(v3 + 176) = std::set<unsigned int>::find(
                                                        (std::set<unsigned int> *const)(v3 + 2128),
                                                        p_stage_id);
    v8 = (char *)(v3 + 208);
    v9 = std::operator!=(
           (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 176),
           (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 208));
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v3 + 1168) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1168) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1199) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 1199) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1168, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1168),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
        "checkConfig",
        27);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1168),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v10, (const char (*)[54])byte_1AA5EE40);
      p_quest_id = (char *)&config->stage_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->stage_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1168));
      *(_DWORD *)(((v3 + 1168) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
      goto LABEL_100;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->stealth_watcher >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->stealth_watcher >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->stealth_watcher);
    }
    if ( config->stealth_watcher )
    {
      *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 272, v8);
      *(std::set<unsigned int>::iterator *)(v3 + 272) = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 2208));
      *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      p_stealth_watcher = &config->stealth_watcher;
      if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 240, v8);
      *(std::set<unsigned int>::iterator *)(v3 + 240) = std::set<unsigned int>::find(
                                                          (std::set<unsigned int> *const)(v3 + 2208),
                                                          p_stealth_watcher);
      v14 = std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 240),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 272));
      *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
      if ( v14 )
      {
        *(_DWORD *)(((v3 + 1232) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1232) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1263) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 1263) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1232, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1232),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
          "checkConfig",
          34);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1232),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v15, (const char (*)[46])byte_1AA5EEA0);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->stage_id);
        v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])" watcher:");
        p_quest_id = (char *)&config->stealth_watcher;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->stealth_watcher);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1232));
        *(_DWORD *)(((v3 + 1232) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
        goto LABEL_100;
      }
      std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 2208), &config->stealth_watcher);
    }
    v19 = (uint32_t *)((((_BYTE)config + 44) & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)&config->battle_watcher >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->battle_watcher >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->battle_watcher);
    }
    if ( config->battle_watcher )
      break;
LABEL_42:
    __for_range_0 = &config->quest_id;
    *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 368, v19);
    *(std::vector<unsigned int>::iterator *)(v3 + 368) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 400, v19);
    *(std::vector<unsigned int>::iterator *)(v3 + 400) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      p_quest_id = (char *)(v3 + 400);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 368),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 400)) )
      {
        v35 = 1;
        goto LABEL_68;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v26 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 368));
      v27 = (int *)v26;
      if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v26);
      }
      v28 = *v27;
      v29 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(p_quest_id) = v29 != 0;
      if ( v29 != 0 && v29 <= 3 )
        __asan_report_store4(v3 + 48, p_quest_id);
      *(_DWORD *)(v3 + 48) = v28;
      *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 464, p_quest_id);
      *(std::set<unsigned int>::iterator *)(v3 + 464) = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 2288));
      *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 432, p_quest_id);
      *(std::set<unsigned int>::iterator *)(v3 + 432) = std::set<unsigned int>::find(
                                                          (std::set<unsigned int> *const)(v3 + 2288),
                                                          (const std::set<unsigned int>::key_type *)(v3 + 48));
      v30 = std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 432),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 464));
      *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = -8;
      if ( v30 )
      {
        *(_DWORD *)(((v3 + 1360) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1360) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1391) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1391) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1360, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1360),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
          "checkConfig",
          52);
        v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1360),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v32 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v31, (const char (*)[20])byte_1AA5EFA0);
        v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &config->stage_id);
        v34 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v33, (const char (*)[32])byte_1AA5EFE0);
        p_quest_id = (char *)(v3 + 48);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1360));
        *(_DWORD *)(((v3 + 1360) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v35 = 0;
        goto LABEL_68;
      }
      p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, *(unsigned int *)(v3 + 48)) )
        break;
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v3 + 2288),
        (const std::set<unsigned int>::value_type *)(v3 + 48));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 368));
    }
    *(_DWORD *)(((v3 + 1424) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1424) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1455) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 1455) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1424, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1424),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
      "checkConfig",
      58);
    v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 1424),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v38 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v37, (const char (*)[20])byte_1AA5EFA0);
    v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &config->stage_id);
    v40 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v39, (const char (*)[32])byte_1AA5F020);
    v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v3 + 48));
    v42 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v41, (const char (*)[15])byte_1AA5F060);
    p_quest_id = (char *)&config->quest_id;
    common::milog::MiLogStream::operator<<<unsigned int>(v42, &config->quest_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1424));
    *(_DWORD *)(((v3 + 1424) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v35 = 0;
LABEL_68:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = -8;
    if ( v35 != 1 )
    {
      v12 = 0;
      goto LABEL_100;
    }
    __for_range_1 = &config->final_quest_id;
    *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 496, p_quest_id);
    *(std::vector<unsigned int>::iterator *)(v3 + 496) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 528, p_quest_id);
    *(std::vector<unsigned int>::iterator *)(v3 + 528) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      p_quest_id = (char *)(v3 + 528);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 496),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 528)) )
      {
        v52 = 1;
        goto LABEL_96;
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v43 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 496));
      v44 = (int *)v43;
      if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v43);
      }
      v45 = *v44;
      v46 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
      LOBYTE(p_quest_id) = v46 != 0;
      if ( v46 != 0 && v46 <= 3 )
        __asan_report_store4(v3 + 64, p_quest_id);
      *(_DWORD *)(v3 + 64) = v45;
      *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 592, p_quest_id);
      *(std::set<unsigned int>::iterator *)(v3 + 592) = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 2288));
      *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 560, p_quest_id);
      *(std::set<unsigned int>::iterator *)(v3 + 560) = std::set<unsigned int>::find(
                                                          (std::set<unsigned int> *const)(v3 + 2288),
                                                          (const std::set<unsigned int>::key_type *)(v3 + 64));
      v47 = std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 560),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 592));
      *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) = -8;
      if ( v47 )
      {
        *(_DWORD *)(((v3 + 1488) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1488) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1519) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 1519) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1488, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1488),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
          "checkConfig",
          67);
        v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1488),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v49 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v48, (const char (*)[20])byte_1AA5EFA0);
        v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &config->stage_id);
        v51 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v50, (const char (*)[32])byte_1AA5EFE0);
        p_quest_id = (char *)(v3 + 64);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1488));
        *(_DWORD *)(((v3 + 1488) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v52 = 0;
        goto LABEL_96;
      }
      v53 = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 64);
      if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(v53, *(unsigned int *)(v3 + 64)) )
        break;
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v3 + 2288),
        (const std::set<unsigned int>::value_type *)(v3 + 64));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 496));
    }
    *(_DWORD *)(((v3 + 1552) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1552) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1583) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1583) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1552, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1552),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
      "checkConfig",
      73);
    v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 1552),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v55 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v54, (const char (*)[20])byte_1AA5EFA0);
    v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &config->stage_id);
    v57 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v56, (const char (*)[32])byte_1AA5F020);
    v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, (const unsigned int *)(v3 + 64));
    v59 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v58, (const char (*)[15])byte_1AA5F0A0);
    p_quest_id = (char *)&config->final_quest_id;
    common::milog::MiLogStream::operator<<<unsigned int>(v59, &config->final_quest_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1552));
    *(_DWORD *)(((v3 + 1552) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v52 = 0;
LABEL_96:
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = -8;
    if ( v52 != 1 )
    {
      v12 = 0;
      goto LABEL_100;
    }
    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 2128), &config->stage_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHachiStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHachiStageExcelConfig>,false,false> *const)(v3 + 112));
  }
  *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 336, v19);
  *(std::set<unsigned int>::iterator *)(v3 + 336) = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 2208));
  *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
  p_battle_watcher = &config->battle_watcher;
  if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 304, v19);
  *(std::set<unsigned int>::iterator *)(v3 + 304) = std::set<unsigned int>::find(
                                                      (std::set<unsigned int> *const)(v3 + 2208),
                                                      p_battle_watcher);
  v21 = std::operator!=(
          (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 304),
          (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 336));
  *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
  if ( !v21 )
  {
    v19 = &config->battle_watcher;
    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 2208), &config->battle_watcher);
    goto LABEL_42;
  }
  *(_DWORD *)(((v3 + 1296) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 1296) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 1327) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1327) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 1296, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 1296),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
    "checkConfig",
    43);
  v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 1296),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v23 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v22, (const char (*)[46])byte_1AA5EF40);
  v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &config->stage_id);
  v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])" watcher:");
  p_quest_id = (char *)&config->battle_watcher;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &config->battle_watcher);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1296));
  *(_DWORD *)(((v3 + 1296) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v12 = 0;
LABEL_100:
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
  if ( v12 != 1 )
    goto LABEL_199;
  if ( std::unordered_map<unsigned int,data::ActivityHachiFinalStageExcelConfig>::size(&this->activity_hachi_final_stage_excel_config_map) != 1 )
  {
    *(_DWORD *)(((v3 + 1616) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1616) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1647) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1647) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1616, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1616),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
      "checkConfig",
      82);
    v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 1616),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v61 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v60, (const char (*)[61])byte_1AA5F0E0);
    *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) = 0;
    v62 = std::unordered_map<unsigned int,data::ActivityHachiFinalStageExcelConfig>::size(&this->activity_hachi_final_stage_excel_config_map);
    if ( *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) )
      v62 = __asan_report_store8(v3 + 624, byte_1AA5F0E0);
    *(_QWORD *)(v3 + 624) = v62;
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v61, (const unsigned __int64 *)(v3 + 624));
    *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1616));
    *(_DWORD *)(((v3 + 1616) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    goto LABEL_199;
  }
  *(_BYTE *)(((v3 + 656) >> 3) + 0x7FFF8000) = 0;
  p_activity_hachi_final_stage_excel_config_map = &this->activity_hachi_final_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 656) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 656, p_quest_id);
  *(std::unordered_map<unsigned int,data::ActivityHachiFinalStageExcelConfig>::iterator *)(v3 + 656) = std::unordered_map<unsigned int,data::ActivityHachiFinalStageExcelConfig>::begin(p_activity_hachi_final_stage_excel_config_map);
  *(_BYTE *)(((v3 + 688) >> 3) + 0x7FFF8000) = 0;
  v64 = &this->activity_hachi_final_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 688) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 688, p_quest_id);
  *(std::unordered_map<unsigned int,data::ActivityHachiFinalStageExcelConfig>::iterator *)(v3 + 688) = std::unordered_map<unsigned int,data::ActivityHachiFinalStageExcelConfig>::end(v64);
  v65 = (char *)(v3 + 688);
  v66 = std::__detail::operator!=<std::pair<unsigned int const,data::ActivityHachiFinalStageExcelConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityHachiFinalStageExcelConfig>,false> *)(v3 + 656),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityHachiFinalStageExcelConfig>,false> *)(v3 + 688));
  *(_BYTE *)(((v3 + 688) >> 3) + 0x7FFF8000) = -8;
  if ( !v66 )
  {
    *(_DWORD *)(((v3 + 2064) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 2064) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 2095) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 2095) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 2064, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 2064),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
      "checkConfig",
      142);
    v109 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 2064),
             (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v109, (const char (*)[47])byte_1AA5F340);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2064));
    *(_DWORD *)(((v3 + 2064) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    goto LABEL_199;
  }
  final_stage_config = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHachiFinalStageExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHachiFinalStageExcelConfig>,false,false> *const)(v3 + 656))->second;
  *(_BYTE *)(((v3 + 752) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 752) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 752, v65);
  *(std::set<unsigned int>::iterator *)(v3 + 752) = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 2128));
  *(_BYTE *)(((v3 + 720) >> 3) + 0x7FFF8000) = 0;
  v67 = &final_stage_config->stage_id;
  if ( *(_BYTE *)(((v3 + 720) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 720, v65);
  *(std::set<unsigned int>::iterator *)(v3 + 720) = std::set<unsigned int>::find(
                                                      (std::set<unsigned int> *const)(v3 + 2128),
                                                      v67);
  v68 = (char *)(v3 + 752);
  v69 = std::operator!=(
          (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 720),
          (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 752));
  *(_BYTE *)(((v3 + 720) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 752) >> 3) + 0x7FFF8000) = -8;
  if ( v69 )
  {
    *(_DWORD *)(((v3 + 1680) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1680) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1711) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 1711) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1680, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1680),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
      "checkConfig",
      91);
    v70 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 1680),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v71 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(v70, (const char (*)[72])byte_1AA5F140);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, &final_stage_config->stage_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1680));
    *(_DWORD *)(((v3 + 1680) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    goto LABEL_199;
  }
  __for_range_2 = &final_stage_config->watcher_id_list;
  *(_BYTE *)(((v3 + 784) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 784) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 784, v68);
  *(std::vector<unsigned int>::const_iterator *)(v3 + 784) = std::vector<unsigned int>::begin(__for_range_2);
  *(_BYTE *)(((v3 + 816) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 816) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 816, v68);
  *(std::vector<unsigned int>::const_iterator *)(v3 + 816) = std::vector<unsigned int>::end(__for_range_2);
  while ( 2 )
  {
    v72 = (const unsigned int *)(v3 + 816);
    if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 784),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 816)) )
    {
      v80 = 1;
      goto LABEL_140;
    }
    v73 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 784));
    watcher_id = v73;
    v74 = ((unsigned __int8)v73 & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v73 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v73);
    }
    if ( !*watcher_id )
    {
LABEL_138:
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 784));
      continue;
    }
    break;
  }
  *(_BYTE *)(((v3 + 880) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 880) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 880, v74);
  *(std::set<unsigned int>::iterator *)(v3 + 880) = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 2208));
  *(_BYTE *)(((v3 + 848) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 848) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 848, v74);
  *(std::set<unsigned int>::iterator *)(v3 + 848) = std::set<unsigned int>::find(
                                                      (std::set<unsigned int> *const)(v3 + 2208),
                                                      watcher_id);
  v75 = std::operator!=(
          (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 848),
          (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 880));
  *(_BYTE *)(((v3 + 848) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 880) >> 3) + 0x7FFF8000) = -8;
  if ( !v75 )
  {
    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 2208), watcher_id);
    goto LABEL_138;
  }
  *(_DWORD *)(((v3 + 1744) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 1744) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 1775) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 1775) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 1744, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 1744),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
    "checkConfig",
    100);
  v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 1744),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v77 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(v76, (const char (*)[76])byte_1AA5F1C0);
  v78 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, &final_stage_config->stage_id);
  v79 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v78, (const char (*)[10])" watcher:");
  v72 = watcher_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, watcher_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1744));
  *(_DWORD *)(((v3 + 1744) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v80 = 0;
LABEL_140:
  *(_BYTE *)(((v3 + 784) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 816) >> 3) + 0x7FFF8000) = -8;
  if ( v80 == 1 )
  {
    __for_range_3 = &final_stage_config->quest_id;
    *(_BYTE *)(((v3 + 912) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 912) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 912, v72);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 912) = std::vector<unsigned int>::begin(__for_range_3);
    *(_BYTE *)(((v3 + 944) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 944) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 944, v72);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 944) = std::vector<unsigned int>::end(__for_range_3);
    while ( 1 )
    {
      v81 = (char *)(v3 + 944);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 912),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 944)) )
      {
        v89 = 1;
        goto LABEL_167;
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v82 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 912));
      v83 = (int *)v82;
      if ( *(_BYTE *)(((unsigned __int64)v82 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v82 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v82 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v82);
      }
      v84 = *v83;
      v85 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      LOBYTE(v81) = v85 != 0;
      if ( v85 != 0 && v85 <= 3 )
        __asan_report_store4(v3 + 80, v81);
      *(_DWORD *)(v3 + 80) = v84;
      *(_BYTE *)(((v3 + 1008) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 1008) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 1008, v81);
      *(std::set<unsigned int>::iterator *)(v3 + 1008) = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 2288));
      *(_BYTE *)(((v3 + 976) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 976) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 976, v81);
      *(std::set<unsigned int>::iterator *)(v3 + 976) = std::set<unsigned int>::find(
                                                          (std::set<unsigned int> *const)(v3 + 2288),
                                                          (const std::set<unsigned int>::key_type *)(v3 + 80));
      v86 = std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 976),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 1008));
      *(_BYTE *)(((v3 + 976) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 1008) >> 3) + 0x7FFF8000) = -8;
      if ( v86 )
      {
        *(_DWORD *)(((v3 + 1808) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1808) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1839) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1839) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1808, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1808),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
          "checkConfig",
          111);
        v87 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1808),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v88 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v87, (const char (*)[56])byte_1AA5F240);
        v81 = (char *)(v3 + 80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v88, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1808));
        *(_DWORD *)(((v3 + 1808) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v89 = 0;
        goto LABEL_167;
      }
      v90 = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 80);
      if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(v90, *(unsigned int *)(v3 + 80)) )
        break;
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v3 + 2288),
        (const std::set<unsigned int>::value_type *)(v3 + 80));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 912));
    }
    *(_DWORD *)(((v3 + 1872) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1872) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1903) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1903) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1872, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1872),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
      "checkConfig",
      117);
    v91 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 1872),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v92 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v91, (const char (*)[56])byte_1AA5F2A0);
    v93 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v92, (const unsigned int *)(v3 + 80));
    v94 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v93, (const char (*)[15])byte_1AA5F060);
    v81 = (char *)&final_stage_config->quest_id;
    common::milog::MiLogStream::operator<<<unsigned int>(v94, &final_stage_config->quest_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1872));
    *(_DWORD *)(((v3 + 1872) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v89 = 0;
LABEL_167:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 912) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 944) >> 3) + 0x7FFF8000) = -8;
    if ( v89 == 1 )
    {
      __for_range_4 = &final_stage_config->final_quest_id;
      *(_BYTE *)(((v3 + 1040) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 1040) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 1040, v81);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 1040) = std::vector<unsigned int>::begin(__for_range_4);
      *(_BYTE *)(((v3 + 1072) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 1072) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 1072, v81);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 1072) = std::vector<unsigned int>::end(__for_range_4);
      while ( 1 )
      {
        v95 = (char *)(v3 + 1072);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 1040),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 1072)) )
        {
          v103 = 1;
          goto LABEL_194;
        }
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
        v96 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 1040));
        v97 = (int *)v96;
        if ( *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v96 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v96);
        }
        v98 = *v97;
        v99 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
        LOBYTE(v95) = v99 != 0;
        if ( v99 != 0 && v99 <= 3 )
          __asan_report_store4(v3 + 96, v95);
        *(_DWORD *)(v3 + 96) = v98;
        *(_BYTE *)(((v3 + 1136) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 1136) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 1136, v95);
        *(std::set<unsigned int>::iterator *)(v3 + 1136) = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 2288));
        *(_BYTE *)(((v3 + 1104) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 1104) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 1104, v95);
        *(std::set<unsigned int>::iterator *)(v3 + 1104) = std::set<unsigned int>::find(
                                                             (std::set<unsigned int> *const)(v3 + 2288),
                                                             (const std::set<unsigned int>::key_type *)(v3 + 96));
        v100 = std::operator!=(
                 (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 1104),
                 (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 1136));
        *(_BYTE *)(((v3 + 1104) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 1136) >> 3) + 0x7FFF8000) = -8;
        if ( v100 )
        {
          *(_DWORD *)(((v3 + 1936) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1936) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1967) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 1967) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1936, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1936),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
            "checkConfig",
            127);
          v101 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 1936),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v102 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                   v101,
                   (const char (*)[56])byte_1AA5F240);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v102, (const unsigned int *)(v3 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1936));
          *(_DWORD *)(((v3 + 1936) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v103 = 0;
          goto LABEL_194;
        }
        v104 = &txt_config_mgr->quest_config_mgr;
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 96);
        if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(v104, *(unsigned int *)(v3 + 96)) )
          break;
        std::set<unsigned int>::insert(
          (std::set<unsigned int> *const)(v3 + 2288),
          (const std::set<unsigned int>::value_type *)(v3 + 96));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 1040));
      }
      *(_DWORD *)(((v3 + 2000) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 2000) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 2031) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 2031) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 2000, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 2000),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
        "checkConfig",
        133);
      v105 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 2000),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v106 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v105, (const char (*)[56])byte_1AA5F2A0);
      v107 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v106,
               (const unsigned int *)(v3 + 96));
      v108 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v107, (const char (*)[22])byte_1AA5F300);
      common::milog::MiLogStream::operator<<<unsigned int>(v108, &final_stage_config->final_quest_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2000));
      *(_DWORD *)(((v3 + 2000) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v103 = 0;
LABEL_194:
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 1040) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 1072) >> 3) + 0x7FFF8000) = -8;
      if ( v103 == 1 )
      {
        std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 2128), &final_stage_config->stage_id);
        v2 = 0;
      }
    }
  }
LABEL_199:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 2288));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 2208));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 2128));
  if ( v122 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8104) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 268) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8110) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8118) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8124) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 2368LL, v122);
  }
  return v2;
};

// Line 149: range 0000000012C48FD0-0000000012C4ABE3
int32_t __cdecl ActivityHachiExcelConfigMgr::rewriteConfig(
        ActivityHachiExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *v5; // rsi
  std::unordered_map<unsigned int,HachiActivityStageInfo> *p_stage_map; // rdx
  std::unordered_map<unsigned int,HachiActivityStageInfo> *v7; // rdx
  const std::unordered_map<unsigned int,HachiActivityStageInfo>::key_type *p_stage_id; // rcx
  __int64 v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // edx
  unsigned int *v14; // r8
  unsigned int *v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  uint32_t stage_id; // ecx
  char v20; // dl
  uint32_t stealth_watcher; // ecx
  char v22; // al
  __int64 v23; // rsi
  uint32_t battle_watcher; // ecx
  char v25; // dl
  uint32_t open_day; // ecx
  char v27; // al
  std::vector<unsigned int> *p_final_quest_id; // rsi
  char *v29; // rsi
  HachiActivityStageInfo *v30; // r8
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v31; // rax
  int *v32; // rdx
  int v33; // ecx
  char v34; // al
  uint32_t v35; // r14d
  char *v36; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v37; // rax
  uint32_t *v38; // rdx
  char v39; // cl
  unsigned __int64 v40; // rax
  int v41; // edx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::unordered_map<unsigned int,data::ActivityHachiFinalStageExcelConfig>::size_type v44; // rax
  data::ActivityHachiFinalStageExcelConfigMap *p_activity_hachi_final_stage_excel_config_map; // rdx
  data::ActivityHachiFinalStageExcelConfigMap *v46; // rdx
  bool v47; // al
  std::unordered_map<unsigned int,HachiActivityStageInfo> *v48; // rdx
  std::unordered_map<unsigned int,HachiActivityStageInfo> *v49; // rdx
  const std::unordered_map<unsigned int,HachiActivityStageInfo>::key_type *v50; // rcx
  __int64 v51; // rsi
  bool v52; // al
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  int v55; // eax
  unsigned int *M_current; // rdx
  std::insert_iterator<std::vector<unsigned int> > v57; // rax
  std::vector<unsigned int> *container; // r14
  unsigned int *v59; // r15
  std::vector<unsigned int>::const_iterator v60; // rax
  std::insert_iterator<std::vector<unsigned int> > v61; // rdx
  const unsigned int *v62; // r8
  unsigned __int64 v63; // rax
  __int64 v64; // rsi
  uint32_t v65; // ecx
  char v66; // dl
  uint32_t dungeon_id; // ecx
  char v68; // al
  uint32_t v69; // ecx
  char v70; // al
  unsigned int *v71; // rdx
  std::insert_iterator<std::vector<unsigned int> > v72; // rax
  std::vector<unsigned int> *v73; // r14
  unsigned int *v74; // r15
  std::vector<unsigned int>::const_iterator v75; // rax
  std::insert_iterator<std::vector<unsigned int> > v76; // rdx
  uint32_t *v77; // rsi
  HachiActivityStageInfo *v78; // r8
  uint32_t v79; // ecx
  char v80; // dl
  uint32_t v81; // ecx
  char v82; // al
  std::vector<unsigned int> *v83; // rsi
  char *v84; // rsi
  unsigned int *v85; // rax
  int *v86; // rdx
  int v87; // ecx
  char v88; // al
  uint32_t v89; // r14d
  char *v90; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v91; // rax
  uint32_t *v92; // rdx
  char v93; // cl
  common::milog::MiLogStream *v94; // rax
  const unsigned int *__last; // [rsp+8h] [rbp-4F8h]
  const unsigned int *__lasta; // [rsp+8h] [rbp-4F8h]
  int32_t v98; // [rsp+1Ch] [rbp-4E4h]
  data::ActivityHachiStageExcelConfigMap *__for_range; // [rsp+30h] [rbp-4D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHachiStageExcelConfig>,false,false>::reference __in; // [rsp+38h] [rbp-4C8h]
  std::tuple_element<1,std::pair<unsigned int const,data::ActivityHachiStageExcelConfig> >::type *config; // [rsp+48h] [rbp-4B8h]
  std::unordered_map<unsigned int,std::vector<unsigned int>>::mapped_type *cur_stage_watchers_vec; // [rsp+50h] [rbp-4B0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-4A8h]
  data::ActivityHachiFinalStageExcelConfig *final_stage_config; // [rsp+60h] [rbp-4A0h]
  std::unordered_map<unsigned int,std::vector<unsigned int>>::mapped_type *cur_stage_watchers_vec_0; // [rsp+68h] [rbp-498h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+70h] [rbp-490h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+80h] [rbp-480h]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference watcher_id; // [rsp+88h] [rbp-478h]
  char v109[1136]; // [rsp+90h] [rbp-470h] BYREF

  v2 = (unsigned __int64)v109;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1088LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "23 32 4 12 quest_id:184 48 4 12 quest_id:223 64 8 15 __for_begin:150 96 8 13 __for_end:150 128 8"
                        " 9 <unknown> 160 8 9 <unknown> 192 8 15 __for_begin:184 224 8 13 __for_end:184 256 8 9 <unknown>"
                        " 288 8 24 final_stage_map_iter:195 320 8 9 <unknown> 352 8 9 <unknown> 384 8 9 <unknown> 416 8 1"
                        "5 __for_begin:206 448 8 13 __for_end:206 480 8 15 __for_begin:223 512 8 13 __for_end:223 544 32 "
                        "9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 104 14 stage_info:168 9"
                        "44 104 14 stage_info:210";
  *(_QWORD *)(v2 + 16) = ActivityHachiExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862733] = -218959360;
  v4[536862734] = -218959360;
  v4[536862735] = -218959360;
  v4[536862736] = -218959360;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862748] = -218959360;
  v4[536862749] = 62194;
  v4[536862752] = -218103808;
  v4[536862753] = -202116109;
  __for_range = &this->activity_hachi_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityHachiStageExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityHachiStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityHachiStageExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityHachiStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (uint32_t *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityHachiStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityHachiStageExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityHachiStageExcelConfig>,false> *)(v2 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHachiStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHachiStageExcelConfig>,false,false> *const)(v2 + 64));
    std::get<0ul,unsigned int const,data::ActivityHachiStageExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::ActivityHachiStageExcelConfig>(__in);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    p_stage_map = &this->stage_map;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::unordered_map<unsigned int,HachiActivityStageInfo>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,HachiActivityStageInfo>::end(p_stage_map);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    v7 = &this->stage_map;
    p_stage_id = &config->stage_id;
    v9 = *(unsigned __int8 *)(((v2 + 128) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v9 )
      __asan_report_store8(v2 + 128, v9);
    *(std::unordered_map<unsigned int,HachiActivityStageInfo>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,HachiActivityStageInfo>::find(
                                                                                         v7,
                                                                                         p_stage_id);
    v10 = std::__detail::operator!=<std::pair<unsigned int const,HachiActivityStageInfo>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HachiActivityStageInfo>,false> *)(v2 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HachiActivityStageInfo>,false> *)(v2 + 160));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 544, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 544),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
        "rewriteConfig",
        154);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 544),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v11, (const char (*)[54])byte_1AA5EE40);
      v5 = &config->stage_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->stage_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      v98 = -1;
      v13 = 0;
    }
    else
    {
      cur_stage_watchers_vec = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                                 &this->stage_watchers_map,
                                 &config->stage_id);
      if ( *(_BYTE *)(((unsigned __int64)&config->stealth_watcher >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->stealth_watcher >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->stealth_watcher);
      }
      if ( config->stealth_watcher )
      {
        std::vector<unsigned int>::push_back(cur_stage_watchers_vec, &config->stealth_watcher);
        std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
          &this->watcher_to_stage_map,
          &config->stealth_watcher,
          &config->stage_id,
          &config->stealth_watcher,
          v14);
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->battle_watcher >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->battle_watcher >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->battle_watcher);
      }
      if ( config->battle_watcher )
      {
        std::vector<unsigned int>::push_back(cur_stage_watchers_vec, &config->battle_watcher);
        std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
          &this->watcher_to_stage_map,
          &config->battle_watcher,
          &config->stage_id,
          &config->battle_watcher,
          v15);
      }
      v16 = ((v2 + 800) >> 3) + 2147450880;
      *(_DWORD *)v16 = 0;
      *(_DWORD *)(v16 + 4) = 0;
      *(_DWORD *)(v16 + 8) = 0;
      *(_BYTE *)(v16 + 12) = 0;
      HachiActivityStageInfo::HachiActivityStageInfo((HachiActivityStageInfo *const)(v2 + 800));
      v17 = (((_BYTE)config + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->stage_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->stage_id);
      }
      if ( config->stage_id == 1 )
      {
        if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 800, v17);
        *(_DWORD *)(v2 + 800) = 1;
      }
      else
      {
        if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 800, v17);
        *(_DWORD *)(v2 + 800) = 2;
      }
      v18 = (((_BYTE)config + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->stage_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->stage_id);
      }
      stage_id = config->stage_id;
      v20 = *(_BYTE *)(((v2 + 804) >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)(((v2 + 36) & 7) + 3) >= v20 )
      {
        LOBYTE(v18) = v20 != 0;
        __asan_report_store4(v2 + 804, v18);
      }
      *(_DWORD *)(v2 + 804) = stage_id;
      if ( *(_BYTE *)(((unsigned __int64)&config->stealth_watcher >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->stealth_watcher >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->stealth_watcher);
      }
      stealth_watcher = config->stealth_watcher;
      v22 = *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000);
      if ( v22 != 0 && v22 <= 3 )
      {
        LOBYTE(v18) = v22 != 0;
        __asan_report_store4(v2 + 832, v18);
      }
      *(_DWORD *)(v2 + 832) = stealth_watcher;
      v23 = (((_BYTE)config + 44) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->battle_watcher >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->battle_watcher >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->battle_watcher);
      }
      battle_watcher = config->battle_watcher;
      v25 = *(_BYTE *)(((v2 + 836) >> 3) + 0x7FFF8000);
      if ( v25 != 0 && (char)(((v2 + 68) & 7) + 3) >= v25 )
      {
        LOBYTE(v23) = v25 != 0;
        __asan_report_store4(v2 + 836, v23);
      }
      *(_DWORD *)(v2 + 836) = battle_watcher;
      if ( *(_BYTE *)(((unsigned __int64)&config->open_day >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->open_day >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->open_day);
      }
      open_day = config->open_day;
      v27 = *(_BYTE *)(((v2 + 840) >> 3) + 0x7FFF8000);
      if ( v27 != 0 && v27 <= 3 )
      {
        LOBYTE(v23) = v27 != 0;
        __asan_report_store4(v2 + 840, v23);
      }
      *(_DWORD *)(v2 + 840) = open_day;
      std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v2 + 808), &config->quest_id);
      p_final_quest_id = &config->final_quest_id;
      std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v2 + 880), &config->final_quest_id);
      __for_range_0 = &config->final_quest_id;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, p_final_quest_id);
      *(std::vector<unsigned int>::iterator *)(v2 + 192) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 224, p_final_quest_id);
      *(std::vector<unsigned int>::iterator *)(v2 + 224) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v29 = (char *)(v2 + 224);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 192),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 224)) )
          break;
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
        v31 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 192));
        v32 = (int *)v31;
        if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v31);
        }
        v33 = *v32;
        v34 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
        if ( v34 != 0 && v34 <= 3 )
        {
          LOBYTE(v29) = v34 != 0;
          __asan_report_store4(v2 + 32, v29);
        }
        *(_DWORD *)(v2 + 32) = v33;
        if ( *(_BYTE *)(((unsigned __int64)&config->stage_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->stage_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&config->stage_id);
        }
        v35 = config->stage_id;
        v36 = (char *)(v2 + 32);
        v37 = std::unordered_map<unsigned int,unsigned int>::operator[](
                &this->quest_to_stage_map,
                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
        v38 = v37;
        v39 = *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000);
        if ( v39 != 0 && (char)(((unsigned __int8)v37 & 7) + 3) >= v39 )
        {
          LOBYTE(v36) = v39 != 0;
          __asan_report_store4(v37, v36);
        }
        *v38 = v35;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 192));
      }
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      v5 = &config->stage_id;
      std::unordered_map<unsigned int,HachiActivityStageInfo>::emplace<unsigned int &,HachiActivityStageInfo&>(
        &this->stage_map,
        &config->stage_id,
        (HachiActivityStageInfo *)(v2 + 800),
        (unsigned int *)&this->stage_map,
        v30);
      HachiActivityStageInfo::~HachiActivityStageInfo((HachiActivityStageInfo *const)(v2 + 800));
      v13 = 1;
    }
    v40 = ((v2 + 800) >> 3) + 2147450880;
    *(_DWORD *)v40 = -117901064;
    *(_DWORD *)(v40 + 4) = -117901064;
    *(_DWORD *)(v40 + 8) = -117901064;
    *(_BYTE *)(v40 + 12) = -8;
    if ( v13 != 1 )
    {
      v41 = 0;
      goto LABEL_71;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHachiStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHachiStageExcelConfig>,false,false> *const)(v2 + 64));
  }
  v41 = 1;
LABEL_71:
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v41 == 1 )
  {
    if ( std::unordered_map<unsigned int,data::ActivityHachiFinalStageExcelConfig>::size(&this->activity_hachi_final_stage_excel_config_map) == 1 )
    {
      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      p_activity_hachi_final_stage_excel_config_map = &this->activity_hachi_final_stage_excel_config_map;
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 288, v5);
      *(std::unordered_map<unsigned int,data::ActivityHachiFinalStageExcelConfig>::iterator *)(v2 + 288) = std::unordered_map<unsigned int,data::ActivityHachiFinalStageExcelConfig>::begin(p_activity_hachi_final_stage_excel_config_map);
      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      v46 = &this->activity_hachi_final_stage_excel_config_map;
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 320, v5);
      *(std::unordered_map<unsigned int,data::ActivityHachiFinalStageExcelConfig>::iterator *)(v2 + 320) = std::unordered_map<unsigned int,data::ActivityHachiFinalStageExcelConfig>::end(v46);
      v47 = std::__detail::operator!=<std::pair<unsigned int const,data::ActivityHachiFinalStageExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityHachiFinalStageExcelConfig>,false> *)(v2 + 288),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityHachiFinalStageExcelConfig>,false> *)(v2 + 320));
      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
      if ( v47 )
      {
        final_stage_config = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHachiFinalStageExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHachiFinalStageExcelConfig>,false,false> *const)(v2 + 288))->second;
        *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        v48 = &this->stage_map;
        if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 384, v2 + 320);
        *(std::unordered_map<unsigned int,HachiActivityStageInfo>::iterator *)(v2 + 384) = std::unordered_map<unsigned int,HachiActivityStageInfo>::end(v48);
        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        v49 = &this->stage_map;
        v50 = &final_stage_config->stage_id;
        v51 = *(unsigned __int8 *)(((v2 + 352) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v51 )
          __asan_report_store8(v2 + 352, v51);
        *(std::unordered_map<unsigned int,HachiActivityStageInfo>::iterator *)(v2 + 352) = std::unordered_map<unsigned int,HachiActivityStageInfo>::find(
                                                                                             v49,
                                                                                             v50);
        v52 = std::__detail::operator!=<std::pair<unsigned int const,HachiActivityStageInfo>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HachiActivityStageInfo>,false> *)(v2 + 352),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HachiActivityStageInfo>,false> *)(v2 + 384));
        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
        if ( v52 )
        {
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 672, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 672),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
            "rewriteConfig",
            201);
          v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 672),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v54 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(v53, (const char (*)[72])byte_1AA5F140);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &final_stage_config->stage_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          v98 = -1;
          v55 = 0;
        }
        else
        {
          cur_stage_watchers_vec_0 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                                       &this->stage_watchers_map,
                                       &final_stage_config->stage_id);
          M_current = std::vector<unsigned int>::end(cur_stage_watchers_vec_0)._M_current;
          v57 = std::inserter<std::vector<unsigned int>,__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
                  cur_stage_watchers_vec_0,
                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
          container = v57.container;
          v59 = v57.iter._M_current;
          __last = std::vector<unsigned int>::end(&final_stage_config->watcher_id_list)._M_current;
          v60._M_current = std::vector<unsigned int>::begin(&final_stage_config->watcher_id_list)._M_current;
          v61.container = container;
          v61.iter._M_current = v59;
          std::copy<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::insert_iterator<std::vector<unsigned int>>>(
            v60,
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__last,
            v61);
          __for_range_1 = &final_stage_config->watcher_id_list;
          *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 416, __last);
          *(std::vector<unsigned int>::const_iterator *)(v2 + 416) = std::vector<unsigned int>::begin(__for_range_1);
          *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 448, __last);
          *(std::vector<unsigned int>::const_iterator *)(v2 + 448) = std::vector<unsigned int>::end(__for_range_1);
          while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 416),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 448)) )
          {
            watcher_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 416));
            std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
              &this->watcher_to_stage_map,
              watcher_id,
              &final_stage_config->stage_id,
              (const unsigned int *)&this->watcher_to_stage_map,
              v62);
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 416));
          }
          *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
          v63 = ((v2 + 944) >> 3) + 2147450880;
          *(_DWORD *)v63 = 0;
          *(_DWORD *)(v63 + 4) = 0;
          *(_DWORD *)(v63 + 8) = 0;
          *(_BYTE *)(v63 + 12) = 0;
          HachiActivityStageInfo::HachiActivityStageInfo((HachiActivityStageInfo *const)(v2 + 944));
          if ( *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 944, v2 + 448);
          *(_DWORD *)(v2 + 944) = 3;
          v64 = (((_BYTE)final_stage_config + 12) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&final_stage_config->stage_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)final_stage_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&final_stage_config->stage_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&final_stage_config->stage_id);
          }
          v65 = final_stage_config->stage_id;
          v66 = *(_BYTE *)(((v2 + 948) >> 3) + 0x7FFF8000);
          if ( v66 != 0 && (char)(((v2 - 76) & 7) + 3) >= v66 )
          {
            LOBYTE(v64) = v66 != 0;
            __asan_report_store4(v2 + 948, v64);
          }
          *(_DWORD *)(v2 + 948) = v65;
          if ( *(_BYTE *)(((unsigned __int64)&final_stage_config->dungeon_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&final_stage_config->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&final_stage_config->dungeon_id);
          }
          dungeon_id = final_stage_config->dungeon_id;
          v68 = *(_BYTE *)(((v2 + 1016) >> 3) + 0x7FFF8000);
          if ( v68 != 0 && v68 <= 3 )
          {
            LOBYTE(v64) = v68 != 0;
            __asan_report_store4(v2 + 1016, v64);
          }
          *(_DWORD *)(v2 + 1016) = dungeon_id;
          if ( *(_BYTE *)(((unsigned __int64)&final_stage_config->open_day >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&final_stage_config->open_day >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&final_stage_config->open_day);
          }
          v69 = final_stage_config->open_day;
          v70 = *(_BYTE *)(((v2 + 984) >> 3) + 0x7FFF8000);
          if ( v70 != 0 && v70 <= 3 )
          {
            LOBYTE(v64) = v70 != 0;
            __asan_report_store4(v2 + 984, v64);
          }
          *(_DWORD *)(v2 + 984) = v69;
          v71 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 992))._M_current;
          v72 = std::inserter<std::vector<unsigned int>,__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
                  (std::vector<unsigned int> *)(v2 + 992),
                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v71);
          v73 = v72.container;
          v74 = v72.iter._M_current;
          __lasta = std::vector<unsigned int>::end(&final_stage_config->watcher_id_list)._M_current;
          v75._M_current = std::vector<unsigned int>::begin(&final_stage_config->watcher_id_list)._M_current;
          v76.container = v73;
          v76.iter._M_current = v74;
          std::copy<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::insert_iterator<std::vector<unsigned int>>>(
            v75,
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__lasta,
            v76);
          v77 = &final_stage_config->stage_id;
          std::unordered_map<unsigned int,HachiActivityStageInfo>::emplace<unsigned int const&,HachiActivityStageInfo&>(
            &this->stage_map,
            &final_stage_config->stage_id,
            (HachiActivityStageInfo *)(v2 + 944),
            (const unsigned int *)&this->stage_map,
            v78);
          v79 = final_stage_config->dungeon_id;
          v80 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
          if ( v80 != 0 && (char)((((_BYTE)this - 76) & 7) + 3) >= v80 )
          {
            LOBYTE(v77) = v80 != 0;
            __asan_report_store4(&this->dungeon_id, v77);
          }
          this->dungeon_id = v79;
          v81 = final_stage_config->stage_id;
          v82 = *(_BYTE *)(((unsigned __int64)&this->dungeon_stage_id >> 3) + 0x7FFF8000);
          if ( v82 != 0 && v82 <= 3 )
          {
            LOBYTE(v77) = v82 != 0;
            __asan_report_store4(&this->dungeon_stage_id, v77);
          }
          this->dungeon_stage_id = v81;
          std::vector<unsigned int>::operator=(
            (std::vector<unsigned int> *const)(v2 + 952),
            &final_stage_config->quest_id);
          v83 = &final_stage_config->final_quest_id;
          std::vector<unsigned int>::operator=(
            (std::vector<unsigned int> *const)(v2 + 1024),
            &final_stage_config->final_quest_id);
          __for_range_2 = &final_stage_config->final_quest_id;
          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 480, v83);
          *(std::vector<unsigned int>::const_iterator *)(v2 + 480) = std::vector<unsigned int>::begin(__for_range_2);
          *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 512, v83);
          *(std::vector<unsigned int>::const_iterator *)(v2 + 512) = std::vector<unsigned int>::end(__for_range_2);
          while ( 1 )
          {
            v84 = (char *)(v2 + 512);
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 480),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 512)) )
              break;
            *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
            v85 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 480));
            v86 = (int *)v85;
            if ( *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v85 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v85);
            }
            v87 = *v86;
            v88 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
            if ( v88 != 0 && v88 <= 3 )
            {
              LOBYTE(v84) = v88 != 0;
              __asan_report_store4(v2 + 48, v84);
            }
            *(_DWORD *)(v2 + 48) = v87;
            if ( *(_BYTE *)(((unsigned __int64)&final_stage_config->stage_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)final_stage_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&final_stage_config->stage_id >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4(&final_stage_config->stage_id);
            }
            v89 = final_stage_config->stage_id;
            v90 = (char *)(v2 + 48);
            v91 = std::unordered_map<unsigned int,unsigned int>::operator[](
                    &this->quest_to_stage_map,
                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
            v92 = v91;
            v93 = *(_BYTE *)(((unsigned __int64)v91 >> 3) + 0x7FFF8000);
            if ( v93 != 0 && (char)(((unsigned __int8)v91 & 7) + 3) >= v93 )
            {
              LOBYTE(v90) = v93 != 0;
              __asan_report_store4(v91, v90);
            }
            *v92 = v89;
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 480));
          }
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
          HachiActivityStageInfo::~HachiActivityStageInfo((HachiActivityStageInfo *const)(v2 + 944));
          v55 = 1;
        }
        if ( v55 == 1 )
          v98 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 736, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 736),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
          "rewriteConfig",
          230);
        v94 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 736),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v94, (const char (*)[47])byte_1AA5F340);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
        v98 = -1;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 608, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 608),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
        "rewriteConfig",
        192);
      v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v43 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v42, (const char (*)[61])byte_1AA5F0E0);
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      v44 = std::unordered_map<unsigned int,data::ActivityHachiFinalStageExcelConfig>::size(&this->activity_hachi_final_stage_excel_config_map);
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
        v44 = __asan_report_store8(v2 + 256, byte_1AA5F0E0);
      *(_QWORD *)(v2 + 256) = v44;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v43,
        (const unsigned __int64 *)(v2 + 256));
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
      v98 = -1;
    }
  }
  if ( v109 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1088LL, v109);
  }
  return v98;
};

// Line 237: range 0000000012C4ABE4-0000000012C4AD9F
const HachiActivityStageInfo *__fastcall ActivityHachiExcelConfigMgr::findStageInfoByStageId(
        const ActivityHachiExcelConfigMgr *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,HachiActivityStageInfo> *p_stage_map; // rdx
  std::unordered_map<unsigned int,HachiActivityStageInfo> *v6; // rdx
  bool v7; // al
  const HachiActivityStageInfo *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 stage_id:236 64 8 8 iter:238 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityHachiExcelConfigMgr::findStageInfoByStageId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_stage_map = &this->stage_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::unordered_map<unsigned int,HachiActivityStageInfo>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,HachiActivityStageInfo>::find(
                                                                                            p_stage_map,
                                                                                            (const std::unordered_map<unsigned int,HachiActivityStageInfo>::key_type *)(v2 + 48));
  v6 = &this->stage_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,HachiActivityStageInfo>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,HachiActivityStageInfo>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,HachiActivityStageInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HachiActivityStageInfo>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HachiActivityStageInfo>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,HachiActivityStageInfo>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,HachiActivityStageInfo>,false,false> *const)(v2 + 64))->second;
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

// Line 247: range 0000000012C4ADA0-0000000012C4AF9B
__int64 __fastcall ActivityHachiExcelConfigMgr::getStageByStageFinishQuestId(
        const ActivityHachiExcelConfigMgr *const this,
        __int64 quest_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_quest_to_stage_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 quest_id:246 64 8 8 iter:248 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityHachiExcelConfigMgr::getStageByStageFinishQuestId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = quest_id;
  p_quest_to_stage_map = &this->quest_to_stage_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, quest_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_quest_to_stage_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->quest_to_stage_map;
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

// Line 257: range 0000000012C4AF9C-0000000012C4B197
__int64 __fastcall ActivityHachiExcelConfigMgr::getStageByWatcherId(
        const ActivityHachiExcelConfigMgr *const this,
        __int64 watcher_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_watcher_to_stage_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 watcher_id:256 64 8 8 iter:258 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityHachiExcelConfigMgr::getStageByWatcherId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = watcher_id;
  p_watcher_to_stage_map = &this->watcher_to_stage_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, watcher_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_watcher_to_stage_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->watcher_to_stage_map;
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

// Line 267: range 0000000012C4B198-0000000012C4BB82
__int64 __fastcall ActivityHachiExcelConfigMgr::isStageWatcherFinish(
        const ActivityHachiExcelConfigMgr *const this,
        __int64 stage_id,
        const std::vector<unsigned int> *finished_watcher_vec)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_stage_watchers_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v8; // rdx
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned __int64 v14; // rax
  char *v15; // rsi
  unsigned int *v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  char *v20; // rsi
  unsigned int *v21; // rax
  int *v22; // rdx
  int v23; // ecx
  char v24; // al
  bool v25; // al
  int v26; // edx
  __int64 result; // rax
  std::vector<unsigned int> *__for_range_0; // [rsp+28h] [rbp-218h]
  char v30[528]; // [rsp+30h] [rbp-210h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "13 32 4 14 watcher_id:275 48 4 14 watcher_id:280 64 4 12 stage_id:266 80 8 8 iter:268 112 8 9 <u"
                        "nknown> 144 8 15 __for_begin:275 176 8 13 __for_end:275 208 8 15 __for_begin:280 240 8 13 __for_"
                        "end:280 272 8 9 <unknown> 304 8 9 <unknown> 336 32 9 <unknown> 400 48 24 finished_watcher_set:274";
  *(_QWORD *)(v4 + 16) = ActivityHachiExcelConfigMgr::isStageWatcherFinish;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = 61956;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862724] = -234881024;
  v6[536862725] = 62194;
  v6[536862725] = -234881024;
  v6[536862726] = 62194;
  v6[536862726] = -234881024;
  v6[536862727] = 62194;
  v6[536862727] = -234881024;
  v6[536862728] = 62194;
  v6[536862728] = -234881024;
  v6[536862729] = 62194;
  v6[536862729] = -234881024;
  v6[536862730] = 62194;
  v6[536862731] = -219021312;
  v6[536862732] = 62194;
  v6[536862734] = -202116109;
  *(_DWORD *)(v4 + 64) = stage_id;
  p_stage_watchers_map = &this->stage_watchers_map;
  if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 80, stage_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v4 + 80) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_stage_watchers_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v4 + 64));
  v8 = &this->stage_watchers_map;
  if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 112, v4 + 64);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v4 + 112) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v8);
  v9 = (char *)(v4 + 112);
  v10 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v4 + 80),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v4 + 112));
  *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    *(_DWORD *)(((v4 + 336) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 336) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 367) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 111) & 7) >= *(_BYTE *)(((v4 + 367) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 336, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 336),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityHachiExcelConfig.cpp",
      "isStageWatcherFinish",
      271);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v4 + 336),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])"stage_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v13, (const char (*)[18])" config  not find");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 336));
    v3 = 0;
  }
  else
  {
    v14 = ((v4 + 400) >> 3) + 2147450880;
    *(_DWORD *)v14 = 0;
    *(_WORD *)(v14 + 4) = 0;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 400));
    *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 144, v9);
    *(std::vector<unsigned int>::const_iterator *)(v4 + 144) = std::vector<unsigned int>::begin(finished_watcher_vec);
    *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 176, v9);
    *(std::vector<unsigned int>::const_iterator *)(v4 + 176) = std::vector<unsigned int>::end(finished_watcher_vec);
    while ( 1 )
    {
      v15 = (char *)(v4 + 176);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 144),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 176)) )
        break;
      *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = 4;
      v16 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 144));
      v17 = (int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v18 = *v17;
      v19 = *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000);
      if ( v19 != 0 && v19 <= 3 )
      {
        LOBYTE(v15) = v19 != 0;
        __asan_report_store4(v4 + 32, v15);
      }
      *(_DWORD *)(v4 + 32) = v18;
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v4 + 400),
        (const std::set<unsigned int>::value_type *)(v4 + 32));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 144));
    }
    *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) = -8;
    __for_range_0 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v4 + 80))->second;
    *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 208, v15);
    *(std::vector<unsigned int>::const_iterator *)(v4 + 208) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v4 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 240, v15);
    *(std::vector<unsigned int>::const_iterator *)(v4 + 240) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v20 = (char *)(v4 + 240);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 208),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 240)) )
        break;
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
      v21 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 208));
      v22 = (int *)v21;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v21);
      }
      v23 = *v22;
      v24 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v20) = v24 != 0;
      if ( v24 != 0 && v24 <= 3 )
        __asan_report_store4(v4 + 48, v20);
      *(_DWORD *)(v4 + 48) = v23;
      *(_BYTE *)(((v4 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 304) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 304, v20);
      *(std::set<unsigned int>::iterator *)(v4 + 304) = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v4 + 400));
      *(_BYTE *)(((v4 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 272) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 272, v20);
      *(std::set<unsigned int>::iterator *)(v4 + 272) = std::set<unsigned int>::find(
                                                          (std::set<unsigned int> *const)(v4 + 400),
                                                          (const std::set<unsigned int>::key_type *)(v4 + 48));
      v25 = std::operator==(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v4 + 272),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v4 + 304));
      *(_BYTE *)(((v4 + 272) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 304) >> 3) + 0x7FFF8000) = -8;
      if ( v25 )
      {
        v3 = 0;
        v26 = 0;
        goto LABEL_41;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 208));
    }
    v26 = 1;
LABEL_41:
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 240) >> 3) + 0x7FFF8000) = -8;
    if ( v26 == 1 )
      v3 = 1;
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 400));
  }
  result = v3;
  if ( v30 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 291: range 0000000012C4BB84-0000000012C4BEA4
__int64 __fastcall ActivityHachiExcelConfigMgr::getStageWatcherVec(
        const ActivityHachiExcelConfigMgr *const this,
        __int64 stage_id,
        std::vector<unsigned int> *watcher_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_stage_watchers_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v10; // rax
  std::vector<unsigned int>::size_type v11; // rsi
  std::vector<unsigned int> *__for_range; // [rsp+20h] [rbp-F0h]
  const unsigned int *watcher_id; // [rsp+28h] [rbp-E8h]
  char v15[224]; // [rsp+30h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 12 stage_id:290 64 8 8 iter:292 96 8 9 <unknown> 128 8 15 __for_begin:298 160 8 13 __for_end:298";
  *(_QWORD *)(v3 + 16) = ActivityHachiExcelConfigMgr::getStageWatcherVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 48) = stage_id;
  p_stage_watchers_map = &this->stage_watchers_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, stage_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_stage_watchers_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->stage_watchers_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
    v11 = std::vector<unsigned int>::size(&v10->second);
    std::vector<unsigned int>::reserve(watcher_vec, v11);
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v11);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v11);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
    {
      watcher_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      std::vector<unsigned int>::push_back(watcher_vec, watcher_id);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    result = 0LL;
  }
  if ( v15 == (char *)v3 )
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
