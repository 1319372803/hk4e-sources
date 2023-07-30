// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/home_room_scene.cpp

// Line 22: range 0000000013171A48-0000000013171AF0
int32_t __cdecl HomeRoomScene::fromBin(HomeRoomScene *const this, const proto::SceneBin *scene_bin)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( !Scene::fromBin((Scene *const)this, scene_bin) )
    return 0;
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/home_room_scene.cpp",
    "fromBin",
    25);
  common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v3, (const char (*)[22])"Scene::fromBin failed");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return -1;
};

// Line 33: range 0000000013171AF2-0000000013171B9A
int32_t __cdecl HomeRoomScene::toBin(const HomeRoomScene *const this, proto::SceneBin *scene_bin)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( !Scene::toBin((const Scene *const)this, scene_bin) )
    return 0;
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/home_room_scene.cpp",
    "toBin",
    36);
  common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v3, (const char (*)[20])"Scene::toBin failed");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return -1;
};

// Line 45: range 0000000013171B9C-0000000013171CCE
int32_t __cdecl HomeRoomScene::constructComps(HomeRoomScene *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( EcsBase<Scene,SceneCompBase,12u>::addComp<SceneHomeBlockGroupComp>((EcsBase<Scene,SceneCompBase,12> *const)&this->baseclass_0[24]) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/home_room_scene.cpp",
      "constructComps",
      48);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v2,
      (const char (*)[38])"addComp SceneHomeBlockGroupComp fails");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Scene,SceneCompBase,12u>::addComp<SceneHomeComp>((EcsBase<Scene,SceneCompBase,12> *const)&this->baseclass_0[24]) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/home_room_scene.cpp",
      "constructComps",
      53);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v2,
      (const char (*)[28])"addComp SceneHomeComp fails");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    return RoomScene::constructComps(this);
  }
};

// Line 61: range 0000000013171CD0-0000000013171E06
int32_t __cdecl HomeRoomScene::init(HomeRoomScene *const this, const SceneInitParam *init_param)
{
  SceneHomeComp *HomeComp; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( Scene::init((Scene *const)this, init_param) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/home_room_scene.cpp",
      "init",
      64);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v4, (const char (*)[11])"init fails");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
  else
  {
    HomeComp = HomeRoomScene::getHomeComp(this);
    if ( SceneHomeComp::init(HomeComp) )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/home_room_scene.cpp",
        "init",
        69);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v4,
        (const char (*)[28])"scene_home_comp init failed");
      common::milog::MiLogStream::~MiLogStream(&v4);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 77: range 0000000013171E08-0000000013171F5C
void __cdecl HomeRoomScene::onTimer(HomeRoomScene *const this, uint64_t now_ms)
{
  unsigned __int64 HomeComp; // rax
  unsigned __int64 v3; // rdx
  HomeRoomScene *v4; // rdx
  unsigned __int64 v5; // rax
  uint32_t now; // [rsp+1Ch] [rbp-4h]

  Scene::onTimer((Scene *const)this, now_ms);
  now = now_ms / 0x3E8;
  HomeComp = (unsigned __int64)HomeRoomScene::getHomeComp(this);
  if ( *(_BYTE *)((HomeComp >> 3) + 0x7FFF8000) )
    HomeComp = __asan_report_load8(HomeComp);
  v3 = *(_QWORD *)HomeComp + 40LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    HomeComp = __asan_report_load8(*(_QWORD *)HomeComp + 40LL);
  (*(void (__fastcall **)(unsigned __int64, _QWORD))v3)(HomeComp, now);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_location_notify_time_);
  }
  if ( now > this->last_location_notify_time_ + 5 )
  {
    this->last_location_notify_time_ = now;
    v4 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v5 = *(_QWORD *)this->baseclass_0 + 488LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 488LL);
    (*(void (__fastcall **)(HomeRoomScene *))v5)(v4);
  }
};

// Line 90: range 0000000013171F5E-0000000013171FF1
WorldPtr __cdecl HomeRoomScene::getOwnWorld(const HomeRoomScene *const this)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rax
  WorldPtr result; // rax
  std::shared_ptr<HomeWorld> __r; // [rsp+10h] [rbp-10h] BYREF

  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *(_QWORD *)v1 + 72LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(std::shared_ptr<HomeWorld> *))v2)(&__r);
  std::shared_ptr<World>::shared_ptr<HomeWorld,void>((std::shared_ptr<World> *const)this, &__r);
  std::shared_ptr<HomeWorld>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<World,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 95: range 0000000013171FF2-0000000013172162
HomeWorldPtr __cdecl HomeRoomScene::getOwnHomeWorld(const HomeRoomScene *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Home *v4; // rax
  HomeSceneComp *SceneComp; // rax
  HomeWorldPtr result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 17 owner_home_ptr:96";
  *(_QWORD *)(v1 + 16) = HomeRoomScene::getOwnHomeWorld;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Scene::getOwnHome((const Scene *const)(v1 + 32));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 32), 0LL) )
  {
    std::shared_ptr<HomeWorld>::shared_ptr((std::shared_ptr<HomeWorld> *const)this, 0LL);
  }
  else
  {
    v4 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    SceneComp = Home::getSceneComp(v4);
    HomeSceneComp::getHomeWorld(SceneComp);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, 0LL);
    toThisPtr<HomeWorld>((HomeWorld *)this);
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<HomeWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 105: range 0000000013172164-0000000013172176
int32_t __cdecl HomeRoomScene::saveGroupToBin(HomeRoomScene *const this, GroupPtr *p_group_ptr)
{
  return 0;
};

// Line 110: range 0000000013172178-00000000131721DF
std::pair<int,proto::GroupBin*> __cdecl HomeRoomScene::findGroupBin(HomeRoomScene *const this, uint32_t group_id)
{
  std::pair<int,std::nullptr_t> v2; // rax
  proto::GroupBin *second; // rdx
  int first; // eax
  int __x; // [rsp+14h] [rbp-3Ch] BYREF
  __int64 __y; // [rsp+18h] [rbp-38h] BYREF
  std::pair<int,std::nullptr_t> __p; // [rsp+20h] [rbp-30h] BYREF
  std::pair<int,proto::GroupBin*> v8; // [rsp+30h] [rbp-20h] BYREF
  std::pair<int,proto::GroupBin*> result; // 0:eax.4,8:rdx.8

  __y = 0LL;
  __x = 0;
  v2 = std::make_pair<int,decltype(nullptr)>(&__x, &__y);
  __p.first = v2.first;
  __p.second = v2.second;
  std::pair<int,proto::GroupBin *>::pair<int,decltype(nullptr),true>(&v8, &__p);
  second = v8.second;
  first = v8.first;
  result.second = second;
  result.first = first;
  return result;
};

// Line 115: range 00000000131721E0-00000000131721F1
int32_t __cdecl HomeRoomScene::clearGroupBin(HomeRoomScene *const this, uint32_t group_id)
{
  return 0;
};

// Line 120: range 00000000131721F2-0000000013172233
void __cdecl HomeRoomScene::onMonsterDie(HomeRoomScene *const this, ChangeHpContext *context, Monster *monster)
{
  SceneHomeComp *HomeComp; // rbx
  uint32_t EntityId; // eax

  HomeComp = HomeRoomScene::getHomeComp(this);
  EntityId = Entity::getEntityId((const Entity *const)monster);
  SceneHomeComp::onMonsterDie(HomeComp, EntityId);
};
