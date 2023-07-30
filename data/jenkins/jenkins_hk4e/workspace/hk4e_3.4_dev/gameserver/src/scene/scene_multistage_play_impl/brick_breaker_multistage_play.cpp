// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp

// Line 39: range 0000000018053E34-0000000018054047
int32_t __cdecl BrickBreakerMultistagePlay::toClient(
        const BrickBreakerMultistagePlay *const this,
        proto::MultistagePlayInfo *info)
{
  uint32_t *v3; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  proto::BrickBreakerStageInfo *brick_breaker_info; // [rsp+30h] [rbp-40h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+40h] [rbp-30h] BYREF

  if ( SceneMultistagePlay::toClient(this, info) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "toClient",
      42);
    common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
      &v8,
      (const char (*)[66])"[BrickBreakerMultistagePlay] SceneMultistagePlay::toClient failed");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    brick_breaker_info = proto::MultistagePlayInfo::mutable_brick_breaker_info(info);
    if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BrickBreakerStageInfo::set_stage_type(brick_breaker_info, this->own_stage_type_);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::BrickBreakerStageInfo::set_level_id(brick_breaker_info, this->level_id_);
    __for_range = &this->player_uid_set_;
    __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(&this->player_uid_set_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v3 = (uint32_t *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      BrickBreakerMultistagePlay::fillBattleInfo(this, *v3, brick_breaker_info);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 56: range 0000000018054048-0000000018054796
void __fastcall BrickBreakerMultistagePlay::fillBattleInfo(
        const BrickBreakerMultistagePlay *const this,
        uint32_t uid,
        proto::BrickBreakerStageInfo *stage_info)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  bool v7; // al
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  const std::string *v10; // rax
  Player *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v13; // rdx
  Player *v14; // rax
  uint32_t AvatarComp; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t CostumeId; // eax
  google::protobuf::RepeatedField<unsigned int> *v23; // r14
  const std::vector<unsigned int> *v24; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  proto::BrickBreakerPlayerBattleInfo *battle_info; // [rsp+30h] [rbp-100h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-F0h] BYREF
  char v31[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 12 avatar_id:78 48 4 6 uid:55 64 16 13 player_ptr:60 96 16 16 cur_world_ptr:70 128 16 20 "
                        "formal_avatar_ptr:81";
  *(_QWORD *)(v3 + 16) = BrickBreakerMultistagePlay::fillBattleInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 48) = uid;
  battle_info = proto::BrickBreakerStageInfo::add_battle_info_list(stage_info);
  proto::BrickBreakerPlayerBattleInfo::set_uid(battle_info, *(_DWORD *)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::findPlayer((const Scene *const)(v3 + 64), (__int64)this->scene_, *(_DWORD *)(v3 + 48));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "fillBattleInfo",
      63);
    v6 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v30,
           (const char (*)[62])"[BrickBreakerMultistagePlay] player is not on the scene, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    v7 = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
           &this->ready_uid_set_,
           (const unsigned int *)(v3 + 48));
    proto::BrickBreakerPlayerBattleInfo::set_is_ready(battle_info, v7);
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    BasicComp = Player::getBasicComp(v8);
    v10 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
    proto::BrickBreakerPlayerBattleInfo::set_nickname(battle_info, v10);
    if ( *(char *)(((unsigned __int64)&this->is_changing_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_changing_);
    proto::BrickBreakerPlayerBattleInfo::set_is_changing(battle_info, this->is_changing_);
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Player::getSceneComp(v11);
    PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v3 + 96));
    if ( std::operator==<World>((const std::shared_ptr<World> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
        "fillBattleInfo",
        73);
      v12 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
              &v30,
              (const char (*)[61])"[BrickBreakerMultistagePlay] cur_world_ptr null player_uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      __for_begin._M_current = (const unsigned int *)std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                       &this->uid_2_avatar_map_,
                                                       (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48))._M_cur;
      __for_end._M_current = (const unsigned int *)std::unordered_map<unsigned int,std::vector<unsigned int>>::end(&this->uid_2_avatar_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)&__for_end,
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)&__for_begin) )
      {
        __for_range = std::unordered_map<unsigned int,std::vector<unsigned int>>::at(
                        &this->uid_2_avatar_map_,
                        (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
        __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v13 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 32) = *v13;
          v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          AvatarComp = (unsigned int)Player::getAvatarComp(v14);
          PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v3 + 128), AvatarComp);
          if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v3 + 128)) )
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
              "fillBattleInfo",
              84);
            v16 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    &v30,
                    (const char (*)[61])"[BrickBreakerMultistagePlay] formal_avatar_ptr nullptr, uid:");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    (const unsigned int *)(v3 + 48));
            v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v17,
                    (const char (*)[13])", avatar_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v30);
          }
          else
          {
            v19 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            AvatarId = Avatar::getAvatarId(v19);
            proto::BrickBreakerPlayerBattleInfo::add_avatar_id(battle_info, AvatarId);
            v21 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            CostumeId = Avatar::getCostumeId(v21);
            proto::BrickBreakerPlayerBattleInfo::add_costume_id(battle_info, CostumeId);
          }
          std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 128));
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
      }
      __for_end._M_current = (const unsigned int *)std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                     &this->uid_2_skill_map_,
                                                     (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48))._M_cur;
      __for_begin._M_current = (const unsigned int *)std::unordered_map<unsigned int,std::vector<unsigned int>>::end(&this->uid_2_skill_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)&__for_begin,
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)&__for_end) )
      {
        v23 = proto::BrickBreakerPlayerBattleInfo::mutable_skill_list(battle_info);
        v24 = std::unordered_map<unsigned int,std::vector<unsigned int>>::at(
                &this->uid_2_skill_map_,
                (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(v24, v23);
      }
    }
    std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v3 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  if ( v31 == (char *)v3 )
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
};

// Line 98: range 0000000018054798-000000001805551B
int32_t __cdecl BrickBreakerMultistagePlay::initByParamMap(
        BrickBreakerMultistagePlay *const this,
        const std::unordered_map<std::string,unsigned int> *param_map)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rsi
  uint32_t *v5; // rdx
  uint32_t v6; // ecx
  char v7; // al
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rsi
  uint32_t *v10; // rdx
  uint32_t v11; // ecx
  char v12; // dl
  bool v13; // dl
  __int64 v14; // rsi
  bool v15; // cl
  char v16; // dl
  __int64 v17; // rdx
  char v18; // bl
  MatchExcelConfigMgr *p_match_config_mgr; // rcx
  char v20; // r12
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rsi
  uint32_t *v23; // rdx
  uint32_t v24; // ecx
  char v25; // al
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rbx
  std::vector<unsigned int>::const_reference v28; // rdx
  int v29; // ebx
  std::unordered_map<proto::BrickBreakerStageType,unsigned int>::key_type *p_k; // rsi
  std::unordered_map<proto::BrickBreakerStageType,unsigned int>::mapped_type *v31; // rax
  _DWORD *v32; // rdx
  char v33; // cl
  std::vector<unsigned int>::const_reference v34; // rdx
  int v35; // ebx
  std::unordered_map<proto::BrickBreakerStageType,unsigned int>::key_type *v36; // rsi
  std::unordered_map<proto::BrickBreakerStageType,unsigned int>::mapped_type *v37; // rax
  _DWORD *v38; // rdx
  char v39; // cl
  std::vector<unsigned int>::const_reference v40; // rdx
  int v41; // ebx
  std::unordered_map<proto::BrickBreakerStageType,unsigned int>::key_type *v42; // rsi
  std::unordered_map<proto::BrickBreakerStageType,unsigned int>::mapped_type *v43; // rax
  _DWORD *v44; // rdx
  char v45; // cl
  std::vector<unsigned int>::const_reference v46; // rdx
  int v47; // ebx
  std::unordered_map<proto::BrickBreakerStageType,unsigned int>::key_type *v48; // rsi
  std::unordered_map<proto::BrickBreakerStageType,unsigned int>::mapped_type *v49; // rax
  _DWORD *v50; // rdx
  char v51; // cl
  uint32_t gallery_id; // ecx
  char v53; // al
  std::allocator<char> __a; // [rsp+1Bh] [rbp-65h] BYREF
  std::unordered_map<proto::BrickBreakerStageType,unsigned int>::key_type __k; // [rsp+1Ch] [rbp-64h] BYREF
  unsigned __int64 val; // [rsp+20h] [rbp-60h] BYREF
  const ActivityBrickBreakerExcelConfigMgr *activity_brick_breaker_config_mgr; // [rsp+28h] [rbp-58h]
  const BrickBreakerWorldLevelConfig *world_level_config_ptr; // [rsp+30h] [rbp-50h]
  const BrickBreakerWorldLevelConfig *world_level_config; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v61; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v62; // [rsp+50h] [rbp-30h] BYREF

  if ( std::set<unsigned int>::empty(&this->player_uid_set_) )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "initByParamMap",
      101);
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      &v62,
      (const char (*)[50])"[BrickBreakerMultistagePlay] player set is empty ");
    common::milog::MiLogStream::~MiLogStream(&v62);
    return -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "initByParamMap",
      104);
    v3 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v62,
           (const char (*)[38])"[BrickBreakerMultistagePlay] uid set:");
    common::milog::MiLogStream::operator<<<unsigned int>(v3, &this->player_uid_set_);
    common::milog::MiLogStream::~MiLogStream(&v62);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v61);
    activity_brick_breaker_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v61)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v61);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int> const,char [9]>(
            param_map,
            "level_id") )
    {
      common::milog::MiLogStream::create(
        &v62,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
        "initByParamMap",
        111);
      common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
        &v62,
        (const char (*)[57])"[BrickBreakerMultistagePlay] param_map have no level_id ");
      common::milog::MiLogStream::~MiLogStream(&v62);
      return -1;
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v62, aLevelId_24[0], &__a);
      v4 = &v62;
      v5 = (uint32_t *)std::unordered_map<std::string,unsigned int>::at(
                         param_map,
                         (const std::unordered_map<std::string,unsigned int>::key_type *)&v62);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v6 = *v5;
      v7 = *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000);
      if ( v7 != 0 && v7 <= 3 )
      {
        LOBYTE(v4) = v7 != 0;
        __asan_report_store4(&this->level_id_, v4, (_BYTE)this - 104);
      }
      this->level_id_ = v6;
      std::string::~string(&v62);
      std::allocator<char>::~allocator(&__a);
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::BrickBreakerWorldLevelExcelConfig> const,unsigned int>(
              &activity_brick_breaker_config_mgr->brick_breaker_world_level_excel_config_map,
              &this->level_id_) )
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
          "initByParamMap",
          117);
        v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v62, (const char (*)[33])off_264A66C0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->level_id_);
        common::milog::MiLogStream::~MiLogStream(&v62);
        return -1;
      }
      else if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int> const,char [9]>(
                   param_map,
                   "match_id") )
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
          "initByParamMap",
          124);
        common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
          &v62,
          (const char (*)[53])"[BrickBreakerMultistagePlay] param have no match_id ");
        common::milog::MiLogStream::~MiLogStream(&v62);
        return -1;
      }
      else
      {
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v62, aMatchId_6[0], &__a);
        v9 = &v62;
        v10 = (uint32_t *)std::unordered_map<std::string,unsigned int>::at(
                            param_map,
                            (const std::unordered_map<std::string,unsigned int>::key_type *)&v62);
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v11 = *v10;
        v12 = *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000);
        LOBYTE(v9) = v12 != 0;
        v13 = v12 != 0 && (char)((((_BYTE)this - 28) & 7) + 3) >= v12;
        if ( v13 )
          __asan_report_store4(&this->match_id_, v9, v13);
        this->match_id_ = v11;
        std::string::~string(&v62);
        std::allocator<char>::~allocator(&__a);
        v14 = (((_BYTE)this - 28) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v15 = this->match_id_ != 0;
        v16 = *(_BYTE *)(((unsigned __int64)&this->is_from_match_ >> 3) + 0x7FFF8000);
        LOBYTE(v14) = v16 != 0;
        v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this - 36) & 7) >= v16);
        if ( (_BYTE)v17 )
          __asan_report_store1(&this->is_from_match_, v14, v17);
        this->is_from_match_ = v15;
        v18 = 0;
        if ( !this->is_from_match_ )
          goto LABEL_26;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v61);
        v18 = 1;
        p_match_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v61)->design_config.txt_config_mgr.match_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( data::MatchExcelConfigMgrBase::findMatchExcelConfig(p_match_config_mgr, this->match_id_) )
LABEL_26:
          v20 = 0;
        else
          v20 = 1;
        if ( v18 )
          std::shared_ptr<Config>::~shared_ptr(&v61);
        if ( v20 )
        {
          common::milog::MiLogStream::create(
            &v62,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
            "initByParamMap",
            131);
          v21 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                  &v62,
                  (const char (*)[68])"[BrickBreakerMultistagePlay] findMatchExcelConfig failed, match_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->match_id_);
          common::milog::MiLogStream::~MiLogStream(&v62);
          return -1;
        }
        else if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int> const,char [12]>(
                     param_map,
                     "activity_id") )
        {
          common::milog::MiLogStream::create(
            &v62,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
            "initByParamMap",
            138);
          common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            &v62,
            (const char (*)[56])"[BrickBreakerMultistagePlay] param have no activity_id ");
          common::milog::MiLogStream::~MiLogStream(&v62);
          return -1;
        }
        else
        {
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v62, aActivityId_20[0], &__a);
          v22 = &v62;
          v23 = (uint32_t *)std::unordered_map<std::string,unsigned int>::at(
                              param_map,
                              (const std::unordered_map<std::string,unsigned int>::key_type *)&v62);
          if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v24 = *v23;
          v25 = *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000);
          if ( v25 != 0 && v25 <= 3 )
          {
            LOBYTE(v22) = v25 != 0;
            __asan_report_store4(&this->activity_id_, v22, (_BYTE)this - 32);
          }
          this->activity_id_ = v24;
          std::string::~string(&v62);
          std::allocator<char>::~allocator(&__a);
          if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          world_level_config_ptr = ActivityBrickBreakerExcelConfigMgr::findWorldLevelConfig(
                                     activity_brick_breaker_config_mgr,
                                     this->level_id_);
          if ( world_level_config_ptr )
          {
            world_level_config = world_level_config_ptr;
            if ( std::vector<unsigned int>::size(&world_level_config_ptr->stage_duration_vec) > 3 )
            {
              v28 = std::vector<unsigned int>::operator[](&world_level_config->stage_duration_vec, 0LL);
              if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v29 = *v28;
              __k = BRICK_BREAKER_STAGE_PREPARE;
              p_k = &__k;
              v31 = std::unordered_map<proto::BrickBreakerStageType,unsigned int>::operator[](
                      &this->stage_duration_map_,
                      &__k);
              v32 = v31;
              v33 = *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000);
              if ( v33 != 0 && (char)(((unsigned __int8)v31 & 7) + 3) >= v33 )
              {
                LOBYTE(p_k) = v33 != 0;
                __asan_report_store4(v31, p_k, (_BYTE)v31);
              }
              *v32 = v29;
              v34 = std::vector<unsigned int>::operator[](&world_level_config->stage_duration_vec, 1uLL);
              if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v35 = *v34;
              __k = BRICK_BREAKER_STAGE_PICK;
              v36 = &__k;
              v37 = std::unordered_map<proto::BrickBreakerStageType,unsigned int>::operator[](
                      &this->stage_duration_map_,
                      &__k);
              v38 = v37;
              v39 = *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000);
              if ( v39 != 0 && (char)(((unsigned __int8)v37 & 7) + 3) >= v39 )
              {
                LOBYTE(v36) = v39 != 0;
                __asan_report_store4(v37, v36, (_BYTE)v37);
              }
              *v38 = v35;
              v40 = std::vector<unsigned int>::operator[](&world_level_config->stage_duration_vec, 2uLL);
              if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v41 = *v40;
              __k = BRICK_BREAKER_STAGE_PLAY;
              v42 = &__k;
              v43 = std::unordered_map<proto::BrickBreakerStageType,unsigned int>::operator[](
                      &this->stage_duration_map_,
                      &__k);
              v44 = v43;
              v45 = *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000);
              if ( v45 != 0 && (char)(((unsigned __int8)v43 & 7) + 3) >= v45 )
              {
                LOBYTE(v42) = v45 != 0;
                __asan_report_store4(v43, v42, (_BYTE)v43);
              }
              *v44 = v41;
              v46 = std::vector<unsigned int>::operator[](&world_level_config->stage_duration_vec, 3uLL);
              if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v46 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v47 = *v46;
              __k = BRICK_BREAKER_STAGE_SETTLE;
              v48 = &__k;
              v49 = std::unordered_map<proto::BrickBreakerStageType,unsigned int>::operator[](
                      &this->stage_duration_map_,
                      &__k);
              v50 = v49;
              v51 = *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000);
              if ( v51 != 0 && (char)(((unsigned __int8)v49 & 7) + 3) >= v51 )
              {
                LOBYTE(v48) = v51 != 0;
                __asan_report_store4(v49, v48, (_BYTE)v49);
              }
              *v50 = v47;
              if ( *(_BYTE *)(((unsigned __int64)&world_level_config->gallery_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&world_level_config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              gallery_id = world_level_config->gallery_id;
              v53 = *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000);
              if ( v53 != 0 && v53 <= 3 )
              {
                LOBYTE(v48) = v53 != 0;
                __asan_report_store4(&this->gallery_id_, v48, (_BYTE)this - 40);
              }
              this->gallery_id_ = gallery_id;
              BrickBreakerMultistagePlay::initPlayerBornOrder(this);
              return 0;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v62,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
                "initByParamMap",
                152);
              v27 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                      &v62,
                      (const char (*)[70])"[BrickBreakerMultistagePlay] stage_duration_vec size too small, size:");
              val = std::vector<unsigned int>::size(&world_level_config->stage_duration_vec);
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v27, &val);
              common::milog::MiLogStream::~MiLogStream(&v62);
              return -1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v62,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
              "initByParamMap",
              146);
            v26 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                    &v62,
                    (const char (*)[72])"[BrickBreakerMultistagePlay] can not find world level config, level_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->level_id_);
            common::milog::MiLogStream::~MiLogStream(&v62);
            return -1;
          }
        }
      }
    }
  }
};

// Line 181: range 000000001805551C-0000000018055846
int32_t __cdecl BrickBreakerMultistagePlay::initStage(
        BrickBreakerMultistagePlay *const this,
        data::MultistageStageType stage_type,
        uint32_t *duration,
        const std::string *stage_name,
        const luabind::adl::object *param_table)
{
  proto::BrickBreakerStageType own_stage_type; // eax
  bool v6; // dl
  bool v7; // dl
  bool v8; // dl
  bool v9; // dl
  common::milog::MiLogStream *v10; // rax
  proto::BrickBreakerStageType *p_own_stage_type; // rsi
  std::unordered_map<proto::BrickBreakerStageType,unsigned int>::mapped_type *v13; // rdx
  uint32_t v14; // ecx
  char v15; // dl
  bool v16; // dl
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  own_stage_type = this->own_stage_type_;
  if ( own_stage_type == BRICK_BREAKER_STAGE_PLAY )
  {
    v9 = *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000);
    if ( v9 )
      __asan_report_store4(&this->own_stage_type_, (((_BYTE)this - 100) & 7u) + 3, v9);
    this->own_stage_type_ = BRICK_BREAKER_STAGE_SETTLE;
  }
  else
  {
    if ( own_stage_type > BRICK_BREAKER_STAGE_PLAY )
    {
LABEL_21:
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
        "initStage",
        206);
      v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v18,
              (const char (*)[47])"cannot initStage in cur_stage, cur stage_type:");
      common::milog::MiLogStream::operator<<<proto::BrickBreakerStageType,(proto::BrickBreakerStageType*)0>(
        v10,
        &this->own_stage_type_);
      common::milog::MiLogStream::~MiLogStream(&v18);
      return -1;
    }
    if ( own_stage_type == BRICK_BREAKER_STAGE_GAME )
    {
      v6 = *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3)
                                                             + 0x7FFF8000);
      if ( v6 )
        __asan_report_store4(&this->own_stage_type_, (((_BYTE)this - 100) & 7u) + 3, v6);
      this->own_stage_type_ = BRICK_BREAKER_STAGE_PREPARE;
    }
    else if ( own_stage_type )
    {
      if ( own_stage_type != BRICK_BREAKER_STAGE_PICK )
        goto LABEL_21;
      v8 = *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3)
                                                             + 0x7FFF8000);
      if ( v8 )
        __asan_report_store4(&this->own_stage_type_, (((_BYTE)this - 100) & 7u) + 3, v8);
      this->own_stage_type_ = BRICK_BREAKER_STAGE_PLAY;
    }
    else
    {
      v7 = *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3)
                                                             + 0x7FFF8000);
      if ( v7 )
        __asan_report_store4(&this->own_stage_type_, (((_BYTE)this - 100) & 7u) + 3, v7);
      this->own_stage_type_ = BRICK_BREAKER_STAGE_PICK;
    }
  }
  if ( common::tools::MiscUtils::isContains<std::unordered_map<proto::BrickBreakerStageType,unsigned int>,proto::BrickBreakerStageType>(
         &this->stage_duration_map_,
         &this->own_stage_type_) )
  {
    p_own_stage_type = &this->own_stage_type_;
    v13 = std::unordered_map<proto::BrickBreakerStageType,unsigned int>::operator[](
            &this->stage_duration_map_,
            &this->own_stage_type_);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v14 = *v13;
    v15 = *(_BYTE *)(((unsigned __int64)duration >> 3) + 0x7FFF8000);
    LOBYTE(p_own_stage_type) = v15 != 0;
    v16 = v15 != 0 && (char)(((unsigned __int8)duration & 7) + 3) >= v15;
    if ( v16 )
      __asan_report_store4(duration, p_own_stage_type, v16);
    *duration = v14;
  }
  return 0;
};

// Line 218: range 0000000018055848-0000000018055DFF
void __cdecl BrickBreakerMultistagePlay::onStageStart(BrickBreakerMultistagePlay *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  proto::BrickBreakerStageType own_stage_type; // eax
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rdx
  common::milog::MiLogStream *v6; // rax
  std::pair<Vector3,Vector3> *v7; // rax
  SceneTransferGuardComp *TransferGuardComp; // r14
  SceneTransferGuardComp *v9; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-238h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-230h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-228h]
  std::any p_context; // [rsp+30h] [rbp-220h] BYREF
  std::pair<Vector3,Vector3> __p; // [rsp+40h] [rbp-210h] BYREF
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-1F0h] BYREF
  char v16[464]; // [rsp+80h] [rbp-1D0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(416LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 4 7 uid:226 48 12 12 tran_pos:225 80 12 12 tran_rot:225 112 232 9 param:224";
  *(_QWORD *)(v1 + 16) = BrickBreakerMultistagePlay::onStageStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862721] = 0x4000000;
  v3[536862722] = 62194;
  v3[536862722] = 0x4000000;
  v3[536862723] = 62194;
  v3[536862730] = -218103808;
  v3[536862731] = -202116109;
  v3[536862732] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  own_stage_type = this->own_stage_type_;
  if ( own_stage_type <= BRICK_BREAKER_STAGE_PLAY )
  {
    if ( own_stage_type == BRICK_BREAKER_STAGE_PLAY )
    {
      BrickBreakerMultistagePlay::tryStartBrickBreakerGallery(this);
    }
    else if ( own_stage_type == BRICK_BREAKER_STAGE_PREPARE )
    {
      TransferGuardParam::TransferGuardParam((TransferGuardParam *const)(v1 + 112));
      Vector3::Vector3((Vector3 *const)(v1 + 48), 0.0, 0.0, 0.0);
      Vector3::Vector3((Vector3 *const)(v1 + 80), 0.0, 0.0, 0.0);
      __for_range = &this->player_uid_set_;
      __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(&this->player_uid_set_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 32) = *v5;
        if ( BrickBreakerMultistagePlay::getPlayerBornPos(
               this,
               *(_DWORD *)(v1 + 32),
               (Vector3 *)(v1 + 48),
               (Vector3 *)(v1 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
            "onStageStart",
            230);
          v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                 &v15,
                 (const char (*)[59])"[BrickBreakerMultistagePlay] getPlayerBornPos failed, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
          common::milog::MiLogStream::~MiLogStream(&v15);
          goto LABEL_23;
        }
        std::make_pair<Vector3 &,Vector3 &>(&__p, (Vector3 *)(v1 + 48), (Vector3 *)(v1 + 80));
        v7 = std::map<unsigned int,std::pair<Vector3,Vector3>>::operator[](
               (std::map<unsigned int,std::pair<Vector3,Vector3>> *const)(v1 + 112),
               (const std::map<unsigned int,std::pair<Vector3,Vector3>>::key_type *)(v1 + 32));
        std::pair<Vector3,Vector3>::operator=(v7, &__p);
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      *(_BYTE *)(v1 + 264) = 1;
      *(_DWORD *)(v1 + 268) = 89;
      if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 276) = this->match_id_;
      std::set<proto::EnterReason>::emplace<proto::EnterReason&>(
        (std::set<proto::EnterReason> *const)(v1 + 160),
        (proto::EnterReason *)(v1 + 268),
        (proto::EnterReason *)(v1 + 268));
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      TransferGuardComp = Scene::getTransferGuardComp(this->scene_);
      std::any::any(&p_context);
      SceneTransferGuardComp::startTransferGuard(TransferGuardComp, (const TransferGuardParam *)(v1 + 112), &p_context);
      std::any::~any(&p_context);
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = Scene::getTransferGuardComp(this->scene_);
      SceneTransferGuardComp::attachTransferGuard(v9);
LABEL_23:
      TransferGuardParam::~TransferGuardParam((TransferGuardParam *const)(v1 + 112));
    }
  }
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 263: range 0000000018055E00-00000000180564C1
void __cdecl BrickBreakerMultistagePlay::onStageEnd(BrickBreakerMultistagePlay *const this, bool is_succ)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  proto::BrickBreakerStageType own_stage_type; // eax
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>>::mapped_type *v7; // rdx
  SceneMultistagePlayComp *MultistagePlayComp; // r15
  uint32_t play_index; // r14d
  Group *v10; // rax
  SceneTransferGuardComp *TransferGuardComp; // rax
  std::allocator<char> __a; // [rsp+27h] [rbp-E9h] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  std::string stage_name; // [rsp+40h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 12 duration:270 48 4 7 uid:289 64 16 15 param_table:269 96 16 13 group_ptr:309";
  *(_QWORD *)(v2 + 16) = BrickBreakerMultistagePlay::onStageEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( is_succ )
  {
    luabind::adl::object::object((luabind::adl::object *const)(v2 + 64));
    *(_DWORD *)(v2 + 32) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    own_stage_type = this->own_stage_type_;
    if ( own_stage_type == BRICK_BREAKER_STAGE_SETTLE )
    {
      std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v2 + 96));
      if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&stage_name,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
          "onStageEnd",
          312);
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          (common::milog::MiLogStream *const)&stage_name,
          (const char (*)[47])"[BrickBreakerMultistagePlay] group_ptr nullptr");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&stage_name);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        MultistagePlayComp = Scene::getMultistagePlayComp(this->scene_);
        if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        play_index = this->play_index_;
        v10 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        SceneMultistagePlayComp::endPlay(MultistagePlayComp, v10, play_index, 1);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        TransferGuardComp = Scene::getTransferGuardComp(this->scene_);
        SceneTransferGuardComp::stopTransferGuard(TransferGuardComp, 1);
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 96));
      goto LABEL_32;
    }
    if ( own_stage_type <= BRICK_BREAKER_STAGE_SETTLE )
    {
      if ( own_stage_type != BRICK_BREAKER_STAGE_PLAY && own_stage_type )
      {
        if ( own_stage_type != BRICK_BREAKER_STAGE_PICK )
          goto LABEL_32;
        if ( !BrickBreakerMultistagePlay::checkPlayCanContinue(this) )
        {
          BrickBreakerMultistagePlay::handleExceptionQuitSettle(this);
          goto LABEL_32;
        }
        __for_range = &this->enter_uid_set_;
        __for_begin._M_node = std::set<unsigned int>::begin(&this->enter_uid_set_)._M_node;
        __for_end._M_node = std::set<unsigned int>::end(&this->enter_uid_set_)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 48) = *v6;
          v7 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                 &this->uid_2_avatar_map_,
                 (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
          BrickBreakerMultistagePlay::setBrickBreakerAvatarTeam(this, *(_DWORD *)(v2 + 48), v7, 2u);
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
      }
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&stage_name, byte_2641E100, &__a);
      SceneMultistagePlay::startStage(
        this,
        MULTISTAGE_STAGE_IDLE,
        (uint32_t *)(v2 + 32),
        &stage_name,
        (const luabind::adl::object *)(v2 + 64));
      std::string::~string(&stage_name);
      std::allocator<char>::~allocator(&__a);
    }
LABEL_32:
    luabind::adl::object::~object((luabind::adl::object *const)(v2 + 64));
  }
  if ( v17 == (char *)v2 )
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
};

// Line 327: range 00000000180564C2-00000000180568C3
void __cdecl BrickBreakerMultistagePlay::onEnd(BrickBreakerMultistagePlay *const this, bool is_succ)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Player *v5; // rax
  uint32_t ActivityComp; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  BrickBreakerActivity *v11; // rax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 player_ptr:330 64 16 16 activity_ptr:337";
  *(_QWORD *)(v2 + 16) = BrickBreakerMultistagePlay::onEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  BrickBreakerMultistagePlay::tryEndBrickBreakerGallery(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v2 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "onEnd",
      333);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      &v13,
      (const char (*)[47])"[BrickBreakerMultistagePlay] owner player null");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ActivityComp = (unsigned int)Player::getActivityComp(v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerActivityComp::findActivity<BrickBreakerActivity>((PlayerActivityComp *const)(v2 + 64), ActivityComp);
    if ( std::operator==<BrickBreakerActivity>(0LL, (const std::shared_ptr<BrickBreakerActivity> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
        "onEnd",
        340);
      v7 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
             &v13,
             (const char (*)[63])"[BrickBreakerMultistagePlay] findActivity failed, activity_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->activity_id_);
      v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", uid: ");
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      val = Player::getUid(v10);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      v11 = std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      BrickBreakerActivity::onBrickBreakerEnd(v11, 1);
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
        "onEnd",
        345);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v13,
        (const char (*)[35])"[BrickBreakerMultistagePlay] onEnd");
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    std::shared_ptr<BrickBreakerActivity>::~shared_ptr((std::shared_ptr<BrickBreakerActivity> *const)(v2 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 349: range 00000000180568C4-000000001805719F
void __cdecl BrickBreakerMultistagePlay::onPostEnterScene(BrickBreakerMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r12
  common::milog::MiLogStream *v6; // r12
  common::milog::MiLogStream *v7; // r12
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  unsigned int (__fastcall *v16)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r15
  uint32_t Uid; // eax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  unsigned __int64 v20; // rax
  void (__fastcall *v21)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, __int64); // r15
  uint32_t v22; // eax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // r12
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  unsigned int value; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-90h] BYREF
  char v29[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 world_ptr:376";
  *(_QWORD *)(v2 + 16) = BrickBreakerMultistagePlay::onPostEnterScene;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  value = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(&this->player_uid_set_, &value) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "onPostEnterScene",
      353);
    v5 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v28,
           (const char (*)[57])"[BrickBreakerMultistagePlay] player is not in play ,uid:");
    value = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &value);
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else
  {
    value = Player::getUid(player);
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &this->leave_uid_set_,
           &value) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
        "onPostEnterScene",
        359);
      v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v28,
             (const char (*)[54])"[BrickBreakerMultistagePlay] leave_uid reEnter! ,uid:");
      value = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &value);
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    else
    {
      value = Player::getUid(player);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(&this->enter_uid_set_, &value) )
      {
        SceneMultistagePlay::notifyStage(this);
        BrickBreakerMultistagePlay::notifyNpcTalkStateChange(this, player, 1);
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
          "onPostEnterScene",
          368);
        v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
               &v28,
               (const char (*)[56])"[BrickBreakerMultistagePlay] player reEnter play , uid:");
        value = Player::getUid(player);
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &value);
        v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])", cur_stage:");
        common::milog::MiLogStream::operator<<<proto::BrickBreakerStageType,(proto::BrickBreakerStageType*)0>(
          v9,
          &this->own_stage_type_);
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( this->own_stage_type_ == BRICK_BREAKER_STAGE_PLAY )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          scene = this->scene_;
          p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
          if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
            p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
          v12 = *p_vptr_DescribalBase + 64LL;
          if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
            v12 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, Scene *))v12)(v2 + 32, scene);
          if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v2 + 32), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v28,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
              "onPostEnterScene",
              379);
            v13 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    &v28,
                    (const char (*)[52])"[HideAndSeekMultistagePlay] world_ptr nulltpr, uid:");
            value = Player::getUid(player);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &value);
            common::milog::MiLogStream::~MiLogStream(&v28);
          }
          else
          {
            v14 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v15 = (unsigned __int64)(v14->_vptr_World + 13);
            if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
              v15 = __asan_report_load8();
            v16 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v15;
            Uid = Player::getUid(player);
            if ( v16(v14, Uid) )
            {
              common::milog::MiLogStream::create(
                &v28,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
                "onPostEnterScene",
                384);
              v18 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                      &v28,
                      (const char (*)[57])"[HideAndSeekMultistagePlay] checkKickPlayer failed, uid:");
              value = Player::getUid(player);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &value);
              common::milog::MiLogStream::~MiLogStream(&v28);
            }
            else
            {
              v19 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
              if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v20 = (unsigned __int64)(v19->_vptr_World + 14);
              if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
                v20 = __asan_report_load8();
              v21 = *(void (__fastcall **)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, __int64))v20;
              v22 = Player::getUid(player);
              v21(v19, v22, 9LL);
              common::milog::MiLogStream::create(
                &v28,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
                "onPostEnterScene",
                388);
              v23 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                      &v28,
                      (const char (*)[55])"[HideAndSeekMultistagePlay] kickPlayer slow enter uid:");
              value = Player::getUid(player);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &value);
              common::milog::MiLogStream::~MiLogStream(&v28);
            }
          }
          std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 32));
        }
        else
        {
          value = Player::getUid(player);
          std::set<unsigned int>::insert(&this->enter_uid_set_, &value);
          SceneMultistagePlay::notifyStage(this);
          BrickBreakerMultistagePlay::notifyNpcTalkStateChange(this, player, 1);
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
            "onPostEnterScene",
            396);
          v24 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v28,
                  (const char (*)[53])"[BrickBreakerMultistagePlay] player enter play, uid:");
          value = Player::getUid(player);
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &value);
          v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v25, (const char (*)[13])", cur_stage:");
          common::milog::MiLogStream::operator<<<proto::BrickBreakerStageType,(proto::BrickBreakerStageType*)0>(
            v26,
            &this->own_stage_type_);
          common::milog::MiLogStream::~MiLogStream(&v28);
        }
      }
    }
  }
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 400: range 00000000180571A0-000000001805771A
void __cdecl BrickBreakerMultistagePlay::onPlayerLeaveWorld(
        BrickBreakerMultistagePlay *const this,
        Player *player,
        proto::LeaveWorldReason leave_world_reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // r13
  common::milog::MiLogStream *v8; // r13
  common::milog::MiLogStream *v9; // r14
  unsigned int value; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 group_ptr:423";
  *(_QWORD *)(v3 + 16) = BrickBreakerMultistagePlay::onPlayerLeaveWorld;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  value = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(&this->player_uid_set_, &value) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "onPlayerLeaveWorld",
      404);
    v6 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v11,
           (const char (*)[57])"[BrickBreakerMultistagePlay] player is not in play ,uid:");
    value = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &value);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    value = Player::getUid(player);
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &this->leave_uid_set_,
           &value) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
        "onPlayerLeaveWorld",
        409);
      v7 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v11,
             (const char (*)[54])"[BrickBreakerMultistagePlay] leave_uid reEnter! ,uid:");
      value = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &value);
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    else
    {
      value = Player::getUid(player);
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(&this->enter_uid_set_, &value) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
          "onPlayerLeaveWorld",
          415);
        v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
               &v11,
               (const char (*)[56])"[BrickBreakerMultistagePlay] leave_uid not enter! ,uid:");
        value = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &value);
        common::milog::MiLogStream::~MiLogStream(&v11);
      }
      else
      {
        value = Player::getUid(player);
        std::unordered_set<unsigned int>::insert(&this->leave_uid_set_, &value);
        value = Player::getUid(player);
        std::set<unsigned int>::erase(&this->enter_uid_set_, &value);
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
          "onPlayerLeaveWorld",
          421);
        v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
               &v11,
               (const char (*)[53])"[BrickBreakerMultistagePlay] player leave play, uid:");
        value = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &value);
        common::milog::MiLogStream::~MiLogStream(&v11);
        std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v3 + 32));
        if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v3 + 32), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v11,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
            "onPlayerLeaveWorld",
            426);
          common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v11,
            (const char (*)[47])"[BrickBreakerMultistagePlay] group_ptr nullptr");
          common::milog::MiLogStream::~MiLogStream(&v11);
        }
        else if ( !BrickBreakerMultistagePlay::checkPlayCanContinue(this) )
        {
          BrickBreakerMultistagePlay::handleExceptionQuitSettle(this);
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 32));
      }
    }
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 440: range 000000001805771C-0000000018057EB6
__int64 __fastcall BrickBreakerMultistagePlay::onSelectBrickBreakerAvatar(
        BrickBreakerMultistagePlay *const this,
        uint32_t uid,
        const std::vector<unsigned int> *avatar_id_vec)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rdx
  Player *v11; // rax
  uint32_t AvatarComp; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // r15d
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::vector<unsigned int> *v18; // rax
  google::protobuf::RepeatedField<unsigned int> *v19; // rax
  google::protobuf::RepeatedField<unsigned int> *v20; // rax
  __int64 result; // rax
  unsigned int __args_0; // [rsp+24h] [rbp-1ACh] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-1A8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-1A0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-198h]
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-190h] BYREF
  char v28[368]; // [rsp+60h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 13 avatar_id:458 64 4 7 uid:439 80 16 14 player_ptr:451 112 16 21 formal_avatar_ptr:461 1"
                        "44 24 18 costume_id_vec:457 208 72 10 notify:471";
  *(_QWORD *)(v4 + 16) = BrickBreakerMultistagePlay::onSelectBrickBreakerAvatar;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = -218959360;
  v6[536862726] = 62194;
  v6[536862728] = -218103808;
  v6[536862729] = -202116109;
  *(_DWORD *)(v4 + 64) = uid;
  if ( !SceneMultistagePlay::isPlayerInPlay(this, *(_DWORD *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "onSelectBrickBreakerAvatar",
      443);
    v7 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
           &v27,
           (const char (*)[79])"[BrickBreakerMultistagePlay] player is not in BrickBreakerMultistagePlay ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v27);
    v3 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->own_stage_type_ == BRICK_BREAKER_STAGE_PICK )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::findPlayer((const Scene *const)(v4 + 80), (__int64)this->scene_, *(_DWORD *)(v4 + 64));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
          "onSelectBrickBreakerAvatar",
          454);
        v9 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
               &v27,
               (const char (*)[54])"[BrickBreakerMultistagePlay] player_ptr nullptr, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v27);
        v3 = -1;
      }
      else
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 144));
        __for_range = avatar_id_vec;
        __for_begin._M_current = std::vector<unsigned int>::begin(avatar_id_vec)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(avatar_id_vec)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v4 + 48) = *v10;
          v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
          AvatarComp = (unsigned int)Player::getAvatarComp(v11);
          PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v4 + 112), AvatarComp);
          if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 112)) )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
              "onSelectBrickBreakerAvatar",
              464);
            v13 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    &v27,
                    (const char (*)[61])"[BrickBreakerMultistagePlay] formal_avatar_ptr nullptr, uid:");
            v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v13,
                    (const unsigned int *)(v4 + 64));
            v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v14,
                    (const char (*)[13])", avatar_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream(&v27);
            v3 = -1;
            v16 = 0;
          }
          else
          {
            v17 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
            __args_0 = Avatar::getCostumeId(v17);
            std::vector<unsigned int>::emplace_back<unsigned int>(
              (std::vector<unsigned int> *const)(v4 + 144),
              &__args_0,
              &__args_0);
            v16 = 1;
          }
          std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 112));
          if ( v16 != 1 )
            goto LABEL_24;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        v18 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                &this->uid_2_avatar_map_,
                (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v4 + 64));
        std::vector<unsigned int>::operator=(v18, avatar_id_vec);
        proto::BrickBreakerPlayerSetAvatarNotify::BrickBreakerPlayerSetAvatarNotify((proto::BrickBreakerPlayerSetAvatarNotify *const)(v4 + 208));
        proto::BrickBreakerPlayerSetAvatarNotify::set_uid(
          (proto::BrickBreakerPlayerSetAvatarNotify *const)(v4 + 208),
          *(_DWORD *)(v4 + 64));
        v19 = proto::BrickBreakerPlayerSetAvatarNotify::mutable_avatar_id_list((proto::BrickBreakerPlayerSetAvatarNotify *const)(v4 + 208));
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(avatar_id_vec, v19);
        v20 = proto::BrickBreakerPlayerSetAvatarNotify::mutable_costume_id_list((proto::BrickBreakerPlayerSetAvatarNotify *const)(v4 + 208));
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
          (const std::vector<unsigned int> *)(v4 + 144),
          v20);
        SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v4 + 208), 0);
        v3 = 0;
        proto::BrickBreakerPlayerSetAvatarNotify::~BrickBreakerPlayerSetAvatarNotify((proto::BrickBreakerPlayerSetAvatarNotify *const)(v4 + 208));
LABEL_24:
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 144));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 80));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
        "onSelectBrickBreakerAvatar",
        448);
      v8 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             &v27,
             (const char (*)[62])"[BrickBreakerMultistagePlay] cur stage cannot select avatar, ");
      common::milog::MiLogStream::operator<<<proto::BrickBreakerStageType,(proto::BrickBreakerStageType*)0>(
        v8,
        &this->own_stage_type_);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v3 = -1;
    }
  }
  result = v3;
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 480: range 0000000018057EB8-000000001805811A
__int64 __fastcall BrickBreakerMultistagePlay::onSelectBrickBreakerSkill(
        BrickBreakerMultistagePlay *const this,
        int uid,
        const std::vector<unsigned int> *skill_id_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  std::vector<unsigned int> *v8; // rax
  google::protobuf::RepeatedField<unsigned int> *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 7 uid:479 48 48 10 notify:487";
  *(_QWORD *)(v3 + 16) = BrickBreakerMultistagePlay::onSelectBrickBreakerSkill;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 32) = uid;
  if ( !SceneMultistagePlay::isPlayerInPlay(this, *(_DWORD *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "onSelectBrickBreakerSkill",
      483);
    v6 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
           &v12,
           (const char (*)[79])"[BrickBreakerMultistagePlay] player is not in BrickBreakerMultistagePlay ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
           &this->uid_2_skill_map_,
           (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 32));
    std::vector<unsigned int>::operator=(v8, skill_id_vec);
    proto::BrickBreakerPlayerSetSkillNotify::BrickBreakerPlayerSetSkillNotify((proto::BrickBreakerPlayerSetSkillNotify *const)(v3 + 48));
    v9 = proto::BrickBreakerPlayerSetSkillNotify::mutable_skill_id_list((proto::BrickBreakerPlayerSetSkillNotify *const)(v3 + 48));
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(skill_id_vec, v9);
    SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v3 + 48), 0);
    v7 = 0;
    proto::BrickBreakerPlayerSetSkillNotify::~BrickBreakerPlayerSetSkillNotify((proto::BrickBreakerPlayerSetSkillNotify *const)(v3 + 48));
  }
  result = v7;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 494: range 000000001805811C-000000001805866E
void __fastcall BrickBreakerMultistagePlay::onSetBrickBreakerReady(
        BrickBreakerMultistagePlay *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v6; // rax
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  std::unordered_set<unsigned int>::size_type v8; // r14
  uint32_t SceneTimeSeconds; // ecx
  uint32_t v10; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t v14; // ecx
  char v15; // dl
  char *v16; // rsi
  bool v17; // dl
  common::milog::MiLogStream v18; // [rsp+10h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 duration:510 64 4 7 uid:493 80 40 10 notify:503";
  *(_QWORD *)(v2 + 16) = BrickBreakerMultistagePlay::onSetBrickBreakerReady;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 64) = uid;
  if ( !SceneMultistagePlay::isPlayerInPlay(this, *(_DWORD *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "onSetBrickBreakerReady",
      497);
    v5 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
           &v18,
           (const char (*)[79])"[BrickBreakerMultistagePlay] player is not in BrickBreakerMultistagePlay ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    v6 = std::unordered_set<unsigned int>::insert(
           &this->ready_uid_set_,
           (const std::unordered_set<unsigned int>::value_type *)(v2 + 64));
    if ( v6.second )
    {
      proto::BrickBreakerPlayerReadyNotify::BrickBreakerPlayerReadyNotify((proto::BrickBreakerPlayerReadyNotify *const)(v2 + 80));
      v7 = proto::BrickBreakerPlayerReadyNotify::mutable_uid_list((proto::BrickBreakerPlayerReadyNotify *const)(v2 + 80));
      common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->ready_uid_set_, v7);
      SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v2 + 80), 0);
      v8 = std::unordered_set<unsigned int>::size(&this->ready_uid_set_);
      if ( v8 == std::set<unsigned int>::size(&this->player_uid_set_) )
      {
        *(_DWORD *)(v2 + 48) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneTimeSeconds = Scene::getSceneTimeSeconds(this->scene_);
        if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( SceneTimeSeconds > this->stage_begin_scene_time_ )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v10 = Scene::getSceneTimeSeconds(this->scene_);
          if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 48) += v10 - this->stage_begin_scene_time_;
        }
        *(_DWORD *)(v2 + 48) += 5;
        if ( *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( this->duration_seconds_ > *(_DWORD *)(v2 + 48) )
        {
          SceneMultistagePlay::rewriteStageTime(this, 5u);
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
            "onSetBrickBreakerReady",
            521);
          v11 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                  &v18,
                  (const char (*)[74])"[BrickBreakerMultistagePlay] all players are ready, reduce duration from:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->duration_seconds_);
          v13 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v12, (const char (*)[5])" to:");
          v16 = (char *)(v2 + 48);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v18);
          v14 = *(_DWORD *)(v2 + 48);
          v15 = *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3) + 0x7FFF8000);
          LOBYTE(v16) = v15 != 0;
          v17 = v15 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v15;
          if ( v17 )
            __asan_report_store4(&this->duration_seconds_, v16, v17);
          this->duration_seconds_ = v14;
          SceneMultistagePlay::notifyStage(this);
        }
      }
      proto::BrickBreakerPlayerReadyNotify::~BrickBreakerPlayerReadyNotify((proto::BrickBreakerPlayerReadyNotify *const)(v2 + 80));
    }
  }
  if ( v19 == (char *)v2 )
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
};

// Line 531: range 0000000018058670-0000000018058904
void __fastcall BrickBreakerMultistagePlay::onSetBrickBreakerChanging(
        BrickBreakerMultistagePlay *const this,
        uint32_t uid,
        bool is_changing)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:530 64 32 10 notify:538";
  *(_QWORD *)(v3 + 16) = BrickBreakerMultistagePlay::onSetBrickBreakerChanging;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = uid;
  v6 = *(unsigned int *)(v3 + 48);
  if ( !SceneMultistagePlay::isPlayerInPlay(this, v6) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "onSetBrickBreakerChanging",
      534);
    v7 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[79])"[BrickBreakerMultistagePlay] player is not in BrickBreakerMultistagePlay ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_changing_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_changing_, v6, &this->is_changing_);
    this->is_changing_ = is_changing;
    proto::BrickBreakerPlayerSetChangingNotify::BrickBreakerPlayerSetChangingNotify((proto::BrickBreakerPlayerSetChangingNotify *const)(v3 + 64));
    if ( *(char *)(((unsigned __int64)&this->is_changing_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_changing_);
    proto::BrickBreakerPlayerSetChangingNotify::set_is_changing(
      (proto::BrickBreakerPlayerSetChangingNotify *const)(v3 + 64),
      this->is_changing_);
    SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v3 + 64), 0);
    proto::BrickBreakerPlayerSetChangingNotify::~BrickBreakerPlayerSetChangingNotify((proto::BrickBreakerPlayerSetChangingNotify *const)(v3 + 64));
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 544: range 0000000018058962-0000000018058E77
void __cdecl BrickBreakerMultistagePlay::getBrickBreakerPlayerInfoLog(
        BrickBreakerMultistagePlay *const this,
        std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog> *uid_info_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::set<unsigned int>::size_type v5; // rdx
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  google::protobuf::RepeatedField<unsigned int> *v7; // r14
  std::unordered_map<unsigned int,std::vector<unsigned int>>::mapped_type *v8; // rax
  Player *v9; // rax
  PlayerAvatarComp *AvatarComp; // r14
  google::protobuf::RepeatedField<unsigned int> *v11; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-140h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-138h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> __y; // [rsp+20h] [rbp-130h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> __x; // [rsp+28h] [rbp-128h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-120h]
  std::vector<unsigned int> *avatar_id_vec; // [rsp+38h] [rbp-118h]
  std::function<ForeachPolicy(Avatar&)> p_func; // [rsp+40h] [rbp-110h] BYREF
  char v19[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 7 uid:547 48 16 14 player_ptr:549 80 72 12 uid_info:554";
  *(_QWORD *)(v2 + 16) = BrickBreakerMultistagePlay::getBrickBreakerPlayerInfoLog;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog>::clear(uid_info_vec);
  v5 = std::set<unsigned int>::size(&this->player_uid_set_);
  std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog>::reserve(uid_info_vec, v5);
  __for_range = &this->player_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->player_uid_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v6;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findPlayer((const Scene *const)(v2 + 48), (__int64)this->scene_, *(_DWORD *)(v2 + 32));
    if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 48)) )
    {
      proto_log::BrickBreakerGalleryPlayerInfoLog::BrickBreakerGalleryPlayerInfoLog((proto_log::BrickBreakerGalleryPlayerInfoLog *const)(v2 + 80));
      proto_log::BrickBreakerGalleryPlayerInfoLog::set_uid(
        (proto_log::BrickBreakerGalleryPlayerInfoLog *const)(v2 + 80),
        *(_DWORD *)(v2 + 32));
      __y._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                     &this->uid_2_skill_map_,
                     (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 32))._M_cur;
      __x._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(&this->uid_2_skill_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(&__x, &__y) )
      {
        v7 = proto_log::BrickBreakerGalleryPlayerInfoLog::mutable_skill_id_list((proto_log::BrickBreakerGalleryPlayerInfoLog *const)(v2 + 80));
        v8 = std::unordered_map<unsigned int,std::vector<unsigned int>>::at(
               &this->uid_2_skill_map_,
               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 32));
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(v8, v7);
      }
      __x._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                     &this->uid_2_avatar_map_,
                     (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 32))._M_cur;
      __y._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(&this->uid_2_avatar_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(&__y, &__x) )
      {
        avatar_id_vec = std::unordered_map<unsigned int,std::vector<unsigned int>>::at(
                          &this->uid_2_avatar_map_,
                          (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 32));
        if ( std::vector<unsigned int>::empty(avatar_id_vec) )
        {
          proto_log::BrickBreakerGalleryPlayerInfoLog::set_is_not_select_avatar(
            (proto_log::BrickBreakerGalleryPlayerInfoLog *const)(v2 + 80),
            1);
          v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          AvatarComp = Player::getAvatarComp(v9);
          std::function<ForeachPolicy ()(Avatar &)>::function<BrickBreakerMultistagePlay::getBrickBreakerPlayerInfoLog(std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog> &)::{lambda(Avatar &)#1},void,void>(
            &p_func,
            (BrickBreakerMultistagePlay::getBrickBreakerPlayerInfoLog::<lambda(Avatar&)>)(v2 + 80));
          PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, &p_func);
          std::function<ForeachPolicy ()(Avatar &)>::~function(&p_func);
        }
        else
        {
          proto_log::BrickBreakerGalleryPlayerInfoLog::set_is_not_select_avatar(
            (proto_log::BrickBreakerGalleryPlayerInfoLog *const)(v2 + 80),
            0);
          v11 = proto_log::BrickBreakerGalleryPlayerInfoLog::mutable_avatar_id_list((proto_log::BrickBreakerGalleryPlayerInfoLog *const)(v2 + 80));
          common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(avatar_id_vec, v11);
        }
      }
      std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog>::emplace_back<proto_log::BrickBreakerGalleryPlayerInfoLog&>(
        uid_info_vec,
        (proto_log::BrickBreakerGalleryPlayerInfoLog *)(v2 + 80),
        (proto_log::BrickBreakerGalleryPlayerInfoLog *)(v2 + 80));
      proto_log::BrickBreakerGalleryPlayerInfoLog::~BrickBreakerGalleryPlayerInfoLog((proto_log::BrickBreakerGalleryPlayerInfoLog *const)(v2 + 80));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 48));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 567: range 0000000018058906-0000000018058960
ForeachPolicy __cdecl BrickBreakerMultistagePlay::getBrickBreakerPlayerInfoLog(std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog> &)::{lambda(Avatar &)#1}::operator()(
        const BrickBreakerMultistagePlay::getBrickBreakerPlayerInfoLog::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  proto_log::BrickBreakerGalleryPlayerInfoLog *uid_info; // rbx
  uint32_t AvatarId; // eax

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  uid_info = __closure->__uid_info;
  AvatarId = Avatar::getAvatarId(avatar);
  proto_log::BrickBreakerGalleryPlayerInfoLog::add_avatar_id_list(uid_info, AvatarId);
  return 0;
};

// Line 584: range 00000000180590F4-000000001805A0F3
__int64 __fastcall BrickBreakerMultistagePlay::setBrickBreakerAvatarTeam(
        BrickBreakerMultistagePlay *const this,
        uint32_t uid,
        const std::vector<unsigned int> *avatar_id_vec,
        uint32_t target_avatar_num)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // r14d
  ActivityBrickBreakerExcelConfigMgr *p_activity_brick_breaker_config_mgr; // rcx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v13; // rdx
  Player *v14; // rax
  uint32_t AvatarComp; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  data::ElementType v22; // eax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  Player *v24; // rax
  Player *v25; // rax
  unsigned __int64 *M_current; // r14
  std::vector<long unsigned int>::iterator v27; // rax
  std::set<unsigned int>::size_type v28; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  Player *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  BrickBreakerActivity *v38; // rax
  common::milog::MiLogStream *v39; // rax
  Player *v40; // rax
  PlayerAvatarComp *v41; // rax
  common::milog::MiLogStream *v42; // rax
  unsigned __int64 v43; // rax
  Player *v44; // rax
  PlayerAvatarComp *v45; // rax
  common::milog::MiLogStream *v46; // rax
  Player *v47; // rax
  PlayerAvatarComp *v48; // r14
  common::milog::MiLogStream *v49; // rax
  __int64 result; // rax
  BrickBreakerMultistagePlay::setBrickBreakerAvatarTeam::<lambda(const FormalAvatar&)> v51; // [rsp-20h] [rbp-290h]
  common::milog::MiLogStream *v52; // [rsp+10h] [rbp-260h]
  PlayerAvatarComp *v53; // [rsp+10h] [rbp-260h]
  PlayerAvatarComp *v54; // [rsp+10h] [rbp-260h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-238h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-230h] BYREF
  char *val; // [rsp+48h] [rbp-228h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-220h]
  uint64_t avatr_guid; // [rsp+58h] [rbp-218h]
  BrickBreakerMultistagePlay::setBrickBreakerAvatarTeam::<lambda(const FormalAvatar&)> __f; // [rsp+60h] [rbp-210h]
  common::milog::MiLogStream v63; // [rsp+80h] [rbp-1F0h] BYREF
  char v64[464]; // [rsp+A0h] [rbp-1D0h] BYREF
  BrickBreakerMultistagePlay::setBrickBreakerAvatarTeam::<lambda(const FormalAvatar&)>_0 v65; // 0:esi.4,8:rdx.8

  v4 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 32 4 13 avatar_id:595 48 4 7 ret:659 64 4 7 uid:583 80 16 14 player_ptr:586 112 16 16 activity"
                        "_ptr:647 144 16 21 formal_avatar_ptr:598 176 24 12 guid_vec:593 240 48 12 guid_set:641 320 56 16"
                        " ban_elem_set:592";
  *(_QWORD *)(v4 + 16) = BrickBreakerMultistagePlay::setBrickBreakerAvatarTeam;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = -218959360;
  v6[536862727] = 62194;
  v6[536862729] = -218959118;
  v6[536862731] = -218103808;
  v6[536862732] = -202116109;
  *(_DWORD *)(v4 + 64) = uid;
  common::milog::MiLogStream::create(
    &v63,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
    "setBrickBreakerAvatarTeam",
    585);
  v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
         &v63,
         (const char (*)[45])"[BrickBreakerMultistagePlay] avatar_id_vec: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int>(v7, avatar_id_vec);
  v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])", cur_level:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->level_id_);
  common::milog::MiLogStream::~MiLogStream(&v63);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::findPlayer((const Scene *const)(v4 + 80), (__int64)this->scene_, *(_DWORD *)(v4 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "setBrickBreakerAvatarTeam",
      589);
    v10 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v63,
            (const char (*)[54])"[BrickBreakerMultistagePlay] player_ptr nullptr, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v63);
    v11 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 144));
    p_activity_brick_breaker_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144))->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    ActivityBrickBreakerExcelConfigMgr::findBanElemSetByLevelId(
      (std::unordered_set<data::ElementType> *)(v4 + 320),
      p_activity_brick_breaker_config_mgr,
      this->level_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 144));
    std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v4 + 176));
    __for_range = avatar_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(avatar_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(avatar_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v13 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 32) = *v13;
      v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      AvatarComp = (unsigned int)Player::getAvatarComp(v14);
      PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v4 + 144), AvatarComp);
      if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 144)) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
          "setBrickBreakerAvatarTeam",
          601);
        v16 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v63,
                (const char (*)[55])"[BrickBreakerMultistagePlay] formal_avatar_ptr nullptr");
        v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])", avatar_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v63);
      }
      else
      {
        v18 = (unsigned __int64)std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          v18 = __asan_report_load8();
        v19 = *(_QWORD *)v18 + 280LL;
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          v18 = __asan_report_load8();
        *(_DWORD *)(v4 + 48) = (*(__int64 (__fastcall **)(unsigned __int64))v19)(v18);
        if ( common::tools::MiscUtils::isContains<std::unordered_set<data::ElementType>,data::ElementType>(
               (std::unordered_set<data::ElementType> *)(v4 + 320),
               (const data::ElementType *)(v4 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
            "setBrickBreakerAvatarTeam",
            606);
          v52 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                  &v63,
                  (const char (*)[64])"[BrickBreakerMultistagePlay] formal_avatar_ptr elem fail, elem:");
          v20 = (unsigned __int64)std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
            v20 = __asan_report_load8();
          v21 = *(_QWORD *)v20 + 280LL;
          if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            v20 = __asan_report_load8();
          v22 = (*(unsigned int (__fastcall **)(unsigned __int64))v21)(v20);
          val = (char *)data::enumValToStr(v22);
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v52, (const char *const *)&val);
          common::milog::MiLogStream::~MiLogStream(&v63);
        }
        else
        {
          v23 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          val = (char *)Avatar::getGuid(v23);
          std::vector<unsigned long>::emplace_back<unsigned long>(
            (std::vector<long unsigned int> *const)(v4 + 176),
            (unsigned __int64 *)&val,
            (unsigned __int64 *)&val);
        }
      }
      std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 144));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v4 + 176)) )
    {
      v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      v53 = Player::getAvatarComp(v24);
      __f.__target_avatar_num = target_avatar_num;
      __f.__guid_vec = (std::vector<long unsigned int> *)(v4 + 176);
      __f.__ban_elem_set = (std::unordered_set<data::ElementType> *)(v4 + 320);
      v51.__ban_elem_set = (std::unordered_set<data::ElementType> *)(v4 + 320);
      v51.__guid_vec = (std::vector<long unsigned int> *)(v4 + 176);
      *(_QWORD *)&v51.__target_avatar_num = *(_QWORD *)&__f.__target_avatar_num;
      std::function<ForeachPolicy ()(FormalAvatar const&)>::function<BrickBreakerMultistagePlay::setBrickBreakerAvatarTeam(unsigned int,std::vector<unsigned int> const&,unsigned int)::{lambda(FormalAvatar const&)#1},void,void>(
        (std::function<ForeachPolicy(const FormalAvatar&)> *const)&v63,
        v51);
      PlayerAvatarComp::foreachFormalAvatarByLevelSort(v53, (std::function<ForeachPolicy(const FormalAvatar&)> *)&v63);
      std::function<ForeachPolicy ()(FormalAvatar const&)>::~function((std::function<ForeachPolicy(const FormalAvatar&)> *const)&v63);
    }
    if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v4 + 176)) )
    {
      v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      v54 = Player::getAvatarComp(v25);
      v65.__guid_vec = (std::vector<long unsigned int> *)(v4 + 176);
      v65.__target_avatar_num = target_avatar_num;
      std::function<ForeachPolicy ()(FormalAvatar const&)>::function<BrickBreakerMultistagePlay::setBrickBreakerAvatarTeam(unsigned int,std::vector<unsigned int> const&,unsigned int)::{lambda(FormalAvatar const&)#2},void,void>(
        (std::function<ForeachPolicy(const FormalAvatar&)> *const)&v63,
        v65);
      PlayerAvatarComp::foreachFormalAvatarByLevelSort(v54, (std::function<ForeachPolicy(const FormalAvatar&)> *)&v63);
      std::function<ForeachPolicy ()(FormalAvatar const&)>::~function((std::function<ForeachPolicy(const FormalAvatar&)> *const)&v63);
    }
    M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v4 + 176))._M_current;
    v27._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v4 + 176))._M_current;
    std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>>(
      (std::set<unsigned int> *const)(v4 + 240),
      v27,
      (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >)M_current);
    if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v4 + 176))
      || (v28 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v4 + 240)),
          v28 != std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v4 + 176))) )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
        "setBrickBreakerAvatarTeam",
        644);
      v30 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              &v63,
              (const char (*)[59])"[BrickBreakerMultistagePlay] guid_vec empty avatar_id_set:");
      v31 = common::milog::MiLogStream::operator<<<unsigned int>(v30, avatar_id_vec);
      v32 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v31, (const char (*)[11])", guid_set");
      v33 = common::milog::MiLogStream::operator<<<unsigned int>(v32, (const std::set<unsigned int> *)(v4 + 240));
      v34 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v33, (const char (*)[11])", guid_vec");
      common::milog::MiLogStream::operator<<<unsigned long>(v34, (const std::vector<long unsigned int> *)(v4 + 176));
      common::milog::MiLogStream::~MiLogStream(&v63);
      v11 = -1;
    }
    else
    {
      v35 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      Player::getActivityComp(v35);
      PlayerActivityComp::findOpenningActivity<BrickBreakerActivity>((PlayerActivityComp *const)(v4 + 112));
      if ( std::operator==<BrickBreakerActivity>((const std::shared_ptr<BrickBreakerActivity> *)(v4 + 112), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
          "setBrickBreakerAvatarTeam",
          650);
        v36 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v63, (const char (*)[9])"player: ");
        v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v36,
                (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v37, (const char (*)[20])" activity is closed");
        common::milog::MiLogStream::~MiLogStream(&v63);
        v11 = -1;
      }
      else
      {
        v38 = std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        if ( BrickBreakerActivity::checkAndReviveAvatar(v38, (const std::vector<long unsigned int> *)(v4 + 176)) )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
            "setBrickBreakerAvatarTeam",
            656);
          v39 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                  &v63,
                  (const char (*)[61])"[BrickBreaker] checkAndReviveAvatar failed, avatar_guid_vec:");
          common::milog::MiLogStream::operator<<<unsigned long>(v39, (const std::vector<long unsigned int> *)(v4 + 176));
          common::milog::MiLogStream::~MiLogStream(&v63);
          v11 = -1;
        }
        else
        {
          v40 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
          v41 = Player::getAvatarComp(v40);
          *(_DWORD *)(v4 + 48) = PlayerAvatarComp::checkAvatarTeamCanJoinSceneTeam(
                                   v41,
                                   (const std::vector<long unsigned int> *)(v4 + 176));
          if ( *(_DWORD *)(v4 + 48) )
          {
            common::milog::MiLogStream::create(
              &v63,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
              "setBrickBreakerAvatarTeam",
              662);
            v42 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                    &v63,
                    (const char (*)[77])"[BrickBreakerMultistagePlay] checkAvatarTeamCanJoinSceneTeam fails. retcode:");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v42, (const int *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream(&v63);
            v11 = *(_DWORD *)(v4 + 48);
          }
          else
          {
            v43 = (unsigned __int64)std::vector<unsigned long>::front((std::vector<long unsigned int> *const)(v4 + 176));
            if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
              v43 = __asan_report_load8();
            avatr_guid = *(_QWORD *)v43;
            v44 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
            v45 = Player::getAvatarComp(v44);
            *(_DWORD *)(v4 + 48) = PlayerAvatarComp::checkChangeCurAvatar(v45, avatr_guid);
            if ( *(_DWORD *)(v4 + 48) )
            {
              common::milog::MiLogStream::create(
                &v63,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
                "setBrickBreakerAvatarTeam",
                670);
              v46 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                      &v63,
                      (const char (*)[56])"[BrickBreakerMultistagePlay] checkChangeCurAvatar fails");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v46, (const int *)(v4 + 48));
              common::milog::MiLogStream::~MiLogStream(&v63);
              v11 = *(_DWORD *)(v4 + 48);
            }
            else
            {
              v47 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
              v48 = Player::getAvatarComp(v47);
              if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              toThisPtr<Scene>((Scene *)(v4 + 144));
              *(_DWORD *)(v4 + 48) = PlayerAvatarComp::setSceneTeamAndAddToScene(
                                       v48,
                                       (const std::vector<long unsigned int> *)(v4 + 176),
                                       avatr_guid,
                                       (ScenePtr *)(v4 + 144),
                                       CHANGE_SCENE_TEAM_REASON_MP_CHANGE);
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 144));
              if ( *(_DWORD *)(v4 + 48) )
              {
                common::milog::MiLogStream::create(
                  &v63,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
                  "setBrickBreakerAvatarTeam",
                  676);
                v49 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                        &v63,
                        (const char (*)[67])"[BrickBreakerMultistagePlay] setSceneTeamAndAddToScene fails, ret:");
                common::milog::MiLogStream::operator<<<int,(int *)0>(v49, (const int *)(v4 + 48));
                common::milog::MiLogStream::~MiLogStream(&v63);
                v11 = *(_DWORD *)(v4 + 48);
              }
              else
              {
                v11 = 0;
              }
            }
          }
        }
      }
      std::shared_ptr<BrickBreakerActivity>::~shared_ptr((std::shared_ptr<BrickBreakerActivity> *const)(v4 + 112));
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 240));
    std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v4 + 176));
    std::unordered_set<data::ElementType>::~unordered_set((std::unordered_set<data::ElementType> *const)(v4 + 320));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 80));
  result = v11;
  if ( v64 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF802C) = 0LL;
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

// Line 614: range 0000000018058E78-0000000018059009
ForeachPolicy __cdecl BrickBreakerMultistagePlay::setBrickBreakerAvatarTeam(unsigned int,std::vector<unsigned int> const&,unsigned int)::{lambda(FormalAvatar const&)#1}::operator()(
        const BrickBreakerMultistagePlay::setBrickBreakerAvatarTeam::<lambda(const FormalAvatar&)> *const __closure,
        const FormalAvatar *formal_avatar)
{
  std::vector<long unsigned int>::size_type v2; // rcx
  const FormalAvatar *v4; // rdx
  unsigned __int64 v5; // rax
  std::vector<long unsigned int> *guid_vec; // rbx
  unsigned __int64 *v7; // rdx
  data::ElementType value; // [rsp+14h] [rbp-1Ch] BYREF
  unsigned __int64 v9[3]; // [rsp+18h] [rbp-18h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__guid_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = std::vector<unsigned long>::size(__closure->__guid_vec);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v2 >= __closure->__target_avatar_num )
    return 1;
  v4 = formal_avatar;
  if ( *(_BYTE *)(((unsigned __int64)formal_avatar >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = *(_QWORD *)formal_avatar->baseclass_0 + 280LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  value = (*(unsigned int (__fastcall **)(const FormalAvatar *))v5)(v4);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__ban_elem_set >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::unordered_set<data::ElementType>,data::ElementType>(
         __closure->__ban_elem_set,
         &value) )
  {
    return 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__guid_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  guid_vec = __closure->__guid_vec;
  v9[0] = Avatar::getGuid(formal_avatar);
  std::vector<unsigned long>::emplace_back<unsigned long>(guid_vec, v9, v7);
  return 0;
};

// Line 631: range 000000001805900A-00000000180590F3
ForeachPolicy __cdecl BrickBreakerMultistagePlay::setBrickBreakerAvatarTeam(unsigned int,std::vector<unsigned int> const&,unsigned int)::{lambda(FormalAvatar const&)#2}::operator()(
        const BrickBreakerMultistagePlay::setBrickBreakerAvatarTeam::<lambda(const FormalAvatar&)>_0 *const __closure,
        const FormalAvatar *formal_avatar)
{
  std::vector<long unsigned int>::size_type v2; // rcx
  std::vector<long unsigned int> *guid_vec; // rbx
  unsigned __int64 *v5; // rdx
  unsigned __int64 v6[3]; // [rsp+18h] [rbp-18h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__guid_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = std::vector<unsigned long>::size(__closure->__guid_vec);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v2 >= __closure->__target_avatar_num )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__guid_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  guid_vec = __closure->__guid_vec;
  v6[0] = Avatar::getGuid(formal_avatar);
  std::vector<unsigned long>::emplace_back<unsigned long>(guid_vec, v6, v5);
  return 0;
};

// Line 683: range 000000001805A0F4-000000001805A65C
void __cdecl BrickBreakerMultistagePlay::tryStartBrickBreakerGallery(BrickBreakerMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  SceneGalleryComp *GalleryComp; // rdi
  std::set<unsigned int> *p_enter_uid_set; // rcx
  common::milog::MiLogStream *v6; // rax
  uint32_t v7; // ecx
  common::milog::MiLogStream *v8; // rax
  BrickBreakerGallery *v9; // rcx
  SceneGalleryComp *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-90h] BYREF
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 gallery_ptr:689";
  *(_QWORD *)(v1 + 16) = BrickBreakerMultistagePlay::tryStartBrickBreakerGallery;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GalleryComp = Scene::getGalleryComp(this->scene_);
  p_enter_uid_set = &this->enter_uid_set_;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    GalleryComp = (SceneGalleryComp *)&this->gallery_id_;
    __asan_report_load4();
  }
  if ( (unsigned int)SceneGalleryComp::initGallery(GalleryComp, this->gallery_id_, p_enter_uid_set) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "tryStartBrickBreakerGallery",
      686);
    v6 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v13,
           (const char (*)[62])"[BrickBreakerMultistagePlay] gallery init failed, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = (unsigned int)Scene::getGalleryComp(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    SceneGalleryComp::findGallery<BrickBreakerGallery>((SceneGalleryComp *const)(v1 + 32), v7);
    if ( std::operator==<BrickBreakerGallery>(0LL, (const std::shared_ptr<BrickBreakerGallery> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
        "tryStartBrickBreakerGallery",
        692);
      v8 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
             &v13,
             (const char (*)[61])"[BrickBreakerMultistagePlay] findGallery failed, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      v9 = std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      BrickBreakerGallery::setMatchId(v9, this->match_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = Scene::getGalleryComp(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( (unsigned int)SceneGalleryComp::startGallery(v10, this->gallery_id_) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
          "tryStartBrickBreakerGallery",
          698);
        v11 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                &v13,
                (const char (*)[63])"[BrickBreakerMultistagePlay] gallery start failed, gallery_id:");
      }
      else
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
          "tryStartBrickBreakerGallery",
          701);
        v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v13,
                (const char (*)[43])"[BrickBreakerMultistagePlay] startGallery:");
      }
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    std::shared_ptr<BrickBreakerGallery>::~shared_ptr((std::shared_ptr<BrickBreakerGallery> *const)(v1 + 32));
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 705: range 000000001805A65E-000000001805A935
void __cdecl BrickBreakerMultistagePlay::tryEndBrickBreakerGallery(BrickBreakerMultistagePlay *const this)
{
  SceneGalleryComp *GalleryComp; // rcx
  bool v2; // bl
  common::milog::MiLogStream *v3; // rax
  SceneGalleryComp *p_gallery_id; // rdi
  common::milog::MiLogStream *v5; // rax
  std::shared_ptr<BaseGallery> __a; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GalleryComp = Scene::getGalleryComp(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  SceneGalleryComp::findGallery((SceneGalleryComp *const)&__a, (__int64)GalleryComp, this->gallery_id_);
  v2 = std::operator==<BaseGallery>(0LL, &__a);
  std::shared_ptr<BaseGallery>::~shared_ptr(&__a);
  if ( v2 )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "tryEndBrickBreakerGallery",
      708);
    v3 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v8,
           (const char (*)[60])"[BrickBreakerMultistagePlay] findGallery fail, gallery_id_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_gallery_id = Scene::getGalleryComp(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_gallery_id = (SceneGalleryComp *)&this->gallery_id_;
      __asan_report_load4();
    }
    if ( (unsigned int)SceneGalleryComp::forceStopAndClearGallery(p_gallery_id, this->gallery_id_, 0, GALLERY_STOP_NONE) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
        "tryEndBrickBreakerGallery",
        713);
      v5 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
             &v8,
             (const char (*)[73])"[BrickBreakerMultistagePlay] forceStopAndClearGallery fail, gallery_id_:");
    }
    else
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
        "tryEndBrickBreakerGallery",
        716);
      v5 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v8,
             (const char (*)[55])"[BrickBreakerMultistagePlay] forceStopAndClearGallery:");
    }
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

// Line 721: range 000000001805A936-000000001805AB1B
void __cdecl BrickBreakerMultistagePlay::initPlayerBornOrder(BrickBreakerMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rdx
  uint32_t v5; // r13d
  char *v6; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v7; // rax
  uint32_t *v8; // rdx
  char v9; // cl
  uint32_t index; // [rsp+14h] [rbp-8Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-78h]
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 uid:723";
  *(_QWORD *)(v1 + 16) = BrickBreakerMultistagePlay::initPlayerBornOrder;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  index = 0;
  __for_range = &this->player_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->player_uid_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v4;
    v5 = index++;
    v6 = (char *)(v1 + 32);
    v7 = std::unordered_map<unsigned int,unsigned int>::operator[](
           &this->player_born_map_,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v1 + 32));
    v8 = v7;
    v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
    {
      LOBYTE(v6) = v9 != 0;
      __asan_report_store4(v7, v6, (_BYTE)v7);
    }
    *v8 = v5;
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 730: range 000000001805AB1C-000000001805AC29
__int64 __fastcall BrickBreakerMultistagePlay::getPlayerBornConfigIndex(
        BrickBreakerMultistagePlay *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v5; // rdx
  __int64 result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:729";
  *(_QWORD *)(v2 + 16) = BrickBreakerMultistagePlay::getPlayerBornConfigIndex;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  v5 = std::unordered_map<unsigned int,unsigned int>::operator[](
         &this->player_born_map_,
         (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  result = *v5;
  if ( v7 == (char *)v2 )
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

// Line 735: range 000000001805AC2A-000000001805AFF1
__int64 __fastcall BrickBreakerMultistagePlay::getPlayerBornPos(
        BrickBreakerMultistagePlay *const this,
        uint32_t uid,
        Vector3 *born_pos,
        Vector3 *born_rot)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  uint32_t level_id; // r15d
  uint32_t v10; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  const ActivityBrickBreakerExcelConfigMgr *p_activity_brick_breaker_config_mgr; // [rsp+8h] [rbp-F8h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<Config> v19; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 14 born_index:741 64 4 7 uid:734";
  *(_QWORD *)(v4 + 16) = BrickBreakerMultistagePlay::getPlayerBornPos;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = uid;
  if ( !SceneMultistagePlay::isPlayerInPlay(this, *(_DWORD *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "getPlayerBornPos",
      738);
    v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v20,
           (const char (*)[57])"[BrickBreakerMultistagePlay] player is not in play ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(_DWORD *)(v4 + 48) = BrickBreakerMultistagePlay::getPlayerBornConfigIndex(this, *(_DWORD *)(v4 + 64));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    p_activity_brick_breaker_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    level_id = this->level_id_;
    v10 = *(_DWORD *)(v4 + 48);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    LOBYTE(v10) = ActivityBrickBreakerExcelConfigMgr::findBornPosRot(
                    p_activity_brick_breaker_config_mgr,
                    &v11->design_config.txt_config_mgr,
                    v10,
                    level_id,
                    born_pos,
                    born_rot) != 0;
    std::shared_ptr<Config>::~shared_ptr(&v19);
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( (_BYTE)v10 )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
        "getPlayerBornPos",
        744);
      v12 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v20,
              (const char (*)[57])"[BrickBreakerMultistagePlay] findBornPosRot failed, uid:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 64));
      v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])", born_index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 751: range 000000001805AFF2-000000001805B113
bool __cdecl BrickBreakerMultistagePlay::checkPlayCanContinue(BrickBreakerMultistagePlay *const this)
{
  std::set<unsigned int>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self v3; // [rsp+20h] [rbp-40h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v5; // [rsp+30h] [rbp-30h] BYREF

  if ( std::set<unsigned int>::size(&this->enter_uid_set_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __x = Scene::getOwnerUid(this->scene_);
    __y._M_node = std::set<unsigned int>::find(&this->enter_uid_set_, &__x)._M_node;
    v3._M_node = std::set<unsigned int>::end(&this->enter_uid_set_)._M_node;
    return std::operator!=(&v3, &__y);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "checkPlayCanContinue",
      755);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      &v5,
      (const char (*)[54])"[BrickBreakerMultistagePlay] player number not enough");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
};

// Line 764: range 000000001805B114-000000001805B39A
void __cdecl BrickBreakerMultistagePlay::handleExceptionQuitSettle(BrickBreakerMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  SceneMultistagePlayComp *MultistagePlayComp; // r15
  uint32_t play_index; // r14d
  Group *v6; // rax
  SceneTransferGuardComp *TransferGuardComp; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 group_ptr:766";
  *(_QWORD *)(v1 + 16) = BrickBreakerMultistagePlay::handleExceptionQuitSettle;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v1 + 32));
  if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.cpp",
      "handleExceptionQuitSettle",
      769);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v8, (const char (*)[18])"group_ptr nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MultistagePlayComp = Scene::getMultistagePlayComp(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    play_index = this->play_index_;
    v6 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    SceneMultistagePlayComp::endPlay(MultistagePlayComp, v6, play_index, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    TransferGuardComp = Scene::getTransferGuardComp(this->scene_);
    SceneTransferGuardComp::stopTransferGuard(TransferGuardComp, 1);
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 779: range 000000001805B39C-000000001805B4E7
void __cdecl BrickBreakerMultistagePlay::notifyNpcTalkStateChange(
        BrickBreakerMultistagePlay *const this,
        Player *player,
        bool is_ban)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 10 notify:780";
  *(_QWORD *)(v3 + 16) = BrickBreakerMultistagePlay::notifyNpcTalkStateChange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  proto::NpcTalkStateNotify::NpcTalkStateNotify((proto::NpcTalkStateNotify *const)(v3 + 32));
  proto::NpcTalkStateNotify::set_is_ban((proto::NpcTalkStateNotify *const)(v3 + 32), is_ban);
  Player::sendProto(player, (const google::protobuf::Message *)(v3 + 32));
  proto::NpcTalkStateNotify::~NpcTalkStateNotify((proto::NpcTalkStateNotify *const)(v3 + 32));
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 786: range 000000001805B4E8-000000001805B6F8
std::vector<unsigned int> *__fastcall BrickBreakerMultistagePlay::findBrickBreakerChosenSkill(
        std::vector<unsigned int> *retstr,
        BrickBreakerMultistagePlay *const this,
        uint32_t uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:785 64 8 8 iter:787";
  *(_QWORD *)(v3 + 16) = BrickBreakerMultistagePlay::findBrickBreakerChosenSkill;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = uid;
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                         &this->uid_2_skill_map_,
                                                                                         (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(&this->uid_2_skill_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 64),
         &__y) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
    std::vector<unsigned int>::vector(retstr, &v6->second);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<unsigned int>::vector(retstr);
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};
