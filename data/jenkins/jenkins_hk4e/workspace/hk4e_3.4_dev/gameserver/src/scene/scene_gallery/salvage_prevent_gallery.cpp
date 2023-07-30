// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/salvage_prevent_gallery.cpp

// Line 27: range 000000001688DDF0-000000001688DF22
void __cdecl SalvagePreventGallery::toClient(SalvagePreventGallery *const this, proto::SceneGalleryInfo *client_info)
{
  common::milog::MiLogStream *v2; // rbx
  proto::SceneGallerySalvagePreventInfo *detail_info; // [rsp+18h] [rbp-58h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  detail_info = proto::SceneGalleryInfo::mutable_salvage_prevent_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGallerySalvagePreventInfo::set_monster_count(detail_info, this->monster_count_);
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/salvage_prevent_gallery.cpp",
    "toClient",
    31);
  v2 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v4, (const char (*)[18])"[SalvagePrevent] ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, detail_info);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v4);
};

// Line 35: range 000000001688DF24-000000001688DF3E
void __cdecl SalvagePreventGallery::onStart(SalvagePreventGallery *const this)
{
  SalvagePreventGallery::clearGalleryData(this);
};

// Line 41: range 000000001688DF40-000000001688E5D3
void __cdecl SalvagePreventGallery::onStop(SalvagePreventGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  SalvagePreventGallery *v5; // rdx
  unsigned __int64 v6; // rax
  uint32_t *p_gallery_id; // rsi
  Player *v8; // rax
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v10; // rax
  Player *v11; // rax
  PlayerEventComp *v12; // r14
  proto::SalvagePreventGallerySettleInfo *gallery_settle_info; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<GallerySalvageSettleEvent> __r; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 19 owner_player_ptr:42 64 16 12 event_ptr:50";
  *(_QWORD *)(v2 + 16) = SalvagePreventGallery::onStop;
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
  (*(void (__fastcall **)(unsigned __int64, SalvagePreventGallery *))v6)(v2 + 32, v5);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/salvage_prevent_gallery.cpp",
      "onStop",
      45);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v17,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    SalvagePreventGallery::calcScore(this);
    p_gallery_id = &this->gallery_id_;
    common::tools::perf::make_shared<GallerySalvagePreventSettleEvent,unsigned int &>(
      (unsigned int *)(v2 + 64),
      &this->gallery_id_);
    gallery_settle_info = &std::__shared_ptr_access<GallerySalvagePreventSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GallerySalvagePreventSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->gallery_settle_info;
    switch ( reason )
    {
      case GALLERY_STOP_LUA_INTERRUPT_SUCCESS:
        if ( *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->reason_, p_gallery_id, (_BYTE)this + 56);
        }
        this->reason_ = SALVAGE_PREVENT_STOP_SUCCESS;
        if ( *(_BYTE *)(((unsigned __int64)&this->time_remain_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_remain_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::SalvagePreventGallerySettleInfo::set_time_remain(gallery_settle_info, this->time_remain_);
        if ( *(_BYTE *)(((unsigned __int64)&this->monster_count_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->monster_count_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::SalvagePreventGallerySettleInfo::set_monster_count(gallery_settle_info, this->monster_count_);
        if ( *(_BYTE *)(((unsigned __int64)&this->final_score_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->final_score_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::SalvagePreventGallerySettleInfo::set_final_score(gallery_settle_info, this->final_score_);
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        EventComp = Player::getEventComp(v8);
        common::tools::perf::make_shared<GallerySalvageSettleEvent,unsigned int &,unsigned int &>(
          (unsigned int *)&__r,
          &this->gallery_id_,
          &this->final_score_,
          &this->gallery_id_);
        std::shared_ptr<BaseEvent>::shared_ptr<GallerySalvageSettleEvent,void>(&p_event_ptr, &__r);
        PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
        std::shared_ptr<GallerySalvageSettleEvent>::~shared_ptr(&__r);
        break;
      case GALLERY_STOP_TIMEUP:
        if ( *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->reason_, p_gallery_id, (_BYTE)this + 56);
        }
        this->reason_ = SALVAGE_PREVENT_STOP_ARRIVAL;
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/salvage_prevent_gallery.cpp",
          "onStop",
          68);
        v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v17,
                (const char (*)[48])"time out on SalvagePreventGallery. gallery_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v17);
        break;
      case GALLERY_STOP_CLIENT_INTERRUPT:
        if ( *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->reason_, p_gallery_id, (_BYTE)this + 56);
        }
        this->reason_ = SALVAGE_PREVENT_STOP_INTERRUPT;
        break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::SalvagePreventGallerySettleInfo::set_reason(gallery_settle_info, this->reason_);
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v12 = Player::getEventComp(v11);
    std::shared_ptr<BaseEvent>::shared_ptr<GallerySalvagePreventSettleEvent,void>(
      &p_event_ptr,
      (const std::shared_ptr<GallerySalvagePreventSettleEvent> *)(v2 + 64));
    PlayerEventComp::notifyEvent(v12, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    SalvagePreventGallery::printGalleryStopLog(this);
    SalvagePreventGallery::clearGalleryData(this);
    std::shared_ptr<GallerySalvagePreventSettleEvent>::~shared_ptr((std::shared_ptr<GallerySalvagePreventSettleEvent> *const)(v2 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v18 == (char *)v2 )
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

// Line 82: range 000000001688E5D4-000000001688EE22
__int64 __fastcall SalvagePreventGallery::updatePlayerScore(
        SalvagePreventGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *contex)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  bool v11; // r14
  common::milog::MiLogStream *v12; // rax
  const luabind::adl::object *v13; // rsi
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  uint32_t v16; // ecx
  char v17; // al
  __int64 v18; // rsi
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-D1h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 21 tmp_monster_count:114 64 4 19 tmp_fail_reason:115 80 4 6 uid:81 96 16 14 player_ptr:101";
  *(_QWORD *)(v4 + 16) = SalvagePreventGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 80) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    if ( !*(_DWORD *)(v4 + 80) )
    {
      *(_DWORD *)(v4 + 64) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v22, off_25E06920, &__a);
      ScriptUtil::getTableValue<unsigned int>(
        &ScriptUtil::no_exception_instance,
        param_table,
        (const std::string *)&v22,
        (unsigned int *)(v4 + 64));
      std::string::~string(&v22);
      std::allocator<char>::~allocator(&__a);
      *(_DWORD *)(v4 + 80) = *(_DWORD *)(v4 + 64);
    }
    if ( *(_DWORD *)(v4 + 80) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::findPlayer((const Scene *const)(v4 + 96), (__int64)this->scene_, *(_DWORD *)(v4 + 80));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/salvage_prevent_gallery.cpp",
          "updatePlayerScore",
          104);
        v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v22,
               (const char (*)[33])"[GALLERY] player not found, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v22);
        v8 = -1;
      }
      else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
                   &this->player_info_map_,
                   (const unsigned int *)(v4 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/salvage_prevent_gallery.cpp",
          "updatePlayerScore",
          110);
        v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v22,
                (const char (*)[31])"[GALLERY] unknown player, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v22);
        v8 = -1;
      }
      else
      {
        *(_DWORD *)(v4 + 48) = 0;
        *(_DWORD *)(v4 + 64) = 0;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v22, "monster_count", &__a);
        v11 = ScriptUtil::getTableValue<unsigned int>(
                &ScriptUtil::no_exception_instance,
                param_table,
                (const std::string *)&v22,
                (unsigned int *)(v4 + 48)) != 0;
        std::string::~string(&v22);
        std::allocator<char>::~allocator(&__a);
        if ( v11 )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/salvage_prevent_gallery.cpp",
            "updatePlayerScore",
            118);
          v12 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  &v22,
                  (const char (*)[58])"[GALLERY] getTableValue monster_count failed, gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v22);
          v8 = -1;
        }
        else
        {
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v22, "fail_reason", &__a);
          v13 = param_table;
          v14 = ScriptUtil::getTableValue<unsigned int>(
                  &ScriptUtil::no_exception_instance,
                  param_table,
                  (const std::string *)&v22,
                  (unsigned int *)(v4 + 64)) != 0;
          std::string::~string(&v22);
          std::allocator<char>::~allocator(&__a);
          if ( v14 )
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/salvage_prevent_gallery.cpp",
              "updatePlayerScore",
              123);
            v15 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    &v22,
                    (const char (*)[56])"[GALLERY] getTableValue fail_reason failed, gallery_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->gallery_id_);
            common::milog::MiLogStream::~MiLogStream(&v22);
            v8 = -1;
          }
          else
          {
            v16 = *(_DWORD *)(v4 + 48);
            v17 = *(_BYTE *)(((unsigned __int64)&this->monster_count_ >> 3) + 0x7FFF8000);
            if ( v17 != 0 && v17 <= 3 )
            {
              LOBYTE(v13) = v17 != 0;
              __asan_report_store4(&this->monster_count_, v13, (_BYTE)this + 48);
            }
            this->monster_count_ = v16;
            v18 = *(unsigned int *)(v4 + 64);
            if ( *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&this->reason_, v18, (_BYTE)this + 56);
            }
            this->reason_ = v18;
            SalvagePreventGallery::calcScore(this);
            BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
            v8 = 0;
          }
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/salvage_prevent_gallery.cpp",
        "updatePlayerScore",
        97);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v22, (const char (*)[19])"[GALLERY] uid is 0");
      common::milog::MiLogStream::~MiLogStream(&v22);
      v8 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/salvage_prevent_gallery.cpp",
      "updatePlayerScore",
      86);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v22,
           (const char (*)[42])"[GALLERY] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 64) = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v22);
    v8 = -1;
  }
  result = v8;
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 137: range 000000001688EE24-000000001688EF4E
void __cdecl SalvagePreventGallery::clearGalleryData(SalvagePreventGallery *const this)
{
  __int64 v1; // rsi
  bool v2; // dl
  __int64 v3; // rsi
  bool v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)&this->monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_count_, v1, (_BYTE)this + 48);
  }
  this->monster_count_ = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->final_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->final_score_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->final_score_, (((_BYTE)this + 52) & 7u) + 3, v2);
  this->final_score_ = 0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->time_remain_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_remain_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->time_remain_, v3, v4);
  this->time_remain_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason_, v3, (_BYTE)this + 56);
  }
  this->reason_ = SALVAGE_PREVENT_STOP_NONE;
};

// Line 145: range 000000001688EFD4-000000001688F603
void __cdecl SalvagePreventGallery::printGalleryStopLog(SalvagePreventGallery *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  SalvagePreventGallery *v4; // rdx
  unsigned __int64 v5; // rax
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  Player *v13; // rax
  PlayerAvatarComp *AvatarComp; // r14
  Player *v15; // r14
  std::string v16; // [rsp+0h] [rbp-110h]
  google::protobuf::uint32 *thisa; // [rsp+8h] [rbp-108h]
  uint32_t now; // [rsp+1Ch] [rbp-F4h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<proto_log::PlayerLogBodyGallerySalvagePreventStop> v20; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+60h] [rbp-B0h] BYREF

  v16._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 10 holder:153 64 16 20 owner_player_ptr:146 96 16 11 log_ptr:154";
  *(_QWORD *)(v1 + 16) = SalvagePreventGallery::printGalleryStopLog;
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
  (*(void (__fastcall **)(unsigned __int64, SalvagePreventGallery *))v5)(v1 + 64, v4);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/salvage_prevent_gallery.cpp",
      "printGalleryStopLog",
      149);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v21,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *((_DWORD *)&v16._anon_0._M_allocated_capacity + 3) = Scene::getSceneTimeSeconds(this->scene_);
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    BasicComp = Player::getBasicComp(v6);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v21, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xDE6u, v16);
    std::string::~string(&v21);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyGallerySalvagePreventStop>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((unsigned __int64)(thisa + 8) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(thisa + 8) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGallerySalvagePreventStop::set_gallery_id(v8, thisa[8]);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((unsigned __int64)(thisa + 78) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(thisa + 78) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGallerySalvagePreventStop::set_stop_reason(v9, thisa[78]);
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((unsigned __int64)(thisa + 26) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(thisa + 26) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGallerySalvagePreventStop::set_use_time(v10, now - thisa[26]);
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((unsigned __int64)(thisa + 77) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(thisa + 77) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGallerySalvagePreventStop::set_score(v11, thisa[77]);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((unsigned __int64)(thisa + 76) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(thisa + 76) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGallerySalvagePreventStop::set_monster_count(v12, thisa[76]);
    v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    AvatarComp = Player::getAvatarComp(v13);
    std::shared_ptr<proto_log::PlayerLogBodyGallerySalvagePreventStop>::shared_ptr(
      &v20,
      (const std::shared_ptr<proto_log::PlayerLogBodyGallerySalvagePreventStop> *)(v1 + 96));
    std::function<ForeachPolicy ()(Avatar &)>::function<SalvagePreventGallery::printGalleryStopLog(void)::{lambda(Avatar &)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v21,
      (SalvagePreventGallery::printGalleryStopLog::<lambda(Avatar&)> *)&v20);
    PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v21);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v21);
    SalvagePreventGallery::printGalleryStopLog(void)::{lambda(Avatar &)#1}::~Avatar((SalvagePreventGallery::printGalleryStopLog::<lambda(Avatar&)> *const)&v20);
    v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v20, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGallerySalvagePreventStop,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyGallerySalvagePreventStop> *)(v1 + 96));
    Player::printStatLog(v15, &p_body_ptr, (MessagePtr *)&v20, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v20);
    std::shared_ptr<proto_log::PlayerLogBodyGallerySalvagePreventStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGallerySalvagePreventStop> *const)(v1 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  if ( v22 == (char *)v1 )
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

// Line 160: range 000000001688EF50-000000001688EFB6
ForeachPolicy __cdecl SalvagePreventGallery::printGalleryStopLog(void)::{lambda(Avatar &)#1}::operator()(
        const SalvagePreventGallery::printGalleryStopLog::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t AvatarId; // edx
  uint32_t Level; // edx
  proto_log::CombatAvatarLog *combat_avatar_log; // [rsp+18h] [rbp-8h]

  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvagePreventStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  combat_avatar_log = proto_log::PlayerLogBodyGallerySalvagePreventStop::add_avatar_list(v2);
  AvatarId = Avatar::getAvatarId(avatar);
  proto_log::CombatAvatarLog::set_avatar_id(combat_avatar_log, AvatarId);
  Level = Creature::getLevel(avatar);
  proto_log::CombatAvatarLog::set_avatar_level(combat_avatar_log, Level);
  return 0;
};

// Line 160: range 00000000168EA050-00000000168EA075
void __cdecl SalvagePreventGallery::printGalleryStopLog(void)::{lambda(Avatar &)#1}::Avatar(
        SalvagePreventGallery::printGalleryStopLog::<lambda(Avatar&)> *const this,
        SalvagePreventGallery::printGalleryStopLog::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyGallerySalvagePreventStop>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 160: range 00000000168EA140-00000000168EA165
void __cdecl SalvagePreventGallery::printGalleryStopLog(void)::{lambda(Avatar &)#1}::Avatar(
        SalvagePreventGallery::printGalleryStopLog::<lambda(Avatar&)> *const this,
        const SalvagePreventGallery::printGalleryStopLog::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyGallerySalvagePreventStop>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 160: range 000000001688EFB8-000000001688EFD2
void __cdecl SalvagePreventGallery::printGalleryStopLog(void)::{lambda(Avatar &)#1}::~Avatar(
        SalvagePreventGallery::printGalleryStopLog::<lambda(Avatar&)> *const this)
{
  std::shared_ptr<proto_log::PlayerLogBodyGallerySalvagePreventStop>::~shared_ptr(&this->__log_ptr);
};

// Line 171: range 000000001688F604-000000001688F9CD
void __cdecl SalvagePreventGallery::onAvatarDie(SalvagePreventGallery *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  PlayerAvatarComp *AvatarComp; // rax
  uint32_t GalleryComp; // ecx
  bool v9; // bl
  common::milog::MiLogStream *v10; // rax
  SceneGalleryComp *p_gallery_id; // rdi
  common::milog::MiLogStream *v12; // rax
  unsigned int value; // [rsp+14h] [rbp-4Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-48h] BYREF
  std::shared_ptr<BaseGallery> __a; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-30h] BYREF

  value = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
          &this->player_info_map_,
          &value) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/salvage_prevent_gallery.cpp",
      "onAvatarDie",
      175);
    v2 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v17,
           (const char (*)[44])"[GALLERY] uid not in player_info_map_. uid:");
    value = Player::getUid(player);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &value);
    v4 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           v3,
           (const char (*)[25])", player_info_map_ size:");
    val = std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_);
    v5 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v5, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    AvatarComp = Player::getAvatarComp(player);
    if ( PlayerAvatarComp::isAllAvatarDead(AvatarComp) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->reason_, &value, (_BYTE)this + 56);
      }
      this->reason_ = SALVAGE_PREVENT_STOP_FULL;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GalleryComp = (unsigned int)Scene::getGalleryComp(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      SceneGalleryComp::findGallery((SceneGalleryComp *const)&__a, GalleryComp);
      v9 = std::operator==<BaseGallery>(0LL, &__a);
      std::shared_ptr<BaseGallery>::~shared_ptr(&__a);
      if ( v9 )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/salvage_prevent_gallery.cpp",
          "onAvatarDie",
          185);
        v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v17,
                (const char (*)[41])"[Salvage] findGallery fail, gallery_id_:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v17);
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
        if ( SceneGalleryComp::forceStopAndClearGallery(p_gallery_id, this->gallery_id_, 0, GALLERY_STOP_NONE) )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/salvage_prevent_gallery.cpp",
            "onAvatarDie",
            190);
          v12 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  &v17,
                  (const char (*)[54])"[Salvage] forceStopAndClearGallery fail, gallery_id_:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v17);
        }
      }
    }
  }
};

// Line 197: range 000000001688F9CE-000000001688FE3F
void __cdecl SalvagePreventGallery::calcScore(SalvagePreventGallery *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  char v6; // dl
  bool v7; // dl
  common::milog::MiLogStream *v8; // rax
  unsigned int time_ratio; // ecx
  unsigned int monster_ratio; // edx
  unsigned int v11; // eax
  uint32_t v12; // ecx
  char v13; // dl
  __int64 v14; // rsi
  bool v15; // dl
  uint32_t now; // [rsp+18h] [rbp-98h]
  SelectType val1; // [rsp+1Ch] [rbp-94h]
  SelectType val2; // [rsp+20h] [rbp-90h]
  unsigned int val3; // [rsp+24h] [rbp-8Ch]
  SalvagePreventParam *param; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-80h] BYREF
  char v22[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 param_opt:201";
  *(_QWORD *)(v2 + 16) = SalvagePreventGallery::calcScore;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  now = Scene::getSceneTimeSeconds(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( now >= this->end_time_ )
    v5 = 0;
  else
    v5 = this->end_time_ - now;
  v6 = *(_BYTE *)(((unsigned __int64)&this->time_remain_ >> 3) + 0x7FFF8000);
  LOBYTE(v1) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->time_remain_, v1, v7);
  this->time_remain_ = v5;
  *(std::optional<SalvagePreventParam> *)(v2 + 32) = BaseGallery::getParam<SalvagePreventParam>((const BaseGallery *const)this);
  if ( !std::optional<SalvagePreventParam>::has_value((const std::optional<SalvagePreventParam> *const)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/salvage_prevent_gallery.cpp",
      "calcScore",
      204);
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v21,
           (const char (*)[28])"param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    param = std::optional<SalvagePreventParam>::value((std::optional<SalvagePreventParam> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    time_ratio = param->time_ratio;
    if ( *(_BYTE *)(((unsigned __int64)&this->time_remain_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_remain_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    val1 = SAFE_MULTIPLY<unsigned int,unsigned int>(this->time_remain_, time_ratio);
    if ( *(_BYTE *)(((unsigned __int64)&param->monster_ratio >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->monster_ratio >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    monster_ratio = param->monster_ratio;
    if ( *(_BYTE *)(((unsigned __int64)&this->monster_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->monster_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    val2 = SAFE_MULTIPLY<unsigned int,unsigned int>(this->monster_count_, monster_ratio);
    if ( *(_BYTE *)(((unsigned __int64)&param->base_val >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->base_val >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    val3 = param->base_val;
    v11 = SAFE_ADD<unsigned int,unsigned int>(val1, val2);
    v14 = v11;
    v12 = SAFE_ADD<unsigned int,unsigned int>(val3, v11);
    v13 = *(_BYTE *)(((unsigned __int64)&this->final_score_ >> 3) + 0x7FFF8000);
    LOBYTE(v14) = v13 != 0;
    v15 = v13 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v13;
    if ( v15 )
      __asan_report_store4(&this->final_score_, v14, v15);
    this->final_score_ = v12;
  }
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
