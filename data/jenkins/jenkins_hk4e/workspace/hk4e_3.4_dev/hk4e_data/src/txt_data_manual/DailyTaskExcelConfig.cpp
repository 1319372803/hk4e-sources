// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/DailyTaskExcelConfig.cpp

// Line 19: range 0000000013A6E370-0000000013A6E8AB
int32_t __cdecl DailyTaskExcelConfigMgr::rewriteConfig(
        DailyTaskExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  const data::CityTaskOpenExcelConfig **v8; // r8
  std::unordered_map<unsigned int,const data::CityTaskOpenExcelConfig*> *p_city_2_task_open_config_map; // rcx
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,const data::CityTaskOpenExcelConfig*>,false,false>,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  data::CityTaskOpenExcelConfigVec *__for_range; // [rsp+20h] [rbp-130h]
  const data::CityTaskOpenExcelConfig *city_open_config; // [rsp+28h] [rbp-128h]
  char v16[288]; // [rsp+30h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 14 __for_begin:28 64 8 12 __for_end:28 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DailyTaskExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  ret = 0;
  if ( DailyTaskExcelConfigMgr::rewriteDailyTaskExcelConfig(this, txt_config_mgr)
    || DailyTaskExcelConfigMgr::rewriteCityTaskOpenExcelConfig(this, txt_config_mgr) )
  {
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
      "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
      "rewriteConfig",
      24);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v6,
      (const char (*)[34])"rewriteDailyTaskExcelConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = -1;
  }
  else
  {
    __for_range = &this->city_task_open_excel_config_vec;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 32, txt_config_mgr);
    *(std::vector<data::CityTaskOpenExcelConfig>::iterator *)(v2 + 32) = std::vector<data::CityTaskOpenExcelConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, txt_config_mgr);
    *(std::vector<data::CityTaskOpenExcelConfig>::iterator *)(v2 + 64) = std::vector<data::CityTaskOpenExcelConfig>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::CityTaskOpenExcelConfig *,std::vector<data::CityTaskOpenExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig*,std::vector<data::CityTaskOpenExcelConfig> > *)(v2 + 32),
              (const __gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig*,std::vector<data::CityTaskOpenExcelConfig> > *)(v2 + 64)) )
    {
      city_open_config = __gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig *,std::vector<data::CityTaskOpenExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig*,std::vector<data::CityTaskOpenExcelConfig> > *const)(v2 + 32));
      std::unordered_set<unsigned int>::insert(&this->city_open_quest_set, &city_open_config->quest_id);
      p_city_2_task_open_config_map = &this->city_2_task_open_config_map;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 96, &city_open_config->quest_id);
      *(_QWORD *)(v2 + 96) = city_open_config;
      v10 = std::unordered_map<unsigned int,data::CityTaskOpenExcelConfig const*>::emplace<unsigned int const&,data::CityTaskOpenExcelConfig const*>(
              p_city_2_task_open_config_map,
              &city_open_config->city_id,
              (const data::CityTaskOpenExcelConfig **)(v2 + 96),
              (const unsigned int *)p_city_2_task_open_config_map,
              v8);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( !v10.second )
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
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "rewriteConfig",
          33);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v11, (const char (*)[44])byte_1AC636E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &city_open_config->city_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig *,std::vector<data::CityTaskOpenExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig*,std::vector<data::CityTaskOpenExcelConfig> > *const)(v2 + 32));
    }
    result = ret;
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 43: range 0000000013A6E944-0000000013A70ADA
int32_t __cdecl DailyTaskExcelConfigMgr::rewriteDailyTaskExcelConfig(
        DailyTaskExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_city_id; // rax
  __int64 v7; // rsi
  uint32_t v8; // ecx
  char v9; // al
  uint32_t pool_id; // ecx
  char v11; // al
  unsigned int *M_current; // rcx
  bool v13; // al
  std::vector<data::DailyTaskExcelConfig> *v14; // rdx
  std::unordered_set<unsigned int> *p_type; // rdi
  __int64 v16; // rsi
  data::DailyTaskType type; // ecx
  char v18; // al
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // eax
  std::set<unsigned int> *v26; // rax
  const unsigned int *v27; // rsi
  std::set<unsigned int> *v28; // rdx
  char *v29; // rsi
  unsigned int *v30; // rax
  int *v31; // rdx
  int v32; // ecx
  char v33; // al
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  int v39; // edx
  char *v40; // rsi
  unsigned int *v41; // rax
  int *v42; // rdx
  int v43; // ecx
  char v44; // al
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  common::milog::MiLogStream *v50; // rax
  char *v51; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v52; // rax
  data::DailyTaskExcelConfig *v53; // r8
  int *v54; // rdx
  int v55; // ecx
  char v56; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false>,bool> v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  int v60; // edx
  int v61; // edx
  data::DailyTaskLevelExcelConfig *v62; // r14
  std::vector<data::DailyTaskLevelExcelConfig>::iterator v63; // rax
  DailyTaskExcelConfigMgr::rewriteDailyTaskExcelConfig::<lambda(const data::DailyTaskLevelExcelConfig&, const data::DailyTaskLevelExcelConfig&)> v64; // dl
  char *v65; // rsi
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rdx
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rdx
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rdx
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // r14
  std::set<unsigned int>::size_type v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  unsigned int *__last; // [rsp+8h] [rbp-608h]
  int32_t ret; // [rsp+24h] [rbp-5ECh]
  data::DailyTaskExcelConfigMap *__for_range; // [rsp+28h] [rbp-5E8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-5E0h]
  const unsigned int *task_id; // [rsp+38h] [rbp-5D8h]
  std::tuple_element<1,std::pair<unsigned int const,data::DailyTaskExcelConfig> >::type *task_config; // [rsp+40h] [rbp-5D0h]
  std::unordered_map<unsigned int,std::vector<unsigned int>>::mapped_type *pool_vec; // [rsp+48h] [rbp-5C8h]
  std::vector<unsigned int> *__for_range_2; // [rsp+50h] [rbp-5C0h]
  const data::MainQuestExcelConfig *main_quest_config_ptr; // [rsp+58h] [rbp-5B8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-5B0h]
  data::QuestExcelConfig *quest_config_ptr; // [rsp+68h] [rbp-5A8h]
  std::unordered_map<unsigned int,std::vector<std::tuple<unsigned int,unsigned int>>>::mapped_type *npc_vec; // [rsp+70h] [rbp-5A0h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+78h] [rbp-598h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range_3; // [rsp+80h] [rbp-590h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range_4; // [rsp+88h] [rbp-588h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v96; // [rsp+90h] [rbp-580h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *city_id_0; // [rsp+98h] [rbp-578h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *quest_tasks_set; // [rsp+A0h] [rbp-570h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v99; // [rsp+A8h] [rbp-568h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *city_id; // [rsp+B0h] [rbp-560h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *quest_pools_set; // [rsp+B8h] [rbp-558h]
  char v102[1360]; // [rsp+C0h] [rbp-550h] BYREF

  v3 = (unsigned __int64)v102;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1312LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "32 48 1 12 cmp_func:126 64 4 10 city_id:49 80 4 10 pool_id:50 96 4 9 <unknown> 112 4 11 quest_id"
                        ":88 128 4 9 npc_id:97 144 4 12 group_id:115 160 8 14 __for_begin:47 192 8 12 __for_end:47 224 8 "
                        "9 <unknown> 256 8 9 <unknown> 288 8 14 __for_begin:88 320 8 12 __for_end:88 352 8 14 __for_begin"
                        ":97 384 8 12 __for_end:97 416 8 9 <unknown> 448 8 15 __for_begin:115 480 8 13 __for_end:115 512 "
                        "8 15 __for_begin:132 544 8 13 __for_end:132 576 8 15 __for_begin:141 608 8 13 __for_end:141 640 "
                        "8 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32"
                        " 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 56 32 city_id_to_quest_pool_set_map:45 "
                        "1216 56 38 city_id_to_cycle_quest_task_ids_map:46";
  *(_QWORD *)(v3 + 16) = DailyTaskExcelConfigMgr::rewriteDailyTaskExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
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
  v5[536862739] = -218959360;
  v5[536862740] = -218959360;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -218959118;
  v5[536862752] = -218959118;
  v5[536862754] = -218959118;
  v5[536862756] = -234881024;
  v5[536862757] = -218959118;
  v5[536862759] = -218103808;
  v5[536862760] = -202116109;
  ret = 0;
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 1120));
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 1216));
  __for_range = &this->daily_task_excel_config_map;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false> *)(v3 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false> *)(v3 + 192)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false> *const)(v3 + 160));
    task_id = std::get<0ul,unsigned int const,data::DailyTaskExcelConfig>(__in);
    task_config = std::get<1ul,unsigned int const,data::DailyTaskExcelConfig>(__in);
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
    p_city_id = &task_config->city_id;
    v7 = (((_BYTE)task_config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_city_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)task_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_city_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_city_id);
    }
    v8 = task_config->city_id;
    v9 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v7) = v9 != 0;
      __asan_report_store4(v3 + 64, v7);
    }
    *(_DWORD *)(v3 + 64) = v8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&task_config->pool_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&task_config->pool_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&task_config->pool_id);
    }
    pool_id = task_config->pool_id;
    v11 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
    if ( v11 != 0 && v11 <= 3 )
    {
      LOBYTE(v7) = v11 != 0;
      __asan_report_store4(v3 + 80, v7);
    }
    *(_DWORD *)(v3 + 80) = pool_id;
    pool_vec = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                 &this->city_2_pools_map,
                 (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 64));
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    __last = std::vector<unsigned int>::end(pool_vec)._M_current;
    M_current = std::vector<unsigned int>::begin(pool_vec)._M_current;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v3 + 64);
    *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 256) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                              (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                              (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last,
                                                                                              (const unsigned int *)(v3 + 80));
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, __last);
    *(std::vector<unsigned int>::iterator *)(v3 + 224) = std::vector<unsigned int>::end(pool_vec);
    v13 = __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 224),
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 256));
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v13 )
      std::vector<unsigned int>::push_back(pool_vec, (const std::vector<unsigned int>::value_type *)(v3 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&task_config->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)task_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->type >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&task_config->type);
    }
    if ( task_config->type == DAILY_TASK_QUEST )
    {
      if ( *(_BYTE *)(((unsigned __int64)&task_config->task_cycle_refresh_times >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->task_cycle_refresh_times >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&task_config->task_cycle_refresh_times);
      }
      if ( !task_config->task_cycle_refresh_times )
        task_config->task_cycle_refresh_times = 1;
    }
    v14 = std::unordered_map<unsigned int,std::vector<data::DailyTaskExcelConfig>>::operator[](
            &this->pool_2_tasks_map,
            (const std::unordered_map<unsigned int,std::vector<data::DailyTaskExcelConfig>>::key_type *)(v3 + 80));
    std::vector<data::DailyTaskExcelConfig>::push_back(v14, task_config);
    if ( *(_BYTE *)(((unsigned __int64)&task_config->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)task_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->type >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&task_config->type);
    }
    if ( task_config->type == DAILY_TASK_QUEST )
    {
      if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_progress >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->finish_progress >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&task_config->finish_progress);
      }
      if ( !task_config->finish_progress )
        task_config->finish_progress = 1;
    }
    common::tools::MiscUtils::removeEmptyElement<data::DailyTaskAction,data::DailyTaskActionType data::DailyTaskAction::*>(
      &task_config->finish_action_vec,
      (data::DailyTaskActionType *)0x18);
    p_type = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
               &this->pool_id_to_task_types_map_,
               (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v3 + 80));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
    v16 = (((_BYTE)task_config + 52) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&task_config->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)task_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->type >> 3)
                                                                 + 0x7FFF8000) )
    {
      p_type = (std::unordered_set<unsigned int> *)&task_config->type;
      __asan_report_load4(&task_config->type);
    }
    type = task_config->type;
    v18 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
    if ( v18 != 0 && v18 <= 3 )
    {
      p_type = (std::unordered_set<unsigned int> *)(v3 + 96);
      LOBYTE(v16) = v18 != 0;
      __asan_report_store4(v3 + 96, v16);
    }
    *(_DWORD *)(v3 + 96) = type;
    std::unordered_set<unsigned int>::insert(p_type, (std::unordered_set<unsigned int>::value_type *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&task_config->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)task_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->type >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&task_config->type);
    }
    if ( task_config->type )
    {
      if ( *(_BYTE *)(((unsigned __int64)&task_config->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->type >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&task_config->type);
      }
      if ( task_config->type != DAILY_TASK_SCENE )
        goto LABEL_115;
      if ( std::vector<unsigned int>::empty(&task_config->new_group_vec) )
      {
        *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 800, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 800),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "rewriteDailyTaskExcelConfig",
          107);
        v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 800),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v46 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v45, (const char (*)[10])"task_id: ");
        v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, task_id);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v47, (const char (*)[20])byte_1AC63B60);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
        *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v25 = 0;
      }
      else
      {
        if ( DailyTaskExcelConfigMgr::isGroupIdValid(this, txt_config_mgr, &task_config->new_group_vec, 1) )
        {
          __for_range_2 = &task_config->new_group_vec;
          *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 448, txt_config_mgr);
          *(std::vector<unsigned int>::iterator *)(v3 + 448) = std::vector<unsigned int>::begin(__for_range_2);
          *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 480, txt_config_mgr);
          *(std::vector<unsigned int>::iterator *)(v3 + 480) = std::vector<unsigned int>::end(__for_range_2);
          while ( 1 )
          {
            v51 = (char *)(v3 + 480);
            if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 448),
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 480)) )
            {
              v60 = 1;
              goto LABEL_113;
            }
            *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 4;
            v52 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 448));
            v54 = (int *)v52;
            if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v52 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v52);
            }
            v55 = *v54;
            v56 = *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000);
            if ( v56 != 0 && v56 <= 3 )
            {
              LOBYTE(v51) = v56 != 0;
              __asan_report_store4(v3 + 144, v51);
            }
            *(_DWORD *)(v3 + 144) = v55;
            v57 = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::emplace<unsigned int &,data::DailyTaskExcelConfig&>(
                    &this->group_id_2_daily_task_config_map,
                    (unsigned int *)(v3 + 144),
                    task_config,
                    (unsigned int *)&this->group_id_2_daily_task_config_map,
                    v53);
            if ( !v57.second )
              break;
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 448));
          }
          *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 928, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 928),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
            "rewriteDailyTaskExcelConfig",
            119);
          v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 928),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v59 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v58, (const char (*)[21])byte_1AC63C00);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, (const unsigned int *)(v3 + 144));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
          *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v60 = 0;
LABEL_113:
          *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
          if ( v60 != 1 )
          {
            v25 = 0;
            goto LABEL_116;
          }
          goto LABEL_115;
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
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "rewriteDailyTaskExcelConfig",
          112);
        v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 864),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v49 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v48, (const char (*)[10])"task_id: ");
        v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, task_id);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v50, (const char (*)[33])byte_1AC63BA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
        *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v25 = 0;
      }
    }
    else
    {
      p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&task_config->quest_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->quest_id >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&task_config->quest_id);
      }
      main_quest_config_ptr = QuestExcelConfigMgr::findParentQuestConfigByChildId(
                                p_quest_config_mgr,
                                task_config->quest_id);
      if ( main_quest_config_ptr )
      {
        v26 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                (std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 1120),
                (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 64));
        v27 = (const unsigned int *)(v3 + 80);
        std::set<unsigned int>::insert(v26, (const std::set<unsigned int>::value_type *)(v3 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&task_config->weight >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&task_config->weight >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&task_config->weight);
        }
        if ( task_config->weight )
        {
          v28 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                  (std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 1216),
                  (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 64));
          v27 = task_id;
          std::set<unsigned int>::insert(v28, task_id);
        }
        __for_range_0 = &main_quest_config_ptr->child_quest_list;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 288, v27);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 320, v27);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          v29 = (char *)(v3 + 320);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 320)) )
          {
            v39 = 1;
            goto LABEL_84;
          }
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
          v30 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
          v31 = (int *)v30;
          if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v30);
          }
          v32 = *v31;
          v33 = *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000);
          if ( v33 != 0 && v33 <= 3 )
          {
            LOBYTE(v29) = v33 != 0;
            __asan_report_store4(v3 + 112, v29);
          }
          *(_DWORD *)(v3 + 112) = v32;
          quest_config_ptr = data::QuestExcelConfigMgrBase::findQuestExcelConfig(
                               &txt_config_mgr->quest_config_mgr,
                               *(unsigned int *)(v3 + 112));
          if ( !quest_config_ptr )
            break;
          npc_vec = std::unordered_map<unsigned int,std::vector<std::tuple<unsigned int,unsigned int>>>::operator[](
                      &this->task_2_npc_map,
                      task_id);
          __for_range_1 = &quest_config_ptr->exclusive_npc_list;
          *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 352, task_id);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 352) = std::vector<unsigned int>::begin(__for_range_1);
          *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 384, task_id);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 384) = std::vector<unsigned int>::end(__for_range_1);
          while ( 1 )
          {
            v40 = (char *)(v3 + 384);
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 352),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 384)) )
              break;
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
            v41 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 352));
            v42 = (int *)v41;
            if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v41);
            }
            v43 = *v42;
            v44 = *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000);
            LOBYTE(v40) = v44 != 0;
            if ( v44 != 0 && v44 <= 3 )
              __asan_report_store4(v3 + 128, v40);
            *(_DWORD *)(v3 + 128) = v43;
            *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 416, v40);
            std::make_tuple<unsigned int &,unsigned int &>(
              (unsigned int *)(v3 + 416),
              (unsigned int *)(v3 + 128),
              (unsigned int *)(v3 + 112),
              (unsigned int *)(v3 + 128));
            std::vector<std::tuple<unsigned int,unsigned int>>::emplace_back<std::tuple<unsigned int,unsigned int>>(
              npc_vec,
              (std::tuple<unsigned int,unsigned int> *)(v3 + 416),
              (std::tuple<unsigned int,unsigned int> *)(v3 + 416));
            *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 352));
          }
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
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
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "rewriteDailyTaskExcelConfig",
          93);
        v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 736),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v35 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v34, (const char (*)[10])"task_id: ");
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, task_id);
        v37 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v36, (const char (*)[19])byte_1AC63B20);
        v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &task_config->quest_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v38, (const char (*)[7])byte_1AC59EA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v39 = 0;
LABEL_84:
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
        if ( v39 != 1 )
        {
          v25 = 0;
          goto LABEL_116;
        }
LABEL_115:
        v25 = 1;
        goto LABEL_116;
      }
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "rewriteDailyTaskExcelConfig",
        80);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 672),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])"task_id: ");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, task_id);
      v23 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v22, (const char (*)[26])byte_1AC63AA0);
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &task_config->quest_id);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v24, (const char (*)[16])byte_1AC63AE0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v25 = 0;
    }
LABEL_116:
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v25 != 1 )
    {
      v61 = 0;
      goto LABEL_120;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false> *const)(v3 + 160));
  }
  v61 = 1;
LABEL_120:
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
  if ( v61 == 1 )
  {
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
    v62 = std::vector<data::DailyTaskLevelExcelConfig>::end(&this->daily_task_level_excel_config_vec)._M_current;
    v63._M_current = std::vector<data::DailyTaskLevelExcelConfig>::begin(&this->daily_task_level_excel_config_vec)._M_current;
    std::sort<__gnu_cxx::__normal_iterator<data::DailyTaskLevelExcelConfig *,std::vector<data::DailyTaskLevelExcelConfig>>,DailyTaskExcelConfigMgr::rewriteDailyTaskExcelConfig(TxtConfigMgr &)::{lambda(data::DailyTaskLevelExcelConfig const&,data::DailyTaskLevelExcelConfig const&)#1}>(
      v63,
      (__gnu_cxx::__normal_iterator<data::DailyTaskLevelExcelConfig*,std::vector<data::DailyTaskLevelExcelConfig> >)v62,
      v64);
    __for_range_3 = (std::unordered_map<unsigned int,std::set<unsigned int>> *)(v3 + 1120);
    *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 512, v62);
    *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 512) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range_3);
    *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 544, v62);
    *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 544) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range_3);
    while ( 1 )
    {
      v65 = (char *)(v3 + 544);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 512),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 544)) )
        break;
      v99 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 512));
      city_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v99);
      quest_pools_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v99);
      if ( std::set<unsigned int>::size(quest_pools_set) > 1 )
      {
        *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 992, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 992),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "rewriteDailyTaskExcelConfig",
          136);
        v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 992),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v67 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v66, (const char (*)[6])"city:");
        v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, city_id);
        v69 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v68, (const char (*)[36])byte_1AC63C80);
        v70 = common::milog::MiLogStream::operator<<<unsigned int>(v69, quest_pools_set);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v70, (const char (*)[22])byte_1AC63CE0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
        *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 512));
    }
    *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = -8;
    __for_range_4 = (std::unordered_map<unsigned int,std::set<unsigned int>> *)(v3 + 1216);
    *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 576, v65);
    *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 576) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range_4);
    *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 608, v65);
    *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 608) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range_4);
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 576),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 608)) )
    {
      v96 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 576));
      city_id_0 = std::get<0ul,unsigned int const,std::set<unsigned int>>(v96);
      quest_tasks_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v96);
      if ( *(_BYTE *)(((unsigned __int64)city_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)city_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(city_id_0);
      }
      if ( *city_id_0 != 1 && *city_id_0 != 2 && std::set<unsigned int>::size(quest_tasks_set) > 0x32 )
      {
        *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1056) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1056, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1056),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "rewriteDailyTaskExcelConfig",
          150);
        v71 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1056),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v72 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v71, (const char (*)[6])"city:");
        v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, city_id_0);
        v74 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v73, (const char (*)[26])byte_1AC63D20);
        *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
        v75 = std::set<unsigned int>::size(quest_tasks_set);
        if ( *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) )
          v75 = __asan_report_store8(v3 + 640, byte_1AC63D20);
        *(_QWORD *)(v3 + 640) = v75;
        v76 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v74,
                (const unsigned __int64 *)(v3 + 640));
        v77 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v76, (const char (*)[16])byte_1AC63D60);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v77,
          &DailyTaskExcelConfigMgr::max_quest_task_count_per_city);
        *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
        *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 576));
    }
    *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = -8;
    v2 = ret;
  }
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 1216));
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 1120));
  if ( v102 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF809C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1312LL, v102);
  }
  return v2;
};

// Line 126: range 0000000013A6E8AC-0000000013A6E943
bool __cdecl DailyTaskExcelConfigMgr::rewriteDailyTaskExcelConfig(TxtConfigMgr &)::{lambda(data::DailyTaskLevelExcelConfig const&,data::DailyTaskLevelExcelConfig const&)#1}::operator()(
        const DailyTaskExcelConfigMgr::rewriteDailyTaskExcelConfig::<lambda(const data::DailyTaskLevelExcelConfig&, const data::DailyTaskLevelExcelConfig&)> *const __closure,
        const data::DailyTaskLevelExcelConfig *lhs,
        const data::DailyTaskLevelExcelConfig *rhs)
{
  uint32_t min_player_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->min_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->min_player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->min_player_level);
  }
  min_player_level = lhs->min_player_level;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->max_player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rhs->max_player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rhs->max_player_level);
  }
  return min_player_level < rhs->max_player_level;
};

// Line 159: range 0000000013A70ADC-0000000013A70CB8
int32_t __cdecl DailyTaskExcelConfigMgr::rewriteCityTaskOpenExcelConfig(
        DailyTaskExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  __gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig*,std::vector<data::CityTaskOpenExcelConfig> > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v6; // rax
  int32_t result; // eax
  data::CityTaskOpenExcelConfigVec *__for_range; // [rsp+10h] [rbp-A0h]
  data::CityTaskOpenExcelConfig *open_config; // [rsp+18h] [rbp-98h]
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (__gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig*,std::vector<data::CityTaskOpenExcelConfig> > *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig*,std::vector<data::CityTaskOpenExcelConfig> > *)v3;
  }
  v2->_M_current = (data::CityTaskOpenExcelConfig *)1102416563;
  v2[1]._M_current = (data::CityTaskOpenExcelConfig *)"2 32 8 15 __for_begin:160 64 8 13 __for_end:160";
  v2[2]._M_current = (data::CityTaskOpenExcelConfig *)DailyTaskExcelConfigMgr::rewriteCityTaskOpenExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->city_task_open_excel_config_vec;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_current = std::vector<data::CityTaskOpenExcelConfig>::begin(__for_range)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_current = std::vector<data::CityTaskOpenExcelConfig>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<data::CityTaskOpenExcelConfig *,std::vector<data::CityTaskOpenExcelConfig>>(
            v2 + 4,
            v2 + 8) )
  {
    open_config = __gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig *,std::vector<data::CityTaskOpenExcelConfig>>::operator*(v2 + 4);
    M_current = std::vector<unsigned int>::end(&open_config->backup_vec)._M_current;
    v6._M_current = std::vector<unsigned int>::begin(&open_config->backup_vec)._M_current;
    std::random_shuffle<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      v6,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
    __gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig *,std::vector<data::CityTaskOpenExcelConfig>>::operator++(v2 + 4);
  }
  result = 0;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_current = (data::CityTaskOpenExcelConfig *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 168: range 0000000013A70CBA-0000000013A70EFB
int32_t __cdecl DailyTaskExcelConfigMgr::checkConfig(
        DailyTaskExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int v6; // r14d
  int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  char v10[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DailyTaskExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  v5 = DailyTaskExcelConfigMgr::checkDailyTaskExcelConfig(this, txt_config_mgr);
  v6 = DailyTaskExcelConfigMgr::checkRewardExcelConfig(this, txt_config_mgr) | v5;
  v7 = DailyTaskExcelConfigMgr::checkLevelExcelConfig(this, txt_config_mgr) | v6;
  if ( v7 | DailyTaskExcelConfigMgr::checkCityTaskOpenExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
      "checkConfig",
      174);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])"checkConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v10 == (char *)v2 )
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

// Line 181: range 0000000013A70F52-0000000013A73F65
int32_t __cdecl DailyTaskExcelConfigMgr::checkDailyTaskExcelConfig(
        const DailyTaskExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  char *v9; // rsi
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rcx
  uint32_t *p_city_id; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  QuestExcelConfigMgr *v23; // rcx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  const char *v29; // rsi
  __int64 v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  char *v41; // rsi
  unsigned int *v42; // rax
  int *v43; // rdx
  int v44; // ecx
  char v45; // al
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rdx
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rdx
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rdx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rdx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rdx
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rdx
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rdx
  common::milog::MiLogStream *v71; // rax
  const char *p_task_reward_id; // rsi
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rdx
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  const data::DailyTaskAction *v78; // rdx
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rdx
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rdx
  common::milog::MiLogStream *v84; // rax
  char *v85; // rsi
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rdx
  common::milog::MiLogStream *v88; // rax
  const data::DailyTaskExcelConfig *M_current; // r15
  std::vector<data::DailyTaskExcelConfig>::const_iterator v90; // rax
  const char *v91; // rsi
  DailyTaskExcelConfigMgr::checkDailyTaskExcelConfig::<lambda(uint32_t, const data::DailyTaskExcelConfig&)> v92; // cl
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rdx
  common::milog::MiLogStream *v95; // rax
  unsigned __int64 v96; // rax
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rdx
  common::milog::MiLogStream *v99; // rax
  unsigned __int64 v100; // rax
  common::milog::MiLogStream *v101; // rax
  int v102; // eax
  int32_t v103; // ebx
  int32_t ret; // [rsp+10h] [rbp-890h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *__for_range; // [rsp+18h] [rbp-888h]
  data::DailyTaskExcelConfigMap *__for_range_0; // [rsp+20h] [rbp-880h]
  std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range_3; // [rsp+28h] [rbp-878h]
  std::unordered_map<unsigned int,std::vector<data::DailyTaskExcelConfig>> *__for_range_4; // [rsp+30h] [rbp-870h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::DailyTaskExcelConfig> >,false,false>::reference v111; // [rsp+38h] [rbp-868h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::DailyTaskExcelConfig> > >::type *pool_id_0; // [rsp+40h] [rbp-860h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::DailyTaskExcelConfig> > >::type *task_vec; // [rsp+48h] [rbp-858h]
  const data::DailyTaskExcelConfig *task_config_0; // [rsp+58h] [rbp-848h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::reference v115; // [rsp+60h] [rbp-840h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *city_id; // [rsp+68h] [rbp-838h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *group_vec; // [rsp+70h] [rbp-830h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false>::reference v118; // [rsp+78h] [rbp-828h]
  std::tuple_element<0,std::pair<unsigned int const,data::DailyTaskExcelConfig> >::type *task_id; // [rsp+80h] [rbp-820h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DailyTaskExcelConfig> >::type *task_config; // [rsp+88h] [rbp-818h]
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+90h] [rbp-810h]
  const data::MainQuestExcelConfig *main_quest_config_ptr; // [rsp+98h] [rbp-808h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+A0h] [rbp-800h]
  const std::vector<data::DailyTaskAction> *__for_range_2; // [rsp+A8h] [rbp-7F8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false>::reference v125; // [rsp+B8h] [rbp-7E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *pool_id; // [rsp+C0h] [rbp-7E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *task_types_set; // [rsp+C8h] [rbp-7D8h]
  char v128[2000]; // [rsp+D0h] [rbp-7D0h] BYREF

  v2 = (unsigned __int64)v128;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1952LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "38 48 1 11 op_func:320 64 4 12 quest_id:240 80 8 15 __for_begin:184 112 8 13 __for_end:184 144 8"
                        " 15 __for_begin:193 176 8 13 __for_end:193 208 8 15 __for_begin:240 240 8 13 __for_end:240 272 8"
                        " 15 __for_begin:295 304 8 13 __for_end:295 336 8 15 __for_begin:312 368 8 13 __for_end:312 400 8"
                        " 15 __for_begin:325 432 8 13 __for_end:325 464 8 15 __for_begin:335 496 8 13 __for_end:335 528 3"
                        "2 9 <unknown> 592 32 9 <unknown> 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unknown> 848 32"
                        " 9 <unknown> 912 32 9 <unknown> 976 32 9 <unknown> 1040 32 9 <unknown> 1104 32 9 <unknown> 1168 "
                        "32 9 <unknown> 1232 32 9 <unknown> 1296 32 9 <unknown> 1360 32 9 <unknown> 1424 32 9 <unknown> 1"
                        "488 32 9 <unknown> 1552 32 9 <unknown> 1616 32 9 <unknown> 1680 32 9 <unknown> 1744 32 9 <unknow"
                        "n> 1808 32 9 <unknown> 1872 48 15 city_id_set:334";
  *(_QWORD *)(v2 + 16) = DailyTaskExcelConfigMgr::checkDailyTaskExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
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
  v4[536862733] = -234881024;
  v4[536862734] = 62194;
  v4[536862734] = -234881024;
  v4[536862735] = 62194;
  v4[536862735] = -234881024;
  v4[536862736] = 62194;
  v4[536862737] = -219021312;
  v4[536862738] = 62194;
  v4[536862739] = -219021312;
  v4[536862740] = 62194;
  v4[536862741] = -219021312;
  v4[536862742] = 62194;
  v4[536862743] = -219021312;
  v4[536862744] = 62194;
  v4[536862745] = -219021312;
  v4[536862746] = 62194;
  v4[536862747] = -219021312;
  v4[536862748] = 62194;
  v4[536862749] = -219021312;
  v4[536862750] = 62194;
  v4[536862751] = -219021312;
  v4[536862752] = 62194;
  v4[536862753] = -219021312;
  v4[536862754] = 62194;
  v4[536862755] = -219021312;
  v4[536862756] = 62194;
  v4[536862757] = -219021312;
  v4[536862758] = 62194;
  v4[536862759] = -219021312;
  v4[536862760] = 62194;
  v4[536862761] = -219021312;
  v4[536862762] = 62194;
  v4[536862763] = -219021312;
  v4[536862764] = 62194;
  v4[536862765] = -219021312;
  v4[536862766] = 62194;
  v4[536862767] = -219021312;
  v4[536862768] = 62194;
  v4[536862769] = -219021312;
  v4[536862770] = 62194;
  v4[536862771] = -219021312;
  v4[536862772] = 62194;
  v4[536862773] = -219021312;
  v4[536862774] = 62194;
  v4[536862775] = -219021312;
  v4[536862776] = 62194;
  v4[536862777] = -219021312;
  v4[536862778] = 62194;
  v4[536862780] = -202116109;
  ret = 0;
  __for_range = &this->pool_id_to_task_types_map_;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 112) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 112);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 112)) )
      break;
    v125 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v2 + 80));
    pool_id = std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(v125);
    task_types_set = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(v125);
    if ( std::unordered_set<unsigned int>::size(task_types_set) > 1 )
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
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkDailyTaskExcelConfig",
        188);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 528),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])"pool_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, pool_id);
      common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(v8, (const char (*)[86])byte_1AC641E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 528));
      *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v2 + 80));
  }
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->daily_task_excel_config_map;
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 144, v5);
  *(std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::const_iterator *)(v2 + 144) = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 176, v5);
  *(std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::const_iterator *)(v2 + 176) = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::end(__for_range_0);
  while ( 1 )
  {
    v9 = (char *)(v2 + 176);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false> *)(v2 + 176)) )
      break;
    v118 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false> *const)(v2 + 144));
    task_id = std::get<0ul,unsigned int const,data::DailyTaskExcelConfig>(v118);
    task_config = (std::tuple_element<1,const std::pair<unsigned int const,data::DailyTaskExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DailyTaskExcelConfig>(v118);
    p_world_area_config_mgr = &txt_config_mgr->world_area_config_mgr;
    p_city_id = &task_config->city_id;
    if ( *(_BYTE *)(((unsigned __int64)p_city_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_city_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_city_id);
    }
    if ( !WorldAreaExcelConfigMgr::findCityConfig(p_world_area_config_mgr, task_config->city_id) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 592) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 623) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 623) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 592, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 592),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkDailyTaskExcelConfig",
        199);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 592),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])"task_id: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, task_id);
      v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v14, (const char (*)[18])byte_1AC64260);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &task_config->city_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])byte_1AC59EA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 592));
      *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)&task_config->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)task_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->type >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&task_config->type);
    }
    if ( task_config->type == DAILY_TASK_QUEST )
    {
      p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&task_config->quest_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->quest_id >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&task_config->quest_id);
      }
      quest_config_ptr = data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, task_config->quest_id);
      if ( !quest_config_ptr )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 656) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 687) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 687) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 656, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 656),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkDailyTaskExcelConfig",
          217);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 656),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])"task_id: ");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, task_id);
        v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v20, (const char (*)[19])byte_1AC63B20);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &task_config->quest_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])byte_1AC59EA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 656));
        *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = -117901064;
        goto LABEL_128;
      }
      v23 = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&quest_config_ptr->main_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)quest_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&quest_config_ptr->main_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&quest_config_ptr->main_id);
      }
      main_quest_config_ptr = data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(v23, quest_config_ptr->main_id);
      if ( !main_quest_config_ptr )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 720) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 79) & 7) >= *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 720, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 720),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkDailyTaskExcelConfig",
          225);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 720),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])"task_id: ");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, task_id);
        v27 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v26, (const char (*)[26])byte_1AC63AA0);
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &task_config->quest_id);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v28, (const char (*)[16])byte_1AC63AE0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 720));
        *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = -117901064;
        goto LABEL_128;
      }
      v29 = (const char *)(((_BYTE)main_quest_config_ptr + 68) & 7);
      v30 = (*(_BYTE *)(((unsigned __int64)&main_quest_config_ptr->repeatable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&main_quest_config_ptr->repeatable >> 3) + 0x7FFF8000));
      if ( (_BYTE)v30 )
        __asan_report_load1(&main_quest_config_ptr->repeatable, v29, v30);
      if ( !main_quest_config_ptr->repeatable )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 784) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 784) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 815) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 815) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 784, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 784),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkDailyTaskExcelConfig",
          231);
        v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 784),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v32 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])"task_id: ");
        v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, task_id);
        v34 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v33, (const char (*)[26])byte_1AC63AA0);
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &task_config->quest_id);
        v29 = byte_1AC642A0;
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v35, (const char (*)[31])byte_1AC642A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 784));
        *(_DWORD *)(((v2 + 784) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( *(_BYTE *)(((unsigned __int64)&main_quest_config_ptr->chapter_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&main_quest_config_ptr->chapter_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&main_quest_config_ptr->chapter_id);
      }
      if ( main_quest_config_ptr->chapter_id )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 848) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 848) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 879) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 879) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 848, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 848),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkDailyTaskExcelConfig",
          236);
        v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 848),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v37 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v36, (const char (*)[10])"task_id: ");
        v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, task_id);
        v39 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v38, (const char (*)[26])byte_1AC63AA0);
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &task_config->quest_id);
        v29 = byte_1AC642E0;
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v40, (const char (*)[31])byte_1AC642E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 848));
        *(_DWORD *)(((v2 + 848) >> 3) + 0x7FFF8000) = -117901064;
      }
      __for_range_1 = &main_quest_config_ptr->child_quest_list;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 208, v29);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 208) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 240, v29);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 240) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v41 = (char *)(v2 + 240);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 208),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 240)) )
          break;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
        v42 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 208));
        v43 = (int *)v42;
        if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v42);
        }
        v44 = *v43;
        v45 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
        if ( v45 != 0 && v45 <= 3 )
        {
          LOBYTE(v41) = v45 != 0;
          __asan_report_store4(v2 + 64, v41);
        }
        *(_DWORD *)(v2 + 64) = v44;
        if ( *(_BYTE *)(((unsigned __int64)task_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)task_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(task_id);
        }
        if ( !DailyTaskExcelConfigMgr::isQuestContainsDailyTask(this, txt_config_mgr, *(_DWORD *)(v2 + 64), *task_id) )
        {
          ret = -1;
          *(_DWORD *)(((v2 + 912) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 912) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 943) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 943) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 912, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 912),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
            "checkDailyTaskExcelConfig",
            245);
          v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 912),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v47 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v46, (const char (*)[11])"quest_id: ");
          v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v47,
                  (const unsigned int *)(v2 + 64));
          v49 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v48, (const char (*)[46])byte_1AC64360);
          v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, task_id);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v50, (const char (*)[7])byte_1AC643C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 912));
          *(_DWORD *)(((v2 + 912) >> 3) + 0x7FFF8000) = -117901064;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 208));
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_progress >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->finish_progress >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&task_config->finish_progress);
      }
      if ( task_config->finish_progress != 1 )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 976) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 976) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1007) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 79) & 7) >= *(_BYTE *)(((v2 + 1007) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 976, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 976),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkDailyTaskExcelConfig",
          251);
        v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 976),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v52 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v51, (const char (*)[10])"task_id: ");
        v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, task_id);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v53, (const char (*)[40])byte_1AC64400);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 976));
        *(_DWORD *)(((v2 + 976) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&task_config->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)task_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->type >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&task_config->type);
    }
    if ( task_config->type == DAILY_TASK_SCENE )
    {
      if ( !DailyTaskExcelConfigMgr::isGroupIdValid(this, txt_config_mgr, &task_config->old_group_vec, 0) )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 1040) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1040) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1071) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 1071) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1040, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1040),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkDailyTaskExcelConfig",
          259);
        v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1040),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v55 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v54, (const char (*)[10])"task_id: ");
        v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, task_id);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v56, (const char (*)[33])byte_1AC63BA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1040));
        *(_DWORD *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( std::vector<unsigned int>::empty(&task_config->new_group_vec) )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 1104) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1104) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1135) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 1135) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1104, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1104),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkDailyTaskExcelConfig",
          264);
        v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1104),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v58 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v57, (const char (*)[10])"task_id: ");
        v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, task_id);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v59, (const char (*)[20])byte_1AC63B60);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1104));
        *(_DWORD *)(((v2 + 1104) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( !DailyTaskExcelConfigMgr::isGroupIdValid(this, txt_config_mgr, &task_config->new_group_vec, 1) )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 1168) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1168) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1199) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 1199) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1168, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1168),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkDailyTaskExcelConfig",
          269);
        v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1168),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v61 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v60, (const char (*)[10])"task_id: ");
        v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, task_id);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v62, (const char (*)[33])byte_1AC63BA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1168));
        *(_DWORD *)(((v2 + 1168) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( DailyTaskExcelConfigMgr::checkDailyTaskFinishParam(this, txt_config_mgr, task_config) )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 1232) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1232) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1263) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 79) & 7) >= *(_BYTE *)(((v2 + 1263) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1232, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1232),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkDailyTaskExcelConfig",
          274);
        v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1232),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v64 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v63, (const char (*)[10])"task_id: ");
        v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, task_id);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v65, (const char (*)[34])byte_1AC64460);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1232));
        *(_DWORD *)(((v2 + 1232) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( DailyTaskExcelConfigMgr::checkDailyTaskFinishProgress(this, txt_config_mgr, task_config) )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 1296) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1296) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1327) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 1327) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1296, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1296),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkDailyTaskExcelConfig",
          279);
        v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1296),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v67 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v66, (const char (*)[10])"task_id: ");
        v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, task_id);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v68, (const char (*)[28])byte_1AC644C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1296));
        *(_DWORD *)(((v2 + 1296) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    if ( DailyTaskExcelConfigMgr::checkTaskCondition(this, txt_config_mgr, task_config) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 1360) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1360) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1391) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 1391) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1360, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1360),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkDailyTaskExcelConfig",
        286);
      v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1360),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v70 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v69, (const char (*)[10])"task_id: ");
      v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, task_id);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v71, (const char (*)[31])byte_1AC64500);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1360));
      *(_DWORD *)(((v2 + 1360) >> 3) + 0x7FFF8000) = -117901064;
    }
    p_task_reward_id = (const char *)&task_config->task_reward_id;
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig> const,unsigned int>(
            &this->daily_task_reward_excel_config_map,
            &task_config->task_reward_id) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 1424) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1424) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1455) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 1455) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1424, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1424),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkDailyTaskExcelConfig",
        292);
      v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1424),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v74 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v73, (const char (*)[10])"task_id: ");
      v75 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, task_id);
      v76 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v75, (const char (*)[20])byte_1AC64540);
      v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, &task_config->task_reward_id);
      p_task_reward_id = byte_1AC64580;
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v77, (const char (*)[32])byte_1AC64580);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1424));
      *(_DWORD *)(((v2 + 1424) >> 3) + 0x7FFF8000) = -117901064;
    }
    __for_range_2 = &task_config->finish_action_vec;
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 272, p_task_reward_id);
    *(std::vector<data::DailyTaskAction>::const_iterator *)(v2 + 272) = std::vector<data::DailyTaskAction>::begin(__for_range_2);
    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 304, p_task_reward_id);
    *(std::vector<data::DailyTaskAction>::const_iterator *)(v2 + 304) = std::vector<data::DailyTaskAction>::end(__for_range_2);
    while ( __gnu_cxx::operator!=<data::DailyTaskAction const*,std::vector<data::DailyTaskAction>>(
              (const __gnu_cxx::__normal_iterator<const data::DailyTaskAction*,std::vector<data::DailyTaskAction> > *)(v2 + 272),
              (const __gnu_cxx::__normal_iterator<const data::DailyTaskAction*,std::vector<data::DailyTaskAction> > *)(v2 + 304)) )
    {
      v78 = __gnu_cxx::__normal_iterator<data::DailyTaskAction const*,std::vector<data::DailyTaskAction>>::operator*((const __gnu_cxx::__normal_iterator<const data::DailyTaskAction*,std::vector<data::DailyTaskAction> > *const)(v2 + 272));
      if ( DailyTaskExcelConfigMgr::checkTaskAction(this, txt_config_mgr, v78) )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 1488) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1488) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1519) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 79) & 7) >= *(_BYTE *)(((v2 + 1519) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1488, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1488),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkDailyTaskExcelConfig",
          300);
        v79 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1488),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v80 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v79, (const char (*)[10])"task_id: ");
        v81 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v80, task_id);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v81, (const char (*)[25])byte_1AC645C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1488));
        *(_DWORD *)(((v2 + 1488) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<data::DailyTaskAction const*,std::vector<data::DailyTaskAction>>::operator++((__gnu_cxx::__normal_iterator<const data::DailyTaskAction*,std::vector<data::DailyTaskAction> > *const)(v2 + 272));
    }
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&task_config->related_tag >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&task_config->related_tag >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&task_config->related_tag);
    }
    if ( task_config->related_tag )
    {
      if ( *(_BYTE *)(((unsigned __int64)&task_config->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->type >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&task_config->type);
      }
      if ( task_config->type != DAILY_TASK_SCENE )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 1552) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1552) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1583) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 1583) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1552, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1552),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkDailyTaskExcelConfig",
          308);
        v82 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1552),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v83 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v82, (const char (*)[10])"task_id: ");
        v84 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v83, task_id);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v84, (const char (*)[31])byte_1AC64600);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1552));
        *(_DWORD *)(((v2 + 1552) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
LABEL_128:
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false> *const)(v2 + 144));
  }
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
  __for_range_3 = &this->city_2_pools_map;
  *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 336, v9);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 336) = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(__for_range_3);
  *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 368, v9);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 368) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range_3);
  while ( 1 )
  {
    v85 = (char *)(v2 + 368);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 336),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 368)) )
      break;
    v115 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 336));
    city_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v115);
    group_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v115);
    if ( std::vector<unsigned int>::empty(group_vec) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 1616) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1616) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1647) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 1647) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1616, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1616),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkDailyTaskExcelConfig",
        317);
      v86 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1616),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v87 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v86, (const char (*)[10])"city_id: ");
      v88 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v87, city_id);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v88, (const char (*)[25])byte_1AC64680);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1616));
      *(_DWORD *)(((v2 + 1616) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 336));
  }
  *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  __for_range_4 = &this->pool_2_tasks_map;
  *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 400, v85);
  *(std::unordered_map<unsigned int,std::vector<data::DailyTaskExcelConfig>>::const_iterator *)(v2 + 400) = std::unordered_map<unsigned int,std::vector<data::DailyTaskExcelConfig>>::begin(__for_range_4);
  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 432, v85);
  *(std::unordered_map<unsigned int,std::vector<data::DailyTaskExcelConfig>>::const_iterator *)(v2 + 432) = std::unordered_map<unsigned int,std::vector<data::DailyTaskExcelConfig>>::end(__for_range_4);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::DailyTaskExcelConfig>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::DailyTaskExcelConfig> >,false> *)(v2 + 400),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::DailyTaskExcelConfig> >,false> *)(v2 + 432)) )
  {
    v111 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::DailyTaskExcelConfig>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::DailyTaskExcelConfig> >,false,false> *const)(v2 + 400));
    pool_id_0 = std::get<0ul,unsigned int const,std::vector<data::DailyTaskExcelConfig>>(v111);
    task_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::DailyTaskExcelConfig> > >::type *)std::get<1ul,unsigned int const,std::vector<data::DailyTaskExcelConfig>>(v111);
    M_current = std::vector<data::DailyTaskExcelConfig>::end(task_vec)._M_current;
    v90._M_current = std::vector<data::DailyTaskExcelConfig>::begin(task_vec)._M_current;
    v91 = (const char *)M_current;
    if ( !std::accumulate<__gnu_cxx::__normal_iterator<data::DailyTaskExcelConfig const*,std::vector<data::DailyTaskExcelConfig>>,int,DailyTaskExcelConfigMgr::checkDailyTaskExcelConfig(TxtConfigMgr const&)::{lambda(unsigned int,data::DailyTaskExcelConfig const&)#1}>(
            v90,
            (__gnu_cxx::__normal_iterator<const data::DailyTaskExcelConfig*,std::vector<data::DailyTaskExcelConfig> >)M_current,
            0,
            v92) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 1680) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1680) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1711) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 1711) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1680, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1680),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkDailyTaskExcelConfig",
        331);
      v93 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1680),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v94 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v93, (const char (*)[10])"pool_id: ");
      v95 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v94, pool_id_0);
      v91 = byte_1AC64700;
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v95, (const char (*)[17])byte_1AC64700);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1680));
      *(_DWORD *)(((v2 + 1680) >> 3) + 0x7FFF8000) = -117901064;
    }
    v96 = ((v2 + 1872) >> 3) + 2147450880;
    *(_DWORD *)v96 = 0;
    *(_WORD *)(v96 + 4) = 0;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 1872));
    *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 464, v91);
    *(std::vector<data::DailyTaskExcelConfig>::const_iterator *)(v2 + 464) = std::vector<data::DailyTaskExcelConfig>::begin(task_vec);
    *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 496, v91);
    *(std::vector<data::DailyTaskExcelConfig>::const_iterator *)(v2 + 496) = std::vector<data::DailyTaskExcelConfig>::end(task_vec);
    while ( __gnu_cxx::operator!=<data::DailyTaskExcelConfig const*,std::vector<data::DailyTaskExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::DailyTaskExcelConfig*,std::vector<data::DailyTaskExcelConfig> > *)(v2 + 464),
              (const __gnu_cxx::__normal_iterator<const data::DailyTaskExcelConfig*,std::vector<data::DailyTaskExcelConfig> > *)(v2 + 496)) )
    {
      task_config_0 = __gnu_cxx::__normal_iterator<data::DailyTaskExcelConfig const*,std::vector<data::DailyTaskExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::DailyTaskExcelConfig*,std::vector<data::DailyTaskExcelConfig> > *const)(v2 + 464));
      std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 1872), &task_config_0->city_id);
      __gnu_cxx::__normal_iterator<data::DailyTaskExcelConfig const*,std::vector<data::DailyTaskExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::DailyTaskExcelConfig*,std::vector<data::DailyTaskExcelConfig> > *const)(v2 + 464));
    }
    *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
    if ( std::set<unsigned int>::size((const std::set<unsigned int> *const)(v2 + 1872)) != 1 )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 1744) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1744) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1775) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 79) & 7) >= *(_BYTE *)(((v2 + 1775) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1744, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1744),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkDailyTaskExcelConfig",
        342);
      v97 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1744),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v98 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v97, (const char (*)[9])"pool_id:");
      v99 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v98, pool_id_0);
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v99, (const char (*)[40])byte_1AC64740);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1744));
      *(_DWORD *)(((v2 + 1744) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 1872));
    v100 = ((v2 + 1872) >> 3) + 2147450880;
    *(_DWORD *)v100 = -117901064;
    *(_WORD *)(v100 + 4) = -1800;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::DailyTaskExcelConfig>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::DailyTaskExcelConfig> >,false,false> *const)(v2 + 400));
  }
  *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
  if ( ret )
  {
    *(_DWORD *)(((v2 + 1808) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 1808) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1839) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 1839) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1808, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 1808),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
      "checkDailyTaskExcelConfig",
      348);
    v101 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 1808),
             (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v101,
      (const char (*)[32])"checkDailyTaskExcelConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1808));
    v102 = -1;
  }
  else
  {
    v102 = 0;
  }
  v103 = v102;
  if ( v128 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80EC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 244) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1952LL, v128);
  }
  return v103;
};

// Line 320: range 0000000013A70EFC-0000000013A70F50
unsigned int __cdecl DailyTaskExcelConfigMgr::checkDailyTaskExcelConfig(TxtConfigMgr const&)const::{lambda(unsigned int,data::DailyTaskExcelConfig const&)#1}::operator()(
        const DailyTaskExcelConfigMgr::checkDailyTaskExcelConfig::<lambda(uint32_t, const data::DailyTaskExcelConfig&)> *const __closure,
        uint32_t sum,
        const data::DailyTaskExcelConfig *task_config)
{
  uint32_t *p_weight; // rdx

  p_weight = &task_config->weight;
  if ( *(_BYTE *)(((unsigned __int64)p_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_weight);
  }
  return task_config->weight + sum;
};

// Line 355: range 0000000013A73F66-0000000013A74390
__int64 __fastcall DailyTaskExcelConfigMgr::isQuestContainsDailyTask(
        const DailyTaskExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t quest_id,
        uint32_t task_id)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::vector<int>::const_reference v12; // rax
  _DWORD *v13; // rdx
  char v14; // al
  int v15; // eax
  __int64 result; // rax
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+28h] [rbp-108h]
  const std::vector<data::QuestCond> *__for_range; // [rsp+30h] [rbp-100h]
  const data::QuestCond *cond; // [rsp+38h] [rbp-F8h]
  char v23[240]; // [rsp+40h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 12 quest_id:354 64 8 15 __for_begin:362 96 8 13 __for_end:362 128 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = DailyTaskExcelConfigMgr::isQuestContainsDailyTask;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862725] = -202116109;
  *(_DWORD *)(v5 + 48) = quest_id;
  v8 = *(unsigned int *)(v5 + 48);
  quest_config_ptr = data::QuestExcelConfigMgrBase::findQuestExcelConfig(&txt_config_mgr->quest_config_mgr, v8);
  if ( quest_config_ptr )
  {
    __for_range = &quest_config_ptr->accept_cond;
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 64, v8);
    *(std::vector<data::QuestCond>::const_iterator *)(v5 + 64) = std::vector<data::QuestCond>::begin(__for_range);
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, v8);
    *(std::vector<data::QuestCond>::const_iterator *)(v5 + 96) = std::vector<data::QuestCond>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::QuestCond const*,std::vector<data::QuestCond>>(
              (const __gnu_cxx::__normal_iterator<const data::QuestCond*,std::vector<data::QuestCond> > *)(v5 + 64),
              (const __gnu_cxx::__normal_iterator<const data::QuestCond*,std::vector<data::QuestCond> > *)(v5 + 96)) )
    {
      cond = __gnu_cxx::__normal_iterator<data::QuestCond const*,std::vector<data::QuestCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::QuestCond*,std::vector<data::QuestCond> > *const)(v5 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->type);
      }
      if ( cond->type != QUEST_COND_DAILY_TASK_START || !std::vector<int>::size(&cond->param) )
        goto LABEL_22;
      v12 = std::vector<int>::operator[](&cond->param, 0LL);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      if ( task_id == *v13 )
        v14 = 1;
      else
LABEL_22:
        v14 = 0;
      if ( v14 )
      {
        v4 = 1;
        v15 = 0;
        goto LABEL_27;
      }
      __gnu_cxx::__normal_iterator<data::QuestCond const*,std::vector<data::QuestCond>>::operator++((__gnu_cxx::__normal_iterator<const data::QuestCond*,std::vector<data::QuestCond> > *const)(v5 + 64));
    }
    v15 = 1;
LABEL_27:
    if ( v15 == 1 )
      v4 = 0;
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
      4u,
      "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
      "isQuestContainsDailyTask",
      359);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v5 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            v9,
            (const char (*)[32])"findQuestExcelConfig quest_id: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 128));
    v4 = 0;
  }
  result = v4;
  if ( v23 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 373: range 0000000013A74392-0000000013A74D49
bool __cdecl DailyTaskExcelConfigMgr::isGroupIdValid(
        const DailyTaskExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<unsigned int> *group_vec,
        bool is_dynamic_load)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  __int64 v12; // rsi
  int SceneIdByGroupId; // edx
  char v14; // al
  __int64 v15; // rsi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  bool result; // al
  bool has_error; // [rsp+27h] [rbp-1E9h]
  LuaConfigMgr *lua_config_mgr; // [rsp+28h] [rbp-1E8h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+38h] [rbp-1D8h]
  char v32[464]; // [rsp+40h] [rbp-1D0h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 4 12 group_id:378 64 4 9 <unknown> 80 8 15 __for_begin:378 112 8 13 __for_end:378 144 32 9 "
                        "<unknown> 208 32 9 <unknown> 272 32 9 <unknown> 336 48 16 scene_id_set:377";
  *(_QWORD *)(v4 + 16) = DailyTaskExcelConfigMgr::isGroupIdValid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862725] = -219021312;
  v6[536862726] = 62194;
  v6[536862727] = -219021312;
  v6[536862728] = 62194;
  v6[536862729] = -219021312;
  v6[536862730] = 62194;
  v6[536862732] = -202116109;
  has_error = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 336));
  if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 80, txt_config_mgr);
  *(std::vector<unsigned int>::const_iterator *)(v4 + 80) = std::vector<unsigned int>::begin(group_vec);
  if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 112, txt_config_mgr);
  *(std::vector<unsigned int>::const_iterator *)(v4 + 112) = std::vector<unsigned int>::end(group_vec);
  while ( 1 )
  {
    v7 = (char *)(v4 + 112);
    if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 80),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 112)) )
      break;
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
    v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 80));
    v9 = (int *)v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v10 = *v9;
    v11 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
    if ( v11 != 0 && v11 <= 3 )
    {
      LOBYTE(v7) = v11 != 0;
      __asan_report_store4(v4 + 48, v7);
    }
    *(_DWORD *)(v4 + 48) = v10;
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 4;
    v12 = *(unsigned int *)(v4 + 48);
    SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, v12);
    v14 = *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000);
    if ( v14 != 0 && v14 <= 3 )
    {
      LOBYTE(v12) = v14 != 0;
      __asan_report_store4(v4 + 64, v12);
    }
    *(_DWORD *)(v4 + 64) = SceneIdByGroupId;
    std::set<unsigned int>::insert(
      (std::set<unsigned int> *const)(v4 + 336),
      (std::set<unsigned int>::value_type *)(v4 + 64));
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v4 + 48);
    v15 = *(unsigned int *)(v4 + 48);
    group_info_config_ptr = LuaConfigMgr::findGroupInfoConfig(lua_config_mgr, v15);
    if ( group_info_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&group_info_config_ptr->is_dynamic_load, v15, &group_info_config_ptr->is_dynamic_load);
      if ( is_dynamic_load != group_info_config_ptr->is_dynamic_load )
      {
        *(_DWORD *)(((v4 + 208) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 208) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 239) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 96 + 79) & 7) >= *(_BYTE *)(((v4 + 239) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 208, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 208),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "isGroupIdValid",
          390);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 208),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])"group_id: ");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v21, (const char (*)[33])byte_1AC64A40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 208));
        *(_DWORD *)(((v4 + 208) >> 3) + 0x7FFF8000) = -117901064;
        has_error = 1;
      }
    }
    else
    {
      *(_DWORD *)(((v4 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 144) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 175) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 112 + 31) & 7) >= *(_BYTE *)(((v4 + 175) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 144, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 144),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "isGroupIdValid",
        384);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 144),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])"group_id: ");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])byte_1AC59EA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 144));
      *(_DWORD *)(((v4 + 144) >> 3) + 0x7FFF8000) = -117901064;
      has_error = 1;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 80));
  }
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( std::set<unsigned int>::size((const std::set<unsigned int> *const)(v4 + 336)) > 1 )
  {
    *(_DWORD *)(((v4 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 303) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 47) & 7) >= *(_BYTE *)(((v4 + 303) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 272, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 272),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
      "isGroupIdValid",
      398);
    v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v4 + 272),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v23 = common::milog::MiLogStream::operator<<<unsigned int>(v22, group_vec);
    v24 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v23,
            (const char (*)[20])" on multiple scene:");
    v25 = common::milog::MiLogStream::operator<<<unsigned int>(v24, (const std::set<unsigned int> *)(v4 + 336));
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v25, (const char (*)[31])byte_1AC64AE0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 272));
    *(_DWORD *)(((v4 + 272) >> 3) + 0x7FFF8000) = -117901064;
    has_error = 1;
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 336));
  result = !has_error;
  if ( v32 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 405: range 0000000013A74D4A-0000000013A75A71
int32_t __cdecl DailyTaskExcelConfigMgr::checkDailyTaskFinishParam(
        const DailyTaskExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::DailyTaskExcelConfig *task_config)
{
  common::milog::MiLogStream *v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  LuaConfigMgr *lua_config_mgr; // [rsp+28h] [rbp-208h]
  char v34[512]; // [rsp+30h] [rbp-200h] BYREF

  v3 = (common::milog::MiLogStream *)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = (common::milog::MiLogStream *)v4;
  }
  v3->log_ = (common::milog::MiLog *)1102416563;
  v3->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"7 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  v3->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)DailyTaskExcelConfigMgr::checkDailyTaskFinishParam;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&task_config->finish_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&task_config->finish_type);
  }
  switch ( task_config->finish_type )
  {
    case DAILY_FINISH_MONSTER_ID_NUM:
      if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&task_config->finish_param1);
      }
      if ( !task_config->finish_param1
        || data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
             &txt_config_mgr->monster_config_mgr,
             task_config->finish_param1) )
      {
        goto LABEL_66;
      }
      if ( *(char *)(((unsigned __int64)&v3[1] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v3[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v3 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v3[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v3[1], 32LL);
      }
      common::milog::MiLogStream::create(
        v3 + 1,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkDailyTaskFinishParam",
        413);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v3 + 1,
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])"monster_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &task_config->finish_param1);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])byte_1AC59EA0);
      common::milog::MiLogStream::~MiLogStream(v3 + 1);
      result = -1;
      break;
    case DAILY_FINISH_GADGET_ID_NUM:
      if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&task_config->finish_param1);
      }
      if ( !task_config->finish_param1
        || data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
             &txt_config_mgr->gadget_config_mgr,
             task_config->finish_param1) )
      {
        goto LABEL_66;
      }
      if ( *(char *)(((unsigned __int64)&v3[3] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v3[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v3 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v3[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v3[3], 32LL);
      }
      common::milog::MiLogStream::create(
        v3 + 3,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkDailyTaskFinishParam",
        421);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              v3 + 3,
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])"gadget_id: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &task_config->finish_param1);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])byte_1AC59EA0);
      common::milog::MiLogStream::~MiLogStream(v3 + 3);
      result = -1;
      break;
    case DAILY_FINISH_MONSTER_CONFIG_NUM:
    case DAILY_FINISH_GADGET_CONFIG_NUM:
    case DAILY_FINISH_CHEST_CONFIG:
      if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&task_config->finish_param1);
      }
      if ( task_config->finish_param1 )
        goto LABEL_66;
      if ( *(char *)(((unsigned __int64)&v3[5] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v3[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v3 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v3[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v3[5], 32LL);
      }
      common::milog::MiLogStream::create(
        v3 + 5,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkDailyTaskFinishParam",
        430);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              v3 + 5,
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v15, (const char (*)[20])byte_1AC64BE0);
      common::milog::MiLogStream::~MiLogStream(v3 + 5);
      result = -1;
      break;
    case DAILY_FINISH_MONSTER_NUM:
      goto LABEL_66;
    case DAILY_FINISH_GATHER:
      if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&task_config->finish_param1);
      }
      if ( !task_config->finish_param1
        || data::GatherExcelConfigMgrBase::findGatherExcelConfig(
             &txt_config_mgr->gather_config_mgr,
             task_config->finish_param1) )
      {
        goto LABEL_66;
      }
      if ( *(char *)(((unsigned __int64)&v3[7] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v3[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v3 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v3[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v3[7], 32LL);
      }
      common::milog::MiLogStream::create(
        v3 + 7,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkDailyTaskFinishParam",
        441);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              v3 + 7,
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])"point_type: ");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &task_config->finish_param1);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])byte_1AC59EA0);
      common::milog::MiLogStream::~MiLogStream(v3 + 7);
      result = -1;
      break;
    case DAILY_FINISH_CHALLENGE:
      if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&task_config->finish_param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&task_config->finish_param2);
      }
      if ( task_config->finish_param2 && !LuaConfigMgr::findGroupInfoConfig(lua_config_mgr, task_config->finish_param2) )
      {
        if ( *(char *)(((unsigned __int64)&v3[9] >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&v3[9].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v3 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v3[9].ostr_ + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(&v3[9], 32LL);
        }
        common::milog::MiLogStream::create(
          v3 + 9,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkDailyTaskFinishParam",
          448);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v3 + 9,
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])"group id: ");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &task_config->finish_param2);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v23, (const char (*)[10])byte_1AC59CC0);
        common::milog::MiLogStream::~MiLogStream(v3 + 9);
        result = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)task_config - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&task_config->finish_param1);
        }
        if ( task_config->finish_param1
          && !data::DungeonExcelConfigMgrBase::findDungeonChallengeConfig(
                &txt_config_mgr->dungeon_config_mgr,
                task_config->finish_param1) )
        {
          if ( *(char *)(((unsigned __int64)&v3[11] >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&v3[11].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v3 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v3[11].ostr_ + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(&v3[11], 32LL);
          }
          common::milog::MiLogStream::create(
            v3 + 11,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
            "checkDailyTaskFinishParam",
            454);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v3 + 11,
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v25,
                  (const char (*)[15])"challenge id: ");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &task_config->finish_param1);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v27, (const char (*)[10])byte_1AC59CC0);
          common::milog::MiLogStream::~MiLogStream(v3 + 11);
          result = -1;
        }
        else
        {
LABEL_66:
          result = 0;
        }
      }
      break;
    default:
      if ( *(char *)(((unsigned __int64)&v3[13] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v3[13].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v3 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v3[13].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v3[13], 32LL);
      }
      common::milog::MiLogStream::create(
        v3 + 13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkDailyTaskFinishParam",
        459);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              v3 + 13,
              (const char (*)[16])"[CONFIG_ERROR] ");
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v28, (const char (*)[16])"daily_task_id: ");
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &task_config->id);
      v31 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v30, (const char (*)[31])byte_1AC64D20);
      common::milog::MiLogStream::operator<<<data::DailyTaskFinishType,(data::DailyTaskFinishType*)0>(
        v31,
        &task_config->finish_type);
      common::milog::MiLogStream::~MiLogStream(v3 + 13);
      result = -1;
      break;
  }
  if ( v34 == (char *)v3 )
  {
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    v3->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 466: range 0000000013A75A72-0000000013A776C8
int32_t __cdecl DailyTaskExcelConfigMgr::checkDailyTaskFinishProgress(
        const DailyTaskExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::DailyTaskExcelConfig *task_config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  char *v11; // rsi
  unsigned int *v12; // rax
  uint32_t *v13; // rdx
  __int64 GroupScriptConfig; // rax
  char *v15; // rsi
  __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> >::reference v16; // rax
  char *v17; // rsi
  __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> >::reference v18; // rax
  char *v19; // rsi
  __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> >::reference v20; // rax
  char *v21; // rsi
  __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> >::reference v22; // rax
  __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> >::reference v23; // rax
  int v24; // esi
  char *v25; // rsi
  __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> >::reference v26; // rax
  uint32_t *p_point_type; // rax
  uint32_t point_type; // ecx
  uint32_t finish_progress; // ecx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  uint32_t group_id; // [rsp+2Ch] [rbp-564h]
  LuaConfigMgr *lua_config_mgr; // [rsp+30h] [rbp-560h]
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-558h]
  std::vector<const GroupScriptConfig*> *__for_range_9; // [rsp+40h] [rbp-550h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_10; // [rsp+50h] [rbp-540h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::reference v42; // [rsp+58h] [rbp-538h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *gadget_config; // [rsp+68h] [rbp-528h]
  std::vector<const GroupScriptConfig*> *__for_range_8; // [rsp+70h] [rbp-520h]
  std::vector<const GroupScriptConfig*> *__for_range_6; // [rsp+80h] [rbp-510h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_7; // [rsp+90h] [rbp-500h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::reference v47; // [rsp+98h] [rbp-4F8h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *config_2; // [rsp+A8h] [rbp-4E8h]
  std::vector<const GroupScriptConfig*> *__for_range_4; // [rsp+B0h] [rbp-4E0h]
  const std::unordered_map<unsigned int,MonsterScriptConfig> *__for_range_5; // [rsp+C0h] [rbp-4D0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::reference v51; // [rsp+C8h] [rbp-4C8h]
  std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *config_1; // [rsp+D8h] [rbp-4B8h]
  std::vector<const GroupScriptConfig*> *__for_range_2; // [rsp+E0h] [rbp-4B0h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_3; // [rsp+F0h] [rbp-4A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::reference v55; // [rsp+F8h] [rbp-498h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *config_0; // [rsp+108h] [rbp-488h]
  std::vector<const GroupScriptConfig*> *__for_range_0; // [rsp+110h] [rbp-480h]
  const std::unordered_map<unsigned int,MonsterScriptConfig> *__for_range_1; // [rsp+120h] [rbp-470h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::reference v59; // [rsp+128h] [rbp-468h]
  std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *config; // [rsp+138h] [rbp-458h]
  char v61[1104]; // [rsp+140h] [rbp-450h] BYREF

  v3 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1056LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "29 48 4 14 config_sum:503 64 8 15 __for_begin:481 96 8 13 __for_end:481 128 8 20 group_config_pt"
                        "r:483 160 8 15 __for_begin:507 192 8 13 __for_end:507 224 8 15 __for_begin:507 256 8 13 __for_en"
                        "d:507 288 8 15 __for_begin:510 320 8 13 __for_end:510 352 8 15 __for_begin:510 384 8 13 __for_en"
                        "d:510 416 8 15 __for_begin:513 448 8 13 __for_end:513 480 8 15 __for_begin:513 512 8 13 __for_en"
                        "d:513 544 8 15 __for_begin:517 576 8 13 __for_end:517 608 8 15 __for_begin:517 640 8 13 __for_en"
                        "d:517 672 8 15 __for_begin:520 704 8 13 __for_end:520 736 8 15 __for_begin:526 768 8 13 __for_en"
                        "d:526 800 8 15 __for_begin:528 832 8 13 __for_end:528 864 24 24 group_config_ptr_vec:480 928 32 "
                        "9 <unknown> 992 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DailyTaskExcelConfigMgr::checkDailyTaskFinishProgress;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
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
  v5[536862735] = -218959360;
  v5[536862736] = -218959360;
  v5[536862737] = -218959360;
  v5[536862738] = -218959360;
  v5[536862739] = -218959360;
  v5[536862740] = -218959360;
  v5[536862741] = -218959360;
  v5[536862742] = -218959360;
  v5[536862743] = -218959360;
  v5[536862744] = -218959360;
  v5[536862745] = -218959360;
  v5[536862746] = -218959360;
  v5[536862747] = -234881024;
  v5[536862748] = -218959118;
  v5[536862750] = -218959118;
  v5[536862752] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&task_config->finish_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&task_config->finish_type);
  }
  if ( task_config->finish_type == DAILY_FINISH_CHALLENGE )
  {
    v6 = 0;
  }
  else
  {
    v7 = (((_BYTE)task_config - 100) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_progress >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)task_config - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->finish_progress >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&task_config->finish_progress);
    }
    if ( task_config->finish_progress )
    {
      lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
      std::vector<GroupScriptConfig const*>::vector((std::vector<const GroupScriptConfig*> *const)(v3 + 864));
      __for_range = &task_config->new_group_vec;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 64, v7);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 64) = std::vector<unsigned int>::begin(__for_range);
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v7);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::end(__for_range);
      while ( 1 )
      {
        v11 = (char *)(v3 + 96);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96)) )
          break;
        v12 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        group_id = *v13;
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
        GroupScriptConfig = (__int64)LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, group_id);
        if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
          GroupScriptConfig = __asan_report_store8(v3 + 128, group_id);
        *(_QWORD *)(v3 + 128) = GroupScriptConfig;
        if ( *(_QWORD *)(v3 + 128) )
          std::vector<GroupScriptConfig const*>::push_back(
            (std::vector<const GroupScriptConfig*> *const)(v3 + 864),
            (const std::vector<const GroupScriptConfig*>::value_type *)(v3 + 128));
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 48, v11);
      *(_DWORD *)(v3 + 48) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&task_config->finish_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&task_config->finish_type);
      }
      switch ( task_config->finish_type )
      {
        case DAILY_FINISH_MONSTER_ID_NUM:
          __for_range_0 = (std::vector<const GroupScriptConfig*> *)(v3 + 864);
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 160, v11);
          *(std::vector<const GroupScriptConfig*>::iterator *)(v3 + 160) = std::vector<GroupScriptConfig const*>::begin(__for_range_0);
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 192, v11);
          *(std::vector<const GroupScriptConfig*>::iterator *)(v3 + 192) = std::vector<GroupScriptConfig const*>::end(__for_range_0);
          while ( 1 )
          {
            v15 = (char *)(v3 + 192);
            if ( !__gnu_cxx::operator!=<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>(
                    (const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *)(v3 + 160),
                    (const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *)(v3 + 192)) )
              break;
            v16 = __gnu_cxx::__normal_iterator<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>::operator*((const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *const)(v3 + 160));
            if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v16);
            __for_range_1 = &(*v16)->monster_config_map;
            *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 224, v15);
            *(std::unordered_map<unsigned int,MonsterScriptConfig>::const_iterator *)(v3 + 224) = std::unordered_map<unsigned int,MonsterScriptConfig>::begin(__for_range_1);
            *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 256, v15);
            *(std::unordered_map<unsigned int,MonsterScriptConfig>::const_iterator *)(v3 + 256) = std::unordered_map<unsigned int,MonsterScriptConfig>::end(__for_range_1);
            while ( std::__detail::operator!=<std::pair<unsigned int const,MonsterScriptConfig>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v3 + 224),
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v3 + 256)) )
            {
              v59 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v3 + 224));
              std::get<0ul,unsigned int const,MonsterScriptConfig>(v59);
              config = (std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *)std::get<1ul,unsigned int const,MonsterScriptConfig>(v59);
              if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)task_config - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(&task_config->finish_param1);
              }
              if ( !task_config->finish_param1 )
                goto LABEL_52;
              if ( *(_BYTE *)(((unsigned __int64)&config->monster_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->monster_id >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&config->monster_id);
              }
              if ( config->monster_id == task_config->finish_param1 )
              {
LABEL_52:
                if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_load4(v3 + 48);
                ++*(_DWORD *)(v3 + 48);
              }
              std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v3 + 224));
            }
            *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
            __gnu_cxx::__normal_iterator<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>::operator++((__gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *const)(v3 + 160));
          }
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
          break;
        case DAILY_FINISH_GADGET_ID_NUM:
          __for_range_2 = (std::vector<const GroupScriptConfig*> *)(v3 + 864);
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 288, v11);
          *(std::vector<const GroupScriptConfig*>::iterator *)(v3 + 288) = std::vector<GroupScriptConfig const*>::begin(__for_range_2);
          *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 320, v11);
          *(std::vector<const GroupScriptConfig*>::iterator *)(v3 + 320) = std::vector<GroupScriptConfig const*>::end(__for_range_2);
          while ( 1 )
          {
            v17 = (char *)(v3 + 320);
            if ( !__gnu_cxx::operator!=<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>(
                    (const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *)(v3 + 288),
                    (const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *)(v3 + 320)) )
              break;
            v18 = __gnu_cxx::__normal_iterator<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>::operator*((const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *const)(v3 + 288));
            if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v18);
            __for_range_3 = &(*v18)->gadget_config_map;
            *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 352, v17);
            *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v3 + 352) = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(__for_range_3);
            *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 384, v17);
            *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v3 + 384) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_3);
            while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v3 + 352),
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v3 + 384)) )
            {
              v55 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v3 + 352));
              std::get<0ul,unsigned int const,GadgetScriptConfig>(v55);
              config_0 = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v55);
              if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)task_config - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(&task_config->finish_param1);
              }
              if ( !task_config->finish_param1 )
                goto LABEL_78;
              if ( *(_BYTE *)(((unsigned __int64)&config_0->gadget_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_0->gadget_id >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_load4(&config_0->gadget_id);
              }
              if ( config_0->gadget_id == task_config->finish_param1 )
              {
LABEL_78:
                if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_load4(v3 + 48);
                ++*(_DWORD *)(v3 + 48);
              }
              std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v3 + 352));
            }
            *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
            __gnu_cxx::__normal_iterator<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>::operator++((__gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *const)(v3 + 288));
          }
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
          break;
        case DAILY_FINISH_MONSTER_CONFIG_NUM:
          __for_range_4 = (std::vector<const GroupScriptConfig*> *)(v3 + 864);
          *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 416, v11);
          *(std::vector<const GroupScriptConfig*>::iterator *)(v3 + 416) = std::vector<GroupScriptConfig const*>::begin(__for_range_4);
          *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 448, v11);
          *(std::vector<const GroupScriptConfig*>::iterator *)(v3 + 448) = std::vector<GroupScriptConfig const*>::end(__for_range_4);
          while ( 1 )
          {
            v19 = (char *)(v3 + 448);
            if ( !__gnu_cxx::operator!=<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>(
                    (const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *)(v3 + 416),
                    (const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *)(v3 + 448)) )
              break;
            v20 = __gnu_cxx::__normal_iterator<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>::operator*((const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *const)(v3 + 416));
            if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v20);
            __for_range_5 = &(*v20)->monster_config_map;
            *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 480, v19);
            *(std::unordered_map<unsigned int,MonsterScriptConfig>::const_iterator *)(v3 + 480) = std::unordered_map<unsigned int,MonsterScriptConfig>::begin(__for_range_5);
            *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 512, v19);
            *(std::unordered_map<unsigned int,MonsterScriptConfig>::const_iterator *)(v3 + 512) = std::unordered_map<unsigned int,MonsterScriptConfig>::end(__for_range_5);
            while ( std::__detail::operator!=<std::pair<unsigned int const,MonsterScriptConfig>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v3 + 480),
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v3 + 512)) )
            {
              v51 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v3 + 480));
              std::get<0ul,unsigned int const,MonsterScriptConfig>(v51);
              config_1 = (std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *)std::get<1ul,unsigned int const,MonsterScriptConfig>(v51);
              if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)task_config - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(&task_config->finish_param1);
              }
              if ( !task_config->finish_param1 )
                goto LABEL_104;
              if ( *(_BYTE *)(((unsigned __int64)config_1 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)config_1 >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(config_1);
              }
              if ( config_1->config_id == task_config->finish_param1 )
              {
LABEL_104:
                if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_load4(v3 + 48);
                ++*(_DWORD *)(v3 + 48);
              }
              std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v3 + 480));
            }
            *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
            __gnu_cxx::__normal_iterator<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>::operator++((__gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *const)(v3 + 416));
          }
          *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
          break;
        case DAILY_FINISH_GADGET_CONFIG_NUM:
        case DAILY_FINISH_CHEST_CONFIG:
          __for_range_6 = (std::vector<const GroupScriptConfig*> *)(v3 + 864);
          *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 544, v11);
          *(std::vector<const GroupScriptConfig*>::iterator *)(v3 + 544) = std::vector<GroupScriptConfig const*>::begin(__for_range_6);
          *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 576, v11);
          *(std::vector<const GroupScriptConfig*>::iterator *)(v3 + 576) = std::vector<GroupScriptConfig const*>::end(__for_range_6);
          while ( 1 )
          {
            v21 = (char *)(v3 + 576);
            if ( !__gnu_cxx::operator!=<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>(
                    (const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *)(v3 + 544),
                    (const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *)(v3 + 576)) )
              break;
            v22 = __gnu_cxx::__normal_iterator<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>::operator*((const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *const)(v3 + 544));
            if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v22);
            __for_range_7 = &(*v22)->gadget_config_map;
            *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 608, v21);
            *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v3 + 608) = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(__for_range_7);
            *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 640, v21);
            *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v3 + 640) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_7);
            while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v3 + 608),
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v3 + 640)) )
            {
              v47 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v3 + 608));
              std::get<0ul,unsigned int const,GadgetScriptConfig>(v47);
              config_2 = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v47);
              if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)task_config - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(&task_config->finish_param1);
              }
              if ( !task_config->finish_param1 )
                goto LABEL_130;
              if ( *(_BYTE *)(((unsigned __int64)config_2 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)config_2 >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(config_2);
              }
              if ( config_2->config_id == task_config->finish_param1 )
              {
LABEL_130:
                if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_load4(v3 + 48);
                ++*(_DWORD *)(v3 + 48);
              }
              std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v3 + 608));
            }
            *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = -8;
            __gnu_cxx::__normal_iterator<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>::operator++((__gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *const)(v3 + 544));
          }
          *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = -8;
          break;
        case DAILY_FINISH_MONSTER_NUM:
          __for_range_8 = (std::vector<const GroupScriptConfig*> *)(v3 + 864);
          *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 672, v11);
          *(std::vector<const GroupScriptConfig*>::iterator *)(v3 + 672) = std::vector<GroupScriptConfig const*>::begin(__for_range_8);
          *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 704, v11);
          *(std::vector<const GroupScriptConfig*>::iterator *)(v3 + 704) = std::vector<GroupScriptConfig const*>::end(__for_range_8);
          while ( __gnu_cxx::operator!=<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>(
                    (const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *)(v3 + 672),
                    (const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *)(v3 + 704)) )
          {
            v23 = __gnu_cxx::__normal_iterator<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>::operator*((const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *const)(v3 + 672));
            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v23);
            v24 = std::unordered_map<unsigned int,MonsterScriptConfig>::size(&(*v23)->monster_config_map);
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            *(_DWORD *)(v3 + 48) += v24;
            __gnu_cxx::__normal_iterator<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>::operator++((__gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *const)(v3 + 672));
          }
          *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) = -8;
          break;
        case DAILY_FINISH_GATHER:
          __for_range_9 = (std::vector<const GroupScriptConfig*> *)(v3 + 864);
          *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 736, v11);
          *(std::vector<const GroupScriptConfig*>::iterator *)(v3 + 736) = std::vector<GroupScriptConfig const*>::begin(__for_range_9);
          *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 768, v11);
          *(std::vector<const GroupScriptConfig*>::iterator *)(v3 + 768) = std::vector<GroupScriptConfig const*>::end(__for_range_9);
          while ( 1 )
          {
            v25 = (char *)(v3 + 768);
            if ( !__gnu_cxx::operator!=<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>(
                    (const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *)(v3 + 736),
                    (const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *)(v3 + 768)) )
              break;
            v26 = __gnu_cxx::__normal_iterator<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>::operator*((const __gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *const)(v3 + 736));
            if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v26);
            __for_range_10 = &(*v26)->gadget_config_map;
            *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 800, v25);
            *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v3 + 800) = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(__for_range_10);
            *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 832, v25);
            *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v3 + 832) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_10);
            while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v3 + 800),
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v3 + 832)) )
            {
              v42 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v3 + 800));
              std::get<0ul,unsigned int const,GadgetScriptConfig>(v42);
              gadget_config = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v42);
              p_point_type = &gadget_config->point_type;
              if ( *(_BYTE *)(((unsigned __int64)p_point_type >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_point_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_point_type >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(p_point_type);
              }
              if ( gadget_config->point_type )
              {
                point_type = gadget_config->point_type;
                if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)task_config - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->finish_param1 >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(&task_config->finish_param1);
                }
                if ( point_type == task_config->finish_param1 || !task_config->finish_param1 )
                {
                  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                    __asan_report_load4(v3 + 48);
                  ++*(_DWORD *)(v3 + 48);
                }
              }
              std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v3 + 800));
            }
            *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000) = -8;
            __gnu_cxx::__normal_iterator<GroupScriptConfig const**,std::vector<GroupScriptConfig const*>>::operator++((__gnu_cxx::__normal_iterator<const GroupScriptConfig**,std::vector<const GroupScriptConfig*> > *const)(v3 + 736));
          }
          *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) = -8;
          break;
        default:
          break;
      }
      if ( *(_BYTE *)(((unsigned __int64)&task_config->finish_progress >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->finish_progress >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&task_config->finish_progress);
      }
      finish_progress = task_config->finish_progress;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      if ( finish_progress <= *(_DWORD *)(v3 + 48) )
      {
        v6 = 0;
      }
      else
      {
        *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 992, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 992),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkDailyTaskFinishProgress",
          544);
        v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 992),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v30,
                (const char (*)[16])"daily_task_id: ");
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &task_config->id);
        v33 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v32, (const char (*)[31])byte_1AC650E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
        *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      std::vector<GroupScriptConfig const*>::~vector((std::vector<const GroupScriptConfig*> *const)(v3 + 864));
    }
    else
    {
      if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 928, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 928),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkDailyTaskFinishProgress",
        474);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 928),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])"daily_task_id: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &task_config->id);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v10, (const char (*)[23])byte_1AC650A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
      v6 = -1;
    }
  }
  if ( v61 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF806C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 116) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8080) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1056LL, v61);
  }
  return v6;
};

// Line 552: range 0000000013A776CA-0000000013A78C0B
int32_t __cdecl DailyTaskExcelConfigMgr::checkTaskSatisfiedCondition(
        const DailyTaskExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::DailyTaskStatisfiedCond *cond)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t DailyTaskVarNum; // edx
  char v8; // al
  const data::QuestExcelConfigMgrBase *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t param1; // r14d
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  uint32_t param2; // ecx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // ecx
  uint32_t v26; // edx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // r15d
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  const data::NewActivityExcelConfigMgrBase *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  const data::QuestExcelConfigMgrBase *v42; // rcx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  const data::AchievementExcelConfigMgrBase *p_achievement_config_mgr; // rcx
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  int32_t result; // eax
  const TxtConfigMgr *txt_config_mgra; // [rsp+10h] [rbp-390h]
  JsonConfigMgr *json_config_mgr; // [rsp+28h] [rbp-378h]
  char v59[880]; // [rsp+30h] [rbp-370h] BYREF

  txt_config_mgra = txt_config_mgr;
  v4 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(832LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "14 48 4 15 var_max_num:553 64 16 26 scene_point_config_ptr:593 96 16 9 <unknown> 128 32 9 <unkno"
                        "wn> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknow"
                        "n> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = DailyTaskExcelConfigMgr::checkTaskSatisfiedCondition;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862725] = -218959118;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -218959118;
  v6[536862739] = -218959118;
  v6[536862741] = -218959118;
  v6[536862743] = -218959118;
  v6[536862745] = -202116109;
  DailyTaskVarNum = ConstValueExcelConfigMgr::getDailyTaskVarNum(&txt_config_mgr->const_value_config_mgr);
  v8 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(txt_config_mgr) = v8 != 0;
    __asan_report_store4(v4 + 48, txt_config_mgr);
  }
  *(_DWORD *)(v4 + 48) = DailyTaskVarNum;
  json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgra)->json_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  switch ( cond->type )
  {
    case CONDITION_NONE:
      goto LABEL_79;
    case CONDITION_QUEST:
      p_quest_config_mgr = &txt_config_mgra->quest_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      if ( data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, cond->param1) )
        goto LABEL_79;
      if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkTaskSatisfiedCondition",
        564);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])"param1: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &cond->param1);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v12, (const char (*)[24])byte_1AC65300);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
      v3 = -1;
      break;
    case CONDITION_PLAYER_LEVEL:
    case CONDITION_PLAYER_LEVEL_GT_EQ:
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      param1 = cond->param1;
      if ( param1 <= PlayerExcelConfigMgr::getPlayerMaxLevel(&txt_config_mgra->player_config_mgr) )
        goto LABEL_79;
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
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkTaskSatisfiedCondition",
        572);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])"param1: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &cond->param1);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v16, (const char (*)[37])byte_1AC65340);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
      v3 = -1;
      break;
    case CONDITION_VAR_EQ:
    case CONDITION_VAR_NE:
    case CONDITION_VAR_GT:
    case CONDITION_VAR_LT:
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::DailyTaskExcelConfig> const,unsigned int>(
              &this->daily_task_excel_config_map,
              &cond->param1) )
      {
        if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkTaskSatisfiedCondition",
          582);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])"task_id: ");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &cond->param1);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])byte_1AC59EA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
        v3 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&cond->param2 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&cond->param2 >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&cond->param2);
        }
        param2 = cond->param2;
        if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v4 + 48);
        if ( param2 < *(_DWORD *)(v4 + 48) )
        {
LABEL_79:
          v3 = 0;
        }
        else
        {
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
            "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
            "checkTaskSatisfiedCondition",
            587);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v22 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])"index: ");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &cond->param2);
          v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v23, (const char (*)[16])byte_1AC653E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
          v3 = -1;
        }
      }
      break;
    case CONDITION_UNLOCK_POINT:
      if ( *(_BYTE *)(((unsigned __int64)&cond->param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->param2);
      }
      v25 = cond->param2;
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      v26 = cond->param1;
      if ( *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      JsonConfigMgr::findScenePoint<data::SceneTransPoint>(
        (const JsonConfigMgr *const)(v4 + 96),
        json_config_mgr,
        v26,
        v25);
      std::shared_ptr<data::ConfigScenePoint>::shared_ptr<data::SceneTransPoint,void>(
        (std::shared_ptr<data::ConfigScenePoint> *const)(v4 + 64),
        (std::shared_ptr<data::SceneTransPoint> *)(v4 + 96));
      std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v4 + 96));
      *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = -1800;
      if ( std::operator==<data::ConfigScenePoint>(0LL, (const std::shared_ptr<data::ConfigScenePoint> *)(v4 + 64)) )
      {
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkTaskSatisfiedCondition",
          596);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                v27,
                (const char (*)[27])"SceneTransPoint not found ");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &cond->param1);
        v30 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v29, (const char (*)[2])" ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &cond->param2);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 384));
        *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v31 = 0;
      }
      else
      {
        v31 = 1;
      }
      std::shared_ptr<data::ConfigScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigScenePoint> *const)(v4 + 64));
      if ( v31 )
        goto LABEL_79;
      break;
    case CONDITION_PLAYER_LEVEL_LT:
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      if ( cond->param1 > 1 )
        goto LABEL_79;
      if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkTaskSatisfiedCondition",
        604);
      v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v33 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v32, (const char (*)[9])"param1: ");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &cond->param1);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v34, (const char (*)[14])byte_1AC65460);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 448));
      v3 = -1;
      break;
    case CONDITION_SPECIFIC_ACTIVITY_OPEN:
      p_new_activity_config_mgr = &txt_config_mgra->new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      if ( data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(p_new_activity_config_mgr, cond->param1) )
        goto LABEL_79;
      if ( *(char *)(((v4 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkTaskSatisfiedCondition",
        611);
      v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v37 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v36, (const char (*)[11])byte_1AC654A0);
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &cond->param1);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v38, (const char (*)[17])byte_1AC654E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 512));
      v3 = -1;
      break;
    case CONDITION_ACTIVITY_TYPE_OPEN:
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      if ( data::isValidNewActivityType(cond->param1) )
        goto LABEL_79;
      if ( *(char *)(((v4 + 576) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 576, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 576),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkTaskSatisfiedCondition",
        618);
      v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 576),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v40 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v39, (const char (*)[15])byte_1AC65520);
      v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &cond->param1);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v41, (const char (*)[11])byte_1AC65560);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 576));
      v3 = -1;
      break;
    case CONDITION_QUEST_GLOBAL_VAR_EQUAL:
    case CONDITION_QUEST_GLOBAL_VAR_GREATER:
    case CONDITION_QUEST_GLOBAL_VAR_LESS:
      v42 = &txt_config_mgra->quest_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      if ( data::QuestExcelConfigMgrBase::findQuestGlobalVarConfig(v42, cond->param1) )
        goto LABEL_79;
      if ( *(char *)(((v4 + 640) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 640, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 640),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkTaskSatisfiedCondition",
        628);
      v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 640),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v44 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v43, (const char (*)[12])"cond_type: ");
      v45 = common::milog::MiLogStream::operator<<<data::ConditionType,(data::ConditionType*)0>(v44, &cond->type);
      v46 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v45, (const char (*)[22])byte_1AC655E0);
      v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &cond->param1);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v47, (const char (*)[31])byte_1AC65620);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 640));
      v3 = -1;
      break;
    case CONDITION_FINISH_ACHIEVEMENT:
      p_achievement_config_mgr = &txt_config_mgra->achievement_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      if ( data::AchievementExcelConfigMgrBase::findAchievementExcelConfig(p_achievement_config_mgr, cond->param1) )
        goto LABEL_79;
      if ( *(char *)(((v4 + 704) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 704, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 704),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkTaskSatisfiedCondition",
        637);
      v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 704),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v50 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v49, (const char (*)[12])"cond_type: ");
      v51 = common::milog::MiLogStream::operator<<<data::ConditionType,(data::ConditionType*)0>(v50, &cond->type);
      v52 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v51, (const char (*)[11])byte_1AC65660);
      v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &cond->param1);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v53, (const char (*)[25])byte_1AC656A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 704));
      v3 = -1;
      break;
    default:
      if ( *(char *)(((v4 + 768) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 799) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 799) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 768, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 768),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkTaskSatisfiedCondition",
        643);
      v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 768),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        v54,
        (const char (*)[28])"Not support such condition!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 768));
      v3 = -1;
      break;
  }
  result = v3;
  if ( v59 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF804C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8054) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF805C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8064) = 0;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 650: range 0000000013A78C0C-0000000013A79056
int32_t __cdecl DailyTaskExcelConfigMgr::checkTaskCondition(
        const DailyTaskExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::DailyTaskExcelConfig *task_config)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  data::LogicType statisfied_cond_comb; // eax
  int32_t result; // eax
  const data::DailyTaskStatisfiedCond *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  const data::DailyTaskStatisfiedCond *v10; // rdx
  const data::DailyTaskStatisfiedCond *v11; // rdx
  common::milog::MiLogStream *v13; // rax
  char v15[192]; // [rsp+20h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DailyTaskExcelConfigMgr::checkTaskCondition;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&task_config->statisfied_cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&task_config->statisfied_cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&task_config->statisfied_cond_comb);
  }
  statisfied_cond_comb = task_config->statisfied_cond_comb;
  if ( statisfied_cond_comb )
  {
    if ( statisfied_cond_comb < LOGIC_NONE || (unsigned int)(statisfied_cond_comb - 1) > 1 )
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
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkTaskCondition",
        673);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 96),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v13, (const char (*)[23])"Not support such comb!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      result = -1;
    }
    else if ( std::vector<data::DailyTaskStatisfiedCond>::size(&task_config->statisfied_cond) > 1 )
    {
      v10 = std::vector<data::DailyTaskStatisfiedCond>::operator[](&task_config->statisfied_cond, 0LL);
      if ( DailyTaskExcelConfigMgr::checkTaskSatisfiedCondition(this, txt_config_mgr, v10)
        || (v11 = std::vector<data::DailyTaskStatisfiedCond>::operator[](&task_config->statisfied_cond, 1uLL),
            DailyTaskExcelConfigMgr::checkTaskSatisfiedCondition(this, txt_config_mgr, v11)) )
      {
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 32, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 32),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkTaskCondition",
        664);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 32),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v9, (const char (*)[34])byte_1AC657A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 32));
      result = -1;
    }
  }
  else if ( std::vector<data::DailyTaskStatisfiedCond>::size(&task_config->statisfied_cond) )
  {
    v8 = std::vector<data::DailyTaskStatisfiedCond>::operator[](&task_config->statisfied_cond, 0LL);
    result = DailyTaskExcelConfigMgr::checkTaskSatisfiedCondition(this, txt_config_mgr, v8);
  }
  else
  {
    result = 0;
  }
  if ( v15 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
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

// Line 680: range 0000000013A79058-0000000013A7A105
int32_t __cdecl DailyTaskExcelConfigMgr::checkTaskAction(
        const DailyTaskExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::DailyTaskAction *action)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t DailyTaskPossiblePoolNum; // edx
  char v7; // al
  uint32_t DailyTaskVarNum; // edx
  char v9; // al
  data::DailyTaskCondType cond_type; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  unsigned int cond_param2; // esi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  unsigned int param2; // esi
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  unsigned int v31; // esi
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  unsigned int v42; // esi
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  const TxtConfigMgr *txt_config_mgra; // [rsp+10h] [rbp-2B0h]
  char v49[672]; // [rsp+20h] [rbp-2A0h] BYREF

  txt_config_mgra = txt_config_mgr;
  v3 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 4 16 possible_num:681 48 4 15 var_max_num:682 64 32 9 <unknown> 128 32 9 <unknown> 192 32 "
                        "9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9"
                        " <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = DailyTaskExcelConfigMgr::checkTaskAction;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -202116109;
  DailyTaskPossiblePoolNum = ConstValueExcelConfigMgr::getDailyTaskPossiblePoolNum(&txt_config_mgr->const_value_config_mgr);
  v7 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(txt_config_mgr) = v7 != 0;
    __asan_report_store4(v3 + 32, txt_config_mgr);
  }
  *(_DWORD *)(v3 + 32) = DailyTaskPossiblePoolNum;
  DailyTaskVarNum = ConstValueExcelConfigMgr::getDailyTaskVarNum(&txt_config_mgra->const_value_config_mgr);
  v9 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(txt_config_mgr) = v9 != 0;
    __asan_report_store4(v3 + 48, txt_config_mgr);
  }
  *(_DWORD *)(v3 + 48) = DailyTaskVarNum;
  if ( *(_BYTE *)(((unsigned __int64)&action->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action->cond_type);
  }
  cond_type = action->cond_type;
  if ( cond_type <= DAILY_TASK_COND_NONE || (unsigned int)(cond_type - 1) > 3 )
    goto LABEL_24;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::DailyTaskExcelConfig> const,int>(
          &this->daily_task_excel_config_map,
          &action->cond_param1) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
      "checkTaskAction",
      695);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 64),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])"task_id: ");
    v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, &action->cond_param1);
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])byte_1AC59EA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
    goto LABEL_68;
  }
  if ( *(_BYTE *)(((unsigned __int64)&action->cond_param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action->cond_param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action->cond_param2);
  }
  cond_param2 = action->cond_param2;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v3 + 48);
  if ( cond_param2 < *(_DWORD *)(v3 + 48) )
  {
LABEL_24:
    if ( *(_BYTE *)(((unsigned __int64)&action->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&action->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&action->type);
    }
    switch ( action->type )
    {
      case DAILY_TASK_ACTION_SET_VAR:
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::DailyTaskExcelConfig> const,int>(
                &this->daily_task_excel_config_map,
                &action->param1) )
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
            "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
            "checkTaskAction",
            716);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 192),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])"task_id: ");
          v22 = common::milog::MiLogStream::operator<<<int,(int *)0>(v21, &action->param1);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])byte_1AC59EA0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
          result = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&action->param2);
          }
          param2 = action->param2;
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          if ( param2 < *(_DWORD *)(v3 + 48) )
            goto LABEL_67;
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
            "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
            "checkTaskAction",
            721);
          v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v25 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])"index: ");
          v26 = common::milog::MiLogStream::operator<<<int,(int *)0>(v25, &action->param2);
          v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v26, (const char (*)[16])byte_1AC653E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
          result = -1;
        }
        break;
      case DAILY_TASK_ACTION_INC_VAR:
      case DAILY_TASK_ACTION_DEC_VAR:
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::DailyTaskExcelConfig> const,int>(
                &this->daily_task_excel_config_map,
                &action->param1) )
        {
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
            "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
            "checkTaskAction",
            730);
          v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])"task_id: ");
          v30 = common::milog::MiLogStream::operator<<<int,(int *)0>(v29, &action->param1);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v30, (const char (*)[7])byte_1AC59EA0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
          result = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&action->param2);
          }
          v31 = action->param2;
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          if ( v31 < *(_DWORD *)(v3 + 48) )
            goto LABEL_67;
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
            "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
            "checkTaskAction",
            735);
          v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v33 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v32, (const char (*)[8])"index: ");
          v34 = common::milog::MiLogStream::operator<<<int,(int *)0>(v33, &action->param2);
          v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v34, (const char (*)[16])byte_1AC653E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
          result = -1;
        }
        break;
      case DAILY_TASK_ACTION_ADD_SURE_POOL:
        if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::DailyTaskExcelConfig> const,int>(
               &this->daily_task_excel_config_map,
               &action->param1) )
        {
          goto LABEL_67;
        }
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
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkTaskAction",
          743);
        v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v37 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v36, (const char (*)[10])"task_id: ");
        v38 = common::milog::MiLogStream::operator<<<int,(int *)0>(v37, &action->param1);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v38, (const char (*)[7])byte_1AC59EA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
        result = -1;
        break;
      case DAILY_TASK_ACTION_ADD_POSSIBLE_POOL:
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::DailyTaskExcelConfig> const,int>(
                &this->daily_task_excel_config_map,
                &action->param1) )
        {
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
            "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
            "checkTaskAction",
            751);
          v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v40 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v39, (const char (*)[10])"task_id: ");
          v41 = common::milog::MiLogStream::operator<<<int,(int *)0>(v40, &action->param1);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v41, (const char (*)[7])byte_1AC59EA0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
          result = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&action->param2);
          }
          v42 = action->param2;
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 32);
          if ( v42 < *(_DWORD *)(v3 + 32) )
            goto LABEL_67;
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
            "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
            "checkTaskAction",
            756);
          v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 576),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v44 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v43, (const char (*)[13])byte_1AC65960);
          v45 = common::milog::MiLogStream::operator<<<int,(int *)0>(v44, &action->param2);
          v46 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v45, (const char (*)[23])byte_1AC659A0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
          result = -1;
        }
        break;
      default:
LABEL_67:
        result = 0;
        break;
    }
  }
  else
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
      "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
      "checkTaskAction",
      700);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 128),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])"index: ");
    v18 = common::milog::MiLogStream::operator<<<int,(int *)0>(v17, &action->cond_param2);
    v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v18, (const char (*)[16])byte_1AC653E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = -1;
  }
LABEL_68:
  if ( v49 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
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

// Line 767: range 0000000013A7A106-0000000013A7A7A9
int32_t __cdecl DailyTaskExcelConfigMgr::checkRewardExcelConfig(
        const DailyTaskExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-174h]
  data::DailyTaskRewardExcelConfigMap *__for_range; // [rsp+20h] [rbp-170h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false,false>::reference v18; // [rsp+28h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,data::DailyTaskRewardExcelConfig> >::type *task_reward_id; // [rsp+30h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DailyTaskRewardExcelConfig> >::type *reward_config; // [rsp+38h] [rbp-158h]
  const std::vector<data::DailyTaskDropConfig> *__for_range_0; // [rsp+40h] [rbp-150h]
  const data::DailyTaskDropConfig *drop_config; // [rsp+48h] [rbp-148h]
  char v23[320]; // [rsp+50h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:774 64 8 13 __for_end:774 96 8 15 __for_begin:776 128 8 13 __for_end:776 1"
                        "60 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DailyTaskExcelConfigMgr::checkRewardExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->daily_task_reward_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false> *)(v2 + 64)) )
      break;
    v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false,false> *const)(v2 + 32));
    task_reward_id = std::get<0ul,unsigned int const,data::DailyTaskRewardExcelConfig>(v18);
    reward_config = (std::tuple_element<1,const std::pair<unsigned int const,data::DailyTaskRewardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DailyTaskRewardExcelConfig>(v18);
    __for_range_0 = &reward_config->drop_vec;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<data::DailyTaskDropConfig>::const_iterator *)(v2 + 96) = std::vector<data::DailyTaskDropConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<data::DailyTaskDropConfig>::const_iterator *)(v2 + 128) = std::vector<data::DailyTaskDropConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::DailyTaskDropConfig const*,std::vector<data::DailyTaskDropConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::DailyTaskDropConfig*,std::vector<data::DailyTaskDropConfig> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<const data::DailyTaskDropConfig*,std::vector<data::DailyTaskDropConfig> > *)(v2 + 128)) )
    {
      drop_config = __gnu_cxx::__normal_iterator<data::DailyTaskDropConfig const*,std::vector<data::DailyTaskDropConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::DailyTaskDropConfig*,std::vector<data::DailyTaskDropConfig> > *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&drop_config->drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&drop_config->drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&drop_config->drop_id);
      }
      if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                              txt_config_mgr,
                              drop_config->drop_id,
                              ITEM_LIMIT_DAILY_TASK) != 1 )
      {
        ret = -1;
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
          4u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkRewardExcelConfig",
          781);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v6, (const char (*)[17])"task_reward_id: ");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, task_reward_id);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])byte_1AC65B00);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &drop_config->drop_id);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v10, (const char (*)[28])byte_1AC65B40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<data::DailyTaskDropConfig const*,std::vector<data::DailyTaskDropConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::DailyTaskDropConfig*,std::vector<data::DailyTaskDropConfig> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( std::vector<data::DailyTaskDropConfig>::empty(&reward_config->drop_vec) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkRewardExcelConfig",
        787);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v11, (const char (*)[17])"task_reward_id: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, task_reward_id);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])byte_1AC65B80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 794: range 0000000013A7A7AA-0000000013A7B15F
int32_t __cdecl DailyTaskExcelConfigMgr::checkLevelExcelConfig(
        const DailyTaskExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t min_player_level; // ecx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-198h]
  uint32_t last_level; // [rsp+1Ch] [rbp-194h]
  data::DailyTaskLevelExcelConfigVec *__for_range; // [rsp+20h] [rbp-190h]
  const data::DailyTaskLevelExcelConfig *level_config; // [rsp+28h] [rbp-188h]
  char v29[384]; // [rsp+30h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:797 64 8 13 __for_end:797 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DailyTaskExcelConfigMgr::checkLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  ret = 0;
  last_level = 0;
  __for_range = &this->daily_task_level_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::vector<data::DailyTaskLevelExcelConfig>::const_iterator *)(v2 + 32) = std::vector<data::DailyTaskLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::vector<data::DailyTaskLevelExcelConfig>::const_iterator *)(v2 + 64) = std::vector<data::DailyTaskLevelExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::DailyTaskLevelExcelConfig const*,std::vector<data::DailyTaskLevelExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::DailyTaskLevelExcelConfig*,std::vector<data::DailyTaskLevelExcelConfig> > *)(v2 + 32),
            (const __gnu_cxx::__normal_iterator<const data::DailyTaskLevelExcelConfig*,std::vector<data::DailyTaskLevelExcelConfig> > *)(v2 + 64)) )
  {
    level_config = __gnu_cxx::__normal_iterator<data::DailyTaskLevelExcelConfig const*,std::vector<data::DailyTaskLevelExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::DailyTaskLevelExcelConfig*,std::vector<data::DailyTaskLevelExcelConfig> > *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&level_config->score_drop_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config->score_drop_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&level_config->score_drop_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                            txt_config_mgr,
                            level_config->score_drop_id,
                            ITEM_LIMIT_DAILY_TASK_SCORE) != 1 )
    {
      ret = -1;
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
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkLevelExcelConfig",
        802);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])"[");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &level_config->min_player_level);
      v8 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v7, (const char (*)[2])",");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &level_config->max_player_level);
      v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v9, (const char (*)[19])byte_1AC65CC0);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &level_config->score_drop_id);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v11, (const char (*)[25])byte_1AC65D00);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)&level_config->min_player_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->min_player_level >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&level_config->min_player_level);
    }
    if ( level_config->min_player_level != last_level + 1 )
    {
      ret = -1;
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
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkLevelExcelConfig",
        807);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v12, (const char (*)[2])"[");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &level_config->min_player_level);
      v15 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v14, (const char (*)[2])",");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &level_config->max_player_level);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v16, (const char (*)[24])byte_1AC65D40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)&level_config->min_player_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->min_player_level >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&level_config->min_player_level);
    }
    min_player_level = level_config->min_player_level;
    if ( *(_BYTE *)(((unsigned __int64)&level_config->max_player_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config->max_player_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&level_config->max_player_level);
    }
    if ( min_player_level > level_config->max_player_level )
    {
      ret = -1;
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
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkLevelExcelConfig",
        812);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])"[");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &level_config->min_player_level);
      v21 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v20, (const char (*)[2])",");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &level_config->max_player_level);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])byte_1AC65D80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)&level_config->max_player_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config->max_player_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&level_config->max_player_level);
    }
    last_level = level_config->max_player_level;
    __gnu_cxx::__normal_iterator<data::DailyTaskLevelExcelConfig const*,std::vector<data::DailyTaskLevelExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::DailyTaskLevelExcelConfig*,std::vector<data::DailyTaskLevelExcelConfig> > *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( std::vector<data::DailyTaskLevelExcelConfig>::empty(&this->daily_task_level_excel_config_vec) )
  {
    ret = -1;
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
      4u,
      "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
      "checkLevelExcelConfig",
      819);
    v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 288),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v23, (const char (*)[35])byte_1AC65DC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
  }
  result = ret;
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 825: range 0000000013A7B160-0000000013A7C57D
int32_t __cdecl DailyTaskExcelConfigMgr::checkCityTaskOpenExcelConfig(
        const DailyTaskExcelConfigMgr *const this,
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
  common::milog::MiLogStream *v10; // rax
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rcx
  const char *city_id; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::vector<unsigned int>::size_type v16; // r15
  common::milog::MiLogStream *v17; // rax
  const char *v18; // rsi
  common::milog::MiLogStream *v19; // r14
  uint32_t DailyTaskNum; // edx
  char v21; // al
  _BOOL4 v22; // eax
  char *v23; // rsi
  unsigned int *v24; // rax
  int *v25; // rdx
  int v26; // ecx
  char v27; // al
  __int64 v28; // rsi
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int v32; // eax
  char *v33; // rsi
  unsigned int *v34; // rax
  int *v35; // rdx
  int v36; // ecx
  char v37; // al
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  int v43; // eax
  __int64 v44; // rsi
  __int64 v45; // rdx
  const std::unordered_set<unsigned int> *GroupReplacedBySet; // rax
  char v47; // al
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  unsigned __int64 v51; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v53; // rax
  std::set<unsigned int>::size_type v54; // r15
  common::milog::MiLogStream *v55; // rax
  int v56; // r15d
  unsigned __int64 v57; // rdx
  int v58; // eax
  int32_t ret; // [rsp+24h] [rbp-38Ch]
  data::CityTaskOpenExcelConfigVec *__for_range; // [rsp+28h] [rbp-388h]
  const data::CityTaskOpenExcelConfig *open_config; // [rsp+30h] [rbp-380h]
  LuaConfigMgr *lua_config_mgr; // [rsp+38h] [rbp-378h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-370h]
  const data::DailyTaskExcelConfig *daily_task_config_ptr; // [rsp+48h] [rbp-368h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-360h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+58h] [rbp-358h]
  char v69[848]; // [rsp+60h] [rbp-350h] BYREF

  v3 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 32 4 9 <unknown> 48 4 11 task_id:847 64 4 12 group_id:855 80 8 15 __for_begin:827 112 8 13 __"
                        "for_end:827 144 8 15 __for_begin:847 176 8 13 __for_end:847 208 8 15 __for_begin:855 240 8 13 __"
                        "for_end:855 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 9"
                        " <unknown> 592 32 9 <unknown> 656 32 9 <unknown> 720 48 12 pool_set:870";
  *(_QWORD *)(v3 + 16) = DailyTaskExcelConfigMgr::checkCityTaskOpenExcelConfig;
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
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862739] = -219021312;
  v5[536862740] = 62194;
  v5[536862741] = -219021312;
  v5[536862742] = 62194;
  v5[536862744] = -202116109;
  ret = 0;
  __for_range = &this->city_task_open_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::vector<data::CityTaskOpenExcelConfig>::const_iterator *)(v3 + 80) = std::vector<data::CityTaskOpenExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::vector<data::CityTaskOpenExcelConfig>::const_iterator *)(v3 + 112) = std::vector<data::CityTaskOpenExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::CityTaskOpenExcelConfig const*,std::vector<data::CityTaskOpenExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::CityTaskOpenExcelConfig*,std::vector<data::CityTaskOpenExcelConfig> > *)(v3 + 80),
            (const __gnu_cxx::__normal_iterator<const data::CityTaskOpenExcelConfig*,std::vector<data::CityTaskOpenExcelConfig> > *)(v3 + 112)) )
  {
    open_config = __gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig const*,std::vector<data::CityTaskOpenExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::CityTaskOpenExcelConfig*,std::vector<data::CityTaskOpenExcelConfig> > *const)(v3 + 80));
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    p_quest_id = &open_config->quest_id;
    if ( *(_BYTE *)(((unsigned __int64)p_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_quest_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_quest_id);
    }
    if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, open_config->quest_id) )
    {
      ret = -1;
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 272, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 272),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkCityTaskOpenExcelConfig",
        832);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 272),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])"quest_id: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &open_config->quest_id);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])byte_1AC59CC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
    }
    p_world_area_config_mgr = &txt_config_mgr->world_area_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&open_config->city_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&open_config->city_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&open_config->city_id);
    }
    city_id = (const char *)open_config->city_id;
    if ( !WorldAreaExcelConfigMgr::findCityConfig(p_world_area_config_mgr, (uint32_t)city_id) )
    {
      ret = -1;
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 336, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 336),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkCityTaskOpenExcelConfig",
        838);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 336),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])"city_id: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &open_config->city_id);
      city_id = byte_1AC59CC0;
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])byte_1AC59CC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
    }
    v16 = std::vector<unsigned int>::size(&open_config->backup_vec);
    if ( v16 >= ConstValueExcelConfigMgr::getDailyTaskNum(&txt_config_mgr->const_value_config_mgr) )
    {
      lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
      __for_range_0 = &open_config->backup_vec;
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 144, city_id);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 144) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 176, city_id);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 176) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v23 = (char *)(v3 + 176);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 144),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 176)) )
        {
          v32 = 1;
          goto LABEL_74;
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v24 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 144));
        v25 = (int *)v24;
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v24);
        }
        v26 = *v25;
        v27 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v27 != 0 && v27 <= 3 )
        {
          LOBYTE(v23) = v27 != 0;
          __asan_report_store4(v3 + 48, v23);
        }
        *(_DWORD *)(v3 + 48) = v26;
        v28 = *(unsigned int *)(v3 + 48);
        daily_task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                                  &txt_config_mgr->daily_task_config_mgr,
                                  v28);
        if ( !daily_task_config_ptr )
          break;
        __for_range_1 = &daily_task_config_ptr->new_group_vec;
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 208, v28);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 208) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 240, v28);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 240) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v33 = (char *)(v3 + 240);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 208),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 240)) )
          {
            v43 = 1;
            goto LABEL_70;
          }
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          v34 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 208));
          v35 = (int *)v34;
          if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v34);
          }
          v36 = *v35;
          v37 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
          if ( v37 != 0 && v37 <= 3 )
          {
            LOBYTE(v33) = v37 != 0;
            __asan_report_store4(v3 + 64, v33);
          }
          *(_DWORD *)(v3 + 64) = v36;
          group_info_config_ptr = LuaConfigMgr::findGroupInfoConfig(lua_config_mgr, *(_DWORD *)(v3 + 64));
          if ( !group_info_config_ptr )
          {
            *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 528, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 528),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
              "checkCityTaskOpenExcelConfig",
              860);
            v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 528),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v39 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v38,
                    (const char (*)[39])byte_1AC66040);
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    (const unsigned int *)(v3 + 48));
            v41 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v40, (const char (*)[8])" group:");
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v41,
                    (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v42, (const char (*)[17])byte_1AC660E0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
            *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v43 = 0;
            goto LABEL_70;
          }
          v44 = ((_BYTE)group_info_config_ptr - 76) & 7;
          v45 = (*(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v44 >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->replaceable_info >> 3) + 0x7FFF8000));
          if ( (_BYTE)v45 )
            __asan_report_load1(&group_info_config_ptr->replaceable_info, v44, v45);
          if ( !group_info_config_ptr->replaceable_info.value )
            goto LABEL_63;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 64);
          GroupReplacedBySet = LuaConfigMgr::queryGroupReplacedBySet(
                                 lua_config_mgr,
                                 (const std::unordered_set<unsigned int> *)*(unsigned int *)(v3 + 64));
          if ( !std::unordered_set<unsigned int>::empty(GroupReplacedBySet) )
            v47 = 1;
          else
LABEL_63:
            v47 = 0;
          if ( v47 )
            break;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 208));
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
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "checkCityTaskOpenExcelConfig",
          865);
        v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 592),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v49 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v48, (const char (*)[39])byte_1AC66040);
        v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v49,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v50, (const char (*)[29])byte_1AC66120);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 592));
        *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v43 = 0;
LABEL_70:
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
        if ( v43 != 1 )
        {
          v32 = 0;
          goto LABEL_74;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 144));
      }
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
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkCityTaskOpenExcelConfig",
        852);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 464),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v30 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v29, (const char (*)[39])byte_1AC66040);
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v31, (const char (*)[7])byte_1AC59EA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
      *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v32 = 0;
LABEL_74:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
      if ( v32 == 1 )
      {
        v51 = ((v3 + 720) >> 3) + 2147450880;
        *(_DWORD *)v51 = 0;
        *(_WORD *)(v51 + 4) = 0;
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 720));
        M_current = std::vector<unsigned int>::end(&open_config->backup_vec)._M_current;
        v53._M_current = std::vector<unsigned int>::begin(&open_config->backup_vec)._M_current;
        std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
          (std::set<unsigned int> *const)(v3 + 720),
          v53,
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
        v54 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 720));
        if ( v54 == std::vector<unsigned int>::size(&open_config->backup_vec) )
        {
          v56 = 1;
        }
        else
        {
          *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 656) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 656, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 656),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
            "checkCityTaskOpenExcelConfig",
            874);
          v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 656),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v55, (const char (*)[47])byte_1AC66160);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 656));
          *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v56 = 0;
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 720));
        v22 = v56 == 1;
      }
      else
      {
        v22 = 0;
      }
    }
    else
    {
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 400, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "checkCityTaskOpenExcelConfig",
        843);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 400),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = "open_config.backup_vec < daily_task_num_: ";
      v19 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              v17,
              (const char (*)[43])"open_config.backup_vec < daily_task_num_: ");
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      DailyTaskNum = ConstValueExcelConfigMgr::getDailyTaskNum(&txt_config_mgr->const_value_config_mgr);
      v21 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v21 != 0 && v21 <= 3 )
      {
        LOBYTE(v18) = v21 != 0;
        __asan_report_store4(v3 + 32, v18);
      }
      *(_DWORD *)(v3 + 32) = DailyTaskNum;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 32));
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v22 = 0;
    }
    v57 = ((v3 + 720) >> 3) + 2147450880;
    *(_DWORD *)v57 = -117901064;
    *(_WORD *)(v57 + 4) = -1800;
    if ( !v22 )
    {
      v58 = 0;
      goto LABEL_86;
    }
    __gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig const*,std::vector<data::CityTaskOpenExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::CityTaskOpenExcelConfig*,std::vector<data::CityTaskOpenExcelConfig> > *const)(v3 + 80));
  }
  v58 = 1;
LABEL_86:
  if ( v58 == 1 )
    v2 = ret;
  if ( v69 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = -168430091;
  }
  return v2;
};

// Line 882: range 0000000013A7C57E-0000000013A7C769
__int64 __fastcall DailyTaskExcelConfigMgr::randPoolFromCity(
        const DailyTaskExcelConfigMgr *const this,
        __int64 city_id,
        uint32_t num,
        std::vector<unsigned int> *pool_vec)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_city_2_pools_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v8; // rdx
  bool v9; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v11; // rax
  char v14[160]; // [rsp+20h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 11 city_id:881 64 8 8 iter:883 96 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = DailyTaskExcelConfigMgr::randPoolFromCity;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 48) = city_id;
  p_city_2_pools_map = &this->city_2_pools_map;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, city_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_city_2_pools_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v4 + 48));
  v8 = &this->city_2_pools_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v8);
  v9 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v4 + 64));
    common::tools::RandomUtils::randomSelect<unsigned int>(&v11->second, pool_vec, num);
    result = 0LL;
  }
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 893: range 0000000013A7C76A-0000000013A7C92B
const std::vector<data::DailyTaskExcelConfig> *__fastcall DailyTaskExcelConfigMgr::findPoolTaskVec(
        const DailyTaskExcelConfigMgr *const this,
        __int64 pool_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<data::DailyTaskExcelConfig>> *p_pool_2_tasks_map; // rdx
  std::unordered_map<unsigned int,std::vector<data::DailyTaskExcelConfig>> *v6; // rdx
  bool v7; // al
  const std::vector<data::DailyTaskExcelConfig> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 pool_id:892 64 8 8 iter:894 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DailyTaskExcelConfigMgr::findPoolTaskVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = pool_id;
  p_pool_2_tasks_map = &this->pool_2_tasks_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, pool_id);
  *(std::unordered_map<unsigned int,std::vector<data::DailyTaskExcelConfig>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<data::DailyTaskExcelConfig>>::find(p_pool_2_tasks_map, (const std::unordered_map<unsigned int,std::vector<data::DailyTaskExcelConfig>>::key_type *)(v2 + 48));
  v6 = &this->pool_2_tasks_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<data::DailyTaskExcelConfig>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<data::DailyTaskExcelConfig>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::vector<data::DailyTaskExcelConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::DailyTaskExcelConfig> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::DailyTaskExcelConfig> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::DailyTaskExcelConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::DailyTaskExcelConfig> >,false,false> *const)(v2 + 64))->second;
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

// Line 903: range 0000000013A7C92C-0000000013A7CC47
// local variable allocation has failed, the output may be wrong!
const data::DailyTaskLevelExcelConfig *__cdecl DailyTaskExcelConfigMgr::findScoreConfig(
        const DailyTaskExcelConfigMgr *const this,
        uint32_t player_level)
{
  const data::DailyTaskLevelExcelConfig *v2; // r14
  __gnu_cxx::__normal_iterator<const data::DailyTaskLevelExcelConfig*,std::vector<data::DailyTaskLevelExcelConfig> > *v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::vector<data::DailyTaskLevelExcelConfig>::const_reference v6; // rdx
  char v7; // cl
  char v8; // al
  uint32_t *p_min_player_level; // rax
  int v10; // edx
  const data::DailyTaskLevelExcelConfig *result; // rax
  uint32_t player_levela; // [rsp+4h] [rbp-ACh]
  data::DailyTaskLevelExcelConfigVec *__for_range; // [rsp+10h] [rbp-A0h]
  const data::DailyTaskLevelExcelConfig *level_config; // [rsp+18h] [rbp-98h]
  char v15[144]; // [rsp+20h] [rbp-90h] BYREF

  player_levela = player_level;
  v3 = (__gnu_cxx::__normal_iterator<const data::DailyTaskLevelExcelConfig*,std::vector<data::DailyTaskLevelExcelConfig> > *)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (__gnu_cxx::__normal_iterator<const data::DailyTaskLevelExcelConfig*,std::vector<data::DailyTaskLevelExcelConfig> > *)v4;
  }
  v3->_M_current = (const data::DailyTaskLevelExcelConfig *)1102416563;
  v3[1]._M_current = (const data::DailyTaskLevelExcelConfig *)"2 32 8 15 __for_begin:908 64 8 13 __for_end:908";
  v3[2]._M_current = (const data::DailyTaskLevelExcelConfig *)DailyTaskExcelConfigMgr::findScoreConfig;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  if ( std::vector<data::DailyTaskLevelExcelConfig>::empty(&this->daily_task_level_excel_config_vec) )
    goto LABEL_8;
  v6 = std::vector<data::DailyTaskLevelExcelConfig>::front(&this->daily_task_level_excel_config_vec);
  v7 = *(_BYTE *)(((unsigned __int64)&v6->min_player_level >> 3) + 0x7FFF8000);
  LOBYTE(player_level) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)v6 + 12) & 7) + 3) >= v7 )
    __asan_report_load4(&v6->min_player_level);
  if ( player_levela < v6->min_player_level )
LABEL_8:
    v8 = 1;
  else
    v8 = 0;
  if ( v8 )
  {
    v2 = 0LL;
  }
  else
  {
    __for_range = &this->daily_task_level_excel_config_vec;
    if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v3[4], *(_QWORD *)&player_level);
    v3[4]._M_current = std::vector<data::DailyTaskLevelExcelConfig>::begin(__for_range)._M_current;
    if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v3[8], *(_QWORD *)&player_level);
    v3[8]._M_current = std::vector<data::DailyTaskLevelExcelConfig>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<data::DailyTaskLevelExcelConfig const*,std::vector<data::DailyTaskLevelExcelConfig>>(
              v3 + 4,
              v3 + 8) )
    {
      level_config = __gnu_cxx::__normal_iterator<data::DailyTaskLevelExcelConfig const*,std::vector<data::DailyTaskLevelExcelConfig>>::operator*(v3 + 4);
      p_min_player_level = &level_config->min_player_level;
      if ( *(_BYTE *)(((unsigned __int64)p_min_player_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_min_player_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_min_player_level >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(p_min_player_level);
      }
      if ( player_levela >= level_config->min_player_level )
      {
        if ( *(_BYTE *)(((unsigned __int64)&level_config->max_player_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&level_config->max_player_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&level_config->max_player_level);
        }
        if ( player_levela <= level_config->max_player_level )
        {
          v2 = level_config;
          v10 = 0;
          goto LABEL_27;
        }
      }
      __gnu_cxx::__normal_iterator<data::DailyTaskLevelExcelConfig const*,std::vector<data::DailyTaskLevelExcelConfig>>::operator++(v3 + 4);
    }
    v10 = 1;
LABEL_27:
    *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) = -8;
    if ( v10 == 1 )
      v2 = std::vector<data::DailyTaskLevelExcelConfig>::back(&this->daily_task_level_excel_config_vec);
  }
  result = v2;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_current = (const data::DailyTaskLevelExcelConfig *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 919: range 0000000013A7CC48-0000000013A7CFE4
// local variable allocation has failed, the output may be wrong!
uint32_t __cdecl DailyTaskExcelConfigMgr::findGroupReviseLevel(
        const DailyTaskExcelConfigMgr *const this,
        uint32_t player_level)
{
  uint32_t group_revise_level; // r14d
  __gnu_cxx::__normal_iterator<const data::DailyTaskLevelExcelConfig*,std::vector<data::DailyTaskLevelExcelConfig> > *v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::vector<data::DailyTaskLevelExcelConfig>::const_reference v6; // rdx
  char v7; // cl
  char v8; // al
  uint32_t *p_min_player_level; // rax
  int v10; // edx
  std::vector<data::DailyTaskLevelExcelConfig>::const_reference v11; // rdx
  uint32_t *p_group_revise_level; // rax
  uint32_t result; // eax
  uint32_t player_levela; // [rsp+4h] [rbp-ACh]
  data::DailyTaskLevelExcelConfigVec *__for_range; // [rsp+10h] [rbp-A0h]
  const data::DailyTaskLevelExcelConfig *level_config; // [rsp+18h] [rbp-98h]
  char v17[144]; // [rsp+20h] [rbp-90h] BYREF

  player_levela = player_level;
  v3 = (__gnu_cxx::__normal_iterator<const data::DailyTaskLevelExcelConfig*,std::vector<data::DailyTaskLevelExcelConfig> > *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (__gnu_cxx::__normal_iterator<const data::DailyTaskLevelExcelConfig*,std::vector<data::DailyTaskLevelExcelConfig> > *)v4;
  }
  v3->_M_current = (const data::DailyTaskLevelExcelConfig *)1102416563;
  v3[1]._M_current = (const data::DailyTaskLevelExcelConfig *)"2 32 8 15 __for_begin:924 64 8 13 __for_end:924";
  v3[2]._M_current = (const data::DailyTaskLevelExcelConfig *)DailyTaskExcelConfigMgr::findGroupReviseLevel;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  if ( std::vector<data::DailyTaskLevelExcelConfig>::empty(&this->daily_task_level_excel_config_vec) )
    goto LABEL_8;
  v6 = std::vector<data::DailyTaskLevelExcelConfig>::front(&this->daily_task_level_excel_config_vec);
  v7 = *(_BYTE *)(((unsigned __int64)&v6->min_player_level >> 3) + 0x7FFF8000);
  LOBYTE(player_level) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)v6 + 12) & 7) + 3) >= v7 )
    __asan_report_load4(&v6->min_player_level);
  if ( player_levela < v6->min_player_level )
LABEL_8:
    v8 = 1;
  else
    v8 = 0;
  if ( v8 )
  {
    group_revise_level = 0;
  }
  else
  {
    __for_range = &this->daily_task_level_excel_config_vec;
    if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v3[4], *(_QWORD *)&player_level);
    v3[4]._M_current = std::vector<data::DailyTaskLevelExcelConfig>::begin(__for_range)._M_current;
    if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v3[8], *(_QWORD *)&player_level);
    v3[8]._M_current = std::vector<data::DailyTaskLevelExcelConfig>::end(__for_range)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::DailyTaskLevelExcelConfig const*,std::vector<data::DailyTaskLevelExcelConfig>>(
              v3 + 4,
              v3 + 8) )
      {
        v10 = 1;
        goto LABEL_29;
      }
      level_config = __gnu_cxx::__normal_iterator<data::DailyTaskLevelExcelConfig const*,std::vector<data::DailyTaskLevelExcelConfig>>::operator*(v3 + 4);
      p_min_player_level = &level_config->min_player_level;
      if ( *(_BYTE *)(((unsigned __int64)p_min_player_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_min_player_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_min_player_level >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(p_min_player_level);
      }
      if ( player_levela >= level_config->min_player_level )
      {
        if ( *(_BYTE *)(((unsigned __int64)&level_config->max_player_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&level_config->max_player_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&level_config->max_player_level);
        }
        if ( player_levela <= level_config->max_player_level )
          break;
      }
      __gnu_cxx::__normal_iterator<data::DailyTaskLevelExcelConfig const*,std::vector<data::DailyTaskLevelExcelConfig>>::operator++(v3 + 4);
    }
    if ( *(_BYTE *)(((unsigned __int64)&level_config->group_revise_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->group_revise_level >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&level_config->group_revise_level);
    }
    group_revise_level = level_config->group_revise_level;
    v10 = 0;
LABEL_29:
    *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) = -8;
    if ( v10 == 1 )
    {
      v11 = std::vector<data::DailyTaskLevelExcelConfig>::back(&this->daily_task_level_excel_config_vec);
      p_group_revise_level = &v11->group_revise_level;
      if ( *(_BYTE *)(((unsigned __int64)p_group_revise_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_group_revise_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_group_revise_level >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(p_group_revise_level);
      }
      group_revise_level = v11->group_revise_level;
    }
  }
  result = group_revise_level;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_current = (const data::DailyTaskLevelExcelConfig *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 936: range 0000000013A7CFE6-0000000013A7DD68
const DailyTaskExcelConfigMgr *__fastcall DailyTaskExcelConfigMgr::findTaskReward(
        const DailyTaskExcelConfigMgr *const this,
        __int64 task_id,
        uint32_t player_level,
        int a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const std::unordered_map<unsigned int,data::DailyTaskExcelConfig> *v7; // rdx
  const std::unordered_map<unsigned int,data::DailyTaskExcelConfig> *v8; // rdx
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false>::pointer v13; // rax
  uint32_t task_reward_id; // ecx
  char v15; // al
  const std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig> *v16; // rdx
  const std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig> *v17; // rdx
  bool v18; // al
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  uint32_t *p_preview_reward_id; // rbx
  __int64 p_drop_id; // rsi
  const unsigned int *v29; // rcx
  unsigned int index; // [rsp+24h] [rbp-26Ch]
  std::vector<data::DailyTaskDropConfig> *level_reward_vec; // [rsp+28h] [rbp-268h]
  char v36[608]; // [rsp+30h] [rbp-260h] BYREF

  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "18 32 4 9 <unknown> 48 4 9 <unknown> 64 4 15 task_reward:943 80 4 9 <unknown> 96 4 9 <unknown> 1"
                        "12 4 9 <unknown> 128 4 9 <unknown> 144 4 11 task_id:935 160 8 8 iter:937 192 8 9 <unknown> 224 8"
                        " 9 <unknown> 256 8 15 reward_iter:944 288 8 9 <unknown> 320 8 9 <unknown> 352 8 9 <unknown> 384 "
                        "32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = DailyTaskExcelConfigMgr::findTaskReward;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -234556924;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -218959360;
  v6[536862729] = -218959360;
  v6[536862730] = -218959360;
  v6[536862731] = -218959360;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -202116109;
  *(_DWORD *)(v4 + 144) = player_level;
  v7 = (const std::unordered_map<unsigned int,data::DailyTaskExcelConfig> *)(task_id + 8);
  if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 160, task_id);
  *(std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::const_iterator *)(v4 + 160) = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::find(
                                                                                                 v7,
                                                                                                 (const std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::key_type *)(v4 + 144));
  v8 = (const std::unordered_map<unsigned int,data::DailyTaskExcelConfig> *)(task_id + 8);
  if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 192, v4 + 144);
  *(std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::const_iterator *)(v4 + 192) = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::end(v8);
  v9 = (char *)(v4 + 192);
  v10 = std::__detail::operator==<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false> *)(v4 + 160),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false> *)(v4 + 192));
  *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 384, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 384),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
      "findTaskReward",
      940);
    v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
            (common::milog::MiLogStream *const)(v4 + 384),
            (const char (*)[17])"find dailytask: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 144));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 384));
    *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 48, " fails");
    *(_DWORD *)(v4 + 48) = 0;
    *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 32, " fails");
    *(_DWORD *)(v4 + 32) = 0;
    if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 224, " fails");
    std::make_tuple<int,int>((int *)(v4 + 224), (int *)(v4 + 32), (int *)(v4 + 48), (int *)(v4 + 32));
    std::tuple<unsigned int,unsigned int>::tuple<int,int,true>(
      (std::tuple<unsigned int,unsigned int> *const)this,
      (std::tuple<int,int> *)(v4 + 224));
  }
  else
  {
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 4;
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false> *const)(v4 + 160));
    if ( *(_BYTE *)(((unsigned __int64)&v13->second.task_reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v13->second.task_reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v13->second.task_reward_id);
    }
    task_reward_id = v13->second.task_reward_id;
    v15 = *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000);
    LOBYTE(v9) = v15 != 0;
    if ( v15 != 0 && v15 <= 3 )
      __asan_report_store4(v4 + 64, v9);
    *(_DWORD *)(v4 + 64) = task_reward_id;
    *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
    v16 = (const std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig> *)(task_id + 64);
    if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 256, v9);
    *(std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::const_iterator *)(v4 + 256) = std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::find(v16, (const std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::key_type *)(v4 + 64));
    *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
    v17 = (const std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig> *)(task_id + 64);
    if ( *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 288, v4 + 64);
    *(std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::const_iterator *)(v4 + 288) = std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::end(v17);
    v18 = std::__detail::operator==<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false> *)(v4 + 256),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false> *)(v4 + 288));
    *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = -8;
    if ( v18 )
    {
      *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
        "findTaskReward",
        947);
      v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v4 + 448),
              (const char (*)[17])"find dailytask: ");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v19,
              (const unsigned int *)(v4 + 144));
      v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])" task_reward: ");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 448));
      *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = -117901064;
      *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 96, " fails");
      *(_DWORD *)(v4 + 96) = 0;
      *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 80, " fails");
      *(_DWORD *)(v4 + 80) = 0;
      if ( *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 320, " fails");
      std::make_tuple<int,int>((int *)(v4 + 320), (int *)(v4 + 80), (int *)(v4 + 96), (int *)(v4 + 80));
      std::tuple<unsigned int,unsigned int>::tuple<int,int,true>(
        (std::tuple<unsigned int,unsigned int> *const)this,
        (std::tuple<int,int> *)(v4 + 320));
    }
    else
    {
      level_reward_vec = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false,false> *const)(v4 + 256))->second.drop_vec;
      if ( std::vector<data::DailyTaskDropConfig>::empty(level_reward_vec) )
      {
        *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/DailyTaskExcelConfig.cpp",
          "findTaskReward",
          953);
        v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                (common::milog::MiLogStream *const)(v4 + 512),
                (const char (*)[17])"find dailytask: ");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v4 + 144));
        v25 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v24, (const char (*)[15])" task_reward: ");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v26, (const char (*)[15])" reward empty!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 512));
        *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v4 + 128, " reward empty!");
        *(_DWORD *)(v4 + 128) = 0;
        *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v4 + 112, " reward empty!");
        *(_DWORD *)(v4 + 112) = 0;
        if ( *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 352, " reward empty!");
        std::make_tuple<int,int>((int *)(v4 + 352), (int *)(v4 + 112), (int *)(v4 + 128), (int *)(v4 + 112));
        std::tuple<unsigned int,unsigned int>::tuple<int,int,true>(
          (std::tuple<unsigned int,unsigned int> *const)this,
          (std::tuple<int,int> *)(v4 + 352));
      }
      else
      {
        if ( !a4 )
          a4 = 1;
        index = (a4 - 1) / 5u;
        if ( index < std::vector<data::DailyTaskDropConfig>::size(level_reward_vec) )
        {
          p_preview_reward_id = &std::vector<data::DailyTaskDropConfig>::operator[](level_reward_vec, index)->preview_reward_id;
          p_drop_id = (__int64)&std::vector<data::DailyTaskDropConfig>::operator[](level_reward_vec, index)->drop_id;
          v29 = (const unsigned int *)(((_DWORD)this + 7) & 7);
          if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&this->_vptr_DailyTaskExcelConfigMgrBase + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_vptr_DailyTaskExcelConfigMgrBase
                                                               + 7) >> 3)
                                                             + 0x7FFF8000) )
          {
            p_drop_id = 8LL;
            __asan_report_store_n(this, 8LL);
          }
        }
        else
        {
          p_preview_reward_id = &std::vector<data::DailyTaskDropConfig>::back(level_reward_vec)->preview_reward_id;
          p_drop_id = (__int64)&std::vector<data::DailyTaskDropConfig>::back(level_reward_vec)->drop_id;
          v29 = (const unsigned int *)(((_DWORD)this + 7) & 7);
          if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&this->_vptr_DailyTaskExcelConfigMgrBase + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_vptr_DailyTaskExcelConfigMgrBase
                                                               + 7) >> 3)
                                                             + 0x7FFF8000) )
          {
            p_drop_id = 8LL;
            __asan_report_store_n(this, 8LL);
          }
        }
        std::make_tuple<unsigned int const&,unsigned int const&>(
          (const unsigned int *)this,
          (const unsigned int *)p_drop_id,
          p_preview_reward_id,
          v29);
      }
    }
  }
  if ( v36 == (char *)v4 )
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
  }
  return this;
};

// Line 974: range 0000000013A7DD6A-0000000013A7DF2B
const std::vector<std::tuple<unsigned int,unsigned int>> *__fastcall DailyTaskExcelConfigMgr::findExcludeNpcVec(
        const DailyTaskExcelConfigMgr *const this,
        __int64 task_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<std::tuple<unsigned int,unsigned int>>> *p_task_2_npc_map; // rdx
  std::unordered_map<unsigned int,std::vector<std::tuple<unsigned int,unsigned int>>> *v6; // rdx
  bool v7; // al
  const std::vector<std::tuple<unsigned int,unsigned int>> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 task_id:973 64 8 8 iter:975 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DailyTaskExcelConfigMgr::findExcludeNpcVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = task_id;
  p_task_2_npc_map = &this->task_2_npc_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, task_id);
  *(std::unordered_map<unsigned int,std::vector<std::tuple<unsigned int,unsigned int>>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<std::tuple<unsigned int,unsigned int>>>::find(p_task_2_npc_map, (const std::unordered_map<unsigned int,std::vector<std::tuple<unsigned int,unsigned int>>>::key_type *)(v2 + 48));
  v6 = &this->task_2_npc_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<std::tuple<unsigned int,unsigned int>>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<std::tuple<unsigned int,unsigned int>>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::vector<std::tuple<unsigned int,unsigned int>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::tuple<unsigned int,unsigned int>> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::tuple<unsigned int,unsigned int>> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::tuple<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::tuple<unsigned int,unsigned int>> >,false,false> *const)(v2 + 64))->second;
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

// Line 984: range 0000000013A7DF2C-0000000013A7E0C4
bool __fastcall DailyTaskExcelConfigMgr::isQuestOpenCity(const DailyTaskExcelConfigMgr *const this, __int64 quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_set<unsigned int> *p_city_open_quest_set; // rdx
  std::unordered_set<unsigned int> *v6; // rdx
  bool result; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 quest_id:983 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DailyTaskExcelConfigMgr::isQuestOpenCity;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = quest_id;
  p_city_open_quest_set = &this->city_open_quest_set;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, quest_id);
  *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 96) = std::unordered_set<unsigned int>::end(p_city_open_quest_set);
  v6 = &this->city_open_quest_set;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, quest_id);
  *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 64) = std::unordered_set<unsigned int>::find(
                                                                     v6,
                                                                     (const std::unordered_set<unsigned int>::key_type *)(v2 + 48));
  result = std::__detail::operator!=<unsigned int,false>(
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 64),
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 96));
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

// Line 989: range 0000000013A7E0C6-0000000013A7E2A8
const data::CityTaskOpenExcelConfig *__fastcall DailyTaskExcelConfigMgr::findTaskOpenConfigByCityId(
        const DailyTaskExcelConfigMgr *const this,
        __int64 city_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,const data::CityTaskOpenExcelConfig*> *p_city_2_task_open_config_map; // rdx
  std::unordered_map<unsigned int,const data::CityTaskOpenExcelConfig*> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,const data::CityTaskOpenExcelConfig*>,false,false>::pointer v8; // rax
  const data::CityTaskOpenExcelConfig *result; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 city_id:988 64 8 8 iter:990 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DailyTaskExcelConfigMgr::findTaskOpenConfigByCityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = city_id;
  p_city_2_task_open_config_map = &this->city_2_task_open_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, city_id);
  *(std::unordered_map<unsigned int,const data::CityTaskOpenExcelConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::CityTaskOpenExcelConfig const*>::find(p_city_2_task_open_config_map, (const std::unordered_map<unsigned int,const data::CityTaskOpenExcelConfig*>::key_type *)(v2 + 48));
  v6 = &this->city_2_task_open_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,const data::CityTaskOpenExcelConfig*>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::CityTaskOpenExcelConfig const*>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,data::CityTaskOpenExcelConfig const*>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::CityTaskOpenExcelConfig*>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::CityTaskOpenExcelConfig*>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CityTaskOpenExcelConfig const*>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,const data::CityTaskOpenExcelConfig*>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v8->second);
    result = v8->second;
  }
  else
  {
    result = 0LL;
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

// Line 999: range 0000000013A7E2AA-0000000013A7E46B
const data::DailyTaskExcelConfig *__fastcall DailyTaskExcelConfigMgr::findDailyTaskConfigByGroupId(
        const DailyTaskExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::DailyTaskExcelConfig> *p_group_id_2_daily_task_config_map; // rdx
  std::unordered_map<unsigned int,data::DailyTaskExcelConfig> *v6; // rdx
  bool v7; // al
  const data::DailyTaskExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:998 64 8 9 iter:1000 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = DailyTaskExcelConfigMgr::findDailyTaskConfigByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_id_2_daily_task_config_map = &this->group_id_2_daily_task_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::find(
                                                                                                p_group_id_2_daily_task_config_map,
                                                                                                (const std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->group_id_2_daily_task_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false,false> *const)(v2 + 64))->second;
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
