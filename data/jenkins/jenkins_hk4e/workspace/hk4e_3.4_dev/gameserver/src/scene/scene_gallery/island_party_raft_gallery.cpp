// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/island_party_raft_gallery.cpp

// Line 23: range 00000000145CDA12-00000000145CDC2D
void __cdecl IslandPartyRaftGallery::toClient(IslandPartyRaftGallery *const this, proto::SceneGalleryInfo *client_info)
{
  proto::SceneGalleryIslandPartyRaftInfo *raft_info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  raft_info = proto::SceneGalleryInfo::mutable_island_party_raft_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->fuel_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fuel_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryIslandPartyRaftInfo::set_fuel(raft_info, this->fuel_);
  if ( *(_BYTE *)(((unsigned __int64)&this->component_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->component_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryIslandPartyRaftInfo::set_component(raft_info, this->component_);
  if ( *(_BYTE *)(((unsigned __int64)&this->raft_entity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->raft_entity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryIslandPartyRaftInfo::set_raft_entity_id(raft_info, this->raft_entity_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryIslandPartyRaftInfo::set_point_id(raft_info, this->point_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryIslandPartyRaftInfo::set_coin(raft_info, this->coin_);
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[296] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[296] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryIslandPartyRaftInfo::set_start_source(
    raft_info,
    *(proto::GalleryStartSource *)&this->baseclass_0[296]);
};

// Line 35: range 00000000145CDC2E-00000000145CE573
int32_t __cdecl IslandPartyRaftGallery::updatePlayerScore(
        IslandPartyRaftGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *context)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rcx
  int32_t result; // eax
  const luabind::adl::object *v9; // rsi
  bool v10; // r14
  uint32_t v11; // ecx
  char v12; // dl
  bool v13; // dl
  const luabind::adl::object *v14; // rsi
  bool v15; // r14
  uint32_t v16; // ecx
  char v17; // al
  const luabind::adl::object *v18; // rsi
  bool v19; // r14
  uint32_t v20; // ecx
  char v21; // al
  const luabind::adl::object *v22; // rsi
  bool v23; // r14
  uint32_t v24; // ecx
  char v25; // dl
  bool v26; // dl
  const luabind::adl::object *v27; // rsi
  bool v28; // r14
  uint32_t v29; // ecx
  char v30; // dl
  bool v31; // dl
  std::allocator<char> __a; // [rsp+2Fh] [rbp-111h] BYREF
  common::milog::MiLogStream v34; // [rsp+30h] [rbp-110h] BYREF
  char v35[240]; // [rsp+50h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 4 7 fuel:41 48 4 12 component:42 64 4 11 point_id:43 80 4 17 raft_entity_id:44 96 4 7 coin:"
                        "45 112 40 9 notify:72";
  *(_QWORD *)(v4 + 16) = IslandPartyRaftGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = 61956;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[56] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[56] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( *(_DWORD *)&this->baseclass_0[56] == 3 )
  {
    *(_DWORD *)(v4 + 32) = 0;
    *(_DWORD *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 64) = 0;
    *(_DWORD *)(v4 + 80) = 0;
    *(_DWORD *)(v4 + 96) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v34, "fuel", &__a);
    v9 = param_table;
    v10 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v34,
            (unsigned int *)(v4 + 32)) == 0;
    std::string::~string(&v34);
    std::allocator<char>::~allocator(&__a);
    if ( v10 )
    {
      v11 = *(_DWORD *)(v4 + 32);
      v12 = *(_BYTE *)(((unsigned __int64)&this->fuel_ >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v12 != 0;
      v13 = v12 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v12;
      if ( v13 )
        __asan_report_store4(&this->fuel_, v9, v13);
      this->fuel_ = v11;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v34, "part", &__a);
    v14 = param_table;
    v15 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v34,
            (unsigned int *)(v4 + 48)) == 0;
    std::string::~string(&v34);
    std::allocator<char>::~allocator(&__a);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v4 + 48);
      v17 = *(_BYTE *)(((unsigned __int64)&this->component_ >> 3) + 0x7FFF8000);
      if ( v17 != 0 && v17 <= 3 )
      {
        LOBYTE(v14) = v17 != 0;
        __asan_report_store4(&this->component_, v14, (_BYTE)this + 48);
      }
      this->component_ = v16;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v34, "point_id", &__a);
    v18 = param_table;
    v19 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v34,
            (unsigned int *)(v4 + 64)) == 0;
    std::string::~string(&v34);
    std::allocator<char>::~allocator(&__a);
    if ( v19 )
    {
      v20 = *(_DWORD *)(v4 + 64);
      v21 = *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000);
      if ( v21 != 0 && v21 <= 3 )
      {
        LOBYTE(v18) = v21 != 0;
        __asan_report_store4(&this->point_id_, v18, (_BYTE)this + 56);
      }
      this->point_id_ = v20;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v34, "coin", &__a);
    v22 = param_table;
    v23 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v34,
            (unsigned int *)(v4 + 96)) == 0;
    std::string::~string(&v34);
    std::allocator<char>::~allocator(&__a);
    if ( v23 )
    {
      v24 = *(_DWORD *)(v4 + 96);
      v25 = *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000);
      LOBYTE(v22) = v25 != 0;
      v26 = v25 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v25;
      if ( v26 )
        __asan_report_store4(&this->coin_, v22, v26);
      this->coin_ = v24;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v34, "raft_entity_id", &__a);
    v27 = param_table;
    v28 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v34,
            (unsigned int *)(v4 + 80)) == 0;
    std::string::~string(&v34);
    std::allocator<char>::~allocator(&__a);
    if ( v28 )
    {
      v29 = *(_DWORD *)(v4 + 80);
      v30 = *(_BYTE *)(((unsigned __int64)&this->raft_entity_id_ >> 3) + 0x7FFF8000);
      LOBYTE(v27) = v30 != 0;
      v31 = v30 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v30;
      if ( v31 )
        __asan_report_store4(&this->raft_entity_id_, v27, v31);
      this->raft_entity_id_ = v29;
      BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
    }
    else
    {
      proto::IslandPartyRaftInfoNotify::IslandPartyRaftInfoNotify((proto::IslandPartyRaftInfoNotify *const)(v4 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&this->fuel_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fuel_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::IslandPartyRaftInfoNotify::set_fuel((proto::IslandPartyRaftInfoNotify *const)(v4 + 112), this->fuel_);
      if ( *(_BYTE *)(((unsigned __int64)&this->component_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->component_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::IslandPartyRaftInfoNotify::set_component(
        (proto::IslandPartyRaftInfoNotify *const)(v4 + 112),
        this->component_);
      if ( *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::IslandPartyRaftInfoNotify::set_point_id(
        (proto::IslandPartyRaftInfoNotify *const)(v4 + 112),
        this->point_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::IslandPartyRaftInfoNotify::set_coin((proto::IslandPartyRaftInfoNotify *const)(v4 + 112), this->coin_);
      BaseGallery::notifyToGalleryPlayers<proto::IslandPartyRaftInfoNotify>(
        (BaseGallery *const)this,
        (proto::IslandPartyRaftInfoNotify *)(v4 + 112));
      proto::IslandPartyRaftInfoNotify::~IslandPartyRaftInfoNotify((proto::IslandPartyRaftInfoNotify *const)(v4 + 112));
    }
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/island_party_raft_gallery.cpp",
      "updatePlayerScore",
      38);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v34,
           (const char (*)[42])"[GALLERY] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[56] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[56] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 96) = *(_DWORD *)&this->baseclass_0[56];
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 96));
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = -1;
  }
  if ( v35 == (char *)v4 )
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
  return result;
};

// Line 83: range 00000000145CE574-00000000145CE58E
void __cdecl IslandPartyRaftGallery::onStart(IslandPartyRaftGallery *const this)
{
  IslandPartyRaftGallery::clearGalleryData(this);
};

// Line 88: range 00000000145CE67A-00000000145CEA11
void __cdecl IslandPartyRaftGallery::onStop(IslandPartyRaftGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned int v5; // eax
  std::__shared_ptr_access<GalleryIslandPartySettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  __int64 v7; // rax
  char v8; // dl
  __int8 *v9; // rsi
  bool v10; // dl
  uint32_t v11; // r14d
  std::__shared_ptr_access<GalleryIslandPartySettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  char v13; // cl
  Scene *v14; // r14
  unsigned int __args_0; // [rsp+18h] [rbp-B8h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-B4h]
  IslandPartyRaftGallery::onStop::<lambda(Player&)> v18; // [rsp+20h] [rbp-B0h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+40h] [rbp-90h] BYREF
  char v20[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 event_ptr:90";
  *(_QWORD *)(v2 + 16) = IslandPartyRaftGallery::onStop;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  now = Scene::getSceneTimeSeconds(*(Scene *const *)&this->baseclass_0[24]);
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[96] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[96] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( now >= *(_DWORD *)&this->baseclass_0[96] )
    v5 = 0;
  else
    v5 = *(_DWORD *)&this->baseclass_0[96] - now;
  __args_0 = v5;
  common::tools::perf::make_shared<GalleryIslandPartySettleEvent,unsigned int &,unsigned int>(
    (unsigned int *)(v2 + 32),
    (unsigned int *)&this->baseclass_0[32],
    &__args_0,
    (unsigned int *)&this->baseclass_0[32]);
  v6 = std::__shared_ptr_access<GalleryIslandPartySettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryIslandPartySettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v9 = &this->baseclass_0[144];
  std::map<unsigned int,proto::OnlinePlayerInfo>::operator=(
    &v6->player_info_map,
    (const std::map<unsigned int,proto::OnlinePlayerInfo> *)&this->baseclass_0[144]);
  v7 = (__int64)std::__shared_ptr_access<GalleryIslandPartySettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryIslandPartySettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v8 = *(_BYTE *)(((unsigned __int64)(v7 + 80) >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v8 != 0;
  v10 = v8 != 0 && v8 <= 3;
  if ( v10 )
    v7 = __asan_report_store4(v7 + 80, v9, v10);
  *(_DWORD *)(v7 + 80) = reason;
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[296] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[296] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v11 = *(_DWORD *)&this->baseclass_0[296];
  v12 = std::__shared_ptr_access<GalleryIslandPartySettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryIslandPartySettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v13 = *(_BYTE *)(((unsigned __int64)&v12->source >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)v12 + 84) & 7) + 3) >= v13 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store4(&v12->source, v9, (_BYTE)v12);
  }
  v12->source = v11;
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v14 = *(Scene **)&this->baseclass_0[24];
  std::shared_ptr<GalleryIslandPartySettleEvent>::shared_ptr(
    &v18.__event_ptr,
    (const std::shared_ptr<GalleryIslandPartySettleEvent> *)(v2 + 32));
  v18.__this = this;
  std::function<ForeachPolicy ()(Player &)>::function<IslandPartyRaftGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1},void,void>(
    &p_func,
    &v18);
  Scene::foreachPlayer(v14, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  IslandPartyRaftGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::~Player(&v18);
  IslandPartyRaftGallery::clearGalleryData(this);
  std::shared_ptr<GalleryIslandPartySettleEvent>::~shared_ptr((std::shared_ptr<GalleryIslandPartySettleEvent> *const)(v2 + 32));
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 94: range 00000000145CE590-00000000145CE65D
ForeachPolicy __cdecl IslandPartyRaftGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::operator()(
        const IslandPartyRaftGallery::onStop::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerEventComp *EventComp; // rbx
  unsigned int value; // [rsp+1Ch] [rbp-24h] BYREF
  std::shared_ptr<BaseEvent> v5; // [rsp+20h] [rbp-20h] BYREF

  value = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
         (std::map<unsigned int,proto::OnlinePlayerInfo> *)&__closure->__this->baseclass_0[144],
         &value) )
  {
    EventComp = Player::getEventComp(player);
    std::shared_ptr<BaseEvent>::shared_ptr<GalleryIslandPartySettleEvent,void>(&v5, &__closure->__event_ptr);
    PlayerEventComp::notifyEvent(EventComp, &v5);
    std::shared_ptr<BaseEvent>::~shared_ptr(&v5);
  }
  return 0;
};

// Line 94: range 00000000145EAE8A-00000000145EAF09
void __cdecl IslandPartyRaftGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::Player(
        IslandPartyRaftGallery::onStop::<lambda(Player&)> *const this,
        IslandPartyRaftGallery::onStop::<lambda(Player&)> *a2)
{
  IslandPartyRaftGallery *v2; // rdx

  std::shared_ptr<GalleryIslandPartySettleEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 94: range 00000000145EAFD4-00000000145EB053
void __cdecl IslandPartyRaftGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::Player(
        IslandPartyRaftGallery::onStop::<lambda(Player&)> *const this,
        const IslandPartyRaftGallery::onStop::<lambda(Player&)> *a2)
{
  IslandPartyRaftGallery *v2; // rdx

  std::shared_ptr<GalleryIslandPartySettleEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 94: range 00000000145CE65E-00000000145CE678
void __cdecl IslandPartyRaftGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::~Player(
        IslandPartyRaftGallery::onStop::<lambda(Player&)> *const this)
{
  std::shared_ptr<GalleryIslandPartySettleEvent>::~shared_ptr(&this->__event_ptr);
};

// Line 106: range 00000000145CEA12-00000000145CEB87
void __cdecl IslandPartyRaftGallery::clearGalleryData(IslandPartyRaftGallery *const this)
{
  __int64 v1; // rsi
  bool v2; // dl
  __int64 v3; // rsi
  bool v4; // dl
  bool v5; // dl

  v1 = (((_BYTE)this + 44) & 7u) + 3;
  v2 = *(_BYTE *)(((unsigned __int64)&this->fuel_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fuel_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->fuel_, v1, v2);
  this->fuel_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->component_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->component_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->component_, v1, (_BYTE)this + 48);
  }
  this->component_ = 0;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->raft_entity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->raft_entity_id_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->raft_entity_id_, v3, v4);
  this->raft_entity_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point_id_, v3, (_BYTE)this + 56);
  }
  this->point_id_ = 0;
  v5 = *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->coin_, (((_BYTE)this + 60) & 7u) + 3, v5);
  this->coin_ = 0;
};

// Line 115: range 00000000145CEB88-00000000145CEDA8
void __cdecl IslandPartyRaftGallery::onPlayerLeaveScene(IslandPartyRaftGallery *const this, Player *player)
{
  char v2; // al
  ActivityIslandPartyExcelConfigMgr *p_activity_island_party_mgr; // rcx
  common::milog::MiLogStream *v4; // rax
  PlayerMatchComp *MatchComp; // rcx
  const data::ActivityIslandPartyStageExcelConfig *stage_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  if ( std::map<unsigned int,proto::OnlinePlayerInfo>::size((const std::map<unsigned int,proto::OnlinePlayerInfo> *const)&this->baseclass_0[144]) <= 1 )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Scene::getPlayerCount(*(const Scene *const *)&this->baseclass_0[24])
    && BaseGallery::getGalleryStartSource((const BaseGallery *const)this) == GALLERY_START_BY_MATCH )
  {
    v2 = 1;
  }
  else
  {
LABEL_7:
    v2 = 0;
  }
  if ( v2 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v7);
    p_activity_island_party_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.activity_island_party_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    stage_config_ptr = ActivityIslandPartyExcelConfigMgr::findConfigByGalleryId(
                         p_activity_island_party_mgr,
                         *(_DWORD *)&this->baseclass_0[32]);
    std::shared_ptr<Config>::~shared_ptr(&v7);
    if ( !stage_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/island_party_raft_gallery.cpp",
        "onPlayerLeaveScene",
        124);
      v4 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v8,
             (const char (*)[37])"stage config not found, gallery_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v4,
        (const unsigned int *)&this->baseclass_0[32]);
      common::milog::MiLogStream::~MiLogStream(&v8);
      return;
    }
    MatchComp = Player::getMatchComp(player);
    if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->match_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->match_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerMatchComp::matchPunish(MatchComp, stage_config_ptr->match_id);
  }
  BaseGallery::onPlayerLeaveScene((BaseGallery *const)this, player);
};
