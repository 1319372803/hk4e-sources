// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/home_world_scene.cpp

// Line 24: range 000000001317EE78-000000001317EF20
int32_t __cdecl HomeWorldScene::fromBin(HomeWorldScene *const this, const proto::SceneBin *scene_bin)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( !Scene::fromBin((Scene *const)this, scene_bin) )
    return 0;
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/home_world_scene.cpp",
    "fromBin",
    27);
  common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v3, (const char (*)[22])"Scene::fromBin failed");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return -1;
};

// Line 35: range 000000001317EF22-000000001317EFCA
int32_t __cdecl HomeWorldScene::toBin(const HomeWorldScene *const this, proto::SceneBin *scene_bin)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( !Scene::toBin((const Scene *const)this, scene_bin) )
    return 0;
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/home_world_scene.cpp",
    "toBin",
    38);
  common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v3, (const char (*)[20])"Scene::toBin failed");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return -1;
};

// Line 47: range 000000001317EFCC-000000001317F207
int32_t __cdecl HomeWorldScene::constructComps(HomeWorldScene *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( EcsBase<Scene,SceneCompBase,12u>::addComp<SceneGridComp>((EcsBase<Scene,SceneCompBase,12> *const)&this->baseclass_0[24]) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/home_world_scene.cpp",
      "constructComps",
      50);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v2,
      (const char (*)[28])"addComp SceneGridComp fails");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Scene,SceneCompBase,12u>::addComp<SceneHomeBlockGroupComp>((EcsBase<Scene,SceneCompBase,12> *const)&this->baseclass_0[24]) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/home_world_scene.cpp",
      "constructComps",
      55);
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
      "./src/scene/home_world_scene.cpp",
      "constructComps",
      60);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v2,
      (const char (*)[28])"addComp SceneHomeComp fails");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( Scene::constructComps((Scene *const)this) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/home_world_scene.cpp",
      "constructComps",
      65);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v2,
      (const char (*)[29])"Scene::constructComps failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 74: range 000000001317F208-000000001317F33E
int32_t __cdecl HomeWorldScene::init(HomeWorldScene *const this, const SceneInitParam *init_param)
{
  SceneHomeComp *HomeComp; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( Scene::init((Scene *const)this, init_param) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/home_world_scene.cpp",
      "init",
      77);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v4, (const char (*)[11])"init fails");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
  else
  {
    HomeComp = HomeWorldScene::getHomeComp(this);
    if ( SceneHomeComp::init(HomeComp) )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/home_world_scene.cpp",
        "init",
        82);
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

// Line 89: range 000000001317F340-000000001317F3D3
WorldPtr __cdecl HomeWorldScene::getOwnWorld(const HomeWorldScene *const this)
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

// Line 94: range 000000001317F3D4-000000001317F544
HomeWorldPtr __cdecl HomeWorldScene::getOwnHomeWorld(const HomeWorldScene *const this)
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
  *(_QWORD *)(v1 + 8) = "1 32 16 17 owner_home_ptr:95";
  *(_QWORD *)(v1 + 16) = HomeWorldScene::getOwnHomeWorld;
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

// Line 104: range 000000001317F546-000000001317F978
std::pair<Vector3,Vector3> *__cdecl HomeWorldScene::getBornPoint(
        std::pair<Vector3,Vector3> *retstr,
        HomeWorldScene *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int v6; // r14d
  Home *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int v10; // r14d
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> >::pointer v13; // rax
  Vector3 *p_born_rot; // r14
  Vector3 *p_born_pos; // rcx
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 iter:119 64 16 18 owner_home_ptr:107 96 16 24 home_module_data_ptr:113";
  *(_QWORD *)(v2 + 16) = HomeWorldScene::getBornPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  Scene::getOwnHome((const Scene *const)(v2 + 64));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world_scene.cpp",
      "getBornPoint",
      110);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v19,
           (const char (*)[36])"getOwnHome() return null. scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v5,
      (const unsigned int *)&this->baseclass_0[120]);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v6 = 0;
  }
  else
  {
    v7 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Home::getSceneComp(v7);
    HomeSceneComp::getCurHomeModuleData((HomeSceneComp *const)(v2 + 96));
    if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/home_world_scene.cpp",
        "getBornPoint",
        116);
      v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v19,
             (const char (*)[46])"getCurHomeModuleData() return null. home_uid:");
      v9 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      val = Home::getHomeUid(v9);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v10 = 0;
    }
    else
    {
      v11 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      *(std::map<unsigned int,HomeSceneData>::iterator *)(v2 + 32) = std::map<unsigned int,HomeSceneData>::find(
                                                                       &v11->scene_data_map,
                                                                       (const std::map<unsigned int,HomeSceneData>::key_type *)&this->baseclass_0[120]);
      v12 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      __y._M_node = std::map<unsigned int,HomeSceneData>::end(&v12->scene_data_map)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> >::_Self *)(v2 + 32),
             &__y) )
      {
        v10 = 0;
      }
      else
      {
        v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> > *const)(v2 + 32));
        if ( *(char *)(((unsigned __int64)&v13->second.arrangement_data.is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
          v13 = (std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> >::pointer)__asan_report_load1(&v13->second.arrangement_data.is_set_born_pos);
        if ( v13->second.arrangement_data.is_set_born_pos )
        {
          p_born_rot = &std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> > *const)(v2 + 32))->second.arrangement_data.born_rot;
          p_born_pos = &std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> > *const)(v2 + 32))->second.arrangement_data.born_pos;
          std::make_pair<Vector3 &,Vector3 &>(retstr, p_born_pos, p_born_rot);
          v10 = 1;
        }
        else
        {
          v10 = 2;
        }
      }
    }
    std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v2 + 96));
    if ( v10 )
    {
      if ( v10 == 2 )
        v6 = 2;
      else
        v6 = 1;
    }
    else
    {
      v6 = 0;
    }
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 64));
  if ( !v6 || v6 == 2 )
    Scene::getBornPoint(retstr, (Scene *const)this);
  if ( v20 == (char *)v2 )
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
  return retstr;
};

// Line 136: range 000000001317F97A-000000001317FA25
int32_t __cdecl HomeWorldScene::playerEnter(
        HomeWorldScene *const this,
        Player *player,
        const Vector3 *pos,
        const Vector3 *rot,
        bool is_relogin,
        const std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *p_appear_avatar_ptr)
{
  int32_t ret; // [rsp+3Ch] [rbp-24h]
  std::shared_ptr<Avatar> v13; // [rsp+40h] [rbp-20h] BYREF

  std::shared_ptr<Avatar>::shared_ptr(&v13, p_appear_avatar_ptr);
  ret = Scene::playerEnter((Scene *const)this, player, pos, rot, is_relogin, enter_scene_avatar_vec, &v13);
  std::shared_ptr<Avatar>::~shared_ptr(&v13);
  if ( ret )
    return ret;
  else
    return 0;
};

// Line 148: range 000000001317FA26-000000001317FAD5
int32_t __cdecl HomeWorldScene::updateScene(HomeWorldScene *const this)
{
  common::milog::MiLogStream *v1; // rdx
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( !Scene::updateScene((Scene *const)this) )
    return 0;
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/home_world_scene.cpp",
    "updateScene",
    151);
  v1 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v3, (const char (*)[18])"updateScene fails");
  common::milog::MiLogStream::operator<<<HomeWorldScene,(HomeWorldScene*)0>(v1, this);
  common::milog::MiLogStream::~MiLogStream(&v3);
  return -1;
};

// Line 159: range 000000001317FAD6-000000001317FC32
void __cdecl HomeWorldScene::onTimer(HomeWorldScene *const this, uint64_t now_ms)
{
  unsigned __int64 HomeComp; // rax
  unsigned __int64 v3; // rdx
  HomeWorldScene *v4; // rdx
  unsigned __int64 v5; // rax
  uint32_t now; // [rsp+1Ch] [rbp-4h]

  Scene::onTimer((Scene *const)this, now_ms);
  now = now_ms / 0x3E8;
  HomeComp = (unsigned __int64)HomeWorldScene::getHomeComp(this);
  if ( *(_BYTE *)((HomeComp >> 3) + 0x7FFF8000) )
    HomeComp = __asan_report_load8();
  v3 = *(_QWORD *)HomeComp + 40LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    HomeComp = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, _QWORD))v3)(HomeComp, now);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_location_notify_time_);
  }
  if ( now > this->last_location_notify_time_ + 5 )
  {
    this->last_location_notify_time_ = now;
    v4 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = *(_QWORD *)this->baseclass_0 + 488LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    (*(void (__fastcall **)(HomeWorldScene *))v5)(v4);
  }
};

// Line 172: range 000000001317FC34-000000001317FC46
int32_t __cdecl HomeWorldScene::saveGroupToBin(HomeWorldScene *const this, GroupPtr *p_group_ptr)
{
  return 0;
};

// Line 177: range 000000001317FC48-000000001317FCAF
std::pair<int,proto::GroupBin*> __cdecl HomeWorldScene::findGroupBin(HomeWorldScene *const this, uint32_t group_id)
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

// Line 182: range 000000001317FCB0-000000001317FCC1
int32_t __cdecl HomeWorldScene::clearGroupBin(HomeWorldScene *const this, uint32_t group_id)
{
  return 0;
};

// Line 187: range 000000001317FCC2-000000001317FD03
void __cdecl HomeWorldScene::onMonsterDie(HomeWorldScene *const this, ChangeHpContext *context, Monster *monster)
{
  SceneHomeComp *HomeComp; // rbx
  uint32_t EntityId; // eax

  HomeComp = HomeWorldScene::getHomeComp(this);
  EntityId = Entity::getEntityId((const Entity *const)monster);
  SceneHomeComp::onMonsterDie(HomeComp, EntityId);
};
