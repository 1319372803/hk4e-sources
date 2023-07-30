// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/PlayerExcelConfig.cpp

// Line 19: range 000000001462DDC4-000000001462DE43
int32_t __cdecl PlayerExcelConfigMgr::checkConfig(PlayerExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  if ( PlayerExcelConfigMgr::checkRewardId(this, txt_config_mgr) )
    return -1;
  if ( PlayerExcelConfigMgr::checkTriggerQuest(this, txt_config_mgr) )
    return -1;
  if ( PlayerExcelConfigMgr::checkLevelLock(this, txt_config_mgr) )
    return -1;
  return 0;
};

// Line 39: range 000000001462DE44-000000001462EED1
int32_t __cdecl PlayerExcelConfigMgr::rewriteConfig(PlayerExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  uint32_t player_max_level; // ecx
  uint32_t expedition_limit_add; // r15d
  uint32_t *v9; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  uint32_t *v11; // rdx
  char v12; // cl
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  uint32_t v15; // ecx
  char v16; // al
  std::map<unsigned int,unsigned int> *p_player_level_to_expedition_limit_add_map; // rcx
  __int64 v18; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v19; // rax
  int *v20; // rdx
  int v21; // r15d
  std::map<unsigned int,unsigned int>::mapped_type *v22; // rax
  char v23; // cl
  char *v24; // rsi
  data::PlayerLevelExcelConfigMap *p_player_level_excel_config_map; // rdx
  data::PlayerLevelExcelConfigMap *v26; // rdx
  bool v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // edx
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false,false>::pointer v31; // rax
  uint64_t *p_total_exp; // rax
  int v33; // edx
  const unsigned int *v34; // r8
  uint32_t *p_unlock_main_quest_id; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v36; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v42; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  std::pair<unsigned int,unsigned int> *M_current; // rbx
  std::vector<std::pair<unsigned int,unsigned int>>::iterator v49; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-284h]
  uint64_t total_exp; // [rsp+30h] [rbp-280h]
  data::PlayerLevelExcelConfigMap *__for_range; // [rsp+38h] [rbp-278h]
  data::PlayerLevelExcelConfig *player_level_config_0; // [rsp+40h] [rbp-270h]
  data::PlayerLevelLockExcelConfigMap *__for_range_0; // [rsp+48h] [rbp-268h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false>::reference v56; // [rsp+50h] [rbp-260h]
  std::tuple_element<0,std::pair<unsigned int const,data::PlayerLevelLockExcelConfig> >::type *world_level; // [rsp+58h] [rbp-258h]
  std::tuple_element<1,const std::pair<unsigned int const,data::PlayerLevelLockExcelConfig> >::type *level_lock_config; // [rsp+60h] [rbp-250h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false,false>::reference v59; // [rsp+68h] [rbp-248h]
  uint32_t *level; // [rsp+70h] [rbp-240h]
  std::tuple_element<1,const std::pair<unsigned int const,data::PlayerLevelExcelConfig> >::type *player_level_config; // [rsp+78h] [rbp-238h]
  char v62[560]; // [rsp+80h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 4 8 level:54 48 4 9 <unknown> 64 8 14 __for_begin:40 96 8 12 __for_end:40 128 8 7 iter:57 "
                        "160 8 9 <unknown> 192 8 14 __for_begin:69 224 8 12 __for_end:69 256 32 9 <unknown> 320 32 9 <unk"
                        "nown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = PlayerExcelConfigMgr::rewriteConfig;
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
  __for_range = &this->player_level_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false> *)(v3 + 96)) )
      break;
    v59 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false,false> *const)(v3 + 64));
    level = std::get<0ul,unsigned int const,data::PlayerLevelExcelConfig>(v59);
    player_level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::PlayerLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::PlayerLevelExcelConfig>(v59);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_max_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->player_max_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->player_max_level);
    }
    player_max_level = this->player_max_level;
    if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(level);
    }
    if ( player_max_level < *level )
      this->player_max_level = *level;
    if ( *(_BYTE *)(((unsigned __int64)&player_level_config->expedition_limit_add >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)player_level_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_level_config->expedition_limit_add >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&player_level_config->expedition_limit_add);
    }
    expedition_limit_add = player_level_config->expedition_limit_add;
    v9 = level;
    v10 = std::map<unsigned int,unsigned int>::operator[](&this->player_level_to_expedition_limit_add_map_, level);
    v11 = v10;
    v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
    {
      LOBYTE(v9) = v12 != 0;
      __asan_report_store4(v10, v9);
    }
    *v11 = expedition_limit_add;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false,false> *const)(v3 + 64));
  }
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->player_max_level);
  }
  if ( this->player_max_level <= 0xF4240 )
  {
    total_exp = 0LL;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32, v6);
    for ( *(_DWORD *)(v3 + 32) = 1; ; ++*(_DWORD *)(v3 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_max_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->player_max_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->player_max_level);
      }
      v15 = this->player_max_level;
      v16 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v16 != 0;
      if ( v16 != 0 && v16 <= 3 )
        __asan_report_load4(v3 + 32);
      if ( v15 < *(_DWORD *)(v3 + 32) )
        break;
      p_player_level_to_expedition_limit_add_map = &this->player_level_to_expedition_limit_add_map_;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v18 = (unsigned int)(*(_DWORD *)(v3 + 32) - 1);
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 48, v18);
      *(_DWORD *)(v3 + 48) = v18;
      v19 = std::map<unsigned int,unsigned int>::operator[](
              p_player_level_to_expedition_limit_add_map,
              (std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      v20 = (int *)v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      v21 = *v20;
      v24 = (char *)(v3 + 32);
      v22 = std::map<unsigned int,unsigned int>::operator[](
              &this->player_level_to_expedition_limit_add_map_,
              (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
      v23 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
      LOBYTE(v24) = v23 != 0;
      if ( v23 != 0 && (char)(((unsigned __int8)v22 & 7) + 3) >= v23 )
        __asan_report_load4(v22);
      *v22 += v21;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      p_player_level_excel_config_map = &this->player_level_excel_config_map;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v24);
      *(std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::find(
                                                                                                 p_player_level_excel_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::key_type *)(v3 + 32));
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      v26 = &this->player_level_excel_config_map;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v3 + 32);
      *(std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::end(v26);
      v27 = std::__detail::operator==<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false> *)(v3 + 128),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false> *)(v3 + 160));
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v27 )
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
          "./src/txt_data_manual/PlayerExcelConfig.cpp",
          "rewriteConfig",
          60);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                v28,
                (const char (*)[38])"player level config not found! level:");
        v6 = (char *)(v3 + 32);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v30 = 0;
      }
      else
      {
        v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false,false> *const)(v3 + 128));
        player_level_config_0 = &v31->second;
        p_total_exp = &v31->second.total_exp;
        if ( *(_BYTE *)(((unsigned __int64)p_total_exp >> 3) + 0x7FFF8000) )
          __asan_report_store8(p_total_exp, v3 + 160);
        player_level_config_0->total_exp = total_exp;
        v6 = (char *)((((_BYTE)player_level_config_0 + 12) & 7u) + 3);
        if ( *(_BYTE *)(((unsigned __int64)&player_level_config_0->exp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)player_level_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_level_config_0->exp >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&player_level_config_0->exp);
        }
        total_exp += player_level_config_0->exp;
        v30 = 1;
      }
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( v30 != 1 )
      {
        v33 = 0;
        goto LABEL_60;
      }
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
    }
    v33 = 1;
LABEL_60:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v33 == 1 )
    {
      ret = 0;
      __for_range_0 = &this->player_level_lock_excel_config_map;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v6);
      *(std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v6);
      *(std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::end(__for_range_0);
      while ( std::__detail::operator!=<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false> *)(v3 + 192),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false> *)(v3 + 224)) )
      {
        v56 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false> *const)(v3 + 192));
        world_level = std::get<0ul,unsigned int const,data::PlayerLevelLockExcelConfig>(v56);
        level_lock_config = (std::tuple_element<1,const std::pair<unsigned int const,data::PlayerLevelLockExcelConfig> >::type *)std::get<1ul,unsigned int const,data::PlayerLevelLockExcelConfig>(v56);
        p_unlock_main_quest_id = &level_lock_config->unlock_main_quest_id;
        if ( *(_BYTE *)(((unsigned __int64)p_unlock_main_quest_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_unlock_main_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_unlock_main_quest_id >> 3)
                                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(p_unlock_main_quest_id);
        }
        if ( level_lock_config->unlock_main_quest_id )
        {
          v36 = std::unordered_set<unsigned int>::insert(
                  &this->unlock_parent_quest_set_,
                  &level_lock_config->unlock_main_quest_id);
          if ( !v36.second )
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
              "./src/txt_data_manual/PlayerExcelConfig.cpp",
              "rewriteConfig",
              73);
            v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v39 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v38,
                    (const char (*)[19])byte_1ADC7D00);
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    &level_lock_config->unlock_main_quest_id);
            v41 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v40,
                    (const char (*)[14])" world_level:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, world_level);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
            *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        if ( *(_BYTE *)(((unsigned __int64)&level_lock_config->unlock_player_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&level_lock_config->unlock_player_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&level_lock_config->unlock_player_level);
        }
        if ( level_lock_config->unlock_player_level )
        {
          v42 = std::unordered_set<unsigned int>::insert(
                  &this->unlock_player_level_set_,
                  &level_lock_config->unlock_player_level);
          if ( !v42.second )
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
              "./src/txt_data_manual/PlayerExcelConfig.cpp",
              "rewriteConfig",
              78);
            v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 448),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v45 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v44,
                    (const char (*)[22])byte_1ADC7D80);
            v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v45,
                    &level_lock_config->unlock_player_level);
            v47 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v46,
                    (const char (*)[14])" world_level:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, world_level);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
            *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<unsigned int const&,unsigned int const&>(
          &this->player_level_limit_vec_,
          &level_lock_config->player_level_upper_limit,
          world_level,
          (const unsigned int *)&this->player_level_limit_vec_,
          v34);
        std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false> *const)(v3 + 192));
      }
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(&this->player_level_limit_vec_)._M_current;
      v49._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin(&this->player_level_limit_vec_)._M_current;
      std::sort<__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>>(
        v49,
        (__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >)M_current);
      v2 = ret;
    }
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
      "./src/txt_data_manual/PlayerExcelConfig.cpp",
      "rewriteConfig",
      50);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v13, (const char (*)[18])"player_max_level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->player_max_level);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    v2 = -1;
  }
  result = v2;
  if ( v62 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
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

// Line 88: range 000000001462EED2-000000001462EF19
uint32_t __cdecl PlayerExcelConfigMgr::getPlayerMaxLevel(const PlayerExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->player_max_level);
  }
  return this->player_max_level;
};

// Line 93: range 000000001462EF1A-000000001462F21C
uint64_t __cdecl PlayerExcelConfigMgr::getPlayerMaxTotalExp(const PlayerExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  data::PlayerLevelExcelConfigMap *p_player_level_excel_config_map; // rdx
  uint32_t *p_player_max_level; // rcx
  __int64 v6; // rsi
  uint32_t *v7; // rsi
  data::PlayerLevelExcelConfigMap *v8; // rdx
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint64_t result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false,false>::pointer v13; // rax
  char v14[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 7 iter:94 64 8 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = PlayerExcelConfigMgr::getPlayerMaxTotalExp;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -218959360;
  v3[536862724] = -202116109;
  p_player_level_excel_config_map = &this->player_level_excel_config_map;
  p_player_max_level = &this->player_max_level;
  v6 = *(unsigned __int8 *)(((v1 + 32) >> 3) + 0x7FFF8000);
  if ( (_BYTE)v6 )
    __asan_report_store8(v1 + 32, v6);
  v7 = p_player_max_level;
  *(std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::const_iterator *)(v1 + 32) = std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::find(
                                                                                                  p_player_level_excel_config_map,
                                                                                                  p_player_max_level);
  v8 = &this->player_level_excel_config_map;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v1 + 64, v7);
  *(std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::const_iterator *)(v1 + 64) = std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::end(v8);
  v9 = std::__detail::operator==<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false> *)(v1 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false> *)(v1 + 64));
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/PlayerExcelConfig.cpp",
      "getPlayerMaxTotalExp",
      97);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v1 + 96),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v11 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            v10,
            (const char (*)[49])"player level config not found! player_max_level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->player_max_level);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 96));
    result = 0LL;
  }
  else
  {
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v13->second.total_exp >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v13->second.total_exp);
    result = v13->second.total_exp;
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 104: range 000000001462F21E-000000001462F62E
int32_t __cdecl PlayerExcelConfigMgr::checkRewardId(
        const PlayerExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  int32_t result; // eax
  data::PlayerLevelExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false,false>::reference v11; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::PlayerLevelExcelConfig> >::type *level; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::PlayerLevelExcelConfig> >::type *player_level_config; // [rsp+28h] [rbp-D8h]
  char v14[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:105 64 8 13 __for_end:105 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = PlayerExcelConfigMgr::checkRewardId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->player_level_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::PlayerLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_24;
    }
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false,false> *const)(v3 + 32));
    level = std::get<0ul,unsigned int const,data::PlayerLevelExcelConfig>(v11);
    player_level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::PlayerLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::PlayerLevelExcelConfig>(v11);
    if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(level);
    }
    if ( *level != 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&player_level_config->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&player_level_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&player_level_config->reward_id);
      }
      if ( player_level_config->reward_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&player_level_config->reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&player_level_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&player_level_config->reward_id);
        }
        if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                                txt_config_mgr,
                                player_level_config->reward_id,
                                ITEM_LIMIT_PLAYER_LEVEL_UPGRADE) != 1 )
          break;
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/PlayerExcelConfig.cpp",
    "checkRewardId",
    114);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v6, (const char (*)[38])byte_1ADC7F40);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &player_level_config->reward_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v8 = 0;
LABEL_24:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v14 == (char *)v3 )
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

// Line 124: range 000000001462F630-000000001462F642
int32_t __cdecl PlayerExcelConfigMgr::checkTriggerQuest(
        const PlayerExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 130: range 000000001462F644-0000000014630514
int32_t __cdecl PlayerExcelConfigMgr::checkLevelLock(
        const PlayerExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::size_type v7; // r15
  data::PlayerLevelLockExcelConfigMap *p_player_level_lock_excel_config_map; // rdx
  data::PlayerLevelLockExcelConfigMap *v9; // rdx
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false>::pointer v14; // rdx
  uint32_t *p_player_level_upper_limit; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false>::pointer v18; // rdx
  char v19; // cl
  uint32_t *p_unlock_main_quest_id; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  uint32_t unlock_player_level; // ecx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  const TxtConfigMgr *txt_config_mgra; // [rsp+0h] [rbp-2B0h]
  int32_t ret; // [rsp+18h] [rbp-298h]
  uint32_t prev_level_limit; // [rsp+1Ch] [rbp-294h]
  data::PlayerLevelLockExcelConfigMap *__for_range; // [rsp+20h] [rbp-290h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false>::reference v38; // [rsp+28h] [rbp-288h]
  std::tuple_element<0,std::pair<unsigned int const,data::PlayerLevelLockExcelConfig> >::type *world_level; // [rsp+30h] [rbp-280h]
  std::tuple_element<1,const std::pair<unsigned int const,data::PlayerLevelLockExcelConfig> >::type *config; // [rsp+38h] [rbp-278h]
  char v41[624]; // [rsp+40h] [rbp-270h] BYREF

  txt_config_mgra = txt_config_mgr;
  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 4 15 world_level:139 64 8 8 iter:141 96 8 9 <unknown> 128 8 15 __for_begin:156 160 8 13 __"
                        "for_end:156 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9"
                        " <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = PlayerExcelConfigMgr::checkLevelLock;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  if ( std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::empty(&this->player_level_lock_excel_config_map) )
  {
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/PlayerExcelConfig.cpp",
      "checkLevelLock",
      133);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v5, (const char (*)[31])byte_1ADC80C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = -1;
  }
  else
  {
    ret = 0;
    prev_level_limit = 0;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, txt_config_mgr);
    for ( *(_DWORD *)(v2 + 48) = 0; ; ++*(_DWORD *)(v2 + 48) )
    {
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      v7 = *(unsigned int *)(v2 + 48);
      if ( v7 >= std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::size(&this->player_level_lock_excel_config_map) )
        break;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      p_player_level_lock_excel_config_map = &this->player_level_lock_excel_config_map;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 64, txt_config_mgr);
      *(std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::find(p_player_level_lock_excel_config_map, (const std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::key_type *)(v2 + 48));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      v9 = &this->player_level_lock_excel_config_map;
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 96, v2 + 48);
      *(std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::end(v9);
      txt_config_mgr = (const TxtConfigMgr *)(v2 + 96);
      v10 = std::__detail::operator==<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false> *)(v2 + 64),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false> *)(v2 + 96));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/PlayerExcelConfig.cpp",
          "checkLevelLock",
          144);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v11, (const char (*)[39])byte_1ADC8100);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        txt_config_mgr = (const TxtConfigMgr *)byte_1ADC8160;
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])byte_1ADC8160);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false> *const)(v2 + 64));
        p_player_level_upper_limit = &v14->second.player_level_upper_limit;
        if ( *(_BYTE *)(((unsigned __int64)p_player_level_upper_limit >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_player_level_upper_limit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_player_level_upper_limit >> 3)
                                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(p_player_level_upper_limit);
        }
        if ( prev_level_limit >= v14->second.player_level_upper_limit )
        {
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 320, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 320),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/PlayerExcelConfig.cpp",
            "checkLevelLock",
            150);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v16, (const char (*)[61])byte_1ADC81A0);
          txt_config_mgr = (const TxtConfigMgr *)(v2 + 48);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false> *const)(v2 + 64));
        v19 = *(_BYTE *)(((unsigned __int64)&v18->second.player_level_upper_limit >> 3) + 0x7FFF8000);
        LOBYTE(txt_config_mgr) = v19 != 0;
        if ( v19 != 0 && (char)((((_BYTE)v18 + 28) & 7) + 3) >= v19 )
          __asan_report_load4(&v18->second.player_level_upper_limit);
        prev_level_limit = v18->second.player_level_upper_limit;
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    __for_range = &this->player_level_lock_excel_config_map;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::begin(__for_range);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::const_iterator *)(v2 + 160) = std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::end(__for_range);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false> *)(v2 + 128),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false> *)(v2 + 160)) )
    {
      v38 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false> *const)(v2 + 128));
      world_level = std::get<0ul,unsigned int const,data::PlayerLevelLockExcelConfig>(v38);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::PlayerLevelLockExcelConfig> >::type *)std::get<1ul,unsigned int const,data::PlayerLevelLockExcelConfig>(v38);
      p_unlock_main_quest_id = &config->unlock_main_quest_id;
      if ( *(_BYTE *)(((unsigned __int64)p_unlock_main_quest_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_unlock_main_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_unlock_main_quest_id >> 3)
                                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(p_unlock_main_quest_id);
      }
      if ( config->unlock_main_quest_id
        && !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(
              &txt_config_mgra->quest_config_mgr,
              config->unlock_main_quest_id) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/PlayerExcelConfig.cpp",
          "checkLevelLock",
          160);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v22, (const char (*)[44])byte_1ADC8200);
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &config->unlock_main_quest_id);
        v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v24, (const char (*)[14])" world_level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, world_level);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->unlock_player_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->unlock_player_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->unlock_player_level);
      }
      if ( config->unlock_player_level
        && !data::PlayerExcelConfigMgrBase::findPlayerLevelExcelConfig(this, config->unlock_player_level) )
      {
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/PlayerExcelConfig.cpp",
          "checkLevelLock",
          165);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                v27,
                (const char (*)[46])"findPlayerLevelExcelConfig fail, PlayerLevel:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &config->unlock_player_level);
        v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v29, (const char (*)[14])" world_level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, world_level);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->unlock_player_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->unlock_player_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->unlock_player_level);
      }
      unlock_player_level = config->unlock_player_level;
      if ( *(_BYTE *)(((unsigned __int64)&config->player_level_upper_limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->player_level_upper_limit >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->player_level_upper_limit);
      }
      if ( unlock_player_level > config->player_level_upper_limit )
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/PlayerExcelConfig.cpp",
          "checkLevelLock",
          171);
        v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v33 = common::milog::MiLogStream::operator<<<char [93],(char *[93])0>(v32, (const char (*)[93])byte_1ADC82C0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, world_level);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false> *const)(v2 + 128));
    }
    result = ret;
  }
  if ( v41 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
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
  }
  return result;
};

// Line 179: range 0000000014630516-0000000014630711
__int64 __fastcall PlayerExcelConfigMgr::getExpeditionLimitAddByPlayerLevel(
        const PlayerExcelConfigMgr *const this,
        __int64 level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_player_level_to_expedition_limit_add_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 level:178 64 8 6 it:180 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = PlayerExcelConfigMgr::getExpeditionLimitAddByPlayerLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level;
  p_player_level_to_expedition_limit_add_map = &this->player_level_to_expedition_limit_add_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_player_level_to_expedition_limit_add_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->player_level_to_expedition_limit_add_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  else
  {
    result = 0LL;
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

// Line 190: range 0000000014630712-0000000014630D02
__int64 __fastcall PlayerExcelConfigMgr::findWorldLevelByPlayerLevel(
        const PlayerExcelConfigMgr *const this,
        __int64 player_level,
        unsigned __int64 world_level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::pair<unsigned int,unsigned int> *M_current; // r14
  const std::pair<unsigned int,unsigned int> *v7; // rcx
  std::vector<std::pair<unsigned int,unsigned int>> *p_player_level_limit_vec; // rdx
  char *v9; // rsi
  bool v10; // al
  std::vector<std::pair<unsigned int,unsigned int>> *v11; // rdx
  bool v12; // al
  std::vector<std::pair<unsigned int,unsigned int>> *v13; // rdx
  bool v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  __int64 result; // rax
  __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >::pointer v19; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v22; // dl
  char v24[336]; // [rsp+20h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 9 <unknown> 48 4 16 player_level:189 64 8 8 iter:191 96 8 9 <unknown> 128 8 9 <unknown> 1"
                        "60 8 9 <unknown> 192 8 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = PlayerExcelConfigMgr::findWorldLevelByPlayerLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 48) = player_level;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 32, player_level);
  *(_DWORD *)(v3 + 32) = 0;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, player_level);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int &,unsigned int>(
                                                         (unsigned int *)(v3 + 48),
                                                         (unsigned int *)(v3 + 32));
  M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(&this->player_level_limit_vec_)._M_current;
  v7 = std::vector<std::pair<unsigned int,unsigned int>>::begin(&this->player_level_limit_vec_)._M_current;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v3 + 32);
  *(__gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)(v3 + 64) = std::lower_bound<__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>,std::pair<unsigned int,unsigned int>>((__gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >)v7, (__gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >)M_current, (const std::pair<unsigned int,unsigned int> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_player_level_limit_vec = &this->player_level_limit_vec_;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, M_current);
  *(std::vector<std::pair<unsigned int,unsigned int>>::const_iterator *)(v3 + 128) = std::vector<std::pair<unsigned int,unsigned int>>::end(p_player_level_limit_vec);
  v9 = (char *)(v3 + 128);
  v10 = __gnu_cxx::operator==<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>(
          (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)(v3 + 64),
          (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( !v10 )
    goto LABEL_23;
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  v11 = &this->player_level_limit_vec_;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, v9);
  *(std::vector<std::pair<unsigned int,unsigned int>>::const_iterator *)(v3 + 160) = std::vector<std::pair<unsigned int,unsigned int>>::begin(v11);
  v12 = __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>(
          (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)(v3 + 64),
          (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)(v3 + 160));
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( v12 )
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator--((__gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)(v3 + 64));
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  v13 = &this->player_level_limit_vec_;
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, v3 + 160);
  *(std::vector<std::pair<unsigned int,unsigned int>>::const_iterator *)(v3 + 192) = std::vector<std::pair<unsigned int,unsigned int>>::end(v13);
  v9 = (char *)(v3 + 192);
  v14 = __gnu_cxx::operator==<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>(
          (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)(v3 + 64),
          (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)(v3 + 192));
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
  if ( v14 )
  {
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/PlayerExcelConfig.cpp",
      "findWorldLevelByPlayerLevel",
      201);
    v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            (common::milog::MiLogStream *const)(v3 + 224),
            (const char (*)[25])"player_level_limit_vec_:");
    v16 = common::milog::MiLogStream::operator<<<std::pair<unsigned int,unsigned int>>(
            v15,
            &this->player_level_limit_vec_);
    v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])" player_level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    result = 0xFFFFFFFFLL;
  }
  else
  {
LABEL_23:
    v19 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator->((const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)(v3 + 64));
    p_second = &v19->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v19->second;
    v22 = *(_BYTE *)((world_level >> 3) + 0x7FFF8000);
    if ( v22 != 0 && (char)((world_level & 7) + 3) >= v22 )
    {
      LOBYTE(v9) = v22 != 0;
      __asan_report_store4(world_level, v9);
    }
    *(_DWORD *)world_level = second;
    result = 0LL;
  }
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 211: range 0000000014630D04-0000000014630EF9
__int64 __fastcall PlayerExcelConfigMgr::findPlayerLevelLimitByWorldLevel(
        const PlayerExcelConfigMgr *const this,
        __int64 world_level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::PlayerLevelLockExcelConfigMap *p_player_level_lock_excel_config_map; // rdx
  data::PlayerLevelLockExcelConfigMap *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false>::pointer v9; // rdx
  uint32_t *p_player_level_upper_limit; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 world_level:210 64 8 8 iter:212 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = PlayerExcelConfigMgr::findPlayerLevelLimitByWorldLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = world_level;
  p_player_level_lock_excel_config_map = &this->player_level_lock_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, world_level);
  *(std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::find(p_player_level_lock_excel_config_map, (const std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->player_level_lock_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false> *const)(v2 + 64));
    p_player_level_upper_limit = &v9->second.player_level_upper_limit;
    if ( *(_BYTE *)(((unsigned __int64)p_player_level_upper_limit >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_player_level_upper_limit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_player_level_upper_limit >> 3)
                                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(p_player_level_upper_limit);
    }
    result = v9->second.player_level_upper_limit;
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

// Line 222: range 0000000014630EFA-0000000014630FCB
bool __fastcall PlayerExcelConfigMgr::isParentQuestIdCanUnlockWorldLevel(
        const PlayerExcelConfigMgr *const this,
        uint32_t parent_quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 19 parent_quest_id:221";
  *(_QWORD *)(v2 + 16) = PlayerExcelConfigMgr::isParentQuestIdCanUnlockWorldLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = parent_quest_id;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             &this->unlock_parent_quest_set_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 228: range 0000000014630FCC-000000001463109D
bool __fastcall PlayerExcelConfigMgr::isPlayerLevelCanUnlockWorldLevel(
        const PlayerExcelConfigMgr *const this,
        uint32_t player_level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 player_level:227";
  *(_QWORD *)(v2 + 16) = PlayerExcelConfigMgr::isPlayerLevelCanUnlockWorldLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = player_level;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             &this->unlock_player_level_set_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 234: range 000000001463109E-00000000146312CE
uint32_t __cdecl PlayerExcelConfigMgr::getMaxValidWorldLevel(const PlayerExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t result; // eax
  uint32_t max_world_level; // [rsp+1Ch] [rbp-A4h]
  data::PlayerLevelLockExcelConfigMap *__for_range; // [rsp+20h] [rbp-A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false>::reference v8; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::PlayerLevelLockExcelConfig> >::type *world_level; // [rsp+30h] [rbp-90h]
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:236 64 8 13 __for_end:236";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false>::__node_type *)PlayerExcelConfigMgr::getMaxValidWorldLevel;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  max_world_level = 0;
  __for_range = &this->player_level_lock_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::PlayerLevelLockExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false>::operator*(v2 + 4);
    world_level = std::get<0ul,unsigned int const,data::PlayerLevelLockExcelConfig>(v8);
    std::get<1ul,unsigned int const,data::PlayerLevelLockExcelConfig>(v8);
    if ( *(_BYTE *)(((unsigned __int64)world_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)world_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)world_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(world_level);
    }
    if ( max_world_level < *world_level )
      max_world_level = *world_level;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = max_world_level;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerLevelLockExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};
