// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_home_comp.cpp

// Line 30: range 0000000015CD51AE-0000000015CD5483
int32_t __cdecl SceneHomeComp::init(SceneHomeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  Home *v8; // rax
  HomeSceneComp *SceneComp; // r14
  uint32_t SceneId; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-98h] BYREF
  unsigned int OwnerUid; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-90h] BYREF
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 11 home_ptr:31";
  *(_QWORD *)(v1 + 16) = SceneHomeComp::init;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnHome((const Scene *const)(v1 + 32));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "init",
      34);
    v4 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v14,
           (const char (*)[36])"getOwnHome() return null. scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v5, (const char (*)[12])" home_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    OwnerUid = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &OwnerUid);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    SceneComp = Home::getSceneComp(v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneId = Scene::getSceneId(this->scene_);
    HomeSceneComp::updateHomeGroupData(SceneComp, SceneId);
    v7 = 0;
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 32));
  result = v7;
  if ( v15 == (char *)v1 )
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

// Line 42: range 0000000015CD5484-0000000015CD54A7
int32_t __cdecl SceneHomeComp::start(SceneHomeComp *const this)
{
  SceneHomeComp::refreshArrangement(this, 0);
  return 0;
};

// Line 49: range 0000000015CD54A8-0000000015CD5645
void __cdecl SceneHomeComp::onTimer(SceneHomeComp *const this, uint32_t now)
{
  std::map<unsigned int,HomeAnimalInfo>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,HomeAnimalInfo>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,HomeAnimalInfo> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,HomeAnimalInfo> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,HomeAnimalInfo> >::type *entity_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,HomeAnimalInfo> >::type *info; // [rsp+38h] [rbp-8h]

  __for_range = &this->animal_info_map_;
  __for_begin._M_node = std::map<unsigned int,HomeAnimalInfo>::begin(&this->animal_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeAnimalInfo>::end(&this->animal_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo>>::operator*(&__for_begin);
    entity_id = std::get<0ul,unsigned int const,HomeAnimalInfo>(__in);
    info = std::get<1ul,unsigned int const,HomeAnimalInfo>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&info->respawn_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)info + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->respawn_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( info->respawn_time && now >= info->respawn_time )
    {
      if ( *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      SceneHomeComp::createAnimal(this, *entity_id, info);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->next_plant_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_plant_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->next_plant_refresh_time_ && now >= this->next_plant_refresh_time_ )
    SceneHomeComp::refreshHomePlant(this, 0);
};

// Line 65: range 0000000015CD5646-0000000015CD5B15
const HomeSceneData *__cdecl SceneHomeComp::findHomeSceneData(SceneHomeComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  const HomeSceneData *HomeSceneData; // r14
  Home *v8; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  HomeModuleData *v16; // r14
  uint32_t SceneId; // eax
  const HomeSceneData *result; // rax
  unsigned int val; // [rsp+18h] [rbp-D8h] BYREF
  unsigned int OwnerUid; // [rsp+1Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 17 home_module_id:73 64 16 11 home_ptr:66 96 16 18 module_data_ptr:74";
  *(_QWORD *)(v1 + 16) = SceneHomeComp::findHomeSceneData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnHome((const Scene *const)(v1 + 64));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "findHomeSceneData",
      69);
    v4 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v21,
           (const char (*)[36])"getOwnHome() return null. scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v5, (const char (*)[12])" home_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    OwnerUid = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &OwnerUid);
    common::milog::MiLogStream::~MiLogStream(&v21);
    HomeSceneData = 0LL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v1 + 48) = Scene::getOwnHomeModuleId(this->scene_);
    v8 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    SceneComp = (unsigned int)Home::getSceneComp(v8);
    HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v1 + 96), SceneComp);
    if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v1 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_home_comp.cpp",
        "findHomeSceneData",
        77);
      v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v21,
              (const char (*)[35])"module_data_ptr in null. scene_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getSceneId(this->scene_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" home_uid:");
      v13 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      OwnerUid = Home::getHomeUid(v13);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &OwnerUid);
      v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])" home_module_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v21);
      HomeSceneData = 0LL;
    }
    else
    {
      v16 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneId = Scene::getSceneId(this->scene_);
      HomeSceneData = HomeModuleData::findHomeSceneData(v16, SceneId);
    }
    std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v1 + 96));
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 64));
  result = HomeSceneData;
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
  return result;
};

// Line 86: range 0000000015CD5B16-0000000015CD6373
int32_t __cdecl SceneHomeComp::createAnimal(SceneHomeComp *const this, uint32_t entity_id, HomeAnimalInfo *animal_info)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  void (__fastcall *v13)(unsigned __int64, Scene *, VisionContext *); // r8
  bool v14; // dl
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  const Vector3 *Position; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  int32_t result; // eax
  unsigned int SceneId; // [rsp+28h] [rbp-238h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-234h] BYREF
  common::milog::MiLogStream v29; // [rsp+30h] [rbp-230h] BYREF
  char v30[528]; // [rsp+50h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 15 monster_ptr:101 64 352 8 param:87";
  *(_QWORD *)(v3 + 16) = SceneHomeComp::createAnimal;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862733] = -202116109;
  v5[536862734] = -202116109;
  MonsterParam::MonsterParam((MonsterParam *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&animal_info->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)animal_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&animal_info->monster_id >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v3 + 64) = animal_info->monster_id;
  if ( (((unsigned __int8)animal_info + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&animal_info->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&animal_info->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&animal_info->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)animal_info + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&animal_info->pos.z + 3) >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load_n(&animal_info->pos, 12LL);
  }
  *(_QWORD *)(v3 + 76) = *(_QWORD *)&animal_info->pos.x;
  *(float *)(v3 + 84) = animal_info->pos.z;
  if ( (((unsigned __int8)animal_info + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&animal_info->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&animal_info->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&animal_info->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)animal_info + 39) & 7) >= *(_BYTE *)((((unsigned __int64)&animal_info->rot.z + 3) >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load_n(&animal_info->rot, 12LL);
  }
  *(_QWORD *)(v3 + 88) = *(_QWORD *)&animal_info->rot.x;
  *(float *)(v3 + 96) = animal_info->rot.z;
  *(_DWORD *)(v3 + 72) = entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)animal_info + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load1(&animal_info->fishtank_fish_info);
  }
  if ( animal_info->fishtank_fish_info.is_fishtank_fish )
  {
    *(_BYTE *)(v3 + 396) = 1;
    if ( *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info.fish_distance_from_water >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)animal_info + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info.fish_distance_from_water >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(float *)(v3 + 400) = animal_info->fishtank_fish_info.fish_distance_from_water;
    if ( *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info.fish_scale >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)animal_info + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info.fish_scale >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(float *)(v3 + 404) = animal_info->fishtank_fish_info.fish_scale;
    if ( *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info.initial_rotation_y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)animal_info + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info.initial_rotation_y >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(float *)(v3 + 408) = animal_info->fishtank_fish_info.initial_rotation_y;
    if ( *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info.initial_pose_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)animal_info + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info.initial_pose_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 272) = animal_info->fishtank_fish_info.initial_pose_id;
  }
  EntityMgr::createMonster((const MonsterParam *)(v3 + 32));
  if ( std::operator==<Monster>((const std::shared_ptr<Monster> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_home_comp.cpp",
      "createAnimal",
      104);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v29, (const char (*)[16])"createMonster: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &animal_info->monster_id);
    v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])" failed. ");
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" home_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v10 = -1;
  }
  else
  {
    v11 = (unsigned __int64)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    v12 = *(_QWORD *)v11 + 56LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    v13 = *(void (__fastcall **)(unsigned __int64, Scene *, VisionContext *))v12;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    v13(v11, this->scene_, &VisionContext::meet_context);
    v14 = *(_BYTE *)(((unsigned __int64)&animal_info->respawn_time >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)animal_info + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&animal_info->respawn_time >> 3)
                                                                  + 0x7FFF8000);
    if ( v14 )
      __asan_report_store4(&animal_info->respawn_time, (((_BYTE)animal_info + 40) & 7u) + 3, v14);
    animal_info->respawn_time = 0;
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_home_comp.cpp",
      "createAnimal",
      110);
    v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v29, (const char (*)[13])off_259BDD40);
    v16 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v17 = common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v15, v16);
    v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])" ");
    v19 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Position = Entity::getPosition((const Entity *const)v19);
    v21 = operator<<(v18, Position);
    v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])" scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneId = Scene::getSceneId(this->scene_);
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &SceneId);
    v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])" home_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v10 = 0;
  }
  std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 32));
  MonsterParam::~MonsterParam((MonsterParam *const)(v3 + 64));
  result = v10;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 116: range 0000000015CD6374-0000000015CD6C2D
int32_t __cdecl SceneHomeComp::refreshAllAnimal(SceneHomeComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  int32_t result; // eax
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  HomeAnimalInfo *v12; // rax
  unsigned int *v13; // rcx
  HomeAnimalInfo *v14; // r8
  unsigned int val; // [rsp+10h] [rbp-170h] BYREF
  uint32_t i; // [rsp+14h] [rbp-16Ch]
  std::map<unsigned int,HomeBlockData>::const_iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  std::map<unsigned int,HomeBlockData>::const_iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  const HomeSceneData *home_scene_data; // [rsp+28h] [rbp-158h]
  const std::map<unsigned int,HomeBlockData> *__for_range; // [rsp+30h] [rbp-150h]
  std::map<unsigned int,HomeAnimalInfo> *__for_range_0; // [rsp+38h] [rbp-148h]
  std::pair<unsigned int const,HomeAnimalInfo> *__in; // [rsp+40h] [rbp-140h]
  std::tuple_element<0,std::pair<unsigned int const,HomeAnimalInfo> >::type *entity_id; // [rsp+48h] [rbp-138h]
  std::tuple_element<1,std::pair<unsigned int const,HomeAnimalInfo> >::type *animal_info; // [rsp+50h] [rbp-130h]
  const std::pair<unsigned int const,HomeBlockData> *v25; // [rsp+58h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+60h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+68h] [rbp-118h]
  const HomeAnimalData *animal_data; // [rsp+70h] [rbp-110h]
  const data::HomeworldAnimalExcelConfig *home_animal_config; // [rsp+78h] [rbp-108h]
  std::shared_ptr<Config> v30; // [rsp+80h] [rbp-100h] BYREF
  common::milog::MiLogStream v31; // [rsp+90h] [rbp-F0h] BYREF
  char v32[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 13 entity_id:147 64 64 15 animal_info:140";
  *(_QWORD *)(v1 + 16) = SceneHomeComp::refreshAllAnimal;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862724] = -202116109;
  SceneHomeComp::clearAllAnimalInfo(this);
  home_scene_data = SceneHomeComp::findHomeSceneData(this);
  if ( home_scene_data )
  {
    __for_range = &home_scene_data->arrangement_data.block_data_map;
    __for_begin._M_node = std::map<unsigned int,HomeBlockData>::begin(&home_scene_data->arrangement_data.block_data_map)._M_node;
    __for_end._M_node = std::map<unsigned int,HomeBlockData>::end(&home_scene_data->arrangement_data.block_data_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v25 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin);
      block_id = std::get<0ul,unsigned int const,HomeBlockData>(v25);
      block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v25);
      for ( i = 0; i < std::vector<HomeAnimalData>::size(&block_data->deploy_animal_vec); ++i )
      {
        animal_data = std::vector<HomeAnimalData>::operator[](&block_data->deploy_animal_vec, i);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v30);
        p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.home_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)animal_data >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)animal_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)animal_data >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        home_animal_config = data::HomeWorldExcelConfigMgrBase::findHomeworldAnimalExcelConfig(
                               p_home_config_mgr,
                               animal_data->furniture_id);
        std::shared_ptr<Config>::~shared_ptr(&v30);
        if ( home_animal_config )
        {
          HomeAnimalInfo::HomeAnimalInfo((HomeAnimalInfo *const)(v1 + 64));
          if ( *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)block_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 64) = *block_id;
          *(_DWORD *)(v1 + 68) = i;
          if ( *(_BYTE *)(((unsigned __int64)animal_data >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)animal_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)animal_data >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 72) = animal_data->furniture_id;
          if ( *(_BYTE *)(((unsigned __int64)&home_animal_config->monster_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)home_animal_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&home_animal_config->monster_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 76) = home_animal_config->monster_id;
          if ( (((unsigned __int8)animal_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&animal_data->spawn_pos >> 3)
                                                                    + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&animal_data->spawn_pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&animal_data->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)animal_data + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&animal_data->spawn_pos.z + 3) >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load_n(&animal_data->spawn_pos, 12LL);
          }
          *(Vector3 *)(v1 + 80) = animal_data->spawn_pos;
          if ( (((unsigned __int8)animal_data + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&animal_data->spawn_rot >> 3)
                                                                     + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&animal_data->spawn_rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&animal_data->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)animal_data + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&animal_data->spawn_rot.z + 3) >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load_n(&animal_data->spawn_rot, 12LL);
          }
          *(Vector3 *)(v1 + 92) = animal_data->spawn_rot;
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v1 + 48) = Scene::genNewEntityId(this->scene_, PROT_ENTITY_MONSTER);
          v12 = std::move<HomeAnimalInfo &>((HomeAnimalInfo *)(v1 + 64));
          std::map<unsigned int,HomeAnimalInfo>::emplace<unsigned int &,HomeAnimalInfo>(
            &this->animal_info_map_,
            (unsigned int *)(v1 + 48),
            v12,
            v13,
            v14);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_home_comp.cpp",
            "refreshAllAnimal",
            136);
          v9 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                 &v31,
                 (const char (*)[63])"findHomeworldAnimalExcelConfig() return nullptr. furniture_id:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &animal_data->furniture_id);
          v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" home_uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v1 + 48) = Scene::getOwnerUid(this->scene_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v31);
        }
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin);
    }
    SceneHomeComp::fillAllHomeFishMonsterInfo(this);
    __for_range_0 = &this->animal_info_map_;
    __for_begin._M_node = std::map<unsigned int,HomeAnimalInfo>::begin(&this->animal_info_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,HomeAnimalInfo>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> >::_Self *)&__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> > *const)&__for_begin);
      entity_id = std::get<0ul,unsigned int const,HomeAnimalInfo>(__in);
      animal_info = std::get<1ul,unsigned int const,HomeAnimalInfo>(__in);
      if ( *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      SceneHomeComp::createAnimal(this, *entity_id, animal_info);
      std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> > *const)&__for_begin);
    }
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_home_comp.cpp",
      "refreshAllAnimal",
      123);
    v4 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v31,
           (const char (*)[38])"home_scene_data is nullptr. scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v5, (const char (*)[12])" home_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v1 + 48) = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v31);
    result = 0;
  }
  if ( v32 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 164: range 0000000015CD6C2E-0000000015CD6F74
int32_t __cdecl SceneHomeComp::clearAllAnimalInfo(SceneHomeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  Scene *scene; // rcx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(unsigned __int64, Scene *, _QWORD); // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int32_t result; // eax
  std::map<unsigned int,HomeAnimalInfo>::iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::map<unsigned int,HomeAnimalInfo>::iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  std::map<unsigned int,HomeAnimalInfo> *__for_range; // [rsp+20h] [rbp-90h]
  const std::pair<unsigned int const,HomeAnimalInfo> *v14; // [rsp+28h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeAnimalInfo> >::type *entity_id; // [rsp+30h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeAnimalInfo> >::type *_; // [rsp+38h] [rbp-78h]
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 entity_ptr:167";
  *(_QWORD *)(v1 + 16) = SceneHomeComp::clearAllAnimalInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  __for_range = &this->animal_info_map_;
  __for_begin._M_node = std::map<unsigned int,HomeAnimalInfo>::begin(&this->animal_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeAnimalInfo>::end(&this->animal_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo>>::operator*(&__for_begin);
    entity_id = std::get<0ul,unsigned int const,HomeAnimalInfo>(v14);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,HomeAnimalInfo> >::type *)std::get<1ul,unsigned int const,HomeAnimalInfo>(v14);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
      p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
    v6 = *p_vptr_DescribalBase + 120LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    v7 = *(void (__fastcall **)(unsigned __int64, Scene *, _QWORD))v6;
    if ( *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v7(v1 + 32, scene, *entity_id);
    if ( !std::operator==<Entity>((const std::shared_ptr<Entity> *)(v1 + 32), 0LL) )
    {
      v8 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      v9 = *(_QWORD *)v8 + 128LL;
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, VisionContext *))v9)(v8, &VisionContext::miss_context);
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v1 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo>>::operator++(&__for_begin);
  }
  std::map<unsigned int,HomeAnimalInfo>::clear(&this->animal_info_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::clear(&this->fishpond_guid_entities_map_);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::clear(&this->scene_point_fish_entities_map_);
  result = 0;
  if ( v17 == (char *)v1 )
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

// Line 181: range 0000000015CD6F76-0000000015CD7312
void __fastcall SceneHomeComp::onMonsterDie(SceneHomeComp *const this, uint32_t entity_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  int Now; // edi
  __int64 v8; // rsi
  uint32_t v9; // ecx
  char v10; // dl
  bool v11; // dl
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  HomeAnimalInfo *animal_info; // [rsp+20h] [rbp-C0h]
  const data::HomeworldAnimalExcelConfig *home_animal_config; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 entity_id:180 64 8 8 iter:182";
  *(_QWORD *)(v2 + 16) = SceneHomeComp::onMonsterDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = entity_id;
  *(std::map<unsigned int,HomeAnimalInfo>::iterator *)(v2 + 64) = std::map<unsigned int,HomeAnimalInfo>::find(
                                                                    &this->animal_info_map_,
                                                                    (const std::map<unsigned int,HomeAnimalInfo>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,HomeAnimalInfo>::end(&this->animal_info_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> >::_Self *)(v2 + 64),
          &__y) )
  {
    animal_info = &std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> > *const)(v2 + 64))->second;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.home_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&animal_info->furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)animal_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&animal_info->furniture_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    home_animal_config = data::HomeWorldExcelConfigMgrBase::findHomeworldAnimalExcelConfig(
                           p_home_config_mgr,
                           animal_info->furniture_id);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( home_animal_config )
    {
      if ( *(_BYTE *)(((unsigned __int64)&home_animal_config->is_rebirth >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&home_animal_config->is_rebirth >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( home_animal_config->is_rebirth )
      {
        Now = common::tools::TimeUtils::getNow();
        v8 = (((_BYTE)home_animal_config + 20) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&home_animal_config->rebirth_cd >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)home_animal_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&home_animal_config->rebirth_cd >> 3)
                                                                            + 0x7FFF8000) )
        {
          Now = (_DWORD)home_animal_config + 20;
          __asan_report_load4();
        }
        v9 = Now + home_animal_config->rebirth_cd;
        v10 = *(_BYTE *)(((unsigned __int64)&animal_info->respawn_time >> 3) + 0x7FFF8000);
        LOBYTE(v8) = v10 != 0;
        v11 = v10 != 0 && (char)((((_BYTE)animal_info + 40) & 7) + 3) >= v10;
        if ( v11 )
          __asan_report_store4(&animal_info->respawn_time, v8, v11);
        animal_info->respawn_time = v9;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_home_comp.cpp",
        "onMonsterDie",
        193);
      v6 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
             &v16,
             (const char (*)[63])"findHomeworldAnimalExcelConfig() return nullptr. furniture_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &animal_info->furniture_id);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
  }
  if ( v17 == (char *)v2 )
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

// Line 203: range 0000000015CD7314-0000000015CD7450
void __cdecl SceneHomeComp::refreshArrangement(SceneHomeComp *const this, bool is_clear)
{
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx

  if ( is_clear )
  {
    SceneHomeComp::clearAllAnimalInfo(this);
    SceneHomeComp::clearAllHomePlant(this);
    SceneHomeComp::clearAllServerGadget(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BlockGroupComp = Scene::getBlockGroupComp(this->scene_);
    SceneBlockGroupComp::unloadAllGroups(BlockGroupComp);
  }
  else
  {
    SceneHomeComp::refreshAllAnimal(this);
    SceneHomeComp::clearAllHomePlant(this);
    SceneHomeComp::refreshHomePlant(this, 1);
    SceneHomeComp::refreshAllServerGadget(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = (unsigned __int64)Scene::getBlockGroupComp(this->scene_);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    v4 = *(_QWORD *)v3 + 288LL;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64))v4)(v3);
  }
};

// Line 222: range 0000000015CD7452-0000000015CD777F
int32_t __cdecl SceneHomeComp::clearAllHomePlant(SceneHomeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rdx
  Scene *scene; // rcx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int32_t result; // eax
  uint32_t entity_id; // [rsp+14h] [rbp-8Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-78h]
  char v15[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 entity_ptr:225";
  *(_QWORD *)(v1 + 16) = SceneHomeComp::clearAllHomePlant;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  __for_range = &this->gather_entity_id_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->gather_entity_id_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->gather_entity_id_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    entity_id = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
      p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
    v7 = *p_vptr_DescribalBase + 120LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, Scene *, _QWORD))v7)(v1 + 32, scene, entity_id);
    if ( !std::operator==<Entity>((const std::shared_ptr<Entity> *)(v1 + 32), 0LL) )
    {
      v8 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      v9 = *(_QWORD *)v8 + 128LL;
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, VisionContext *))v9)(v8, &VisionContext::miss_context);
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v1 + 32));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  std::set<unsigned int>::clear(&this->gather_entity_id_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_plant_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_plant_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_plant_refresh_time_, &__for_end, (_BYTE)this - 88);
  }
  this->next_plant_refresh_time_ = 0;
  result = 0;
  if ( v15 == (char *)v1 )
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

// Line 238: range 0000000015CD7A48-0000000015CD837D
int32_t __cdecl SceneHomeComp::refreshHomePlant(SceneHomeComp *const this, bool is_create_all)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  Home *v9; // rax
  HomePlantComp *PlantComp; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  Home *v16; // rax
  HomePlantComp *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  unsigned int *p_val; // rsi
  uint32_t v24; // ecx
  char v25; // al
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  int32_t result; // eax
  SceneHomeComp::refreshHomePlant::<lambda(HomeSubFieldData&)> v30; // [rsp-20h] [rbp-160h]
  unsigned int val; // [rsp+10h] [rbp-130h] BYREF
  uint32_t scene_id; // [rsp+14h] [rbp-12Ch]
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  HomeModuleFieldData *module_data_ptr; // [rsp+28h] [rbp-118h]
  std::unordered_map<unsigned int,HomeFieldData> *__for_range; // [rsp+30h] [rbp-110h]
  std::pair<unsigned int const,HomeFieldData> *__in; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,HomeFieldData> >::type *guid; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,HomeFieldData> >::type *field_data; // [rsp+48h] [rbp-F8h]
  std::function<ForeachPolicy(HomeSubFieldData&)> p_func; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v41; // [rsp+70h] [rbp-D0h] BYREF
  char v42[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 18 is_need_notify:259 64 4 18 home_module_id:246 80 4 21 next_refresh_time:254 96 16 12 home_ptr:239";
  *(_QWORD *)(v2 + 16) = SceneHomeComp::refreshHomePlant;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnHome((const Scene *const)(v2 + 96));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "refreshHomePlant",
      242);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v41,
           (const char (*)[48])"[HOME_PLANT]getOwnHome() return null. scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 80) = Scene::getSceneId(this->scene_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 80));
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" home_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v41);
    v8 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene_id = Scene::getSceneId(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 64) = Scene::getOwnHomeModuleId(this->scene_);
    v9 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    PlantComp = Home::getPlantComp(v9);
    module_data_ptr = HomePlantComp::getModuleFieldDataMap(PlantComp, *(_DWORD *)(v2 + 64));
    if ( module_data_ptr )
    {
      *(_DWORD *)(v2 + 80) = -1;
      __for_range = &module_data_ptr->field_data_map;
      __for_begin._M_cur = std::unordered_map<unsigned int,HomeFieldData>::begin(&module_data_ptr->field_data_map)._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,HomeFieldData>::end(&module_data_ptr->field_data_map)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFieldData>,false>(&__for_begin, &__for_end) )
      {
        __in = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator*(&__for_begin);
        guid = std::get<0ul,unsigned int const,HomeFieldData>(__in);
        field_data = std::get<1ul,unsigned int const,HomeFieldData>(__in);
        if ( *(_BYTE *)(((unsigned __int64)&field_data->scene_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&field_data->scene_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( scene_id == field_data->scene_id )
        {
          *(_BYTE *)(v2 + 48) = 0;
          v41.log_ = (common::milog::MiLog *)this;
          v41.ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)(v2 + 80);
          LOBYTE(v41.ostr_ptr_._M_refcount._M_pi) = is_create_all;
          v41.ostr_ = (common::milog::MilogStringStream *)(v2 + 48);
          v30.__is_need_notify = (bool *)(v2 + 48);
          *(_QWORD *)&v30.__is_create_all = v41.ostr_ptr_._M_refcount._M_pi;
          v30.__next_refresh_time = (uint32_t *)(v2 + 80);
          v30.__this = this;
          std::function<ForeachPolicy ()(HomeSubFieldData &)>::function<SceneHomeComp::refreshHomePlant(bool)::{lambda(HomeSubFieldData &)#1},void,void>(
            &p_func,
            v30);
          HomeFieldData::foreachSubField(field_data, &p_func);
          std::function<ForeachPolicy ()(HomeSubFieldData &)>::~function(&p_func);
          if ( *(_BYTE *)(v2 + 48) )
          {
            v16 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v17 = Home::getPlantComp(v16);
            HomePlantComp::notifyFieldData(v17, field_data);
          }
        }
        std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_home_comp.cpp",
        "refreshHomePlant",
        285);
      v18 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              (common::milog::MiLogStream *const)&p_func,
              (const char (*)[39])"[HOME_PLANT]refreshHomePlant. is all: ");
      v19 = common::milog::MiLogStream::operator<<(v18, is_create_all);
      v20 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v19,
              (const char (*)[21])" next_refresh_time: ");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 80));
      v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])" home_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getOwnerUid(this->scene_);
      p_val = &val;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      if ( std::numeric_limits<unsigned int>::max() == *(_DWORD *)(v2 + 80) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->next_plant_refresh_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->next_plant_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->next_plant_refresh_time_, &val, (_BYTE)this - 88);
        }
        this->next_plant_refresh_time_ = 0;
      }
      else
      {
        v24 = common::tools::TimeUtils::getNow() + *(_DWORD *)(v2 + 80);
        v25 = *(_BYTE *)(((unsigned __int64)&this->next_plant_refresh_time_ >> 3) + 0x7FFF8000);
        if ( v25 != 0 && v25 <= 3 )
        {
          LOBYTE(p_val) = v25 != 0;
          __asan_report_store4(&this->next_plant_refresh_time_, p_val, (_BYTE)this - 88);
        }
        this->next_plant_refresh_time_ = v24;
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_func,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_home_comp.cpp",
          "refreshHomePlant",
          289);
        v26 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                (common::milog::MiLogStream *const)&p_func,
                (const char (*)[39])"[HOME_PLANT]next_plant_refresh_time_: ");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                &this->next_plant_refresh_time_);
        v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v27, (const char (*)[12])" home_uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Scene::getOwnerUid(this->scene_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      }
      v8 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_home_comp.cpp",
        "refreshHomePlant",
        250);
      v11 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v41,
              (const char (*)[57])"[HOME_PLANT]getModuleFieldDataMap return null. scene_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 80) = Scene::getSceneId(this->scene_);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 80));
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" home_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getOwnerUid(this->scene_);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v14,
              (const char (*)[18])" home_module_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v41);
      v8 = 0;
    }
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 96));
  result = v8;
  if ( v42 == (char *)v2 )
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
  return result;
};

// Line 260: range 0000000015CD7780-0000000015CD7A46
ForeachPolicy __cdecl SceneHomeComp::refreshHomePlant(bool)::{lambda(HomeSubFieldData &)#1}::operator()(
        const SceneHomeComp::refreshHomePlant::<lambda(HomeSubFieldData&)> *const __closure,
        HomeSubFieldData *sub_field_data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool *is_need_notify; // rdx
  char v6; // cl
  const unsigned int *v7; // rdx
  uint32_t *next_refresh_time; // rcx
  __int64 v9; // rsi
  bool v10; // dl
  ForeachPolicy result; // eax
  const HomeSubFieldData *sub_field_dataa; // [rsp+0h] [rbp-80h]
  char v13[96]; // [rsp+20h] [rbp-60h] BYREF

  sub_field_dataa = sub_field_data;
  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 next_time:270";
  *(_QWORD *)(v2 + 16) = SceneHomeComp::refreshHomePlant(bool)::{lambda(HomeSubFieldData &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( HomeSubFieldData::checkAndSetChangeStatus(sub_field_data) )
    goto LABEL_8;
  if ( *(char *)(((unsigned __int64)&__closure->__is_create_all >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&__closure->__is_create_all);
  if ( __closure->__is_create_all )
  {
LABEL_8:
    HomeSubFieldData::clearGadget(sub_field_data, &VisionContext::miss_context);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneHomeComp::createHomePlantGadget(__closure->__this, sub_field_data);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_need_notify >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    is_need_notify = __closure->__is_need_notify;
    v6 = *(_BYTE *)(((unsigned __int64)is_need_notify >> 3) + 0x7FFF8000);
    if ( v6 != 0 && ((__int64)__closure->__is_need_notify & 7) >= v6 )
    {
      LOBYTE(sub_field_data) = v6 != 0;
      __asan_report_store1(__closure->__is_need_notify, sub_field_data, is_need_notify);
    }
    *is_need_notify = 1;
  }
  *(_DWORD *)(v2 + 32) = HomeSubFieldData::getNextStatusTime(sub_field_dataa);
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__next_refresh_time >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = std::min<unsigned int>((const unsigned int *)(v2 + 32), __closure->__next_refresh_time);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__next_refresh_time >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    next_refresh_time = __closure->__next_refresh_time;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v9 = *v7;
    v10 = *(_BYTE *)(((unsigned __int64)next_refresh_time >> 3) + 0x7FFF8000) != 0
       && (char)(((unsigned __int8)next_refresh_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)next_refresh_time >> 3)
                                                                           + 0x7FFF8000);
    if ( v10 )
      __asan_report_store4(next_refresh_time, v9, v10);
    *next_refresh_time = v9;
  }
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

// Line 299: range 0000000015CD837E-0000000015CD89DF
int32_t __cdecl SceneHomeComp::createHomePlantGadget(SceneHomeComp *const this, HomeSubFieldData *sub_field_data)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  uint32_t SproutGadgetId; // esi
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  int32_t result; // eax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rbx
  unsigned int SeedId; // [rsp+28h] [rbp-E8h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-E4h] BYREF
  proto::HomePlantFieldStatus status; // [rsp+30h] [rbp-E0h]
  uint32_t gadget_id; // [rsp+34h] [rbp-DCh]
  const GatherExcelConfigMgr *gather_config_mgr; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 13 gather_id:311 48 4 13 bundle_id:311 64 16 9 param:321 96 16 9 param:305";
  *(_QWORD *)(v2 + 16) = SceneHomeComp::createHomePlantGadget;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  common::milog::MiLogStream::create(
    &v24,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_home_comp.cpp",
    "createHomePlantGadget",
    300);
  v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
         &v24,
         (const char (*)[36])"[HOME_PLANT]createHomePlantGadget. ");
  v6 = operator<<(v5, sub_field_data);
  v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" home_uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Scene::getOwnerUid(this->scene_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  common::milog::MiLogStream::~MiLogStream(&v24);
  status = HomeSubFieldData::getFieldStatus(sub_field_data);
  if ( status == HOME_FIELD_STATUE_SPROUT )
  {
    *(_DWORD *)(v2 + 96) = 0;
    *(_DWORD *)(v2 + 100) = 0;
    *(_DWORD *)(v2 + 104) = 0;
    *(_DWORD *)(v2 + 108) = 0;
    SproutGadgetId = HomeSubFieldData::getSproutGadgetId(sub_field_data);
    SceneHomeComp::createHomeGatherGadget(
      this,
      SproutGadgetId,
      (HomeGatherParam *)(v2 + 96),
      &sub_field_data->pos,
      &sub_field_data->rot,
      sub_field_data);
LABEL_24:
    result = 0;
    goto LABEL_25;
  }
  if ( status != HOME_FIELD_STATUE_GATHER )
    goto LABEL_24;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  HomeSubFieldData::getGatherOrBundleId(sub_field_data, (uint32_t *)(v2 + 32), (uint32_t *)(v2 + 48));
  if ( *(_DWORD *)(v2 + 48) )
  {
    SceneHomeComp::createHomeGatherBundle(this, *(_DWORD *)(v2 + 48), sub_field_data);
    goto LABEL_24;
  }
  if ( !*(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "createHomePlantGadget",
      336);
    v15 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v24,
            (const char (*)[42])"[HOME_PLANT]createHomePlantGadget error: ");
    v16 = operator<<(v15, sub_field_data);
    v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" home_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    goto LABEL_24;
  }
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 68) = 0;
  *(_DWORD *)(v2 + 72) = 0;
  *(_DWORD *)(v2 + 76) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&sub_field_data->field_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)sub_field_data + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sub_field_data->field_guid >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 68) = sub_field_data->field_guid;
  if ( *(_BYTE *)(((unsigned __int64)&sub_field_data->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&sub_field_data->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 72) = sub_field_data->index;
  *(_DWORD *)(v2 + 64) = *(_DWORD *)(v2 + 32);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  gather_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->design_config.txt_config_mgr.gather_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  gadget_id = GatherExcelConfigMgr::getGatherGadgetId(gather_config_mgr, *(_DWORD *)(v2 + 32));
  if ( gadget_id )
  {
    SceneHomeComp::createHomeGatherGadget(
      this,
      gadget_id,
      (HomeGatherParam *)(v2 + 64),
      &sub_field_data->pos,
      &sub_field_data->rot,
      sub_field_data);
    goto LABEL_24;
  }
  common::milog::MiLogStream::create(
    &v24,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_home_comp.cpp",
    "createHomePlantGadget",
    329);
  v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
         &v24,
         (const char (*)[46])"[HOME_PLANT]getGatherGadgetId fail. seed id: ");
  SeedId = HomeSubFieldData::getSeedId(sub_field_data);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &SeedId);
  v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" gather_id: ");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
  v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" home_uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Scene::getOwnerUid(this->scene_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
  common::milog::MiLogStream::~MiLogStream(&v24);
  result = -1;
LABEL_25:
  if ( v25 == (char *)v2 )
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
  return result;
};

// Line 343: range 0000000015CD89E0-0000000015CD9073
__int64 __fastcall SceneHomeComp::createHomeGatherGadget(
        SceneHomeComp *const this,
        uint32_t gadget_id,
        unsigned __int64 param,
        unsigned __int64 pos,
        unsigned __int64 rot,
        HomeSubFieldData *sub_field_data)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  __int64 v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  unsigned int v14; // r14d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  void (__fastcall *v17)(unsigned __int64, Scene *, VisionContext *); // r8
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+3Ch] [rbp-464h] BYREF
  std::weak_ptr<Gadget> p_gadget_wtr; // [rsp+40h] [rbp-460h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-450h] BYREF
  char v27[1072]; // [rsp+70h] [rbp-430h] BYREF

  v6 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_4(1024LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 4 13 gadget_id:342 48 16 14 gadget_ptr:352 80 816 16 gadget_param:344";
  *(_QWORD *)(v6 + 16) = SceneHomeComp::createHomeGatherGadget;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = 61956;
  v8[536862722] = 62194;
  v8[536862748] = -202116109;
  v8[536862749] = -202116109;
  v8[536862750] = -202116109;
  v8[536862751] = -202116109;
  *(_DWORD *)(v6 + 32) = gadget_id;
  GadgetParam::GadgetParam((GadgetParam *const)(v6 + 80));
  *(_DWORD *)(v6 + 80) = *(_DWORD *)(v6 + 32);
  if ( (char)(pos & 7) >= *(_BYTE *)((pos >> 3) + 0x7FFF8000) && *(_BYTE *)((pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((pos + 11) & 7) >= *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(pos, 12LL);
  }
  *(_QWORD *)(v6 + 92) = *(_QWORD *)pos;
  *(_DWORD *)(v6 + 100) = *(_DWORD *)(pos + 8);
  if ( (char)(rot & 7) >= *(_BYTE *)((rot >> 3) + 0x7FFF8000) && *(_BYTE *)((rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((rot + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((rot + 11) & 7) >= *(_BYTE *)(((rot + 11) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(rot, 12LL);
  }
  *(_QWORD *)(v6 + 104) = *(_QWORD *)rot;
  *(_DWORD *)(v6 + 112) = *(_DWORD *)(rot + 8);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v6 + 88) = Scene::genNewEntityId(this->scene_, PROT_ENTITY_GADGET);
  if ( (char)(param & 7) >= *(_BYTE *)((param >> 3) + 0x7FFF8000) && *(_BYTE *)((param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((param + 15) >> 3) + 0x7FFF8000) != 0
    && (char)((param + 15) & 7) >= *(_BYTE *)(((param + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(param, 16LL);
  }
  v9 = *(_QWORD *)(param + 8);
  *(_QWORD *)(v6 + 788) = *(_QWORD *)param;
  *(_QWORD *)(v6 + 796) = v9;
  EntityMgr::createGadget((const GadgetParam *)(v6 + 48));
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v6 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_home_comp.cpp",
      "createHomeGatherGadget",
      355);
    v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v26,
            (const char (*)[27])"[HOME_PLANT]createGadget: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v6 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
    v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" home_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v14 = -1;
  }
  else
  {
    v15 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 48));
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      v15 = __asan_report_load8();
    v16 = *(_QWORD *)v15 + 56LL;
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      v15 = __asan_report_load8();
    v17 = *(void (__fastcall **)(unsigned __int64, Scene *, VisionContext *))v16;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      v15 = __asan_report_load8();
    v17(v15, this->scene_, &VisionContext::meet_context);
    v18 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 48));
    val = Entity::getEntityId((const Entity *const)v18);
    std::set<unsigned int>::insert(&this->gather_entity_id_set_, &val);
    std::weak_ptr<Gadget>::weak_ptr<Gadget,void>(&p_gadget_wtr, (const std::shared_ptr<Gadget> *)(v6 + 48));
    HomeSubFieldData::logGadget(sub_field_data, &p_gadget_wtr);
    std::weak_ptr<Gadget>::~weak_ptr(&p_gadget_wtr);
    v14 = 0;
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v6 + 48));
  GadgetParam::~GadgetParam((GadgetParam *const)(v6 + 80));
  result = v14;
  if ( v27 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8078) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 365: range 0000000015CD9074-0000000015CD9D3A
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall SceneHomeComp::createHomeGatherBundle(
        SceneHomeComp *const this,
        uint32_t bundle_id,
        HomeSubFieldData *sub_field_data)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  __int64 result; // rax
  Vector3 *p_rot; // r8
  Vector3 *p_pos; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v12; // rdx
  std::vector<data::PointInfo>::size_type v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  float rot_x; // ecx
  float rot_y; // xmm0_4
  float offset_x; // ecx
  float offset_y; // xmm0_4
  unsigned int val; // [rsp+20h] [rbp-230h] BYREF
  uint32_t gadget_id; // [rsp+24h] [rbp-22Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-228h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-220h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-218h] BYREF
  const GatherExcelConfigMgr *gather_config_mgr; // [rsp+40h] [rbp-210h]
  const data::GatherBundleExcelConfig *bundle_config_ptr; // [rsp+48h] [rbp-208h]
  const std::set<unsigned int> *__for_range; // [rsp+50h] [rbp-200h]
  const data::PointInfo *point_info; // [rsp+58h] [rbp-1F8h]
  Vector3 rot; // [rsp+64h] [rbp-1ECh] BYREF
  Quaternion v50; // [rsp+70h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v51; // [rsp+80h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v52; // [rsp+A0h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v53; // [rsp+C0h] [rbp-190h] BYREF
  char v54[368]; // [rsp+E0h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 4 9 index:381 64 4 13 gather_id:389 80 4 13 bundle_id:364 96 12 14 gather_rot:409 128 12 2"
                        "0 local_offset_pos:411 160 12 20 world_offset_pos:412 192 12 14 gather_pos:413 224 16 9 param:37"
                        "4 256 16 14 local_quat:407 288 16 15 parent_quat:408";
  *(_QWORD *)(v3 + 16) = SceneHomeComp::createHomeGatherBundle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219020288;
  v5[536862724] = -219020288;
  v5[536862725] = -219020288;
  v5[536862726] = -219020288;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862729] = -202178560;
  *(_DWORD *)(v3 + 80) = bundle_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v50);
  gather_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50)->design_config.txt_config_mgr.gather_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v50);
  bundle_config_ptr = data::GatherExcelConfigMgrBase::findGatherBundleExcelConfig(
                        gather_config_mgr,
                        *(_DWORD *)(v3 + 80));
  if ( bundle_config_ptr )
  {
    *(_DWORD *)(v3 + 224) = 0;
    *(_DWORD *)(v3 + 228) = 0;
    *(_DWORD *)(v3 + 232) = 0;
    *(_DWORD *)(v3 + 236) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&sub_field_data->field_guid >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)sub_field_data + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sub_field_data->field_guid >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 228) = sub_field_data->field_guid;
    if ( *(_BYTE *)(((unsigned __int64)&sub_field_data->index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&sub_field_data->index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 232) = sub_field_data->index;
    p_rot = &sub_field_data->rot;
    p_pos = &sub_field_data->pos;
    if ( *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->base_gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)bundle_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->base_gadget_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    SceneHomeComp::createHomeGatherGadget(
      this,
      bundle_config_ptr->base_gadget_id,
      v3 + 224,
      (unsigned __int64)p_pos,
      (unsigned __int64)p_rot,
      sub_field_data);
    __for_range = (const std::set<unsigned int> *)HomeSubFieldData::getBundleIndexSet(sub_field_data);
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v12 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = *v12;
      v13 = *(unsigned int *)(v3 + 48);
      if ( v13 < std::vector<data::PointInfo>::size(&bundle_config_ptr->points) )
      {
        point_info = std::vector<data::PointInfo>::operator[](&bundle_config_ptr->points, *(unsigned int *)(v3 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&point_info->point_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)point_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_info->point_type >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 64) = point_info->point_type;
        if ( *(_DWORD *)(v3 + 64) )
        {
          gadget_id = GatherExcelConfigMgr::getGatherGadgetId(gather_config_mgr, *(_DWORD *)(v3 + 64));
          if ( gadget_id )
          {
            *(_DWORD *)(v3 + 224) = *(_DWORD *)(v3 + 64);
            *(_DWORD *)(v3 + 236) = *(_DWORD *)(v3 + 48);
            if ( *(_BYTE *)(((unsigned __int64)&point_info->rot_x >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)point_info + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_info->rot_x >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            rot_x = point_info->rot_x;
            if ( *(_BYTE *)(((unsigned __int64)&point_info->rot_y >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&point_info->rot_y >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            rot_y = point_info->rot_y;
            if ( *(_BYTE *)(((unsigned __int64)&point_info->rot_z >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)point_info + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_info->rot_z >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            Vector3::Vector3(&rot, rot_x, rot_y, point_info->rot_z);
            *(Quaternion *)(v3 + 256) = Quaternion::fromRotation(&rot);
            *(Quaternion *)(v3 + 288) = Quaternion::fromRotation(&sub_field_data->rot);
            v50 = operator*((const Quaternion *)(v3 + 288), (const Quaternion *)(v3 + 256));
            *(Vector3 *)(v3 + 96) = Quaternion::toEuler(&v50);
            if ( *(_BYTE *)(((unsigned __int64)&point_info->offset_x >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&point_info->offset_x >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            offset_x = point_info->offset_x;
            if ( *(_BYTE *)(((unsigned __int64)&point_info->offset_y >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)point_info + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_info->offset_y >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            offset_y = point_info->offset_y;
            if ( *(_BYTE *)(((unsigned __int64)&point_info->offset_z >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&point_info->offset_z >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            Vector3::Vector3((Vector3 *const)(v3 + 128), offset_x, offset_y, point_info->offset_z);
            *(Vector3 *)(v3 + 160) = Quaternion::rotateVector3(
                                       (const Quaternion *const)(v3 + 288),
                                       (const Vector3 *)(v3 + 128));
            *(Vector3 *)(v3 + 192) = operator+(&sub_field_data->pos, (const Vector3 *)(v3 + 160));
            SceneHomeComp::createHomeGatherGadget(this, gadget_id, v3 + 224, v3 + 192, v3 + 96, sub_field_data);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v53,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/scene_home_comp.cpp",
              "createHomeGatherBundle",
              398);
            v28 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    &v53,
                    (const char (*)[48])"[HOME_PLANT]getGatherGadgetId fail. bundle id: ");
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v28,
                    (const unsigned int *)(v3 + 80));
            v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])" index: ");
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    (const unsigned int *)(v3 + 48));
            v32 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v31,
                    (const char (*)[14])" point type: ");
            v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v32,
                    (const unsigned int *)(v3 + 64));
            v34 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v33,
                    (const char (*)[12])" home_uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Scene::getOwnerUid(this->scene_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &val);
            common::milog::MiLogStream::~MiLogStream(&v53);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_home_comp.cpp",
            "createHomeGatherBundle",
            392);
          v21 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v52,
                  (const char (*)[52])"[HOME_PLANT]bundle index no point type. bundle id: ");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v3 + 80));
          v23 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])" index: ");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v3 + 48));
          v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v24,
                  (const char (*)[14])" point size: ");
          v44 = std::vector<data::PointInfo>::size(&bundle_config_ptr->points);
          v26 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v25, &v44);
          v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v26, (const char (*)[12])" home_uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Scene::getOwnerUid(this->scene_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
          common::milog::MiLogStream::~MiLogStream(&v52);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_home_comp.cpp",
          "createHomeGatherBundle",
          385);
        v14 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v51,
                (const char (*)[51])"[HOME_PLANT]bundle index out of range. bundle id: ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 80));
        v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" index: ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 48));
        v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" point size: ");
        v44 = std::vector<data::PointInfo>::size(&bundle_config_ptr->points);
        v19 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v18, &v44);
        v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])" home_uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Scene::getOwnerUid(this->scene_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
        common::milog::MiLogStream::~MiLogStream(&v51);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "createHomeGatherBundle",
      370);
    v6 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v53,
           (const char (*)[58])"[HOME_PLANT]findGatherBundleExcelConfig fail. bundle id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 80));
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" home_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v53);
    result = 0xFFFFFFFFLL;
  }
  if ( v54 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 421: range 0000000015CD9D3C-0000000015CDA274
__int64 __fastcall SceneHomeComp::clearHomeFishMonster(SceneHomeComp *const this, uint32_t fishpond_guid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v13; // rdx
  Scene *scene; // rcx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 13 entity_id:427 48 4 17 fishpond_guid:420 64 8 8 iter:422 96 16 14 entity_ptr:429";
  *(_QWORD *)(v2 + 16) = SceneHomeComp::clearHomeFishMonster;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = fishpond_guid;
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                         &this->fishpond_guid_entities_map_,
                                                                                         (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  __for_end._M_current = (unsigned int *)std::unordered_map<unsigned int,std::vector<unsigned int>>::end(&this->fishpond_guid_entities_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_home_comp.cpp",
      "clearHomeFishMonster",
      425);
    v5 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v24,
           (const char (*)[57])"[HOME_FISH_FARMING] clearHomeFishMonster. fishpond_guid:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])" fish monster count:");
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64));
    __for_end._M_current = (unsigned int *)std::vector<unsigned int>::size(&v8->second);
    v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v7,
           (const unsigned __int64 *)&__for_end);
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 32) = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v24);
    __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64))->second;
    __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v13 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v13;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene = this->scene_;
      p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
      if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
        p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
      v16 = *p_vptr_DescribalBase + 120LL;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v16 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, Scene *, _QWORD))v16)(v2 + 96, scene, *(unsigned int *)(v2 + 32));
      if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v2 + 96), 0LL) )
      {
        v17 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8();
        v18 = *(_QWORD *)v17 + 128LL;
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, VisionContext *))v18)(v17, &VisionContext::miss_context);
      }
      std::map<unsigned int,HomeAnimalInfo>::erase(
        &this->animal_info_map_,
        (const std::map<unsigned int,HomeAnimalInfo>::key_type *)(v2 + 32));
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 96));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    std::unordered_map<unsigned int,std::vector<unsigned int>>::erase(
      &this->fishpond_guid_entities_map_,
      *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 64));
  }
  result = 0LL;
  if ( v25 == (char *)v2 )
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
  return result;
};

// Line 442: range 0000000015CDA276-0000000015CDA84D
__int64 __fastcall SceneHomeComp::clearHomeFishMonster(
        SceneHomeComp *const this,
        uint32_t scene_id,
        uint32_t local_entity_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> >,false,true>::pointer v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> >,false,true>::pointer v14; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v15; // rdx
  Scene *scene; // rcx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 result; // rax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+20h] [rbp-140h]
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-130h] BYREF
  char v27[272]; // [rsp+50h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 13 entity_id:451 64 4 12 scene_id:441 80 4 19 local_entity_id:441 96 8 8 iter:443 128 16 "
                        "14 entity_ptr:453 160 24 17 entity_id_vec:448";
  *(_QWORD *)(v3 + 16) = SceneHomeComp::clearHomeFishMonster;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 64) = scene_id;
  *(_DWORD *)(v3 + 80) = local_entity_id;
  __for_end._M_current = (unsigned int *)std::make_pair<unsigned int &,unsigned int &>(
                                           (unsigned int *)(v3 + 64),
                                           (unsigned int *)(v3 + 80));
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> > > >::iterator *)(v3 + 96) = std::unordered_map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::find(&this->scene_point_fish_entities_map_, (const std::unordered_map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> > > >::key_type *)&__for_end);
  __for_end._M_current = (unsigned int *)std::unordered_map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::end(&this->scene_point_fish_entities_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<std::pair const<unsigned int,unsigned int>,std::vector<unsigned int>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> >,true> *)(v3 + 96),
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> >,true> *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_home_comp.cpp",
      "clearHomeFishMonster",
      446);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v26,
           (const char (*)[52])"[HOME_FISH_FARMING] clearHomeFishMonster. scene_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])", local_entity_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
    v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v9,
            (const char (*)[21])" fish monster count:");
    v11 = std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,std::vector<unsigned int>>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> >,false,true> *const)(v3 + 96));
    __for_end._M_current = (unsigned int *)std::vector<unsigned int>::size(&v11->second);
    v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v10,
            (const unsigned __int64 *)&__for_end);
    v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v26);
    v14 = std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,std::vector<unsigned int>>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> >,false,true> *const)(v3 + 96));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 160), &v14->second);
    std::unordered_map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::erase(
      &this->scene_point_fish_entities_map_,
      *(std::unordered_map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> > > >::iterator *)(v3 + 96));
    __for_range = (std::vector<unsigned int> *)(v3 + 160);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 160))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 160))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v15 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = *v15;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene = this->scene_;
      p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
      if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
        p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
      v18 = *p_vptr_DescribalBase + 120LL;
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, Scene *, _QWORD))v18)(v3 + 128, scene, *(unsigned int *)(v3 + 48));
      if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v3 + 128), 0LL) )
      {
        v19 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          v19 = __asan_report_load8();
        v20 = *(_QWORD *)v19 + 128LL;
        if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          v19 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, VisionContext *))v20)(v19, &VisionContext::miss_context);
      }
      std::map<unsigned int,HomeAnimalInfo>::erase(
        &this->animal_info_map_,
        (const std::map<unsigned int,HomeAnimalInfo>::key_type *)(v3 + 48));
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 128));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 160));
  }
  result = 0LL;
  if ( v27 == (char *)v3 )
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
  return result;
};

// Line 465: range 0000000015CDA84E-0000000015CDB09F
int32_t __cdecl SceneHomeComp::fillAllHomeFishMonsterInfo(SceneHomeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  Home *v8; // rax
  HomeFishFarmingComp *FishFarmingComp; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-128h] BYREF
  unsigned int OwnerUid; // [rsp+1Ch] [rbp-124h] BYREF
  uint32_t scene_id; // [rsp+20h] [rbp-120h]
  data::SpeicalFurnitureType furniture_speical_type; // [rsp+24h] [rbp-11Ch]
  std::unordered_map<unsigned int,HomeFishFarmingData>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::unordered_map<unsigned int,HomeFishFarmingData>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  HomeModuleFishFarmingData *module_data_ptr; // [rsp+38h] [rbp-108h]
  std::unordered_map<unsigned int,HomeFishFarmingData> *__for_range; // [rsp+40h] [rbp-100h]
  std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> > > *__for_range_0; // [rsp+48h] [rbp-F8h]
  const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> *v27; // [rsp+50h] [rbp-F0h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> >::type *key_pair; // [rsp+58h] [rbp-E8h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> >::type *fish_farming_data_0; // [rsp+60h] [rbp-E0h]
  const std::pair<unsigned int const,HomeFishFarmingData> *v30; // [rsp+68h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeFishFarmingData> >::type *guid; // [rsp+70h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeFishFarmingData> >::type *fish_farming_data; // [rsp+78h] [rbp-C8h]
  std::shared_ptr<Config> v33; // [rsp+80h] [rbp-C0h] BYREF
  common::milog::MiLogStream v34; // [rsp+90h] [rbp-B0h] BYREF
  char v35[144]; // [rsp+B0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 18 home_module_id:474 64 16 12 home_ptr:466";
  *(_QWORD *)(v1 + 16) = SceneHomeComp::fillAllHomeFishMonsterInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnHome((const Scene *const)(v1 + 64));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "fillAllHomeFishMonsterInfo",
      469);
    v4 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v34,
           (const char (*)[56])"[HOME_FISH_FARMING] getOwnHome() return null. scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    OwnerUid = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &OwnerUid);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene_id = Scene::getSceneId(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v1 + 48) = Scene::getOwnHomeModuleId(this->scene_);
    v8 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    FishFarmingComp = Home::getFishFarmingComp(v8);
    module_data_ptr = HomeFishFarmingComp::getModuleFishFarmingData(FishFarmingComp, *(_DWORD *)(v1 + 48));
    if ( module_data_ptr )
    {
      __for_range = &module_data_ptr->fish_farming_data_map;
      __for_begin._M_cur = std::unordered_map<unsigned int,HomeFishFarmingData>::begin(&module_data_ptr->fish_farming_data_map)._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,HomeFishFarmingData>::end(&module_data_ptr->fish_farming_data_map)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFishFarmingData>,false>(
                &__for_begin,
                &__for_end) )
      {
        v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator*(&__for_begin);
        guid = std::get<0ul,unsigned int const,HomeFishFarmingData>(v30);
        fish_farming_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeFishFarmingData> >::type *)std::get<1ul,unsigned int const,HomeFishFarmingData>(v30);
        if ( *(_BYTE *)(((unsigned __int64)&fish_farming_data->scene_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&fish_farming_data->scene_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( scene_id == fish_farming_data->scene_id )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v33);
          p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.home_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&fish_farming_data->furniture_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)fish_farming_data + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_farming_data->furniture_id >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          furniture_speical_type = HomeWorldExcelConfigMgr::getFurnitureSpeicalType(
                                     p_home_config_mgr,
                                     fish_farming_data->furniture_id);
          std::shared_ptr<Config>::~shared_ptr(&v33);
          if ( furniture_speical_type == Fishpond )
          {
            SceneHomeComp::fillHomeFishMonsterInfo(this, fish_farming_data);
          }
          else if ( furniture_speical_type == Fishtank )
          {
            SceneHomeComp::fillHomeFishtankMonsterInfo(this, fish_farming_data);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_home_comp.cpp",
              "fillAllHomeFishMonsterInfo",
              504);
            v16 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
                    &v34,
                    (const char (*)[82])"[HOME_FISH_FARMING] furniture_speical_type not fish type, furniture_speical_type:");
            OwnerUid = furniture_speical_type;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &OwnerUid);
            common::milog::MiLogStream::~MiLogStream(&v34);
          }
        }
        std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator++(&__for_begin);
      }
      __for_range_0 = &module_data_ptr->scene_point_fish_farming_data_map;
      __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::begin(&module_data_ptr->scene_point_fish_farming_data_map)._M_cur;
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,true>(
                (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,true> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,true> *)&__for_end) )
      {
        v27 = std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true> *const)&__for_begin);
        key_pair = std::get<0ul,std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>(v27);
        fish_farming_data_0 = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>(v27);
        if ( *(_BYTE *)(((unsigned __int64)&fish_farming_data_0->scene_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&fish_farming_data_0->scene_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( scene_id == fish_farming_data_0->scene_id )
          SceneHomeComp::fillHomeScenePointFishMonsterInfo(this, fish_farming_data_0);
        std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true> *const)&__for_begin);
      }
      v7 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_home_comp.cpp",
        "fillAllHomeFishMonsterInfo",
        478);
      v10 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
              &v34,
              (const char (*)[68])"[HOME_FISH_FARMING] getModuleFishFarmingData return null. scene_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getSceneId(this->scene_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" home_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      OwnerUid = Scene::getOwnerUid(this->scene_);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &OwnerUid);
      v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v13,
              (const char (*)[18])" home_module_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v34);
      v7 = 0;
    }
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 64));
  result = v7;
  if ( v35 == (char *)v1 )
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

// Line 525: range 0000000015CDB0A0-0000000015CDB4C7
int32_t __cdecl SceneHomeComp::fillHomeFishMonsterInfo(
        SceneHomeComp *const this,
        const HomeFishFarmingData *fish_farming_data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  JsonConfigMgr *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  int32_t v11; // r14d
  uint32_t v12; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-D8h] BYREF
  unsigned int OwnerUid; // [rsp+1Ch] [rbp-D4h] BYREF
  const data::ConfigHomeFishpond *fishpond_json_config_ptr; // [rsp+20h] [rbp-D0h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 28 random_fish_born_pos_vec:537";
  *(_QWORD *)(v2 + 16) = SceneHomeComp::fillHomeFishMonsterInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.json_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&fish_farming_data->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)fish_farming_data + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_farming_data->furniture_id >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  fishpond_json_config_ptr = JsonConfigMgr::findHomeFishpondConfig(p_json_config_mgr, fish_farming_data->furniture_id);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( fishpond_json_config_ptr )
  {
    std::vector<data::ConfigHomeCommonPos>::vector((std::vector<data::ConfigHomeCommonPos> *const)(v2 + 32));
    v12 = std::vector<unsigned int>::size(&fish_farming_data->fish_id_vec);
    common::tools::RandomUtils::randomSelect<data::ConfigHomeCommonPos>(
      &fishpond_json_config_ptr->fish_born_pos_list,
      (std::vector<data::ConfigHomeCommonPos> *)(v2 + 32),
      v12);
    if ( SceneHomeComp::createFishWithRelativeBornPos(
           this,
           fish_farming_data,
           (const std::vector<data::ConfigHomeCommonPos> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_home_comp.cpp",
        "fillHomeFishMonsterInfo",
        543);
      common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
        &v18,
        (const char (*)[57])"[HOME_FISH_FARMING] createFishWithRelativeBornPos fails.");
      common::milog::MiLogStream::~MiLogStream(&v18);
      v11 = -1;
    }
    else
    {
      v11 = 0;
    }
    std::vector<data::ConfigHomeCommonPos>::~vector((std::vector<data::ConfigHomeCommonPos> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "fillHomeFishMonsterInfo",
      530);
    v6 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
           &v18,
           (const char (*)[72])"[HOME_FISH_FARMING] find home fishpond json config error. furniture id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &fish_farming_data->furniture_id);
    v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    OwnerUid = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &OwnerUid);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v11 = -1;
  }
  result = v11;
  if ( v19 == (char *)v2 )
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
  return result;
};

// Line 551: range 0000000015CDB4C8-0000000015CDC0B7
int32_t __cdecl SceneHomeComp::fillHomeFishtankMonsterInfo(
        SceneHomeComp *const this,
        const HomeFishFarmingData *fish_farming_data)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  JsonConfigMgr *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::vector<unsigned int>::size_type v12; // rcx
  common::milog::MiLogStream *v13; // rbx
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r15
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // r15d
  std::vector<data::ConfigHomeCommonPos>::reference v26; // rdx
  std::vector<data::ConfigHomeCommonPos>::reference v27; // rdx
  char v28; // cl
  const std::vector<data::ConfigHomeCommonPos>::value_type *v29; // rax
  int32_t result; // eax
  float water_height; // [rsp+Ch] [rbp-204h]
  float v32; // [rsp+Ch] [rbp-204h]
  unsigned int val; // [rsp+24h] [rbp-1ECh] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-1E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-1E0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos> >,false>::__node_type *M_cur; // [rsp+38h] [rbp-1D8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos> >,false> __y; // [rsp+40h] [rbp-1D0h] BYREF
  const data::ConfigHomeFishtank *fishtank_json_config_ptr; // [rsp+48h] [rbp-1C8h]
  const std::unordered_map<unsigned int,std::vector<data::ConfigHomeCommonPos>> *fish_born_pos_map; // [rsp+50h] [rbp-1C0h]
  std::vector<unsigned int> *__for_range; // [rsp+58h] [rbp-1B8h]
  const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos> >,false,false> *iter; // [rsp+60h] [rbp-1B0h]
  const data::ConfigHomeCommonPosList *level_born_pos_list; // [rsp+68h] [rbp-1A8h]
  std::shared_ptr<Config> v43; // [rsp+70h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v44; // [rsp+80h] [rbp-190h] BYREF
  char v45[368]; // [rsp+A0h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 12 level_id:582 64 24 21 randome_level_vec:568 128 24 13 level_vec:569 192 24 28 random_f"
                        "ish_born_pos_vec:581 256 24 11 tmp_vec:592";
  *(_QWORD *)(v3 + 16) = SceneHomeComp::fillHomeFishtankMonsterInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v43);
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.json_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&fish_farming_data->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)fish_farming_data + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_farming_data->furniture_id >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  fishtank_json_config_ptr = JsonConfigMgr::findHomeFishtankConfig(p_json_config_mgr, fish_farming_data->furniture_id);
  std::shared_ptr<Config>::~shared_ptr(&v43);
  if ( fishtank_json_config_ptr )
  {
    v12 = std::vector<unsigned int>::size(&fish_farming_data->fish_id_vec);
    if ( *(_BYTE *)(((unsigned __int64)fishtank_json_config_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)fishtank_json_config_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v12 <= fishtank_json_config_ptr->max_fish_count )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
      common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,std::vector<data::ConfigHomeCommonPos>>>(
        (std::vector<unsigned int> *)(v3 + 128),
        &fishtank_json_config_ptr->fish_born_pos_map);
      v14 = std::vector<unsigned int>::size(&fish_farming_data->fish_id_vec);
      common::tools::RandomUtils::randomSelect<unsigned int>(
        (const std::vector<unsigned int> *)(v3 + 128),
        (std::vector<unsigned int> *)(v3 + 64),
        v14);
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_home_comp.cpp",
        "fillHomeFishtankMonsterInfo",
        572);
      v15 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v44,
              (const char (*)[39])"[HOME_FISH_FARMING] randome_level_vec:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int>(v15, (const std::vector<unsigned int> *)(v3 + 64));
      v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])", level_vec:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int>(v17, (const std::vector<unsigned int> *)(v3 + 128));
      v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])", size = ");
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos> >,false>::__node_type *)std::vector<unsigned int>::size(&fish_farming_data->fish_id_vec);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v19, (const unsigned __int64 *)&__y);
      common::milog::MiLogStream::~MiLogStream(&v44);
      if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_home_comp.cpp",
          "fillHomeFishtankMonsterInfo",
          575);
        common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
          &v44,
          (const char (*)[45])"[HOME_FISH_FARMING] randome_level_vec empty.");
        common::milog::MiLogStream::~MiLogStream(&v44);
        v2 = -1;
      }
      else
      {
        fish_born_pos_map = &fishtank_json_config_ptr->fish_born_pos_map;
        std::vector<data::ConfigHomeCommonPos>::vector((std::vector<data::ConfigHomeCommonPos> *const)(v3 + 192));
        __for_range = (std::vector<unsigned int> *)(v3 + 64);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v20 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 48) = *v20;
          M_cur = std::unordered_map<unsigned int,std::vector<data::ConfigHomeCommonPos>>::find(
                    fish_born_pos_map,
                    (const std::unordered_map<unsigned int,std::vector<data::ConfigHomeCommonPos>>::key_type *)(v3 + 48))._M_cur;
          iter = (const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos> >,false,false> *)&M_cur;
          __y._M_cur = std::unordered_map<unsigned int,std::vector<data::ConfigHomeCommonPos>>::end(fish_born_pos_map)._M_cur;
          if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos>>,false>(
                 iter,
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v44,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_home_comp.cpp",
              "fillHomeFishtankMonsterInfo",
              587);
            v21 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    &v44,
                    (const char (*)[51])"[HOME_FISH_FARMING] fishtank don't find the level:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v44);
            v2 = -1;
            goto LABEL_38;
          }
          level_born_pos_list = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos>>,false,false>::operator->(iter)->second;
          std::vector<data::ConfigHomeCommonPos>::vector((std::vector<data::ConfigHomeCommonPos> *const)(v3 + 256));
          common::tools::RandomUtils::randomSelect<data::ConfigHomeCommonPos>(
            level_born_pos_list,
            (std::vector<data::ConfigHomeCommonPos> *)(v3 + 256),
            1u);
          if ( std::vector<data::ConfigHomeCommonPos>::size((const std::vector<data::ConfigHomeCommonPos> *const)(v3 + 256)) == 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&fishtank_json_config_ptr->water_height >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)fishtank_json_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fishtank_json_config_ptr->water_height >> 3)
                                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            water_height = fishtank_json_config_ptr->water_height;
            v26 = std::vector<data::ConfigHomeCommonPos>::operator[](
                    (std::vector<data::ConfigHomeCommonPos> *const)(v3 + 256),
                    0LL);
            if ( *(_BYTE *)(((unsigned __int64)&v26->position.y >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v26 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->position.y >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v32 = water_height - v26->position.y;
            v27 = std::vector<data::ConfigHomeCommonPos>::operator[](
                    (std::vector<data::ConfigHomeCommonPos> *const)(v3 + 256),
                    0LL);
            v28 = *(_BYTE *)(((unsigned __int64)&v27->position.y >> 3) + 0x7FFF8000);
            if ( v28 != 0 && (char)((((_BYTE)v27 + 4) & 7) + 3) >= v28 )
              __asan_report_store4(&v27->position.y, v28 != 0, (_BYTE)v27);
            v27->position.y = v32;
            v29 = std::vector<data::ConfigHomeCommonPos>::operator[](
                    (std::vector<data::ConfigHomeCommonPos> *const)(v3 + 256),
                    0LL);
            std::vector<data::ConfigHomeCommonPos>::push_back(
              (std::vector<data::ConfigHomeCommonPos> *const)(v3 + 192),
              v29);
            v25 = 1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v44,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_home_comp.cpp",
              "fillHomeFishtankMonsterInfo",
              596);
            v22 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    &v44,
                    (const char (*)[56])"[HOME_FISH_FARMING] randomSelect error, tmp_vec.size():");
            __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos> >,false>::__node_type *)std::vector<data::ConfigHomeCommonPos>::size((const std::vector<data::ConfigHomeCommonPos> *const)(v3 + 256));
            v23 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v22,
                    (const unsigned __int64 *)&__y);
            v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v23,
                    (const char (*)[12])", level_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v44);
            v2 = -1;
            v25 = 0;
          }
          std::vector<data::ConfigHomeCommonPos>::~vector((std::vector<data::ConfigHomeCommonPos> *const)(v3 + 256));
          if ( v25 != 1 )
            goto LABEL_38;
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        if ( SceneHomeComp::createFishWithRelativeBornPos(
               this,
               fish_farming_data,
               (const std::vector<data::ConfigHomeCommonPos> *)(v3 + 192)) )
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_home_comp.cpp",
            "fillHomeFishtankMonsterInfo",
            609);
          common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
            &v44,
            (const char (*)[57])"[HOME_FISH_FARMING] createFishWithRelativeBornPos fails.");
          common::milog::MiLogStream::~MiLogStream(&v44);
          v2 = -1;
        }
        else
        {
          v2 = 0;
        }
LABEL_38:
        std::vector<data::ConfigHomeCommonPos>::~vector((std::vector<data::ConfigHomeCommonPos> *const)(v3 + 192));
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 128));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_home_comp.cpp",
        "fillHomeFishtankMonsterInfo",
        563);
      v13 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
              &v44,
              (const char (*)[80])"[HOME_FISH_FARMING] fish vec is larger than max_fish_count, fish_id_vec.size():");
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::ConfigHomeCommonPos> >,false>::__node_type *)std::vector<unsigned int>::size(&fish_farming_data->fish_id_vec);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, (const unsigned __int64 *)&__y);
      common::milog::MiLogStream::~MiLogStream(&v44);
      v2 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "fillHomeFishtankMonsterInfo",
      556);
    v7 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
           &v44,
           (const char (*)[72])"[HOME_FISH_FARMING] find home fishtank json config error. furniture id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &fish_farming_data->furniture_id);
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v44);
    v2 = -1;
  }
  result = v2;
  if ( v45 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 617: range 0000000015CDC0B8-0000000015CDCEBB
int32_t __cdecl SceneHomeComp::createFishWithRelativeBornPos(
        SceneHomeComp *const this,
        const HomeFishFarmingData *fish_farming_data,
        const std::vector<data::ConfigHomeCommonPos> *random_fish_born_pos_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  bool v7; // r14
  JsonConfigMgr *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  int32_t v14; // r14d
  common::milog::MiLogStream *v16; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v17; // rdx
  std::vector<data::ConfigHomeCommonPos>::size_type second; // r14
  common::milog::MiLogStream *v19; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> >::pointer v23; // rax
  HomeFishtankFishInfo *p_fishtank_fish_info; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  float fish_scale; // xmm0_4
  bool v28; // dl
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v29; // rdx
  std::vector<data::ConfigHomeCommonPos>::const_reference v30; // rdx
  float v31; // xmm1_4
  bool v32; // dl
  __int64 v33; // rsi
  uint32_t initial_pose; // ecx
  char v35; // dl
  bool v36; // dl
  float y; // xmm0_4
  bool v38; // dl
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  std::vector<unsigned int> *v48; // rax
  const unsigned int *v49; // rcx
  std::vector<unsigned int> *v50; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>,bool> v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // r14
  common::milog::MiLogStream *v55; // rax
  int32_t result; // eax
  float water_height; // [rsp+4h] [rbp-20Ch]
  unsigned int val; // [rsp+28h] [rbp-1E8h] BYREF
  unsigned int OwnerUid; // [rsp+2Ch] [rbp-1E4h] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-1E0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-1D8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> >::_Self __y; // [rsp+40h] [rbp-1D0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self v65; // [rsp+48h] [rbp-1C8h] BYREF
  const data::ConfigHomeFishtank *fishtank_json_config_ptr; // [rsp+50h] [rbp-1C0h]
  std::vector<unsigned int> *__for_range; // [rsp+58h] [rbp-1B8h]
  const unsigned int *entity_id; // [rsp+60h] [rbp-1B0h]
  HomeAnimalInfo *animal_info; // [rsp+68h] [rbp-1A8h]
  std::shared_ptr<Config> v70; // [rsp+70h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v71; // [rsp+80h] [rbp-190h] BYREF
  common::milog::MiLogStream v72; // [rsp+A0h] [rbp-170h] BYREF
  common::milog::MiLogStream v73; // [rsp+C0h] [rbp-150h] BYREF
  char v74[304]; // [rsp+E0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 8 8 iter:637 80 8 14 index_iter:638 112 24 22 fish_entity_id_vec:618 176 48 28 fish_entity_"
                        "id_index_map:619";
  *(_QWORD *)(v3 + 16) = SceneHomeComp::createFishWithRelativeBornPos;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 112));
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 176));
  SceneHomeComp::fillFishAnimalInfo(
    this,
    fish_farming_data,
    random_fish_born_pos_vec,
    (std::vector<unsigned int> *)(v3 + 112),
    (std::map<unsigned int,unsigned int> *)(v3 + 176));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v70);
  p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v70)->design_config.txt_config_mgr.home_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&fish_farming_data->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)fish_farming_data + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_farming_data->furniture_id >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v7 = HomeWorldExcelConfigMgr::getFurnitureSpeicalType(p_home_config_mgr, fish_farming_data->furniture_id) == Fishtank;
  std::shared_ptr<Config>::~shared_ptr(&v70);
  if ( v7 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v70);
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v70)->design_config.json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&fish_farming_data->furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)fish_farming_data + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_farming_data->furniture_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    fishtank_json_config_ptr = JsonConfigMgr::findHomeFishtankConfig(p_json_config_mgr, fish_farming_data->furniture_id);
    std::shared_ptr<Config>::~shared_ptr(&v70);
    if ( !fishtank_json_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_home_comp.cpp",
        "createFishWithRelativeBornPos",
        630);
      v9 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
             &v73,
             (const char (*)[72])"[HOME_FISH_FARMING] find home fishtank json config error. furniture id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &fish_farming_data->furniture_id);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" scene_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getSceneId(this->scene_);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" home_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_14:
      OwnerUid = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &OwnerUid);
      common::milog::MiLogStream::~MiLogStream(&v73);
      v14 = -1;
      goto LABEL_57;
    }
    __for_range = (std::vector<unsigned int> *)(v3 + 112);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 112))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 112))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      entity_id = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      *(std::map<unsigned int,HomeAnimalInfo>::iterator *)(v3 + 48) = std::map<unsigned int,HomeAnimalInfo>::find(
                                                                        &this->animal_info_map_,
                                                                        entity_id);
      *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 80) = std::map<unsigned int,unsigned int>::find(
                                                                      (std::map<unsigned int,unsigned int> *const)(v3 + 176),
                                                                      entity_id);
      __y._M_node = std::map<unsigned int,HomeAnimalInfo>::end(&this->animal_info_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> >::_Self *)(v3 + 48),
             &__y)
        || (v65._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v3 + 176))._M_node,
            std::operator==(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 80),
              &v65)) )
      {
        common::milog::MiLogStream::create(
          &v71,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_home_comp.cpp",
          "createFishWithRelativeBornPos",
          641);
        v16 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v71,
                (const char (*)[55])"[HOME_FISH_FARMING] not have the fish, fish_entity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, entity_id);
        common::milog::MiLogStream::~MiLogStream(&v71);
        v14 = -1;
        goto LABEL_57;
      }
      v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&v17->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v17 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      second = v17->second;
      if ( second >= std::vector<data::ConfigHomeCommonPos>::size(random_fish_born_pos_vec) )
      {
        common::milog::MiLogStream::create(
          &v72,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_home_comp.cpp",
          "createFishWithRelativeBornPos",
          646);
        v19 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                &v72,
                (const char (*)[70])"[HOME_FISH_FARMING] index_iter->second too large, index_iter->second:");
        v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 80));
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &v20->second);
        v22 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                v21,
                (const char (*)[33])", random_fish_born_pos_vec.size:");
        v65._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<data::ConfigHomeCommonPos>::size(random_fish_born_pos_vec);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v22, (const unsigned __int64 *)&v65);
        common::milog::MiLogStream::~MiLogStream(&v72);
        v14 = -1;
        goto LABEL_57;
      }
      v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> > *const)(v3 + 48));
      animal_info = &v23->second;
      p_fishtank_fish_info = &v23->second.fishtank_fish_info;
      v25 = (unsigned __int8)p_fishtank_fish_info & 7;
      v26 = (*(_BYTE *)(((unsigned __int64)p_fishtank_fish_info >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)p_fishtank_fish_info >> 3) + 0x7FFF8000));
      if ( (_BYTE)v26 )
        __asan_report_store1(p_fishtank_fish_info, v25, v26);
      animal_info->fishtank_fish_info.is_fishtank_fish = 1;
      if ( *(_BYTE *)(((unsigned __int64)&fishtank_json_config_ptr->fish_scale >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&fishtank_json_config_ptr->fish_scale >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      fish_scale = fishtank_json_config_ptr->fish_scale;
      v28 = *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info.fish_scale >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)animal_info + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info.fish_scale >> 3)
                                                                    + 0x7FFF8000);
      if ( v28 )
        __asan_report_store4(&animal_info->fishtank_fish_info.fish_scale, (((_BYTE)animal_info + 56) & 7u) + 3, v28);
      animal_info->fishtank_fish_info.fish_scale = fish_scale;
      if ( *(_BYTE *)(((unsigned __int64)&fishtank_json_config_ptr->water_height >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)fishtank_json_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fishtank_json_config_ptr->water_height >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      water_height = fishtank_json_config_ptr->water_height;
      v29 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&v29->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v29 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v30 = std::vector<data::ConfigHomeCommonPos>::operator[](random_fish_born_pos_vec, v29->second);
      if ( *(_BYTE *)(((unsigned __int64)&v30->position.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v30 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->position.y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v31 = water_height - v30->position.y;
      v32 = *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info.fish_distance_from_water >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)animal_info + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info.fish_distance_from_water >> 3)
                                                                    + 0x7FFF8000);
      if ( v32 )
        __asan_report_store4(
          &animal_info->fishtank_fish_info.fish_distance_from_water,
          (((_BYTE)animal_info + 48) & 7u) + 3,
          v32);
      animal_info->fishtank_fish_info.fish_distance_from_water = v31;
      v33 = (((_BYTE)fishtank_json_config_ptr + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&fishtank_json_config_ptr->initial_pose >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)fishtank_json_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fishtank_json_config_ptr->initial_pose >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      initial_pose = fishtank_json_config_ptr->initial_pose;
      v35 = *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info.initial_pose_id >> 3) + 0x7FFF8000);
      LOBYTE(v33) = v35 != 0;
      v36 = v35 != 0 && (char)((((_BYTE)animal_info + 52) & 7) + 3) >= v35;
      if ( v36 )
        __asan_report_store4(&animal_info->fishtank_fish_info.initial_pose_id, v33, v36);
      animal_info->fishtank_fish_info.initial_pose_id = initial_pose;
      if ( *(_BYTE *)(((unsigned __int64)&animal_info->rot.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)animal_info + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&animal_info->rot.y >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      y = animal_info->rot.y;
      v38 = *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info.initial_rotation_y >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)animal_info + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&animal_info->fishtank_fish_info.initial_rotation_y >> 3)
                                                                    + 0x7FFF8000);
      if ( v38 )
        __asan_report_store4(
          &animal_info->fishtank_fish_info.initial_rotation_y,
          (((_BYTE)animal_info + 60) & 7u) + 3,
          v38);
      animal_info->fishtank_fish_info.initial_rotation_y = y;
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_home_comp.cpp",
        "createFishWithRelativeBornPos",
        659);
      v39 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
              &v73,
              (const char (*)[70])"[HOME_FISH_FARMING] fishtank create fish, fish_distance_from_water = ");
      v40 = common::milog::MiLogStream::operator<<<float,(float *)0>(
              v39,
              &animal_info->fishtank_fish_info.fish_distance_from_water);
      v41 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v40, (const char (*)[15])"fish_born_pos:");
      v42 = operator<<(v41, &animal_info->pos);
      v43 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v42, (const char (*)[17])", fish_born_rot:");
      v44 = operator<<(v43, &animal_info->rot);
      v45 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              v44,
              (const char (*)[30])", fish_farming_data.rotation:");
      v46 = operator<<(v45, &fish_farming_data->rotation);
      v47 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              v46,
              (const char (*)[31])", fish_farming_data.position: ");
      operator<<(v47, &fish_farming_data->position);
      common::milog::MiLogStream::~MiLogStream(&v73);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  v48 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v3 + 112));
  v51 = std::unordered_map<unsigned int,std::vector<unsigned int>>::emplace<unsigned int const&,std::vector<unsigned int>>(
          &this->fishpond_guid_entities_map_,
          &fish_farming_data->fishpond_guid,
          v48,
          v49,
          v50);
  if ( !v51.second )
  {
    common::milog::MiLogStream::create(
      &v73,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "createFishWithRelativeBornPos",
      667);
    v52 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
            &v73,
            (const char (*)[72])"[HOME_FISH_FARMING]fill home fish monster info duplicate fishpond_guid:");
    v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &fish_farming_data->fishpond_guid);
    v54 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v53, (const char (*)[11])" scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &val);
    v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v55, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_14;
  }
  v14 = 0;
LABEL_57:
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 176));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 112));
  result = v14;
  if ( v74 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 676: range 0000000015CDCEBC-0000000015CDDAF0
__int64 __fastcall SceneHomeComp::refreshHomeFishMonster(SceneHomeComp *const this, uint32_t fishpond_guid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  unsigned int v8; // r14d
  Home *v9; // rax
  HomeFishFarmingComp *FishFarmingComp; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  __int64 v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::pointer v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  HomeWorldExcelConfigMgr *p_home_config_mgr; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::pointer v30; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::pointer v31; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::pointer v32; // rax
  common::milog::MiLogStream *v33; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> >::pointer v42; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-158h] BYREF
  data::SpeicalFurnitureType furniture_speical_type; // [rsp+1Ch] [rbp-154h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-150h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false> __y; // [rsp+30h] [rbp-140h] BYREF
  HomeModuleFishFarmingData *module_data_ptr; // [rsp+38h] [rbp-138h]
  std::vector<unsigned int> *fish_entity_id_vec; // [rsp+40h] [rbp-130h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Config> v52; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v53; // [rsp+60h] [rbp-110h] BYREF
  char v54[240]; // [rsp+80h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 12 scene_id:686 48 4 18 home_module_id:687 64 4 13 entity_id:733 80 4 17 fishpond_guid:67"
                        "5 96 8 8 iter:696 128 8 8 iter:735 160 16 12 home_ptr:679";
  *(_QWORD *)(v2 + 16) = SceneHomeComp::refreshHomeFishMonster;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202178560;
  *(_DWORD *)(v2 + 80) = fishpond_guid;
  SceneHomeComp::clearHomeFishMonster(this, *(_DWORD *)(v2 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnHome((const Scene *const)(v2 + 160));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "refreshHomeFishMonster",
      682);
    v5 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v53,
           (const char (*)[56])"[HOME_FISH_FARMING] getOwnHome() return null. scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 64) = Scene::getSceneId(this->scene_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v53);
    v8 = -1;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 32) = Scene::getSceneId(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 48) = Scene::getOwnHomeModuleId(this->scene_);
  v9 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
  FishFarmingComp = Home::getFishFarmingComp(v9);
  module_data_ptr = HomeFishFarmingComp::getModuleFishFarmingData(FishFarmingComp, *(_DWORD *)(v2 + 48));
  if ( !module_data_ptr )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "refreshHomeFishMonster",
      691);
    v11 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
            &v53,
            (const char (*)[68])"[HOME_FISH_FARMING] getModuleFishFarmingData return null. scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 64) = Scene::getSceneId(this->scene_);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" home_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(this->scene_);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v14, (const char (*)[18])" home_module_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v53);
    v8 = -1;
    goto LABEL_50;
  }
  *(std::unordered_map<unsigned int,HomeFishFarmingData>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,HomeFishFarmingData>::find(
                                                                                   &module_data_ptr->fish_farming_data_map,
                                                                                   (const std::unordered_map<unsigned int,HomeFishFarmingData>::key_type *)(v2 + 80));
  __y._M_cur = std::unordered_map<unsigned int,HomeFishFarmingData>::end(&module_data_ptr->fish_farming_data_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,HomeFishFarmingData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false> *)(v2 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "refreshHomeFishMonster",
      699);
    v16 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
            &v53,
            (const char (*)[63])"[HOME_FISH_FARMING] not find fish farming data, fishpond_guid:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 80));
    v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" scene_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 32));
    v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_25:
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
    common::milog::MiLogStream::~MiLogStream(&v53);
    v8 = -1;
    goto LABEL_50;
  }
  v21 = (__int64)std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)(v21 + 64) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v21 + 64) >> 3) + 0x7FFF8000) <= 3 )
  {
    v21 = __asan_report_load4();
  }
  if ( *(_DWORD *)(v21 + 64) != *(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "refreshHomeFishMonster",
      706);
    v22 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
            &v53,
            (const char (*)[55])"[HOME_FISH_FARMING] scene id not match, fishpond_guid:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 80));
    v24 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v23,
            (const char (*)[24])" fish farming scene id:");
    v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false> *const)(v2 + 96));
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &v25->second.scene_id);
    v27 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v26,
            (const char (*)[27])" scene home comp scene id:");
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v2 + 32));
    v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_25;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v52);
  p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v52)->design_config.txt_config_mgr.home_config_mgr;
  v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&v30->second.furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->second.furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  furniture_speical_type = HomeWorldExcelConfigMgr::getFurnitureSpeicalType(p_home_config_mgr, v30->second.furniture_id);
  std::shared_ptr<Config>::~shared_ptr(&v52);
  if ( furniture_speical_type == Fishpond )
  {
    v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false> *const)(v2 + 96));
    SceneHomeComp::fillHomeFishMonsterInfo(this, &v31->second);
  }
  else if ( furniture_speical_type == Fishtank )
  {
    v32 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false> *const)(v2 + 96));
    SceneHomeComp::fillHomeFishtankMonsterInfo(this, &v32->second);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_home_comp.cpp",
      "refreshHomeFishMonster",
      726);
    v33 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
            &v53,
            (const char (*)[82])"[HOME_FISH_FARMING] furniture_speical_type not fish type, furniture_speical_type:");
    val = furniture_speical_type;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
    common::milog::MiLogStream::~MiLogStream(&v53);
  }
  fish_entity_id_vec = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                         &this->fishpond_guid_entities_map_,
                         (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 80));
  __for_range = fish_entity_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(fish_entity_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v34 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 64) = *v34;
    *(std::map<unsigned int,HomeAnimalInfo>::iterator *)(v2 + 128) = std::map<unsigned int,HomeAnimalInfo>::find(
                                                                       &this->animal_info_map_,
                                                                       (const std::map<unsigned int,HomeAnimalInfo>::key_type *)(v2 + 64));
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::map<unsigned int,HomeAnimalInfo>::end(&this->animal_info_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> >::_Self *)&__y) )
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_home_comp.cpp",
        "refreshHomeFishMonster",
        738);
      v35 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
              &v53,
              (const char (*)[64])"[HOME_FISH_FARMING] not find fish monster info, fishpond_guid: ");
      v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v2 + 80));
      v37 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v36, (const char (*)[12])" entity_id:");
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v2 + 64));
      v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v38, (const char (*)[11])" scene_id:");
      v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v2 + 32));
      v41 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])" home_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &val);
      common::milog::MiLogStream::~MiLogStream(&v53);
    }
    else
    {
      v42 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> > *const)(v2 + 128));
      SceneHomeComp::createAnimal(this, *(_DWORD *)(v2 + 64), &v42->second);
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  v8 = 0;
LABEL_50:
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 160));
  result = v8;
  if ( v54 == (char *)v2 )
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
  return result;
};

// Line 748: range 0000000015CDDAF2-0000000015CDE8AA
__int64 __fastcall SceneHomeComp::refreshHomeScenePointFishMonster(
        SceneHomeComp *const this,
        uint32_t scene_id,
        uint32_t local_entity_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  Home *v13; // rax
  HomeFishFarmingComp *FishFarmingComp; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  __int64 v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true>::pointer v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  unsigned int v33; // eax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true>::pointer v37; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v38; // rdx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> >::pointer v46; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-174h] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-170h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-168h] BYREF
  HomeModuleFishFarmingData *module_data_ptr; // [rsp+30h] [rbp-160h]
  std::vector<unsigned int> *fish_entity_id_vec; // [rsp+38h] [rbp-158h]
  std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-150h]
  std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> > >::key_type __x; // [rsp+48h] [rbp-148h] BYREF
  std::shared_ptr<Config> v56; // [rsp+50h] [rbp-140h] BYREF
  common::milog::MiLogStream v57; // [rsp+60h] [rbp-130h] BYREF
  char v58[272]; // [rsp+80h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 18 home_module_id:762 48 4 13 entity_id:798 64 4 12 scene_id:747 80 4 19 local_entity_id:"
                        "747 96 8 8 iter:770 128 8 8 iter:800 160 16 12 home_ptr:749 192 16 22 fishpond_point_ptr:785";
  *(_QWORD *)(v3 + 16) = SceneHomeComp::refreshHomeScenePointFishMonster;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  *(_DWORD *)(v3 + 64) = scene_id;
  *(_DWORD *)(v3 + 80) = local_entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnHome((const Scene *const)(v3 + 160));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v3 + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "refreshHomeScenePointFishMonster",
      752);
    v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v57,
           (const char (*)[55])"[HOME_SUMERU_FISH] getOwnHome() return null. scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Scene::getSceneId(this->scene_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v57);
    v9 = -1;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Scene::getSceneId(this->scene_) != *(_DWORD *)(v3 + 64) )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_home_comp.cpp",
      "refreshHomeScenePointFishMonster",
      758);
    v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v57,
            (const char (*)[49])"[HOME_SUMERU_FISH] scene_id not match, scene_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
    v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v11,
            (const char (*)[23])", scene_.getSceneId():");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v57);
    v9 = -1;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 32) = Scene::getOwnHomeModuleId(this->scene_);
  v13 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
  FishFarmingComp = Home::getFishFarmingComp(v13);
  module_data_ptr = HomeFishFarmingComp::getModuleFishFarmingData(FishFarmingComp, *(_DWORD *)(v3 + 32));
  if ( !module_data_ptr )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "refreshHomeScenePointFishMonster",
      766);
    v15 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
            &v57,
            (const char (*)[67])"[HOME_SUMERU_FISH] getModuleFishFarmingData return null. scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Scene::getSceneId(this->scene_);
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
    v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" home_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(this->scene_);
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
    v19 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v18, (const char (*)[18])" home_module_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v57);
    v9 = -1;
    goto LABEL_50;
  }
  __x = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v3 + 64), (unsigned int *)(v3 + 80));
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> > >::iterator *)(v3 + 96) = std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::find(&module_data_ptr->scene_point_fish_farming_data_map, &__x);
  __x = (std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> > >::key_type)std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::end(&module_data_ptr->scene_point_fish_farming_data_map)._M_cur;
  if ( std::__detail::operator==<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,true> *)(v3 + 96),
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,true> *)&__x) )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "refreshHomeScenePointFishMonster",
      773);
    v20 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
            &v57,
            (const char (*)[57])"[HOME_SUMERU_FISH] not find fish farming data, scene_id:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 64));
    v22 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v21, (const char (*)[18])" local_entity_id:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 80));
    v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_29:
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
    common::milog::MiLogStream::~MiLogStream(&v57);
    v9 = -1;
    goto LABEL_50;
  }
  v25 = (__int64)std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true> *const)(v3 + 96));
  if ( *(_BYTE *)(((unsigned __int64)(v25 + 56) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v25 + 56) >> 3) + 0x7FFF8000) <= 3 )
  {
    v25 = __asan_report_load4();
  }
  if ( *(_DWORD *)(v25 + 56) != *(_DWORD *)(v3 + 64) )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "refreshHomeScenePointFishMonster",
      780);
    v26 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            &v57,
            (const char (*)[56])"[HOME_SUMERU_FISH] scene id not match, local_entity_id:");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 80));
    v28 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v27,
            (const char (*)[24])" fish farming scene id:");
    v29 = std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true> *const)(v3 + 96));
    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &v29->second.scene_id);
    v31 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v30,
            (const char (*)[27])" scene home comp scene id:");
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v3 + 64));
    v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v32, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_29;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v56);
  v33 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56);
  JsonConfigMgr::findLocalEntity<data::ConfigFishpondScenePoint>(
    (const JsonConfigMgr *const)(v3 + 192),
    v33 + 93080,
    *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v56);
  if ( std::operator==<data::ConfigFishpondScenePoint>(
         (const std::shared_ptr<data::ConfigFishpondScenePoint> *)(v3 + 192),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_home_comp.cpp",
      "refreshHomeScenePointFishMonster",
      788);
    v34 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v57,
            (const char (*)[51])"[HOME_SUMERU_FISH] findScenePoint fails, scene_id:");
    v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v3 + 64));
    v36 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v35, (const char (*)[19])", local_entity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v57);
    v9 = -1;
  }
  else
  {
    SceneHomeComp::clearHomeFishMonster(this, *(_DWORD *)(v3 + 64), *(_DWORD *)(v3 + 80));
    v37 = std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true> *const)(v3 + 96));
    SceneHomeComp::fillHomeScenePointFishMonsterInfo(this, &v37->second);
    __x = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v3 + 64), (unsigned int *)(v3 + 80));
    fish_entity_id_vec = std::unordered_map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::operator[](
                           &this->scene_point_fish_entities_map_,
                           &__x);
    __for_range = fish_entity_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(fish_entity_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(fish_entity_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v38 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = *v38;
      *(std::map<unsigned int,HomeAnimalInfo>::iterator *)(v3 + 128) = std::map<unsigned int,HomeAnimalInfo>::find(
                                                                         &this->animal_info_map_,
                                                                         (const std::map<unsigned int,HomeAnimalInfo>::key_type *)(v3 + 48));
      __x = (std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> > >::key_type)std::map<unsigned int,HomeAnimalInfo>::end(&this->animal_info_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> >::_Self *)(v3 + 128),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> >::_Self *)&__x) )
      {
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_home_comp.cpp",
          "refreshHomeScenePointFishMonster",
          803);
        v39 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                &v57,
                (const char (*)[65])"[HOME_SUMERU_FISH] not find fish monster info, local_entity_id: ");
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v39,
                (const unsigned int *)(v3 + 80));
        v41 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v40, (const char (*)[12])" entity_id:");
        v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v41,
                (const unsigned int *)(v3 + 48));
        v43 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v42, (const char (*)[11])" scene_id:");
        v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v43,
                (const unsigned int *)(v3 + 64));
        v45 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v44, (const char (*)[11])" home_uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Scene::getOwnerUid(this->scene_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &val);
        common::milog::MiLogStream::~MiLogStream(&v57);
      }
      else
      {
        v46 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeAnimalInfo> > *const)(v3 + 128));
        SceneHomeComp::createAnimal(this, *(_DWORD *)(v3 + 48), &v46->second);
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v9 = 0;
  }
  std::shared_ptr<data::ConfigFishpondScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigFishpondScenePoint> *const)(v3 + 192));
LABEL_50:
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 160));
  result = v9;
  if ( v58 == (char *)v3 )
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
  return result;
};

// Line 814: range 0000000015CDE8AC-0000000015CDEEE0
int32_t __cdecl SceneHomeComp::createServerGadget(
        SceneHomeComp *const this,
        const HomeFurnitureServerGadgetData *server_gadget_data)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  Scene *Scene; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t v11; // r14d
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  void (__fastcall *v18)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Scene *, VisionContext *); // r15
  Scene *v19; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  unsigned int *v21; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-454h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-450h] BYREF
  char v25[1072]; // [rsp+50h] [rbp-430h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(1024LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 14 gadget_ptr:820 80 816 9 param:815";
  *(_QWORD *)(v2 + 16) = SceneHomeComp::createServerGadget;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862748] = -202116109;
  v4[536862749] = -202116109;
  v4[536862750] = -202116109;
  v4[536862751] = -202116109;
  GadgetParam::GadgetParam((GadgetParam *const)(v2 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&server_gadget_data->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)server_gadget_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&server_gadget_data->gadget_id >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 80) = server_gadget_data->gadget_id;
  Scene = SceneCompBase::getScene(this);
  *(_DWORD *)(v2 + 88) = Scene::genNewEntityId(Scene, PROT_ENTITY_GADGET);
  if ( (((unsigned __int8)server_gadget_data + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&server_gadget_data->spawn_pos >> 3)
                                                                   + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&server_gadget_data->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&server_gadget_data->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)server_gadget_data + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&server_gadget_data->spawn_pos.z
                                                                      + 3) >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&server_gadget_data->spawn_pos, 12LL);
  }
  *(Vector3 *)(v2 + 92) = server_gadget_data->spawn_pos;
  if ( (((unsigned __int8)server_gadget_data + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&server_gadget_data->spawn_rot >> 3)
                                                                    + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&server_gadget_data->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&server_gadget_data->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)server_gadget_data + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&server_gadget_data->spawn_rot.z
                                                                      + 3) >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&server_gadget_data->spawn_rot, 12LL);
  }
  *(Vector3 *)(v2 + 104) = server_gadget_data->spawn_rot;
  EntityMgr::createGadget((const GadgetParam *)(v2 + 48));
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_home_comp.cpp",
      "createServerGadget",
      823);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v24,
           (const char (*)[47])"[HOME] create server gadget failed, gadget_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &server_gadget_data->gadget_id);
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])", pos:");
    v9 = operator<<(v8, (const Vector3 *)(v2 + 92));
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])", rot:");
    operator<<(v10, (const Vector3 *)(v2 + 104));
    common::milog::MiLogStream::~MiLogStream(&v24);
    v11 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_home_comp.cpp",
      "createServerGadget",
      826);
    v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v24,
            (const char (*)[40])"[HOME] create server gadget, gadget_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &server_gadget_data->gadget_id);
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])", entity_id:");
    v15 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    val = Entity::getEntityId((const Entity *const)v15);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v16 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = *(_QWORD *)v16->baseclass_0 + 56LL;
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8();
    v18 = *(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Scene *, VisionContext *))v17;
    v19 = SceneCompBase::getScene(this);
    v18(v16, v19, &VisionContext::meet_context);
    v20 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    val = Entity::getEntityId((const Entity *const)v20);
    std::set<unsigned int>::emplace<unsigned int>(&this->server_gadget_entity_id_set_, &val, v21);
    v11 = 0;
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 48));
  GadgetParam::~GadgetParam((GadgetParam *const)(v2 + 80));
  result = v11;
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 833: range 0000000015CDEEE2-0000000015CDF0D4
int32_t __cdecl SceneHomeComp::refreshAllServerGadget(SceneHomeComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+10h] [rbp-70h] BYREF
  unsigned int OwnerUid; // [rsp+14h] [rbp-6Ch] BYREF
  std::map<unsigned int,HomeFurnitureServerGadgetData>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::map<unsigned int,HomeFurnitureServerGadgetData>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const HomeSceneData *home_scene_data; // [rsp+28h] [rbp-58h]
  const std::map<unsigned int,HomeFurnitureServerGadgetData> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<unsigned int const,HomeFurnitureServerGadgetData> *v11; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeFurnitureServerGadgetData> >::type *guid; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeFurnitureServerGadgetData> >::type *server_gadget_data; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-30h] BYREF

  SceneHomeComp::clearAllServerGadget(this);
  home_scene_data = SceneHomeComp::findHomeSceneData(this);
  if ( home_scene_data )
  {
    __for_range = &home_scene_data->arrangement_data.server_gadget_map;
    __for_begin._M_node = std::map<unsigned int,HomeFurnitureServerGadgetData>::begin(&home_scene_data->arrangement_data.server_gadget_map)._M_node;
    __for_end._M_node = std::map<unsigned int,HomeFurnitureServerGadgetData>::end(&home_scene_data->arrangement_data.server_gadget_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeFurnitureServerGadgetData>>::operator*(&__for_begin);
      guid = std::get<0ul,unsigned int const,HomeFurnitureServerGadgetData>(v11);
      server_gadget_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeFurnitureServerGadgetData> >::type *)std::get<1ul,unsigned int const,HomeFurnitureServerGadgetData>(v11);
      SceneHomeComp::createServerGadget(this, server_gadget_data);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeFurnitureServerGadgetData>>::operator++(&__for_begin);
    }
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_home_comp.cpp",
      "refreshAllServerGadget",
      838);
    v1 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v14,
           (const char (*)[38])"home_scene_data is nullptr. scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    v3 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v2, (const char (*)[12])" home_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    OwnerUid = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &OwnerUid);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return 0;
  }
};

// Line 854: range 0000000015CDF0D6-0000000015CDF43C
int32_t __cdecl SceneHomeComp::clearAllServerGadget(SceneHomeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rdx
  unsigned __int64 Scene; // rax
  unsigned __int64 v6; // rdx
  common::milog::MiLogStream *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 13 entity_id:855 64 16 14 entity_ptr:857";
  *(_QWORD *)(v1 + 16) = SceneHomeComp::clearAllServerGadget;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  __for_range = &this->server_gadget_entity_id_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->server_gadget_entity_id_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->server_gadget_entity_id_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = *v4;
    Scene = (unsigned __int64)SceneCompBase::getScene(this);
    if ( *(_BYTE *)((Scene >> 3) + 0x7FFF8000) )
      Scene = __asan_report_load8();
    v6 = *(_QWORD *)Scene + 120LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      Scene = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v6)(v1 + 64, Scene, *(unsigned int *)(v1 + 48));
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_home_comp.cpp",
        "clearAllServerGadget",
        860);
      v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v14,
             (const char (*)[43])"[HOME] server gadget not found, entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    else
    {
      v8 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      v9 = *(_QWORD *)v8 + 128LL;
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, VisionContext *))v9)(v8, &VisionContext::miss_context);
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v1 + 64));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  std::set<unsigned int>::clear(&this->server_gadget_entity_id_set_);
  result = 0;
  if ( v15 == (char *)v1 )
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

// Line 870: range 0000000015CDF43E-0000000015CDF837
int32_t __cdecl SceneHomeComp::fillHomeScenePointFishMonsterInfo(
        SceneHomeComp *const this,
        const HomeScenePointFishFarmingData *fish_farming_data)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // esi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  uint32_t v10; // edx
  int32_t result; // eax
  data::ConfigHomeCommonPosList *fish_born_pos_list; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 22 fishpond_point_ptr:871 64 24 28 random_fish_born_pos_vec:882";
  *(_QWORD *)(v2 + 16) = SceneHomeComp::fillHomeScenePointFishMonsterInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v5 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)
     + 93080;
  if ( *(_BYTE *)(((unsigned __int64)&fish_farming_data->local_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)fish_farming_data + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_farming_data->local_entity_id >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *(_BYTE *)(((unsigned __int64)&fish_farming_data->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&fish_farming_data->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  JsonConfigMgr::findLocalEntity<data::ConfigFishpondScenePoint>(
    (const JsonConfigMgr *const)(v2 + 32),
    v5,
    fish_farming_data->scene_id);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( std::operator==<data::ConfigFishpondScenePoint>(
         (const std::shared_ptr<data::ConfigFishpondScenePoint> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_home_comp.cpp",
      "fillHomeScenePointFishMonsterInfo",
      875);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v15,
           (const char (*)[51])"[HOME_SUMERU_FISH] findScenePoint fails, scene_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &fish_farming_data->scene_id);
    v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])", local_entity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &fish_farming_data->local_entity_id);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v9 = -1;
  }
  else
  {
    fish_born_pos_list = &std::__shared_ptr_access<data::ConfigFishpondScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigFishpondScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->fish_born_pos_list;
    std::vector<data::ConfigHomeCommonPos>::vector((std::vector<data::ConfigHomeCommonPos> *const)(v2 + 64));
    v10 = std::vector<unsigned int>::size(&fish_farming_data->fish_id_vec);
    common::tools::RandomUtils::randomSelect<data::ConfigHomeCommonPos>(
      fish_born_pos_list,
      (std::vector<data::ConfigHomeCommonPos> *)(v2 + 64),
      v10);
    if ( SceneHomeComp::createFishWithRelativeBornPos(
           this,
           fish_farming_data,
           (const std::vector<data::ConfigHomeCommonPos> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_home_comp.cpp",
        "fillHomeScenePointFishMonsterInfo",
        888);
      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
        &v15,
        (const char (*)[56])"[HOME_SUMERU_FISH] createFishWithRelativeBornPos fails.");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v9 = -1;
    }
    else
    {
      v9 = 0;
    }
    std::vector<data::ConfigHomeCommonPos>::~vector((std::vector<data::ConfigHomeCommonPos> *const)(v2 + 64));
  }
  std::shared_ptr<data::ConfigFishpondScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigFishpondScenePoint> *const)(v2 + 32));
  result = v9;
  if ( v16 == (char *)v2 )
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
  return result;
};

// Line 896: range 0000000015CDF838-0000000015CDFB7F
int32_t __cdecl SceneHomeComp::createFishWithRelativeBornPos(
        SceneHomeComp *const this,
        const HomeScenePointFishFarmingData *fish_farming_data,
        const std::vector<data::ConfigHomeCommonPos> *random_fish_born_pos_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  std::vector<unsigned int> *v6; // r15
  std::pair<unsigned int,unsigned int> *v7; // rcx
  std::vector<unsigned int> *v8; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> >,false,true>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  int32_t v15; // r14d
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-11Ch] BYREF
  std::pair<unsigned int,unsigned int> v19; // [rsp+28h] [rbp-118h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-110h] BYREF
  char v21[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 24 22 fish_entity_id_vec:897 112 48 28 fish_entity_id_index_map:898";
  *(_QWORD *)(v3 + 16) = SceneHomeComp::createFishWithRelativeBornPos;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 48));
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 112));
  SceneHomeComp::fillFishAnimalInfo(
    this,
    fish_farming_data,
    random_fish_born_pos_vec,
    (std::vector<unsigned int> *)(v3 + 48),
    (std::map<unsigned int,unsigned int> *)(v3 + 112));
  v6 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v3 + 48));
  v19 = std::make_pair<unsigned int const&,unsigned int const&>(
          &fish_farming_data->scene_id,
          &fish_farming_data->local_entity_id);
  v9 = std::unordered_map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::emplace<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>(
         &this->scene_point_fish_entities_map_,
         &v19,
         v6,
         v7,
         v8);
  if ( !v9.second )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_home_comp.cpp",
      "createFishWithRelativeBornPos",
      903);
    v10 = common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(
            &v20,
            (const char (*)[86])"[HOME_SUMERU_FISH]fill home fish monster info duplicate scene point, local_entity_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v10,
            &fish_farming_data->local_entity_id);
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" scene_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &fish_farming_data->scene_id);
    v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(this->scene_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v15 = -1;
  }
  else
  {
    v15 = 0;
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 112));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 48));
  result = v15;
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 912: range 0000000015CDFB80-0000000015CE0618
// local variable allocation has failed, the output may be wrong!
void __cdecl SceneHomeComp::fillFishAnimalInfo(
        SceneHomeComp *const this,
        const HomeFishDataBase *fish_farming_data,
        const std::vector<data::ConfigHomeCommonPos> *random_fish_born_pos_vec,
        std::vector<unsigned int> *fish_entity_id_vec,
        std::map<unsigned int,unsigned int> *fish_entity_id_index_map)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::vector<unsigned int>::size_type v8; // r14
  std::vector<data::ConfigHomeCommonPos>::size_type v9; // r14
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  HomeWorldExcelConfigMgr *p_home_config_mgr; // r14
  uint32_t *v16; // rdx
  common::milog::MiLogStream *v17; // r14
  const unsigned int *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::vector<data::ConfigHomeCommonPos>::const_reference v23; // rax
  float x; // ecx
  float y; // xmm0_4
  float v26; // ecx
  float v27; // xmm0_4
  std::vector<unsigned int>::const_reference v28; // rdx
  HomeAnimalInfo *v29; // rax
  unsigned int *v30; // rcx
  HomeAnimalInfo *v31; // r8
  uint32_t v32; // r14d
  char *v33; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v34; // rax
  uint32_t *v35; // rdx
  char v36; // cl
  unsigned int SceneId; // [rsp+38h] [rbp-1E8h] BYREF
  uint32_t i; // [rsp+3Ch] [rbp-1E4h]
  unsigned __int64 val; // [rsp+40h] [rbp-1E0h] BYREF
  const data::HomeworldAnimalExcelConfig *home_animal_config_ptr; // [rsp+48h] [rbp-1D8h]
  const data::Vector *fish_relative_pos; // [rsp+50h] [rbp-1D0h]
  const data::Vector *fish_relative_rot; // [rsp+58h] [rbp-1C8h]
  Quaternion v47; // [rsp+60h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v48; // [rsp+70h] [rbp-1B0h] BYREF
  char v49[400]; // [rsp+90h] [rbp-190h] BYREF

  v5 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(352LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 48 4 13 entity_id:947 64 12 17 fish_born_rot:936 96 12 20 local_offset_pos:938 128 12 20 world"
                        "_offset_pos:939 160 12 17 fish_born_pos:940 192 16 14 local_quat:934 224 16 15 parent_quat:935 2"
                        "56 64 15 animal_info:942";
  *(_QWORD *)(v5 + 16) = SceneHomeComp::fillFishAnimalInfo;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -219020288;
  v7[536862723] = -219020288;
  v7[536862724] = -219020288;
  v7[536862725] = -219020288;
  v7[536862726] = -219021312;
  v7[536862727] = -219021312;
  v7[536862730] = -202116109;
  for ( i = 0; ; ++i )
  {
    v8 = i;
    if ( v8 >= std::vector<unsigned int>::size(&fish_farming_data->fish_id_vec) )
      break;
    v9 = i;
    if ( v9 >= std::vector<data::ConfigHomeCommonPos>::size(random_fish_born_pos_vec) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_home_comp.cpp",
        "fillFishAnimalInfo",
        917);
      v10 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
              &v48,
              (const char (*)[64])"[HOME_FISH_FARMING] fish count bigger than fish born pos count:");
      val = std::vector<data::ConfigHomeCommonPos>::size(random_fish_born_pos_vec);
      v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" scene_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneId = Scene::getSceneId(this->scene_);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &SceneId);
      v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" home_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v5 + 48) = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v48);
      break;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v47);
    p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47)->design_config.txt_config_mgr.home_config_mgr;
    v16 = (uint32_t *)std::vector<unsigned int>::operator[](&fish_farming_data->fish_id_vec, i);
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    home_animal_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeworldAnimalExcelConfig(p_home_config_mgr, *v16);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v47);
    if ( home_animal_config_ptr )
    {
      fish_relative_pos = (const data::Vector *)std::vector<data::ConfigHomeCommonPos>::operator[](
                                                  random_fish_born_pos_vec,
                                                  i);
      v23 = std::vector<data::ConfigHomeCommonPos>::operator[](random_fish_born_pos_vec, i);
      fish_relative_rot = &v23->rotation;
      if ( *(_BYTE *)(((unsigned __int64)&v23->rotation >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v23 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->rotation >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      x = fish_relative_rot->x;
      if ( *(_BYTE *)(((unsigned __int64)&fish_relative_rot->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)fish_relative_rot + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_relative_rot->y >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      y = fish_relative_rot->y;
      if ( *(_BYTE *)(((unsigned __int64)&fish_relative_rot->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)fish_relative_rot + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_relative_rot->z >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      Vector3::Vector3((Vector3 *const)(v5 + 160), x, y, fish_relative_rot->z);
      *(Quaternion *)(v5 + 192) = Quaternion::fromRotation((const Vector3 *)(v5 + 160));
      *(Quaternion *)(v5 + 224) = Quaternion::fromRotation(&fish_farming_data->rotation);
      v47 = operator*((const Quaternion *)(v5 + 224), (const Quaternion *)(v5 + 192));
      *(Vector3 *)(v5 + 64) = Quaternion::toEuler(&v47);
      if ( *(_BYTE *)(((unsigned __int64)fish_relative_pos >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)fish_relative_pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fish_relative_pos >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v26 = fish_relative_pos->x;
      if ( *(_BYTE *)(((unsigned __int64)&fish_relative_pos->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)fish_relative_pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_relative_pos->y >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v27 = fish_relative_pos->y;
      if ( *(_BYTE *)(((unsigned __int64)&fish_relative_pos->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)fish_relative_pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_relative_pos->z >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      Vector3::Vector3((Vector3 *const)(v5 + 96), v26, v27, fish_relative_pos->z);
      *(Vector3 *)(v5 + 128) = Quaternion::rotateVector3(
                                 (const Quaternion *const)(v5 + 224),
                                 (const Vector3 *)(v5 + 96));
      *(Vector3 *)(v5 + 160) = operator+(&fish_farming_data->position, (const Vector3 *)(v5 + 128));
      HomeAnimalInfo::HomeAnimalInfo((HomeAnimalInfo *const)(v5 + 256));
      v28 = std::vector<unsigned int>::operator[](&fish_farming_data->fish_id_vec, i);
      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v5 + 264) = *v28;
      if ( *(_BYTE *)(((unsigned __int64)&home_animal_config_ptr->monster_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)home_animal_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&home_animal_config_ptr->monster_id >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v5 + 268) = home_animal_config_ptr->monster_id;
      *(_QWORD *)(v5 + 272) = *(_QWORD *)(v5 + 160);
      *(_DWORD *)(v5 + 280) = *(_DWORD *)(v5 + 168);
      *(_QWORD *)(v5 + 284) = *(_QWORD *)(v5 + 64);
      *(_DWORD *)(v5 + 292) = *(_DWORD *)(v5 + 72);
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v5 + 48) = Scene::genNewEntityId(this->scene_, PROT_ENTITY_MONSTER);
      v29 = std::move<HomeAnimalInfo &>((HomeAnimalInfo *)(v5 + 256));
      std::map<unsigned int,HomeAnimalInfo>::emplace<unsigned int &,HomeAnimalInfo>(
        &this->animal_info_map_,
        (unsigned int *)(v5 + 48),
        v29,
        v30,
        v31);
      std::vector<unsigned int>::push_back(fish_entity_id_vec, (const std::vector<unsigned int>::value_type *)(v5 + 48));
      v32 = i;
      v33 = (char *)(v5 + 48);
      v34 = std::map<unsigned int,unsigned int>::operator[](
              fish_entity_id_index_map,
              (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 48));
      v35 = v34;
      v36 = *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000);
      if ( v36 != 0 && (char)(((unsigned __int8)v34 & 7) + 3) >= v36 )
      {
        LOBYTE(v33) = v36 != 0;
        __asan_report_store4(v34, v33, (_BYTE)v34);
      }
      *v35 = v32;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_home_comp.cpp",
        "fillFishAnimalInfo",
        925);
      v17 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
              &v48,
              (const char (*)[83])"[HOME_FISH_FARMING] findHomeworldAnimalExcelConfig() return nullptr. furniture_id:");
      v18 = std::vector<unsigned int>::operator[](&fish_farming_data->fish_id_vec, i);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, v18);
      v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" scene_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneId = Scene::getSceneId(this->scene_);
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &SceneId);
      v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])" home_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v5 + 48) = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
  }
  if ( v49 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = -168430091;
  }
};
