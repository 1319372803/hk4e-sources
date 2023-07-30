// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/island_party_sail_gallery.cpp

// Line 23: range 00000000145CEDAA-00000000145CF014
void __cdecl IslandPartySailGallery::toClient(IslandPartySailGallery *const this, proto::SceneGalleryInfo *client_info)
{
  proto::SceneGalleryIslandPartySailInfo *sail_info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  sail_info = proto::SceneGalleryInfo::mutable_island_party_sail_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryIslandPartySailInfo::set_clean_progress(sail_info, this->progress_);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryIslandPartySailInfo::set_max_clean_progress(sail_info, this->max_progress_);
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryIslandPartySailInfo::set_kill_progress(sail_info, this->kill_monster_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryIslandPartySailInfo::set_max_kill_progress(sail_info, this->max_monster_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->sail_stage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sail_stage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryIslandPartySailInfo::set_stage(sail_info, (proto::IslandPartySailStage)this->sail_stage_);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryIslandPartySailInfo::set_coin(sail_info, this->coin_);
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[296] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[296] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryIslandPartySailInfo::set_start_source(
    sail_info,
    *(proto::GalleryStartSource *)&this->baseclass_0[296]);
};

// Line 36: range 00000000145CF016-00000000145CF030
void __cdecl IslandPartySailGallery::onStart(IslandPartySailGallery *const this)
{
  IslandPartySailGallery::clearGalleryData(this);
};

// Line 41: range 00000000145CF11C-00000000145CF4B3
void __cdecl IslandPartySailGallery::onStop(IslandPartySailGallery *const this, proto::GalleryStopReason reason)
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
  IslandPartySailGallery::onStop::<lambda(Player&)> v18; // [rsp+20h] [rbp-B0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "1 32 16 12 event_ptr:43";
  *(_QWORD *)(v2 + 16) = IslandPartySailGallery::onStop;
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
  std::function<ForeachPolicy ()(Player &)>::function<IslandPartySailGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1},void,void>(
    &p_func,
    &v18);
  Scene::foreachPlayer(v14, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  IslandPartySailGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::~Player(&v18);
  IslandPartySailGallery::clearGalleryData(this);
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

// Line 47: range 00000000145CF032-00000000145CF0FF
ForeachPolicy __cdecl IslandPartySailGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::operator()(
        const IslandPartySailGallery::onStop::<lambda(Player&)> *const __closure,
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

// Line 47: range 00000000145EB146-00000000145EB1C5
void __cdecl IslandPartySailGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::Player(
        IslandPartySailGallery::onStop::<lambda(Player&)> *const this,
        IslandPartySailGallery::onStop::<lambda(Player&)> *a2)
{
  IslandPartySailGallery *v2; // rdx

  std::shared_ptr<GalleryIslandPartySettleEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 47: range 00000000145EB290-00000000145EB30F
void __cdecl IslandPartySailGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::Player(
        IslandPartySailGallery::onStop::<lambda(Player&)> *const this,
        const IslandPartySailGallery::onStop::<lambda(Player&)> *a2)
{
  IslandPartySailGallery *v2; // rdx

  std::shared_ptr<GalleryIslandPartySettleEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 47: range 00000000145CF100-00000000145CF11A
void __cdecl IslandPartySailGallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::~Player(
        IslandPartySailGallery::onStop::<lambda(Player&)> *const this)
{
  std::shared_ptr<GalleryIslandPartySettleEvent>::~shared_ptr(&this->__event_ptr);
};

// Line 59: range 00000000145CF4B4-00000000145CFF3A
int32_t __cdecl IslandPartySailGallery::updatePlayerScore(
        IslandPartySailGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *contex)
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
  char v17; // dl
  bool v18; // dl
  const luabind::adl::object *v19; // rsi
  bool v20; // r14
  uint32_t v21; // ecx
  char v22; // dl
  bool v23; // dl
  const luabind::adl::object *v24; // rsi
  bool v25; // r14
  uint32_t v26; // ecx
  char v27; // al
  const luabind::adl::object *v28; // rsi
  bool v29; // r14
  uint32_t v30; // ecx
  char v31; // al
  const luabind::adl::object *v32; // rsi
  bool v33; // r14
  uint32_t v34; // ecx
  char v35; // al
  std::allocator<char> __a; // [rsp+2Fh] [rbp-131h] BYREF
  common::milog::MiLogStream v38; // [rsp+30h] [rbp-130h] BYREF
  char v39[272]; // [rsp+50h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 13 sail_stage:66 64 4 21 kill_monster_count:67 80 4 11 progress:68 96 4 20 max_monster_co"
                        "unt:69 112 4 15 max_progress:70 128 4 7 coin:71 144 40 10 notify:104";
  *(_QWORD *)(v4 + 16) = IslandPartySailGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = 61956;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[56] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[56] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( *(_DWORD *)&this->baseclass_0[56] == 3 )
  {
    *(_DWORD *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 64) = 0;
    *(_DWORD *)(v4 + 80) = 0;
    *(_DWORD *)(v4 + 96) = 0;
    *(_DWORD *)(v4 + 112) = 0;
    *(_DWORD *)(v4 + 128) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v38, "sail_stage", &__a);
    v9 = param_table;
    v10 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v38,
            (unsigned int *)(v4 + 48)) == 0;
    std::string::~string(&v38);
    std::allocator<char>::~allocator(&__a);
    if ( v10 )
    {
      v11 = *(_DWORD *)(v4 + 48);
      v12 = *(_BYTE *)(((unsigned __int64)&this->sail_stage_ >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v12 != 0;
      v13 = v12 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v12;
      if ( v13 )
        __asan_report_store4(&this->sail_stage_, v9, v13);
      this->sail_stage_ = v11;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v38, "kill_monster_count", &__a);
    v14 = param_table;
    v15 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v38,
            (unsigned int *)(v4 + 64)) == 0;
    std::string::~string(&v38);
    std::allocator<char>::~allocator(&__a);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v4 + 64);
      v17 = *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000);
      LOBYTE(v14) = v17 != 0;
      v18 = v17 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v17;
      if ( v18 )
        __asan_report_store4(&this->kill_monster_count_, v14, v18);
      this->kill_monster_count_ = v16;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v38, "progress", &__a);
    v19 = param_table;
    v20 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v38,
            (unsigned int *)(v4 + 80)) == 0;
    std::string::~string(&v38);
    std::allocator<char>::~allocator(&__a);
    if ( v20 )
    {
      v21 = *(_DWORD *)(v4 + 80);
      v22 = *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000);
      LOBYTE(v19) = v22 != 0;
      v23 = v22 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v22;
      if ( v23 )
        __asan_report_store4(&this->progress_, v19, v23);
      this->progress_ = v21;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v38, "max_monster_count", &__a);
    v24 = param_table;
    v25 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v38,
            (unsigned int *)(v4 + 96)) == 0;
    std::string::~string(&v38);
    std::allocator<char>::~allocator(&__a);
    if ( v25 )
    {
      v26 = *(_DWORD *)(v4 + 96);
      v27 = *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000);
      if ( v27 != 0 && v27 <= 3 )
      {
        LOBYTE(v24) = v27 != 0;
        __asan_report_store4(&this->max_monster_count_, v24, (_BYTE)this + 48);
      }
      this->max_monster_count_ = v26;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v38, "max_progress", &__a);
    v28 = param_table;
    v29 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v38,
            (unsigned int *)(v4 + 112)) == 0;
    std::string::~string(&v38);
    std::allocator<char>::~allocator(&__a);
    if ( v29 )
    {
      v30 = *(_DWORD *)(v4 + 112);
      v31 = *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000);
      if ( v31 != 0 && v31 <= 3 )
      {
        LOBYTE(v28) = v31 != 0;
        __asan_report_store4(&this->max_progress_, v28, (_BYTE)this + 56);
      }
      this->max_progress_ = v30;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v38, "coin", &__a);
    v32 = param_table;
    v33 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v38,
            (unsigned int *)(v4 + 128)) == 0;
    std::string::~string(&v38);
    std::allocator<char>::~allocator(&__a);
    if ( v33 )
    {
      v34 = *(_DWORD *)(v4 + 128);
      v35 = *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000);
      if ( v35 != 0 && v35 <= 3 )
      {
        LOBYTE(v32) = v35 != 0;
        __asan_report_store4(&this->coin_, v32, (_BYTE)this + 64);
      }
      this->coin_ = v34;
    }
    if ( *(_DWORD *)(v4 + 112) || *(_DWORD *)(v4 + 96) )
    {
      BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
    }
    else
    {
      proto::IslandPartySailInfoNotify::IslandPartySailInfoNotify((proto::IslandPartySailInfoNotify *const)(v4 + 144));
      if ( *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::IslandPartySailInfoNotify::set_kill_monster_count(
        (proto::IslandPartySailInfoNotify *const)(v4 + 144),
        this->kill_monster_count_);
      if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::IslandPartySailInfoNotify::set_progress(
        (proto::IslandPartySailInfoNotify *const)(v4 + 144),
        this->progress_);
      if ( *(_BYTE *)(((unsigned __int64)&this->sail_stage_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sail_stage_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::IslandPartySailInfoNotify::set_stage(
        (proto::IslandPartySailInfoNotify *const)(v4 + 144),
        (proto::IslandPartySailStage)this->sail_stage_);
      if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::IslandPartySailInfoNotify::set_coin((proto::IslandPartySailInfoNotify *const)(v4 + 144), this->coin_);
      BaseGallery::notifyToGalleryPlayers<proto::IslandPartySailInfoNotify>(
        (BaseGallery *const)this,
        (proto::IslandPartySailInfoNotify *)(v4 + 144));
      proto::IslandPartySailInfoNotify::~IslandPartySailInfoNotify((proto::IslandPartySailInfoNotify *const)(v4 + 144));
    }
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/island_party_sail_gallery.cpp",
      "updatePlayerScore",
      62);
    v7 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v38,
           (const char (*)[60])"[ISLAND_PARTY_SAIL_GALLERY] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[56] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[56] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 128) = *(_DWORD *)&this->baseclass_0[56];
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 128));
    common::milog::MiLogStream::~MiLogStream(&v38);
    result = -1;
  }
  if ( v39 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 115: range 00000000145CFF3C-00000000145D00F4
void __cdecl IslandPartySailGallery::clearGalleryData(IslandPartySailGallery *const this)
{
  bool v1; // dl
  bool v2; // dl
  __int64 v3; // rsi
  bool v4; // dl

  v1 = *(_BYTE *)(((unsigned __int64)&this->sail_stage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sail_stage_ >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(&this->sail_stage_, (((_BYTE)this + 60) & 7u) + 3, v1);
  this->sail_stage_ = 1;
  v2 = *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3)
                                                        + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->kill_monster_count_, (((_BYTE)this + 44) & 7u) + 3, v2);
  this->kill_monster_count_ = 0;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->progress_, v3, v4);
  this->progress_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_monster_count_, v3, (_BYTE)this + 48);
  }
  this->max_monster_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_progress_, v3, (_BYTE)this + 56);
  }
  this->max_progress_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coin_, v3, (_BYTE)this + 64);
  }
  this->coin_ = 0;
};

// Line 125: range 00000000145D00F6-00000000145D0316
void __cdecl IslandPartySailGallery::onPlayerLeaveScene(IslandPartySailGallery *const this, Player *player)
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
        "./src/scene/scene_gallery/island_party_sail_gallery.cpp",
        "onPlayerLeaveScene",
        134);
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
