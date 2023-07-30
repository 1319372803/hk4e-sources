// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/triathlon_gallery.cpp

// Line 27: range 000000001804794A-0000000018047DC6
void __cdecl TriathlonGallery::onStart(TriathlonGallery *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  TriathlonGallery *v4; // rdx
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rax
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  Player *v12; // r14
  std::string v13; // [rsp+0h] [rbp-110h]
  const BaseGallery *thisa; // [rsp+8h] [rbp-108h]
  const data::GalleryExcelConfig *config_ptr; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+60h] [rbp-B0h] BYREF

  v13._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 holder:34 64 16 19 owner_player_ptr:28 96 16 10 log_ptr:35";
  *(_QWORD *)(v1 + 16) = TriathlonGallery::onStart;
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
  (*(void (__fastcall **)(unsigned __int64, TriathlonGallery *))v5)(v1 + 64, v4);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/triathlon_gallery.cpp",
      "onStart",
      31);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v18,
           (const char (*)[52])"[WinterCamp] owner_player_ptr is null. gallery_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    BasicComp = Player::getBasicComp(v7);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v18, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xDE0u, v13);
    std::string::~string(&v18);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyWinterCampRaceStart>();
    config_ptr = BaseGallery::getGalleryExcelConfig(thisa);
    if ( config_ptr )
    {
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->control_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyWinterCampRaceStart::set_group_id(v9, config_ptr->control_group_id);
    }
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyWinterCampRaceStart::set_gallery_id(v10, thisa->gallery_id_);
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    proto_log::PlayerLogBodyWinterCampRaceStart::set_transaction(v11, &thisa->transaction_);
    v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyWinterCampRaceStart,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyWinterCampRaceStart> *)(v1 + 96));
    Player::printStatLog(v12, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyWinterCampRaceStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyWinterCampRaceStart> *const)(v1 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  if ( v19 == (char *)v1 )
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

// Line 47: range 0000000018047DC8-0000000018047DD6
void __cdecl TriathlonGallery::toClient(TriathlonGallery *const this, proto::SceneGalleryInfo *client_info)
{
  ;
};

// Line 51: range 0000000018047DD8-000000001804841B
// local variable allocation has failed, the output may be wrong!
void __fastcall TriathlonGallery::onStop(TriathlonGallery *const this, proto::GalleryStopReason reason)
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
  Player *v12; // rax
  uint32_t v13; // ecx
  char v14; // dl
  bool v15; // dl
  Player *v16; // rax
  common::milog::MiLogStream *v17; // rax
  Player *v18; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int *v20; // [rsp+0h] [rbp-100h]
  TriathlonGallery *thisa; // [rsp+8h] [rbp-F8h]
  unsigned int *v22; // [rsp+10h] [rbp-F0h]
  unsigned int *val; // [rsp+18h] [rbp-E8h] OVERLAPPED BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+50h] [rbp-B0h] BYREF

  thisa = this;
  HIDWORD(v20) = reason;
  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 reason:50 64 16 13 player_ptr:53 96 16 12 event_ptr:78";
  *(_QWORD *)(v2 + 16) = TriathlonGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = reason;
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/triathlon_gallery.cpp",
    "onStop",
    52);
  v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
         &v25,
         (const char (*)[45])"[WinterCamp] TriathlonGallery stop. reason: ");
  v6 = common::milog::MiLogStream::operator<<<proto::GalleryStopReason,(proto::GalleryStopReason*)0>(
         v5,
         (const proto::GalleryStopReason *)(v2 + 48));
  v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])" gallery_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
  common::milog::MiLogStream::~MiLogStream(&v25);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v2 + 64));
  v8 = 0LL;
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/triathlon_gallery.cpp",
      "onStop",
      56);
    v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v25,
           (const char (*)[43])"[WinterCamp] getOwnPlayer fail. scene_id: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    LODWORD(val) = Scene::getSceneId(this->scene_);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)&val);
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" gallery_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    if ( *(_DWORD *)(v2 + 48) == 1 )
    {
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      TriathlonGallery::sendSettleNotify(this, v12, 0);
    }
    else if ( *(_DWORD *)(v2 + 48) == 3 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      HIDWORD(val) = Scene::getSceneTimeSeconds(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( HIDWORD(val) >= this->end_time_ )
        v13 = 0;
      else
        v13 = this->end_time_ - HIDWORD(val);
      v14 = *(_BYTE *)(((unsigned __int64)&this->remain_time_ >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v14 != 0;
      v15 = v14 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v14;
      if ( v15 )
        __asan_report_store4(&this->remain_time_, v8, v15);
      this->remain_time_ = v13;
      TriathlonGallery::calcScore(this);
      v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      TriathlonGallery::sendSettleNotify(this, v16, 1);
      common::tools::perf::make_shared<GalleryTriathlonScoreEvent,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
        (unsigned int *)(v2 + 96),
        &this->gallery_id_,
        &this->score_,
        &this->remain_time_,
        &this->normal_coin_,
        &this->limited_coin_,
        v20,
        (unsigned int *)this,
        v22,
        val);
      if ( std::operator==<GalleryTriathlonScoreEvent>(
             (const std::shared_ptr<GalleryTriathlonScoreEvent> *)(v2 + 96),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_gallery/triathlon_gallery.cpp",
          "onStop",
          81);
        v17 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                &v25,
                (const char (*)[71])"[WinterCamp] MAKE_SHARED GalleryTriathlonScoreEvent fail. gallery_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &thisa->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
      else
      {
        v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        EventComp = Player::getEventComp(v18);
        std::shared_ptr<BaseEvent>::shared_ptr<GalleryTriathlonScoreEvent,void>(
          &p_event_ptr,
          (const std::shared_ptr<GalleryTriathlonScoreEvent> *)(v2 + 96));
        PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      }
      std::shared_ptr<GalleryTriathlonScoreEvent>::~shared_ptr((std::shared_ptr<GalleryTriathlonScoreEvent> *const)(v2 + 96));
    }
    else
    {
      TriathlonGallery::transPlayers(this);
    }
    TriathlonGallery::printEndLog(thisa, *(proto::GalleryStopReason *)(v2 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v26 == (char *)v2 )
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

// Line 91: range 000000001804841C-0000000018048744
uint32_t __cdecl TriathlonGallery::calcScore(TriathlonGallery *const this)
{
  ActivityWinterCampExcelConfigMgr *p_activity_winter_camp_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  uint32_t normal_coin; // ecx
  uint32_t limited_coin; // ecx
  __int64 v6; // rsi
  uint32_t remain_time; // ecx
  char v8; // al
  uint32_t score; // [rsp+14h] [rbp-4Ch]
  uint32_t scorea; // [rsp+14h] [rbp-4Ch]
  uint32_t scoreb; // [rsp+14h] [rbp-4Ch]
  const data::WinterCampRaceExcelConfig *config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  p_activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  config_ptr = ActivityWinterCampExcelConfigMgr::findWinterCampRaceExcelConfigByGalleryId(
                 p_activity_winter_camp_config_mgr,
                 this->gallery_id_);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->normal_coin_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normal_coin_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    normal_coin = this->normal_coin_;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->gold_factor >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->gold_factor >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    score = normal_coin * config_ptr->gold_factor;
    if ( *(_BYTE *)(((unsigned __int64)&this->limited_coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->limited_coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    limited_coin = this->limited_coin_;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->limited_gold_factor >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->limited_gold_factor >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    scorea = limited_coin * config_ptr->limited_gold_factor + score;
    v6 = (((_BYTE)this + 52) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->remain_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->remain_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    remain_time = this->remain_time_;
    v8 = *(_BYTE *)(((unsigned __int64)&config_ptr->time_factor >> 3) + 0x7FFF8000);
    LOBYTE(v6) = v8 != 0;
    if ( v8 != 0 && v8 <= 3 )
      __asan_report_load4();
    scoreb = remain_time * config_ptr->time_factor + scorea;
    if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->score_, v6, (_BYTE)this + 56);
    }
    this->score_ = scoreb;
    return scoreb;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/triathlon_gallery.cpp",
      "calcScore",
      95);
    v2 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v14,
           (const char (*)[73])"[WinterCamp] findWinterCampRaceExcelConfigByGalleryId fail. gallery id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return 0;
  }
};

// Line 107: range 0000000018048746-000000001804902F
void __cdecl TriathlonGallery::transPlayers(TriathlonGallery *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  ActivityWinterCampExcelConfigMgr *p_activity_winter_camp_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  Scene *scene; // rcx
  Player *v9; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *v13; // rax
  PlayerSceneComp *v14; // r14
  bool v15; // r14
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  unsigned int val; // [rsp+14h] [rbp-14Ch] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  const data::WinterCampRaceExcelConfig *config_ptr; // [rsp+28h] [rbp-138h]
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+30h] [rbp-130h]
  std::pair<unsigned int const,proto::OnlinePlayerInfo> *__in; // [rsp+38h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+40h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v39; // [rsp+50h] [rbp-110h] BYREF
  TransferReason p_reason; // [rsp+70h] [rbp-F0h] BYREF
  char v41[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 12 7 pos:115 64 12 7 rot:115 96 16 14 player_ptr:123";
  *(_QWORD *)(v1 + 16) = TriathlonGallery::transPlayers;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219020288;
  v3[536862722] = -219020288;
  v3[536862723] = -202178560;
  common::milog::MiLogStream::create(
    &v39,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/triathlon_gallery.cpp",
    "transPlayers",
    108);
  v4 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
         &v39,
         (const char (*)[57])"[WinterCamp] TriathlonGallery transPlayers. gallery_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->gallery_id_);
  common::milog::MiLogStream::~MiLogStream(&v39);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 96));
  p_activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  config_ptr = ActivityWinterCampExcelConfigMgr::findWinterCampRaceExcelConfigByGalleryId(
                 p_activity_winter_camp_config_mgr,
                 this->gallery_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
  if ( config_ptr )
  {
    Vector3::Vector3((Vector3 *const)(v1 + 32), 0.0, 0.0, 0.0);
    Vector3::Vector3((Vector3 *const)(v1 + 64), 0.0, 0.0, 0.0);
    if ( BaseGallery::findGalleryRevivePoint((BaseGallery *const)this, (Vector3 *)(v1 + 32), (Vector3 *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/triathlon_gallery.cpp",
        "transPlayers",
        118);
      v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v39,
             (const char (*)[55])"[WinterCamp] findGalleryRevivePoint fail. gallery_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v39);
    }
    else
    {
      __for_range = &this->player_info_map_;
      __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&this->player_info_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(&this->player_info_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(&__for_begin);
        uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(__in);
        _ = std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(__in);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        scene = this->scene_;
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Scene::findPlayer((const Scene *const)(v1 + 96), (__int64)scene, *uid);
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 96), 0LL) )
        {
          v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          SceneComp = Player::getSceneComp(v9);
          if ( PlayerSceneComp::isInTransfer(SceneComp) )
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_gallery/triathlon_gallery.cpp",
              "transPlayers",
              129);
            v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v39,
                    (const char (*)[35])"[WinterCamp] already in transfer. ");
            v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            operator<<(v11, v12);
            common::milog::MiLogStream::~MiLogStream(&v39);
          }
          else
          {
            v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            v14 = Player::getSceneComp(v13);
            TransferReason::TransferReason(&p_reason, ENTER_REASON_GALLERY);
            if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v15 = PlayerSceneComp::jumpToScene(
                    v14,
                    this->scene_,
                    (const Vector3 *)(v1 + 32),
                    (const Vector3 *)(v1 + 64),
                    0,
                    &p_reason) == 0;
            TransferReason::~TransferReason(&p_reason);
            if ( v15 )
            {
              common::milog::MiLogStream::create(
                &v39,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_gallery/triathlon_gallery.cpp",
                "transPlayers",
                135);
              v16 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      &v39,
                      (const char (*)[38])"[WinterCamp] move player to scene_id:");
              if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Scene::getSceneId(this->scene_);
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
              v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" pos:");
              v19 = operator<<(v18, (const Vector3 *)(v1 + 32));
              v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" rot:");
              v21 = operator<<(v20, (const Vector3 *)(v1 + 64));
              v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              operator<<(v21, v22);
              common::milog::MiLogStream::~MiLogStream(&v39);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v39,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_gallery/triathlon_gallery.cpp",
                "transPlayers",
                139);
              v23 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      &v39,
                      (const char (*)[38])"[WinterCamp] move player to scene_id:");
              if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Scene::getSceneId(this->scene_);
              v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
              v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" pos:");
              v26 = operator<<(v25, (const Vector3 *)(v1 + 32));
              v27 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v26, (const char (*)[6])" rot:");
              v28 = operator<<(v27, (const Vector3 *)(v1 + 64));
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])" failed.");
              v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              operator<<(v29, v30);
              common::milog::MiLogStream::~MiLogStream(&v39);
            }
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
        std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(&__for_begin);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/triathlon_gallery.cpp",
      "transPlayers",
      112);
    v6 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v39,
           (const char (*)[73])"[WinterCamp] findWinterCampRaceExcelConfigByGalleryId fail. gallery_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v39);
  }
  if ( v41 == (char *)v1 )
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

// Line 146: range 0000000018049030-0000000018049593
int32_t __cdecl TriathlonGallery::updatePlayerScore(
        TriathlonGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *context)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r12
  unsigned __int64 v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::map<unsigned int,unsigned int>::mapped_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::allocator<char> __a; // [rsp+23h] [rbp-9Dh] BYREF
  uint32_t MAX_TYPE_COUNT; // [rsp+24h] [rbp-9Ch]
  unsigned __int64 val; // [rsp+28h] [rbp-98h] BYREF
  std::string name; // [rsp+30h] [rbp-90h] BYREF
  char v26[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 13 pick_type:148";
  *(_QWORD *)(v4 + 16) = TriathlonGallery::updatePlayerScore;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "pick_up", &__a);
  v7 = ScriptUtil::getTableValue<unsigned int>(
         &ScriptUtil::no_exception_instance,
         param_table,
         &name,
         (unsigned int *)(v4 + 32)) != 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/triathlon_gallery.cpp",
      "updatePlayerScore",
      151);
    v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[55])"[WinterCamp] getTableValue pick_up failed. gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    result = -1;
  }
  else
  {
    if ( *(_DWORD *)(v4 + 32) )
    {
      if ( *(_DWORD *)(v4 + 32) == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->limited_coin_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->limited_coin_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        ++this->limited_coin_;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->normal_coin_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normal_coin_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ++this->normal_coin_;
    }
    MAX_TYPE_COUNT = 6;
    if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
            &this->pick_up_map_,
            (const unsigned int *)(v4 + 32))
      && std::map<unsigned int,unsigned int>::size(&this->pick_up_map_) > 5 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/triathlon_gallery.cpp",
        "updatePlayerScore",
        165);
      v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              (common::milog::MiLogStream *const)&name,
              (const char (*)[47])"[WinterCamp] too many pick_up type. new type: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v12, (const char (*)[2])" ");
      val = std::map<unsigned int,unsigned int>::size(&this->pick_up_map_);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      result = 0;
    }
    else
    {
      v14 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                &this->pick_up_map_,
                                (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 32));
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0 && (char)((v14 & 7) + 3) >= *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load4();
      ++*(_DWORD *)v14;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/triathlon_gallery.cpp",
        "updatePlayerScore",
        169);
      v15 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              (common::milog::MiLogStream *const)&name,
              (const char (*)[38])"[WinterCamp] updatePlayerScore type: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
      v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" cur: ");
      v18 = std::map<unsigned int,unsigned int>::operator[](
              &this->pick_up_map_,
              (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 32));
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, v18);
      v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])" gallery_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      result = 0;
    }
  }
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 174: range 0000000018049618-0000000018049DDD
// local variable allocation has failed, the output may be wrong!
void __cdecl TriathlonGallery::printEndLog(TriathlonGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Player *v18; // rax
  PlayerAvatarComp *AvatarComp; // r14
  Player *v20; // r14
  std::string v21; // [rsp+0h] [rbp-140h] OVERLAPPED BYREF
  const data::GalleryExcelConfig *config_ptr; // [rsp+20h] [rbp-120h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-118h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+30h] [rbp-110h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *type; // [rsp+38h] [rbp-108h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+40h] [rbp-100h]
  proto_log::WinterCampPickUpInfo *pick_up_info; // [rsp+48h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-F0h] BYREF
  std::shared_ptr<proto_log::PlayerLogBodyWinterCampRaceStop> v29; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v30; // [rsp+70h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+90h] [rbp-B0h] BYREF

  v21._M_string_length = (std::string::size_type)this;
  HIDWORD(v21._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 10 holder:181 64 16 20 owner_player_ptr:175 96 16 11 log_ptr:182";
  *(_QWORD *)(v2 + 16) = TriathlonGallery::printEndLog;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  M_string_length = v21._M_string_length;
  if ( *(_BYTE *)((v21._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(_QWORD *)v21._M_string_length + 64LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, std::string::size_type))v6)(v2 + 64, M_string_length);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/triathlon_gallery.cpp",
      "printEndLog",
      178);
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v30,
           (const char (*)[52])"[WinterCamp] owner_player_ptr is null. gallery_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v7,
      (const unsigned int *)(v21._M_string_length + 32));
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    BasicComp = Player::getBasicComp(v8);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v30, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xDE1u, v21);
    std::string::~string(&v30);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyWinterCampRaceStop>();
    config_ptr = BaseGallery::getGalleryExcelConfig((const BaseGallery *const)v21._M_string_length);
    if ( config_ptr )
    {
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->control_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyWinterCampRaceStop::set_group_id(v10, config_ptr->control_group_id);
    }
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((v21._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v21._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyWinterCampRaceStop::set_gallery_id(v11, *(_DWORD *)(v21._M_string_length + 32));
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyWinterCampRaceStop::set_transaction(v12, (const std::string *)(v21._M_string_length + 64));
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((v21._M_string_length + 308) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v21._M_string_length) + 52) & 7) + 3) >= *(_BYTE *)(((v21._M_string_length + 308) >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyWinterCampRaceStop::set_remain_time(v13, *(_DWORD *)(v21._M_string_length + 308));
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((v21._M_string_length + 312) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v21._M_string_length + 312) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyWinterCampRaceStop::set_score(v14, *(_DWORD *)(v21._M_string_length + 312));
    if ( HIDWORD(v21._M_dataplus._M_p) == 2 )
    {
      v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyWinterCampRaceStop::set_result(v16, 3u);
    }
    else
    {
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( HIDWORD(v21._M_dataplus._M_p) == 3 )
        proto_log::PlayerLogBodyWinterCampRaceStop::set_result(v15, 0);
      else
        proto_log::PlayerLogBodyWinterCampRaceStop::set_result(v15, 1u);
    }
    __for_range = (std::map<unsigned int,unsigned int> *)(v21._M_string_length + 320);
    *(std::map<unsigned int,unsigned int>::iterator *)v21._anon_0._M_local_buf = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v21._M_string_length + 320));
    *((std::map<unsigned int,unsigned int>::iterator *)&v21._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v21._M_string_length + 320));
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&v21._anon_0,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&v21._anon_0._M_allocated_capacity
            + 1) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&v21._anon_0);
      type = std::get<0ul,unsigned int const,unsigned int>(__in);
      count = std::get<1ul,unsigned int const,unsigned int>(__in);
      v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      pick_up_info = proto_log::PlayerLogBodyWinterCampRaceStop::add_pick_up_list(v17);
      if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::WinterCampPickUpInfo::set_type(pick_up_info, *type);
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::WinterCampPickUpInfo::set_count(pick_up_info, *count);
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&v21._anon_0);
    }
    v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    AvatarComp = Player::getAvatarComp(v18);
    std::shared_ptr<proto_log::PlayerLogBodyWinterCampRaceStop>::shared_ptr(
      &v29,
      (const std::shared_ptr<proto_log::PlayerLogBodyWinterCampRaceStop> *)(v2 + 96));
    std::function<ForeachPolicy ()(Avatar &)>::function<TriathlonGallery::printEndLog(proto::GalleryStopReason)::{lambda(Avatar &)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v30,
      (TriathlonGallery::printEndLog::<lambda(Avatar&)> *)&v29);
    PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v30);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v30);
    TriathlonGallery::printEndLog(proto::GalleryStopReason)::{lambda(Avatar &)#1}::~Avatar((TriathlonGallery::printEndLog::<lambda(Avatar&)> *const)&v29);
    v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v29, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyWinterCampRaceStop,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyWinterCampRaceStop> *)(v2 + 96));
    Player::printStatLog(v20, &p_body_ptr, (MessagePtr *)&v29, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v29);
    std::shared_ptr<proto_log::PlayerLogBodyWinterCampRaceStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyWinterCampRaceStop> *const)(v2 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v31 == (char *)v2 )
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

// Line 212: range 0000000018049594-00000000180495FA
ForeachPolicy __cdecl TriathlonGallery::printEndLog(proto::GalleryStopReason)::{lambda(Avatar &)#1}::operator()(
        const TriathlonGallery::printEndLog::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t AvatarId; // edx
  uint32_t Level; // edx
  proto_log::CombatAvatarLog *combat_avatar_log; // [rsp+18h] [rbp-8h]

  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWinterCampRaceStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  combat_avatar_log = proto_log::PlayerLogBodyWinterCampRaceStop::add_avatar_list(v2);
  AvatarId = Avatar::getAvatarId(avatar);
  proto_log::CombatAvatarLog::set_avatar_id(combat_avatar_log, AvatarId);
  Level = Creature::getLevel(avatar);
  proto_log::CombatAvatarLog::set_avatar_level(combat_avatar_log, Level);
  return 0;
};

// Line 212: range 000000001808C642-000000001808C667
void __cdecl TriathlonGallery::printEndLog(proto::GalleryStopReason)::{lambda(Avatar &)#1}::Avatar(
        TriathlonGallery::printEndLog::<lambda(Avatar&)> *const this,
        TriathlonGallery::printEndLog::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyWinterCampRaceStop>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 212: range 000000001808C732-000000001808C757
void __cdecl TriathlonGallery::printEndLog(proto::GalleryStopReason)::{lambda(Avatar &)#1}::Avatar(
        TriathlonGallery::printEndLog::<lambda(Avatar&)> *const this,
        const TriathlonGallery::printEndLog::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyWinterCampRaceStop>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 212: range 00000000180495FC-0000000018049616
void __cdecl TriathlonGallery::printEndLog(proto::GalleryStopReason)::{lambda(Avatar &)#1}::~Avatar(
        TriathlonGallery::printEndLog::<lambda(Avatar&)> *const this)
{
  std::shared_ptr<proto_log::PlayerLogBodyWinterCampRaceStop>::~shared_ptr(&this->__log_ptr);
};

// Line 224: range 0000000018049DDE-000000001804A32B
void __cdecl TriathlonGallery::sendSettleNotify(TriathlonGallery *const this, Player *player, bool is_success)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ActivityWinterCampExcelConfigMgr *p_activity_winter_camp_config_mgr; // rcx
  WinterCampActivity *v7; // rcx
  uint32_t max_score; // [rsp+24h] [rbp-CCh]
  const data::WinterCampRaceExcelConfig *config_ptr; // [rsp+28h] [rbp-C8h]
  char v11[192]; // [rsp+30h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 16 16 activity_ptr:238 80 48 10 notify:225";
  *(_QWORD *)(v3 + 16) = TriathlonGallery::sendSettleNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  proto::WinterCampTriathlonSettleNotify::WinterCampTriathlonSettleNotify((proto::WinterCampTriathlonSettleNotify *const)(v3 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::WinterCampTriathlonSettleNotify::set_gallery_id(
    (proto::WinterCampTriathlonSettleNotify *const)(v3 + 80),
    this->gallery_id_);
  proto::WinterCampTriathlonSettleNotify::set_is_success(
    (proto::WinterCampTriathlonSettleNotify *const)(v3 + 80),
    is_success);
  if ( *(_BYTE *)(((unsigned __int64)&this->normal_coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normal_coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::WinterCampTriathlonSettleNotify::set_normal_coin(
    (proto::WinterCampTriathlonSettleNotify *const)(v3 + 80),
    this->normal_coin_);
  if ( *(_BYTE *)(((unsigned __int64)&this->limited_coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limited_coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::WinterCampTriathlonSettleNotify::set_limited_coin(
    (proto::WinterCampTriathlonSettleNotify *const)(v3 + 80),
    this->limited_coin_);
  if ( is_success )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::WinterCampTriathlonSettleNotify::set_score(
      (proto::WinterCampTriathlonSettleNotify *const)(v3 + 80),
      this->score_);
    if ( *(_BYTE *)(((unsigned __int64)&this->remain_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->remain_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::WinterCampTriathlonSettleNotify::set_remain_time(
      (proto::WinterCampTriathlonSettleNotify *const)(v3 + 80),
      this->remain_time_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 48));
    p_activity_winter_camp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48))->design_config.txt_config_mgr.activity_winter_camp_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    config_ptr = ActivityWinterCampExcelConfigMgr::findWinterCampRaceExcelConfigByGalleryId(
                   p_activity_winter_camp_config_mgr,
                   this->gallery_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 48));
    if ( config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::WinterCampTriathlonSettleNotify::set_race_id(
        (proto::WinterCampTriathlonSettleNotify *const)(v3 + 80),
        config_ptr->id);
      Player::getActivityComp(player);
      PlayerActivityComp::findOpenningActivity<WinterCampActivity>((PlayerActivityComp *const)(v3 + 48));
      if ( std::operator!=<WinterCampActivity>((const std::shared_ptr<WinterCampActivity> *)(v3 + 48), 0LL) )
      {
        v7 = std::__shared_ptr_access<WinterCampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WinterCampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        max_score = WinterCampActivity::getRaceMaxScore(v7, config_ptr->id);
        if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( max_score < this->score_ )
          proto::WinterCampTriathlonSettleNotify::set_is_new_record(
            (proto::WinterCampTriathlonSettleNotify *const)(v3 + 80),
            1);
      }
      std::shared_ptr<WinterCampActivity>::~shared_ptr((std::shared_ptr<WinterCampActivity> *const)(v3 + 48));
    }
  }
  Player::sendProto(player, (const google::protobuf::Message *)(v3 + 80));
  proto::WinterCampTriathlonSettleNotify::~WinterCampTriathlonSettleNotify((proto::WinterCampTriathlonSettleNotify *const)(v3 + 80));
  if ( v11 == (char *)v3 )
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
};
