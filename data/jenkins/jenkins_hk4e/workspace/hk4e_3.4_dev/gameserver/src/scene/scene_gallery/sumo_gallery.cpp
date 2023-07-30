// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/sumo_gallery.cpp

// Line 30: range 0000000016897A2A-0000000016897B4E
void __cdecl SumoGallery::toClient(SumoGallery *const this, proto::SceneGalleryInfo *client_info)
{
  proto::SceneGallerySumoInfo *detail_info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  detail_info = proto::SceneGalleryInfo::mutable_sumo_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGallerySumoInfo::set_score(detail_info, this->score_);
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGallerySumoInfo::set_kill_elite_monster_num(detail_info, this->kill_special_monster_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_normal_monster_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_normal_monster_num_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGallerySumoInfo::set_kill_normal_mosnter_num(detail_info, this->kill_normal_monster_num_);
};

// Line 39: range 0000000016897B50-00000000168983B3
void __cdecl SumoGallery::onStart(SumoGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  ActivitySumoExcelConfigMgr *p_activity_sumo_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  __int64 v8; // rsi
  uint32_t activity_id; // ecx
  char v10; // dl
  bool v11; // dl
  __int64 v12; // rsi
  uint32_t difficulty_id; // ecx
  char v14; // dl
  bool v15; // dl
  __int64 v16; // rsi
  uint32_t stage_id; // ecx
  char v18; // al
  std::vector<unsigned int> *p_team_kill_normal_monster_vec; // rcx
  std::vector<unsigned int> *p_team_kill_elite_monster_vec; // rcx
  std::vector<unsigned int> *p_team_score_vec; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  SumoDungeonContext *dungeon_context; // [rsp+20h] [rbp-F0h]
  const data::ActivitySumoDifficultyExcelConfig *difficulty_config_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Scene> v27; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 20 dungeon_scene_ptr:40 64 24 22 dungeon_context_opt:52";
  *(_QWORD *)(v1 + 16) = SumoGallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Scene,Scene>((Scene *)&v27);
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v1 + 32));
  std::shared_ptr<Scene>::~shared_ptr(&v27);
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/sumo_gallery.cpp",
      "onStart",
      43);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v28,
      (const char (*)[39])"[SUMO] cur scene is not dungeon scene!");
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else if ( BaseGallery::getGalleryExcelConfig((const BaseGallery *const)this) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    DungeonScene::getDungeonExtraData<SumoDungeonContext>((std::optional<SumoDungeonContext> *)(v1 + 64), v5);
    if ( !std::optional<SumoDungeonContext>::has_value((const std::optional<SumoDungeonContext> *const)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/sumo_gallery.cpp",
        "onStart",
        55);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v28,
        (const char (*)[35])"[SUMO] dungeon has no sumo context");
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    else
    {
      dungeon_context = std::optional<SumoDungeonContext>::value((std::optional<SumoDungeonContext> *const)(v1 + 64));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v27);
      p_activity_sumo_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.activity_sumo_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_context + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      difficulty_config_ptr = data::ActivitySumoExcelConfigMgrBase::findActivitySumoDifficultyExcelConfig(
                                p_activity_sumo_config_mgr,
                                dungeon_context->difficulty_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v27);
      if ( difficulty_config_ptr )
      {
        v8 = (((_BYTE)dungeon_context + 4) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->activity_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->activity_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        activity_id = dungeon_context->activity_id;
        v10 = *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000);
        LOBYTE(v8) = v10 != 0;
        v11 = v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10;
        if ( v11 )
          __asan_report_store4(&this->activity_id_, v8, v11);
        this->activity_id_ = activity_id;
        v12 = (((_BYTE)dungeon_context + 8) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_context + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        difficulty_id = dungeon_context->difficulty_id;
        v14 = *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3) + 0x7FFF8000);
        LOBYTE(v12) = v14 != 0;
        v15 = v14 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v14;
        if ( v15 )
          __asan_report_store4(&this->difficulty_id_, v12, v15);
        this->difficulty_id_ = difficulty_id;
        v16 = ((unsigned __int8)dungeon_context & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)dungeon_context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_context >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        stage_id = dungeon_context->stage_id;
        v18 = *(_BYTE *)(((unsigned __int64)&this->sumo_stage_id_ >> 3) + 0x7FFF8000);
        if ( v18 != 0 && v18 <= 3 )
        {
          LOBYTE(v16) = v18 != 0;
          __asan_report_store4(&this->sumo_stage_id_, v16, (_BYTE)this + 48);
        }
        this->sumo_stage_id_ = stage_id;
        p_team_kill_normal_monster_vec = &this->team_kill_normal_monster_vec_;
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->team_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_context + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->team_num >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        std::vector<unsigned int>::resize(p_team_kill_normal_monster_vec, dungeon_context->team_num);
        p_team_kill_elite_monster_vec = &this->team_kill_elite_monster_vec_;
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->team_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_context + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->team_num >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        std::vector<unsigned int>::resize(p_team_kill_elite_monster_vec, dungeon_context->team_num);
        p_team_score_vec = &this->team_score_vec_;
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->team_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_context + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->team_num >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        std::vector<unsigned int>::resize(p_team_score_vec, dungeon_context->team_num);
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/sumo_gallery.cpp",
          "onStart",
          71);
        v22 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v28,
                (const char (*)[46])"[SUMO] sumo gallery onStsatr, difficulty_id_:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->difficulty_id_);
        v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])" stgae_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->sumo_stage_id_);
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_gallery/sumo_gallery.cpp",
          "onStart",
          62);
        v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
               &v28,
               (const char (*)[52])"[SUMO] difficulty config not found, difficulty_id_:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &dungeon_context->difficulty_id);
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/sumo_gallery.cpp",
      "onStart",
      49);
    v4 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v28,
           (const char (*)[47])"[SUMO] gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
  if ( v29 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 75: range 00000000168983B4-00000000168989BB
void __cdecl SumoGallery::onStop(SumoGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  SumoGallery *v5; // rdx
  unsigned __int64 v6; // rax
  Player *v7; // rax
  PlayerEventComp *EventComp; // r14
  __int64 v9; // rsi
  bool v10; // dl
  __int64 v11; // rsi
  bool v12; // dl
  bool v13; // dl
  unsigned int *v14; // [rsp+0h] [rbp-110h]
  unsigned int *v15; // [rsp+8h] [rbp-108h]
  unsigned int *v16; // [rsp+10h] [rbp-100h]
  SumoGallery *thisa; // [rsp+18h] [rbp-F8h]
  unsigned int *v18; // [rsp+20h] [rbp-F0h]
  std::vector<unsigned int> *v19; // [rsp+28h] [rbp-E8h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-D0h] BYREF
  unsigned int v22[44]; // [rsp+60h] [rbp-B0h] BYREF

  HIDWORD(v16) = reason;
  v2 = (unsigned __int64)v22;
  v15 = v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 duration:85 64 16 19 owner_player_ptr:77 96 16 12 event_ptr:87";
  *(_QWORD *)(v2 + 16) = SumoGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  BYTE3(v19) = 0;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, SumoGallery *))v6)(v2 + 64, v5);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/sumo_gallery.cpp",
      "onStop",
      80);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v21,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HIDWORD(v19) = Scene::getSceneTimeSeconds(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = HIDWORD(v19) - this->start_time_;
    BYTE2(v19) = BYTE3(v19) ^ 1;
    common::tools::perf::make_shared<GallerySumoCombatSettleEvent,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &,std::vector<unsigned int> &,std::vector<unsigned int> &,std::vector<unsigned int> &,bool,unsigned int &>(
      (unsigned int *)(v2 + 96),
      &this->activity_id_,
      &this->sumo_stage_id_,
      &this->difficulty_id_,
      &this->score_,
      &this->kill_normal_monster_num_,
      (std::vector<unsigned int> *)&this->kill_special_monster_num_,
      &this->team_kill_normal_monster_vec_,
      &this->team_kill_elite_monster_vec_,
      (bool *)&this->team_score_vec_,
      (unsigned int *)((char *)&v19 + 2),
      (unsigned int *)(v2 + 48),
      v14,
      v22,
      v16,
      (unsigned int *)this,
      v18,
      v19,
      (std::vector<unsigned int> *)p_event_ptr._M_ptr,
      (std::vector<unsigned int> *)p_event_ptr._M_refcount._M_pi,
      (bool *)v21.log_,
      (unsigned int *)v21.ostr_ptr_._M_ptr);
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    EventComp = Player::getEventComp(v7);
    std::shared_ptr<BaseEvent>::shared_ptr<GallerySumoCombatSettleEvent,void>(
      &p_event_ptr,
      (const std::shared_ptr<GallerySumoCombatSettleEvent> *)(v2 + 96));
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    v9 = (((_BYTE)thisa + 52) & 7u) + 3;
    v10 = *(_BYTE *)(((unsigned __int64)&thisa->difficulty_id_ >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)thisa + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->difficulty_id_ >> 3)
                                                            + 0x7FFF8000);
    if ( v10 )
      __asan_report_store4(&thisa->difficulty_id_, v9, v10);
    thisa->difficulty_id_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->score_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->score_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&thisa->score_, v9, (_BYTE)thisa + 56);
    }
    thisa->score_ = 0;
    v11 = (((_BYTE)thisa + 60) & 7u) + 3;
    v12 = *(_BYTE *)(((unsigned __int64)&thisa->kill_normal_monster_num_ >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)thisa + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->kill_normal_monster_num_ >> 3)
                                                            + 0x7FFF8000);
    if ( v12 )
      __asan_report_store4(&thisa->kill_normal_monster_num_, v11, v12);
    thisa->kill_normal_monster_num_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->kill_special_monster_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->kill_special_monster_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&thisa->kill_special_monster_num_, v11, (_BYTE)thisa + 64);
    }
    thisa->kill_special_monster_num_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->sumo_stage_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->sumo_stage_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&thisa->sumo_stage_id_, v11, (_BYTE)thisa + 48);
    }
    thisa->sumo_stage_id_ = 0;
    v13 = *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)thisa + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000);
    if ( v13 )
      __asan_report_store4(&thisa->activity_id_, (((_BYTE)thisa + 44) & 7u) + 3, v13);
    thisa->activity_id_ = 0;
    std::vector<unsigned int>::clear(&thisa->team_kill_normal_monster_vec_);
    std::vector<unsigned int>::clear(&thisa->team_kill_elite_monster_vec_);
    std::vector<unsigned int>::clear(&thisa->team_score_vec_);
    std::shared_ptr<GallerySumoCombatSettleEvent>::~shared_ptr((std::shared_ptr<GallerySumoCombatSettleEvent> *const)(v2 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v15 == (unsigned int *)v2 )
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

// Line 103: range 00000000168989BC-000000001689944C
__int64 __fastcall SumoGallery::updatePlayerScore(
        SumoGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *contex)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Player *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Player *v15; // rax
  uint32_t ActivityComp; // ecx
  common::milog::MiLogStream *v17; // rax
  int v18; // r15d
  SumoActivity *p_sumo_stage_id; // rdi
  uint32_t v20; // edx
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+3Fh] [rbp-131h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-130h] BYREF
  char v26[272]; // [rsp+60h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 4 14 monster_id:124 48 4 17 noswitch_time:126 64 4 7 uid:102 80 16 14 player_ptr:117 112 16"
                        " 21 sumo_activity_ptr:148 144 40 10 notify:137";
  *(_QWORD *)(v5 + 16) = SumoGallery::updatePlayerScore;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = 61956;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862725] = -218103808;
  v7[536862726] = -202116109;
  *(_DWORD *)(v5 + 64) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    if ( !*(_DWORD *)(v5 + 64) )
    {
      *(_DWORD *)(v5 + 48) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v25, off_25E06920, &__a);
      ScriptUtil::getTableValue<unsigned int>(
        &ScriptUtil::no_exception_instance,
        param_table,
        (const std::string *)&v25,
        (unsigned int *)(v5 + 48));
      std::string::~string(&v25);
      std::allocator<char>::~allocator(&__a);
      *(_DWORD *)(v5 + 64) = *(_DWORD *)(v5 + 48);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findPlayer((const Scene *const)(v5 + 80), (__int64)this->scene_, *(_DWORD *)(v5 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v5 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/sumo_gallery.cpp",
        "updatePlayerScore",
        120);
      v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v25,
             (const char (*)[30])"[SUMO] player not found, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 64));
      common::milog::MiLogStream::~MiLogStream(&v25);
      v4 = -1;
LABEL_38:
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 80));
      goto LABEL_39;
    }
    *(_DWORD *)(v5 + 32) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v25, "monster_id", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v25,
      (unsigned int *)(v5 + 32));
    std::string::~string(&v25);
    std::allocator<char>::~allocator(&__a);
    *(_DWORD *)(v5 + 48) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v25, "noswitch_time", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v25,
      (unsigned int *)(v5 + 48));
    std::string::~string(&v25);
    std::allocator<char>::~allocator(&__a);
    if ( *(_DWORD *)(v5 + 32) )
    {
      if ( SumoGallery::onMonsterKilled(this, *(_DWORD *)(v5 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/sumo_gallery.cpp",
          "updatePlayerScore",
          133);
        v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v25,
                (const char (*)[43])"[SUMO] onMonsterKilled failed, monster_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 32));
        common::milog::MiLogStream::~MiLogStream(&v25);
        v4 = -1;
        goto LABEL_38;
      }
      proto::GallerySumoKillMonsterNotify::GallerySumoKillMonsterNotify((proto::GallerySumoKillMonsterNotify *const)(v5 + 144));
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::GallerySumoKillMonsterNotify::set_gallery_id(
        (proto::GallerySumoKillMonsterNotify *const)(v5 + 144),
        this->gallery_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->kill_normal_monster_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_normal_monster_num_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::GallerySumoKillMonsterNotify::set_kill_normal_mosnter_num(
        (proto::GallerySumoKillMonsterNotify *const)(v5 + 144),
        this->kill_normal_monster_num_);
      if ( *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::GallerySumoKillMonsterNotify::set_kill_elite_monster_num(
        (proto::GallerySumoKillMonsterNotify *const)(v5 + 144),
        this->kill_special_monster_num_);
      if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::GallerySumoKillMonsterNotify::set_score(
        (proto::GallerySumoKillMonsterNotify *const)(v5 + 144),
        this->score_);
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
      Player::sendProto(v11, (const google::protobuf::Message *)(v5 + 144));
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/sumo_gallery.cpp",
        "updatePlayerScore",
        143);
      v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v25,
              (const char (*)[36])"[SUMO] updatePlayerScore with, uid:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 64));
      v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" ,monster_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 32));
      common::milog::MiLogStream::~MiLogStream(&v25);
      proto::GallerySumoKillMonsterNotify::~GallerySumoKillMonsterNotify((proto::GallerySumoKillMonsterNotify *const)(v5 + 144));
    }
    else if ( *(_DWORD *)(v5 + 48) )
    {
      v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
      ActivityComp = (unsigned int)Player::getActivityComp(v15);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      PlayerActivityComp::findActivity<SumoActivity>((PlayerActivityComp *const)(v5 + 112), ActivityComp);
      if ( std::operator==<SumoActivity>(0LL, (const std::shared_ptr<SumoActivity> *)(v5 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/sumo_gallery.cpp",
          "updatePlayerScore",
          151);
        v17 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v25,
                (const char (*)[45])"[SUMO] sumo activity not found, activity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v25);
        v4 = -1;
        v18 = 0;
      }
      else
      {
        p_sumo_stage_id = std::__shared_ptr_access<SumoActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SumoActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
        v20 = *(_DWORD *)(v5 + 48);
        if ( *(_BYTE *)(((unsigned __int64)&this->sumo_stage_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->sumo_stage_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          p_sumo_stage_id = (SumoActivity *)&this->sumo_stage_id_;
          __asan_report_load4();
        }
        SumoActivity::gallerySetSwithPunishTime(p_sumo_stage_id, this->sumo_stage_id_, v20);
        v18 = 1;
      }
      std::shared_ptr<SumoActivity>::~shared_ptr((std::shared_ptr<SumoActivity> *const)(v5 + 112));
      if ( v18 != 1 )
        goto LABEL_38;
    }
    v4 = 0;
    goto LABEL_38;
  }
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_gallery/sumo_gallery.cpp",
    "updatePlayerScore",
    106);
  v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
         &v25,
         (const char (*)[39])"[SUMO] gallery stage incorrect, stage:");
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 48) = this->stage_;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
  common::milog::MiLogStream::~MiLogStream(&v25);
  v4 = -1;
LABEL_39:
  result = v4;
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 161: range 000000001689944E-000000001689A6BD
__int64 __fastcall SumoGallery::onMonsterKilled(SumoGallery *const this, uint32_t monster_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  ActivitySumoExcelConfigMgr *p_activity_sumo_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v10; // rdx
  float second; // xmm0_4
  unsigned int v12; // edx
  __int64 v13; // rsi
  uint32_t v14; // edx
  char v15; // al
  std::vector<unsigned int>::size_type cur_team_index; // r14
  std::vector<unsigned int> *p_team_kill_normal_monster_vec; // rcx
  unsigned __int64 v18; // rax
  std::vector<unsigned int>::size_type v19; // r14
  std::vector<unsigned int> *p_team_score_vec; // rcx
  unsigned __int64 v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v27; // rdx
  float v28; // xmm0_4
  unsigned int v29; // edx
  __int64 v30; // rsi
  uint32_t v31; // edx
  char v32; // al
  std::vector<unsigned int>::size_type v33; // r14
  std::vector<unsigned int> *p_team_kill_elite_monster_vec; // rcx
  unsigned __int64 v35; // rax
  std::vector<unsigned int>::size_type v36; // r14
  std::vector<unsigned int> *v37; // rcx
  unsigned __int64 v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+10h] [rbp-200h] BYREF
  const SumoCombatParam *param; // [rsp+18h] [rbp-1F8h]
  const SumoDungeonContext *dungeon_context; // [rsp+20h] [rbp-1F0h]
  const data::ActivitySumoDifficultyExcelConfig *difficulty_config_ptr; // [rsp+28h] [rbp-1E8h]
  std::shared_ptr<Scene> v50; // [rsp+30h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v51; // [rsp+40h] [rbp-1D0h] BYREF
  char v52[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 13 add_score:190 64 4 14 monster_id:160 80 8 23 normal_monster_iter:191 112 8 24 special_"
                        "monster_iter:212 144 16 21 dungeon_scene_ptr:170 176 24 23 dungeon_context_opt:176 240 104 13 param_opt:162";
  *(_QWORD *)(v2 + 16) = SumoGallery::onMonsterKilled;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862730] = -218103808;
  v4[536862731] = -202116109;
  *(_DWORD *)(v2 + 64) = monster_id;
  BaseGallery::getParam<SumoCombatParam>((std::optional<SumoCombatParam> *)(v2 + 240), (const BaseGallery *const)this);
  if ( !std::optional<SumoCombatParam>::has_value((const std::optional<SumoCombatParam> *const)(v2 + 240)) )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/sumo_gallery.cpp",
      "onMonsterKilled",
      165);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v51,
           (const char (*)[35])"[SUMO] param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v51);
    v6 = -1;
  }
  else
  {
    param = std::optional<SumoCombatParam>::value((std::optional<SumoCombatParam> *const)(v2 + 240));
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toPtr<Scene,Scene>((Scene *)&v50);
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 144));
    std::shared_ptr<Scene>::~shared_ptr(&v50);
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/sumo_gallery.cpp",
        "onMonsterKilled",
        173);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v51,
        (const char (*)[39])"[SUMO] cur scene is not dungeon scene!");
      common::milog::MiLogStream::~MiLogStream(&v51);
      v6 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
      DungeonScene::getDungeonExtraData<SumoDungeonContext>((std::optional<SumoDungeonContext> *)(v2 + 176), v7);
      if ( !std::optional<SumoDungeonContext>::has_value((const std::optional<SumoDungeonContext> *const)(v2 + 176)) )
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_gallery/sumo_gallery.cpp",
          "onMonsterKilled",
          179);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v51,
          (const char (*)[35])"[SUMO] dungeon has no sumo context");
        common::milog::MiLogStream::~MiLogStream(&v51);
        v6 = -1;
      }
      else
      {
        dungeon_context = std::optional<SumoDungeonContext>::value((std::optional<SumoDungeonContext> *const)(v2 + 176));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v50);
        p_activity_sumo_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50)->design_config.txt_config_mgr.activity_sumo_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        difficulty_config_ptr = data::ActivitySumoExcelConfigMgrBase::findActivitySumoDifficultyExcelConfig(
                                  p_activity_sumo_config_mgr,
                                  this->difficulty_id_);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v50);
        if ( difficulty_config_ptr )
        {
          *(_DWORD *)(v2 + 48) = 0;
          *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 80) = std::map<unsigned int,unsigned int>::find(
                                                                                &param->normal_monster_score_map,
                                                                                (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 64));
          __y._M_node = std::map<unsigned int,unsigned int>::end(&param->normal_monster_score_map)._M_node;
          if ( std::operator!=(
                 (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 80),
                 &__y) )
          {
            v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            second = (float)(int)v10->second;
            if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->ratio >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)difficulty_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->ratio >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 48) = (int)(float)(second * difficulty_config_ptr->ratio);
            v12 = *(_DWORD *)(v2 + 48);
            if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            v13 = v12;
            v14 = SAFE_ADD<unsigned int,unsigned int>(this->score_, v12);
            v15 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
            if ( v15 != 0 && v15 <= 3 )
            {
              LOBYTE(v13) = v15 != 0;
              __asan_report_store4(&this->score_, v13, v14);
            }
            this->score_ = v14;
            if ( *(_BYTE *)(((unsigned __int64)&this->kill_normal_monster_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_normal_monster_num_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            ++this->kill_normal_monster_num_;
            if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)dungeon_context + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            cur_team_index = dungeon_context->cur_team_index;
            if ( cur_team_index < std::vector<unsigned int>::size(&this->team_kill_normal_monster_vec_) )
            {
              p_team_kill_normal_monster_vec = &this->team_kill_normal_monster_vec_;
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)dungeon_context + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v18 = (unsigned __int64)std::vector<unsigned int>::operator[](
                                        p_team_kill_normal_monster_vec,
                                        dungeon_context->cur_team_index);
              if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0
                && (char)((v18 & 7) + 3) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
              {
                v18 = __asan_report_load4();
              }
              ++*(_DWORD *)v18;
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)dungeon_context + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v19 = dungeon_context->cur_team_index;
              if ( v19 < std::vector<unsigned int>::size(&this->team_score_vec_) )
              {
                p_team_score_vec = &this->team_score_vec_;
                if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)dungeon_context + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v21 = (unsigned __int64)std::vector<unsigned int>::operator[](
                                          p_team_score_vec,
                                          dungeon_context->cur_team_index);
                if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) != 0
                  && (char)((v21 & 7) + 3) >= *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
                {
                  v21 = __asan_report_load4();
                }
                *(_DWORD *)v21 += *(_DWORD *)(v2 + 48);
                common::milog::MiLogStream::create(
                  &v51,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/scene_gallery/sumo_gallery.cpp",
                  "onMonsterKilled",
                  209);
                v22 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                        &v51,
                        (const char (*)[40])"[SUMO] kill normal monster, monster_id:");
                v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v22,
                        (const unsigned int *)(v2 + 64));
                v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v23,
                        (const char (*)[12])" add_score:");
                v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v24,
                        (const unsigned int *)(v2 + 48));
                v26 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                        v25,
                        (const char (*)[26])" kill_normal_monster_num:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  &this->kill_normal_monster_num_);
                common::milog::MiLogStream::~MiLogStream(&v51);
                v6 = 0;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v51,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_gallery/sumo_gallery.cpp",
                  "onMonsterKilled",
                  205);
                common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v51,
                  (const char (*)[35])"[SUMO] cur_team_index out of range");
                common::milog::MiLogStream::~MiLogStream(&v51);
                v6 = -1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v51,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_gallery/sumo_gallery.cpp",
                "onMonsterKilled",
                199);
              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v51,
                (const char (*)[35])"[SUMO] cur_team_index out of range");
              common::milog::MiLogStream::~MiLogStream(&v51);
              v6 = -1;
            }
          }
          else
          {
            *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 112) = std::map<unsigned int,unsigned int>::find(
                                                                                   &param->special_monster_score_map,
                                                                                   (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 64));
            __y._M_node = std::map<unsigned int,unsigned int>::end(&param->special_monster_score_map)._M_node;
            if ( std::operator!=(
                   (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 112),
                   &__y) )
            {
              v27 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 112));
              if ( *(_BYTE *)(((unsigned __int64)&v27->second >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)v27 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->second >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v28 = (float)(int)v27->second;
              if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->ratio >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)difficulty_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->ratio >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v2 + 48) = (int)(float)(v28 * difficulty_config_ptr->ratio);
              v29 = *(_DWORD *)(v2 + 48);
              if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              v30 = v29;
              v31 = SAFE_ADD<unsigned int,unsigned int>(this->score_, v29);
              v32 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
              if ( v32 != 0 && v32 <= 3 )
              {
                LOBYTE(v30) = v32 != 0;
                __asan_report_store4(&this->score_, v30, v31);
              }
              this->score_ = v31;
              if ( *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_num_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_num_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              ++this->kill_special_monster_num_;
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)dungeon_context + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v33 = dungeon_context->cur_team_index;
              if ( v33 < std::vector<unsigned int>::size(&this->team_kill_elite_monster_vec_) )
              {
                p_team_kill_elite_monster_vec = &this->team_kill_elite_monster_vec_;
                if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)dungeon_context + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v35 = (unsigned __int64)std::vector<unsigned int>::operator[](
                                          p_team_kill_elite_monster_vec,
                                          dungeon_context->cur_team_index);
                if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) != 0
                  && (char)((v35 & 7) + 3) >= *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
                {
                  v35 = __asan_report_load4();
                }
                ++*(_DWORD *)v35;
                if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)dungeon_context + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v36 = dungeon_context->cur_team_index;
                if ( v36 < std::vector<unsigned int>::size(&this->team_score_vec_) )
                {
                  v37 = &this->team_score_vec_;
                  if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)dungeon_context + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3)
                                                                                   + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  v38 = (unsigned __int64)std::vector<unsigned int>::operator[](v37, dungeon_context->cur_team_index);
                  if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) != 0
                    && (char)((v38 & 7) + 3) >= *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
                  {
                    v38 = __asan_report_load4();
                  }
                  *(_DWORD *)v38 += *(_DWORD *)(v2 + 48);
                  common::milog::MiLogStream::create(
                    &v51,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/scene/scene_gallery/sumo_gallery.cpp",
                    "onMonsterKilled",
                    230);
                  v39 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                          &v51,
                          (const char (*)[41])"[SUMO] kill special monster, monster_id:");
                  v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v39,
                          (const unsigned int *)(v2 + 64));
                  v41 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v40,
                          (const char (*)[12])" add_score:");
                  v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v41,
                          (const unsigned int *)(v2 + 48));
                  v43 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                          v42,
                          (const char (*)[26])" kill_normal_monster_num:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v43,
                    &this->kill_special_monster_num_);
                  common::milog::MiLogStream::~MiLogStream(&v51);
                  v6 = 0;
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v51,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/scene/scene_gallery/sumo_gallery.cpp",
                    "onMonsterKilled",
                    226);
                  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v51,
                    (const char (*)[35])"[SUMO] cur_team_index out of range");
                  common::milog::MiLogStream::~MiLogStream(&v51);
                  v6 = -1;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v51,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_gallery/sumo_gallery.cpp",
                  "onMonsterKilled",
                  220);
                common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v51,
                  (const char (*)[35])"[SUMO] cur_team_index out of range");
                common::milog::MiLogStream::~MiLogStream(&v51);
                v6 = -1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v51,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_gallery/sumo_gallery.cpp",
                "onMonsterKilled",
                233);
              v44 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      &v51,
                      (const char (*)[43])"[SUMO] kill monster not found, monster_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v44,
                (const unsigned int *)(v2 + 64));
              common::milog::MiLogStream::~MiLogStream(&v51);
              v6 = 0;
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_gallery/sumo_gallery.cpp",
            "onMonsterKilled",
            187);
          v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                 &v51,
                 (const char (*)[51])"[SUMO] difficulty config not found, difficulty_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->difficulty_id_);
          common::milog::MiLogStream::~MiLogStream(&v51);
          v6 = -1;
        }
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 144));
  }
  std::optional<SumoCombatParam>::~optional((std::optional<SumoCombatParam> *const)(v2 + 240));
  result = v6;
  if ( v52 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};
