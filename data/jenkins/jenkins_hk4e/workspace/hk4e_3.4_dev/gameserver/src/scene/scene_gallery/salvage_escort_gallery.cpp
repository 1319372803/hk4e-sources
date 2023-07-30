// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/salvage_escort_gallery.cpp

// Line 27: range 000000001688B824-000000001688BA4D
void __cdecl SalvageEscortGallery::toClient(SalvageEscortGallery *const this, proto::SceneGalleryInfo *client_info)
{
  common::milog::MiLogStream *v2; // rbx
  proto::SceneGallerySalvageEscortInfo *detail_info; // [rsp+18h] [rbp-58h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  detail_info = proto::SceneGalleryInfo::mutable_salvage_escort_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGallerySalvageEscortInfo::set_monster_count(detail_info, this->monster_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->box_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->box_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGallerySalvageEscortInfo::set_box_count(detail_info, this->box_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGallerySalvageEscortInfo::set_max_monster_count(detail_info, this->max_monster_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_box_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_box_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGallerySalvageEscortInfo::set_max_box_count(detail_info, this->max_box_count_);
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/salvage_escort_gallery.cpp",
    "toClient",
    34);
  v2 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v4, (const char (*)[17])"[SalvageEscort] ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, detail_info);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v4);
};

// Line 38: range 000000001688BA4E-000000001688BA68
void __cdecl SalvageEscortGallery::onStart(SalvageEscortGallery *const this)
{
  SalvageEscortGallery::clearGalleryData(this);
};

// Line 44: range 000000001688BA6A-000000001688BFD9
void __cdecl SalvageEscortGallery::onStop(SalvageEscortGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  SalvageEscortGallery *v5; // rdx
  unsigned __int64 v6; // rax
  bool v7; // dl
  Player *v8; // rax
  PlayerEventComp *EventComp; // r14
  bool v10; // dl
  bool v11; // dl
  Player *v12; // rax
  PlayerEventComp *v13; // r14
  proto::SalvageEscortGallerySettleInfo *gallery_settle_info; // [rsp+18h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 8) = "2 32 16 19 owner_player_ptr:45 64 16 12 event_ptr:53";
  *(_QWORD *)(v2 + 16) = SalvageEscortGallery::onStop;
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
  (*(void (__fastcall **)(unsigned __int64, SalvageEscortGallery *))v6)(v2 + 32, v5);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/salvage_escort_gallery.cpp",
      "onStop",
      48);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v17,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    SalvageEscortGallery::calcScore(this);
    common::tools::perf::make_shared<GallerySalvageEscortSettleEvent,unsigned int &>(
      (unsigned int *)(v2 + 64),
      &this->gallery_id_);
    gallery_settle_info = &std::__shared_ptr_access<GallerySalvageEscortSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GallerySalvageEscortSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->gallery_settle_info;
    switch ( reason )
    {
      case GALLERY_STOP_LUA_INTERRUPT_SUCCESS:
        v7 = *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000);
        if ( v7 )
          __asan_report_store4(&this->reason_, (((_BYTE)this + 68) & 7u) + 3, v7);
        this->reason_ = SALVAGE_ESCORT_STOP_SUCCESS;
        if ( *(_BYTE *)(((unsigned __int64)&this->final_score_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->final_score_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::SalvageEscortGallerySettleInfo::set_time_remain(gallery_settle_info, this->final_score_);
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
        v10 = *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
           && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000);
        if ( v10 )
          __asan_report_store4(&this->reason_, (((_BYTE)this + 68) & 7u) + 3, v10);
        this->reason_ = SALVAGE_ESCORT_STOP_TIME;
        break;
      case GALLERY_STOP_CLIENT_INTERRUPT:
        v11 = *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
           && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000);
        if ( v11 )
          __asan_report_store4(&this->reason_, (((_BYTE)this + 68) & 7u) + 3, v11);
        this->reason_ = SALVAGE_ESCORT_STOP_INTERRUPT;
        break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::SalvageEscortGallerySettleInfo::set_reason(gallery_settle_info, this->reason_);
    v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v13 = Player::getEventComp(v12);
    std::shared_ptr<BaseEvent>::shared_ptr<GallerySalvageEscortSettleEvent,void>(
      &p_event_ptr,
      (const std::shared_ptr<GallerySalvageEscortSettleEvent> *)(v2 + 64));
    PlayerEventComp::notifyEvent(v13, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    SalvageEscortGallery::printGalleryStopLog(this);
    SalvageEscortGallery::clearGalleryData(this);
    std::shared_ptr<GallerySalvageEscortSettleEvent>::~shared_ptr((std::shared_ptr<GallerySalvageEscortSettleEvent> *const)(v2 + 64));
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

// Line 83: range 000000001688BFDA-000000001688CD00
__int64 __fastcall SalvageEscortGallery::updatePlayerScore(
        SalvageEscortGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *contex)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  bool v11; // r14
  common::milog::MiLogStream *v12; // rax
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  bool v15; // r14
  common::milog::MiLogStream *v16; // rax
  bool v17; // r14
  common::milog::MiLogStream *v18; // rax
  const luabind::adl::object *v19; // rsi
  bool v20; // r14
  common::milog::MiLogStream *v21; // rax
  uint32_t v22; // ecx
  char v23; // al
  uint32_t v24; // ecx
  char v25; // dl
  bool v26; // dl
  uint32_t v27; // ecx
  char v28; // al
  uint32_t v29; // ecx
  char v30; // dl
  bool v31; // dl
  proto::SalvageEscortStopReason v32; // edi
  bool v33; // dl
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v38; // [rsp+30h] [rbp-F0h] BYREF
  char v39[208]; // [rsp+50h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 21 tmp_monster_count:115 48 4 17 tmp_box_count:116 64 4 25 tmp_max_monster_count:117 80 4"
                        " 21 tmp_max_box_count:118 96 4 19 tmp_fail_reason:119 112 4 6 uid:82 128 16 14 player_ptr:102";
  *(_QWORD *)(v4 + 16) = SalvageEscortGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -202178560;
  *(_DWORD *)(v4 + 112) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    if ( !*(_DWORD *)(v4 + 112) )
    {
      *(_DWORD *)(v4 + 96) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v38, off_25E06920, &__a);
      ScriptUtil::getTableValue<unsigned int>(
        &ScriptUtil::no_exception_instance,
        param_table,
        (const std::string *)&v38,
        (unsigned int *)(v4 + 96));
      std::string::~string(&v38);
      std::allocator<char>::~allocator(&__a);
      *(_DWORD *)(v4 + 112) = *(_DWORD *)(v4 + 96);
    }
    if ( *(_DWORD *)(v4 + 112) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::findPlayer((const Scene *const)(v4 + 128), (__int64)this->scene_, *(_DWORD *)(v4 + 112));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/salvage_escort_gallery.cpp",
          "updatePlayerScore",
          105);
        v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v38,
               (const char (*)[33])"[GALLERY] player not found, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 112));
        common::milog::MiLogStream::~MiLogStream(&v38);
        v8 = -1;
      }
      else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
                   &this->player_info_map_,
                   (const unsigned int *)(v4 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/salvage_escort_gallery.cpp",
          "updatePlayerScore",
          111);
        v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v38,
                (const char (*)[31])"[GALLERY] unknown player, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 112));
        common::milog::MiLogStream::~MiLogStream(&v38);
        v8 = -1;
      }
      else
      {
        *(_DWORD *)(v4 + 32) = 0;
        *(_DWORD *)(v4 + 48) = 0;
        *(_DWORD *)(v4 + 64) = 0;
        *(_DWORD *)(v4 + 80) = 0;
        *(_DWORD *)(v4 + 96) = 0;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v38, "monster_count", &__a);
        v11 = ScriptUtil::getTableValue<unsigned int>(
                &ScriptUtil::no_exception_instance,
                param_table,
                (const std::string *)&v38,
                (unsigned int *)(v4 + 32)) != 0;
        std::string::~string(&v38);
        std::allocator<char>::~allocator(&__a);
        if ( v11 )
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/salvage_escort_gallery.cpp",
            "updatePlayerScore",
            122);
          v12 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  &v38,
                  (const char (*)[58])"[GALLERY] getTableValue monster_count failed, gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v38);
          v8 = -1;
        }
        else
        {
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v38, "box_count", &__a);
          v13 = ScriptUtil::getTableValue<unsigned int>(
                  &ScriptUtil::no_exception_instance,
                  param_table,
                  (const std::string *)&v38,
                  (unsigned int *)(v4 + 48)) != 0;
          std::string::~string(&v38);
          std::allocator<char>::~allocator(&__a);
          if ( v13 )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/salvage_escort_gallery.cpp",
              "updatePlayerScore",
              127);
            v14 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                    &v38,
                    (const char (*)[54])"[GALLERY] getTableValue box_count failed, gallery_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->gallery_id_);
            common::milog::MiLogStream::~MiLogStream(&v38);
            v8 = -1;
          }
          else
          {
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)&v38, "fail_reason", &__a);
            v15 = ScriptUtil::getTableValue<unsigned int>(
                    &ScriptUtil::no_exception_instance,
                    param_table,
                    (const std::string *)&v38,
                    (unsigned int *)(v4 + 96)) != 0;
            std::string::~string(&v38);
            std::allocator<char>::~allocator(&__a);
            if ( v15 )
            {
              common::milog::MiLogStream::create(
                &v38,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_gallery/salvage_escort_gallery.cpp",
                "updatePlayerScore",
                132);
              v16 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                      &v38,
                      (const char (*)[56])"[GALLERY] getTableValue fail_reason failed, gallery_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->gallery_id_);
              common::milog::MiLogStream::~MiLogStream(&v38);
              v8 = -1;
            }
            else
            {
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>((std::string *const)&v38, "monster_count_max", &__a);
              v17 = ScriptUtil::getTableValue<unsigned int>(
                      &ScriptUtil::no_exception_instance,
                      param_table,
                      (const std::string *)&v38,
                      (unsigned int *)(v4 + 64)) != 0;
              std::string::~string(&v38);
              std::allocator<char>::~allocator(&__a);
              if ( v17 )
              {
                common::milog::MiLogStream::create(
                  &v38,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_gallery/salvage_escort_gallery.cpp",
                  "updatePlayerScore",
                  137);
                v18 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                        &v38,
                        (const char (*)[62])"[GALLERY] getTableValue monster_count_max failed, gallery_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->gallery_id_);
                common::milog::MiLogStream::~MiLogStream(&v38);
                v8 = -1;
              }
              else
              {
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>((std::string *const)&v38, "box_count_max", &__a);
                v19 = param_table;
                v20 = ScriptUtil::getTableValue<unsigned int>(
                        &ScriptUtil::no_exception_instance,
                        param_table,
                        (const std::string *)&v38,
                        (unsigned int *)(v4 + 80)) != 0;
                std::string::~string(&v38);
                std::allocator<char>::~allocator(&__a);
                if ( v20 )
                {
                  common::milog::MiLogStream::create(
                    &v38,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/scene/scene_gallery/salvage_escort_gallery.cpp",
                    "updatePlayerScore",
                    142);
                  v21 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                          &v38,
                          (const char (*)[58])"[GALLERY] getTableValue box_count_max failed, gallery_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->gallery_id_);
                  common::milog::MiLogStream::~MiLogStream(&v38);
                  v8 = -1;
                }
                else
                {
                  if ( *(_DWORD *)(v4 + 64) )
                  {
                    v22 = *(_DWORD *)(v4 + 64);
                    v23 = *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000);
                    if ( v23 != 0 && v23 <= 3 )
                    {
                      LOBYTE(v19) = v23 != 0;
                      __asan_report_store4(&this->max_monster_count_, v19, (_BYTE)this + 56);
                    }
                    this->max_monster_count_ = v22;
                  }
                  if ( *(_DWORD *)(v4 + 80) )
                  {
                    v24 = *(_DWORD *)(v4 + 80);
                    v25 = *(_BYTE *)(((unsigned __int64)&this->max_box_count_ >> 3) + 0x7FFF8000);
                    LOBYTE(v19) = v25 != 0;
                    v26 = v25 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v25;
                    if ( v26 )
                      __asan_report_store4(&this->max_box_count_, v19, v26);
                    this->max_box_count_ = v24;
                  }
                  v27 = *(_DWORD *)(v4 + 32);
                  v28 = *(_BYTE *)(((unsigned __int64)&this->monster_count_ >> 3) + 0x7FFF8000);
                  if ( v28 != 0 && v28 <= 3 )
                  {
                    LOBYTE(v19) = v28 != 0;
                    __asan_report_store4(&this->monster_count_, v19, (_BYTE)this + 48);
                  }
                  this->monster_count_ = v27;
                  v29 = *(_DWORD *)(v4 + 48);
                  v30 = *(_BYTE *)(((unsigned __int64)&this->box_count_ >> 3) + 0x7FFF8000);
                  LOBYTE(v19) = v30 != 0;
                  v31 = v30 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v30;
                  if ( v31 )
                    __asan_report_store4(&this->box_count_, v19, v31);
                  this->box_count_ = v29;
                  v32 = *(_DWORD *)(v4 + 96);
                  v33 = *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
                     && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3)
                                                                         + 0x7FFF8000);
                  if ( v33 )
                  {
                    v32 = (_DWORD)this + 324;
                    __asan_report_store4(&this->reason_, (((_BYTE)this + 68) & 7u) + 3, v33);
                  }
                  this->reason_ = v32;
                  SalvageEscortGallery::calcScore(this);
                  BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
                  v8 = 0;
                }
              }
            }
          }
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/salvage_escort_gallery.cpp",
        "updatePlayerScore",
        98);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v38, (const char (*)[19])"[GALLERY] uid is 0");
      common::milog::MiLogStream::~MiLogStream(&v38);
      v8 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/salvage_escort_gallery.cpp",
      "updatePlayerScore",
      87);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v38,
           (const char (*)[42])"[GALLERY] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 96) = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 96));
    common::milog::MiLogStream::~MiLogStream(&v38);
    v8 = -1;
  }
  result = v8;
  if ( v39 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 165: range 000000001688CD02-000000001688CF05
void __cdecl SalvageEscortGallery::clearGalleryData(SalvageEscortGallery *const this)
{
  __int64 v1; // rsi
  bool v2; // dl
  __int64 v3; // rsi
  bool v4; // dl
  bool v5; // dl
  bool v6; // dl

  v1 = (((_BYTE)this + 44) & 7u) + 3;
  v2 = *(_BYTE *)(((unsigned __int64)&this->time_remain_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_remain_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->time_remain_, v1, v2);
  this->time_remain_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_count_, v1, (_BYTE)this + 48);
  }
  this->monster_count_ = 0;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->box_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->box_count_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->box_count_, v3, v4);
  this->box_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->final_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->final_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->final_score_, v3, (_BYTE)this + 64);
  }
  this->final_score_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_monster_count_, v3, (_BYTE)this + 56);
  }
  this->max_monster_count_ = 0;
  v5 = *(_BYTE *)(((unsigned __int64)&this->max_box_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_box_count_ >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->max_box_count_, (((_BYTE)this + 60) & 7u) + 3, v5);
  this->max_box_count_ = 0;
  v6 = *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->reason_, (((_BYTE)this + 68) & 7u) + 3, v6);
  this->reason_ = SALVAGE_ESCORT_STOP_NONE;
};

// Line 176: range 000000001688CF8A-000000001688D55A
void __cdecl SalvageEscortGallery::printGalleryStopLog(SalvageEscortGallery *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  SalvageEscortGallery *v4; // rdx
  unsigned __int64 v5; // rax
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvageEscortStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvageEscortStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvageEscortStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvageEscortStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  Player *v12; // rax
  PlayerAvatarComp *AvatarComp; // r14
  Player *v14; // r14
  std::string v15; // [rsp+0h] [rbp-110h]
  google::protobuf::uint32 *thisa; // [rsp+8h] [rbp-108h]
  uint32_t now; // [rsp+1Ch] [rbp-F4h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<proto_log::PlayerLogBodyGallerySalvageEscortStop> v19; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+60h] [rbp-B0h] BYREF

  v15._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 10 holder:184 64 16 20 owner_player_ptr:177 96 16 11 log_ptr:185";
  *(_QWORD *)(v1 + 16) = SalvageEscortGallery::printGalleryStopLog;
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
  (*(void (__fastcall **)(unsigned __int64, SalvageEscortGallery *))v5)(v1 + 64, v4);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/salvage_escort_gallery.cpp",
      "printGalleryStopLog",
      180);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v20,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *((_DWORD *)&v15._anon_0._M_allocated_capacity + 3) = Scene::getSceneTimeSeconds(this->scene_);
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    BasicComp = Player::getBasicComp(v6);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v20, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xDE7u, v15);
    std::string::~string(&v20);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyGallerySalvageEscortStop>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvageEscortStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvageEscortStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((unsigned __int64)(thisa + 8) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(thisa + 8) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGallerySalvageEscortStop::set_gallery_id(v8, thisa[8]);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvageEscortStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvageEscortStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((unsigned __int64)(thisa + 81) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(thisa + 81) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGallerySalvageEscortStop::set_stop_reason(v9, thisa[81]);
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvageEscortStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvageEscortStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((unsigned __int64)(thisa + 26) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(thisa + 26) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGallerySalvageEscortStop::set_use_time(v10, now - thisa[26]);
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvageEscortStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvageEscortStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((unsigned __int64)(thisa + 80) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(thisa + 80) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGallerySalvageEscortStop::set_score(v11, thisa[80]);
    v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    AvatarComp = Player::getAvatarComp(v12);
    std::shared_ptr<proto_log::PlayerLogBodyGallerySalvageEscortStop>::shared_ptr(
      &v19,
      (const std::shared_ptr<proto_log::PlayerLogBodyGallerySalvageEscortStop> *)(v1 + 96));
    std::function<ForeachPolicy ()(Avatar &)>::function<SalvageEscortGallery::printGalleryStopLog(void)::{lambda(Avatar &)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v20,
      (SalvageEscortGallery::printGalleryStopLog::<lambda(Avatar&)> *)&v19);
    PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v20);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v20);
    SalvageEscortGallery::printGalleryStopLog(void)::{lambda(Avatar &)#1}::~Avatar((SalvageEscortGallery::printGalleryStopLog::<lambda(Avatar&)> *const)&v19);
    v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v19, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGallerySalvageEscortStop,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyGallerySalvageEscortStop> *)(v1 + 96));
    Player::printStatLog(v14, &p_body_ptr, (MessagePtr *)&v19, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v19);
    std::shared_ptr<proto_log::PlayerLogBodyGallerySalvageEscortStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGallerySalvageEscortStop> *const)(v1 + 96));
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

// Line 190: range 000000001688CF06-000000001688CF6C
ForeachPolicy __cdecl SalvageEscortGallery::printGalleryStopLog(void)::{lambda(Avatar &)#1}::operator()(
        const SalvageEscortGallery::printGalleryStopLog::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvageEscortStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t AvatarId; // edx
  uint32_t Level; // edx
  proto_log::CombatAvatarLog *combat_avatar_log; // [rsp+18h] [rbp-8h]

  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvageEscortStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGallerySalvageEscortStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  combat_avatar_log = proto_log::PlayerLogBodyGallerySalvageEscortStop::add_avatar_list(v2);
  AvatarId = Avatar::getAvatarId(avatar);
  proto_log::CombatAvatarLog::set_avatar_id(combat_avatar_log, AvatarId);
  Level = Creature::getLevel(avatar);
  proto_log::CombatAvatarLog::set_avatar_level(combat_avatar_log, Level);
  return 0;
};

// Line 190: range 00000000168E9E48-00000000168E9E6D
void __cdecl SalvageEscortGallery::printGalleryStopLog(void)::{lambda(Avatar &)#1}::Avatar(
        SalvageEscortGallery::printGalleryStopLog::<lambda(Avatar&)> *const this,
        SalvageEscortGallery::printGalleryStopLog::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyGallerySalvageEscortStop>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 190: range 00000000168E9F38-00000000168E9F5D
void __cdecl SalvageEscortGallery::printGalleryStopLog(void)::{lambda(Avatar &)#1}::Avatar(
        SalvageEscortGallery::printGalleryStopLog::<lambda(Avatar&)> *const this,
        const SalvageEscortGallery::printGalleryStopLog::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyGallerySalvageEscortStop>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 190: range 000000001688CF6E-000000001688CF88
void __cdecl SalvageEscortGallery::printGalleryStopLog(void)::{lambda(Avatar &)#1}::~Avatar(
        SalvageEscortGallery::printGalleryStopLog::<lambda(Avatar&)> *const this)
{
  std::shared_ptr<proto_log::PlayerLogBodyGallerySalvageEscortStop>::~shared_ptr(&this->__log_ptr);
};

// Line 201: range 000000001688D55C-000000001688D92D
void __cdecl SalvageEscortGallery::onAvatarDie(SalvageEscortGallery *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  PlayerAvatarComp *AvatarComp; // rax
  bool v8; // dl
  uint32_t GalleryComp; // ecx
  bool v10; // bl
  common::milog::MiLogStream *v11; // rax
  SceneGalleryComp *p_gallery_id; // rdi
  common::milog::MiLogStream *v13; // rax
  unsigned int value; // [rsp+14h] [rbp-4Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-48h] BYREF
  std::shared_ptr<BaseGallery> __a; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-30h] BYREF

  value = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
          &this->player_info_map_,
          &value) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/salvage_escort_gallery.cpp",
      "onAvatarDie",
      205);
    v2 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v18,
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
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    AvatarComp = Player::getAvatarComp(player);
    if ( PlayerAvatarComp::isAllAvatarDead(AvatarComp) )
    {
      v8 = *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000);
      if ( v8 )
        __asan_report_store4(&this->reason_, (((_BYTE)this + 68) & 7u) + 3, v8);
      this->reason_ = SALVAGE_ESCORT_STOP_FULL;
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
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/salvage_escort_gallery.cpp",
          "onAvatarDie",
          215);
        v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v18,
                (const char (*)[41])"[Salvage] findGallery fail, gallery_id_:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v18);
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
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/salvage_escort_gallery.cpp",
            "onAvatarDie",
            220);
          v13 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  &v18,
                  (const char (*)[54])"[Salvage] forceStopAndClearGallery fail, gallery_id_:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v18);
        }
      }
    }
  }
};

// Line 227: range 000000001688D92E-000000001688DDEE
void __cdecl SalvageEscortGallery::calcScore(SalvageEscortGallery *const this)
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
  unsigned int box_ratio; // ecx
  unsigned int v12; // eax
  __int64 v13; // rsi
  uint32_t v14; // edx
  char v15; // al
  uint32_t now; // [rsp+18h] [rbp-98h]
  SelectType val1; // [rsp+1Ch] [rbp-94h]
  SelectType val2; // [rsp+20h] [rbp-90h]
  SelectType val3; // [rsp+24h] [rbp-8Ch]
  SalvageEscortParam *param; // [rsp+28h] [rbp-88h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 param_opt:232";
  *(_QWORD *)(v2 + 16) = SalvageEscortGallery::calcScore;
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
  *(std::optional<SalvageEscortParam> *)(v2 + 32) = BaseGallery::getParam<SalvageEscortParam>((const BaseGallery *const)this);
  if ( !std::optional<SalvageEscortParam>::has_value((const std::optional<SalvageEscortParam> *const)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/salvage_escort_gallery.cpp",
      "calcScore",
      235);
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v21,
           (const char (*)[28])"param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    param = std::optional<SalvageEscortParam>::value((std::optional<SalvageEscortParam> *const)(v2 + 32));
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
    if ( *(_BYTE *)(((unsigned __int64)&param->box_ratio >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->box_ratio >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    box_ratio = param->box_ratio;
    if ( *(_BYTE *)(((unsigned __int64)&this->box_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->box_count_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    val3 = SAFE_MULTIPLY<unsigned int,unsigned int>(this->box_count_, box_ratio);
    v12 = SAFE_ADD<unsigned int,unsigned int>(val2, val3);
    v13 = v12;
    v14 = SAFE_ADD<unsigned int,unsigned int>(val1, v12);
    v15 = *(_BYTE *)(((unsigned __int64)&this->final_score_ >> 3) + 0x7FFF8000);
    if ( v15 != 0 && v15 <= 3 )
    {
      LOBYTE(v13) = v15 != 0;
      __asan_report_store4(&this->final_score_, v13, v14);
    }
    this->final_score_ = v14;
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
