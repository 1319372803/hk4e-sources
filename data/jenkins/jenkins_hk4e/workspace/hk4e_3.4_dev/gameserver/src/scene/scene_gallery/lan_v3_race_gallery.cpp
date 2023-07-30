// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/lan_v3_race_gallery.cpp

// Line 23: range 0000000016883744-0000000016883B3C
void __cdecl LanV3RaceGallery::onAvatarDie(LanV3RaceGallery *const this, Player *player)
{
  uint32_t OwnerUid; // ebx
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  PlayerAvatarComp *AvatarComp; // rax
  uint32_t GalleryComp; // ecx
  bool v10; // bl
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  SceneGalleryComp *p_gallery_id; // rdi
  common::milog::MiLogStream *v15; // rax
  unsigned int val; // [rsp+18h] [rbp-48h] BYREF
  unsigned int Uid; // [rsp+1Ch] [rbp-44h] BYREF
  std::shared_ptr<BaseGallery> __a; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  OwnerUid = Scene::getOwnerUid(this->scene_);
  if ( OwnerUid == Player::getUid(player) )
  {
    AvatarComp = Player::getAvatarComp(player);
    if ( PlayerAvatarComp::isAllAvatarDead(AvatarComp) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GalleryComp = (unsigned int)Scene::getGalleryComp(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      SceneGalleryComp::findGallery((SceneGalleryComp *const)&__a, GalleryComp);
      v10 = std::operator==<BaseGallery>(0LL, &__a);
      std::shared_ptr<BaseGallery>::~shared_ptr(&__a);
      if ( v10 )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/lan_v3_race_gallery.cpp",
          "onAvatarDie",
          34);
        v11 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v20,
                (const char (*)[51])"[LAN_V3] RaceGallery findGallery fail, gallery_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gallery_id_);
        v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
        Uid = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &Uid);
        common::milog::MiLogStream::~MiLogStream(&v20);
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
        if ( SceneGalleryComp::forceStopAndClearGallery(p_gallery_id, this->gallery_id_, 0, GALLERY_STOP_AVATAR_DIE) )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/lan_v3_race_gallery.cpp",
            "onAvatarDie",
            39);
          v15 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                  &v20,
                  (const char (*)[64])"[LAN_V3] RaceGallery forceStopAndClearGallery fail, gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v20);
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/lan_v3_race_gallery.cpp",
      "onAvatarDie",
      26);
    v3 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v20,
           (const char (*)[39])"[LAN_V3] RaceGallery onAvatarDie, uid:");
    val = Player::getUid(player);
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v4, (const char (*)[12])" owner_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Scene::getOwnerUid(this->scene_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &Uid);
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])" gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
};

// Line 45: range 0000000016883B3E-000000001688405C
void __fastcall LanV3RaceGallery::onStop(LanV3RaceGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  char *v8; // rsi
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // ecx
  char v13; // dl
  bool v14; // dl
  Player *v15; // rax
  PlayerEventComp *EventComp; // r14
  Player *v17; // rax
  bool is_success; // [rsp+17h] [rbp-D9h]
  unsigned int val; // [rsp+18h] [rbp-D8h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-D4h]
  std::shared_ptr<LanV3RaceScoreEvent> __r; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 9 reason:44 64 16 13 player_ptr:47";
  *(_QWORD *)(v2 + 16) = LanV3RaceGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = reason;
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/lan_v3_race_gallery.cpp",
    "onStop",
    46);
  v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v23,
         (const char (*)[34])"[LAN_V3] RaceGallery stop reason:");
  v6 = common::milog::MiLogStream::operator<<<proto::GalleryStopReason,(proto::GalleryStopReason*)0>(
         v5,
         (const proto::GalleryStopReason *)(v2 + 48));
  v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])" gallery_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
  common::milog::MiLogStream::~MiLogStream(&v23);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v2 + 64));
  v8 = (char *)(v2 + 64);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/lan_v3_race_gallery.cpp",
      "onStop",
      50);
    v9 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v23,
           (const char (*)[50])"[LAN_V3] RaceGallery getOwnPlayer fail, scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v23);
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
      LanV3RaceGallery::calcScore(this);
      v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      EventComp = Player::getEventComp(v15);
      common::tools::perf::make_shared<LanV3RaceScoreEvent,unsigned int &,unsigned int &>(
        (unsigned int *)&__r,
        &this->gallery_id_,
        &this->score_,
        &this->gallery_id_);
      std::shared_ptr<BaseEvent>::shared_ptr<LanV3RaceScoreEvent,void>(&p_event_ptr, &__r);
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      std::shared_ptr<LanV3RaceScoreEvent>::~shared_ptr(&__r);
    }
    v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    LanV3RaceGallery::sendSettleNotify(this, v17, is_success);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v24 == (char *)v2 )
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

// Line 68: range 000000001688405E-00000000168844D0
int32_t __cdecl LanV3RaceGallery::updatePlayerScore(
        LanV3RaceGallery *const this,
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
  *(_QWORD *)(v4 + 8) = "2 48 4 19 total_coin_count:69 64 4 12 pick_type:77";
  *(_QWORD *)(v4 + 16) = LanV3RaceGallery::updatePlayerScore;
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
      "./src/scene/scene_gallery/lan_v3_race_gallery.cpp",
      "updatePlayerScore",
      73);
    v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)&name,
            (const char (*)[39])"[LAN_V3] RaceGallery total_coin_count:");
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
        "./src/scene/scene_gallery/lan_v3_race_gallery.cpp",
        "updatePlayerScore",
        80);
      v16 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
              (common::milog::MiLogStream *const)&name,
              (const char (*)[63])"[LAN_V3] RaceGallery getTableValue pick_up failed, gallery_id:");
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

// Line 92: range 00000000168844D2-0000000016884938
void __cdecl LanV3RaceGallery::calcScore(LanV3RaceGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  float coin_count; // xmm0_4
  __int64 v7; // rsi
  float remain_time; // xmm0_4
  uint32_t v9; // ecx
  char v10; // al
  uint32_t coin_score; // [rsp+18h] [rbp-A8h]
  ActivitySeaLampV3ExcelConfigMgr *activity_sea_lamp_v3_config_mgr; // [rsp+20h] [rbp-A0h]
  const data::LanV3RaceExcelConfig *level_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-80h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 11 level_id:94";
  *(_QWORD *)(v1 + 16) = LanV3RaceGallery::calcScore;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  activity_sea_lamp_v3_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v1 + 32) = ActivitySeaLampV3ExcelConfigMgr::findRaceLevelIdByGalleryId(
                           activity_sea_lamp_v3_config_mgr,
                           this->gallery_id_);
  if ( *(_DWORD *)(v1 + 32) )
  {
    level_config_ptr = data::ActivitySeaLampV3ExcelConfigMgrBase::findLanV3RaceExcelConfig(
                         activity_sea_lamp_v3_config_mgr,
                         *(_DWORD *)(v1 + 32));
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
      coin_score = (int)(float)(coin_count * level_config_ptr->gold_factor);
      v7 = (((_BYTE)this + 52) & 7u) + 3;
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
      v9 = coin_score + (int)(float)(remain_time * level_config_ptr->time_factor);
      v10 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v7) = v10 != 0;
        __asan_report_store4(&this->score_, v7, (_BYTE)this + 56);
      }
      this->score_ = v9;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/lan_v3_race_gallery.cpp",
        "calcScore",
        103);
      v5 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             &v15,
             (const char (*)[62])"[LAN_V3] RaceGallery findLanV3RaceExcelConfig fail, level id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/lan_v3_race_gallery.cpp",
      "calcScore",
      97);
    v4 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v15,
           (const char (*)[66])"[LAN_V3] RaceGallery findRaceLevelIdByGalleryId fail, gallery id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 112: range 000000001688493A-0000000016884E27
void __cdecl LanV3RaceGallery::sendSettleNotify(LanV3RaceGallery *const this, Player *player, bool is_success)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ActivitySeaLampV3ExcelConfigMgr *p_activity_sea_lamp_v3_config_mgr; // rcx
  std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t level_id; // [rsp+28h] [rbp-E8h]
  uint32_t max_score; // [rsp+2Ch] [rbp-E4h]
  std::shared_ptr<Config> v11; // [rsp+30h] [rbp-E0h] BYREF
  char v12[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 16 16 activity_ptr:113 80 48 10 notify:119";
  *(_QWORD *)(v3 + 16) = LanV3RaceGallery::sendSettleNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<SeaLampV3Activity>((PlayerActivityComp *const)(v3 + 48));
  if ( !std::operator==<SeaLampV3Activity>(0LL, (const std::shared_ptr<SeaLampV3Activity> *)(v3 + 48)) )
  {
    proto::LanV3RaceSettleNotify::LanV3RaceSettleNotify((proto::LanV3RaceSettleNotify *const)(v3 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::LanV3RaceSettleNotify::set_gallery_id((proto::LanV3RaceSettleNotify *const)(v3 + 80), this->gallery_id_);
    proto::LanV3RaceSettleNotify::set_is_success((proto::LanV3RaceSettleNotify *const)(v3 + 80), is_success);
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->coin_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::LanV3RaceSettleNotify::set_coin_count((proto::LanV3RaceSettleNotify *const)(v3 + 80), this->coin_count_);
    if ( *(_BYTE *)(((unsigned __int64)&this->total_coin_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_coin_count_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::LanV3RaceSettleNotify::set_total_coint_count(
      (proto::LanV3RaceSettleNotify *const)(v3 + 80),
      this->total_coin_count_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v11);
    p_activity_sea_lamp_v3_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.activity_sea_lamp_v3_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    level_id = ActivitySeaLampV3ExcelConfigMgr::findRaceLevelIdByGalleryId(
                 p_activity_sea_lamp_v3_config_mgr,
                 this->gallery_id_);
    std::shared_ptr<Config>::~shared_ptr(&v11);
    proto::LanV3RaceSettleNotify::set_level_id((proto::LanV3RaceSettleNotify *const)(v3 + 80), level_id);
    if ( is_success )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::LanV3RaceSettleNotify::set_score((proto::LanV3RaceSettleNotify *const)(v3 + 80), this->score_);
      if ( *(_BYTE *)(((unsigned __int64)&this->remain_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->remain_time_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::LanV3RaceSettleNotify::set_remain_time((proto::LanV3RaceSettleNotify *const)(v3 + 80), this->remain_time_);
      v7 = std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      max_score = SeaLampV3Activity::getRaceLevelMaxScore(v7, level_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( max_score < this->score_ )
        proto::LanV3RaceSettleNotify::set_is_new_record((proto::LanV3RaceSettleNotify *const)(v3 + 80), 1);
    }
    Player::sendProto(player, (const google::protobuf::Message *)(v3 + 80));
    proto::LanV3RaceSettleNotify::~LanV3RaceSettleNotify((proto::LanV3RaceSettleNotify *const)(v3 + 80));
  }
  std::shared_ptr<SeaLampV3Activity>::~shared_ptr((std::shared_ptr<SeaLampV3Activity> *const)(v3 + 48));
  if ( v12 == (char *)v3 )
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
