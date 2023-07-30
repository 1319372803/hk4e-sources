// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/fungus_fighter_training_gallery.cpp

// Line 25: range 00000000165FE5E0-00000000165FE850
void __cdecl FungusFighterTrainingGallery::toClient(
        FungusFighterTrainingGallery *const this,
        proto::SceneGalleryInfo *client_info)
{
  proto::SceneGalleryFungusFighterTrainingInfo *detail_info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  detail_info = proto::SceneGalleryInfo::mutable_fungus_fighter_training_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->killed_monster_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->killed_monster_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryFungusFighterTrainingInfo::set_killed_monster_count(detail_info, this->killed_monster_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_last_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_last_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryFungusFighterTrainingInfo::set_buff_last_time(detail_info, this->buff_last_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_start_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_start_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryFungusFighterTrainingInfo::set_buff_start_time(detail_info, this->buff_start_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryFungusFighterTrainingInfo::set_max_monster_count(detail_info, this->max_monster_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->rest_skill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rest_skill_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryFungusFighterTrainingInfo::set_rest_skill_count(detail_info, this->rest_skill_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_skill_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_skill_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryFungusFighterTrainingInfo::set_max_skill_count(detail_info, this->max_skill_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryFungusFighterTrainingInfo::set_buff_id(detail_info, this->buff_id_);
};

// Line 39: range 00000000165FE852-00000000165FE954
void __cdecl FungusFighterTrainingGallery::onStart(FungusFighterTrainingGallery *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  unsigned __int64 val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_) > 1 )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/fungus_fighter_training_gallery.cpp",
      "onStart",
      43);
    v1 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
           &v5,
           (const char (*)[65])"[FungusFighter] training gallery player count > 1. player count:");
    val = std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_);
    v2 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v1, &val);
    v3 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v2, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  FungusFighterTrainingGallery::clearGalleryData(this);
  FungusFighterTrainingGallery::printGalleryStartLog(this);
};

// Line 50: range 00000000165FE956-00000000165FEDD6
void __cdecl FungusFighterTrainingGallery::onStop(
        FungusFighterTrainingGallery *const this,
        proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  FungusFighterTrainingGallery *v5; // rdx
  unsigned __int64 v6; // rax
  int v7; // r14d
  google::protobuf::uint32 v8; // eax
  Player *v9; // rax
  PlayerEventComp *EventComp; // r14
  uint32_t end_time; // [rsp+10h] [rbp-D0h]
  proto::FungusFighterTrainingSettleInfo *gallery_settle_info; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 19 owner_player_ptr:51 64 16 12 event_ptr:58";
  *(_QWORD *)(v2 + 16) = FungusFighterTrainingGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, FungusFighterTrainingGallery *))v6)(v2 + 32, v5);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/fungus_fighter_training_gallery.cpp",
      "onStop",
      54);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v14,
      (const char (*)[41])"[FungusFighter] owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    common::tools::perf::make_shared<FungusFighterTrainingGallerySettleEvent,unsigned int &>(
      (unsigned int *)(v2 + 64),
      &this->gallery_id_);
    if ( std::operator==<FungusFighterTrainingGallerySettleEvent>(
           0LL,
           (const std::shared_ptr<FungusFighterTrainingGallerySettleEvent> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/fungus_fighter_training_gallery.cpp",
        "onStop",
        61);
      common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
        &v14,
        (const char (*)[72])"[FungusFighter] make FungusFighterTrainingGallerySettleEvent ptr failed");
      common::milog::MiLogStream::~MiLogStream(&v14);
      v7 = 0;
    }
    else
    {
      gallery_settle_info = &std::__shared_ptr_access<FungusFighterTrainingGallerySettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FungusFighterTrainingGallerySettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->gallery_settle_info;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      end_time = Scene::getSceneTimeSeconds(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( end_time <= this->start_time_ )
        v8 = 0;
      else
        v8 = end_time - this->start_time_;
      proto::FungusFighterTrainingSettleInfo::set_used_time(gallery_settle_info, v8);
      proto::FungusFighterTrainingSettleInfo::set_reason(gallery_settle_info, reason);
      proto::FungusFighterTrainingSettleInfo::set_transaction(gallery_settle_info, &this->transaction_);
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EventComp = Player::getEventComp(v9);
      std::shared_ptr<BaseEvent>::shared_ptr<FungusFighterTrainingGallerySettleEvent,void>(
        &p_event_ptr,
        (const std::shared_ptr<FungusFighterTrainingGallerySettleEvent> *)(v2 + 64));
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      v7 = 1;
    }
    std::shared_ptr<FungusFighterTrainingGallerySettleEvent>::~shared_ptr((std::shared_ptr<FungusFighterTrainingGallerySettleEvent> *const)(v2 + 64));
    if ( v7 == 1 )
    {
      FungusFighterTrainingGallery::printGalleryStopLog(this, reason);
      FungusFighterTrainingGallery::clearGalleryData(this);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v15 == (char *)v2 )
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

// Line 78: range 00000000165FEDD8-00000000165FF8E1
int32_t __cdecl FungusFighterTrainingGallery::updatePlayerScore(
        FungusFighterTrainingGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *contex)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  bool v9; // r14
  const luabind::adl::object *v10; // rsi
  bool v11; // r14
  uint32_t SceneTimeSeconds; // ecx
  char v13; // dl
  bool v14; // dl
  bool v15; // dl
  bool v16; // dl
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Bh] [rbp-D5h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 48 10 notify:110";
  *(_QWORD *)(v4 + 16) = FungusFighterTrainingGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v21, "killed_monster_count", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v21,
      &this->killed_monster_count_);
    std::string::~string(&v21);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v21, "buff_last_time", &__a);
    v9 = ScriptUtil::getTableValue<unsigned int>(
           &ScriptUtil::no_exception_instance,
           param_table,
           (const std::string *)&v21,
           &this->buff_last_time_) == 0;
    std::string::~string(&v21);
    std::allocator<char>::~allocator(&__a);
    if ( v9 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->buff_last_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->buff_last_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->buff_last_time_ )
      {
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v21, "buff_id", &__a);
        v10 = param_table;
        v11 = ScriptUtil::getTableValue<unsigned int>(
                &ScriptUtil::no_exception_instance,
                param_table,
                (const std::string *)&v21,
                &this->buff_id_) != 0;
        std::string::~string(&v21);
        std::allocator<char>::~allocator(&__a);
        if ( v11 )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/fungus_fighter_training_gallery.cpp",
            "updatePlayerScore",
            92);
          v10 = (const luabind::adl::object *)"[FungusFighter] cannot get buff_id when given buff_last_time";
          common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
            &v21,
            (const char (*)[61])"[FungusFighter] cannot get buff_id when given buff_last_time");
          common::milog::MiLogStream::~MiLogStream(&v21);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneTimeSeconds = Scene::getSceneTimeSeconds(this->scene_);
        v13 = *(_BYTE *)(((unsigned __int64)&this->buff_start_time_ >> 3) + 0x7FFF8000);
        LOBYTE(v10) = v13 != 0;
        v14 = v13 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v13;
        if ( v14 )
          __asan_report_store4(&this->buff_start_time_, v10, v14);
        this->buff_start_time_ = SceneTimeSeconds;
      }
      else
      {
        v15 = *(_BYTE *)(((unsigned __int64)&this->buff_start_time_ >> 3) + 0x7FFF8000) != 0
           && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_start_time_ >> 3)
                                                               + 0x7FFF8000);
        if ( v15 )
          __asan_report_store4(&this->buff_start_time_, (((_BYTE)this + 52) & 7u) + 3, v15);
        this->buff_start_time_ = 0;
        v16 = *(_BYTE *)(((unsigned __int64)&this->buff_id_ >> 3) + 0x7FFF8000) != 0
           && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_id_ >> 3) + 0x7FFF8000);
        if ( v16 )
          __asan_report_store4(&this->buff_id_, (((_BYTE)this + 68) & 7u) + 3, v16);
        this->buff_id_ = 0;
      }
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v21, "max_monster_count", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v21,
      &this->max_monster_count_);
    std::string::~string(&v21);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v21, "rest_skill_count", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v21,
      &this->rest_skill_count_);
    std::string::~string(&v21);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v21, "max_skill_count", &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v21,
      &this->max_skill_count_);
    std::string::~string(&v21);
    std::allocator<char>::~allocator(&__a);
    proto::FungusFighterTrainingInfoNotify::FungusFighterTrainingInfoNotify((proto::FungusFighterTrainingInfoNotify *const)(v4 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->killed_monster_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->killed_monster_count_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::FungusFighterTrainingInfoNotify::set_killed_monster_count(
      (proto::FungusFighterTrainingInfoNotify *const)(v4 + 48),
      this->killed_monster_count_);
    if ( *(_BYTE *)(((unsigned __int64)&this->buff_last_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->buff_last_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::FungusFighterTrainingInfoNotify::set_buff_last_time(
      (proto::FungusFighterTrainingInfoNotify *const)(v4 + 48),
      this->buff_last_time_);
    if ( *(_BYTE *)(((unsigned __int64)&this->buff_start_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_start_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::FungusFighterTrainingInfoNotify::set_buff_start_time(
      (proto::FungusFighterTrainingInfoNotify *const)(v4 + 48),
      this->buff_start_time_);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::FungusFighterTrainingInfoNotify::set_max_monster_count(
      (proto::FungusFighterTrainingInfoNotify *const)(v4 + 48),
      this->max_monster_count_);
    if ( *(_BYTE *)(((unsigned __int64)&this->rest_skill_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rest_skill_count_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::FungusFighterTrainingInfoNotify::set_rest_skill_count(
      (proto::FungusFighterTrainingInfoNotify *const)(v4 + 48),
      this->rest_skill_count_);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_skill_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_skill_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::FungusFighterTrainingInfoNotify::set_max_skill_count(
      (proto::FungusFighterTrainingInfoNotify *const)(v4 + 48),
      this->max_skill_count_);
    if ( *(_BYTE *)(((unsigned __int64)&this->buff_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::FungusFighterTrainingInfoNotify::set_buff_id(
      (proto::FungusFighterTrainingInfoNotify *const)(v4 + 48),
      this->buff_id_);
    BaseGallery::notifyToGalleryPlayers<proto::FungusFighterTrainingInfoNotify>(
      (BaseGallery *const)this,
      (proto::FungusFighterTrainingInfoNotify *)(v4 + 48));
    v8 = 0;
    proto::FungusFighterTrainingInfoNotify::~FungusFighterTrainingInfoNotify((proto::FungusFighterTrainingInfoNotify *const)(v4 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/fungus_fighter_training_gallery.cpp",
      "updatePlayerScore",
      81);
    v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v21,
           (const char (*)[48])"[FungusFighter] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    val = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = -1;
  }
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 126: range 00000000165FF8E2-00000000165FFAE5
void __cdecl FungusFighterTrainingGallery::clearGalleryData(FungusFighterTrainingGallery *const this)
{
  __int64 v1; // rsi
  bool v2; // dl
  __int64 v3; // rsi
  bool v4; // dl
  __int64 v5; // rsi
  bool v6; // dl
  bool v7; // dl

  v1 = (((_BYTE)this + 44) & 7u) + 3;
  v2 = *(_BYTE *)(((unsigned __int64)&this->killed_monster_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->killed_monster_count_ >> 3)
                                                        + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->killed_monster_count_, v1, v2);
  this->killed_monster_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_last_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_last_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buff_last_time_, v1, (_BYTE)this + 48);
  }
  this->buff_last_time_ = 0;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->buff_start_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_start_time_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->buff_start_time_, v3, v4);
  this->buff_start_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_monster_count_, v3, (_BYTE)this + 56);
  }
  this->max_monster_count_ = 0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->rest_skill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rest_skill_count_ >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->rest_skill_count_, v5, v6);
  this->rest_skill_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_skill_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_skill_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_skill_count_, v5, (_BYTE)this + 64);
  }
  this->max_skill_count_ = 0;
  v7 = *(_BYTE *)(((unsigned __int64)&this->buff_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_id_ >> 3) + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->buff_id_, (((_BYTE)this + 68) & 7u) + 3, v7);
  this->buff_id_ = 0;
};

// Line 138: range 00000000165FFAE6-00000000165FFAF0
void __cdecl FungusFighterTrainingGallery::printGalleryStartLog(FungusFighterTrainingGallery *const this)
{
  ;
};

// Line 143: range 00000000165FFAF2-00000000165FFAFF
void __cdecl FungusFighterTrainingGallery::printGalleryStopLog(
        FungusFighterTrainingGallery *const this,
        proto::GalleryStopReason reason)
{
  ;
};
