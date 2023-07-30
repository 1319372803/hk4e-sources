// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gadget_seal_comp.cpp

// Line 32: range 000000001754941C-000000001754942A
int32_t __cdecl GadgetSealComp::init(GadgetSealComp *const this)
{
  return 0;
};

// Line 37: range 000000001754967C-0000000017549A8F
int32_t __cdecl GadgetSealComp::start(GadgetSealComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  SceneUnixTimer *v5; // rax
  int32_t result; // eax
  std::shared_ptr<Gadget> __r; // [rsp+10h] [rbp-D0h] BYREF
  std::shared_ptr<Scene> v8; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 scene_ptr:38 64 16 13 gadget_wtr:45";
  *(_QWORD *)(v1 + 16) = GadgetSealComp::start;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  GadgetCompBase::getGadget(this);
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_seal_comp.cpp",
      "start",
      41);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v9, (const char (*)[21])"scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v4 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toThisPtr<Gadget>((Gadget *)&__r);
    std::weak_ptr<Gadget>::weak_ptr<Gadget,void>((std::weak_ptr<Gadget> *const)(v1 + 64), &__r);
    std::shared_ptr<Gadget>::~shared_ptr(&__r);
    std::weak_ptr<Gadget>::weak_ptr((std::weak_ptr<Gadget> *const)&__r, (const std::weak_ptr<Gadget> *)(v1 + 64));
    common::tools::perf::make_shared<SceneUnixTimer,std::shared_ptr<Scene> &,GadgetSealComp::start(void)::{lambda(unsigned long)#1}>(
      &v8,
      (GadgetSealComp::start::<lambda(uint64_t)> *)(v1 + 32),
      (std::shared_ptr<Scene> *)&__r,
      (GadgetSealComp::start::<lambda(uint64_t)> *)(v1 + 32));
    std::shared_ptr<SceneUnixTimer>::operator=(&this->update_timer_ptr_, (std::shared_ptr<SceneUnixTimer> *)&v8);
    std::shared_ptr<SceneUnixTimer>::~shared_ptr((std::shared_ptr<SceneUnixTimer> *const)&v8);
    GadgetSealComp::start(void)::{lambda(unsigned long)#1}::~start((GadgetSealComp::start::<lambda(uint64_t)> *const)&__r);
    if ( std::operator==<SceneUnixTimer>(&this->update_timer_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "start",
        49);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v9,
        (const char (*)[29])"create SceneUnixTimer failed");
      common::milog::MiLogStream::~MiLogStream(&v9);
      v4 = -1;
    }
    else
    {
      v5 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->update_timer_ptr_);
      if ( SceneUnixTimer::startS(v5, 1u, 1, "./src/gadget/gadget_seal_comp.cpp", "start", 53) )
      {
        common::milog::MiLogStream::create(
          &v9,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget_seal_comp.cpp",
          "start",
          55);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v9,
          (const char (*)[34])"crystal update_timer start failed");
        common::milog::MiLogStream::~MiLogStream(&v9);
        v4 = -1;
      }
      else
      {
        v4 = 0;
      }
    }
    std::weak_ptr<Gadget>::~weak_ptr((std::weak_ptr<Gadget> *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v4;
  if ( v10 == (char *)v1 )
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
  return result;
};

// Line 45: range 000000001754942C-000000001754965F
void __cdecl GadgetSealComp::start(void)::{lambda(unsigned long)#1}::operator()(
        const GadgetSealComp::start::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GadgetSealComp *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 gadget_ptr:45 64 16 10 obj_ptr:45";
  *(_QWORD *)(v2 + 16) = GadgetSealComp::start(void)::{lambda(unsigned long)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 32));
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_seal_comp.cpp",
      "operator()",
      45);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v6,
      (const char (*)[36])"gadget is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetSealComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
    if ( std::operator!=<GadgetSealComp>((const std::shared_ptr<GadgetSealComp> *)(v2 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<GadgetSealComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetSealComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      GadgetSealComp::onUpdateTimer(v5, now_ms);
    }
    std::shared_ptr<GadgetSealComp>::~shared_ptr((std::shared_ptr<GadgetSealComp> *const)(v2 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
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

// Line 45: range 000000001760C2B6-000000001760C2DB
void __cdecl GadgetSealComp::start(void)::{lambda(unsigned long)#1}::start(
        GadgetSealComp::start::<lambda(uint64_t)> *const this,
        GadgetSealComp::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 45: range 000000001760DB5A-000000001760DB7F
void __cdecl GadgetSealComp::start(void)::{lambda(unsigned long)#1}::start(
        GadgetSealComp::start::<lambda(uint64_t)> *const this,
        const GadgetSealComp::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 45: range 0000000017549660-000000001754967A
void __cdecl GadgetSealComp::start(void)::{lambda(unsigned long)#1}::~start(
        GadgetSealComp::start::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->__gadget_wtr);
};

// Line 62: range 0000000017549A90-000000001754A071
int32_t __cdecl GadgetSealComp::battleBegin(
        GadgetSealComp *const this,
        Player *player,
        SealBattleBasePtr *p_battle_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rbx
  Gadget *Gadget; // rax
  common::milog::MiLogStream *v9; // rax
  Gadget *v10; // rax
  uint32_t EntityId; // eax
  std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t Radius; // eax
  std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t MaxProgress; // eax
  std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  proto::SealBattleType BattleType; // eax
  Entity *v18; // rax
  std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  unsigned __int64 v20; // rax
  void (__fastcall *v21)(std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Player *, Gadget *); // r15
  Gadget *v22; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-114h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-110h] BYREF
  char v27[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 16 12 scene_ptr:74 80 16 13 player_ptr:88 112 40 9 notify:81";
  *(_QWORD *)(v3 + 16) = GadgetSealComp::battleBegin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  common::milog::MiLogStream::create(
    &v26,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/gadget_seal_comp.cpp",
    "battleBegin",
    63);
  common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v26, (const char (*)[24])"SealGadget battleBegin ");
  common::milog::MiLogStream::~MiLogStream(&v26);
  if ( std::operator==<SealBattleBase>(p_battle_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_seal_comp.cpp",
      "battleBegin",
      66);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v26, (const char (*)[22])"battle_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v6 = -1;
  }
  else if ( std::operator!=<SealBattleBase>(&this->battle_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_seal_comp.cpp",
      "battleBegin",
      71);
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v26, (const char (*)[13])"SealGadget: ");
    Gadget = GadgetCompBase::getGadget(this);
    val = Entity::getConfigId((const Entity *const)Gadget);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])off_26129FE0);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v6 = -1;
  }
  else
  {
    GadgetCompBase::getGadget(this);
    Entity::getScene((const Entity *const)(v3 + 48));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "battleBegin",
        77);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v26, (const char (*)[20])"getScene is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v26);
      v6 = -1;
    }
    else
    {
      proto::SealBattleBeginNotify::SealBattleBeginNotify((proto::SealBattleBeginNotify *const)(v3 + 112));
      v10 = GadgetCompBase::getGadget(this);
      EntityId = Entity::getEntityId((const Entity *const)v10);
      proto::SealBattleBeginNotify::set_seal_entity_id((proto::SealBattleBeginNotify *const)(v3 + 112), EntityId);
      v12 = std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_battle_ptr);
      Radius = SealBattleBase::getRadius(v12);
      proto::SealBattleBeginNotify::set_seal_radius((proto::SealBattleBeginNotify *const)(v3 + 112), Radius);
      v14 = std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_battle_ptr);
      MaxProgress = SealBattleBase::getMaxProgress(v14);
      proto::SealBattleBeginNotify::set_seal_max_progress((proto::SealBattleBeginNotify *const)(v3 + 112), MaxProgress);
      v16 = std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_battle_ptr);
      BattleType = SealBattleBase::getBattleType(v16);
      proto::SealBattleBeginNotify::set_battle_type((proto::SealBattleBeginNotify *const)(v3 + 112), BattleType);
      v18 = (Entity *)GadgetCompBase::getGadget(this);
      Entity::notifyViewingPlayers<proto::SealBattleBeginNotify>(v18, (proto::SealBattleBeginNotify *)(v3 + 112), 1);
      toThisPtr<Player>((Player *)(v3 + 80));
      std::shared_ptr<SealBattleBase>::operator=(&this->battle_ptr_, p_battle_ptr);
      v19 = std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->battle_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = (unsigned __int64)(v19->_vptr_SealBattleBase + 2);
      if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
        v20 = __asan_report_load8();
      v21 = *(void (__fastcall **)(std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Player *, Gadget *))v20;
      v22 = GadgetCompBase::getGadget(this);
      v21(v19, player, v22);
      v6 = 0;
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 80));
      proto::SealBattleBeginNotify::~SealBattleBeginNotify((proto::SealBattleBeginNotify *const)(v3 + 112));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 48));
  }
  result = v6;
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 97: range 000000001754A072-000000001754A125
void __cdecl GadgetSealComp::onUpdateTimer(GadgetSealComp *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx

  if ( std::operator!=<SealBattleBase>(&this->battle_ptr_, 0LL) )
  {
    v2 = (unsigned __int64)std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->battle_ptr_);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    v3 = *(_QWORD *)v2 + 32LL;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, _QWORD))v3)(v2, (unsigned int)(now_ms / 0x3E8));
  }
};

// Line 106: range 000000001754A126-000000001754AA51
void __fastcall GadgetSealComp::battleEnd(GadgetSealComp *const this, char is_win)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  Gadget *Gadget; // rax
  common::milog::MiLogStream *v7; // rax
  Gadget *v8; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  uint32_t *p_source_entity_id; // rax
  Gadget *v12; // rax
  uint32_t ConfigId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  int32_t *p_param1; // rax
  int32_t v16; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  uint32_t *p_uid; // rax
  Group *v22; // rax
  Gadget *v23; // rax
  uint32_t v24; // eax
  Entity *v25; // rax
  Gadget *v26; // rax
  Gadget *v27; // rax
  Gadget *v28; // rax
  unsigned int *v29; // r9
  Player *v30; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int *v32; // [rsp+0h] [rbp-180h]
  unsigned int SceneId; // [rsp+14h] [rbp-16Ch] BYREF
  unsigned int GroupId; // [rsp+18h] [rbp-168h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-164h] BYREF
  std::shared_ptr<SealBattleEndEvent> __r; // [rsp+20h] [rbp-160h] BYREF
  char v37[336]; // [rsp+30h] [rbp-150h] BYREF

  BYTE4(v32) = is_win;
  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 10 is_win:105 64 16 13 scene_ptr:112 96 16 14 player_ptr:119 128 16 11 evt_ptr:129 160 16"
                        " 13 group_ptr:135 192 16 13 event_ptr:154 224 32 10 notify:148";
  *(_QWORD *)(v2 + 16) = GadgetSealComp::battleEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862728] = -202116109;
  *(_BYTE *)(v2 + 48) = is_win;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 224),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/gadget_seal_comp.cpp",
    "battleEnd",
    107);
  v5 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
         (common::milog::MiLogStream *const)(v2 + 224),
         (const char (*)[13])"SealGadget: ");
  Gadget = GadgetCompBase::getGadget(this);
  val = Entity::getConfigId((const Entity *const)Gadget);
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" battleEnd");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
  if ( !std::operator==<SealBattleBase>(&this->battle_ptr_, 0LL) )
  {
    GadgetCompBase::getGadget(this);
    Entity::getScene((const Entity *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "battleEnd",
        115);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
        (common::milog::MiLogStream *const)(v2 + 224),
        (const char (*)[20])"getScene is nullptr");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    }
    else
    {
      std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->battle_ptr_);
      SealBattleBase::getPlayerPtr((SealBattleBase *const)(v2 + 96));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget_seal_comp.cpp",
          "battleEnd",
          122);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)(v2 + 224),
          (const char (*)[33])"battle_ptr_->getPlayerPtr failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      }
      else
      {
        std::__shared_ptr<SealBattleBase,(__gnu_cxx::_Lock_policy)2>::reset(&this->battle_ptr_);
        EventUtil::createEvent((data::EventType)(v2 + 128));
        if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v2 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 224),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/gadget_seal_comp.cpp",
            "battleEnd",
            132);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            (common::milog::MiLogStream *const)(v2 + 224),
            (const char (*)[30])"createEvent SEAL_BATTLE_BEGIN");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        }
        else
        {
          GadgetCompBase::getGadget(this);
          Entity::getGroup((const Entity *const)(v2 + 160));
          if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v2 + 160), 0LL) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 224),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/gadget_seal_comp.cpp",
              "battleEnd",
              138);
            common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"getGroup failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          }
          else
          {
            v8 = GadgetCompBase::getGadget(this);
            EntityId = Entity::getEntityId((const Entity *const)v8);
            v10 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            p_source_entity_id = &v10->source_entity_id;
            if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_store4(p_source_entity_id);
            }
            v10->source_entity_id = EntityId;
            v12 = GadgetCompBase::getGadget(this);
            ConfigId = Entity::getConfigId((const Entity *const)v12);
            v14 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            p_param1 = &v14->param1;
            if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(p_param1);
            }
            v14->param1 = ConfigId;
            v16 = *(unsigned __int8 *)(v2 + 48);
            v17 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v17->param2 >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v17->param2 >> 3) + 0x7FFF8000) <= 3 )
            {
              v17 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v17->param2);
            }
            v17->param2 = v16;
            v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            Uid = Player::getUid(v18);
            v20 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            p_uid = &v20->uid;
            if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(p_uid);
            }
            v20->uid = Uid;
            v22 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            Group::handleEvent(v22, (EventPtr *)(v2 + 128));
            proto::SealBattleEndNotify::SealBattleEndNotify((proto::SealBattleEndNotify *const)(v2 + 224));
            v23 = GadgetCompBase::getGadget(this);
            v24 = Entity::getEntityId((const Entity *const)v23);
            proto::SealBattleEndNotify::set_seal_entity_id((proto::SealBattleEndNotify *const)(v2 + 224), v24);
            proto::SealBattleEndNotify::set_is_win((proto::SealBattleEndNotify *const)(v2 + 224), *(_BYTE *)(v2 + 48));
            v25 = (Entity *)GadgetCompBase::getGadget(this);
            Entity::notifyViewingPlayers<proto::SealBattleEndNotify>(v25, (proto::SealBattleEndNotify *)(v2 + 224), 1);
            v26 = GadgetCompBase::getGadget(this);
            val = Entity::getConfigId((const Entity *const)v26);
            v27 = GadgetCompBase::getGadget(this);
            GroupId = Entity::getGroupId((const Entity *const)v27);
            v28 = GadgetCompBase::getGadget(this);
            SceneId = Entity::getSceneId((const Entity *const)v28);
            common::tools::perf::make_shared<SealBattleEndEvent,unsigned int,unsigned int,unsigned int,bool &>(
              (unsigned int *)&__r,
              &SceneId,
              &GroupId,
              (bool *)&val,
              (unsigned int *)(v2 + 48),
              v29,
              v32,
              (bool *)this);
            std::shared_ptr<BaseEvent>::shared_ptr<SealBattleEndEvent,void>(
              (std::shared_ptr<BaseEvent> *const)(v2 + 192),
              &__r);
            std::shared_ptr<SealBattleEndEvent>::~shared_ptr(&__r);
            v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            EventComp = Player::getEventComp(v30);
            std::shared_ptr<BaseEvent>::shared_ptr(
              (std::shared_ptr<BaseEvent> *const)&__r,
              (const std::shared_ptr<BaseEvent> *)(v2 + 192));
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 192));
            proto::SealBattleEndNotify::~SealBattleEndNotify((proto::SealBattleEndNotify *const)(v2 + 224));
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 160));
        }
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 128));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 159: range 000000001754AA52-000000001754AB55
void __cdecl GadgetSealComp::onBeforeLeaveScene(GadgetSealComp *const this, const VisionContext *context)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator!=<SealBattleBase>(&this->battle_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/gadget_seal_comp.cpp",
      "onBeforeLeaveScene",
      162);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v4,
      (const char (*)[36])"onBeforeLeaveScene, seal battle end");
    common::milog::MiLogStream::~MiLogStream(&v4);
    v2 = (unsigned __int64)std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SealBattleBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->battle_ptr_);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    v3 = *(_QWORD *)v2 + 24LL;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, _QWORD))v3)(v2, 0LL);
  }
};

// Line 168: range 000000001754AB56-000000001754B404
std::shared_ptr<SealBattleBase> __cdecl SealBattleBase::createBattle(const luabind::adl::object *seal_table)
{
  const luabind::adl::object *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  bool v6; // r14
  unsigned int *v7; // r8
  SealKeepAliveParam *v8; // r9
  std::shared_ptr<SealBattleBase> result; // rax
  bool v10; // r14
  unsigned int *v11; // r8
  SealKillMonsterParam *v12; // r9
  bool v13; // r14
  unsigned int *v14; // r8
  SealEnergyChargeParam *v15; // r9
  common::milog::MiLogStream *v16; // rax
  std::shared_ptr<SealBattleBase> *v17; // [rsp+8h] [rbp-158h]
  const char (*v18)[12]; // [rsp+10h] [rbp-150h]
  unsigned int *v19; // [rsp+18h] [rbp-148h] BYREF
  std::shared_ptr<SealKeepAliveBattle> __r; // [rsp+20h] [rbp-140h] BYREF
  std::string name; // [rsp+30h] [rbp-130h] BYREF
  const char (*v22[34])[20]; // [rsp+50h] [rbp-110h] BYREF

  v17 = (std::shared_ptr<SealBattleBase> *)seal_table;
  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 15 battle_type:169 64 4 10 radius:170 80 4 16 max_progress:171 96 8 9 param:189 128 12 9 "
                        "param:178 160 20 9 param:200";
  *(_QWORD *)(v2 + 16) = SealBattleBase::createBattle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -219020288;
  v4[536862725] = -217841664;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  std::allocator<char>::allocator((char *)&v19 + 7);
  std::string::basic_string<std::allocator<char>>(&name, "battle_type", (const std::allocator<char> *)&v19 + 7);
  ScriptUtil::getTableValue<proto::SealBattleType>(
    &ScriptUtil::no_exception_instance,
    v1,
    &name,
    (proto::SealBattleType *)(v2 + 48));
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v19 + 7);
  v5 = *(_DWORD *)(v2 + 48);
  if ( v5 == 2 )
  {
    *(_DWORD *)(v2 + 160) = 0;
    *(_DWORD *)(v2 + 164) = 0;
    *(_DWORD *)(v2 + 168) = 0;
    *(_DWORD *)(v2 + 172) = 0;
    *(_DWORD *)(v2 + 176) = 0;
    std::allocator<char>::allocator((char *)&v19 + 7);
    std::string::basic_string<std::allocator<char>>(&name, "radius", (const std::allocator<char> *)&v19 + 7);
    v13 = ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &,char const(&)[12],unsigned int &,char const(&)[17],unsigned int &,char const(&)[12],unsigned int &,char const(&)[13],unsigned int &,char const(&)[20],unsigned int &>(
            &ScriptUtil::no_exception_instance,
            v1,
            &name,
            (unsigned int *)(v2 + 64),
            (const char (*)[11])"max_energy",
            (unsigned int *)(v2 + 80),
            (const char (*)[12])"battle_time",
            (unsigned int *)(v2 + 160),
            (const char (*)[17])"monster_group_id",
            (unsigned int *)(v2 + 164),
            (const char (*)[12])"auto_charge",
            (unsigned int *)(v2 + 168),
            (const char (*)[13])"auto_decline",
            (unsigned int *)(v2 + 172),
            (const char (*)[20])"default_kill_charge",
            (unsigned int *)(v2 + 176),
            (const char (*)[11])v1,
            (unsigned int *)seal_table,
            v18,
            v19,
            (const char (*)[17])__r._M_ptr,
            (unsigned int *)__r._M_refcount._M_pi,
            (const char (*)[12])name._M_dataplus._M_p,
            (unsigned int *)name._M_string_length,
            (const char (*)[13])name._anon_0._M_allocated_capacity,
            *((unsigned int **)&name._anon_0._M_allocated_capacity + 1),
            v22[0],
            (unsigned int *)v22[1]) != 0;
    std::string::~string(&name);
    std::allocator<char>::~allocator((char *)&v19 + 7);
    if ( v13 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "createBattle",
        206);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)&name,
        (const char (*)[33])"SCRIPT_UTIL.getTableValue failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      std::shared_ptr<SealBattleBase>::shared_ptr(v17, 0LL);
    }
    else
    {
      common::tools::perf::make_shared<SealEnergyChargeBattle,unsigned int &,unsigned int &,SealEnergyChargeParam &>(
        (unsigned int *)&__r,
        (unsigned int *)(v2 + 64),
        (SealEnergyChargeParam *)(v2 + 80),
        (unsigned int *)(v2 + 160),
        v14,
        v15);
      std::shared_ptr<SealBattleBase>::shared_ptr<SealEnergyChargeBattle,void>(
        v17,
        (std::shared_ptr<SealEnergyChargeBattle> *)&__r);
      std::shared_ptr<SealEnergyChargeBattle>::~shared_ptr((std::shared_ptr<SealEnergyChargeBattle> *const)&__r);
    }
    goto LABEL_19;
  }
  if ( v5 > 2 )
    goto LABEL_18;
  if ( !v5 )
  {
    *(_DWORD *)(v2 + 128) = 0;
    *(_DWORD *)(v2 + 132) = 0;
    *(_DWORD *)(v2 + 136) = 0;
    std::allocator<char>::allocator((char *)&v19 + 7);
    std::string::basic_string<std::allocator<char>>(&name, "radius", (const std::allocator<char> *)&v19 + 7);
    v6 = ScriptUtil::getTableValue<unsigned int,char const(&)[13],unsigned int &,char const(&)[7],unsigned int &,char const(&)[8],unsigned int &,char const(&)[10],unsigned int &>(
           &ScriptUtil::no_exception_instance,
           v1,
           &name,
           (unsigned int *)(v2 + 64),
           (const char (*)[13])"max_progress",
           (unsigned int *)(v2 + 80),
           (const char (*)[7])"in_add",
           (unsigned int *)(v2 + 128),
           (const char (*)[8])"out_sub",
           (unsigned int *)(v2 + 132),
           (const char (*)[10])"fail_time",
           (unsigned int *)(v2 + 136),
           (const char (*)[13])v1,
           (unsigned int *)seal_table,
           (const char (*)[7])v18,
           v19,
           (const char (*)[8])__r._M_ptr,
           (unsigned int *)__r._M_refcount._M_pi,
           (const char (*)[10])name._M_dataplus._M_p,
           (unsigned int *)name._M_string_length) != 0;
    std::string::~string(&name);
    std::allocator<char>::~allocator((char *)&v19 + 7);
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "createBattle",
        182);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)&name,
        (const char (*)[33])"SCRIPT_UTIL.getTableValue failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      std::shared_ptr<SealBattleBase>::shared_ptr(v17, 0LL);
    }
    else
    {
      common::tools::perf::make_shared<SealKeepAliveBattle,unsigned int &,unsigned int &,SealKeepAliveParam &>(
        (unsigned int *)&__r,
        (unsigned int *)(v2 + 64),
        (SealKeepAliveParam *)(v2 + 80),
        (unsigned int *)(v2 + 128),
        v7,
        v8);
      std::shared_ptr<SealBattleBase>::shared_ptr<SealKeepAliveBattle,void>(v17, &__r);
      std::shared_ptr<SealKeepAliveBattle>::~shared_ptr(&__r);
    }
    goto LABEL_19;
  }
  if ( v5 == 1 )
  {
    *(_DWORD *)(v2 + 96) = 0;
    *(_DWORD *)(v2 + 100) = 0;
    std::allocator<char>::allocator((char *)&v19 + 7);
    std::string::basic_string<std::allocator<char>>(&name, "radius", (const std::allocator<char> *)&v19 + 7);
    v10 = ScriptUtil::getTableValue<unsigned int,char const(&)[13],unsigned int &,char const(&)[10],unsigned int &,char const(&)[17],unsigned int &>(
            &ScriptUtil::no_exception_instance,
            v1,
            &name,
            (unsigned int *)(v2 + 64),
            (const char (*)[13])"max_progress",
            (unsigned int *)(v2 + 80),
            (const char (*)[10])"kill_time",
            (unsigned int *)(v2 + 96),
            (const char (*)[17])"monster_group_id",
            (unsigned int *)(v2 + 100),
            (const char (*)[13])v1,
            (unsigned int *)seal_table,
            (const char (*)[10])v18,
            v19,
            (const char (*)[17])__r._M_ptr,
            (unsigned int *)__r._M_refcount._M_pi) != 0;
    std::string::~string(&name);
    std::allocator<char>::~allocator((char *)&v19 + 7);
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "createBattle",
        193);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)&name,
        (const char (*)[33])"SCRIPT_UTIL.getTableValue failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      std::shared_ptr<SealBattleBase>::shared_ptr(v17, 0LL);
    }
    else
    {
      common::tools::perf::make_shared<SealKillMonsterBattle,unsigned int &,unsigned int &,SealKillMonsterParam &>(
        (unsigned int *)&__r,
        (unsigned int *)(v2 + 64),
        (SealKillMonsterParam *)(v2 + 80),
        (unsigned int *)(v2 + 96),
        v11,
        v12);
      std::shared_ptr<SealBattleBase>::shared_ptr<SealKillMonsterBattle,void>(
        v17,
        (std::shared_ptr<SealKillMonsterBattle> *)&__r);
      std::shared_ptr<SealKillMonsterBattle>::~shared_ptr((std::shared_ptr<SealKillMonsterBattle> *const)&__r);
    }
  }
  else
  {
LABEL_18:
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_seal_comp.cpp",
      "createBattle",
      213);
    v16 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            (common::milog::MiLogStream *const)&name,
            (const char (*)[29])off_2612A720);
    common::milog::MiLogStream::operator<<<proto::SealBattleType,(proto::SealBattleType*)0>(
      v16,
      (const proto::SealBattleType *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    std::shared_ptr<SealBattleBase>::shared_ptr((std::shared_ptr<SealBattleBase> *const)seal_table, 0LL);
  }
LABEL_19:
  if ( v22 == (const char (**)[20])v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<SealBattleBase,(__gnu_cxx::_Lock_policy)2>::element_type *)v17;
  return result;
};

// Line 222: range 000000001754B406-000000001754B8BC
void __cdecl SealBattleBase::onBattleBegin(SealBattleBase *const this, Player *player, Gadget *gadget)
{
  unsigned __int64 p_M_start; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::weak_ptr<SealBattleBase> *EventComp; // [rsp+10h] [rbp-120h]
  std::weak_ptr<SealBattleBase> *p_this_wtr; // [rsp+20h] [rbp-110h]
  PlayerEventComp v8; // [rsp+40h] [rbp-F0h] BYREF

  p_M_start = (unsigned __int64)&v8.event_center_.context_.pending_que_.c._M_impl._M_start;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      p_M_start = v4;
  }
  *(_QWORD *)p_M_start = 1102416563LL;
  *(_QWORD *)(p_M_start + 8) = "3 32 16 13 scene_ptr:226 64 16 12 self_ptr:229 96 16 12 self_wtr:235";
  *(_QWORD *)(p_M_start + 16) = SealBattleBase::onBattleBegin;
  v5 = (_DWORD *)(p_M_start >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v8.event_center_,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/gadget_seal_comp.cpp",
    "onBattleBegin",
    223);
  common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
    (common::milog::MiLogStream *const)&v8.event_center_,
    (const char (*)[30])"SealBattleBase::onBattleBegin");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v8.event_center_);
  toThisPtr<Player>((Player *)&v8._M_weak_this._M_refcount);
  std::weak_ptr<Player>::operator=<Player>(
    &this->player_wtr_,
    (const std::shared_ptr<Player> *)&v8._M_weak_this._M_refcount);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v8._M_weak_this._M_refcount);
  toThisPtr<Gadget>((Gadget *)&v8._M_weak_this._M_refcount);
  std::weak_ptr<Gadget>::operator=<Gadget>(
    &this->gadget_wtr_,
    (const std::shared_ptr<Gadget> *)&v8._M_weak_this._M_refcount);
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v8._M_weak_this._M_refcount);
  Entity::getScene((const Entity *const)(p_M_start + 32));
  toThisPtr<SealBattleBase>((SealBattleBase *)(p_M_start + 64));
  if ( std::operator==<SealBattleBase>((const std::shared_ptr<SealBattleBase> *)(p_M_start + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v8.event_center_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_seal_comp.cpp",
      "onBattleBegin",
      232);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
      (common::milog::MiLogStream *const)&v8.event_center_,
      (const char (*)[21])"onBattleBegin failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v8.event_center_);
  }
  else
  {
    std::weak_ptr<SealBattleBase>::weak_ptr<SealBattleBase,void>(
      (std::weak_ptr<SealBattleBase> *const)(p_M_start + 96),
      (const std::shared_ptr<SealBattleBase> *)(p_M_start + 64));
    p_this_wtr = (std::weak_ptr<SealBattleBase> *)Player::getEventComp(player);
    std::weak_ptr<SealBattleBase>::weak_ptr(
      (std::weak_ptr<SealBattleBase> *const)&v8._M_weak_this._M_refcount,
      (const std::weak_ptr<SealBattleBase> *)(p_M_start + 96));
    PlayerEventComp::registerObserver<SealBattleBase,LeaveSceneEvent>(
      &v8,
      p_this_wtr,
      (void (*)(SealBattleBase *, const LeaveSceneEvent *))&v8._M_weak_this._M_refcount);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v8);
    std::weak_ptr<SealBattleBase>::~weak_ptr((std::weak_ptr<SealBattleBase> *const)&v8._M_weak_this._M_refcount);
    EventComp = (std::weak_ptr<SealBattleBase> *)Player::getEventComp(player);
    std::weak_ptr<SealBattleBase>::weak_ptr(
      (std::weak_ptr<SealBattleBase> *const)&v8,
      (const std::weak_ptr<SealBattleBase> *)(p_M_start + 96));
    PlayerEventComp::registerObserver<SealBattleBase,TeamDeadEvent>(
      (PlayerEventComp *const)&v8._M_weak_this._M_refcount,
      EventComp,
      (void (*)(SealBattleBase *, const TeamDeadEvent *))&v8);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v8._M_weak_this._M_refcount);
    std::weak_ptr<SealBattleBase>::~weak_ptr((std::weak_ptr<SealBattleBase> *const)&v8);
    std::weak_ptr<SealBattleBase>::~weak_ptr((std::weak_ptr<SealBattleBase> *const)(p_M_start + 96));
  }
  std::shared_ptr<SealBattleBase>::~shared_ptr((std::shared_ptr<SealBattleBase> *const)(p_M_start + 64));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(p_M_start + 32));
  if ( &v8.event_center_.context_.pending_que_.c._M_impl._M_start == (std::_Deque_base<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >>::iterator *)p_M_start )
  {
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_start = 1172321806LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 241: range 000000001754B8BE-000000001754BBF3
void __cdecl SealBattleBase::onBattleEnd(SealBattleBase *const this, bool is_win)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GadgetSealComp *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 gadget_ptr:243 64 16 17 seal_comp_ptr:249";
  *(_QWORD *)(v2 + 16) = SealBattleBase::onBattleEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/gadget_seal_comp.cpp",
    "onBattleEnd",
    242);
  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
    &v6,
    (const char (*)[28])"SealBattleBase::onBattleEnd");
  common::milog::MiLogStream::~MiLogStream(&v6);
  std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 32));
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_seal_comp.cpp",
      "onBattleEnd",
      246);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v6, (const char (*)[24])"gadget_wtr_.lock failed");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetSealComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
    if ( std::operator==<GadgetSealComp>((const std::shared_ptr<GadgetSealComp> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "onBattleEnd",
        252);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &v6,
        (const char (*)[32])"findComp<GadgetSealComp> failed");
      common::milog::MiLogStream::~MiLogStream(&v6);
    }
    else
    {
      v5 = std::__shared_ptr_access<GadgetSealComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetSealComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      GadgetSealComp::battleEnd(v5, is_win);
    }
    std::shared_ptr<GadgetSealComp>::~shared_ptr((std::shared_ptr<GadgetSealComp> *const)(v2 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
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

// Line 259: range 000000001754BBF4-000000001754BCD1
void __cdecl SealBattleBase::onPlayerLeaveScene(SealBattleBase *const this, const LeaveSceneEvent *event)
{
  unsigned __int64 v2; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/gadget_seal_comp.cpp",
    "onPlayerLeaveScene",
    260);
  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
    &v3,
    (const char (*)[35])"SealBattleBase::onPlayerLeaveScene");
  common::milog::MiLogStream::~MiLogStream(&v3);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(SealBattleBase *const, _QWORD))v2)(this, 0LL);
};

// Line 265: range 000000001754BCD2-000000001754C146
void __cdecl SealBattleBase::onTeamDead(SealBattleBase *const this, const TeamDeadEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 gadget_ptr:267 64 16 13 scene_ptr:275";
  *(_QWORD *)(v2 + 16) = SealBattleBase::onTeamDead;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/gadget_seal_comp.cpp",
    "onTeamDead",
    266);
  common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v8, (const char (*)[27])"SealBattleBase::onTeamDead");
  common::milog::MiLogStream::~MiLogStream(&v8);
  std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 32));
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_seal_comp.cpp",
      "onTeamDead",
      270);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v8, (const char (*)[20])"gadget_wtr_ nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    (*(void (__fastcall **)(SealBattleBase *const, _QWORD))v5)(this, 0LL);
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Entity::getScene((const Entity *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gadget/gadget_seal_comp.cpp",
        "onTeamDead",
        278);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v8, (const char (*)[14])"Scene is null");
      common::milog::MiLogStream::~MiLogStream(&v8);
    }
    else
    {
      v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( Scene::getPlayerCount(v6) <= 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v7 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8();
        (*(void (__fastcall **)(SealBattleBase *const, _QWORD))v7)(this, 0LL);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v8,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/gadget_seal_comp.cpp",
          "onTeamDead",
          284);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v8,
          (const char (*)[27])"player count more than one");
        common::milog::MiLogStream::~MiLogStream(&v8);
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  if ( v9 == (char *)v2 )
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

// Line 292: range 000000001754C3AC-000000001754D671
void __fastcall SealKeepAliveBattle::onTimer(SealKeepAliveBattle *const this, uint32_t now)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  SealKeepAliveBattle *v5; // rdx
  unsigned __int64 v6; // rax
  SealKeepAliveBattle *v7; // rdx
  unsigned __int64 v8; // rax
  SealKeepAliveBattle *v9; // rdx
  unsigned __int64 v10; // rax
  bool v11; // r14
  SealKeepAliveBattle *v12; // rdx
  unsigned __int64 v13; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Scene *v15; // r14
  char v16; // cl
  uint32_t progress; // ecx
  uint32_t in_add; // esi
  int v19; // edi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  uint32_t v23; // ecx
  SealKeepAliveBattle *v24; // rdx
  unsigned __int64 v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  uint32_t v29; // ecx
  SealKeepAliveBattle *v30; // rdx
  unsigned __int64 v31; // rax
  uint32_t out_sub; // ecx
  int v33; // esi
  uint32_t v34; // ecx
  uint32_t v35; // ecx
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  uint32_t EntityId; // eax
  uint32_t Radius; // eax
  Entity *v39; // rax
  SealKeepAliveBattle::onTimer::<lambda(Player&)> v40; // [rsp-20h] [rbp-1E0h]
  bool last_inside; // [rsp+13h] [rbp-1ADh]
  uint32_t delta; // [rsp+14h] [rbp-1ACh]
  const Vector3 *center; // [rsp+18h] [rbp-1A8h]
  std::shared_ptr<Scene> __a; // [rsp+20h] [rbp-1A0h] BYREF
  SealKeepAliveBattle::onTimer::<lambda(Player&)> __f; // [rsp+30h] [rbp-190h]
  common::milog::MiLogStream v47; // [rsp+50h] [rbp-170h] BYREF
  char v48[336]; // [rsp+70h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 20 is_avatar_inside:340 64 4 7 now:291 80 16 14 player_ptr:293 112 16 14 avatar_ptr:300 1"
                        "44 16 14 gadget_ptr:307 176 16 13 scene_ptr:334 208 40 10 notify:388";
  *(_QWORD *)(v2 + 16) = SealKeepAliveBattle::onTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  *(_DWORD *)(v2 + 64) = now;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 80));
  if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 80), 0LL) )
  {
    std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    Player::getCurAvatar((Player *const)(v2 + 112));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 112), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "onTimer",
        303);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v47,
        (const char (*)[33])"player_ptr->getCurAvatar nullptr");
      common::milog::MiLogStream::~MiLogStream(&v47);
      v7 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      (*(void (__fastcall **)(SealKeepAliveBattle *, _QWORD))v8)(v7, 0LL);
      goto LABEL_110;
    }
    std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 144));
    if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 144), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "onTimer",
        310);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v47, (const char (*)[20])"gadget_wtr_ nullptr");
      common::milog::MiLogStream::~MiLogStream(&v47);
      v9 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      (*(void (__fastcall **)(SealKeepAliveBattle *, _QWORD))v10)(v9, 0LL);
      goto LABEL_109;
    }
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
    Entity::getScene((const Entity *const)(v2 + 176));
    std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    Entity::getScene((const Entity *const)&__a);
    v11 = std::operator!=<Scene,Scene>(&__a, (const std::shared_ptr<Scene> *)(v2 + 176));
    std::shared_ptr<Scene>::~shared_ptr(&__a);
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 176));
    if ( v11 )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "onTimer",
        317);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v47,
        (const char (*)[37])"avatar_ptr->getScene() != getScene()");
      common::milog::MiLogStream::~MiLogStream(&v47);
      v12 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v13 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8();
      (*(void (__fastcall **)(SealKeepAliveBattle *, _QWORD))v13)(v12, 0LL);
      goto LABEL_109;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->last_tick_time_ >= *(_DWORD *)(v2 + 64) )
      goto LABEL_109;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !this->last_tick_time_ )
      this->last_tick_time_ = *(_DWORD *)(v2 + 64);
    v14 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
    center = Entity::getPosition((const Entity *const)v14);
    if ( *(char *)(((unsigned __int64)&this->is_inside_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_inside_);
    last_inside = this->is_inside_;
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
    Entity::getScene((const Entity *const)(v2 + 176));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 176), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gadget/gadget_seal_comp.cpp",
        "onTimer",
        337);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v47, (const char (*)[14])"Scene is null");
      common::milog::MiLogStream::~MiLogStream(&v47);
LABEL_108:
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 176));
LABEL_109:
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 144));
LABEL_110:
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 112));
      goto LABEL_111;
    }
    *(_BYTE *)(v2 + 48) = 0;
    v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
    __f.__center = center;
    __f.__is_avatar_inside = (bool *)(v2 + 48);
    __f.__this = this;
    v40.__this = this;
    v40.__is_avatar_inside = (bool *)(v2 + 48);
    v40.__center = center;
    std::function<ForeachPolicy ()(Player &)>::function<SealKeepAliveBattle::onTimer(unsigned int)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v47,
      v40);
    Scene::foreachPlayer(v15, (std::function<ForeachPolicy(Player&)> *)&v47);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v47);
    v16 = *(_BYTE *)(v2 + 48);
    if ( *(char *)(((unsigned __int64)&this->is_inside_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_inside_);
    this->is_inside_ = v16;
    if ( last_inside && this->is_inside_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      progress = this->progress_;
      if ( *(_BYTE *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      in_add = this->param_.in_add;
      v19 = *(_DWORD *)(v2 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3)
                                                            + 0x7FFF8000) )
      {
        v19 = (_DWORD)this + 84;
        __asan_report_load4();
      }
      this->progress_ = progress + in_add * (v19 - this->last_tick_time_);
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/gadget_seal_comp.cpp",
        "onTimer",
        356);
      v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v47, (const char (*)[7])"time: ");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 64));
      v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])" progress_: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->progress_);
      common::milog::MiLogStream::~MiLogStream(&v47);
      if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v23 = this->progress_;
      if ( *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( v23 >= this->max_progress_ )
      {
        v24 = this;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v25 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
        if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
          v25 = __asan_report_load8();
        (*(void (__fastcall **)(SealKeepAliveBattle *, __int64))v25)(v24, 1LL);
        goto LABEL_108;
      }
    }
    else if ( !last_inside )
    {
      if ( *(char *)(((unsigned __int64)&this->is_inside_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_inside_);
      if ( !this->is_inside_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( this->progress_ )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->fail_start_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->fail_start_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->fail_start_time_);
          }
          this->fail_start_time_ = 0;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( !this->progress_ )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->fail_start_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->fail_start_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( !this->fail_start_time_ )
            this->fail_start_time_ = *(_DWORD *)(v2 + 64);
        }
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/gadget_seal_comp.cpp",
          "onTimer",
          374);
        v26 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v47, (const char (*)[7])"time: ");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v2 + 64));
        v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v27, (const char (*)[13])" progress_: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->progress_);
        common::milog::MiLogStream::~MiLogStream(&v47);
        if ( *(_BYTE *)(((unsigned __int64)&this->fail_start_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->fail_start_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( this->fail_start_time_ && this->fail_start_time_ < *(_DWORD *)(v2 + 64) )
        {
          v29 = *(_DWORD *)(v2 + 64) - this->fail_start_time_;
          if ( *(_BYTE *)(((unsigned __int64)&this->param_.fail_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->param_.fail_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( v29 >= this->param_.fail_time )
          {
            v30 = this;
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v31 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
            if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
              v31 = __asan_report_load8();
            (*(void (__fastcall **)(SealKeepAliveBattle *, _QWORD))v31)(v30, 0LL);
            goto LABEL_108;
          }
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( this->progress_ )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->param_.out_sub >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param_.out_sub >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          out_sub = this->param_.out_sub;
          v33 = *(_DWORD *)(v2 + 64);
          if ( *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          delta = out_sub * (v33 - this->last_tick_time_);
          if ( delta >= this->progress_ )
            v34 = 0;
          else
            v34 = this->progress_ - delta;
          if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&this->progress_);
          }
          this->progress_ = v34;
        }
      }
    }
    v35 = *(_DWORD *)(v2 + 64);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->last_tick_time_);
    }
    this->last_tick_time_ = v35;
    proto::SealBattleProgressNotify::SealBattleProgressNotify((proto::SealBattleProgressNotify *const)(v2 + 208));
    v36 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
    EntityId = Entity::getEntityId((const Entity *const)v36);
    proto::SealBattleProgressNotify::set_seal_entity_id((proto::SealBattleProgressNotify *const)(v2 + 208), EntityId);
    if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::SealBattleProgressNotify::set_progress((proto::SealBattleProgressNotify *const)(v2 + 208), this->progress_);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::SealBattleProgressNotify::set_max_progress(
      (proto::SealBattleProgressNotify *const)(v2 + 208),
      this->max_progress_);
    Radius = SealBattleBase::getRadius(this);
    proto::SealBattleProgressNotify::set_seal_radius((proto::SealBattleProgressNotify *const)(v2 + 208), Radius);
    v39 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
    Entity::notifyViewingPlayers<proto::SealBattleProgressNotify>(v39, (proto::SealBattleProgressNotify *)(v2 + 208), 1);
    proto::SealBattleProgressNotify::~SealBattleProgressNotify((proto::SealBattleProgressNotify *const)(v2 + 208));
    goto LABEL_108;
  }
  common::milog::MiLogStream::create(
    &v47,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/gadget/gadget_seal_comp.cpp",
    "onTimer",
    296);
  common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v47, (const char (*)[25])"player_wtr_.lock nullptr");
  common::milog::MiLogStream::~MiLogStream(&v47);
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(SealKeepAliveBattle *, _QWORD))v6)(v5, 0LL);
LABEL_111:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 80));
  if ( v48 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 341: range 000000001754C148-000000001754C3AA
ForeachPolicy __cdecl SealKeepAliveBattle::onTimer(unsigned int)::{lambda(Player &)#1}::operator()(
        const SealKeepAliveBattle::onTimer::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const Vector3 *center; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const Vector3 *Position; // rax
  float PlaneDistance; // xmm1_4
  SealKeepAliveBattle *this; // rax
  char v10; // al
  bool *is_avatar_inside; // rdx
  ForeachPolicy result; // eax
  char v13[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:343";
  *(_QWORD *)(v2 + 16) = SealKeepAliveBattle::onTimer(unsigned int)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getCurAvatar((Player *const)(v2 + 32));
  if ( !std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
    goto LABEL_13;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  center = __closure->__center;
  v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  Position = Entity::getPosition((const Entity *const)v6);
  PlaneDistance = getPlaneDistance(Position, center);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( (float)(int)this->radius_ > PlaneDistance )
    v10 = 1;
  else
LABEL_13:
    v10 = 0;
  if ( v10 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_avatar_inside >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    is_avatar_inside = __closure->__is_avatar_inside;
    if ( *(_BYTE *)(((unsigned __int64)is_avatar_inside >> 3) + 0x7FFF8000) != 0
      && ((__int64)__closure->__is_avatar_inside & 7) >= *(_BYTE *)(((unsigned __int64)is_avatar_inside >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_store1(__closure->__is_avatar_inside);
    }
    *is_avatar_inside = 1;
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
  if ( v13 == (char *)v2 )
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

// Line 397: range 000000001754D672-000000001754DBDB
void __cdecl SealKillMonsterBattle::onBattleBegin(SealKillMonsterBattle *const this, Player *player, Gadget *gadget)
{
  unsigned __int64 p_pending_que; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t Now; // esi
  Player *v7; // rax
  std::weak_ptr<SealKillMonsterBattle> *p_this_wtr; // [rsp+10h] [rbp-130h]
  std::weak_ptr<SealKillMonsterBattle> v10; // [rsp+30h] [rbp-110h] BYREF
  PlayerEventComp v11; // [rsp+40h] [rbp-100h] BYREF

  p_pending_que = (unsigned __int64)&v11.event_center_.context_.pending_que_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      p_pending_que = v4;
  }
  *(_QWORD *)p_pending_que = 1102416563LL;
  *(_QWORD *)(p_pending_que + 8) = "4 32 16 13 scene_ptr:399 64 16 13 owner_ptr:405 96 16 12 self_ptr:416 128 16 12 self_wtr:422";
  *(_QWORD *)(p_pending_que + 16) = SealKillMonsterBattle::onBattleBegin;
  v5 = (_DWORD *)(p_pending_que >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v11._M_weak_this._M_refcount,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/gadget_seal_comp.cpp",
    "onBattleBegin",
    398);
  common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
    (common::milog::MiLogStream *const)&v11._M_weak_this._M_refcount,
    (const char (*)[37])"SealKillMonsterBattle::onBattleBegin");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v11._M_weak_this._M_refcount);
  Entity::getScene((const Entity *const)(p_pending_que + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(p_pending_que + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v11._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_seal_comp.cpp",
      "onBattleBegin",
      402);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      (common::milog::MiLogStream *const)&v11._M_weak_this._M_refcount,
      (const char (*)[25])"gadget.getScene() failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v11._M_weak_this._M_refcount);
  }
  else
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_pending_que + 32));
    Scene::getOwnPlayer((const Scene *const)(p_pending_que + 64));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(p_pending_que + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v11._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "onBattleBegin",
        408);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)&v11._M_weak_this._M_refcount,
        (const char (*)[31])"scene_ptr->getOwnPlayer failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v11._M_weak_this._M_refcount);
    }
    else
    {
      SealBattleBase::onBattleBegin(this, player, gadget);
      Now = common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->start_time_);
      }
      this->start_time_ = Now;
      toThisPtr<SealKillMonsterBattle>((SealKillMonsterBattle *)(p_pending_que + 96));
      if ( std::operator==<SealKillMonsterBattle>(
             (const std::shared_ptr<SealKillMonsterBattle> *)(p_pending_que + 96),
             0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v11._M_weak_this._M_refcount,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget_seal_comp.cpp",
          "onBattleBegin",
          419);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          (common::milog::MiLogStream *const)&v11._M_weak_this._M_refcount,
          (const char (*)[21])"onBattleBegin failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v11._M_weak_this._M_refcount);
      }
      else
      {
        std::weak_ptr<SealKillMonsterBattle>::weak_ptr<SealKillMonsterBattle,void>(
          (std::weak_ptr<SealKillMonsterBattle> *const)(p_pending_que + 128),
          (const std::shared_ptr<SealKillMonsterBattle> *)(p_pending_que + 96));
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_pending_que + 64));
        p_this_wtr = (std::weak_ptr<SealKillMonsterBattle> *)Player::getEventComp(v7);
        std::weak_ptr<SealKillMonsterBattle>::weak_ptr(
          &v10,
          (const std::weak_ptr<SealKillMonsterBattle> *)(p_pending_que + 128));
        PlayerEventComp::registerObserver<SealKillMonsterBattle,MonsterDieEvent>(
          &v11,
          p_this_wtr,
          (void (*)(SealKillMonsterBattle *, const MonsterDieEvent *))&v10);
        std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v11);
        std::weak_ptr<SealKillMonsterBattle>::~weak_ptr(&v10);
        std::weak_ptr<SealKillMonsterBattle>::~weak_ptr((std::weak_ptr<SealKillMonsterBattle> *const)(p_pending_que + 128));
      }
      std::shared_ptr<SealKillMonsterBattle>::~shared_ptr((std::shared_ptr<SealKillMonsterBattle> *const)(p_pending_que + 96));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(p_pending_que + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(p_pending_que + 32));
  if ( &v11.event_center_.context_.pending_que_ == (std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >> *)p_pending_que )
  {
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)p_pending_que = 1172321806LL;
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 428: range 000000001754DBDC-000000001754DDDE
void __cdecl SealKillMonsterBattle::onMonsterDie(SealKillMonsterBattle *const this, const MonsterDieEvent *event)
{
  uint32_t group_id; // ecx
  uint32_t v3; // ecx
  SealKillMonsterBattle *v4; // rdx
  unsigned __int64 v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  group_id = event->group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->param_.monster_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param_.monster_group_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( group_id == this->param_.monster_group_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v3 = ++this->progress_;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v3 >= this->max_progress_ )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/gadget_seal_comp.cpp",
        "onMonsterDie",
        438);
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        &v6,
        (const char (*)[49])"SealKillMonsterBattle progress_ >= max_progress_");
      common::milog::MiLogStream::~MiLogStream(&v6);
      v4 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      (*(void (__fastcall **)(SealKillMonsterBattle *, __int64))v5)(v4, 1LL);
    }
  }
};

// Line 444: range 000000001754E044-000000001754EAFA
void __cdecl SealKillMonsterBattle::onTimer(SealKillMonsterBattle *const this, uint32_t now)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  SealKillMonsterBattle *v5; // rdx
  unsigned __int64 v6; // rax
  SealKillMonsterBattle *v7; // rdx
  unsigned __int64 v8; // rax
  uint32_t v9; // ecx
  SealKillMonsterBattle *v10; // rdx
  unsigned __int64 v11; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Scene *v13; // r14
  SealKillMonsterBattle *v14; // rdx
  unsigned __int64 v15; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t EntityId; // eax
  uint32_t start_time; // ecx
  uint32_t Radius; // eax
  Entity *v20; // rax
  SealKillMonsterBattle::onTimer::<lambda(Player&)> v21; // [rsp-20h] [rbp-1B0h]
  const Vector3 *center; // [rsp+18h] [rbp-178h]
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-150h] BYREF
  char v24[304]; // [rsp+60h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 20 is_avatar_inside:481 48 16 14 player_ptr:445 80 16 14 avatar_ptr:452 112 16 14 gadget_"
                        "ptr:459 144 16 13 scene_ptr:475 176 40 10 notify:500";
  *(_QWORD *)(v2 + 16) = SealKillMonsterBattle::onTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 48));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_seal_comp.cpp",
      "onTimer",
      448);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v23,
      (const char (*)[25])"player_wtr_.lock nullptr");
    common::milog::MiLogStream::~MiLogStream(&v23);
    v5 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    (*(void (__fastcall **)(SealKillMonsterBattle *, _QWORD))v6)(v5, 0LL);
  }
  else
  {
    std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    Player::getCurAvatar((Player *const)(v2 + 80));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "onTimer",
        455);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v23,
        (const char (*)[33])"player_ptr->getCurAvatar nullptr");
      common::milog::MiLogStream::~MiLogStream(&v23);
      v7 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      (*(void (__fastcall **)(SealKillMonsterBattle *, _QWORD))v8)(v7, 0LL);
    }
    else
    {
      std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 112));
      if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 112), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget_seal_comp.cpp",
          "onTimer",
          462);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v23, (const char (*)[20])"gadget_wtr_ nullptr");
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( now <= this->start_time_ )
          goto LABEL_29;
        v9 = now - this->start_time_;
        if ( *(_BYTE *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( v9 <= this->param_.kill_time )
        {
LABEL_29:
          v12 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          center = Entity::getPosition((const Entity *const)v12);
          std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          Entity::getScene((const Entity *const)(v2 + 144));
          if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 144), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/gadget/gadget_seal_comp.cpp",
              "onTimer",
              478);
            common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v23, (const char (*)[14])"Scene is null");
            common::milog::MiLogStream::~MiLogStream(&v23);
          }
          else
          {
            *(_BYTE *)(v2 + 32) = 0;
            v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            v21.__this = this;
            v21.__is_avatar_inside = (bool *)(v2 + 32);
            v21.__center = center;
            std::function<ForeachPolicy ()(Player &)>::function<SealKillMonsterBattle::onTimer(unsigned int)::{lambda(Player &)#1},void,void>(
              (std::function<ForeachPolicy(Player&)> *const)&v23,
              v21);
            Scene::foreachPlayer(v13, (std::function<ForeachPolicy(Player&)> *)&v23);
            std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v23);
            if ( *(_BYTE *)(v2 + 32) != 1 )
            {
              common::milog::MiLogStream::create(
                &v23,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/gadget/gadget_seal_comp.cpp",
                "onTimer",
                495);
              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v23,
                (const char (*)[36])"SealKillMonsterBattle outof center!");
              common::milog::MiLogStream::~MiLogStream(&v23);
              v14 = this;
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v15 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
              if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
                v15 = __asan_report_load8();
              (*(void (__fastcall **)(SealKillMonsterBattle *, _QWORD))v15)(v14, 0LL);
            }
            else
            {
              proto::SealBattleProgressNotify::SealBattleProgressNotify((proto::SealBattleProgressNotify *const)(v2 + 176));
              v16 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
              EntityId = Entity::getEntityId((const Entity *const)v16);
              proto::SealBattleProgressNotify::set_seal_entity_id(
                (proto::SealBattleProgressNotify *const)(v2 + 176),
                EntityId);
              if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              proto::SealBattleProgressNotify::set_progress(
                (proto::SealBattleProgressNotify *const)(v2 + 176),
                this->progress_);
              if ( *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              proto::SealBattleProgressNotify::set_max_progress(
                (proto::SealBattleProgressNotify *const)(v2 + 176),
                this->max_progress_);
              if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              start_time = this->start_time_;
              if ( *(_BYTE *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              proto::SealBattleProgressNotify::set_end_time(
                (proto::SealBattleProgressNotify *const)(v2 + 176),
                start_time + this->param_.kill_time);
              Radius = SealBattleBase::getRadius(this);
              proto::SealBattleProgressNotify::set_seal_radius(
                (proto::SealBattleProgressNotify *const)(v2 + 176),
                Radius);
              v20 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
              Entity::notifyViewingPlayers<proto::SealBattleProgressNotify>(
                v20,
                (proto::SealBattleProgressNotify *)(v2 + 176),
                1);
              proto::SealBattleProgressNotify::~SealBattleProgressNotify((proto::SealBattleProgressNotify *const)(v2 + 176));
            }
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 144));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/gadget/gadget_seal_comp.cpp",
            "onTimer",
            469);
          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v23,
            (const char (*)[41])"SealKillMonsterBattle timeout and failed");
          common::milog::MiLogStream::~MiLogStream(&v23);
          v10 = this;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v11 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
          if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8();
          (*(void (__fastcall **)(SealKillMonsterBattle *, _QWORD))v11)(v10, 0LL);
        }
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 112));
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 80));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 48));
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 482: range 000000001754DDE0-000000001754E042
ForeachPolicy __cdecl SealKillMonsterBattle::onTimer(unsigned int)::{lambda(Player &)#1}::operator()(
        const SealKillMonsterBattle::onTimer::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const Vector3 *center; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const Vector3 *Position; // rax
  float PlaneDistance; // xmm1_4
  SealKillMonsterBattle *this; // rax
  char v10; // al
  bool *is_avatar_inside; // rdx
  ForeachPolicy result; // eax
  char v13[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:484";
  *(_QWORD *)(v2 + 16) = SealKillMonsterBattle::onTimer(unsigned int)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getCurAvatar((Player *const)(v2 + 32));
  if ( !std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
    goto LABEL_13;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  center = __closure->__center;
  v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  Position = Entity::getPosition((const Entity *const)v6);
  PlaneDistance = getPlaneDistance(Position, center);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( (float)(int)this->radius_ > PlaneDistance )
    v10 = 1;
  else
LABEL_13:
    v10 = 0;
  if ( v10 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_avatar_inside >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    is_avatar_inside = __closure->__is_avatar_inside;
    if ( *(_BYTE *)(((unsigned __int64)is_avatar_inside >> 3) + 0x7FFF8000) != 0
      && ((__int64)__closure->__is_avatar_inside & 7) >= *(_BYTE *)(((unsigned __int64)is_avatar_inside >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_store1(__closure->__is_avatar_inside);
    }
    *is_avatar_inside = 1;
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
  if ( v13 == (char *)v2 )
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

// Line 510: range 000000001754EAFC-000000001754F28D
void __cdecl SealEnergyChargeBattle::onBattleBegin(SealEnergyChargeBattle *const this, Player *player, Gadget *gadget)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t Now; // edi
  Player *v9; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *v11; // rax
  PlayerEventComp *EventComp; // r14
  std::weak_ptr<SealEnergyChargeBattle> *p_this_wtr; // [rsp+10h] [rbp-190h]
  std::weak_ptr<SealEnergyChargeBattle> __args_1; // [rsp+3Ch] [rbp-164h] BYREF
  std::string __lhs; // [rsp+50h] [rbp-150h] BYREF
  common::milog::MiLogStream v18; // [rsp+70h] [rbp-130h] BYREF
  char v19[272]; // [rsp+90h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 16 13 scene_ptr:512 64 16 13 owner_ptr:518 96 16 12 self_ptr:532 128 16 12 self_wtr:539 160"
                        " 16 14 gadget_ptr:543 192 16 13 event_ptr:546";
  *(_QWORD *)(v3 + 16) = SealEnergyChargeBattle::onBattleBegin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/gadget_seal_comp.cpp",
    "onBattleBegin",
    511);
  common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
    &v18,
    (const char (*)[38])"SealEnergyChargeBattle::onBattleBegin");
  common::milog::MiLogStream::~MiLogStream(&v18);
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_seal_comp.cpp",
      "onBattleBegin",
      515);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v18,
      (const char (*)[25])"gadget.getScene() failed");
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Scene::getOwnPlayer((const Scene *const)(v3 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "onBattleBegin",
        521);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v18,
        (const char (*)[31])"scene_ptr->getOwnPlayer failed");
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      BasicComp = Player::getBasicComp(v6);
      PlayerBasicComp::getNextTransNo[abi:cxx11](&__lhs, BasicComp);
      std::operator+<char>((std::string *)&v18, &__lhs, "_SealEnergyChargeBattle");
      std::string::operator=(&this->transaction_no_, &v18);
      std::string::~string(&v18);
      std::string::~string(&__lhs);
      SealBattleBase::onBattleBegin(this, player, gadget);
      Now = common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
      {
        Now = (_DWORD)this + 92;
        __asan_report_store4(&this->start_time_);
      }
      this->start_time_ = Now;
      toThisPtr<SealEnergyChargeBattle>((SealEnergyChargeBattle *)(v3 + 96));
      if ( std::operator==<SealEnergyChargeBattle>(0LL, (const std::shared_ptr<SealEnergyChargeBattle> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget_seal_comp.cpp",
          "onBattleBegin",
          535);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v18,
          (const char (*)[21])"onBattleBegin failed");
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      else
      {
        std::weak_ptr<SealEnergyChargeBattle>::weak_ptr<SealEnergyChargeBattle,void>(
          (std::weak_ptr<SealEnergyChargeBattle> *const)(v3 + 128),
          (const std::shared_ptr<SealEnergyChargeBattle> *)(v3 + 96));
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_this_wtr = (std::weak_ptr<SealEnergyChargeBattle> *)Player::getEventComp(v9);
        std::weak_ptr<SealEnergyChargeBattle>::weak_ptr(
          (std::weak_ptr<SealEnergyChargeBattle> *const)((char *)&__args_1._M_ptr + 4),
          (const std::weak_ptr<SealEnergyChargeBattle> *)(v3 + 128));
        PlayerEventComp::registerObserver<SealEnergyChargeBattle,MonsterDieEvent>(
          (PlayerEventComp *const)(v3 + 192),
          p_this_wtr,
          (void (*)(SealEnergyChargeBattle *, const MonsterDieEvent *))((char *)&__args_1._M_ptr + 4));
        std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)(v3 + 192));
        std::weak_ptr<SealEnergyChargeBattle>::~weak_ptr((std::weak_ptr<SealEnergyChargeBattle> *const)((char *)&__args_1._M_ptr + 4));
        std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v3 + 160));
        if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 160)) )
        {
          v10 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          LODWORD(__args_1._M_ptr) = Entity::getGroupId((const Entity *const)v10);
          common::tools::perf::make_shared<SealEnergyChargeBattleBeginEvent,unsigned int,std::weak_ptr<SealEnergyChargeBattle> &>(
            (unsigned int *)&__args_1._M_ptr + 1,
            &__args_1,
            (unsigned int *)(v3 + 128),
            &__args_1);
          std::shared_ptr<BaseEvent>::shared_ptr<SealEnergyChargeBattleBeginEvent,void>(
            (std::shared_ptr<BaseEvent> *const)(v3 + 192),
            (std::shared_ptr<SealEnergyChargeBattleBeginEvent> *)((char *)&__args_1._M_ptr + 4));
          std::shared_ptr<SealEnergyChargeBattleBeginEvent>::~shared_ptr((std::shared_ptr<SealEnergyChargeBattleBeginEvent> *const)((char *)&__args_1._M_ptr + 4));
          v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          EventComp = Player::getEventComp(v11);
          std::shared_ptr<BaseEvent>::shared_ptr(
            (std::shared_ptr<BaseEvent> *const)((char *)&__args_1._M_ptr + 4),
            (const std::shared_ptr<BaseEvent> *)(v3 + 192));
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)((char *)&__args_1._M_ptr + 4));
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)((char *)&__args_1._M_ptr + 4));
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 192));
        }
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 160));
        std::weak_ptr<SealEnergyChargeBattle>::~weak_ptr((std::weak_ptr<SealEnergyChargeBattle> *const)(v3 + 128));
      }
      std::shared_ptr<SealEnergyChargeBattle>::~shared_ptr((std::shared_ptr<SealEnergyChargeBattle> *const)(v3 + 96));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 552: range 000000001754F28E-000000001754F681
void __fastcall SealEnergyChargeBattle::onBattleEnd(SealEnergyChargeBattle *const this, char is_win)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned int *v6; // r8
  bool *v7; // r9
  Player *v8; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int GroupId; // [rsp+18h] [rbp-108h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-104h]
  std::shared_ptr<SealEnergyChargeBattleEndEvent> __r; // [rsp+20h] [rbp-100h] BYREF
  char v13[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 10 is_win:551 48 4 13 cost_time:567 64 16 14 gadget_ptr:553 96 16 13 scene_ptr:558 128 16"
                        " 13 owner_ptr:563 160 16 13 event_ptr:573";
  *(_QWORD *)(v2 + 16) = SealEnergyChargeBattle::onBattleEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  *(_BYTE *)(v2 + 32) = is_win;
  std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 64));
  if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 64)) )
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Entity::getScene((const Entity *const)(v2 + 96));
    if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Scene::getOwnPlayer((const Scene *const)(v2 + 128));
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
      {
        *(_DWORD *)(v2 + 48) = 0;
        now = common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( now > this->start_time_ )
          *(_DWORD *)(v2 + 48) = now - this->start_time_;
        v5 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        GroupId = Entity::getGroupId((const Entity *const)v5);
        common::tools::perf::make_shared<SealEnergyChargeBattleEndEvent,unsigned int,unsigned int &,bool &>(
          (unsigned int *)&__r,
          &GroupId,
          (bool *)(v2 + 48),
          (unsigned int *)(v2 + 32),
          v6,
          v7);
        std::shared_ptr<BaseEvent>::shared_ptr<SealEnergyChargeBattleEndEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v2 + 160),
          &__r);
        std::shared_ptr<SealEnergyChargeBattleEndEvent>::~shared_ptr(&__r);
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        EventComp = Player::getEventComp(v8);
        std::shared_ptr<BaseEvent>::shared_ptr(
          (std::shared_ptr<BaseEvent> *const)&__r,
          (const std::shared_ptr<BaseEvent> *)(v2 + 160));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 160));
      }
      SealBattleBase::onBattleEnd(this, *(_BYTE *)(v2 + 32));
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 64));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 581: range 000000001754F90C-0000000017550DF8
void __fastcall SealEnergyChargeBattle::onTimer(SealEnergyChargeBattle *const this, uint32_t now, double a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  bool v8; // r14
  unsigned __int64 v9; // rax
  uint32_t v10; // ecx
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  const Vector3 *Position; // rax
  Player *v14; // rax
  Player *v15; // rax
  PlayerSceneComp *SceneComp; // rax
  const Vector3 *DestPos; // rax
  unsigned __int64 v18; // rax
  Scene *v19; // r14
  char v20; // cl
  int v21; // ecx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  uint32_t v25; // ecx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rdx
  uint32_t *p_source_entity_id; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  uint32_t ConfigId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rdx
  int32_t *p_param1; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rdx
  uint32_t *p_uid; // rax
  Group *v41; // rax
  uint32_t v42; // ecx
  uint32_t progress; // ecx
  unsigned __int64 v44; // rax
  SealEnergyChargeBattle::onTimer::<lambda(Player&)> v45; // [rsp-20h] [rbp-1E0h]
  bool last_inside; // [rsp+1Bh] [rbp-1A5h]
  uint32_t delta_time; // [rsp+1Ch] [rbp-1A4h]
  uint32_t delta_progress; // [rsp+20h] [rbp-1A0h]
  uint32_t delta_progress_0; // [rsp+24h] [rbp-19Ch]
  const Vector3 *center; // [rsp+28h] [rbp-198h]
  common::milog::MiLogStream v51; // [rsp+50h] [rbp-170h] BYREF
  char v52[336]; // [rsp+70h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 1 20 is_avatar_inside:661 48 4 7 now:580 64 16 14 player_ptr:593 96 16 14 avatar_ptr:601 12"
                        "8 16 14 gadget_ptr:609 160 16 18 dest_scene_ptr:642 192 16 13 scene_ptr:654 224 16 11 evt_ptr:69"
                        "4 256 16 13 group_ptr:697";
  *(_QWORD *)(v3 + 16) = SealEnergyChargeBattle::onTimer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -202178560;
  *(_DWORD *)(v3 + 48) = now;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    a3 = __asan_report_load4();
  }
  if ( !this->last_tick_time_ )
  {
    this->last_tick_time_ = *(_DWORD *)(v3 + 48);
    goto LABEL_116;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    a3 = __asan_report_load4();
  }
  if ( this->last_tick_time_ < *(_DWORD *)(v3 + 48) )
  {
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "onTimer",
        596);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v51, (const char (*)[15])"player is null");
      common::milog::MiLogStream::~MiLogStream(&v51);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v6 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      (*(void (__fastcall **)(SealEnergyChargeBattle *const, _QWORD))v6)(this, 0LL);
      goto LABEL_115;
    }
    std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Player::getCurAvatar((Player *const)(v3 + 96));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "onTimer",
        604);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v51, (const char (*)[19])off_2612B500);
      common::milog::MiLogStream::~MiLogStream(&v51);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v7 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      (*(void (__fastcall **)(SealEnergyChargeBattle *const, _QWORD))v7)(this, 0LL);
      goto LABEL_114;
    }
    std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v3 + 128));
    if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "onTimer",
        612);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v51, (const char (*)[15])"gadget is null");
      common::milog::MiLogStream::~MiLogStream(&v51);
    }
    else
    {
      std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      Entity::getScene((const Entity *const)(v3 + 256));
      std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      Entity::getScene((const Entity *const)(v3 + 224));
      v8 = std::operator!=<Scene,Scene>(
             (const std::shared_ptr<Scene> *)(v3 + 224),
             (const std::shared_ptr<Scene> *)(v3 + 256));
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 224));
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 256));
      if ( v8 )
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget_seal_comp.cpp",
          "onTimer",
          619);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          &v51,
          (const char (*)[37])"avatar_ptr->getScene() != getScene()");
        common::milog::MiLogStream::~MiLogStream(&v51);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v9 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8();
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
        {
          a3 = __asan_report_load4();
        }
        if ( this->start_time_ >= *(_DWORD *)(v3 + 48) )
          goto LABEL_42;
        v10 = *(_DWORD *)(v3 + 48) - this->start_time_;
        if ( *(_BYTE *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) <= 3 )
        {
          a3 = __asan_report_load4();
        }
        if ( v10 <= this->param_.battle_time )
        {
LABEL_42:
          v11 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          center = Entity::getPosition((const Entity *const)v11);
          v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          Position = Entity::getPosition((const Entity *const)v12);
          *(float *)&a3 = getPlaneDistance(Position, center);
          if ( *(float *)&a3 < 50.0 )
          {
            v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            Player::getSceneComp(v14);
            PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v3 + 160));
            if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 160))
              && (v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
                  SceneComp = Player::getSceneComp(v15),
                  DestPos = PlayerSceneComp::getDestPos(SceneComp),
                  *(float *)&a3 = getPlaneDistance(DestPos, center),
                  *(float *)&a3 >= 50.0) )
            {
              common::milog::MiLogStream::create(
                &v51,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/gadget/gadget_seal_comp.cpp",
                "onTimer",
                647);
              common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                &v51,
                (const char (*)[57])"SealEnergyChargeBattle battle invalid by player transfer");
              common::milog::MiLogStream::~MiLogStream(&v51);
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v18 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
              if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
                v18 = __asan_report_load8();
              (*(void (__fastcall **)(SealEnergyChargeBattle *const, _QWORD))v18)(this, 0LL);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->is_inside_ >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_inside_ >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_load1(&this->is_inside_);
              }
              last_inside = this->is_inside_;
              std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              Entity::getScene((const Entity *const)(v3 + 192));
              if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 192)) )
              {
                common::milog::MiLogStream::create(
                  &v51,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/gadget/gadget_seal_comp.cpp",
                  "onTimer",
                  657);
                common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  &v51,
                  (const char (*)[14])"scene is null");
                common::milog::MiLogStream::~MiLogStream(&v51);
              }
              else
              {
                *(_BYTE *)(v3 + 32) = 0;
                v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                v45.__this = this;
                v45.__is_avatar_inside = (bool *)(v3 + 32);
                v45.__center = center;
                std::function<ForeachPolicy ()(Player &)>::function<SealEnergyChargeBattle::onTimer(unsigned int)::{lambda(Player &)#1},void,void>(
                  (std::function<ForeachPolicy(Player&)> *const)&v51,
                  v45);
                Scene::foreachPlayer(v19, (std::function<ForeachPolicy(Player&)> *)&v51);
                std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v51);
                v20 = *(_BYTE *)(v3 + 32);
                if ( *(_BYTE *)(((unsigned __int64)&this->is_inside_ >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_inside_ >> 3)
                                                                     + 0x7FFF8000) )
                {
                  __asan_report_store1(&this->is_inside_);
                }
                this->is_inside_ = v20;
                v21 = *(_DWORD *)(v3 + 48);
                if ( *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  a3 = __asan_report_load4();
                }
                delta_time = v21 - this->last_tick_time_;
                if ( last_inside && this->is_inside_ )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->param_.auto_charge >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->param_.auto_charge >> 3) + 0x7FFF8000) <= 3 )
                  {
                    a3 = __asan_report_load4();
                  }
                  delta_progress = delta_time * this->param_.auto_charge;
                  if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3)
                                                                        + 0x7FFF8000) )
                  {
                    a3 = __asan_report_load4();
                  }
                  this->progress_ += delta_progress;
                  common::milog::MiLogStream::create(
                    &v51,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/gadget/gadget_seal_comp.cpp",
                    "onTimer",
                    682);
                  v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v51, (const char (*)[7])"time: ");
                  v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v22,
                          (const unsigned int *)(v3 + 48));
                  v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                          v23,
                          (const char (*)[13])" progress_: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->progress_);
                  common::milog::MiLogStream::~MiLogStream(&v51);
                }
                else
                {
                  if ( last_inside )
                    goto LABEL_84;
                  if ( *(_BYTE *)(((unsigned __int64)&this->is_inside_ >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_inside_ >> 3)
                                                                       + 0x7FFF8000) )
                  {
                    __asan_report_load1(&this->is_inside_);
                  }
                  if ( !this->is_inside_ )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->param_.auto_decline >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param_.auto_decline >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      a3 = __asan_report_load4();
                    }
                    delta_progress_0 = delta_time * this->param_.auto_decline;
                    if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      a3 = __asan_report_load4();
                    }
                    if ( delta_progress_0 >= this->progress_ )
                      v25 = 0;
                    else
                      v25 = this->progress_ - delta_progress_0;
                    if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store4(&this->progress_);
                    }
                    this->progress_ = v25;
                    common::milog::MiLogStream::create(
                      &v51,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/gadget/gadget_seal_comp.cpp",
                      "onTimer",
                      689);
                    v26 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                            &v51,
                            (const char (*)[7])"time: ");
                    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v26,
                            (const unsigned int *)(v3 + 48));
                    v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                            v27,
                            (const char (*)[13])" progress_: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->progress_);
                    common::milog::MiLogStream::~MiLogStream(&v51);
                  }
                  else
                  {
LABEL_84:
                    if ( last_inside )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&this->is_inside_ >> 3) + 0x7FFF8000) != 0
                        && (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_inside_ >> 3)
                                                                           + 0x7FFF8000) )
                      {
                        __asan_report_load1(&this->is_inside_);
                      }
                      if ( !this->is_inside_ )
                      {
                        EventUtil::createEvent((data::EventType)(v3 + 224));
                        if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v3 + 224), 0LL) )
                        {
                          std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                          Entity::getGroup((const Entity *const)(v3 + 256));
                          if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v3 + 256), 0LL) )
                          {
                            v29 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                            EntityId = Entity::getEntityId((const Entity *const)v29);
                            v31 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                            p_source_entity_id = &v31->source_entity_id;
                            if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
                              && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store4(p_source_entity_id);
                            }
                            v31->source_entity_id = EntityId;
                            v33 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                            ConfigId = Entity::getConfigId((const Entity *const)v33);
                            v35 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                            p_param1 = &v35->param1;
                            if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
                              && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3)
                                                                                         + 0x7FFF8000) )
                            {
                              __asan_report_store4(p_param1);
                            }
                            v35->param1 = ConfigId;
                            v37 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                            Uid = Player::getUid(v37);
                            v39 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                            p_uid = &v39->uid;
                            if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
                              && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3)
                                                                                      + 0x7FFF8000) )
                            {
                              __asan_report_store4(p_uid);
                            }
                            v39->uid = Uid;
                            v41 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                            Group::handleEvent(v41, (EventPtr *)(v3 + 224));
                          }
                          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 256));
                        }
                        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 224));
                      }
                    }
                  }
                }
                v42 = *(_DWORD *)(v3 + 48);
                if ( *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_store4(&this->last_tick_time_);
                }
                this->last_tick_time_ = v42;
                SealEnergyChargeBattle::notifySealBattleProgress(this);
                if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3)
                                                                      + 0x7FFF8000) )
                {
                  a3 = __asan_report_load4();
                }
                progress = this->progress_;
                if ( *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  a3 = __asan_report_load4();
                }
                if ( progress >= this->max_progress_ )
                {
                  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  v44 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
                  if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
                    v44 = __asan_report_load8();
                  (*(void (__fastcall **)(SealEnergyChargeBattle *const, __int64, double))v44)(this, 1LL, a3);
                }
              }
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 192));
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 160));
            goto LABEL_113;
          }
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/gadget/gadget_seal_comp.cpp",
            "onTimer",
            636);
          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v51,
            (const char (*)[38])"SealEnergyChargeBattle battle invalid");
          common::milog::MiLogStream::~MiLogStream(&v51);
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v9 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
          if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
            v9 = __asan_report_load8();
        }
        else
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/gadget/gadget_seal_comp.cpp",
            "onTimer",
            627);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v51,
            (const char (*)[42])"SealEnergyChargeBattle timeout and failed");
          common::milog::MiLogStream::~MiLogStream(&v51);
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v9 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
          if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
            v9 = __asan_report_load8();
        }
      }
      (*(void (__fastcall **)(SealEnergyChargeBattle *const, _QWORD))v9)(this, 0LL);
    }
LABEL_113:
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 128));
LABEL_114:
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
LABEL_115:
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
LABEL_116:
  if ( v52 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 662: range 000000001754F682-000000001754F90B
ForeachPolicy __cdecl SealEnergyChargeBattle::onTimer(unsigned int)::{lambda(Player &)#1}::operator()(
        const SealEnergyChargeBattle::onTimer::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const Vector3 *center; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const Vector3 *Position; // rax
  float PlaneDistance; // xmm1_4
  SealEnergyChargeBattle *this; // rax
  char v11; // al
  bool *is_avatar_inside; // rdx
  ForeachPolicy v13; // r14d
  ForeachPolicy result; // eax
  char v15[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:664";
  *(_QWORD *)(v2 + 16) = SealEnergyChargeBattle::onTimer(unsigned int)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getCurAvatar((Player *const)(v2 + 32));
  if ( !std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 32)) )
    goto LABEL_14;
  v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( Creature::getLifeState(v5) != LIFE_ALIVE )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  center = __closure->__center;
  v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  Position = Entity::getPosition((const Entity *const)v7);
  PlaneDistance = getPlaneDistance(Position, center);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( (float)(int)this->radius_ > PlaneDistance )
    v11 = 1;
  else
LABEL_14:
    v11 = 0;
  if ( v11 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_avatar_inside >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    is_avatar_inside = __closure->__is_avatar_inside;
    if ( *(_BYTE *)(((unsigned __int64)is_avatar_inside >> 3) + 0x7FFF8000) != 0
      && ((__int64)__closure->__is_avatar_inside & 7) >= *(_BYTE *)(((unsigned __int64)is_avatar_inside >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_store1(__closure->__is_avatar_inside);
    }
    *is_avatar_inside = 1;
    v13 = FOREACH_BREAK;
  }
  else
  {
    v13 = FOREACH_CONTINUE;
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  result = v13;
  if ( v15 == (char *)v2 )
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

// Line 718: range 0000000017550DFA-000000001755171F
void __cdecl SealEnergyChargeBattle::onMonsterDie(SealEnergyChargeBattle *const this, const MonsterDieEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t group_id; // ecx
  uint32_t v6; // ecx
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t kill_score; // eax
  uint32_t *p_default_kill_charge; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t progress; // ecx
  unsigned __int64 v15; // rax
  uint32_t add_progress; // [rsp+14h] [rbp-DCh]
  const MonsterScriptConfig *monster_script_config_ptr; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 gadget_ptr:724 64 16 13 scene_ptr:731 96 16 15 monster_ptr:738";
  *(_QWORD *)(v2 + 16) = SealEnergyChargeBattle::onMonsterDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  group_id = event->group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->param_.monster_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param_.monster_group_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( group_id == this->param_.monster_group_id )
  {
    std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 32));
    if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_seal_comp.cpp",
        "onMonsterDie",
        727);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v18, (const char (*)[15])"gadget is null");
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      Entity::getScene((const Entity *const)(v2 + 64));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget_seal_comp.cpp",
          "onMonsterDie",
          734);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v18, (const char (*)[14])"scene is null");
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      else
      {
        v6 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&event->entity_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->entity_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        Scene::findEntity<Monster>((const Scene *const)(v2 + 96), v6);
        if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/gadget_seal_comp.cpp",
            "onMonsterDie",
            741);
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v18, (const char (*)[18])"findEntity failed");
          common::milog::MiLogStream::~MiLogStream(&v18);
        }
        else
        {
          v7 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          monster_script_config_ptr = Monster::getMonsterScriptConfig(v7);
          if ( monster_script_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&monster_script_config_ptr->kill_score >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)monster_script_config_ptr - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_script_config_ptr->kill_score >> 3)
                                                                                       + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( monster_script_config_ptr->kill_score )
            {
              kill_score = monster_script_config_ptr->kill_score;
            }
            else
            {
              p_default_kill_charge = &this->param_.default_kill_charge;
              if ( *(_BYTE *)(((unsigned __int64)&this->param_.default_kill_charge >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 88) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param_.default_kill_charge >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              kill_score = *p_default_kill_charge;
            }
            add_progress = kill_score;
            if ( kill_score )
            {
              common::milog::MiLogStream::create(
                &v18,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/gadget/gadget_seal_comp.cpp",
                "onMonsterDie",
                759);
              v12 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                      &v18,
                      (const char (*)[56])"SealEnergyChargeBattle before add progress, progress_: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->progress_);
              common::milog::MiLogStream::~MiLogStream(&v18);
              if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              this->progress_ += add_progress;
              common::milog::MiLogStream::create(
                &v18,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/gadget/gadget_seal_comp.cpp",
                "onMonsterDie",
                761);
              v13 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                      &v18,
                      (const char (*)[55])"SealEnergyChargeBattle after add progress, progress_: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->progress_);
              common::milog::MiLogStream::~MiLogStream(&v18);
              SealEnergyChargeBattle::notifySealBattleProgress(this);
              if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              progress = this->progress_;
              if ( *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              if ( progress >= this->max_progress_ )
              {
                common::milog::MiLogStream::create(
                  &v18,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/gadget/gadget_seal_comp.cpp",
                  "onMonsterDie",
                  765);
                common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v18,
                  (const char (*)[50])"SealEnergyChargeBattle progress_ >= max_progress_");
                common::milog::MiLogStream::~MiLogStream(&v18);
                if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v15 = (unsigned __int64)(this->_vptr_SealBattleBase + 3);
                if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
                  v15 = __asan_report_load8();
                (*(void (__fastcall **)(SealEnergyChargeBattle *const, __int64))v15)(this, 1LL);
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v18,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/gadget/gadget_seal_comp.cpp",
                "onMonsterDie",
                755);
              v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      &v18,
                      (const char (*)[32])off_2612B7E0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &event->monster_id);
              common::milog::MiLogStream::~MiLogStream(&v18);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v18,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/gadget_seal_comp.cpp",
              "onMonsterDie",
              748);
            v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                   &v18,
                   (const char (*)[44])"getMonsterScriptConfig failed, monster_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &event->monster_id);
            common::milog::MiLogStream::~MiLogStream(&v18);
          }
        }
        std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 96));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  }
  if ( v19 == (char *)v2 )
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

// Line 771: range 0000000017551720-0000000017551B1B
void __cdecl SealEnergyChargeBattle::notifySealBattleProgress(SealEnergyChargeBattle *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t EntityId; // eax
  uint32_t start_time; // ecx
  Entity *v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-F0h] BYREF
  char v9[208]; // [rsp+30h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 14 gadget_ptr:772 80 40 10 notify:779";
  *(_QWORD *)(v1 + 16) = SealEnergyChargeBattle::notifySealBattleProgress;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v1 + 48));
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_seal_comp.cpp",
      "notifySealBattleProgress",
      775);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v8, (const char (*)[15])"gadget is null");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    proto::SealBattleProgressNotify::SealBattleProgressNotify((proto::SealBattleProgressNotify *const)(v1 + 80));
    v4 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    EntityId = Entity::getEntityId((const Entity *const)v4);
    proto::SealBattleProgressNotify::set_seal_entity_id((proto::SealBattleProgressNotify *const)(v1 + 80), EntityId);
    if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::SealBattleProgressNotify::set_progress((proto::SealBattleProgressNotify *const)(v1 + 80), this->progress_);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::SealBattleProgressNotify::set_max_progress(
      (proto::SealBattleProgressNotify *const)(v1 + 80),
      this->max_progress_);
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    start_time = this->start_time_;
    if ( *(_BYTE *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::SealBattleProgressNotify::set_end_time(
      (proto::SealBattleProgressNotify *const)(v1 + 80),
      start_time + this->param_.battle_time);
    if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::SealBattleProgressNotify::set_seal_radius((proto::SealBattleProgressNotify *const)(v1 + 80), this->radius_);
    v7 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    Entity::notifyViewingPlayers<proto::SealBattleProgressNotify>(v7, (proto::SealBattleProgressNotify *)(v1 + 80), 1);
    proto::SealBattleProgressNotify::~SealBattleProgressNotify((proto::SealBattleProgressNotify *const)(v1 + 80));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 48));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};
