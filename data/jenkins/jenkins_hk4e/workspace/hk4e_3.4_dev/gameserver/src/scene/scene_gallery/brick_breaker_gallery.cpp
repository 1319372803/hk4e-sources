// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/brick_breaker_gallery.cpp

// Line 28: range 00000000179CCBB6-00000000179CCCE2
void __cdecl BrickBreakerGallery::toClient(BrickBreakerGallery *const this, proto::SceneGalleryInfo *client_info)
{
  proto::SceneGalleryBrickBreakerInfo *info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  info = proto::SceneGalleryInfo::mutable_brick_breaker_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_.score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snap_shot_.score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryBrickBreakerInfo::set_score(info, this->snap_shot_.score);
  if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_.combo >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->snap_shot_.combo >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryBrickBreakerInfo::set_combo(info, this->snap_shot_.combo);
  if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_.life_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->snap_shot_.life_count >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryBrickBreakerInfo::set_life_count(info, this->snap_shot_.life_count);
};

// Line 37: range 00000000179CCCE4-00000000179CD4D4
void __cdecl BrickBreakerGallery::getBrickPlayerSkill(
        BrickBreakerGallery *const this,
        Player *player,
        std::vector<unsigned int> *chosen_skill_vec,
        std::vector<unsigned int> *chosen_skill_level_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  BrickBreakerMultistagePlay *v9; // rax
  PlayerSceneComp *SceneComp; // rax
  BrickBreakerActivity *v11; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v12; // rdx
  BrickBreakerActivity *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::vector<unsigned int>::size_type v15; // rdx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v16; // rdx
  BrickBreakerActivity *v17; // rax
  uint32_t skill_id; // [rsp+2Ch] [rbp-154h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-150h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-148h] BYREF
  const ActivityBrickBreakerExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-140h]
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-138h]
  std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-130h]
  const data::BrickBreakerSkillExcelConfig *skill_config_ptr; // [rsp+58h] [rbp-128h]
  std::shared_ptr<Config> v27; // [rsp+60h] [rbp-120h] BYREF
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-110h] BYREF
  char v29[240]; // [rsp+90h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 13 player_uid:38 48 4 11 skill_id:69 64 16 15 activity_ptr:39 96 16 11 play_ptr:45 128 24"
                        " 20 chosen_avatar_vec:59";
  *(_QWORD *)(v4 + 16) = BrickBreakerGallery::getBrickPlayerSkill;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 32) = Player::getUid(player);
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<BrickBreakerActivity>((PlayerActivityComp *const)(v4 + 64));
  if ( std::operator==<BrickBreakerActivity>((const std::shared_ptr<BrickBreakerActivity> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
      "getBrickPlayerSkill",
      42);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v28, (const char (*)[9])"player: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v8, (const char (*)[20])" activity is closed");
    common::milog::MiLogStream::~MiLogStream(&v28);
    goto LABEL_31;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getMultistagePlayComp(this->scene_);
  SceneMultistagePlayComp::findPlay<BrickBreakerMultistagePlay>((const SceneMultistagePlayComp *const)(v4 + 96));
  if ( std::operator!=<BrickBreakerMultistagePlay>(0LL, (const std::shared_ptr<BrickBreakerMultistagePlay> *)(v4 + 96)) )
  {
    v9 = std::__shared_ptr_access<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    BrickBreakerMultistagePlay::findBrickBreakerChosenSkill(
      (std::vector<unsigned int> *)(v4 + 128),
      v9,
      *(_DWORD *)(v4 + 32));
    std::vector<unsigned int>::operator=(chosen_skill_vec, (std::vector<unsigned int> *)(v4 + 128));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 128));
LABEL_15:
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v27);
    __for_range = &config_mgr->default_load_skill_set;
    __for_begin._M_node = std::set<unsigned int>::begin(&config_mgr->default_load_skill_set)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(&config_mgr->default_load_skill_set)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v12 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 48) = *v12;
      v13 = std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( BrickBreakerActivity::getBrickBreakerSkillLevel(v13, *(_DWORD *)(v4 + 48)) )
      {
        skill_config_ptr = data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerSkillExcelConfig(
                             config_mgr,
                             *(_DWORD *)(v4 + 48));
        if ( skill_config_ptr )
        {
          if ( !common::tools::MiscUtils::isContains<unsigned int>(
                  chosen_skill_vec,
                  &skill_config_ptr->advanced_skill_id) )
            std::vector<unsigned int>::emplace_back<unsigned int &>(
              chosen_skill_vec,
              (unsigned int *)(v4 + 48),
              (unsigned int *)(v4 + 48));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
            "getBrickPlayerSkill",
            79);
          v14 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                  &v28,
                  (const char (*)[66])"[BrickBreaker] findBrickBreakerSkillExcelConfig failed, skill_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v28);
        }
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    std::vector<unsigned int>::clear(chosen_skill_level_vec);
    v15 = std::vector<unsigned int>::size(chosen_skill_vec);
    std::vector<unsigned int>::reserve(chosen_skill_level_vec, v15);
    __for_range_0 = chosen_skill_vec;
    __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::begin(chosen_skill_vec)._M_current;
    __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
    {
      v16 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      skill_id = *v16;
      v17 = std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      *(_DWORD *)(v4 + 48) = BrickBreakerActivity::getBrickBreakerSkillLevel(v17, skill_id);
      std::vector<unsigned int>::emplace_back<int>(chosen_skill_level_vec, (int *)(v4 + 48), (int *)(v4 + 48));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    }
    goto LABEL_30;
  }
  SceneComp = Player::getSceneComp(player);
  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 128));
    v11 = std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( BrickBreakerActivity::getCurAvatarAndSkillVec(v11, (std::vector<unsigned int> *)(v4 + 128), chosen_skill_vec) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
        "getBrickPlayerSkill",
        63);
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
        &v28,
        (const char (*)[44])"[BrickBreaker] getCurAvatarAndSkillVec fail");
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 128));
    goto LABEL_15;
  }
  common::milog::MiLogStream::create(
    &v28,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
    "getBrickPlayerSkill",
    56);
  common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v28, (const char (*)[25])"player not in self world");
  common::milog::MiLogStream::~MiLogStream(&v28);
LABEL_30:
  std::shared_ptr<BrickBreakerMultistagePlay>::~shared_ptr((std::shared_ptr<BrickBreakerMultistagePlay> *const)(v4 + 96));
LABEL_31:
  std::shared_ptr<BrickBreakerActivity>::~shared_ptr((std::shared_ptr<BrickBreakerActivity> *const)(v4 + 64));
  if ( v29 == (char *)v4 )
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
};

// Line 98: range 00000000179CDB56-00000000179CE7DE
void __cdecl BrickBreakerGallery::onPreStart(BrickBreakerGallery *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool v4; // r14
  Scene *scene; // r14
  BrickBreakerGallery *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t Uid; // edx
  char v11; // al
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rdx
  Player *v13; // rax
  uint32_t AvatarComp; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Player *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  BrickBreakerActivity *v21; // rax
  common::milog::MiLogStream *v22; // rax
  Player *v23; // rax
  PlayerMpComp *MpComp; // rax
  Player *v25; // rax
  PlayerAvatarComp *v26; // r14
  unsigned __int64 v27; // rax
  bool v28; // r14
  common::milog::MiLogStream *v29; // rax
  Player *v30; // rax
  PlayerAvatarComp *v31; // r14
  unsigned __int64 v32; // rax
  common::milog::MiLogStream *v33; // rax
  SceneGalleryComp *GalleryComp; // rdi
  int32_t ret; // [rsp+1Ch] [rbp-154h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-150h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  unsigned __int64 __args_0; // [rsp+30h] [rbp-140h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-138h]
  common::milog::MiLogStream v41; // [rsp+40h] [rbp-130h] BYREF
  char v42[272]; // [rsp+60h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 13 avatar_id:150 64 16 20 owner_player_ptr:141 96 16 16 activity_ptr:167 128 16 21 formal"
                        "_avatar_ptr:153 160 24 19 avatar_guid_vec:149";
  *(_QWORD *)(v1 + 16) = BrickBreakerGallery::onPreStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  *(_QWORD *)(v1 + 160) = 0LL;
  *(_QWORD *)(v1 + 168) = 0LL;
  *(_QWORD *)(v1 + 176) = 0LL;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 160));
  v4 = (unsigned int)BaseGallery::attachAbilityGroup(
                       (BaseGallery *const)this,
                       (const std::vector<unsigned int> *)(v1 + 160),
                       0) != 0;
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 160));
  if ( v4 )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
      "onPreStart",
      102);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v41,
      (const char (*)[41])"[BrickBreaker] attachAbilityGroup failed");
    common::milog::MiLogStream::~MiLogStream(&v41);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  std::function<ForeachPolicy ()(Player &)>::function<BrickBreakerGallery::onPreStart(void)::{lambda(Player &)#1},void,void>(
    (std::function<ForeachPolicy(Player&)> *const)&v41,
    (BrickBreakerGallery::onPreStart::<lambda(Player&)>)this);
  Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v41);
  std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v41);
  if ( *(char *)(((unsigned __int64)&this->is_need_set_team_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_need_set_team_);
  if ( this->is_need_set_team_ )
  {
    ret = 0;
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, BrickBreakerGallery *))v7)(v1 + 64, v6);
    v8 = 0LL;
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
        "onPreStart",
        144);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v41,
        (const char (*)[25])"owner_player_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v41);
      ret = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      Uid = Player::getUid(v9);
      v11 = *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v8) = v11 != 0;
        __asan_report_store4(&this->owner_uid_, v8, Uid);
      }
      this->owner_uid_ = Uid;
      std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v1 + 160));
      __for_range = &this->enter_scene_avatar_id_vec_;
      __for_begin._M_current = std::vector<unsigned int>::begin(&this->enter_scene_avatar_id_vec_)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&this->enter_scene_avatar_id_vec_)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 48) = *v12;
        v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        AvatarComp = (unsigned int)Player::getAvatarComp(v13);
        PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v1 + 128), AvatarComp);
        if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v1 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
            "onPreStart",
            156);
          v15 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v41,
                  (const char (*)[41])"[BrickBreaker] formal_avatar_ptr nullptr");
          v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])", avatar_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v41);
        }
        else
        {
          v17 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
          __args_0 = Avatar::getGuid(v17);
          std::vector<unsigned long>::emplace_back<unsigned long>(
            (std::vector<long unsigned int> *const)(v1 + 160),
            &__args_0,
            &__args_0);
        }
        std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v1 + 128));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v1 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
          "onPreStart",
          163);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          &v41,
          (const char (*)[37])"[BrickBreaker] avatar_guid_vec empty");
        common::milog::MiLogStream::~MiLogStream(&v41);
        ret = -1;
      }
      else
      {
        v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        Player::getActivityComp(v18);
        PlayerActivityComp::findOpenningActivity<BrickBreakerActivity>((PlayerActivityComp *const)(v1 + 96));
        if ( std::operator==<BrickBreakerActivity>((const std::shared_ptr<BrickBreakerActivity> *)(v1 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
            "onPreStart",
            170);
          v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v41, (const char (*)[9])"player: ");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->owner_uid_);
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v20,
            (const char (*)[20])" activity is closed");
          common::milog::MiLogStream::~MiLogStream(&v41);
          ret = -1;
        }
        else
        {
          v21 = std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          if ( BrickBreakerActivity::checkAndReviveAvatar(v21, (const std::vector<long unsigned int> *)(v1 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
              "onPreStart",
              177);
            v22 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    &v41,
                    (const char (*)[61])"[BrickBreaker] checkAndReviveAvatar failed, avatar_guid_vec:");
            common::milog::MiLogStream::operator<<<unsigned long>(
              v22,
              (const std::vector<long unsigned int> *)(v1 + 160));
            common::milog::MiLogStream::~MiLogStream(&v41);
            ret = -1;
          }
          else
          {
            v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            MpComp = Player::getMpComp(v23);
            if ( PlayerMpComp::isInMpMode(MpComp) )
            {
              v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
              v26 = Player::getAvatarComp(v25);
              if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              toThisPtr<Scene>((Scene *)(v1 + 128));
              v27 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                        (std::vector<long unsigned int> *const)(v1 + 160),
                                        0LL);
              if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
                v27 = __asan_report_load8();
              v28 = PlayerAvatarComp::setSceneTeamAndAddToScene(
                      v26,
                      (const std::vector<long unsigned int> *)(v1 + 160),
                      *(_QWORD *)v27,
                      (ScenePtr *)(v1 + 128),
                      CHANGE_SCENE_TEAM_REASON_BRICK_BREAKER) != 0;
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 128));
              if ( v28 )
              {
                common::milog::MiLogStream::create(
                  &v41,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
                  "onPreStart",
                  186);
                v29 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                        &v41,
                        (const char (*)[66])"[BrickBreaker] setSceneTeamAndAddToScene failed, avatar_guid_vec:");
                common::milog::MiLogStream::operator<<<unsigned long>(
                  v29,
                  (const std::vector<long unsigned int> *)(v1 + 160));
                common::milog::MiLogStream::~MiLogStream(&v41);
                ret = -1;
              }
            }
            else
            {
              v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
              v31 = Player::getAvatarComp(v30);
              v32 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                        (std::vector<long unsigned int> *const)(v1 + 160),
                                        0LL);
              if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
                v32 = __asan_report_load8();
              if ( PlayerAvatarComp::lockTeamAvatar(
                     v31,
                     *(_QWORD *)v32,
                     (const std::vector<long unsigned int> *)(v1 + 160),
                     CHANGE_SCENE_TEAM_REASON_BRICK_BREAKER) )
              {
                common::milog::MiLogStream::create(
                  &v41,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
                  "onPreStart",
                  196);
                v33 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                        &v41,
                        (const char (*)[55])"[BrickBreaker] lockTeamAvatar failed, avatar_guid_vec:");
                common::milog::MiLogStream::operator<<<unsigned long>(
                  v33,
                  (const std::vector<long unsigned int> *)(v1 + 160));
                common::milog::MiLogStream::~MiLogStream(&v41);
                ret = -1;
              }
            }
          }
        }
        std::shared_ptr<BrickBreakerActivity>::~shared_ptr((std::shared_ptr<BrickBreakerActivity> *const)(v1 + 96));
      }
      std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v1 + 160));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
    if ( ret )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GalleryComp = Scene::getGalleryComp(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        GalleryComp = (SceneGalleryComp *)&this->gallery_id_;
        __asan_report_load4();
      }
      SceneGalleryComp::forceStopAndClearGallery(GalleryComp, this->gallery_id_, 0, GALLERY_STOP_NONE);
    }
  }
  if ( v42 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 105: range 00000000179CD4D6-00000000179CDB54
ForeachPolicy __cdecl BrickBreakerGallery::onPreStart(void)::{lambda(Player &)#1}::operator()(
        const BrickBreakerGallery::onPreStart::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  ForeachPolicy result; // eax
  uint32_t ability_group_index; // [rsp+14h] [rbp-18Ch]
  BaseGallery *this; // [rsp+18h] [rbp-188h]
  std::allocator<unsigned int> __a; // [rsp+3Bh] [rbp-165h] BYREF
  _DWORD __l[5]; // [rsp+3Ch] [rbp-164h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-150h]
  const data::BrickBreakerSkillExcelConfig *skill_config_ptr; // [rsp+58h] [rbp-148h]
  std::shared_ptr<Config> v17; // [rsp+60h] [rbp-140h] BYREF
  std::vector<unsigned int> uid_vec; // [rsp+70h] [rbp-130h] BYREF
  common::milog::MiLogStream v19; // [rsp+90h] [rbp-110h] BYREF
  char v20[240]; // [rsp+B0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 14 player_uid:107 48 4 12 skill_id:116 64 24 20 chosen_skill_vec:113 128 24 26 chosen_ski"
                        "ll_level_vec:114";
  *(_QWORD *)(v2 + 16) = BrickBreakerGallery::onPreStart(void)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 32) = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
          &__closure->__this->player_info_map_,
          (const unsigned int *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
      "operator()",
      110);
    v5 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v19, (const char (*)[9])"player: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])off_26271300);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BrickBreakerGallery::getBrickPlayerSkill(
      __closure->__this,
      player,
      (std::vector<unsigned int> *)(v2 + 64),
      (std::vector<unsigned int> *)(v2 + 128));
    __for_range = (std::vector<unsigned int> *)(v2 + 64);
    *(std::vector<unsigned int>::iterator *)&__l[1] = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64));
    *(std::vector<unsigned int>::iterator *)&__l[3] = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 64));
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__l[1],
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__l[3]) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__l[1]);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = *v7;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v17);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
      skill_config_ptr = data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerSkillExcelConfig(
                           &v8->design_config.txt_config_mgr.activity_brick_breaker_config_mgr,
                           *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v17);
      if ( skill_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&skill_config_ptr->ability_group_index >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)skill_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config_ptr->ability_group_index >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( skill_config_ptr->ability_group_index )
        {
          if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          this = (BaseGallery *)__closure->__this;
          ability_group_index = skill_config_ptr->ability_group_index;
          __l[0] = *(_DWORD *)(v2 + 32);
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(&uid_vec, (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l), &__a);
          LOBYTE(this) = (unsigned int)BaseGallery::attachAbilityGroup(this, &uid_vec, ability_group_index) != 0;
          std::vector<unsigned int>::~vector(&uid_vec);
          std::allocator<unsigned int>::~allocator(&__a);
          if ( (_BYTE)this )
          {
            common::milog::MiLogStream::create(
              &v19,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
              "operator()",
              128);
            common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v19,
              (const char (*)[41])"[BrickBreaker] attachAbilityGroup failed");
            common::milog::MiLogStream::~MiLogStream(&v19);
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
          "operator()",
          121);
        v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
               &v19,
               (const char (*)[66])"[BrickBreaker] findBrickBreakerSkillExcelConfig failed, skill_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__l[1]);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  }
  result = FOREACH_CONTINUE;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 210: range 00000000179CE9A2-00000000179CEDA9
void __cdecl BrickBreakerGallery::onStart(BrickBreakerGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  SceneTimer *v5; // rax
  common::milog::MiLogStream *v6; // rax
  BrickBreakerGallery::onStart::<lambda(uint64_t)> __args_1; // [rsp+10h] [rbp-E0h] BYREF
  std::weak_ptr<BrickBreakerGallery> v8; // [rsp+20h] [rbp-D0h] BYREF
  std::enable_shared_from_this<BaseGallery> v9; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:211 64 16 12 this_wtr:212";
  *(_QWORD *)(v1 + 16) = BrickBreakerGallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseGallery>::shared_from_this(&v9);
  std::dynamic_pointer_cast<BrickBreakerGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)(v1 + 32));
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)&v9);
  std::weak_ptr<BrickBreakerGallery>::weak_ptr<BrickBreakerGallery,void>(
    (std::weak_ptr<BrickBreakerGallery> *const)(v1 + 64),
    (const std::shared_ptr<BrickBreakerGallery> *)(v1 + 32));
  std::weak_ptr<BrickBreakerGallery>::weak_ptr(&v8, (const std::weak_ptr<BrickBreakerGallery> *)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Scene,Scene>((Scene *)&__args_1);
  common::tools::perf::make_shared<SceneTimer,std::shared_ptr<Scene>,BrickBreakerGallery::onStart(void)::{lambda(unsigned long)#1}>(
    (std::shared_ptr<Scene> *)&v9,
    &__args_1,
    (std::shared_ptr<Scene> *)&v8,
    &__args_1);
  std::shared_ptr<SceneTimer>::operator=(&this->breakout_log_timer_ptr_, (std::shared_ptr<SceneTimer> *)&v9);
  std::shared_ptr<SceneTimer>::~shared_ptr((std::shared_ptr<SceneTimer> *const)&v9);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&__args_1);
  BrickBreakerGallery::onStart(void)::{lambda(unsigned long)#1}::~onStart((BrickBreakerGallery::onStart::<lambda(uint64_t)> *const)&v8);
  if ( std::operator==<SceneTimer>(&this->breakout_log_timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
      "onStart",
      226);
    v4 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v10,
           (const char (*)[60])"[BrickBreaker] breakout_log_timer_ptr_ is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    v5 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->breakout_log_timer_ptr_);
    if ( SceneTimer::startS(v5, 0xAu, 1, "./src/scene/scene_gallery/brick_breaker_gallery.cpp", "onStart", 229) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
        "onStart",
        231);
      v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v10,
             (const char (*)[55])"[BrickBreaker] gallery timer start failed, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
  }
  std::weak_ptr<BrickBreakerGallery>::~weak_ptr((std::weak_ptr<BrickBreakerGallery> *const)(v1 + 64));
  std::shared_ptr<BrickBreakerGallery>::~shared_ptr((std::shared_ptr<BrickBreakerGallery> *const)(v1 + 32));
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 213: range 00000000179EB9AE-00000000179EB9D3
void __cdecl BrickBreakerGallery::onStart(void)::{lambda(unsigned long)#1}::onStart(
        BrickBreakerGallery::onStart::<lambda(uint64_t)> *const this,
        BrickBreakerGallery::onStart::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BrickBreakerGallery>::weak_ptr(&this->__this_wtr, &a2->__this_wtr);
};

// Line 213: range 00000000179EC480-00000000179EC4A5
void __cdecl BrickBreakerGallery::onStart(void)::{lambda(unsigned long)#1}::onStart(
        BrickBreakerGallery::onStart::<lambda(uint64_t)> *const this,
        const BrickBreakerGallery::onStart::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BrickBreakerGallery>::weak_ptr(&this->__this_wtr, &a2->__this_wtr);
};

// Line 213: range 00000000179CE7E0-00000000179CE984
void __cdecl BrickBreakerGallery::onStart(void)::{lambda(unsigned long)#1}::operator()(
        const BrickBreakerGallery::onStart::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  BrickBreakerGallery *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 gallery_ptr:215";
  *(_QWORD *)(v2 + 16) = BrickBreakerGallery::onStart(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<BrickBreakerGallery>::lock((const std::weak_ptr<BrickBreakerGallery> *const)(v2 + 32));
  if ( std::operator==<BrickBreakerGallery>((const std::shared_ptr<BrickBreakerGallery> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
      "operator()",
      218);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      &v6,
      (const char (*)[52])"[BrickBreaker] gallery is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v5 = std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BrickBreakerGallery::onBreakoutLogTimer(v5);
  }
  std::shared_ptr<BrickBreakerGallery>::~shared_ptr((std::shared_ptr<BrickBreakerGallery> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 213: range 00000000179CE986-00000000179CE9A0
void __cdecl BrickBreakerGallery::onStart(void)::{lambda(unsigned long)#1}::~onStart(
        BrickBreakerGallery::onStart::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<BrickBreakerGallery>::~weak_ptr(&this->__this_wtr);
};

// Line 237: range 00000000179CEDAA-00000000179CEDF8
void __cdecl BrickBreakerGallery::onBreakoutLogTimer(BrickBreakerGallery *const this)
{
  std::vector<unsigned int>::emplace_back<unsigned int &>(
    &this->score_vec_,
    &this->snap_shot_.score,
    &this->snap_shot_.score);
  std::vector<unsigned int>::emplace_back<unsigned int &>(
    &this->remaining_boss_hp_vec_,
    &this->snap_shot_.remaining_boss_hp,
    &this->snap_shot_.remaining_boss_hp);
};

// Line 243: range 00000000179CEEE4-00000000179CF91D
void __cdecl BrickBreakerGallery::onStop(BrickBreakerGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  uint32_t *p_gallery_id; // rsi
  uint32_t v7; // r14d
  std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  char v9; // cl
  uint32_t score; // r14d
  __int64 v11; // rax
  char v12; // dl
  bool v13; // dl
  __int64 v14; // rsi
  uint32_t life_count; // r14d
  std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  char v17; // cl
  uint32_t max_combo; // r14d
  __int64 v19; // rax
  char v20; // dl
  bool v21; // dl
  uint32_t remaining_boss_hp; // r14d
  std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  char v24; // cl
  std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::vector<unsigned int> *p_remaining_boss_hp_vec; // rsi
  __int64 v30; // rax
  char v31; // dl
  bool v32; // dl
  __int64 v33; // rax
  char v34; // dl
  bool v35; // dl
  __int64 v36; // rax
  char v37; // dl
  bool v38; // dl
  __int64 v39; // rax
  char v40; // dl
  bool v41; // dl
  Scene *scene; // r14
  GameserverService *v43; // rax
  uint32_t v44; // ecx
  common::milog::MiLogStream *v45; // rax
  Player *v46; // rax
  PlayerMpComp *MpComp; // rax
  Player *v48; // rax
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  uint32_t now; // [rsp+1Ch] [rbp-D4h]
  BrickBreakerGallery::onStop::<lambda(Player&)> v55; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v56; // [rsp+40h] [rbp-B0h] BYREF
  char v57[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 event_ptr:246 64 16 14 player_ptr:273";
  *(_QWORD *)(v2 + 16) = BrickBreakerGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  common::milog::MiLogStream::create(
    &v56,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
    "onStop",
    244);
  v5 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
         &v56,
         (const char (*)[62])"[BrickBreaker] BrickBreakerGallery::onStop is_need_set_team_:");
  if ( *(char *)(((unsigned __int64)&this->is_need_set_team_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_need_set_team_);
  common::milog::MiLogStream::operator<<(v5, this->is_need_set_team_);
  common::milog::MiLogStream::~MiLogStream(&v56);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  now = Scene::getSceneTimeSeconds(this->scene_);
  p_gallery_id = &this->gallery_id_;
  common::tools::perf::make_shared<GalleryBrickBreakerSettleEvent,unsigned int &>(
    (unsigned int *)(v2 + 32),
    &this->gallery_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( now <= this->start_time_ )
    v7 = 0;
  else
    v7 = now - this->start_time_;
  v8 = std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v9 = *(_BYTE *)(((unsigned __int64)&v8->time >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)((((_BYTE)v8 + 28) & 7) + 3) >= v9 )
  {
    LOBYTE(p_gallery_id) = v9 != 0;
    __asan_report_store4(&v8->time, p_gallery_id, (_BYTE)v8);
  }
  v8->time = v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_.score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snap_shot_.score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  score = this->snap_shot_.score;
  v11 = (__int64)std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v12 = *(_BYTE *)(((unsigned __int64)(v11 + 32) >> 3) + 0x7FFF8000);
  LOBYTE(p_gallery_id) = v12 != 0;
  v13 = v12 != 0 && v12 <= 3;
  if ( v13 )
    v11 = __asan_report_store4(v11 + 32, p_gallery_id, v13);
  *(_DWORD *)(v11 + 32) = score;
  v14 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_.life_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->snap_shot_.life_count >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  life_count = this->snap_shot_.life_count;
  v16 = std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v17 = *(_BYTE *)(((unsigned __int64)&v16->life_count >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)v16 + 36) & 7) + 3) >= v17 )
  {
    LOBYTE(v14) = v17 != 0;
    __asan_report_store4(&v16->life_count, v14, (_BYTE)v16);
  }
  v16->life_count = life_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_.max_combo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snap_shot_.max_combo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  max_combo = this->snap_shot_.max_combo;
  v19 = (__int64)std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v20 = *(_BYTE *)(((unsigned __int64)(v19 + 40) >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v20 != 0;
  v21 = v20 != 0 && v20 <= 3;
  if ( v21 )
    v19 = __asan_report_store4(v19 + 40, v14, v21);
  *(_DWORD *)(v19 + 40) = max_combo;
  if ( *(_BYTE *)(((unsigned __int64)&this->snap_shot_.remaining_boss_hp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snap_shot_.remaining_boss_hp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  remaining_boss_hp = this->snap_shot_.remaining_boss_hp;
  v23 = std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v24 = *(_BYTE *)(((unsigned __int64)&v23->remaining_boss_hp >> 3) + 0x7FFF8000);
  if ( v24 != 0 && (char)((((_BYTE)v23 + 44) & 7) + 3) >= v24 )
  {
    LOBYTE(v14) = v24 != 0;
    __asan_report_store4(&v23->remaining_boss_hp, v14, (_BYTE)v23);
  }
  v23->remaining_boss_hp = remaining_boss_hp;
  v25 = std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  std::vector<proto::BreakoutElementReactionCounter>::operator=(
    &v25->ball_element_reaction_vec,
    &this->snap_shot_.ball_element_reaction_vec);
  v26 = std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  std::vector<proto::BreakoutElementReactionCounter>::operator=(
    &v26->brick_element_reaction_vec,
    &this->snap_shot_.brick_element_reaction_vec);
  v27 = std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  std::vector<unsigned int>::operator=(&v27->score_vec, &this->score_vec_);
  v28 = std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  p_remaining_boss_hp_vec = &this->remaining_boss_hp_vec_;
  std::vector<unsigned int>::operator=(&v28->remaining_boss_hp_vec, &this->remaining_boss_hp_vec_);
  switch ( reason )
  {
    case GALLERY_STOP_LUA_INTERRUPT_SUCCESS:
      v30 = (__int64)std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v31 = *(_BYTE *)(((unsigned __int64)(v30 + 144) >> 3) + 0x7FFF8000);
      LOBYTE(p_remaining_boss_hp_vec) = v31 != 0;
      v32 = v31 != 0 && v31 <= 3;
      if ( v32 )
        v30 = __asan_report_store4(v30 + 144, p_remaining_boss_hp_vec, v32);
      *(_DWORD *)(v30 + 144) = 1;
      break;
    case GALLERY_STOP_TIMEUP:
      v33 = (__int64)std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v34 = *(_BYTE *)(((unsigned __int64)(v33 + 144) >> 3) + 0x7FFF8000);
      LOBYTE(p_remaining_boss_hp_vec) = v34 != 0;
      v35 = v34 != 0 && v34 <= 3;
      if ( v35 )
        v33 = __asan_report_store4(v33 + 144, p_remaining_boss_hp_vec, v35);
      *(_DWORD *)(v33 + 144) = 0;
      break;
    case GALLERY_STOP_LIFE_COUNT_ZERO:
      v36 = (__int64)std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v37 = *(_BYTE *)(((unsigned __int64)(v36 + 144) >> 3) + 0x7FFF8000);
      LOBYTE(p_remaining_boss_hp_vec) = v37 != 0;
      v38 = v37 != 0 && v37 <= 3;
      if ( v38 )
        v36 = __asan_report_store4(v36 + 144, p_remaining_boss_hp_vec, v38);
      *(_DWORD *)(v36 + 144) = 3;
      break;
    default:
      v39 = (__int64)std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryBrickBreakerSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v40 = *(_BYTE *)(((unsigned __int64)(v39 + 144) >> 3) + 0x7FFF8000);
      LOBYTE(p_remaining_boss_hp_vec) = v40 != 0;
      v41 = v40 != 0 && v40 <= 3;
      if ( v41 )
        v39 = __asan_report_store4(v39 + 144, p_remaining_boss_hp_vec, v41);
      *(_DWORD *)(v39 + 144) = 2;
      break;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  std::shared_ptr<GalleryBrickBreakerSettleEvent>::shared_ptr(
    &v55.__event_ptr,
    (const std::shared_ptr<GalleryBrickBreakerSettleEvent> *)(v2 + 32));
  v55.__this = this;
  std::function<ForeachPolicy ()(Player &)>::function<BrickBreakerGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1},void,void>(
    (std::function<ForeachPolicy(Player&)> *const)&v56,
    &v55);
  Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v56);
  std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v56);
  BrickBreakerGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::~Player(&v55);
  if ( *(char *)(((unsigned __int64)&this->is_need_set_team_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_need_set_team_);
  if ( this->is_need_set_team_ )
  {
    v43 = ServiceBox::findService<GameserverService>();
    v44 = (unsigned int)GameserverService::getGameThreadLocal(v43) + 16;
    if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 64), v44);
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
        "onStop",
        276);
      v45 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v56,
              (const char (*)[40])"[VINTAGE] findPlayer failed, owner_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &this->owner_uid_);
      common::milog::MiLogStream::~MiLogStream(&v56);
    }
    else
    {
      v46 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      MpComp = Player::getMpComp(v46);
      if ( !PlayerMpComp::isInMpMode(MpComp) )
      {
        v48 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        AvatarComp = Player::getAvatarComp(v48);
        PlayerAvatarComp::unlockTeamAvatar(AvatarComp, CHANGE_SCENE_TEAM_REASON_BRICK_BREAKER);
      }
      if ( std::operator!=<SceneTimer>(0LL, &this->breakout_log_timer_ptr_) )
      {
        v50 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->breakout_log_timer_ptr_);
        if ( common::tools::MiTimer::isActive(v50) )
        {
          v52 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->breakout_log_timer_ptr_);
          common::tools::MiTimer::cancel(v52);
        }
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  std::shared_ptr<GalleryBrickBreakerSettleEvent>::~shared_ptr((std::shared_ptr<GalleryBrickBreakerSettleEvent> *const)(v2 + 32));
  if ( v57 == (char *)v2 )
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

// Line 260: range 00000000179CEDFA-00000000179CEEC7
ForeachPolicy __cdecl BrickBreakerGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::operator()(
        const BrickBreakerGallery::onStop::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerEventComp *EventComp; // rbx
  unsigned int value; // [rsp+1Ch] [rbp-24h] BYREF
  std::shared_ptr<BaseEvent> v5; // [rsp+20h] [rbp-20h] BYREF

  value = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
         &__closure->__this->player_info_map_,
         &value) )
  {
    EventComp = Player::getEventComp(player);
    std::shared_ptr<BaseEvent>::shared_ptr<GalleryBrickBreakerSettleEvent,void>(&v5, &__closure->__event_ptr);
    PlayerEventComp::notifyEvent(EventComp, &v5);
    std::shared_ptr<BaseEvent>::~shared_ptr(&v5);
  }
  return 0;
};

// Line 260: range 00000000179E8856-00000000179E88D5
void __cdecl BrickBreakerGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::Player(
        BrickBreakerGallery::onStop::<lambda(Player&)> *const this,
        BrickBreakerGallery::onStop::<lambda(Player&)> *a2)
{
  BrickBreakerGallery *v2; // rdx

  std::shared_ptr<GalleryBrickBreakerSettleEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 260: range 00000000179E89A0-00000000179E8A1F
void __cdecl BrickBreakerGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::Player(
        BrickBreakerGallery::onStop::<lambda(Player&)> *const this,
        const BrickBreakerGallery::onStop::<lambda(Player&)> *a2)
{
  BrickBreakerGallery *v2; // rdx

  std::shared_ptr<GalleryBrickBreakerSettleEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 260: range 00000000179CEEC8-00000000179CEEE2
void __cdecl BrickBreakerGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::~Player(
        BrickBreakerGallery::onStop::<lambda(Player&)> *const this)
{
  std::shared_ptr<GalleryBrickBreakerSettleEvent>::~shared_ptr(&this->__event_ptr);
};

// Line 292: range 00000000179CF91E-00000000179CFA63
int32_t __cdecl BrickBreakerGallery::updatePlayerScoreByMixin(
        BrickBreakerGallery *const this,
        const AbilityBreakoutMixin::BreakoutSnapShot *snap_shot)
{
  common::milog::MiLogStream *v2; // rcx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    AbilityBreakoutMixin::BreakoutSnapShot::operator=(&this->snap_shot_, snap_shot);
    BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/brick_breaker_gallery.cpp",
      "updatePlayerScoreByMixin",
      295);
    v2 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v5,
           (const char (*)[54])"[BrickBreakerGallery] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    val = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
};
