// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp

// Line 20: range 0000000012AA9390-0000000012AA9ADB
int32_t __cdecl ActivityArenaChallengeExcelConfigMgr::rewriteConfig(
        ActivityArenaChallengeExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> *v5; // rax
  std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> *v6; // rdi
  const data::ActivityArenaChallengeExcelConfig *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> >,bool> v8; // rax
  const unsigned int *v9; // r9
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const unsigned int *p_arena_challenge_level; // r8
  const unsigned int *p_arena_challenge_id; // rdi
  __int64 p_schedule_id; // rsi
  char v19; // dl
  uint32_t *p_watcher_id; // rsi
  std::tuple<unsigned int,unsigned int,unsigned int> *v21; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int> >,false,false>,bool> v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v31; // rax
  std::vector<unsigned int> *v32; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-144h]
  data::ActivityArenaChallengeExcelConfigVec *__for_range; // [rsp+20h] [rbp-140h]
  const data::ActivityArenaChallengeExcelConfig *config; // [rsp+28h] [rbp-138h]
  char v38[304]; // [rsp+30h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 14 __for_begin:22 64 8 12 __for_end:22 96 12 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityArenaChallengeExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -219020288;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->activity_arena_challenge_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::vector<data::ActivityArenaChallengeExcelConfig>::iterator *)(v2 + 32) = std::vector<data::ActivityArenaChallengeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::vector<data::ActivityArenaChallengeExcelConfig>::iterator *)(v2 + 64) = std::vector<data::ActivityArenaChallengeExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::ActivityArenaChallengeExcelConfig *,std::vector<data::ActivityArenaChallengeExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::ActivityArenaChallengeExcelConfig*,std::vector<data::ActivityArenaChallengeExcelConfig> > *)(v2 + 32),
            (const __gnu_cxx::__normal_iterator<data::ActivityArenaChallengeExcelConfig*,std::vector<data::ActivityArenaChallengeExcelConfig> > *)(v2 + 64)) )
  {
    config = __gnu_cxx::__normal_iterator<data::ActivityArenaChallengeExcelConfig *,std::vector<data::ActivityArenaChallengeExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ActivityArenaChallengeExcelConfig*,std::vector<data::ActivityArenaChallengeExcelConfig> > *const)(v2 + 32));
    v5 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::operator[](
           &this->arena_challenge_config_map,
           &config->schedule_id);
    v6 = std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::operator[](
           v5,
           &config->arena_challenge_id);
    v8 = std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::emplace<unsigned int const&,data::ActivityArenaChallengeExcelConfig const&>(
           v6,
           &config->arena_challenge_level,
           config,
           &config->arena_challenge_level,
           v7);
    if ( !v8.second )
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
        "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
        "rewriteConfig",
        26);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v10,
              (const char (*)[33])"duplicate arena_challenge_level:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->arena_challenge_level);
      v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v12,
              (const char (*)[21])" arena_challenge_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->arena_challenge_id);
      v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->schedule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1024;
    p_arena_challenge_level = &config->arena_challenge_level;
    p_arena_challenge_id = &config->arena_challenge_id;
    p_schedule_id = (__int64)&config->schedule_id;
    v19 = *(_BYTE *)(((v2 + 107) >> 3) + 0x7FFF8000);
    LOBYTE(v9) = v19 != 0;
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0 || v19 != 0 && (char)((v2 + 107) & 7) >= v19 )
    {
      p_schedule_id = 12LL;
      p_arena_challenge_id = (const unsigned int *)(v2 + 96);
      __asan_report_store_n(v2 + 96, 12LL);
    }
    std::make_tuple<unsigned int const&,unsigned int const&,unsigned int const&>(
      (const unsigned int *)(v2 + 96),
      (const unsigned int *)p_schedule_id,
      p_arena_challenge_id,
      p_arena_challenge_level,
      p_arena_challenge_level,
      v9);
    p_watcher_id = &config->watcher_id;
    v22 = std::unordered_map<unsigned int,std::tuple<unsigned int,unsigned int,unsigned int>>::emplace<unsigned int const&,std::tuple<unsigned int,unsigned int,unsigned int>>(
            &this->watcher_arena_challenge_map,
            &config->watcher_id,
            (std::tuple<unsigned int,unsigned int,unsigned int> *)(v2 + 96),
            &config->watcher_id,
            v21);
    *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -1800;
    if ( !v22.second )
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
        "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
        "rewriteConfig",
        31);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v24 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v23,
              (const char (*)[22])"duplicate watcher_id:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &config->watcher_id);
      v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v25, (const char (*)[15])", schedule_id:");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &config->schedule_id);
      v28 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v27,
              (const char (*)[21])" arena_challenge_id:");
      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &config->arena_challenge_id);
      v30 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v29,
              (const char (*)[24])" arena_challenge_level:");
      p_watcher_id = &config->arena_challenge_level;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &config->arena_challenge_level);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(char *)(((unsigned __int64)&config->is_extra_level >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->is_extra_level, p_watcher_id, &config->is_extra_level);
    if ( !config->is_extra_level )
    {
      v31 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::operator[](
              &this->normal_challenge_watcher_list_map,
              &config->schedule_id);
      v32 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](v31, &config->arena_challenge_id);
      std::vector<unsigned int>::push_back(v32, &config->watcher_id);
    }
    __gnu_cxx::__normal_iterator<data::ActivityArenaChallengeExcelConfig *,std::vector<data::ActivityArenaChallengeExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ActivityArenaChallengeExcelConfig*,std::vector<data::ActivityArenaChallengeExcelConfig> > *const)(v2 + 32));
  }
  result = ret;
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 43: range 0000000012AA9ADC-0000000012AA9B00
int32_t __cdecl ActivityArenaChallengeExcelConfigMgr::checkConfig(
        ActivityArenaChallengeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return ActivityArenaChallengeExcelConfigMgr::checkArenaChallengeConfig(this, txt_config_mgr);
};

// Line 48: range 0000000012AA9B02-0000000012AABB11
int32_t __cdecl ActivityArenaChallengeExcelConfigMgr::checkArenaChallengeConfig(
        ActivityArenaChallengeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t *p_schedule_id; // rax
  __int64 v8; // rsi
  data::NewActivityType ActivityTypeByScheduleId; // edx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  NewActivityExcelConfigMgr *v17; // rcx
  __int64 v18; // rsi
  uint32_t ActivityIdByScheduleId; // edx
  char v20; // al
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  const char *v30; // rsi
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  char *v36; // rsi
  unsigned int *v37; // rax
  int *v38; // rdx
  int v39; // ecx
  char v40; // al
  __int64 v41; // rsi
  uint32_t rely_start_world_level_limit_activity_id; // ecx
  char v43; // al
  int v44; // ecx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_activity_type_schedule_vec_map; // rcx
  char v63; // al
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v64; // rdx
  char *v65; // rsi
  bool v66; // al
  unsigned int *v67; // rax
  int *v68; // rdx
  int v69; // ecx
  char v70; // al
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  const char *v73; // rsi
  std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::size_type v74; // r15
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rdx
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> > >::type *v80; // rsi
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rdx
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rdx
  std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::size_type v85; // r15
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rdx
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rdx
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  int32_t ret; // [rsp+14h] [rbp-54Ch]
  LuaConfigMgr *lua_config_mgr; // [rsp+18h] [rbp-548h]
  data::ActivityArenaChallengeExcelConfigVec *__for_range; // [rsp+20h] [rbp-540h]
  std::vector<unsigned int> *__for_range_1; // [rsp+28h] [rbp-538h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>> *__for_range_2; // [rsp+30h] [rbp-530h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> >,false,false>::reference v99; // [rsp+38h] [rbp-528h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> > >::type *schedule_id; // [rsp+40h] [rbp-520h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> > >::type *arena_challenge_level_config_map; // [rsp+48h] [rbp-518h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> >,false,false>::reference v102; // [rsp+58h] [rbp-508h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> > >::type *arena_challenge_id; // [rsp+60h] [rbp-500h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> > >::type *level_config_map; // [rsp+68h] [rbp-4F8h]
  const data::ActivityArenaChallengeExcelConfig *config; // [rsp+70h] [rbp-4F0h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+78h] [rbp-4E8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+80h] [rbp-4E0h]
  const GroupInfoScriptConfig *group_info_script_config_ptr; // [rsp+88h] [rbp-4D8h]
  char v109[1232]; // [rsp+90h] [rbp-4D0h] BYREF

  v2 = (unsigned __int64)v109;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1184LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "30 32 4 16 activity_type:53 48 4 14 activity_id:59 64 4 11 group_id:80 80 4 19 rely_activity_id:"
                        "89 96 4 9 <unknown> 112 4 15 schedule_id:111 128 4 31 expected_arena_challenge_id:122 144 4 9 le"
                        "vel:137 160 8 14 __for_begin:51 192 8 12 __for_end:51 224 8 14 __for_begin:80 256 8 12 __for_end"
                        ":80 288 8 8 iter:108 320 8 9 <unknown> 352 8 15 __for_begin:111 384 8 13 __for_end:111 416 8 15 "
                        "__for_begin:120 448 8 13 __for_end:120 480 8 15 __for_begin:130 512 8 13 __for_end:130 544 32 9 "
                        "<unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <"
                        "unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityArenaChallengeExcelConfigMgr::checkArenaChallengeConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
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
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -218959118;
  v4[536862754] = -218959118;
  v4[536862756] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  ret = 0;
  __for_range = &this->activity_arena_challenge_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, txt_config_mgr);
  *(std::vector<data::ActivityArenaChallengeExcelConfig>::iterator *)(v2 + 160) = std::vector<data::ActivityArenaChallengeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, txt_config_mgr);
  *(std::vector<data::ActivityArenaChallengeExcelConfig>::iterator *)(v2 + 192) = std::vector<data::ActivityArenaChallengeExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 192);
    if ( !__gnu_cxx::operator!=<data::ActivityArenaChallengeExcelConfig *,std::vector<data::ActivityArenaChallengeExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::ActivityArenaChallengeExcelConfig*,std::vector<data::ActivityArenaChallengeExcelConfig> > *)(v2 + 160),
            (const __gnu_cxx::__normal_iterator<data::ActivityArenaChallengeExcelConfig*,std::vector<data::ActivityArenaChallengeExcelConfig> > *)(v2 + 192)) )
      break;
    config = __gnu_cxx::__normal_iterator<data::ActivityArenaChallengeExcelConfig *,std::vector<data::ActivityArenaChallengeExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ActivityArenaChallengeExcelConfig*,std::vector<data::ActivityArenaChallengeExcelConfig> > *const)(v2 + 160));
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    p_schedule_id = &config->schedule_id;
    if ( *(_BYTE *)(((unsigned __int64)p_schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_schedule_id);
    }
    v8 = config->schedule_id;
    ActivityTypeByScheduleId = NewActivityExcelConfigMgr::getActivityTypeByScheduleId(p_new_activity_config_mgr, v8);
    v10 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(v8) = v10 != 0;
      __asan_report_store4(v2 + 32, v8);
    }
    *(_DWORD *)(v2 + 32) = ActivityTypeByScheduleId;
    if ( *(_DWORD *)(v2 + 32) != 1402 )
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
        "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
        "checkArenaChallengeConfig",
        56);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 544),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
              v11,
              (const char (*)[63])"ActivityType is not NEW_ACTIVITY_ARENA_CHALLENGE. schedule_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->schedule_id);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])" activity_type:");
      v15 = common::milog::MiLogStream::operator<<<data::NewActivityType,(data::NewActivityType*)0>(
              v14,
              (const data::NewActivityType *)(v2 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v15, (const char (*)[5])" id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    v17 = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->schedule_id);
    }
    v18 = config->schedule_id;
    ActivityIdByScheduleId = NewActivityExcelConfigMgr::getActivityIdByScheduleId(v17, v18);
    v20 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( v20 != 0 && v20 <= 3 )
    {
      LOBYTE(v18) = v20 != 0;
      __asan_report_store4(v2 + 48, v18);
    }
    *(_DWORD *)(v2 + 48) = ActivityIdByScheduleId;
    if ( !*(_DWORD *)(v2 + 48) )
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
        "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
        "checkArenaChallengeConfig",
        62);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v22 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              v21,
              (const char (*)[38])"ActivityID not found for schedule_id:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config->schedule_id);
      v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" of id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &config->id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->gallery_id);
    }
    gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                           p_gallery_config_mgr,
                           config->gallery_id);
    if ( gallery_config_ptr )
    {
      v30 = (const char *)((((_BYTE)config + 12) & 7u) + 3);
      if ( *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->schedule_id);
      }
      if ( config->schedule_id != 5019001 && config->schedule_id != 5034001 )
      {
        if ( *(char *)(((unsigned __int64)&gallery_config_ptr->is_disable_group_default_revise_level >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(
            &gallery_config_ptr->is_disable_group_default_revise_level,
            v30,
            &gallery_config_ptr->is_disable_group_default_revise_level);
        if ( !gallery_config_ptr->is_disable_group_default_revise_level )
        {
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 736, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 736),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
            "checkArenaChallengeConfig",
            77);
          v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 736),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v32 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v31, (const char (*)[14])byte_1AA19CE0);
          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &config->id);
          v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v33, (const char (*)[16])byte_1AA19D20);
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &config->gallery_id);
          v30 = byte_1AA19D60;
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v35, (const char (*)[39])byte_1AA19D60);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __for_range_0 = &gallery_config_ptr->group_id;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, v30);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 224) = std::vector<unsigned int>::begin(__for_range_0);
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 256, v30);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 256) = std::vector<unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          v36 = (char *)(v2 + 256);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 224),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 256)) )
            break;
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
          v37 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 224));
          v38 = (int *)v37;
          if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v37);
          }
          v39 = *v38;
          v40 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
          if ( v40 != 0 && v40 <= 3 )
          {
            LOBYTE(v36) = v40 != 0;
            __asan_report_store4(v2 + 64, v36);
          }
          *(_DWORD *)(v2 + 64) = v39;
          v41 = *(unsigned int *)(v2 + 64);
          group_info_script_config_ptr = LuaConfigMgr::findGroupInfoConfig(lua_config_mgr, v41);
          if ( group_info_script_config_ptr )
          {
            if ( *(char *)(((unsigned __int64)&config->is_extra_level >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&config->is_extra_level, v41, &config->is_extra_level);
            if ( !config->is_extra_level )
            {
              *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((unsigned __int64)&group_info_script_config_ptr->rely_start_world_level_limit_activity_id >> 3)
                            + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&group_info_script_config_ptr->rely_start_world_level_limit_activity_id >> 3)
                            + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&group_info_script_config_ptr->rely_start_world_level_limit_activity_id);
              }
              rely_start_world_level_limit_activity_id = group_info_script_config_ptr->rely_start_world_level_limit_activity_id;
              v43 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
              if ( v43 != 0 && v43 <= 3 )
              {
                LOBYTE(v41) = v43 != 0;
                __asan_report_store4(v2 + 80, v41);
              }
              *(_DWORD *)(v2 + 80) = rely_start_world_level_limit_activity_id;
              v44 = *(_DWORD *)(v2 + 80);
              if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 48);
              if ( v44 != *(_DWORD *)(v2 + 48) )
              {
                *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 800, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 800),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
                  "checkArenaChallengeConfig",
                  92);
                v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 800),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v46 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v45,
                        (const char (*)[14])byte_1AA19CE0);
                v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &config->id);
                v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v47,
                        (const char (*)[16])byte_1AA19D20);
                v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &config->gallery_id);
                v50 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v49,
                        (const char (*)[11])byte_1AA19DC0);
                v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v50,
                        (const unsigned int *)(v2 + 64));
                v52 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                        v51,
                        (const char (*)[69])byte_1AA19E00);
                v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v52,
                        (const unsigned int *)(v2 + 80));
                v54 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v53, (const char (*)[5])" vs ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v54,
                  (const unsigned int *)(v2 + 48));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
                *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
              *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
            }
            else
            {
              if ( *(char *)(((unsigned __int64)&group_info_script_config_ptr->is_ignore_world_level_revise >> 3)
                           + 0x7FFF8000) < 0 )
                __asan_report_load1(
                  &group_info_script_config_ptr->is_ignore_world_level_revise,
                  v41,
                  &group_info_script_config_ptr->is_ignore_world_level_revise);
              if ( !group_info_script_config_ptr->is_ignore_world_level_revise )
              {
                *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 864) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 864, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 864),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
                  "checkArenaChallengeConfig",
                  100);
                v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 864),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v56 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v55,
                        (const char (*)[14])byte_1AA19CE0);
                v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, &config->id);
                v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v57,
                        (const char (*)[16])byte_1AA19D20);
                v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, &config->gallery_id);
                v60 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v59,
                        (const char (*)[11])byte_1AA19DC0);
                v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v60,
                        (const unsigned int *)(v2 + 64));
                common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v61, (const char (*)[42])byte_1AA19EC0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
                *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 224));
        }
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
        "checkArenaChallengeConfig",
        68);
      v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 672),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v27 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              v26,
              (const char (*)[41])"findGalleryExcelConfig fail, gallery_id:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &config->gallery_id);
      v29 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v28, (const char (*)[5])" id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &config->id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    __gnu_cxx::__normal_iterator<data::ActivityArenaChallengeExcelConfig *,std::vector<data::ActivityArenaChallengeExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ActivityArenaChallengeExcelConfig*,std::vector<data::ActivityArenaChallengeExcelConfig> > *const)(v2 + 160));
  }
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  p_activity_type_schedule_vec_map = &txt_config_mgr->new_activity_config_mgr.activity_type_schedule_vec_map;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
  v63 = *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v63 != 0;
  if ( v63 != 0 && v63 <= 3 )
    __asan_report_store4(v2 + 96, v5);
  *(_DWORD *)(v2 + 96) = 1402;
  if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 288, v5);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 288) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                                p_activity_type_schedule_vec_map,
                                                                                                (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
  v64 = &txt_config_mgr->new_activity_config_mgr.activity_type_schedule_vec_map;
  if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 320, v2 + 96);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 320) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v64);
  v65 = (char *)(v2 + 320);
  v66 = std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 288),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 320));
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
  if ( v66 )
  {
    __for_range_1 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 288))->second;
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 352, v65);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 352) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 384, v65);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 384) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v65 = (char *)(v2 + 384);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 352),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 384)) )
        break;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
      v67 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 352));
      v68 = (int *)v67;
      if ( *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v67 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v67);
      }
      v69 = *v68;
      v70 = *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000);
      if ( v70 != 0 && v70 <= 3 )
      {
        LOBYTE(v65) = v70 != 0;
        __asan_report_store4(v2 + 112, v65);
      }
      *(_DWORD *)(v2 + 112) = v69;
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>,unsigned int>(
              &this->arena_challenge_config_map,
              (const unsigned int *)(v2 + 112)) )
      {
        *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 928, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 928),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
          "checkArenaChallengeConfig",
          115);
        v71 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 928),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v72 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                v71,
                (const char (*)[49])"no arena_challenge config found for schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, (const unsigned int *)(v2 + 112));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
        *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 352));
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
  }
  __for_range_2 = &this->arena_challenge_config_map;
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 416, v65);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::iterator *)(v2 + 416) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::begin(__for_range_2);
  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 448, v65);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::iterator *)(v2 + 448) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::end(__for_range_2);
  while ( 1 )
  {
    v73 = (const char *)(v2 + 448);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> >,false> *)(v2 + 416),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> >,false> *)(v2 + 448)) )
      break;
    v99 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> >,false,false> *const)(v2 + 416));
    schedule_id = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>(v99);
    arena_challenge_level_config_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>(v99);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 128, v73);
    for ( *(_DWORD *)(v2 + 128) = 1; ; ++*(_DWORD *)(v2 + 128) )
    {
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 128);
      v74 = *(unsigned int *)(v2 + 128);
      if ( v74 > std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::size(arena_challenge_level_config_map) )
        break;
      v73 = (const char *)(v2 + 128);
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> const,unsigned int>(
              arena_challenge_level_config_map,
              (const unsigned int *)(v2 + 128)) )
      {
        *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 992, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 992),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
          "checkArenaChallengeConfig",
          126);
        v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 992),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v76 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v75, (const char (*)[13])"schedule_id:");
        v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, schedule_id);
        v78 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v77,
                (const char (*)[30])" expected_arena_challenge_id:");
        v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v78,
                (const unsigned int *)(v2 + 128));
        v73 = " not found!";
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v79, (const char (*)[12])" not found!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
        *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 128);
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 480, v73);
    *(std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::const_iterator *)(v2 + 480) = std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::begin(arena_challenge_level_config_map);
    *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 512, v73);
    *(std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::const_iterator *)(v2 + 512) = std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::end(arena_challenge_level_config_map);
    while ( 1 )
    {
      v80 = (std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> > >::type *)(v2 + 512);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> >,false> *)(v2 + 480),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> >,false> *)(v2 + 512)) )
        break;
      v102 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> >,false,false> *const)(v2 + 480));
      arena_challenge_id = std::get<0ul,unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>(v102);
      level_config_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>(v102);
      if ( std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::empty(level_config_map) )
      {
        *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1056, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1056),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
          "checkArenaChallengeConfig",
          134);
        v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1056),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v82 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                v81,
                (const char (*)[40])"level_config_map is empty, schedule_id:");
        v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v82, schedule_id);
        v84 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v83,
                (const char (*)[21])" arena_challenge_id:");
        v80 = arena_challenge_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, arena_challenge_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
        *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, v80);
      for ( *(_DWORD *)(v2 + 144) = 1; ; ++*(_DWORD *)(v2 + 144) )
      {
        if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 144);
        v85 = *(unsigned int *)(v2 + 144);
        if ( v85 > std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::size(level_config_map) )
          break;
        if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> const,unsigned int>(
                level_config_map,
                (const unsigned int *)(v2 + 144)) )
        {
          *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1120) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1120, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1120),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
            "checkArenaChallengeConfig",
            141);
          v86 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1120),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v87 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  v86,
                  (const char (*)[47])"arena_challenge_config not found! schedule_id:");
          v88 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v87, schedule_id);
          v89 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v88,
                  (const char (*)[21])" arena_challenge_id:");
          v90 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v89, arena_challenge_id);
          v91 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v90,
                  (const char (*)[24])" arena_challenge_level:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v91, (const unsigned int *)(v2 + 144));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
          *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 144);
      }
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> >,false,false> *const)(v2 + 480));
    }
    *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> >,false,false> *const)(v2 + 416));
  }
  if ( v109 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF808C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 148) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1184LL, v109);
  }
  return ret;
};

// Line 151: range 0000000012AABB12-0000000012AAD31D
int32_t __cdecl ActivityArenaChallengeExcelConfigMgr::finalConfig(
        ActivityArenaChallengeExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  __int64 v15; // rsi
  uint32_t ActivityIdByWatcherId; // edx
  char v17; // al
  NewActivityExcelConfigMgr *v18; // rcx
  uint32_t ActivityIdByScheduleId; // edx
  char v20; // al
  std::tuple_element<0,std::tuple<unsigned int,unsigned int,unsigned int> >::type *v21; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
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
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rsi
  std::any *p_param; // rsi
  __int64 v50; // rdx
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  unsigned int *v54; // r8
  unsigned int *v55; // r9
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int>,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int> > > > *p_related_challenge_map; // r14
  std::tuple<unsigned int,unsigned int,unsigned int> *v63; // rcx
  const std::tuple<unsigned int,unsigned int,unsigned int> *v64; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int> >,false,true>,bool> v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  unsigned __int64 v71; // rax
  int32_t v72; // r8d
  FinishChallengeWatcherParam v74; // [rsp+0h] [rbp-3D0h] BYREF
  TxtConfigMgr *txt_config_mgra; // [rsp+20h] [rbp-3B0h]
  ActivityArenaChallengeExcelConfigMgr *thisa; // [rsp+28h] [rbp-3A8h]
  int32_t ret; // [rsp+34h] [rbp-39Ch]
  std::unordered_map<unsigned int,std::tuple<unsigned int,unsigned int,unsigned int>> *__for_range; // [rsp+38h] [rbp-398h]
  const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int> > *v79; // [rsp+40h] [rbp-390h]
  std::tuple_element<0,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int> > >::type *watcher_id; // [rsp+48h] [rbp-388h]
  std::tuple_element<1,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int> > >::type *t; // [rsp+50h] [rbp-380h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int,unsigned int> >::type *schedule_id; // [rsp+58h] [rbp-378h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *arena_challenge_id; // [rsp+60h] [rbp-370h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *arena_challenge_level; // [rsp+68h] [rbp-368h]
  const WatcherConfig *watcher_config_ptr; // [rsp+70h] [rbp-360h]
  char v86[848]; // [rsp+80h] [rbp-350h] BYREF

  thisa = this;
  txt_config_mgra = txt_config_mgr;
  v2 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 32 4 23 watcher_activity_id:163 48 4 24 schedule_activity_id:164 64 8 15 __for_begin:153 96 8"
                        " 13 __for_end:153 128 8 9 <unknown> 160 12 9 <unknown> 192 12 9 <unknown> 224 20 9 param:180 288"
                        " 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 "
                        "32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityArenaChallengeExcelConfigMgr::finalConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -219020288;
  v4[536862726] = -219020288;
  v4[536862727] = -234618880;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -202116109;
  ret = 0;
  __for_range = &thisa->watcher_arena_challenge_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::tuple<unsigned int,unsigned int,unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::tuple<unsigned int,unsigned int,unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::tuple<unsigned int,unsigned int,unsigned int>>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::tuple<unsigned int,unsigned int,unsigned int>>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int> >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int> >,false> *)(v2 + 96)) )
  {
    v79 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int> >,false,false> *const)(v2 + 64));
    watcher_id = std::get<0ul,unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int>>(v79);
    t = (std::tuple_element<1,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int>>(v79);
    *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1024;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 171) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 85) & 7) >= *(_BYTE *)(((v2 + 171) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 12LL);
    }
    if ( ((unsigned __int8)t & 7) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&t->std::_Tuple_impl<0,unsigned int,unsigned int,unsigned int>::std::_Head_base<0,unsigned int,false>::_M_head_impl
                    + 3) >> 3)
                  + 0x7FFF8000) != 0
      && (((unsigned __int8)t + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&t->std::_Tuple_impl<0,unsigned int,unsigned int,unsigned int>::std::_Head_base<0,unsigned int,false>::_M_head_impl
                                                       + 3) >> 3)
                                                     + 0x7FFF8000) )
    {
      __asan_report_load_n(t, 12LL);
    }
    *(std::tuple_element<1,const std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int> > >::type *)(v2 + 160) = *t;
    schedule_id = std::get<0ul,unsigned int,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int,unsigned int> *)(v2 + 160));
    arena_challenge_id = std::get<1ul,unsigned int,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int,unsigned int> *)(v2 + 160));
    arena_challenge_level = std::get<2ul,unsigned int,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int,unsigned int> *)(v2 + 160));
    p_watcher_config_mgr = &txt_config_mgra->watcher_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(watcher_id);
    }
    watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(p_watcher_config_mgr, *watcher_id);
    if ( watcher_config_ptr )
    {
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      p_new_activity_config_mgr = &txt_config_mgra->new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(watcher_id);
      }
      v15 = *watcher_id;
      ActivityIdByWatcherId = NewActivityExcelConfigMgr::findActivityIdByWatcherId(p_new_activity_config_mgr, v15);
      v17 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
      if ( v17 != 0 && v17 <= 3 )
      {
        LOBYTE(v15) = v17 != 0;
        __asan_report_store4(v2 + 32, v15);
      }
      *(_DWORD *)(v2 + 32) = ActivityIdByWatcherId;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v18 = &txt_config_mgra->new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(schedule_id);
      }
      v21 = (std::tuple_element<0,std::tuple<unsigned int,unsigned int,unsigned int> >::type *)*schedule_id;
      ActivityIdByScheduleId = NewActivityExcelConfigMgr::getActivityIdByScheduleId(v18, (uint32_t)v21);
      v20 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v21) = v20 != 0;
      if ( v20 != 0 && v20 <= 3 )
        __asan_report_store4(v2 + 48, v21);
      *(_DWORD *)(v2 + 48) = ActivityIdByScheduleId;
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 32);
      if ( *(_DWORD *)(v2 + 32) != *(_DWORD *)(v2 + 48) )
      {
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
          "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
          "finalConfig",
          167);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                v22,
                (const char (*)[44])"activity_id not match! watcher_activity_id:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v2 + 32));
        v25 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v24,
                (const char (*)[23])" schedule_activity_id:");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v2 + 48));
        v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v26, (const char (*)[13])" watcher_id:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, watcher_id);
        v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v28, (const char (*)[14])" schedule_id:");
        v21 = schedule_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->trigger_config.trigger_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->trigger_config.trigger_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&watcher_config_ptr->trigger_config.trigger_type);
      }
      if ( watcher_config_ptr->trigger_config.trigger_type != TRIGGER_FINISH_CHALLENGE )
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
          "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
          "finalConfig",
          172);
        v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v31 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v30, (const char (*)[12])"watcher_id:");
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, watcher_id);
        v33 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                v32,
                (const char (*)[54])"'s type is not TRIGGER_FINISH_CHALLENGE! schedule_id:");
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, schedule_id);
        v35 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v34,
                (const char (*)[21])" arena_challenge_id:");
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, arena_challenge_id);
        v37 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v36,
                (const char (*)[24])" arena_challenge_level:");
        v21 = arena_challenge_level;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, arena_challenge_level);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&watcher_config_ptr->progress);
      }
      if ( watcher_config_ptr->progress != 1 )
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
          "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
          "finalConfig",
          177);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v39 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v38, (const char (*)[12])"watcher_id:");
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, watcher_id);
        v41 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                v40,
                (const char (*)[35])"'s progress is not 1! schedule_id:");
        v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, schedule_id);
        v43 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v42,
                (const char (*)[21])" arena_challenge_id:");
        v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, arena_challenge_id);
        v45 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v44,
                (const char (*)[24])" arena_challenge_level:");
        v21 = arena_challenge_level;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, arena_challenge_level);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      v46 = ((v2 + 224) >> 3) + 2147450880;
      *(_WORD *)v46 = 0;
      *(_BYTE *)(v46 + 2) = 4;
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, v21);
      *(_DWORD *)(v2 + 224) = 0;
      v47 = (((_BYTE)v2 - 32 + 4) & 7u) + 3;
      if ( *(_BYTE *)(((v2 + 228) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 32 + 4) & 7) + 3) >= *(_BYTE *)(((v2 + 228) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 228, v47);
      }
      *(_DWORD *)(v2 + 228) = 0;
      if ( *(_BYTE *)(((v2 + 232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 232) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 232, v47);
      *(_DWORD *)(v2 + 232) = 0;
      v48 = (((_BYTE)v2 - 32 + 12) & 7u) + 3;
      if ( *(_BYTE *)(((v2 + 236) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 32 + 12) & 7) + 3) >= *(_BYTE *)(((v2 + 236) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 236, v48);
      }
      *(_DWORD *)(v2 + 236) = 0;
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, v48);
      *(_DWORD *)(v2 + 240) = 0;
      p_param = &watcher_config_ptr->param;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 243) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 19) & 7) >= *(_BYTE *)(((v2 + 243) >> 3) + 0x7FFF8000) )
      {
        p_param = (std::any *)20;
        __asan_report_store_n(v2 + 224, 20LL);
      }
      std::any_cast<FinishChallengeWatcherParam>(&v74, p_param);
      v50 = *(_QWORD *)&v74.challenge_id;
      *(_QWORD *)(v2 + 224) = *(_QWORD *)&v74.dungeon_id;
      *(_QWORD *)(v2 + 232) = v50;
      *(_DWORD *)(v2 + 240) = v74.challenge_index;
      if ( *(_DWORD *)(v2 + 224) || *(_DWORD *)(v2 + 232) )
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
          "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
          "finalConfig",
          193);
        v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v52 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                v51,
                (const char (*)[49])"dungeon_id or challenge_id is not 0, watcher_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, watcher_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgra)->lua_config_mgr;
        if ( *(_BYTE *)(((v2 + 228) >> 3) + 0x7FFF8000) != 0
          && (char)(((v2 - 32 + 4) & 7) + 3) >= *(_BYTE *)(((v2 + 228) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v2 + 228);
        }
        if ( LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, *(_DWORD *)(v2 + 228)) )
        {
          p_related_challenge_map = &thisa->related_challenge_map_;
          *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1024;
          if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 203) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 11) & 7) >= *(_BYTE *)(((v2 + 203) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 192, 12LL);
          }
          std::make_tuple<unsigned int &,unsigned int &,unsigned int &>(
            (unsigned int *)(v2 + 192),
            (unsigned int *)(v2 + 236),
            (unsigned int *)(v2 + 228),
            (unsigned int *)(v2 + 240),
            v54,
            v55);
          v65 = std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int>,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,std::tuple<unsigned int,unsigned int,unsigned int>>>>::emplace<std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int> const&>(
                  p_related_challenge_map,
                  (std::tuple<unsigned int,unsigned int,unsigned int> *)(v2 + 192),
                  t,
                  v63,
                  v64);
          *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -1800;
          if ( !v65.second )
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
              3u,
              "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
              "finalConfig",
              205);
            v66 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                    (common::milog::MiLogStream *const)(v2 + 736),
                    (const char (*)[59])"duplicate (scene_id, group_id, challenge_index)! scene_id:");
            v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v66,
                    (const unsigned int *)(v2 + 236));
            v68 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v67, (const char (*)[11])" group_id:");
            v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v68,
                    (const unsigned int *)(v2 + 228));
            v70 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v69,
                    (const char (*)[13])" watcher_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, watcher_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
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
            "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
            "finalConfig",
            199);
          v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 672),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v57 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  v56,
                  (const char (*)[34])"group config not found! scene_id:");
          v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v57,
                  (const unsigned int *)(v2 + 236));
          v59 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v58, (const char (*)[11])" group_id:");
          v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v59,
                  (const unsigned int *)(v2 + 228));
          v61 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v60, (const char (*)[13])" watcher_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, watcher_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
    }
    else
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
        4u,
        "./src/txt_data_manual/ActivityArenaChallengeExcelConfig.cpp",
        "finalConfig",
        159);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])"watcher_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, watcher_id);
      v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             v8,
             (const char (*)[26])" is invalid! schedule_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, schedule_id);
      v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v10,
              (const char (*)[21])" arena_challenge_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, arena_challenge_id);
      v13 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v12,
              (const char (*)[24])" arena_challenge_level:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, arena_challenge_level);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -1800;
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    v71 = ((v2 + 224) >> 3) + 2147450880;
    *(_WORD *)v71 = -1800;
    *(_BYTE *)(v71 + 2) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int> >,false,false> *const)(v2 + 64));
  }
  v72 = ret;
  if ( v86 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return v72;
};

// Line 214: range 0000000012AAD31E-0000000012AAD758
const data::ActivityArenaChallengeExcelConfig *__fastcall ActivityArenaChallengeExcelConfigMgr::findArenaChallengeConfigByIdAndLevel(
        const ActivityArenaChallengeExcelConfigMgr *const this,
        __int64 schedule_id,
        uint32_t arena_challenge_id,
        uint32_t arena_challenge_level)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>> *p_arena_challenge_config_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>> *v8; // rdx
  bool v9; // al
  const data::ActivityArenaChallengeExcelConfig *result; // rax
  bool v11; // al
  bool v12; // al
  std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> *arena_challenge_level_config_map; // [rsp+20h] [rbp-150h]
  std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> *level_config_map; // [rsp+28h] [rbp-148h]
  char v17[320]; // [rsp+30h] [rbp-140h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 4 15 schedule_id:213 64 4 22 arena_challenge_id:213 80 4 25 arena_challenge_level:213 96 8 "
                        "17 schedule_iter:215 128 8 9 <unknown> 160 8 8 iter:221 192 8 9 <unknown> 224 8 8 jter:227 256 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityArenaChallengeExcelConfigMgr::findArenaChallengeConfigByIdAndLevel;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -202116352;
  *(_DWORD *)(v4 + 48) = schedule_id;
  *(_DWORD *)(v4 + 64) = arena_challenge_id;
  *(_DWORD *)(v4 + 80) = arena_challenge_level;
  p_arena_challenge_config_map = &this->arena_challenge_config_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, schedule_id);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::find(p_arena_challenge_config_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::key_type *)(v4 + 48));
  v8 = &this->arena_challenge_config_map;
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 128, v4 + 48);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::const_iterator *)(v4 + 128) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::end(v8);
  v9 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> >,false> *)(v4 + 96),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> >,false> *)(v4 + 128));
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = 0LL;
  }
  else
  {
    arena_challenge_level_config_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> >,false,false> *const)(v4 + 96))->second;
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 160, v4 + 128);
    *(std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::const_iterator *)(v4 + 160) = std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::find(arena_challenge_level_config_map, (const std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::key_type *)(v4 + 64));
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 192, v4 + 64);
    *(std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::const_iterator *)(v4 + 192) = std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::end(arena_challenge_level_config_map);
    v11 = std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> >,false> *)(v4 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> >,false> *)(v4 + 192));
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v11 )
    {
      result = 0LL;
    }
    else
    {
      level_config_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> >,false,false> *const)(v4 + 160))->second;
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 224, v4 + 192);
      *(std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::const_iterator *)(v4 + 224) = std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::find(level_config_map, (const std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::key_type *)(v4 + 80));
      *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 256, v4 + 80);
      *(std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::const_iterator *)(v4 + 256) = std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::end(level_config_map);
      v12 = std::operator==(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> >::_Self *)(v4 + 224),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> >::_Self *)(v4 + 256));
      *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = -8;
      if ( v12 )
        result = 0LL;
      else
        result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> > *const)(v4 + 224))->second;
    }
  }
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 236: range 0000000012AAD75A-0000000012AADB53
const data::ActivityArenaChallengeExcelConfig *__fastcall ActivityArenaChallengeExcelConfigMgr::findArenaChallengeConfigByWatcherId(
        const ActivityArenaChallengeExcelConfigMgr *const this,
        __int64 watcher_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,std::tuple<unsigned int,unsigned int,unsigned int>> *p_watcher_arena_challenge_map; // rdx
  std::unordered_map<unsigned int,std::tuple<unsigned int,unsigned int,unsigned int>> *v6; // rdx
  bool v7; // al
  const data::ActivityArenaChallengeExcelConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int> >,false,false>::pointer n; // rax
  std::__tuple_element_t_19 *v10; // rax
  uint32_t v11; // ecx
  uint32_t v12; // edi
  std::tuple_element<0,std::tuple<unsigned int,unsigned int,unsigned int> >::type *schedule_id; // [rsp+18h] [rbp-D8h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *arena_challenge_id; // [rsp+20h] [rbp-D0h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *arena_challenge_level; // [rsp+28h] [rbp-C8h]
  char v17[192]; // [rsp+30h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 14 watcher_id:235 64 8 8 iter:237 96 8 9 <unknown> 128 12 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityArenaChallengeExcelConfigMgr::findArenaChallengeConfigByWatcherId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202177536;
  *(_DWORD *)(v2 + 48) = watcher_id;
  p_watcher_arena_challenge_map = &this->watcher_arena_challenge_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, watcher_id);
  *(std::unordered_map<unsigned int,std::tuple<unsigned int,unsigned int,unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::tuple<unsigned int,unsigned int,unsigned int>>::find(p_watcher_arena_challenge_map, (const std::unordered_map<unsigned int,std::tuple<unsigned int,unsigned int,unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->watcher_arena_challenge_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::tuple<unsigned int,unsigned int,unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::tuple<unsigned int,unsigned int,unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1024;
    n = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int> >,false,false> *const)(v2 + 64));
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 139) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 117) & 7) >= *(_BYTE *)(((v2 + 139) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 128, 12LL);
    }
    if ( (((unsigned __int8)n + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&n->second >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&n->second >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&n->second._M_head_impl + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)n + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&n->second._M_head_impl + 3) >> 3)
                                                     + 0x7FFF8000) )
    {
      n = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int,unsigned int> >,false,false>::pointer)__asan_report_load_n(&n->second, 12LL);
    }
    *(std::_Tuple_impl<1,unsigned int,unsigned int> *)(v2 + 128) = n->second.std::_Tuple_impl<1,unsigned int,unsigned int>;
    *(_DWORD *)(v2 + 136) = n->second._M_head_impl;
    schedule_id = std::get<0ul,unsigned int,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int,unsigned int> *)(v2 + 128));
    arena_challenge_id = std::get<1ul,unsigned int,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int,unsigned int> *)(v2 + 128));
    v10 = std::get<2ul,unsigned int,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int,unsigned int> *)(v2 + 128));
    arena_challenge_level = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    v11 = *arena_challenge_level;
    if ( *(_BYTE *)(((unsigned __int64)arena_challenge_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)arena_challenge_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)arena_challenge_id >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(arena_challenge_id);
    }
    v12 = *arena_challenge_id;
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      v12 = (unsigned int)schedule_id;
      __asan_report_load4(schedule_id);
    }
    result = ActivityArenaChallengeExcelConfigMgr::findArenaChallengeConfigByIdAndLevel(this, *schedule_id, v12, v11);
  }
  if ( v17 == (char *)v2 )
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

// Line 248: range 0000000012AADB54-0000000012AADF10
__int64 __fastcall ActivityArenaChallengeExcelConfigMgr::findLevelByChallengeIndex(
        const ActivityArenaChallengeExcelConfigMgr *const this,
        uint32_t scene_id,
        uint32_t group_id,
        uint32_t challenge_index,
        uint32_t *schedule_id,
        uint32_t *arena_challenge_id,
        uint32_t *arena_challenge_level)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int>,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int> > > > *p_related_challenge_map; // rdx
  bool v11; // al
  __int64 result; // rax
  unsigned int *v13; // r8
  unsigned int *v14; // r9
  std::tuple<unsigned int,unsigned int,unsigned int> *p_second; // r14
  unsigned __int64 v16; // rax
  unsigned int *v17; // [rsp+0h] [rbp-160h]
  char v22[304]; // [rsp+30h] [rbp-130h] BYREF

  v7 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(256LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "7 48 4 12 scene_id:247 64 4 12 group_id:247 80 4 19 challenge_index:247 96 8 8 iter:249 128 8 9 "
                        "<unknown> 160 12 9 <unknown> 192 24 9 <unknown>";
  *(_QWORD *)(v7 + 16) = ActivityArenaChallengeExcelConfigMgr::findLevelByChallengeIndex;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -234556924;
  v9[536862723] = -218959360;
  v9[536862724] = -218959360;
  v9[536862725] = -219020288;
  v9[536862726] = -218103808;
  v9[536862727] = -202116109;
  *(_DWORD *)(v7 + 48) = scene_id;
  *(_DWORD *)(v7 + 64) = group_id;
  *(_DWORD *)(v7 + 80) = challenge_index;
  if ( *(char *)(((v7 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v7 + 171) >> 3) + 0x7FFF8000) != 0
    && (char)((v7 - 85) & 7) >= *(_BYTE *)(((v7 + 171) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v7 + 160, 12LL);
  }
  std::make_tuple<unsigned int &,unsigned int &,unsigned int &>(
    (unsigned int *)(v7 + 160),
    (unsigned int *)(v7 + 48),
    (unsigned int *)(v7 + 64),
    (unsigned int *)(v7 + 80),
    schedule_id,
    arena_challenge_id);
  if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7 + 96, v7 + 48);
  *(std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int>,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int> > > >::const_iterator *)(v7 + 96) = std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int>,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,std::tuple<unsigned int,unsigned int,unsigned int>>>>::find(&this->related_challenge_map_, (const std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int>,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int> > > >::key_type *)(v7 + 160));
  *(_WORD *)(((v7 + 160) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = 0;
  p_related_challenge_map = &this->related_challenge_map_;
  if ( *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7 + 128, v7 + 160);
  *(std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int>,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int> > > >::const_iterator *)(v7 + 128) = std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int>,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,std::tuple<unsigned int,unsigned int,unsigned int>>>>::end(p_related_challenge_map);
  v11 = std::__detail::operator==<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,std::tuple<unsigned int,unsigned int,unsigned int>>,true>(
          (const std::__detail::_Node_iterator_base<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int> >,true> *)(v7 + 96),
          (const std::__detail::_Node_iterator_base<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int> >,true> *)(v7 + 128));
  *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v11 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    p_second = &std::__detail::_Node_const_iterator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,std::tuple<unsigned int,unsigned int,unsigned int>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int> >,false,true> *const)(v7 + 96))->second;
    v16 = ((v7 + 192) >> 3) + 2147450880;
    *(_WORD *)v16 = 0;
    *(_BYTE *)(v16 + 2) = 0;
    if ( *(char *)(((v7 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v7 + 215) >> 3) + 0x7FFF8000) != 0
      && (char)((v7 - 64 + 23) & 7) >= *(_BYTE *)(((v7 + 215) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v7 + 192, 24LL);
    }
    std::tie<unsigned int,unsigned int,unsigned int>(
      (std::tuple<unsigned int&,unsigned int&,unsigned int&> *)(v7 + 192),
      schedule_id,
      arena_challenge_id,
      arena_challenge_level,
      v13,
      v14,
      v17);
    std::tuple<unsigned int &,unsigned int &,unsigned int &>::operator=<unsigned int,unsigned int,unsigned int>(
      (std::tuple<unsigned int&,unsigned int&,unsigned int&> *const)(v7 + 192),
      p_second);
    result = 0LL;
  }
  if ( v22 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 259: range 0000000012AADF12-0000000012AAE1FE
const std::vector<unsigned int> *__fastcall ActivityArenaChallengeExcelConfigMgr::findNormalChallengeWatcherList(
        const ActivityArenaChallengeExcelConfigMgr *const this,
        __int64 schedule_id,
        uint32_t arena_challenge_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>> *p_normal_challenge_watcher_list_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>> *v7; // rdx
  bool v8; // al
  const std::vector<unsigned int> *result; // rax
  bool v10; // al
  std::unordered_map<unsigned int,std::vector<unsigned int>> *challenge_watcher_list_map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 15 schedule_id:258 48 4 22 arena_challenge_id:258 64 8 17 schedule_iter:260 96 8 9 <unkno"
                        "wn> 128 8 21 watcher_list_iter:266 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityArenaChallengeExcelConfigMgr::findNormalChallengeWatcherList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = schedule_id;
  *(_DWORD *)(v3 + 48) = arena_challenge_id;
  p_normal_challenge_watcher_list_map = &this->normal_challenge_watcher_list_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, schedule_id);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::find(p_normal_challenge_watcher_list_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::key_type *)(v3 + 32));
  v7 = &this->normal_challenge_watcher_list_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    challenge_watcher_list_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false,false> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                                  challenge_watcher_list_map,
                                                                                                  (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(challenge_watcher_list_map);
    v10 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
      result = 0LL;
    else
      result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 128))->second;
  }
  if ( v13 == (char *)v3 )
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
