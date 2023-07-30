// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/muqadas_potion_gallery.cpp

// Line 26: range 0000000016888644-00000000168887BD
void __cdecl MuqadasPotionGallery::toClient(MuqadasPotionGallery *const this, proto::SceneGalleryInfo *client_info)
{
  proto::SceneGalleryMuqadasPotionInfo *muqadas_potion_info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  muqadas_potion_info = proto::SceneGalleryInfo::mutable_muqadas_potion_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryMuqadasPotionInfo::set_score(muqadas_potion_info, this->score_);
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_weakness_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->capture_weakness_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryMuqadasPotionInfo::set_capture_weakness_count(muqadas_potion_info, this->capture_weakness_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_use_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_use_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryMuqadasPotionInfo::set_skill_use_limit(muqadas_potion_info, this->skill_use_limit_);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_energy_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_energy_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryMuqadasPotionInfo::set_skill_energy(muqadas_potion_info, this->skill_energy_);
};

// Line 36: range 00000000168887BE-0000000016888E62
void __cdecl MuqadasPotionGallery::onStart(MuqadasPotionGallery *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  __int64 v5; // rsi
  uint32_t level_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t activity_id; // ecx
  char v10; // dl
  bool v11; // dl
  ActivityMuqadasPotionExcelConfigMgr *p_activity_muqadas_potion_mgr; // rcx
  __int64 v13; // rsi
  common::milog::MiLogStream *v14; // rax
  uint32_t init_skill_num; // ecx
  char v16; // al
  __int64 Now; // rsi
  common::milog::MiLogStream *v18; // rax
  MuqadasPotionDungeonContext *dungeon_context; // [rsp+10h] [rbp-D0h]
  const data::ActivityMuqadasPotionExcelConfig *moquadas_base_config_ptr; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Scene> v21; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 12 22 dungeon_context_opt:44 64 16 20 dungeon_scene_ptr:38";
  *(_QWORD *)(v1 + 16) = MuqadasPotionGallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219020288;
  v3[536862722] = -202178560;
  MuqadasPotionGallery::clearGalleryData(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Scene,Scene>((Scene *)&v21);
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v1 + 64));
  std::shared_ptr<Scene>::~shared_ptr(&v21);
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/muqadas_potion_gallery.cpp",
      "onStart",
      41);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v22,
      (const char (*)[49])"[MUQADAS_POTION] cur scene is not dungeon scene!");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    v4 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    *(std::optional<MuqadasPotionDungeonContext> *)(v1 + 32) = DungeonScene::getDungeonExtraData<MuqadasPotionDungeonContext>(v4);
    if ( !std::optional<MuqadasPotionDungeonContext>::has_value((const std::optional<MuqadasPotionDungeonContext> *const)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/muqadas_potion_gallery.cpp",
        "onStart",
        47);
      common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
        &v22,
        (const char (*)[55])"[MUQADAS_POTION] dungeon has no muqadas potion context");
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      dungeon_context = std::optional<MuqadasPotionDungeonContext>::value((std::optional<MuqadasPotionDungeonContext> *const)(v1 + 32));
      v5 = ((unsigned __int8)dungeon_context & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dungeon_context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_context >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      level_id = dungeon_context->level_id;
      v7 = *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000);
      if ( v7 != 0 && v7 <= 3 )
      {
        LOBYTE(v5) = v7 != 0;
        __asan_report_store4(&this->level_id_, v5, (_BYTE)this + 48);
      }
      this->level_id_ = level_id;
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
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v21);
      p_activity_muqadas_potion_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_muqadas_potion_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v13 = this->activity_id_;
      moquadas_base_config_ptr = data::ActivityMuqadasPotionExcelConfigMgrBase::findActivityMuqadasPotionExcelConfig(
                                   p_activity_muqadas_potion_mgr,
                                   v13);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v21);
      if ( moquadas_base_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&moquadas_base_config_ptr->init_skill_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&moquadas_base_config_ptr->init_skill_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        init_skill_num = moquadas_base_config_ptr->init_skill_num;
        v16 = *(_BYTE *)(((unsigned __int64)&this->skill_use_limit_ >> 3) + 0x7FFF8000);
        if ( v16 != 0 && v16 <= 3 )
        {
          LOBYTE(v13) = v16 != 0;
          __asan_report_store4(&this->skill_use_limit_, v13, (_BYTE)this + 64);
        }
        this->skill_use_limit_ = init_skill_num;
        Now = (unsigned int)common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->actual_start_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->actual_start_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->actual_start_time_, Now, (_BYTE)this + 80);
        }
        this->actual_start_time_ = Now;
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/muqadas_potion_gallery.cpp",
          "onStart",
          64);
        v18 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                &v22,
                (const char (*)[60])"[MUQADAS_POTION] muqadas potion gallery onStsatr, stgae_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->level_id_);
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/muqadas_potion_gallery.cpp",
          "onStart",
          57);
        v14 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                &v22,
                (const char (*)[74])"[MUQADAS_POTION] findActivityMuqadasPotionExcelConfig fails, activity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 64));
  if ( v23 == (char *)v1 )
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

// Line 68: range 0000000016888E64-00000000168891FA
// local variable allocation has failed, the output may be wrong!
void __cdecl MuqadasPotionGallery::onStop(MuqadasPotionGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  MuqadasPotionGallery *v5; // rdx
  unsigned __int64 v6; // rax
  Player *v7; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int *v9; // [rsp-8h] [rbp-108h]
  unsigned int *v10; // [rsp+0h] [rbp-100h]
  bool *v11; // [rsp+10h] [rbp-F0h]
  unsigned int *__args_0; // [rsp+18h] [rbp-E8h] OVERLAPPED BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+50h] [rbp-B0h] BYREF

  HIDWORD(v10) = reason;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 13 is_success:76 64 16 19 owner_player_ptr:69 96 16 12 event_ptr:83";
  *(_QWORD *)(v2 + 16) = MuqadasPotionGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, MuqadasPotionGallery *))v6)(v2 + 64, v5);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/muqadas_potion_gallery.cpp",
      "onStop",
      72);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v14,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    *(_BYTE *)(v2 + 48) = 0;
    if ( reason == GALLERY_STOP_TIMEUP )
      *(_BYTE *)(v2 + 48) = 1;
    HIDWORD(__args_0) = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->actual_start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->actual_start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    LODWORD(__args_0) = HIDWORD(__args_0) - this->actual_start_time_;
    common::tools::perf::make_shared<GalleryMuqadasPotionSettleEvent,unsigned int &,unsigned int &,unsigned int &,unsigned int &,bool &,unsigned int &,unsigned int &,unsigned int>(
      (unsigned int *)(v2 + 96),
      &this->activity_id_,
      &this->level_id_,
      &this->score_,
      (bool *)&this->capture_weakness_count_,
      (unsigned int *)(v2 + 48),
      &this->skill_use_time_,
      &this->once_max_weakness_count_,
      (unsigned int *)&__args_0,
      v9,
      v10,
      (unsigned int *)this,
      v11,
      __args_0,
      (unsigned int *)p_event_ptr._M_ptr,
      (unsigned int *)p_event_ptr._M_refcount._M_pi);
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    EventComp = Player::getEventComp(v7);
    std::shared_ptr<BaseEvent>::shared_ptr<GalleryMuqadasPotionSettleEvent,void>(
      &p_event_ptr,
      (const std::shared_ptr<GalleryMuqadasPotionSettleEvent> *)(v2 + 96));
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    std::shared_ptr<GalleryMuqadasPotionSettleEvent>::~shared_ptr((std::shared_ptr<GalleryMuqadasPotionSettleEvent> *const)(v2 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v15 == (char *)v2 )
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

// Line 89: range 00000000168891FC-0000000016889658
int32_t __cdecl MuqadasPotionGallery::updatePlayerScore(
        MuqadasPotionGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *context)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rcx
  int32_t result; // eax
  unsigned int v9; // ecx
  uint32_t v10; // ecx
  char v11; // dl
  __int64 v12; // rsi
  bool v13; // dl
  std::allocator<char> __a; // [rsp+2Bh] [rbp-A5h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-A4h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 12 add_score:96 64 4 14 add_energy:103";
  *(_QWORD *)(v4 + 16) = MuqadasPotionGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    *(_DWORD *)(v4 + 48) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v17, "add_score", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v17,
      (unsigned int *)(v4 + 48));
    std::string::~string(&v17);
    std::allocator<char>::~allocator(&__a);
    if ( *(_DWORD *)(v4 + 48) )
    {
      v9 = *(_DWORD *)(v4 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v12 = v9;
      v10 = SAFE_ADD<unsigned int,unsigned int>(this->score_, v9);
      v11 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
      LOBYTE(v12) = v11 != 0;
      v13 = v11 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v11;
      if ( v13 )
        __asan_report_store4(&this->score_, v12, v13);
      this->score_ = v10;
    }
    *(_DWORD *)(v4 + 64) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v17, "add_energy", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v17,
      (unsigned int *)(v4 + 64));
    std::string::~string(&v17);
    std::allocator<char>::~allocator(&__a);
    ret = 0;
    if ( *(_DWORD *)(v4 + 64) )
      ret = MuqadasPotionGallery::updateSkillNumAndEnergy(this, *(_DWORD *)(v4 + 64));
    BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
    result = ret;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/muqadas_potion_gallery.cpp",
      "updatePlayerScore",
      92);
    v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v17,
           (const char (*)[49])"[MUQADAS_POTION] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 64) = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = -1;
  }
  if ( v18 == (char *)v4 )
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

// Line 117: range 000000001688965A-000000001688992E
void __cdecl MuqadasPotionGallery::clearGalleryData(MuqadasPotionGallery *const this)
{
  __int64 v1; // rsi
  bool v2; // dl
  __int64 v3; // rsi
  bool v4; // dl
  __int64 v5; // rsi
  bool v6; // dl
  __int64 v7; // rsi
  bool v8; // dl
  __int64 v9; // rsi
  bool v10; // dl

  v1 = (((_BYTE)this + 44) & 7u) + 3;
  v2 = *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->activity_id_, v1, v2);
  this->activity_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id_, v1, (_BYTE)this + 48);
  }
  this->level_id_ = 0;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->score_, v3, v4);
  this->score_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_weakness_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->capture_weakness_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->capture_weakness_count_, v3, (_BYTE)this + 56);
  }
  this->capture_weakness_count_ = 0;
  v5 = (((_BYTE)this + 68) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->gallery_left_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_left_time_ >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->gallery_left_time_, v5, v6);
  this->gallery_left_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_use_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_use_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_use_limit_, v5, (_BYTE)this + 64);
  }
  this->skill_use_limit_ = 0;
  v7 = (((_BYTE)this + 60) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->skill_energy_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_energy_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->skill_energy_, v7, v8);
  this->skill_energy_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_use_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_use_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_use_time_, v7, (_BYTE)this + 72);
  }
  this->skill_use_time_ = 0;
  v9 = (((_BYTE)this + 76) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->once_max_weakness_count_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->once_max_weakness_count_ >> 3)
                                                         + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->once_max_weakness_count_, v9, v10);
  this->once_max_weakness_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->actual_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->actual_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->actual_start_time_, v9, (_BYTE)this + 80);
  }
  this->actual_start_time_ = 0;
};

// Line 132: range 0000000016889930-0000000016889FD5
__int64 __fastcall MuqadasPotionGallery::addCaptureWeakness(
        MuqadasPotionGallery *const this,
        uint32_t add_capture_weakness_count)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  MuqadasPotionGallery *v5; // rdx
  unsigned __int64 v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  char *v10; // rsi
  uint32_t *v11; // rdx
  uint32_t v12; // ecx
  char v13; // dl
  bool v14; // dl
  __int64 result; // rax
  std::shared_ptr<Scene> v16; // [rsp+10h] [rbp-100h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 30 add_capture_weakness_count:131 64 12 23 dungeon_context_opt:152 96 16 20 owner_player_"
                        "ptr:133 128 16 21 dungeon_scene_ptr:146";
  *(_QWORD *)(v2 + 16) = MuqadasPotionGallery::addCaptureWeakness;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219020288;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = add_capture_weakness_count;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, MuqadasPotionGallery *))v6)(v2 + 96, v5);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/muqadas_potion_gallery.cpp",
      "addCaptureWeakness",
      136);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v17,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v17);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->skill_use_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->skill_use_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->skill_use_limit_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      toPtr<Scene,Scene>((Scene *)&v16);
      std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 128));
      std::shared_ptr<Scene>::~shared_ptr(&v16);
      if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_gallery/muqadas_potion_gallery.cpp",
          "addCaptureWeakness",
          149);
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          &v17,
          (const char (*)[49])"[MUQADAS_POTION] cur scene is not dungeon scene!");
        common::milog::MiLogStream::~MiLogStream(&v17);
        v7 = -1;
      }
      else
      {
        v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        *(std::optional<MuqadasPotionDungeonContext> *)(v2 + 64) = DungeonScene::getDungeonExtraData<MuqadasPotionDungeonContext>(v9);
        if ( !std::optional<MuqadasPotionDungeonContext>::has_value((const std::optional<MuqadasPotionDungeonContext> *const)(v2 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_gallery/muqadas_potion_gallery.cpp",
            "addCaptureWeakness",
            155);
          common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
            &v17,
            (const char (*)[55])"[MUQADAS_POTION] dungeon has no muqadas potion context");
          common::milog::MiLogStream::~MiLogStream(&v17);
          v7 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->capture_weakness_count_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->capture_weakness_count_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          this->capture_weakness_count_ += *(_DWORD *)(v2 + 48);
          if ( *(_BYTE *)(((unsigned __int64)&this->skill_use_limit_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->skill_use_limit_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          --this->skill_use_limit_;
          if ( *(_BYTE *)(((unsigned __int64)&this->skill_use_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->skill_use_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          ++this->skill_use_time_;
          v10 = (char *)(v2 + 48);
          v11 = (uint32_t *)std::max<unsigned int>(&this->once_max_weakness_count_, (const unsigned int *)(v2 + 48));
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v12 = *v11;
          v13 = *(_BYTE *)(((unsigned __int64)&this->once_max_weakness_count_ >> 3) + 0x7FFF8000);
          LOBYTE(v10) = v13 != 0;
          v14 = v13 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v13;
          if ( v14 )
            __asan_report_store4(&this->once_max_weakness_count_, v10, v14);
          this->once_max_weakness_count_ = v12;
          BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
          v7 = 0;
        }
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/muqadas_potion_gallery.cpp",
        "addCaptureWeakness",
        142);
      v8 = common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(
             &v17,
             (const char (*)[86])"[MUQADAS_POTION] skil_use_limit_ less than 1, should not use skill. skill_use_limit_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->skill_use_limit_);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v7 = -1;
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  result = v7;
  if ( v18 == (char *)v2 )
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

// Line 170: range 0000000016889FD6-000000001688A75E
__int64 __fastcall MuqadasPotionGallery::updateSkillNumAndEnergy(MuqadasPotionGallery *const this, uint32_t add_energy)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ActivityMuqadasPotionExcelConfigMgr *p_activity_muqadas_potion_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  uint32_t skill_use_limit; // ecx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // ecx
  uint32_t v12; // ecx
  char v13; // dl
  __int64 v14; // rsi
  bool v15; // dl
  uint32_t skill_energy; // ecx
  uint32_t *p_skill_num_limit; // rcx
  uint32_t *v18; // rsi
  uint32_t *v19; // rdx
  uint32_t v20; // ecx
  char v21; // al
  uint32_t v22; // ecx
  bool v23; // dl
  uint32_t v24; // ecx
  unsigned int __a; // [rsp+10h] [rbp-A0h] BYREF
  uint32_t add_num; // [rsp+14h] [rbp-9Ch]
  const data::ActivityMuqadasPotionExcelConfig *moquadas_base_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v28; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v29; // [rsp+30h] [rbp-80h] BYREF
  char v30[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 add_energy:169";
  *(_QWORD *)(v2 + 16) = MuqadasPotionGallery::updateSkillNumAndEnergy;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_energy;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  p_activity_muqadas_potion_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.activity_muqadas_potion_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  moquadas_base_config_ptr = data::ActivityMuqadasPotionExcelConfigMgrBase::findActivityMuqadasPotionExcelConfig(
                               p_activity_muqadas_potion_mgr,
                               this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v28);
  if ( moquadas_base_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->skill_use_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->skill_use_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    skill_use_limit = this->skill_use_limit_;
    if ( *(_BYTE *)(((unsigned __int64)&moquadas_base_config_ptr->skill_num_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)moquadas_base_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&moquadas_base_config_ptr->skill_num_limit >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( skill_use_limit < moquadas_base_config_ptr->skill_num_limit )
    {
      if ( *(_BYTE *)(((unsigned __int64)&moquadas_base_config_ptr->energy_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&moquadas_base_config_ptr->energy_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( moquadas_base_config_ptr->energy_limit < *(_DWORD *)(v2 + 32) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/muqadas_potion_gallery.cpp",
          "updateSkillNumAndEnergy",
          186);
        v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v29,
                (const char (*)[51])"[MUQADAS_POTION] add energy too large, add_energy:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
      v11 = *(_DWORD *)(v2 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&this->skill_energy_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_energy_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v14 = v11;
      v12 = SAFE_ADD<unsigned int,unsigned int>(this->skill_energy_, v11);
      v13 = *(_BYTE *)(((unsigned __int64)&this->skill_energy_ >> 3) + 0x7FFF8000);
      LOBYTE(v14) = v13 != 0;
      v15 = v13 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v13;
      if ( v15 )
        __asan_report_store4(&this->skill_energy_, v14, v15);
      this->skill_energy_ = v12;
      skill_energy = this->skill_energy_;
      if ( *(_BYTE *)(((unsigned __int64)&moquadas_base_config_ptr->energy_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&moquadas_base_config_ptr->energy_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( skill_energy >= moquadas_base_config_ptr->energy_limit && moquadas_base_config_ptr->energy_limit )
      {
        add_num = this->skill_energy_ / moquadas_base_config_ptr->energy_limit;
        p_skill_num_limit = &moquadas_base_config_ptr->skill_num_limit;
        if ( *(_BYTE *)(((unsigned __int64)&this->skill_use_limit_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->skill_use_limit_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        __a = this->skill_use_limit_ + add_num;
        v18 = p_skill_num_limit;
        v19 = (uint32_t *)std::min<unsigned int>(&__a, p_skill_num_limit);
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v20 = *v19;
        v21 = *(_BYTE *)(((unsigned __int64)&this->skill_use_limit_ >> 3) + 0x7FFF8000);
        if ( v21 != 0 && v21 <= 3 )
        {
          LOBYTE(v18) = v21 != 0;
          __asan_report_store4(&this->skill_use_limit_, v18, (_BYTE)this + 64);
        }
        this->skill_use_limit_ = v20;
        v22 = this->skill_use_limit_;
        if ( *(_BYTE *)(((unsigned __int64)&moquadas_base_config_ptr->skill_num_limit >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)moquadas_base_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&moquadas_base_config_ptr->skill_num_limit >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( v22 < moquadas_base_config_ptr->skill_num_limit )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->skill_energy_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_energy_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v24 = this->skill_energy_;
          if ( *(_BYTE *)(((unsigned __int64)&moquadas_base_config_ptr->energy_limit >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&moquadas_base_config_ptr->energy_limit >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          this->skill_energy_ = v24 % moquadas_base_config_ptr->energy_limit;
        }
        else
        {
          v23 = *(_BYTE *)(((unsigned __int64)&this->skill_energy_ >> 3) + 0x7FFF8000) != 0
             && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_energy_ >> 3)
                                                                 + 0x7FFF8000);
          if ( v23 )
            __asan_report_store4(&this->skill_energy_, (((_BYTE)this + 60) & 7u) + 3, v23);
          this->skill_energy_ = 0;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/muqadas_potion_gallery.cpp",
        "updateSkillNumAndEnergy",
        180);
      v9 = common::milog::MiLogStream::operator<<<char [84],(char *[84])0>(
             &v29,
             (const char (*)[84])"[MUQADAS_POTION] skill_use_limit has reached the limit, can't add. skill_use_limit:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->skill_use_limit_);
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/muqadas_potion_gallery.cpp",
      "updateSkillNumAndEnergy",
      174);
    v6 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
           &v29,
           (const char (*)[74])"[MUQADAS_POTION] findActivityMuqadasPotionExcelConfig fails, activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v29);
    result = 0xFFFFFFFFLL;
  }
  if ( v30 == (char *)v2 )
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

// Line 208: range 000000001688A760-000000001688A792
int32_t __cdecl MuqadasPotionGallery::addEnergyByGM(MuqadasPotionGallery *const this, uint32_t add_energy)
{
  MuqadasPotionGallery::updateSkillNumAndEnergy(this, add_energy);
  BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
  return 0;
};
