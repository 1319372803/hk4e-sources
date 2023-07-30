// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityDuelHeartExcelConfig.cpp

// Line 20: range 0000000012AFBBFE-0000000012AFBE09
int32_t __cdecl ActivityDuelHeartExcelConfigMgr::checkConfig(
        ActivityDuelHeartExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = ActivityDuelHeartExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityDuelHeartExcelConfigMgr::checkLevelConfig(this, txt_config_mgr)
    || ActivityDuelHeartExcelConfigMgr::checkDifficultyConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityDuelHeartExcelConfig.cpp",
      "checkConfig",
      23);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v6,
      (const char (*)[36])"checkActivityDuelHeartConfig failed");
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

// Line 30: range 0000000012AFBE0A-0000000012AFC015
int32_t __cdecl ActivityDuelHeartExcelConfigMgr::rewriteConfig(
        ActivityDuelHeartExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = ActivityDuelHeartExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityDuelHeartExcelConfigMgr::rewriteLevelConfig(this, txt_config_mgr)
    || ActivityDuelHeartExcelConfigMgr::rewriteDifficultyConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityDuelHeartExcelConfig.cpp",
      "rewriteConfig",
      33);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v6,
      (const char (*)[38])"rewriteActivityDuelHeartConfig failed");
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

// Line 40: range 0000000012AFC016-0000000012AFCEE1
int32_t __cdecl ActivityDuelHeartExcelConfigMgr::checkLevelConfig(
        const ActivityDuelHeartExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  uint32_t *p_dungeon_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int SceneIdByGroupId; // ecx
  char v15; // al
  __int64 group_id; // rsi
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v19; // rax
  TrialAvatarExcelConfigMgr *p_trial_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  uint32_t avatar_id; // r14d
  uint32_t v24; // r14d
  char v25; // al
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  int32_t result; // eax
  LuaConfigMgr *lua_config_mgr; // [rsp+18h] [rbp-2A8h]
  data::ActivityDuelHeartLevelExcelConfigMap *__for_range; // [rsp+20h] [rbp-2A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig>,false,false>::reference v32; // [rsp+28h] [rbp-298h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig> >::type *level_config; // [rsp+38h] [rbp-288h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+40h] [rbp-280h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-268h]
  const unsigned int *trial_avatar_id; // [rsp+60h] [rbp-260h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+68h] [rbp-258h]
  char v38[592]; // [rsp+70h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 8 14 __for_begin:44 64 8 12 __for_end:44 96 8 14 __for_begin:73 128 8 12 __for_end:73 160 "
                        "32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityDuelHeartExcelConfigMgr::checkLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->activity_duel_heart_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityDuelHeartLevelExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityDuelHeartLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityDuelHeartLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityDuelHeartLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    v32 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::ActivityDuelHeartLevelExcelConfig>(v32);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityDuelHeartLevelExcelConfig>(v32);
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    p_dungeon_id = &level_config->dungeon_id;
    if ( *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_dungeon_id);
    }
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           p_dungeon_config_mgr,
                           level_config->dungeon_id);
    if ( dungeon_config_ptr )
    {
      p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&level_config->gallery_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->gallery_id >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&level_config->gallery_id);
      }
      if ( data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, level_config->gallery_id) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&level_config->group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&level_config->group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&level_config->group_id);
        }
        if ( LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, level_config->group_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&level_config->group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&level_config->group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&level_config->group_id);
          }
          group_id = level_config->group_id;
          SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, group_id);
          v15 = *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->scene_id >> 3) + 0x7FFF8000);
          LOBYTE(group_id) = v15 != 0;
          if ( v15 != 0 && v15 <= 3 )
            __asan_report_load4(&dungeon_config_ptr->scene_id);
          if ( SceneIdByGroupId == dungeon_config_ptr->scene_id )
          {
            __for_range_0 = &level_config->trial_avatar_id_list;
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 96, group_id);
            *(std::vector<unsigned int>::const_iterator *)(v2 + 96) = std::vector<unsigned int>::begin(__for_range_0);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 128, group_id);
            *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::end(__for_range_0);
            while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 96),
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128)) )
            {
              v19 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
              trial_avatar_id = v19;
              p_trial_avatar_config_mgr = &txt_config_mgr->trial_avatar_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v19);
              }
              trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                          p_trial_avatar_config_mgr,
                                          *trial_avatar_id);
              if ( trial_avatar_config_ptr )
              {
                if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&trial_avatar_config_ptr->avatar.avatar_id);
                }
                avatar_id = trial_avatar_config_ptr->avatar.avatar_id;
                if ( avatar_id == ConstValueExcelConfigMgr::getPlayerMaleAvatarId(&txt_config_mgr->const_value_config_mgr) )
                  goto LABEL_55;
                if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&trial_avatar_config_ptr->avatar.avatar_id);
                }
                v24 = trial_avatar_config_ptr->avatar.avatar_id;
                if ( v24 == ConstValueExcelConfigMgr::getPlayerFemaleAvatarId(&txt_config_mgr->const_value_config_mgr) )
LABEL_55:
                  v25 = 0;
                else
                  v25 = 1;
                if ( v25 )
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
                    "./src/txt_data_manual/ActivityDuelHeartExcelConfig.cpp",
                    "checkLevelConfig",
                    85);
                  v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 480),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v27 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                          v26,
                          (const char (*)[43])byte_1AA2C200);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, trial_avatar_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
                  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
                }
              }
              else
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
                  "./src/txt_data_manual/ActivityDuelHeartExcelConfig.cpp",
                  "checkLevelConfig",
                  78);
                v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 416),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v22 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                        v21,
                        (const char (*)[46])byte_1AA2C1A0);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, trial_avatar_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
                *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
              }
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
            }
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          }
          else
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
              "./src/txt_data_manual/ActivityDuelHeartExcelConfig.cpp",
              "checkLevelConfig",
              69);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                    v17,
                    (const char (*)[65])byte_1AA2C120);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &level_config->group_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
            *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
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
            "./src/txt_data_manual/ActivityDuelHeartExcelConfig.cpp",
            "checkLevelConfig",
            63);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v12, (const char (*)[39])byte_1AA2C0C0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &level_config->group_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
          *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
      {
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
          "./src/txt_data_manual/ActivityDuelHeartExcelConfig.cpp",
          "checkLevelConfig",
          56);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v10, (const char (*)[41])byte_1AA2C060);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &level_config->gallery_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
    {
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
        "./src/txt_data_manual/ActivityDuelHeartExcelConfig.cpp",
        "checkLevelConfig",
        49);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v7, (const char (*)[40])byte_1AA2C000);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &level_config->dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
  if ( v38 == (char *)v2 )
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

// Line 96: range 0000000012AFCEE2-0000000012AFCEF4
int32_t __cdecl ActivityDuelHeartExcelConfigMgr::checkDifficultyConfig(
        const ActivityDuelHeartExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 102: range 0000000012AFCEF6-0000000012AFCF08
int32_t __cdecl ActivityDuelHeartExcelConfigMgr::rewriteLevelConfig(
        ActivityDuelHeartExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 107: range 0000000012AFCF0A-0000000012AFD462
int32_t __cdecl ActivityDuelHeartExcelConfigMgr::rewriteDifficultyConfig(
        ActivityDuelHeartExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActivityDuelHeartExcelConfigMgr *v5; // rcx
  uint32_t *p_level_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::set<data::DuelHeartDifficultyType> *v9; // rax
  std::pair<std::_Rb_tree_const_iterator<data::DuelHeartDifficultyType>,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  data::ActivityDuelHeartDifficultyExcelConfigMap *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDuelHeartDifficultyExcelConfig>,false,false>::reference v15; // [rsp+28h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityDuelHeartDifficultyExcelConfig> >::type *difficulty_id; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityDuelHeartDifficultyExcelConfig> >::type *difficulty_config; // [rsp+38h] [rbp-108h]
  char v18[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:109 64 8 13 __for_end:109 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityDuelHeartExcelConfigMgr::rewriteDifficultyConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  __for_range = &this->activity_duel_heart_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityDuelHeartDifficultyExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityDuelHeartDifficultyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityDuelHeartDifficultyExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityDuelHeartDifficultyExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityDuelHeartDifficultyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityDuelHeartDifficultyExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityDuelHeartDifficultyExcelConfig>,false> *)(v2 + 64)) )
  {
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDuelHeartDifficultyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDuelHeartDifficultyExcelConfig>,false,false> *const)(v2 + 32));
    difficulty_id = std::get<0ul,unsigned int const,data::ActivityDuelHeartDifficultyExcelConfig>(v15);
    difficulty_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityDuelHeartDifficultyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityDuelHeartDifficultyExcelConfig>(v15);
    v5 = this;
    p_level_id = &difficulty_config->level_id;
    if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_level_id);
    }
    if ( data::ActivityDuelHeartConfigMgrBase::findActivityDuelHeartLevelExcelConfig(v5, difficulty_config->level_id) )
    {
      v9 = std::map<unsigned int,std::set<data::DuelHeartDifficultyType>>::operator[](
             &this->level_difficulty_set_map_,
             &difficulty_config->level_id);
      v10 = std::set<data::DuelHeartDifficultyType>::emplace<data::DuelHeartDifficultyType const&>(
              v9,
              &difficulty_config->difficulty,
              (const data::DuelHeartDifficultyType *)v9);
      if ( !v10.second )
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
          "./src/txt_data_manual/ActivityDuelHeartExcelConfig.cpp",
          "rewriteDifficultyConfig",
          119);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v11, (const char (*)[31])byte_1AA2C360);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, difficulty_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityDuelHeartExcelConfig.cpp",
        "rewriteDifficultyConfig",
        113);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v7, (const char (*)[40])byte_1AA2C300);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &difficulty_config->level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDuelHeartDifficultyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDuelHeartDifficultyExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
  if ( v18 == (char *)v2 )
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

// Line 128: range 0000000012AFD464-0000000012AFD681
const std::set<data::DuelHeartDifficultyType> *__fastcall ActivityDuelHeartExcelConfigMgr::getLevelDifficultySet(
        const ActivityDuelHeartExcelConfigMgr *const this,
        std::set<data::DuelHeartDifficultyType> *level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::set<data::DuelHeartDifficultyType>> *p_level_difficulty_set_map; // rdx
  std::map<unsigned int,std::set<data::DuelHeartDifficultyType>> *v6; // rdx
  bool v7; // al
  const std::set<data::DuelHeartDifficultyType> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 level_id:127 64 8 8 iter:130 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityDuelHeartExcelConfigMgr::getLevelDifficultySet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)level_id;
  if ( !(_BYTE)`guard variable for'ActivityDuelHeartExcelConfigMgr::getLevelDifficultySet(unsigned int)::empty_set
    && __cxa_guard_acquire(&`guard variable for'ActivityDuelHeartExcelConfigMgr::getLevelDifficultySet(unsigned int)::empty_set) )
  {
    std::set<data::DuelHeartDifficultyType>::set(&ActivityDuelHeartExcelConfigMgr::getLevelDifficultySet(unsigned int)const::empty_set);
    __cxa_guard_release(&`guard variable for'ActivityDuelHeartExcelConfigMgr::getLevelDifficultySet(unsigned int)::empty_set);
    level_id = &ActivityDuelHeartExcelConfigMgr::getLevelDifficultySet(unsigned int)const::empty_set;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::set<data::DuelHeartDifficultyType>::~set,
      &ActivityDuelHeartExcelConfigMgr::getLevelDifficultySet(unsigned int)const::empty_set,
      &_dso_handle);
  }
  p_level_difficulty_set_map = &this->level_difficulty_set_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::map<unsigned int,std::set<data::DuelHeartDifficultyType>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::set<data::DuelHeartDifficultyType>>::find(
                                                                                                   p_level_difficulty_set_map,
                                                                                                   (const std::map<unsigned int,std::set<data::DuelHeartDifficultyType>>::key_type *)(v2 + 48));
  v6 = &this->level_difficulty_set_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::set<data::DuelHeartDifficultyType>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::set<data::DuelHeartDifficultyType>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<data::DuelHeartDifficultyType> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<data::DuelHeartDifficultyType> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &ActivityDuelHeartExcelConfigMgr::getLevelDifficultySet(unsigned int)const::empty_set;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<data::DuelHeartDifficultyType>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<data::DuelHeartDifficultyType> > > *const)(v2 + 64))->second;
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
