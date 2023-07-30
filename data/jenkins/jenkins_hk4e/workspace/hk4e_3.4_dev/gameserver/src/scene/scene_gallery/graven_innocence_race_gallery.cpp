// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/graven_innocence_race_gallery.cpp

// Line 28: range 000000001660132A-0000000016601815
void __cdecl GravenInnocenceRaceGallery::onStart(GravenInnocenceRaceGallery *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  GravenInnocenceRaceGallery *v4; // rdx
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rax
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  ActivityGravenInnocenceExcelConfigMgr *p_activity_graven_innocence_mgr; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *v13; // r14
  std::string v14; // [rsp+0h] [rbp-110h]
  const BaseGallery *thisa; // [rsp+8h] [rbp-108h]
  uint32_t level_id; // [rsp+14h] [rbp-FCh]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v19; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+60h] [rbp-B0h] BYREF

  v14._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 holder:35 64 16 19 owner_player_ptr:29 96 16 10 log_ptr:36";
  *(_QWORD *)(v1 + 16) = GravenInnocenceRaceGallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, GravenInnocenceRaceGallery *))v5)(v1 + 64, v4);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/graven_innocence_race_gallery.cpp",
      "onStart",
      32);
    v6 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
           &v20,
           (const char (*)[70])"[GRAVEN_INNOCENCE] RaceGallery owner_player_ptr is null. gallery_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    BasicComp = Player::getBasicComp(v7);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v20, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xE59u, v14);
    std::string::~string(&v20);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyGravenInnocenceRaceStart>();
    gallery_config_ptr = BaseGallery::getGalleryExcelConfig(thisa);
    if ( gallery_config_ptr )
    {
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyGravenInnocenceRaceStart::set_group_id(v9, gallery_config_ptr->control_group_id);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    p_activity_graven_innocence_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_graven_innocence_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    level_id = ActivityGravenInnocenceExcelConfigMgr::findRaceLevelIdByGalleryId(
                 p_activity_graven_innocence_mgr,
                 thisa->gallery_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v19);
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    proto_log::PlayerLogBodyGravenInnocenceRaceStart::set_level_id(v11, level_id);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    proto_log::PlayerLogBodyGravenInnocenceRaceStart::set_transaction(v12, &thisa->transaction_);
    v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v19, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGravenInnocenceRaceStart,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyGravenInnocenceRaceStart> *)(v1 + 96));
    Player::printStatLog(v13, &p_body_ptr, &v19, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v19);
    std::shared_ptr<proto_log::PlayerLogBodyGravenInnocenceRaceStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGravenInnocenceRaceStart> *const)(v1 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  if ( v21 == (char *)v1 )
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

// Line 49: range 0000000016601816-0000000016601D7A
void __fastcall GravenInnocenceRaceGallery::onStop(GravenInnocenceRaceGallery *const this, unsigned int reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // ecx
  char v13; // dl
  bool v14; // dl
  proto::GalleryStopReason v15; // r15d
  Player *v16; // rax
  Player *v17; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int *v19; // r9
  unsigned int *v20; // [rsp+0h] [rbp-100h]
  unsigned int *v21; // [rsp+8h] [rbp-F8h]
  bool is_success; // [rsp+27h] [rbp-D9h]
  unsigned int val; // [rsp+28h] [rbp-D8h] BYREF
  uint32_t now; // [rsp+2Ch] [rbp-D4h]
  std::shared_ptr<GalleryGravenInnocenceRaceScoreEvent> __r; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v28[36]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v28;
  v21 = v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 9 reason:48 64 16 13 player_ptr:51";
  *(_QWORD *)(v2 + 16) = GravenInnocenceRaceGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = reason;
  common::milog::MiLogStream::create(
    &v27,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/graven_innocence_race_gallery.cpp",
    "onStop",
    50);
  v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
         &v27,
         (const char (*)[46])"[GRAVEN_INNOCENCE] RaceGallery stop. reason: ");
  v6 = common::milog::MiLogStream::operator<<<proto::GalleryStopReason,(proto::GalleryStopReason*)0>(
         v5,
         (const proto::GalleryStopReason *)(v2 + 48));
  v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])" gallery_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
  common::milog::MiLogStream::~MiLogStream(&v27);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v2 + 64));
  v8 = 0LL;
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/graven_innocence_race_gallery.cpp",
      "onStop",
      54);
    v9 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
           &v27,
           (const char (*)[61])"[GRAVEN_INNOCENCE] RaceGallery getOwnPlayer fail. scene_id: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" gallery_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    is_success = 0;
    if ( *(_DWORD *)(v2 + 48) == 3 )
    {
      is_success = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      now = Scene::getSceneTimeSeconds(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( now >= this->end_time_ )
        v12 = 0;
      else
        v12 = this->end_time_ - now;
      v13 = *(_BYTE *)(((unsigned __int64)&this->remain_time_ >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v13 != 0;
      v14 = v13 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v13;
      if ( v14 )
        __asan_report_store4(&this->remain_time_, v8, v14);
      this->remain_time_ = v12;
      GravenInnocenceRaceGallery::calcScore(this);
    }
    v15 = *(_DWORD *)(v2 + 48);
    v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    GravenInnocenceRaceGallery::sendSettleNotify(this, v16, is_success, v15);
    if ( is_success )
    {
      v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      EventComp = Player::getEventComp(v17);
      common::tools::perf::make_shared<GalleryGravenInnocenceRaceScoreEvent,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
        (unsigned int *)&__r,
        &this->gallery_id_,
        &this->score_,
        &this->remain_time_,
        &this->coin_count_,
        v19,
        v20,
        v28);
      std::shared_ptr<BaseEvent>::shared_ptr<GalleryGravenInnocenceRaceScoreEvent,void>(&p_event_ptr, &__r);
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      std::shared_ptr<GalleryGravenInnocenceRaceScoreEvent>::~shared_ptr(&__r);
    }
    GravenInnocenceRaceGallery::printSettleLog(this, *(proto::GalleryStopReason *)(v2 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v21 == (unsigned int *)v2 )
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

// Line 80: range 0000000016601D7C-00000000166022FD
int32_t __cdecl GravenInnocenceRaceGallery::calcScore(GravenInnocenceRaceGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  ActivityGravenInnocenceExcelConfigMgr *p_activity_graven_innocence_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  float coin_count; // xmm0_4
  __int64 v10; // rsi
  float remain_time; // xmm0_4
  uint32_t v12; // edi
  __int64 v13; // rsi
  bool v14; // dl
  uint32_t v15; // ecx
  char v16; // al
  const data::GravenInnocenceRaceLevelExcelConfig *level_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-80h] BYREF
  char v21[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 11 level_id:81";
  *(_QWORD *)(v1 + 16) = GravenInnocenceRaceGallery::calcScore;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  p_activity_graven_innocence_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_graven_innocence_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v1 + 32) = ActivityGravenInnocenceExcelConfigMgr::findRaceLevelIdByGalleryId(
                           p_activity_graven_innocence_mgr,
                           this->gallery_id_);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( *(_DWORD *)(v1 + 32) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    level_config_ptr = data::ActivityGravenInnocenceExcelConfigMgrBase::findGravenInnocenceRaceLevelExcelConfig(
                         &v7->design_config.txt_config_mgr.activity_graven_innocence_mgr,
                         *(_DWORD *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( level_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->coin_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->coin_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      coin_count = (float)(int)this->coin_count_;
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gold_factor >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->gold_factor >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v10 = (unsigned int)(int)(float)(coin_count * level_config_ptr->gold_factor);
      if ( *(_BYTE *)(((unsigned __int64)&this->coin_score_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->coin_score_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->coin_score_, v10, (_BYTE)this + 56);
      }
      this->coin_score_ = v10;
      if ( *(_BYTE *)(((unsigned __int64)&this->remain_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->remain_time_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      remain_time = (float)(int)this->remain_time_;
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->time_factor >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_config_ptr->time_factor >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v12 = (int)(float)(remain_time * level_config_ptr->time_factor);
      v13 = (((_BYTE)this + 60) & 7u) + 3;
      v14 = *(_BYTE *)(((unsigned __int64)&this->time_score_ >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_score_ >> 3) + 0x7FFF8000);
      if ( v14 )
      {
        v12 = (_DWORD)this + 316;
        __asan_report_store4(&this->time_score_, v13, v14);
      }
      this->time_score_ = v12;
      v15 = this->coin_score_ + this->time_score_;
      v16 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v13) = v16 != 0;
        __asan_report_store4(&this->score_, v13, (_BYTE)this + 64);
      }
      this->score_ = v15;
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/graven_innocence_race_gallery.cpp",
        "calcScore",
        90);
      v8 = common::milog::MiLogStream::operator<<<char [88],(char *[88])0>(
             &v20,
             (const char (*)[88])"[GRAVEN_INNOCENCE] RaceGallery findGravenInnocenceRaceLevelExcelConfig fail. level id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/graven_innocence_race_gallery.cpp",
      "calcScore",
      84);
    v5 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
           &v20,
           (const char (*)[77])"[GRAVEN_INNOCENCE] RaceGallery findRaceLevelIdByGalleryId fail. gallery id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = -1;
  }
  if ( v21 == (char *)v1 )
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

// Line 100: range 00000000166022FE-0000000016602770
int32_t __cdecl GravenInnocenceRaceGallery::updatePlayerScore(
        GravenInnocenceRaceGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *context)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  const luabind::adl::object *v7; // rsi
  bool v8; // r14
  uint32_t v9; // ecx
  char v10; // dl
  bool v11; // dl
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  bool v15; // r14
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-B1h] BYREF
  std::string name; // [rsp+30h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 20 total_coin_count:101 64 4 13 pick_type:109";
  *(_QWORD *)(v4 + 16) = GravenInnocenceRaceGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "total_coin_count", &__a);
  v7 = param_table;
  v8 = ScriptUtil::getTableValue<unsigned int>(
         &ScriptUtil::no_exception_instance,
         param_table,
         &name,
         (unsigned int *)(v4 + 48)) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v4 + 48);
    v10 = *(_BYTE *)(((unsigned __int64)&this->total_coin_count_ >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v10 != 0;
    v11 = v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10;
    if ( v11 )
      __asan_report_store4(&this->total_coin_count_, v7, v11);
    this->total_coin_count_ = v9;
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/graven_innocence_race_gallery.cpp",
      "updatePlayerScore",
      105);
    v12 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            (common::milog::MiLogStream *const)&name,
            (const char (*)[49])"[GRAVEN_INNOCENCE] RaceGallery total_coin_count:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->total_coin_count_);
    v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])"gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
  }
  else
  {
    *(_DWORD *)(v4 + 64) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&name, "pick_up", &__a);
    v15 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            &name,
            (unsigned int *)(v4 + 64)) != 0;
    std::string::~string(&name);
    std::allocator<char>::~allocator(&__a);
    if ( v15 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/graven_innocence_race_gallery.cpp",
        "updatePlayerScore",
        112);
      v16 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
              (common::milog::MiLogStream *const)&name,
              (const char (*)[73])"[GRAVEN_INNOCENCE] RaceGallery getTableValue pick_up failed. gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      result = -1;
      goto LABEL_15;
    }
    if ( !*(_DWORD *)(v4 + 64) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->coin_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->coin_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      ++this->coin_count_;
    }
  }
  result = 0;
LABEL_15:
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

// Line 124: range 0000000016602772-000000001660326E
void __cdecl GravenInnocenceRaceGallery::sendSettleNotify(
        GravenInnocenceRaceGallery *const this,
        Player *player,
        bool is_success,
        proto::GalleryStopReason reason)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  ActivityGravenInnocenceExcelConfigMgr *p_activity_graven_innocence_mgr; // rcx
  GravenInnocenceActivity *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v11; // rdx
  std::__shared_ptr_access<GravenInnocenceActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  PlayerWatcherComp *WatcherComp; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  bool is_new_watcher_finished; // [rsp+2Fh] [rbp-191h]
  unsigned int val; // [rsp+30h] [rbp-190h] BYREF
  uint32_t challenge_progress; // [rsp+34h] [rbp-18Ch]
  uint32_t level_id; // [rsp+38h] [rbp-188h]
  uint32_t max_score; // [rsp+3Ch] [rbp-184h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-180h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-178h] BYREF
  const data::GravenInnocenceRaceLevelExcelConfig *level_config_ptr; // [rsp+50h] [rbp-170h]
  const std::vector<unsigned int> *__for_range; // [rsp+58h] [rbp-168h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+60h] [rbp-160h]
  common::milog::MiLogStream v33; // [rsp+70h] [rbp-150h] BYREF
  char v34[304]; // [rsp+90h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 14 watcher_id:152 64 8 17 watcher_param:173 96 16 16 activity_ptr:137 128 16 15 watcher_p"
                        "tr:159 160 56 10 notify:125";
  *(_QWORD *)(v4 + 16) = GravenInnocenceRaceGallery::sendSettleNotify;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  proto::GravenInnocenceRaceSettleNotify::GravenInnocenceRaceSettleNotify((proto::GravenInnocenceRaceSettleNotify *const)(v4 + 160));
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GravenInnocenceRaceSettleNotify::set_gallery_id(
    (proto::GravenInnocenceRaceSettleNotify *const)(v4 + 160),
    this->gallery_id_);
  proto::GravenInnocenceRaceSettleNotify::set_reason((proto::GravenInnocenceRaceSettleNotify *const)(v4 + 160), reason);
  proto::GravenInnocenceRaceSettleNotify::set_is_success(
    (proto::GravenInnocenceRaceSettleNotify *const)(v4 + 160),
    is_success);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GravenInnocenceRaceSettleNotify::set_coin_count(
    (proto::GravenInnocenceRaceSettleNotify *const)(v4 + 160),
    this->coin_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_coin_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_coin_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocenceRaceSettleNotify::set_total_coint_count(
    (proto::GravenInnocenceRaceSettleNotify *const)(v4 + 160),
    this->total_coin_count_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 128));
  p_activity_graven_innocence_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128))->design_config.txt_config_mgr.activity_graven_innocence_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = ActivityGravenInnocenceExcelConfigMgr::findRaceLevelIdByGalleryId(
               p_activity_graven_innocence_mgr,
               this->gallery_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 128));
  proto::GravenInnocenceRaceSettleNotify::set_level_id(
    (proto::GravenInnocenceRaceSettleNotify *const)(v4 + 160),
    level_id);
  if ( is_success )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::GravenInnocenceRaceSettleNotify::set_score(
      (proto::GravenInnocenceRaceSettleNotify *const)(v4 + 160),
      this->score_);
    if ( *(_BYTE *)(((unsigned __int64)&this->remain_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->remain_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GravenInnocenceRaceSettleNotify::set_remain_time(
      (proto::GravenInnocenceRaceSettleNotify *const)(v4 + 160),
      this->remain_time_);
    Player::getActivityComp(player);
    PlayerActivityComp::findOpenningActivity<GravenInnocenceActivity>((PlayerActivityComp *const)(v4 + 96));
    if ( std::operator!=<GravenInnocenceActivity>((const std::shared_ptr<GravenInnocenceActivity> *)(v4 + 96), 0LL) )
    {
      v8 = std::__shared_ptr_access<GravenInnocenceActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GravenInnocenceActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      max_score = GravenInnocenceActivity::getRaceLevelMaxScore(v8, level_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( max_score < this->score_ )
        proto::GravenInnocenceRaceSettleNotify::set_is_new_record(
          (proto::GravenInnocenceRaceSettleNotify *const)(v4 + 160),
          1);
    }
    is_new_watcher_finished = 0;
    challenge_progress = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 128));
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    level_config_ptr = data::ActivityGravenInnocenceExcelConfigMgrBase::findGravenInnocenceRaceLevelExcelConfig(
                         &v9->design_config.txt_config_mgr.activity_graven_innocence_mgr,
                         level_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 128));
    if ( level_config_ptr
      && std::operator!=<GravenInnocenceActivity>((const std::shared_ptr<GravenInnocenceActivity> *)(v4 + 96), 0LL) )
    {
      __for_range = &level_config_ptr->score_watcher_list;
      __for_begin._M_current = std::vector<unsigned int>::begin(&level_config_ptr->score_watcher_list)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&level_config_ptr->score_watcher_list)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v11 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v4 + 48) = *v11;
        v12 = std::__shared_ptr_access<GravenInnocenceActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GravenInnocenceActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        if ( BaseActivity::isWatcherFinished(v12, *(_DWORD *)(v4 + 48)) )
        {
          ++challenge_progress;
        }
        else
        {
          WatcherComp = Player::getWatcherComp(player);
          PlayerWatcherComp::findWatcher(
            (PlayerWatcherComp *const)(v4 + 128),
            (__int64)WatcherComp,
            *(_DWORD *)(v4 + 48));
          if ( std::operator==<BaseWatcher>((const std::shared_ptr<BaseWatcher> *)(v4 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/graven_innocence_race_gallery.cpp",
              "sendSettleNotify",
              162);
            v14 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                    &v33,
                    (const char (*)[63])"[GRAVEN_INNOCENCE] RaceGallery findWatcher failed, watcher_id:");
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v14,
                    (const unsigned int *)(v4 + 48));
            v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
            val = Player::getUid(player);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
            common::milog::MiLogStream::~MiLogStream(&v33);
          }
          else
          {
            v17 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
            watcher_config_ptr = BaseWatcher::getConfig(v17);
            if ( watcher_config_ptr )
            {
              *(GravenInnocenceRaceWatcherParam *)(v4 + 64) = std::any_cast<GravenInnocenceRaceWatcherParam>(&watcher_config_ptr->param);
              if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              if ( this->score_ >= *(_DWORD *)(v4 + 68) )
              {
                ++challenge_progress;
                is_new_watcher_finished = 1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_gallery/graven_innocence_race_gallery.cpp",
                "sendSettleNotify",
                168);
              v18 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                      &v33,
                      (const char (*)[69])"[GRAVEN_INNOCENCE] RaceGallery watcher getConfig failed, watcher_id:");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v18,
                      (const unsigned int *)(v4 + 48));
              v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
              val = Player::getUid(player);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
              common::milog::MiLogStream::~MiLogStream(&v33);
            }
          }
          std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v4 + 128));
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    if ( is_new_watcher_finished )
      proto::GravenInnocenceRaceSettleNotify::set_challenge_progress(
        (proto::GravenInnocenceRaceSettleNotify *const)(v4 + 160),
        challenge_progress);
    std::shared_ptr<GravenInnocenceActivity>::~shared_ptr((std::shared_ptr<GravenInnocenceActivity> *const)(v4 + 96));
  }
  Player::sendProto(player, (const google::protobuf::Message *)(v4 + 160));
  proto::GravenInnocenceRaceSettleNotify::~GravenInnocenceRaceSettleNotify((proto::GravenInnocenceRaceSettleNotify *const)(v4 + 160));
  if ( v34 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 195: range 0000000016603270-0000000016603A07
void __cdecl GravenInnocenceRaceGallery::printSettleLog(
        GravenInnocenceRaceGallery *const this,
        proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GravenInnocenceRaceGallery *v5; // rdx
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t v15; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  Player *v23; // r14
  std::string v24; // [rsp+0h] [rbp-120h]
  proto::GalleryStopReason reasona; // [rsp+4h] [rbp-11Ch]
  GravenInnocenceRaceGallery *thisa; // [rsp+8h] [rbp-118h]
  uint32_t level_id; // [rsp+14h] [rbp-10Ch]
  uint32_t now; // [rsp+18h] [rbp-108h]
  uint32_t cost_time; // [rsp+1Ch] [rbp-104h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+20h] [rbp-100h]
  ActivityGravenInnocenceExcelConfigMgr *activity_graven_innocence_mgr; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v33; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v34; // [rsp+50h] [rbp-D0h] BYREF
  char v35[176]; // [rsp+70h] [rbp-B0h] BYREF

  v24._M_string_length = (std::string::size_type)this;
  HIDWORD(v24._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 10 holder:202 64 16 20 owner_player_ptr:196 96 16 11 log_ptr:203";
  *(_QWORD *)(v2 + 16) = GravenInnocenceRaceGallery::printSettleLog;
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
  (*(void (__fastcall **)(unsigned __int64, GravenInnocenceRaceGallery *))v6)(v2 + 64, v5);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/graven_innocence_race_gallery.cpp",
      "printSettleLog",
      199);
    v7 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
           &v34,
           (const char (*)[70])"[GRAVEN_INNOCENCE] RaceGallery owner_player_ptr is null. gallery_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v34);
    goto LABEL_41;
  }
  v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  BasicComp = Player::getBasicComp(v8);
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v34, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE5Au, v24);
  std::string::~string(&v34);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyGravenInnocenceRaceSettle>();
  gallery_config_ptr = BaseGallery::getGalleryExcelConfig((const BaseGallery *const)thisa);
  if ( gallery_config_ptr )
  {
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGravenInnocenceRaceSettle::set_group_id(v10, gallery_config_ptr->control_group_id);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v33);
  activity_graven_innocence_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.activity_graven_innocence_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v33);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = ActivityGravenInnocenceExcelConfigMgr::findRaceLevelIdByGalleryId(
               activity_graven_innocence_mgr,
               thisa->gallery_id_);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  proto_log::PlayerLogBodyGravenInnocenceRaceSettle::set_level_id(v11, level_id);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->coin_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyGravenInnocenceRaceSettle::set_coin_score(v12, thisa->coin_score_);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->time_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->time_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyGravenInnocenceRaceSettle::set_time_score(v13, thisa->time_score_);
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  proto_log::PlayerLogBodyGravenInnocenceRaceSettle::set_transaction(v14, &thisa->transaction_);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  now = Scene::getSceneTimeSeconds(thisa->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( now <= thisa->start_time_ )
    v15 = 0;
  else
    v15 = now - thisa->start_time_;
  cost_time = v15;
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  proto_log::PlayerLogBodyGravenInnocenceRaceSettle::set_cost_time(v16, cost_time);
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->coin_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyGravenInnocenceRaceSettle::set_coin_count(v17, thisa->coin_count_);
  if ( reasona == GALLERY_STOP_AVATAR_DIE )
  {
    v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyGravenInnocenceRaceSettle::set_result(v20, 3u);
    goto LABEL_40;
  }
  if ( reasona > GALLERY_STOP_AVATAR_DIE )
    goto LABEL_39;
  if ( reasona == GALLERY_STOP_LUA_INTERRUPT_FAIL )
  {
    v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyGravenInnocenceRaceSettle::set_result(v21, 4u);
    goto LABEL_40;
  }
  if ( reasona > GALLERY_STOP_LUA_INTERRUPT_FAIL )
    goto LABEL_39;
  if ( reasona == GALLERY_STOP_CLIENT_INTERRUPT )
  {
    v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyGravenInnocenceRaceSettle::set_result(v19, 1u);
    goto LABEL_40;
  }
  if ( reasona != GALLERY_STOP_LUA_INTERRUPT_SUCCESS )
  {
LABEL_39:
    v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyGravenInnocenceRaceSettle::set_result(v22, 2u);
    goto LABEL_40;
  }
  v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  proto_log::PlayerLogBodyGravenInnocenceRaceSettle::set_result(v18, 0);
LABEL_40:
  v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v33, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGravenInnocenceRaceSettle,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyGravenInnocenceRaceSettle> *)(v2 + 96));
  Player::printStatLog(v23, &p_body_ptr, &v33, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v33);
  std::shared_ptr<proto_log::PlayerLogBodyGravenInnocenceRaceSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGravenInnocenceRaceSettle> *const)(v2 + 96));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
LABEL_41:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v35 == (char *)v2 )
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
