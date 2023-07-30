// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/electrohercules_battle_gallery.cpp

// Line 30: range 00000000165F5D1A-00000000165F5E4D
void __cdecl ElectroherculesBattleGallery::initDetailInfo(
        ElectroherculesBattleGallery *const this,
        uint32_t uid,
        uint32_t stage_id,
        uint32_t level_id,
        uint32_t difficulty)
{
  __int64 v5; // rsi
  bool v6; // dl
  __int64 v7; // rsi
  bool v8; // dl

  v5 = (((_BYTE)this + 44) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->owner_uid_, v5, v6);
  this->owner_uid_ = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id_, v5, (_BYTE)this + 48);
  }
  this->stage_id_ = stage_id;
  v7 = (((_BYTE)this + 52) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->level_id_, v7, v8);
  this->level_id_ = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->difficulty_, v7, (_BYTE)this + 56);
  }
  this->difficulty_ = difficulty;
};

// Line 38: range 00000000165F5E4E-00000000165F601F
void __cdecl ElectroherculesBattleGallery::onStart(ElectroherculesBattleGallery *const this)
{
  uint32_t *p_gallery_id; // rsi
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  uint64_t SceneTimeMs; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_) > 1 )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/electrohercules_battle_gallery.cpp",
      "onStart",
      42);
    v2 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v8,
           (const char (*)[50])"[GALLERY] gallery player count > 1. player count:");
    val = std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_);
    v3 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v2, &val);
    v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v3, (const char (*)[14])", gallery_id:");
    p_gallery_id = &this->gallery_id_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneTimeMs = Scene::getSceneTimeMs(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
    SceneTimeMs = __asan_report_store8(&this->start_time_, p_gallery_id);
  this->start_time_ = SceneTimeMs;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/electrohercules_battle_gallery.cpp",
    "onStart",
    46);
  v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         &v8,
         (const char (*)[43])"[electroherculesBattle] start, start_time:");
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &this->start_time_);
  common::milog::MiLogStream::~MiLogStream(&v8);
};

// Line 50: range 00000000165F6020-00000000165F6523
void __cdecl ElectroherculesBattleGallery::onStop(
        ElectroherculesBattleGallery *const this,
        proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  ElectroherculesBattleGallery *v5; // rdx
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  uint64_t SceneTimeMs; // rax
  unsigned int *v9; // r8
  unsigned int *v10; // r9
  uint64_t end_time; // rcx
  uint64_t v12; // rax
  float v13; // xmm0_4
  uint32_t v14; // edi
  bool v15; // dl
  Player *v16; // rax
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 19 owner_player_ptr:51 64 16 12 event_ptr:68";
  *(_QWORD *)(v2 + 16) = ElectroherculesBattleGallery::onStop;
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
  (*(void (__fastcall **)(unsigned __int64, ElectroherculesBattleGallery *))v6)(v2 + 32, v5);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/electrohercules_battle_gallery.cpp",
      "onStop",
      54);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v20,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else if ( BaseGallery::getGalleryExcelConfig((const BaseGallery *const)this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneTimeMs = Scene::getSceneTimeMs(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) )
      SceneTimeMs = __asan_report_store8(&this->end_time_, 0LL);
    this->end_time_ = SceneTimeMs;
    end_time = this->end_time_;
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( end_time <= this->start_time_ )
    {
      v14 = 0;
    }
    else
    {
      v12 = this->end_time_ - this->start_time_;
      if ( (v12 & 0x8000000000000000LL) != 0LL )
        v13 = (float)(int)(v12 & 1 | (v12 >> 1)) + (float)(int)(v12 & 1 | (v12 >> 1));
      else
        v13 = (float)(int)v12;
      v14 = (int)std::ceil(v13 / 1000.0);
    }
    v15 = *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000);
    if ( v15 )
    {
      v14 = (_DWORD)this + 316;
      __asan_report_store4(&this->finish_time_, (((_BYTE)this + 60) & 7u) + 3, v15);
    }
    this->finish_time_ = v14;
    if ( reason == GALLERY_STOP_LUA_INTERRUPT_SUCCESS )
    {
      common::tools::perf::make_shared<GalleryElectroherculesBattleSettleEvent,unsigned int &,unsigned int &,unsigned int &>(
        (unsigned int *)(v2 + 64),
        &this->stage_id_,
        &this->level_id_,
        &this->finish_time_,
        v9,
        v10);
      v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EventComp = Player::getEventComp(v16);
      std::shared_ptr<BaseEvent>::shared_ptr<GalleryElectroherculesBattleSettleEvent,void>(
        &p_event_ptr,
        (const std::shared_ptr<GalleryElectroherculesBattleSettleEvent> *)(v2 + 64));
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      std::shared_ptr<GalleryElectroherculesBattleSettleEvent>::~shared_ptr((std::shared_ptr<GalleryElectroherculesBattleSettleEvent> *const)(v2 + 64));
    }
    ElectroherculesBattleGallery::clearGalleryData(this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/electrohercules_battle_gallery.cpp",
      "onStop",
      60);
    v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v20,
           (const char (*)[50])"[GALLERY] gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v21 == (char *)v2 )
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

// Line 76: range 00000000165F6524-00000000165F662C
void __cdecl ElectroherculesBattleGallery::clearGalleryData(ElectroherculesBattleGallery *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl

  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->difficulty_, v1, (_BYTE)this + 56);
  }
  this->difficulty_ = 0;
  v2 = (((_BYTE)this + 60) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->finish_time_, v2, v3);
  this->finish_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->start_time_, v2);
  this->start_time_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->end_time_, v2);
  this->end_time_ = 0LL;
};

// Line 85: range 00000000165F662E-00000000165F69C1
int32_t __cdecl ElectroherculesBattleGallery::notifyDifficultyEvent(ElectroherculesBattleGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  char *v4; // rsi
  int32_t v5; // r14d
  uint32_t gallery_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  char v8; // cl
  uint32_t difficulty; // r14d
  __int64 v10; // rax
  char v11; // dl
  bool v12; // dl
  __int64 v13; // rsi
  uint32_t owner_uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  char v16; // cl
  int32_t result; // eax
  std::shared_ptr<Event> p_event_ptr; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-90h] BYREF
  char v20[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 10 evt_ptr:87";
  *(_QWORD *)(v1 + 16) = ElectroherculesBattleGallery::notifyDifficultyEvent;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  EventUtil::createEvent((data::EventType)(v1 + 32));
  v4 = (char *)(v1 + 32);
  if ( std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/electrohercules_battle_gallery.cpp",
      "notifyDifficultyEvent",
      90);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v19, (const char (*)[17])"createEvent fail");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    gallery_id = this->gallery_id_;
    v7 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v8 = *(_BYTE *)(((unsigned __int64)&v7->param1 >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)((((_BYTE)v7 + 44) & 7) + 3) >= v8 )
    {
      LOBYTE(v4) = v8 != 0;
      __asan_report_store4(&v7->param1, v4, (_BYTE)v7);
    }
    v7->param1 = gallery_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    difficulty = this->difficulty_;
    v10 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v11 = *(_BYTE *)(((unsigned __int64)(v10 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(v4) = v11 != 0;
    v12 = v11 != 0 && v11 <= 3;
    if ( v12 )
      v10 = __asan_report_store4(v10 + 48, v4, v12);
    *(_DWORD *)(v10 + 48) = difficulty;
    v13 = (((_BYTE)this + 44) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    owner_uid = this->owner_uid_;
    v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v16 = *(_BYTE *)(((unsigned __int64)&v15->uid >> 3) + 0x7FFF8000);
    if ( v16 != 0 && (char)((((_BYTE)v15 + 60) & 7) + 3) >= v16 )
    {
      LOBYTE(v13) = v16 != 0;
      __asan_report_store4(&v15->uid, v13, (_BYTE)v15);
    }
    v15->uid = owner_uid;
    std::shared_ptr<Event>::shared_ptr(&p_event_ptr, (const std::shared_ptr<Event> *)(v1 + 32));
    BaseGallery::notifyGroupEvent((BaseGallery *const)this, &p_event_ptr);
    std::shared_ptr<Event>::~shared_ptr(&p_event_ptr);
    v5 = 0;
  }
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v1 + 32));
  result = v5;
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
