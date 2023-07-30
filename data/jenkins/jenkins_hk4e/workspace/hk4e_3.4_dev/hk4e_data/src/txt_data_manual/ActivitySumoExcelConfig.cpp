// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivitySumoExcelConfig.cpp

// Line 18: range 0000000012E2B856-0000000012E2BE86
int32_t __cdecl ActivitySumoExcelConfigMgr::checkConfig(
        ActivitySumoExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  char *v8; // rsi
  unsigned int *v9; // rax
  int *v10; // rdx
  int v11; // ecx
  char v12; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // eax
  int32_t result; // eax
  const std::set<unsigned int> *__for_range; // [rsp+18h] [rbp-178h]
  char v20[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 13 watcher_id:29 64 8 14 __for_begin:29 96 8 12 __for_end:29 128 32 9 <unknown> 192 32 9 "
                        "<unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySumoExcelConfigMgr::checkConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  if ( ActivitySumoExcelConfigMgr::checkStageConfig(this, txt_config_mgr) )
  {
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
      "./src/txt_data_manual/ActivitySumoExcelConfig.cpp",
      "checkConfig",
      21);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v6, (const char (*)[24])"checkStageConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    v2 = -1;
  }
  else if ( std::unordered_map<unsigned int,data::ActivitySumoOverallConfig>::size(&this->activity_sumo_overall_config_map) == 1 )
  {
    __for_range = &this->watcher_id_set;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, txt_config_mgr);
    *(std::set<unsigned int>::iterator *)(v3 + 64) = std::set<unsigned int>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, txt_config_mgr);
    *(std::set<unsigned int>::iterator *)(v3 + 96) = std::set<unsigned int>::end(__for_range);
    while ( 1 )
    {
      v8 = (char *)(v3 + 96);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 64),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 96)) )
      {
        v16 = 1;
        goto LABEL_32;
      }
      v9 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 64));
      v10 = (int *)v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      v11 = *v10;
      v12 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(v8) = v12 != 0;
        __asan_report_store4(v3 + 48, v8);
      }
      *(_DWORD *)(v3 + 48) = v11;
      if ( *(_DWORD *)(v3 + 48)
        && !WatcherExcelConfigMgr::findWatcherConfig(&txt_config_mgr->watcher_config_mgr, *(_DWORD *)(v3 + 48)) )
      {
        break;
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 64));
    }
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
      "./src/txt_data_manual/ActivitySumoExcelConfig.cpp",
      "checkConfig",
      33);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v14, (const char (*)[30])byte_1AAAE680);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    v2 = -1;
    v16 = 0;
LABEL_32:
    if ( v16 == 1 )
      v2 = 0;
  }
  else
  {
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
      "./src/txt_data_manual/ActivitySumoExcelConfig.cpp",
      "checkConfig",
      26);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      v7,
      (const char (*)[50])"activity_sumo_overall_config_map size should be 1");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    v2 = -1;
  }
  result = v2;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 41: range 0000000012E2BE88-0000000012E2D800
int32_t __cdecl ActivitySumoExcelConfigMgr::checkStageConfig(
        ActivitySumoExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> >::type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int v14; // eax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rdi
  __int64 v16; // rdx
  char v17; // cl
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  __int64 v20; // rsi
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  char *v23; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v24; // rax
  int *v25; // rdx
  int v26; // ecx
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // edx
  char *v31; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v32; // rax
  int *v33; // rdx
  int v34; // ecx
  char v35; // al
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  int v38; // edx
  char *v39; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v40; // rax
  int *v41; // rdx
  int v42; // ecx
  char v43; // al
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  int v46; // edx
  char *v47; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v48; // rax
  int *v49; // rdx
  int v50; // ecx
  char v51; // al
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  int v54; // edx
  int32_t result; // eax
  std::map<unsigned int,std::map<unsigned int,data::ActivitySumoStageExcelConfig*>> *__for_range; // [rsp+18h] [rbp-478h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivitySumoStageExcelConfig*> > >::reference v59; // [rsp+20h] [rbp-470h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,data::ActivitySumoStageExcelConfig*> > >::type *schedule_id; // [rsp+28h] [rbp-468h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,data::ActivitySumoStageExcelConfig*> > >::type *stage_map; // [rsp+30h] [rbp-460h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> >::reference v62; // [rsp+40h] [rbp-450h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> >::type *stage_id; // [rsp+48h] [rbp-448h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> >::type *config_ptr; // [rsp+50h] [rbp-440h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+58h] [rbp-438h]
  std::vector<unsigned int> *__for_range_1; // [rsp+60h] [rbp-430h]
  std::vector<unsigned int> *__for_range_2; // [rsp+68h] [rbp-428h]
  std::vector<unsigned int> *__for_range_3; // [rsp+70h] [rbp-420h]
  std::vector<unsigned int> *__for_range_4; // [rsp+78h] [rbp-418h]
  char v70[1040]; // [rsp+80h] [rbp-410h] BYREF

  v3 = (unsigned __int64)v70;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(992LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "24 32 4 13 watcher_id:67 48 4 18 trial_avatar_id:75 64 4 11 skill_id:83 80 4 19 special_skill_id"
                        ":91 96 8 14 __for_begin:42 128 8 12 __for_end:42 160 8 14 __for_begin:49 192 8 12 __for_end:49 2"
                        "24 8 14 __for_begin:67 256 8 12 __for_end:67 288 8 14 __for_begin:75 320 8 12 __for_end:75 352 8"
                        " 14 __for_begin:83 384 8 12 __for_end:83 416 8 14 __for_begin:91 448 8 12 __for_end:91 480 32 9 "
                        "<unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <"
                        "unknown> 864 32 9 <unknown> 928 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySumoExcelConfigMgr::checkStageConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
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
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -202116109;
  __for_range = &this->schedule_sumo_stage_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::map<unsigned int,std::map<unsigned int,data::ActivitySumoStageExcelConfig*>>::iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,data::ActivitySumoStageExcelConfig *>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::map<unsigned int,std::map<unsigned int,data::ActivitySumoStageExcelConfig*>>::iterator *)(v3 + 128) = std::map<unsigned int,std::map<unsigned int,data::ActivitySumoStageExcelConfig *>>::end(__for_range);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivitySumoStageExcelConfig*> > >::_Self *)(v3 + 96),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivitySumoStageExcelConfig*> > >::_Self *)(v3 + 128)) )
    {
      v10 = 1;
      goto LABEL_132;
    }
    v59 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivitySumoStageExcelConfig *>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivitySumoStageExcelConfig*> > > *const)(v3 + 96));
    schedule_id = std::get<0ul,unsigned int const,std::map<unsigned int,data::ActivitySumoStageExcelConfig *>>(v59);
    stage_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,data::ActivitySumoStageExcelConfig*> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,data::ActivitySumoStageExcelConfig *>>(v59);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    v7 = *schedule_id;
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(p_new_activity_config_mgr, v7) )
      break;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v7);
    *(std::map<unsigned int,data::ActivitySumoStageExcelConfig*>::const_iterator *)(v3 + 160) = std::map<unsigned int,data::ActivitySumoStageExcelConfig *>::begin(stage_map);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v7);
    *(std::map<unsigned int,data::ActivitySumoStageExcelConfig*>::const_iterator *)(v3 + 192) = std::map<unsigned int,data::ActivitySumoStageExcelConfig *>::end(stage_map);
    while ( 1 )
    {
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> >::_Self *)(v3 + 160),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> >::_Self *)(v3 + 192)) )
      {
        v14 = 1;
        goto LABEL_128;
      }
      v62 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig *>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> > *const)(v3 + 160));
      stage_id = std::get<0ul,unsigned int const,data::ActivitySumoStageExcelConfig *>(v62);
      v11 = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> >::type *)std::get<1ul,unsigned int const,data::ActivitySumoStageExcelConfig *>(v62);
      config_ptr = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v11);
      if ( !*config_ptr )
      {
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivitySumoExcelConfig.cpp",
          "checkStageConfig",
          53);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                v12,
                (const char (*)[35])"stage config is nullptr, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, stage_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
        goto LABEL_128;
      }
      p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
      {
        p_dungeon_config_mgr = (DungeonExcelConfigMgr *)config_ptr;
        __asan_report_load8(config_ptr);
      }
      v16 = (__int64)*config_ptr;
      v17 = *(_BYTE *)(((unsigned __int64)&(*config_ptr)->dungeon_id >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)(((*(_BYTE *)config_ptr + 20) & 7) + 3) >= v17 )
      {
        p_dungeon_config_mgr = (DungeonExcelConfigMgr *)&(*config_ptr)->dungeon_id;
        __asan_report_load4(p_dungeon_config_mgr);
      }
      dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                             p_dungeon_config_mgr,
                             *(unsigned int *)(v16 + 20));
      if ( !dungeon_config_ptr )
      {
        *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 608, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 608),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivitySumoExcelConfig.cpp",
          "checkStageConfig",
          59);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v18, (const char (*)[48])byte_1AAAE9A0);
        if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(config_ptr);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &(*config_ptr)->dungeon_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
        *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
        goto LABEL_128;
      }
      v20 = (((_BYTE)dungeon_config_ptr + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->type);
      }
      if ( dungeon_config_ptr->type != DUNGEON_SUMO_COMBAT )
        break;
      if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(config_ptr);
      __for_range_1 = &(*config_ptr)->watcher_list;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v20);
      *(std::vector<unsigned int>::iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v20);
      *(std::vector<unsigned int>::iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v23 = (char *)(v3 + 256);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 224),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 256)) )
        {
          v30 = 1;
          goto LABEL_64;
        }
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
        v24 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 224));
        v25 = (int *)v24;
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v24);
        }
        v26 = *v25;
        v27 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
        if ( v27 != 0 && v27 <= 3 )
        {
          LOBYTE(v23) = v27 != 0;
          __asan_report_store4(v3 + 32, v23);
        }
        *(_DWORD *)(v3 + 32) = v26;
        if ( !WatcherExcelConfigMgr::findWatcherConfig(&txt_config_mgr->watcher_config_mgr, *(_DWORD *)(v3 + 32)) )
          break;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 224));
      }
      *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 736, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 736),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivitySumoExcelConfig.cpp",
        "checkStageConfig",
        71);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 736),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v29 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v28, (const char (*)[52])byte_1AAAEA60);
      v23 = (char *)(v3 + 32);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
      *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v30 = 0;
LABEL_64:
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      if ( v30 != 1 )
      {
        v14 = 0;
        goto LABEL_128;
      }
      if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(config_ptr);
      __for_range_2 = &(*config_ptr)->trial_avatar_pool;
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 288, v23);
      *(std::vector<unsigned int>::iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_2);
      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 320, v23);
      *(std::vector<unsigned int>::iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_2);
      while ( 1 )
      {
        v31 = (char *)(v3 + 320);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 288),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 320)) )
        {
          v38 = 1;
          goto LABEL_84;
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v32 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 288));
        v33 = (int *)v32;
        if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v32);
        }
        v34 = *v33;
        v35 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v35 != 0 && v35 <= 3 )
        {
          LOBYTE(v31) = v35 != 0;
          __asan_report_store4(v3 + 48, v31);
        }
        *(_DWORD *)(v3 + 48) = v34;
        if ( !data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                &txt_config_mgr->trial_avatar_config_mgr,
                *(unsigned int *)(v3 + 48)) )
          break;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 288));
      }
      *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 800, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 800),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivitySumoExcelConfig.cpp",
        "checkStageConfig",
        79);
      v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 800),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v37 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v36, (const char (*)[62])byte_1AAAEAC0);
      v31 = (char *)(v3 + 48);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
      *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v38 = 0;
LABEL_84:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
      if ( v38 != 1 )
      {
        v14 = 0;
        goto LABEL_128;
      }
      if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(config_ptr);
      __for_range_3 = &(*config_ptr)->skill_pool;
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 352, v31);
      *(std::vector<unsigned int>::iterator *)(v3 + 352) = std::vector<unsigned int>::begin(__for_range_3);
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 384, v31);
      *(std::vector<unsigned int>::iterator *)(v3 + 384) = std::vector<unsigned int>::end(__for_range_3);
      while ( 1 )
      {
        v39 = (char *)(v3 + 384);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 352),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 384)) )
        {
          v46 = 1;
          goto LABEL_104;
        }
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        v40 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 352));
        v41 = (int *)v40;
        if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v40);
        }
        v42 = *v41;
        v43 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
        if ( v43 != 0 && v43 <= 3 )
        {
          LOBYTE(v39) = v43 != 0;
          __asan_report_store4(v3 + 64, v39);
        }
        *(_DWORD *)(v3 + 64) = v42;
        if ( !data::ActivitySumoExcelConfigMgrBase::findActivitySumoSwitchSkillExcelConfig(
                this,
                *(unsigned int *)(v3 + 64)) )
          break;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 352));
      }
      *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 864) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 864, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 864),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivitySumoExcelConfig.cpp",
        "checkStageConfig",
        87);
      v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 864),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v45 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v44, (const char (*)[60])byte_1AAAEB20);
      v39 = (char *)(v3 + 64);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
      *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v46 = 0;
LABEL_104:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
      if ( v46 != 1 )
      {
        v14 = 0;
        goto LABEL_128;
      }
      if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(config_ptr);
      __for_range_4 = &(*config_ptr)->special_skill_pool;
      *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 416, v39);
      *(std::vector<unsigned int>::iterator *)(v3 + 416) = std::vector<unsigned int>::begin(__for_range_4);
      *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 448, v39);
      *(std::vector<unsigned int>::iterator *)(v3 + 448) = std::vector<unsigned int>::end(__for_range_4);
      while ( 1 )
      {
        v47 = (char *)(v3 + 448);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 416),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 448)) )
        {
          v54 = 1;
          goto LABEL_124;
        }
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        v48 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 416));
        v49 = (int *)v48;
        if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v48);
        }
        v50 = *v49;
        v51 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
        if ( v51 != 0 && v51 <= 3 )
        {
          LOBYTE(v47) = v51 != 0;
          __asan_report_store4(v3 + 80, v47);
        }
        *(_DWORD *)(v3 + 80) = v50;
        if ( !data::ActivitySumoExcelConfigMgrBase::findActivitySumoSwitchSkillExcelConfig(
                this,
                *(unsigned int *)(v3 + 80)) )
          break;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 416));
      }
      *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 928, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 928),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivitySumoExcelConfig.cpp",
        "checkStageConfig",
        95);
      v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 928),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v53 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(v52, (const char (*)[68])byte_1AAAEB80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
      *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v54 = 0;
LABEL_124:
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
      if ( v54 != 1 )
      {
        v14 = 0;
        goto LABEL_128;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig *>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> > *const)(v3 + 160));
    }
    *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 672, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 672),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivitySumoExcelConfig.cpp",
      "checkStageConfig",
      64);
    v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 672),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v22 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v21, (const char (*)[64])byte_1AAAEA00);
    if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8(config_ptr);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &(*config_ptr)->dungeon_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
    *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v14 = 0;
LABEL_128:
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v14 != 1 )
    {
      v10 = 0;
      goto LABEL_132;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivitySumoStageExcelConfig *>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivitySumoStageExcelConfig*> > > *const)(v3 + 96));
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
    "./src/txt_data_manual/ActivitySumoExcelConfig.cpp",
    "checkStageConfig",
    46);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 480),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v8, (const char (*)[48])byte_1AAAE8E0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, schedule_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
  v2 = -1;
  v10 = 0;
LABEL_132:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v70 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8078) = 0;
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
  return result;
};

// Line 105: range 0000000012E2D802-0000000012E2DB93
int32_t __cdecl ActivitySumoExcelConfigMgr::rewriteConfig(
        ActivitySumoExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  const data::ActivitySumoOverallConfig *over_config_ptr; // [rsp+18h] [rbp-C8h]
  char v9[192]; // [rsp+20h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySumoExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivitySumoExcelConfigMgr::rewriteStageConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivitySumoExcelConfig.cpp",
      "rewriteConfig",
      108);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v5, (const char (*)[26])"rewriteStageConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    over_config_ptr = ActivitySumoExcelConfigMgr::getSumoOverallConfig(this);
    if ( over_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&over_config_ptr->global_watcher_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)over_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&over_config_ptr->global_watcher_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&over_config_ptr->global_watcher_id);
      }
      if ( over_config_ptr->global_watcher_id )
        std::set<unsigned int>::insert(&this->watcher_id_set, &over_config_ptr->global_watcher_id);
      result = 0;
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
        "./src/txt_data_manual/ActivitySumoExcelConfig.cpp",
        "rewriteConfig",
        114);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v7, (const char (*)[34])byte_1AAAEC00);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      result = -1;
    }
  }
  if ( v9 == (char *)v2 )
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

// Line 125: range 0000000012E2DB94-0000000012E2DE27
int32_t __cdecl ActivitySumoExcelConfigMgr::rewriteStageConfig(
        ActivitySumoExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned int *M_current; // r15
  std::vector<unsigned int>::iterator v7; // rax
  int32_t result; // eax
  data::ActivitySumoStageExcelConfigMap *__for_range; // [rsp+28h] [rbp-B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-B0h]
  const std::map<unsigned int,data::ActivitySumoStageExcelConfig*>::key_type *id; // [rsp+38h] [rbp-A8h]
  std::tuple_element<1,std::pair<unsigned int const,data::ActivitySumoStageExcelConfig> >::type *config; // [rsp+40h] [rbp-A0h]
  std::map<unsigned int,std::map<unsigned int,data::ActivitySumoStageExcelConfig*>>::mapped_type *stage_map; // [rsp+48h] [rbp-98h]
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig>,false,false> *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:126 64 8 13 __for_end:126";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig>,false>::__node_type *)ActivitySumoExcelConfigMgr::rewriteStageConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->activity_sumo_stage_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ActivitySumoStageExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ActivitySumoStageExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig>,false,false>::operator*(v2 + 4);
    id = std::get<0ul,unsigned int const,data::ActivitySumoStageExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::ActivitySumoStageExcelConfig>(__in);
    stage_map = std::map<unsigned int,std::map<unsigned int,data::ActivitySumoStageExcelConfig *>>::operator[](
                  &this->schedule_sumo_stage_map,
                  &config->scheduld_id);
    v5 = (unsigned __int64)std::map<unsigned int,data::ActivitySumoStageExcelConfig *>::operator[](stage_map, id);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store8(v5, id);
    *(_QWORD *)v5 = config;
    M_current = std::vector<unsigned int>::end(&config->watcher_list)._M_current;
    v7._M_current = std::vector<unsigned int>::begin(&config->watcher_list)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      &this->watcher_id_set,
      v7,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 137: range 0000000012E2DE28-0000000012E2E434
std::vector<unsigned int> *__fastcall ActivitySumoExcelConfigMgr::findScheduleStageIdVec(
        std::vector<unsigned int> *retstr,
        std::vector<unsigned int> *this,
        uint32_t schedule_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::map<unsigned int,std::map<unsigned int,data::ActivitySumoStageExcelConfig*>> *p_schedule_sumo_stage_map; // rdx
  const std::map<unsigned int,std::map<unsigned int,data::ActivitySumoStageExcelConfig*>> *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> >::type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const ActivitySumoExcelConfigMgr *thisa; // [rsp+10h] [rbp-190h]
  std::map<unsigned int,data::ActivitySumoStageExcelConfig*> *__for_range; // [rsp+20h] [rbp-180h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> >::reference v16; // [rsp+28h] [rbp-178h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> >::type *id; // [rsp+30h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> >::type *config_ptr; // [rsp+38h] [rbp-168h]
  char v19[352]; // [rsp+40h] [rbp-160h] BYREF

  thisa = (const ActivitySumoExcelConfigMgr *)this;
  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 15 schedule_id:136 64 8 18 stage_map_iter:140 96 8 9 <unknown> 128 8 15 __for_begin:145 1"
                        "60 8 13 __for_end:145 192 24 10 id_vec:139 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySumoExcelConfigMgr::findScheduleStageIdVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 48) = schedule_id;
  if ( !(_BYTE)`guard variable for'ActivitySumoExcelConfigMgr::findScheduleStageIdVec(unsigned int)::empty_vec
    && __cxa_guard_acquire(&`guard variable for'ActivitySumoExcelConfigMgr::findScheduleStageIdVec(unsigned int)::empty_vec) )
  {
    std::vector<unsigned int>::vector(&ActivitySumoExcelConfigMgr::findScheduleStageIdVec(unsigned int)const::empty_vec);
    __cxa_guard_release(&`guard variable for'ActivitySumoExcelConfigMgr::findScheduleStageIdVec(unsigned int)::empty_vec);
    this = &ActivitySumoExcelConfigMgr::findScheduleStageIdVec(unsigned int)const::empty_vec;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
      &ActivitySumoExcelConfigMgr::findScheduleStageIdVec(unsigned int)const::empty_vec,
      &_dso_handle);
  }
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 192));
  p_schedule_sumo_stage_map = &thisa->schedule_sumo_stage_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::map<unsigned int,std::map<unsigned int,data::ActivitySumoStageExcelConfig*>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,data::ActivitySumoStageExcelConfig *>>::find(p_schedule_sumo_stage_map, (const std::map<unsigned int,std::map<unsigned int,data::ActivitySumoStageExcelConfig*>>::key_type *)(v3 + 48));
  v7 = &thisa->schedule_sumo_stage_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<unsigned int,std::map<unsigned int,data::ActivitySumoStageExcelConfig*>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,data::ActivitySumoStageExcelConfig *>>::end(v7);
  v8 = (char *)(v3 + 64);
  v9 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivitySumoStageExcelConfig*> > >::_Self *)(v3 + 96),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivitySumoStageExcelConfig*> > >::_Self *)(v3 + 64));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    std::vector<unsigned int>::vector(
      retstr,
      &ActivitySumoExcelConfigMgr::findScheduleStageIdVec(unsigned int)const::empty_vec);
  }
  else
  {
    __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivitySumoStageExcelConfig *>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivitySumoStageExcelConfig*> > > *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v8);
    *(std::map<unsigned int,data::ActivitySumoStageExcelConfig*>::const_iterator *)(v3 + 128) = std::map<unsigned int,data::ActivitySumoStageExcelConfig *>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    *(std::map<unsigned int,data::ActivitySumoStageExcelConfig*>::const_iterator *)(v3 + 160) = std::map<unsigned int,data::ActivitySumoStageExcelConfig *>::end(__for_range);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> >::_Self *)(v3 + 128),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> >::_Self *)(v3 + 160)) )
    {
      v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig *>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> > *const)(v3 + 128));
      id = std::get<0ul,unsigned int const,data::ActivitySumoStageExcelConfig *>(v16);
      v10 = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> >::type *)std::get<1ul,unsigned int const,data::ActivitySumoStageExcelConfig *>(v16);
      config_ptr = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10);
      if ( *config_ptr )
      {
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v3 + 192), id);
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
          "./src/txt_data_manual/ActivitySumoExcelConfig.cpp",
          "findScheduleStageIdVec",
          149);
        v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[27])"config_ptr is nullptr, id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig *>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySumoStageExcelConfig*> > *const)(v3 + 128));
    }
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    std::vector<unsigned int>::vector(retstr, (std::vector<unsigned int> *)(v3 + 192));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 158: range 0000000012E2E436-0000000012E2E5E2
const data::ActivitySumoOverallConfig *__cdecl ActivitySumoExcelConfigMgr::getSumoOverallConfig(
        const ActivitySumoExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySumoOverallConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::ActivitySumoOverallConfig *result; // rax
  data::ActivitySumoOverallConfigMap *p_activity_sumo_overall_config_map; // rdx
  data::ActivitySumoOverallConfigMap *v7; // rdx
  bool v8; // al
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySumoOverallConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySumoOverallConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySumoOverallConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySumoOverallConfig>,false>::__node_type *)"2 32 8 14 first_iter:163 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySumoOverallConfig>,false>::__node_type *)ActivitySumoExcelConfigMgr::getSumoOverallConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( std::unordered_map<unsigned int,data::ActivitySumoOverallConfig>::empty(&this->activity_sumo_overall_config_map) )
  {
    result = 0LL;
  }
  else
  {
    p_activity_sumo_overall_config_map = &this->activity_sumo_overall_config_map;
    if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v2[4], v1);
    v2[4]._M_cur = std::unordered_map<unsigned int,data::ActivitySumoOverallConfig>::begin(p_activity_sumo_overall_config_map)._M_cur;
    v7 = &this->activity_sumo_overall_config_map;
    if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v2[8], v1);
    v2[8]._M_cur = std::unordered_map<unsigned int,data::ActivitySumoOverallConfig>::end(v7)._M_cur;
    v8 = std::__detail::operator==<std::pair<unsigned int const,data::ActivitySumoOverallConfig>,false>(v2 + 4, v2 + 8);
    *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
      result = 0LL;
    else
      result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySumoOverallConfig>,false,false>::operator->(v2 + 4)->second;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySumoOverallConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};
