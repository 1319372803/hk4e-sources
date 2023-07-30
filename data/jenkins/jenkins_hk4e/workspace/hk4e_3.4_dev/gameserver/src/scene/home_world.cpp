// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/home_world.cpp

// Line 42: range 0000000013172234-000000001317228B
uint32_t __cdecl HomeWorld::getDefaultHomeWorldId()
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v0; // rax
  uint32_t DefaultHomeWorldId; // ebx
  std::shared_ptr<Config> v3[2]; // [rsp+0h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v3);
  v0 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  DefaultHomeWorldId = ConstValueExcelConfigMgr::getDefaultHomeWorldId(&v0->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(v3);
  return DefaultHomeWorldId;
};

// Line 46: range 000000001317228C-0000000013172405
void __cdecl HomeWorld::HomeWorld(HomeWorld *const this, uint32_t world_id, Home *home)
{
  int (**v3)(...); // rdx
  uint32_t HomeUid; // eax
  std::shared_ptr<Home> __r; // [rsp+20h] [rbp-20h] BYREF

  World::World(this, world_id);
  v3 = (int (**)(...))(&`vtable for'HomeWorld + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, world_id);
  this->_vptr_World = v3;
  toThisPtr<Home>((Home *)&__r);
  std::weak_ptr<Home>::weak_ptr<Home,void>(&this->home_wtr_, &__r);
  std::shared_ptr<Home>::~shared_ptr(&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_has_player_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_has_player_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_has_player_time_, &__r, (_BYTE)this - 120);
  }
  this->last_has_player_time_ = 0;
  std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::unordered_map(&this->allow_enter_map_);
  std::list<std::shared_ptr<Scene>>::list(&this->wait_for_destroy_scene_list_);
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_for_destroy_scene_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_for_destroy_scene_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wait_for_destroy_scene_time, &__r, (_BYTE)this - 32);
  }
  this->wait_for_destroy_scene_time = 0;
  HomeUid = Home::getHomeUid(home);
  World::setOwnerUid(this, HomeUid);
};

// Line 52: range 0000000013172406-00000000131727D2
int32_t __cdecl HomeWorld::fromBin(HomeWorld *const this, const proto::HomeDataBin *home_data_bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  Home *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  uint32_t cur_module_id; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 11 home_uid:53 48 4 6 ret:70 64 16 17 owner_home_ptr:54";
  *(_QWORD *)(v2 + 16) = HomeWorld::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 32) = World::getOwnerUid(this);
  HomeWorld::getOwnHome((const HomeWorld *const)(v2 + 64));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "fromBin",
      57);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v14,
           (const char (*)[41])"[HOME] owner_home_ptr is null. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    cur_module_id = Home::getCurModuleId(v7);
    if ( cur_module_id )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/home_world.cpp",
        "fromBin",
        68);
      common::milog::MiLogStream::operator()(
        &v14,
        "home_uid:%u cur_module_id:%u",
        *(unsigned int *)(v2 + 32),
        cur_module_id);
      common::milog::MiLogStream::~MiLogStream(&v14);
      *(_DWORD *)(v2 + 48) = HomeWorld::homeModuleSceneFromBin(this, cur_module_id);
      if ( *(_DWORD *)(v2 + 48) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/home_world.cpp",
          "fromBin",
          73);
        v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
               &v14,
               (const char (*)[36])"homeModuleSceneFromBin failed. ret:");
        v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v2 + 48));
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v14);
        v6 = *(_DWORD *)(v2 + 48);
      }
      else
      {
        v6 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/scene/home_world.cpp",
        "fromBin",
        64);
      v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v14,
             (const char (*)[30])"cur_module_id is 0. home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = 0;
    }
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 64));
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 80: range 00000000131727D4-0000000013172B2A
int32_t __cdecl HomeWorld::toBin(const HomeWorld *const this, proto::HomeDataBin *home_data_bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  Home *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  uint32_t cur_module_id; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 11 home_uid:81 48 4 6 ret:95 64 16 17 owner_home_ptr:82";
  *(_QWORD *)(v2 + 16) = HomeWorld::toBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 32) = World::getOwnerUid(this);
  HomeWorld::getOwnHome((const HomeWorld *const)(v2 + 64));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "toBin",
      85);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v14,
           (const char (*)[41])"[HOME] owner_home_ptr is null. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    cur_module_id = Home::getCurModuleId(v7);
    if ( cur_module_id )
    {
      *(_DWORD *)(v2 + 48) = HomeWorld::homeModuleSceneToBin(this, cur_module_id);
      if ( *(_DWORD *)(v2 + 48) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/home_world.cpp",
          "toBin",
          98);
        v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
               &v14,
               (const char (*)[34])"homeModuleSceneToBin failed. ret:");
        v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v2 + 48));
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v14);
        v6 = *(_DWORD *)(v2 + 48);
      }
      else
      {
        v6 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/scene/home_world.cpp",
        "toBin",
        91);
      v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v14,
             (const char (*)[30])"cur_module_id is 0. home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = 0;
    }
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 64));
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 105: range 0000000013172B2C-00000000131738ED
int32_t __cdecl HomeWorld::init(HomeWorld *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  Home *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  _BOOL4 v9; // r15d
  std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Home *v15; // rax
  HomeSceneComp *SceneComp; // rax
  Home *v17; // rax
  uint32_t v18; // eax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int v22; // r15d
  std::shared_ptr<Scene> *v23; // r8
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int v27; // r15d
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >,bool> v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  Scene *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  SceneTeam *v37; // r15
  unsigned __int64 v38; // rax
  uint32_t v39; // r14d
  common::milog::MiLogStream *v40; // rax
  int32_t result; // eax
  uint32_t v42; // [rsp+14h] [rbp-1ACh]
  std::map<unsigned int,HomeSceneData>::iterator __for_begin; // [rsp+20h] [rbp-1A0h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_end; // [rsp+28h] [rbp-198h] BYREF
  std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+30h] [rbp-190h]
  std::pair<unsigned int const,HomeSceneData> *__in; // [rsp+38h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+40h] [rbp-180h]
  std::tuple_element<1,std::pair<unsigned int const,HomeSceneData> >::type *home_scene_data; // [rsp+48h] [rbp-178h]
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range_0; // [rsp+50h] [rbp-170h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v50; // [rsp+58h] [rbp-168h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id_0; // [rsp+60h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+68h] [rbp-158h]
  std::shared_ptr<Player> v53; // [rsp+70h] [rbp-150h] BYREF
  std::shared_ptr<Home> v54; // [rsp+80h] [rbp-140h] BYREF
  common::milog::MiLogStream v55; // [rsp+90h] [rbp-130h] BYREF
  char v56[272]; // [rsp+B0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 12 home_uid:106 64 4 17 cur_module_id:114 80 4 18 init_module_id:125 96 16 18 owner_home_"
                        "ptr:107 128 16 15 session_ptr:119 160 16 24 home_module_data_ptr:135 192 16 13 scene_ptr:144";
  *(_QWORD *)(v2 + 16) = HomeWorld::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -202178560;
  *(_DWORD *)(v2 + 48) = World::getOwnerUid(this);
  HomeWorld::getOwnHome((const HomeWorld *const)(v2 + 96));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "init",
      110);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v55,
           (const char (*)[41])"[HOME] owner_home_ptr is null. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v55);
    v1 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    *(_DWORD *)(v2 + 64) = Home::getCurModuleId(v6);
    if ( *(_DWORD *)(v2 + 64) )
      goto LABEL_28;
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/home_world.cpp",
      "init",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v55,
           (const char (*)[38])"cur_world_id is 0. do init. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v55);
    std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    Home::getHomeSession((const Home *const)(v2 + 128));
    if ( std::operator==<HomeSession>((const std::shared_ptr<HomeSession> *)(v2 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/home_world.cpp",
        "init",
        122);
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v55,
             (const char (*)[31])"session_ptr is null. home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v55);
      v1 = -1;
      v9 = 0;
    }
    else
    {
      v10 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      *(_DWORD *)(v2 + 80) = HomeSession::getInitModuleId(v10);
      if ( *(_DWORD *)(v2 + 80) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/home_world.cpp",
          "init",
          131);
        v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v55,
                (const char (*)[35])"cur_world_id is 0. init_module_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 80));
        v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" home_uid");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v55);
        *(_DWORD *)(v2 + 64) = *(_DWORD *)(v2 + 80);
        v15 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        SceneComp = Home::getSceneComp(v15);
        HomeSceneComp::setCurModuleId(SceneComp, *(_DWORD *)(v2 + 64));
        v17 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v18 = (unsigned int)Home::getSceneComp(v17);
        HomeSceneComp::createHomeModuleData((HomeSceneComp *const)(v2 + 160), v18);
        if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v2 + 160), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/home_world.cpp",
            "init",
            138);
          v19 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v55,
                  (const char (*)[44])"createHomeModuleData failed. cur_module_id:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v2 + 64));
          v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" home_uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v55);
          v1 = -1;
          v22 = 0;
        }
        else
        {
          __for_range = &std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160))->scene_data_map;
          __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(__for_range)._M_node;
          __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(__for_range)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
            scene_id = std::get<0ul,unsigned int const,HomeSceneData>(__in);
            home_scene_data = std::get<1ul,unsigned int const,HomeSceneData>(__in);
            std::shared_ptr<Home>::shared_ptr(&v54, (const std::shared_ptr<Home> *)(v2 + 96));
            std::shared_ptr<Player>::shared_ptr(&v53, 0LL);
            if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(scene_id);
            }
            SceneMgr::createScene(v2 + 192, (PlayerPtr *)*scene_id, (HomePtr *)&v53, (uint32_t)&v54);
            std::shared_ptr<Player>::~shared_ptr(&v53);
            std::shared_ptr<Home>::~shared_ptr(&v54);
            if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 192), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v55,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/home_world.cpp",
                "init",
                147);
              v24 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      &v55,
                      (const char (*)[30])"scene_ptr is null, scene_id: ");
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, scene_id);
              v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v25,
                      (const char (*)[12])" home_uid: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v55);
              v1 = -1;
              v27 = 0;
            }
            else
            {
              v28 = std::map<unsigned int,std::shared_ptr<Scene>>::emplace<unsigned int const&,std::shared_ptr<Scene>&>(
                      &this->scene_map_,
                      scene_id,
                      (std::shared_ptr<Scene> *)(v2 + 192),
                      (const unsigned int *)&this->scene_map_,
                      v23);
              if ( !v28.second )
              {
                common::milog::MiLogStream::create(
                  &v55,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/home_world.cpp",
                  "init",
                  152);
                v29 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        &v55,
                        (const char (*)[31])"scene already exist, scene_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, scene_id);
                common::milog::MiLogStream::~MiLogStream(&v55);
                v1 = -1;
                v27 = 0;
              }
              else
              {
                v27 = 1;
              }
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 192));
            if ( v27 != 1 )
            {
              v22 = 0;
              goto LABEL_26;
            }
            std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
          }
          v22 = 1;
        }
LABEL_26:
        std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v2 + 160));
        v9 = v22 == 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/home_world.cpp",
          "init",
          128);
        v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v55,
                (const char (*)[31])"init_module_id is 0. home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v55);
        v1 = -1;
        v9 = 0;
      }
    }
    std::shared_ptr<HomeSession>::~shared_ptr((std::shared_ptr<HomeSession> *const)(v2 + 128));
    if ( v9 )
    {
LABEL_28:
      __for_range_0 = &this->scene_map_;
      __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >::_Self *)&__for_begin,
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >::_Self *)&__for_end) )
      {
        v50 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > > *const)&__for_begin);
        scene_id_0 = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v50);
        scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v50);
        if ( std::operator==<Scene>(scene_ptr, 0LL) )
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/home_world.cpp",
            "init",
            162);
          v30 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v55,
                  (const char (*)[32])"scene_ptr is nullptr, home_uid:");
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v30,
                  (const unsigned int *)(v2 + 48));
          v32 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v31, (const char (*)[11])" scene_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, scene_id_0);
          common::milog::MiLogStream::~MiLogStream(&v55);
          v1 = -1;
          goto LABEL_43;
        }
        v33 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
        if ( Scene::init(v33) )
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/home_world.cpp",
            "init",
            167);
          v34 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v55,
                  (const char (*)[34])"scene_ptr->init failed, home_uid:");
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v34,
                  (const unsigned int *)(v2 + 48));
          v36 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v35, (const char (*)[11])" scene_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, scene_id_0);
          common::milog::MiLogStream::~MiLogStream(&v55);
          v1 = -1;
          goto LABEL_43;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > > *const)&__for_begin);
      }
      if ( std::operator!=<SceneTeam>(&this->scene_team_ptr_, 0LL) )
      {
        v37 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->scene_team_ptr_);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v38 = (unsigned __int64)(this->_vptr_World + 9);
        if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
          v38 = __asan_report_load8();
        v42 = (*(__int64 (__fastcall **)(HomeWorld *const))v38)(this);
        v39 = *(_DWORD *)(v2 + 48);
        std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)&v54, 0LL);
        SceneTeam::init(v37, (PlayerPtr *)&v54, v39, v42);
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v54);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/home_world.cpp",
          "init",
          179);
        v40 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v55,
                (const char (*)[32])"SceneTeam is nullptr, home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v55);
      }
      v1 = 0;
    }
  }
LABEL_43:
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 96));
  result = v1;
  if ( v56 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 185: range 00000000131738EE-0000000013173F3D
int32_t __cdecl HomeWorld::start(HomeWorld *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  int32_t v5; // r14d
  HomeWorld **v6; // r8
  const std::_Placeholder<1> *v7; // r9
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  uint32_t now; // [rsp+1Ch] [rbp-124h]
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+30h] [rbp-110h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v22; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+48h] [rbp-F8h]
  void (*__f[2])(HomeWorld *, unsigned __int64); // [rsp+50h] [rbp-F0h] BYREF
  std::_Bind<void (HomeWorld::*(HomeWorld*,std::_Placeholder<1>))(long unsigned int)> __args_0; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v27; // [rsp+90h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+B0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 12 home_uid:186 64 16 18 owner_home_ptr:187";
  *(_QWORD *)(v1 + 16) = HomeWorld::start;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = World::getOwnerUid(this);
  HomeWorld::getOwnHome((const HomeWorld *const)(v1 + 64));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "start",
      190);
    v4 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v27,
           (const char (*)[41])"[HOME] owner_home_ptr is null. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    v5 = -1;
  }
  else
  {
    now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_location_notify_time_, 0LL, (_BYTE)this - 48);
    }
    this->last_location_notify_time_ = now;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_has_player_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_has_player_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_has_player_time_, 0LL, (_BYTE)this - 120);
    }
    this->last_has_player_time_ = now;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >::_Base_ptr)this;
    __f[0] = (void (*)(HomeWorld *, unsigned __int64))49;
    __f[1] = 0LL;
    std::bind<void (HomeWorld::*)(unsigned long),HomeWorld*,std::_Placeholder<1> const&>(
      (std::_Bind_helper<false,void (HomeWorld::*)(long unsigned int),HomeWorld*,const std::_Placeholder<1>&>::type *)&__args_0._M_bound_args,
      __f,
      (HomeWorld **)&__for_end,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v6,
      v7);
    common::tools::perf::make_shared<UnixTimer,std::_Bind<void (HomeWorld::*)(unsigned long) ()(HomeWorld*,std::_Placeholder<1>)>>(
      &__args_0,
      (std::_Bind<void (HomeWorld::*(HomeWorld*,std::_Placeholder<1>))(long unsigned int)> *)&__args_0._M_bound_args);
    std::shared_ptr<UnixTimer>::operator=(&this->timer_ptr_, (std::shared_ptr<UnixTimer> *)&__args_0);
    std::shared_ptr<UnixTimer>::~shared_ptr((std::shared_ptr<UnixTimer> *const)&__args_0);
    if ( std::operator==<UnixTimer>(&this->timer_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/home_world.cpp",
        "start",
        200);
      v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v27,
             (const char (*)[40])"make_shared UnixTimer fails, home_uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v27);
      v5 = -1;
    }
    else
    {
      __for_range = &this->scene_map_;
      __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v22 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
        scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v22);
        scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v22);
        if ( std::operator==<Scene>(scene_ptr, 0LL) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/home_world.cpp",
            "start",
            208);
          v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                 &v27,
                 (const char (*)[32])"scene_ptr is nullptr, home_uid:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v1 + 48));
          v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" scene_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, scene_id);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v5 = -1;
          goto LABEL_24;
        }
        v12 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8();
        v13 = *(_QWORD *)v12 + 40LL;
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(unsigned __int64))v13)(v12) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/home_world.cpp",
            "start",
            213);
          v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  &v27,
                  (const char (*)[37])"scene_ptr->fromBin failed, home_uid:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v1 + 48));
          v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" scene_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, scene_id);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v5 = -1;
          goto LABEL_24;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
      }
      v5 = 0;
    }
  }
LABEL_24:
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 64));
  result = v5;
  if ( v28 == (char *)v1 )
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

// Line 221: range 0000000013173F3E-00000000131741FF
int32_t __cdecl HomeWorld::stop(HomeWorld *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+20h] [rbp-A0h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v13; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *_; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-80h] BYREF
  char v17[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 12 home_uid:222";
  *(_QWORD *)(v1 + 16) = HomeWorld::stop;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = World::getOwnerUid(this);
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/scene/home_world.cpp",
    "stop",
    223);
  v4 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v16, (const char (*)[10])"home uid:");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 32));
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v5, (const char (*)[7])" stop.");
  common::milog::MiLogStream::~MiLogStream(&v16);
  if ( std::operator!=<UnixTimer>(&this->timer_ptr_, 0LL) )
  {
    v6 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
    common::tools::MiTimer::cancel(v6);
  }
  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v13);
    scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v13);
    if ( std::operator!=<Scene>(scene_ptr, 0LL) )
    {
      v7 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      v8 = *(_QWORD *)v7 + 48LL;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64))v8)(v7);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
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

// Line 241: range 0000000013174200-000000001317499E
__int64 __fastcall HomeWorld::homeModuleSceneFromBin(HomeWorld *const this, uint32_t module_id)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  Home *v7; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  std::shared_ptr<Scene> *v18; // r8
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >,bool> v22; // rax
  common::milog::MiLogStream *v23; // rax
  __int64 result; // rax
  std::map<unsigned int,HomeSceneData>::iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+30h] [rbp-130h]
  std::pair<unsigned int const,HomeSceneData> *__in; // [rsp+38h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+40h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,HomeSceneData> >::type *home_scene_data; // [rsp+48h] [rbp-118h]
  std::shared_ptr<Player> v31; // [rsp+50h] [rbp-110h] BYREF
  std::shared_ptr<Home> v32; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v33; // [rsp+70h] [rbp-F0h] BYREF
  char v34[208]; // [rsp+90h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 12 home_uid:242 48 4 13 module_id:240 64 16 18 owner_home_ptr:243 96 16 24 home_module_da"
                        "ta_ptr:250 128 16 13 scene_ptr:259";
  *(_QWORD *)(v3 + 16) = HomeWorld::homeModuleSceneFromBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 48) = module_id;
  *(_DWORD *)(v3 + 32) = World::getOwnerUid(this);
  HomeWorld::getOwnHome((const HomeWorld *const)(v3 + 64));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "homeModuleSceneFromBin",
      246);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v33,
           (const char (*)[41])"[HOME] owner_home_ptr is null. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v33);
    v2 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    SceneComp = (unsigned int)Home::getSceneComp(v7);
    HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v3 + 96), SceneComp);
    if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/home_world.cpp",
        "homeModuleSceneFromBin",
        253);
      v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v33,
             (const char (*)[41])"home_module_data_ptr is null. module_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v33);
      v2 = -1;
    }
    else
    {
      __for_range = &std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->scene_data_map;
      __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(__for_range)._M_node;
      __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
        scene_id = std::get<0ul,unsigned int const,HomeSceneData>(__in);
        home_scene_data = std::get<1ul,unsigned int const,HomeSceneData>(__in);
        std::shared_ptr<Home>::shared_ptr(&v32, (const std::shared_ptr<Home> *)(v3 + 64));
        std::shared_ptr<Player>::shared_ptr(&v31, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(scene_id);
        }
        SceneMgr::createScene(v3 + 128, (PlayerPtr *)*scene_id, (HomePtr *)&v31, (uint32_t)&v32);
        std::shared_ptr<Player>::~shared_ptr(&v31);
        std::shared_ptr<Home>::~shared_ptr(&v32);
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/home_world.cpp",
            "homeModuleSceneFromBin",
            262);
          v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v33,
                  (const char (*)[30])"scene_ptr is null, scene_id: ");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, scene_id);
          v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" home_uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v33);
          v2 = -1;
          v15 = 0;
        }
        else
        {
          v16 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            v16 = __asan_report_load8();
          v17 = *(_QWORD *)v16 + 8LL;
          if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
            v16 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::SceneBin *))v17)(
                 v16,
                 &home_scene_data->scene_bin) )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/home_world.cpp",
              "homeModuleSceneFromBin",
              267);
            v19 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v33,
                    (const char (*)[37])"scene_ptr->fromBin failed, home_uid:");
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v3 + 32));
            v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" scene_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, scene_id);
            common::milog::MiLogStream::~MiLogStream(&v33);
            v2 = -1;
            v15 = 0;
          }
          else
          {
            v22 = std::map<unsigned int,std::shared_ptr<Scene>>::emplace<unsigned int const&,std::shared_ptr<Scene>&>(
                    &this->scene_map_,
                    scene_id,
                    (std::shared_ptr<Scene> *)(v3 + 128),
                    (const unsigned int *)&this->scene_map_,
                    v18);
            if ( !v22.second )
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/home_world.cpp",
                "homeModuleSceneFromBin",
                272);
              v23 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      &v33,
                      (const char (*)[31])"scene already exist, scene_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, scene_id);
              common::milog::MiLogStream::~MiLogStream(&v33);
              v2 = -1;
              v15 = 0;
            }
            else
            {
              v15 = 1;
            }
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
        if ( v15 != 1 )
          goto LABEL_26;
        std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
      }
      v2 = 0;
    }
LABEL_26:
    std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 96));
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 64));
  result = v2;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 280: range 00000000131749A0-000000001317519B
__int64 __fastcall HomeWorld::homeModuleSceneToBin(const HomeWorld *const this, uint32_t module_id)
{
  unsigned int v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  Home *v7; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int v20; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  unsigned __int64 v22; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> >::pointer v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  __int64 result; // rax
  unsigned int (__fastcall *v28)(std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::SceneBin *); // [rsp+8h] [rbp-2C8h]
  std::map<unsigned int,std::shared_ptr<Scene>>::const_iterator __for_begin; // [rsp+28h] [rbp-2A8h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::const_iterator __for_end; // [rsp+30h] [rbp-2A0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> >::_Self __y; // [rsp+38h] [rbp-298h] BYREF
  const std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+40h] [rbp-290h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v33; // [rsp+48h] [rbp-288h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+50h] [rbp-280h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+58h] [rbp-278h]
  common::milog::MiLogStream v36; // [rsp+60h] [rbp-270h] BYREF
  char v37[592]; // [rsp+80h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 12 home_uid:281 48 4 13 module_id:279 64 8 8 iter:298 96 16 18 owner_home_ptr:282 128 16 "
                        "24 home_module_data_ptr:289 160 312 19 proto_scene_bin:304";
  *(_QWORD *)(v3 + 16) = HomeWorld::homeModuleSceneToBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862734] = -218103808;
  v5[536862735] = -202116109;
  v5[536862736] = -202116109;
  *(_DWORD *)(v3 + 48) = module_id;
  *(_DWORD *)(v3 + 32) = World::getOwnerUid(this);
  HomeWorld::getOwnHome((const HomeWorld *const)(v3 + 96));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "homeModuleSceneToBin",
      285);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v36,
           (const char (*)[41])"[HOME] owner_home_ptr is null. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v36);
    v2 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    SceneComp = (unsigned int)Home::getSceneComp(v7);
    HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v3 + 128), SceneComp);
    if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v3 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/home_world.cpp",
        "homeModuleSceneToBin",
        292);
      v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v36,
             (const char (*)[41])"home_module_data_ptr is null. module_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v36);
      v2 = -1;
    }
    else
    {
      __for_range = &this->scene_map_;
      __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v33 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
        scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v33);
        scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v33);
        v12 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        *(std::map<unsigned int,HomeSceneData>::iterator *)(v3 + 64) = std::map<unsigned int,HomeSceneData>::find(
                                                                         &v12->scene_data_map,
                                                                         scene_id);
        v13 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        __y._M_node = std::map<unsigned int,HomeSceneData>::end(&v13->scene_data_map)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> >::_Self *)(v3 + 64),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/home_world.cpp",
            "homeModuleSceneToBin",
            301);
          v14 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                  &v36,
                  (const char (*)[67])"scene not found in home_module_data_ptr->scene_data_map. scene_id:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, scene_id);
          v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" home_uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v36);
        }
        else
        {
          proto::SceneBin::SceneBin((proto::SceneBin *const)(v3 + 160));
          if ( std::operator==<Scene>(scene_ptr, 0LL) )
          {
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/home_world.cpp",
              "homeModuleSceneToBin",
              307);
            v17 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v36,
                    (const char (*)[32])"scene_ptr is nullptr, home_uid:");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v3 + 32));
            v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])" scene_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, scene_id);
            common::milog::MiLogStream::~MiLogStream(&v36);
            v2 = -1;
            v20 = 0;
          }
          else
          {
            v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
            if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v22 = (unsigned __int64)(v21->_vptr_DescribalBase + 2);
            if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
              v22 = __asan_report_load8();
            v28 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::SceneBin *))v22;
            v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> > *const)(v3 + 64));
            if ( v28(v21, &v23->second.scene_bin) )
            {
              common::milog::MiLogStream::create(
                &v36,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/scene/home_world.cpp",
                "homeModuleSceneToBin",
                312);
              v24 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      &v36,
                      (const char (*)[35])"scene_ptr->toBin failed, home_uid:");
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v24,
                      (const unsigned int *)(v3 + 32));
              v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v25,
                      (const char (*)[11])" scene_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, scene_id);
              common::milog::MiLogStream::~MiLogStream(&v36);
              v2 = -1;
              v20 = 0;
            }
            else
            {
              v20 = 1;
            }
          }
          proto::SceneBin::~SceneBin((proto::SceneBin *const)(v3 + 160));
          if ( v20 != 1 )
            goto LABEL_24;
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
      }
      v2 = 0;
    }
LABEL_24:
    std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 128));
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 96));
  result = v2;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 320: range 000000001317519C-0000000013175DAB
__int64 __fastcall HomeWorld::onChangeModule(HomeWorld *const this, uint32_t old_module_id, uint32_t new_module_id)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Home *v13; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  Scene *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  Home *v30; // rax
  uint32_t v31; // eax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  int v41; // r15d
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-16Ch] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  const data::HomeworldModuleExcelConfig *home_module_execl_config; // [rsp+38h] [rbp-158h]
  std::map<unsigned int,HomeSceneData> *__for_range_0; // [rsp+40h] [rbp-150h]
  std::pair<unsigned int const,HomeSceneData> *__in; // [rsp+48h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,HomeSceneData> >::type *scene_id_0; // [rsp+50h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int const,HomeSceneData> >::type *home_scene_data; // [rsp+58h] [rbp-138h]
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+60h] [rbp-130h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v53; // [rsp+68h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+70h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+78h] [rbp-118h]
  common::milog::MiLogStream v56; // [rsp+80h] [rbp-110h] BYREF
  char v57[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 12 home_uid:321 64 4 7 ret:336 80 4 17 new_module_id:319 96 16 18 owner_home_ptr:322 128 "
                        "16 23 new_module_data_ptr:345 160 16 13 scene_ptr:384";
  *(_QWORD *)(v4 + 16) = HomeWorld::onChangeModule;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -202178560;
  *(_DWORD *)(v4 + 80) = new_module_id;
  *(_DWORD *)(v4 + 48) = World::getOwnerUid(this);
  HomeWorld::getOwnHome((const HomeWorld *const)(v4 + 96));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v4 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "onChangeModule",
      325);
    v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v56,
           (const char (*)[41])"[HOME] owner_home_ptr is null. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v56);
    v3 = -1;
    goto LABEL_39;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 160));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
  home_module_execl_config = data::HomeWorldExcelConfigMgrBase::findHomeworldModuleExcelConfig(
                               &v8->design_config.txt_config_mgr.home_config_mgr,
                               *(_DWORD *)(v4 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 160));
  if ( !home_module_execl_config )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "onChangeModule",
      332);
    v9 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v56,
           (const char (*)[64])"findHomeworldModuleExcelConfig() return nullptr. new_module_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v56);
    v3 = 9702;
    goto LABEL_39;
  }
  *(_DWORD *)(v4 + 64) = HomeWorld::homeModuleSceneToBin(this, old_module_id);
  if ( *(_DWORD *)(v4 + 64) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "onChangeModule",
      339);
    v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v56,
            (const char (*)[34])"homeModuleSceneToBin failed. ret:");
    v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 64));
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v56);
    v3 = *(_DWORD *)(v4 + 64);
    goto LABEL_39;
  }
  HomeWorld::tryClearScene(this);
  v13 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  SceneComp = (unsigned int)Home::getSceneComp(v13);
  HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v4 + 128), SceneComp);
  if ( !std::operator!=<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v4 + 128), 0LL) )
  {
    v30 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    v31 = (unsigned int)Home::getSceneComp(v30);
    HomeSceneComp::createHomeModuleData((HomeSceneComp *const)(v4 + 160), v31);
    std::shared_ptr<HomeModuleData>::operator=(
      (std::shared_ptr<HomeModuleData> *const)(v4 + 128),
      (std::shared_ptr<HomeModuleData> *)(v4 + 160));
    std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v4 + 160));
    if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v4 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/home_world.cpp",
        "onChangeModule",
        379);
      v32 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v56,
              (const char (*)[41])"createHomeModuleData() failed. home_uid:");
      v33 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      val = Home::getHomeUid(v33);
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
      v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v34, (const char (*)[16])" new_module_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v56);
      v3 = 9701;
      goto LABEL_38;
    }
    __for_range_0 = &std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128))->scene_data_map;
    __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(__for_range_0)._M_node;
    __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> >::_Self *)&__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> > *const)&__for_begin);
      scene_id_0 = std::get<0ul,unsigned int const,HomeSceneData>(__in);
      home_scene_data = std::get<1ul,unsigned int const,HomeSceneData>(__in);
      if ( *(_BYTE *)(((unsigned __int64)scene_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)scene_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(scene_id_0);
      }
      HomeWorld::createHomeScene((HomeWorld *const)(v4 + 160), (uint32_t)this, *scene_id_0);
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 160), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/home_world.cpp",
          "onChangeModule",
          387);
        v36 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v56,
                (const char (*)[30])"scene_ptr is null, scene_id: ");
        v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, scene_id_0);
        v38 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v37, (const char (*)[12])" home_uid: ");
        v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v38,
                (const unsigned int *)(v4 + 48));
        v40 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v39, (const char (*)[12])" module_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v56);
        v3 = -1;
        v41 = 0;
      }
      else
      {
        v41 = 1;
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 160));
      if ( v41 != 1 )
        goto LABEL_38;
      std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> > *const)&__for_begin);
    }
LABEL_37:
    v3 = 0;
    goto LABEL_38;
  }
  *(_DWORD *)(v4 + 64) = HomeWorld::homeModuleSceneFromBin(this, *(_DWORD *)(v4 + 80));
  if ( !*(_DWORD *)(v4 + 64) )
  {
    __for_range = &this->scene_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v53 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
      scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v53);
      scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v53);
      if ( std::operator==<Scene>(scene_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/home_world.cpp",
          "onChangeModule",
          359);
        v18 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v56,
                (const char (*)[32])"scene_ptr is nullptr, home_uid:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v4 + 48));
        v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, scene_id);
        common::milog::MiLogStream::~MiLogStream(&v56);
        v3 = -1;
        goto LABEL_38;
      }
      v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      if ( Scene::init(v21) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/home_world.cpp",
          "onChangeModule",
          364);
        v22 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v56,
                (const char (*)[33])"scene_ptr init failed, scene_id:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, scene_id);
        v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])" home_uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v56);
        v3 = -1;
        goto LABEL_38;
      }
      v25 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
        v25 = __asan_report_load8();
      v26 = *(_QWORD *)v25 + 40LL;
      if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
        v25 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v26)(v25) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/home_world.cpp",
          "onChangeModule",
          369);
        v27 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v56,
                (const char (*)[34])"scene_ptr start failed, scene_id:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, scene_id);
        v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v28, (const char (*)[12])" home_uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v56);
        v3 = -1;
        goto LABEL_38;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
    }
    goto LABEL_37;
  }
  common::milog::MiLogStream::create(
    &v56,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/home_world.cpp",
    "onChangeModule",
    351);
  v15 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v56,
          (const char (*)[36])"homeModuleSceneFromBin failed. ret:");
  v16 = common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v4 + 64));
  v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" home_uid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 48));
  common::milog::MiLogStream::~MiLogStream(&v56);
  v3 = *(_DWORD *)(v4 + 64);
LABEL_38:
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v4 + 128));
LABEL_39:
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v4 + 96));
  result = v3;
  if ( v57 == (char *)v4 )
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

// Line 398: range 0000000013175DAC-0000000013175DFC
// local variable allocation has failed, the output may be wrong!
ScenePtr __cdecl HomeWorld::getScene(HomeWorld *const this, uint32_t scene_id)
{
  uint32_t v2; // ecx
  ScenePtr result; // rax

  v2 = scene_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&scene_id);
  result = World::findScene(this, v2);
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 403: range 0000000013175DFE-0000000013175E1F
int32_t __cdecl HomeWorld::destroyScene(HomeWorld *const this, uint32_t scene_id)
{
  return HomeWorld::destroyHomeScene(this, scene_id);
};

// Line 408: range 0000000013175E20-000000001317614C
uint32_t __cdecl HomeWorld::getMainWorldSceneId(HomeWorld *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  uint32_t world_scene_id; // r14d
  Home *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t result; // eax
  const data::HomeworldModuleExcelConfig *home_module_execl_config; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 12 home_uid:409 48 4 17 cur_module_id:417 64 16 18 owner_home_ptr:410";
  *(_QWORD *)(v1 + 16) = HomeWorld::getMainWorldSceneId;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 32) = World::getOwnerUid(this);
  HomeWorld::getOwnHome((const HomeWorld *const)(v1 + 64));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "getMainWorldSceneId",
      413);
    v4 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v12,
           (const char (*)[41])"[HOME] owner_home_ptr is null. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    world_scene_id = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    *(_DWORD *)(v1 + 48) = Home::getCurModuleId(v6);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v11);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
    home_module_execl_config = data::HomeWorldExcelConfigMgrBase::findHomeworldModuleExcelConfig(
                                 &v7->design_config.txt_config_mgr.home_config_mgr,
                                 *(_DWORD *)(v1 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v11);
    if ( home_module_execl_config )
    {
      if ( *(_BYTE *)(((unsigned __int64)&home_module_execl_config->world_scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&home_module_execl_config->world_scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&home_module_execl_config->world_scene_id);
      }
      world_scene_id = home_module_execl_config->world_scene_id;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/home_world.cpp",
        "getMainWorldSceneId",
        421);
      v8 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
             &v12,
             (const char (*)[60])"findHomeworldModuleExcelConfig() return nullptr. module_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v12);
      world_scene_id = -1;
    }
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 64));
  result = world_scene_id;
  if ( v13 == (char *)v1 )
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

// Line 428: range 000000001317614E-00000000131762BC
HomeWorldScenePtr __cdecl HomeWorld::findMainWorldScene(HomeWorld *const this)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  HomeWorldScenePtr result; // rax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:429";
  *(_QWORD *)(v2 + 16) = HomeWorld::findMainWorldScene;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = *(_QWORD *)v1 + 72LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)())v5)();
  World::findScene((World *const)(v2 + 32), v1);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  std::dynamic_pointer_cast<HomeWorldScene,Scene>((const std::shared_ptr<Scene> *)this);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<HomeWorldScene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 434: range 00000000131762BE-000000001317659E
uint32_t __cdecl HomeWorld::getCurRoomSceneId(HomeWorld *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  uint32_t CurRoomSceneId; // r14d
  Home *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t result; // eax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 12 home_uid:435 64 16 18 owner_home_ptr:436 96 16 24 home_module_data_ptr:443";
  *(_QWORD *)(v1 + 16) = HomeWorld::getCurRoomSceneId;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  *(_DWORD *)(v1 + 48) = World::getOwnerUid(this);
  HomeWorld::getOwnHome((const HomeWorld *const)(v1 + 64));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "getCurRoomSceneId",
      439);
    v4 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v10,
           (const char (*)[41])"[HOME] owner_home_ptr is null. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
    CurRoomSceneId = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    Home::getSceneComp(v6);
    HomeSceneComp::getCurHomeModuleData((HomeSceneComp *const)(v1 + 96));
    if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v1 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/home_world.cpp",
        "getCurRoomSceneId",
        446);
      v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v10,
             (const char (*)[36])"getHomeModuleData failed. home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v10);
      CurRoomSceneId = 0;
    }
    else
    {
      v8 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      CurRoomSceneId = HomeModuleData::getCurRoomSceneId(v8);
    }
    std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v1 + 96));
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 64));
  result = CurRoomSceneId;
  if ( v11 == (char *)v1 )
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

// Line 453: range 00000000131765A0-00000000131766C2
HomeRoomScenePtr __cdecl HomeWorld::findCurRoomScene(HomeWorld *const this)
{
  HomeWorld *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  HomeRoomScenePtr result; // rax
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:454";
  *(_QWORD *)(v2 + 16) = HomeWorld::findCurRoomScene;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  HomeWorld::getCurRoomSceneId(v1);
  World::findScene((World *const)(v2 + 32), (uint32_t)v1);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  std::dynamic_pointer_cast<HomeRoomScene,Scene>((const std::shared_ptr<Scene> *)this);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<HomeRoomScene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 459: range 00000000131766C4-0000000013176980
__int64 __fastcall HomeWorld::changeRoomScene(
        HomeWorld *const this,
        uint32_t module_id,
        uint32_t old_room_scene_id,
        uint32_t new_room_scene_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  std::shared_ptr<Scene> v13; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 21 old_room_scene_id:458 48 4 21 new_room_scene_id:458 64 16 22 new_room_scene_ptr:460";
  *(_QWORD *)(v4 + 16) = HomeWorld::changeRoomScene;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 32) = old_room_scene_id;
  *(_DWORD *)(v4 + 48) = new_room_scene_id;
  HomeWorld::createHomeScene((HomeWorld *const)&v13, (uint32_t)this, *(_DWORD *)(v4 + 48));
  std::dynamic_pointer_cast<HomeRoomScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 64));
  std::shared_ptr<Scene>::~shared_ptr(&v13);
  if ( std::operator==<HomeRoomScene>((const std::shared_ptr<HomeRoomScene> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "changeRoomScene",
      463);
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v14,
           (const char (*)[52])"home_world_ptr->createHomeScene() failed. scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    v8 = 9701;
  }
  else if ( HomeWorld::destroyScene(this, *(_DWORD *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "changeRoomScene",
      469);
    v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v14,
           (const char (*)[49])"home_world_ptr->destroyScene() failed. scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    v8 = 9701;
  }
  else
  {
    v8 = 0;
  }
  std::shared_ptr<HomeRoomScene>::~shared_ptr((std::shared_ptr<HomeRoomScene> *const)(v4 + 64));
  result = v8;
  if ( v15 == (char *)v4 )
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

// Line 476: range 0000000013176982-00000000131769CF
uint32_t __cdecl HomeWorld::getPlayerCountAllState(const HomeWorld *const this)
{
  int v1; // ebx
  int v2; // ebx

  v1 = std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::size(&this->allow_enter_map_);
  v2 = std::unordered_map<unsigned int,WorldPlayerSlotInfo>::size(&this->slot_info_map_) + v1;
  return v2 + std::unordered_map<unsigned int,WorldPlayerInfo>::size(&this->player_info_map_);
};

// Line 481: range 00000000131769D0-00000000131769DE
uint32_t __cdecl HomeWorld::getMaxPlayerCount(const HomeWorld *const this)
{
  return 4;
};

// Line 486: range 00000000131769E0-0000000013176BA1
bool __fastcall HomeWorld::canTryEnter(const HomeWorld *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  unsigned int max_count; // [rsp+1Ch] [rbp-64h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 64;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:485";
  *(_QWORD *)(v2 + 16) = HomeWorld::canTryEnter;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(&this->owner_uid_);
  }
  if ( this->owner_uid_ == *(_DWORD *)(v4 - 32) )
  {
    result = 1;
  }
  else if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo> const,unsigned int>(
              &this->allow_enter_map_,
              (const unsigned int *)(v4 - 32)) )
  {
    result = 1;
  }
  else
  {
    max_count = 3;
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo> const,unsigned int>(
           &this->allow_enter_map_,
           &this->owner_uid_)
      || common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,WorldPlayerSlotInfo> const,unsigned int>(
           &this->slot_info_map_,
           &this->owner_uid_)
      || common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,WorldPlayerInfo> const,unsigned int>(
           &this->player_info_map_,
           &this->owner_uid_) )
    {
      max_count = 4;
    }
    result = HomeWorld::getPlayerCountAllState(this) < max_count;
  }
  if ( v9 == (char *)v2 )
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

// Line 507: range 0000000013176BA2-0000000013176E20
__int64 __fastcall HomeWorld::allowEnter(HomeWorld *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::mapped_type *v5; // rax
  uint32_t v6; // ecx
  char v7; // dl
  char *v8; // rsi
  bool v9; // dl
  __int64 v10; // rsi
  bool v11; // dl
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 result; // rax
  uint32_t now; // [rsp+14h] [rbp-8Ch]
  HomeAllowEnterPlayerInfo *player_info; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-80h] BYREF
  char v19[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:506";
  *(_QWORD *)(v2 + 16) = HomeWorld::allowEnter;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  v8 = (char *)(v2 + 32);
  v5 = std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::operator[](
         &this->allow_enter_map_,
         (const std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::key_type *)(v2 + 32));
  player_info = v5;
  v6 = *(_DWORD *)(v2 + 32);
  v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v7 != 0;
  v9 = v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7;
  if ( v9 )
    __asan_report_store4(v5, v8, v9);
  player_info->uid = v6;
  now = common::tools::TimeUtils::getNow();
  v10 = (((_BYTE)player_info + 4) & 7u) + 3;
  v11 = *(_BYTE *)(((unsigned __int64)&player_info->allow_enter_time >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)player_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->allow_enter_time >> 3)
                                                               + 0x7FFF8000);
  if ( v11 )
    __asan_report_store4(&player_info->allow_enter_time, v10, v11);
  player_info->allow_enter_time = now;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_has_player_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_has_player_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_has_player_time_, v10, (_BYTE)this - 120);
  }
  this->last_has_player_time_ = now;
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/home_world.cpp",
    "allowEnter",
    513);
  v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v18, (const char (*)[9])"home_id:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->owner_uid_);
  v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])" allowEnter uid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v18);
  result = 0LL;
  if ( v19 == (char *)v2 )
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

// Line 518: range 0000000013176E22-0000000013177198
__int64 __fastcall HomeWorld::checkKickPlayer(HomeWorld *const this, uint32_t target_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  Player *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::shared_ptr<Scene> __a; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 target_uid:517 64 16 14 player_ptr:525";
  *(_QWORD *)(v2 + 16) = HomeWorld::checkKickPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = target_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->owner_uid_);
  }
  if ( this->owner_uid_ == *(_DWORD *)(v2 + 48) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/home_world.cpp",
      "checkKickPlayer",
      521);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v11, (const char (*)[21])"kick self is invalid");
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    World::findPlayerPtr((World *const)(v2 + 64), (uint32_t)this);
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/home_world.cpp",
        "checkKickPlayer",
        528);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v11, (const char (*)[21])"findPlayerPtr failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v5 = 9714;
    }
    else
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Player::getSceneComp(v6);
      PlayerSceneComp::getDestScene((const PlayerSceneComp *const)&__a);
      v7 = std::operator!=<Scene>(&__a, 0LL);
      std::shared_ptr<Scene>::~shared_ptr(&__a);
      if ( v7 )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/home_world.cpp",
          "checkKickPlayer",
          535);
        v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               &v11,
               (const char (*)[44])"target player dest scene is not null, uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v11);
        v5 = 1214;
      }
      else
      {
        v5 = 0;
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 543: range 000000001317719A-0000000013177728
void __fastcall HomeWorld::kickPlayer(HomeWorld *const this, uint32_t target_uid, int reason)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<proto::PlayerQuitFromHomeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // r14
  uint32_t v8; // eax
  Scene *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  Player *v18; // rax
  Player *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+10h] [rbp-120h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+18h] [rbp-118h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+20h] [rbp-110h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v24; // [rsp+28h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+30h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 12 home_uid:552 48 4 14 target_uid:542 64 16 14 player_ptr:544 96 16 14 notify_ptr:547 12"
                        "8 16 17 target_player:555";
  *(_QWORD *)(v3 + 16) = HomeWorld::kickPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 48) = target_uid;
  World::findPlayerPtr((World *const)(v3 + 64), (uint32_t)this);
  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
  {
    common::tools::perf::make_shared<proto::PlayerQuitFromHomeNotify>();
    v6 = std::__shared_ptr_access<proto::PlayerQuitFromHomeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerQuitFromHomeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    proto::PlayerQuitFromHomeNotify::set_reason(v6, PlayerQuitFromHomeNotify_QuitReason_KICK_BY_HOST);
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerQuitFromHomeNotify>((const std::shared_ptr<proto::PlayerQuitFromHomeNotify> *)(v3 + 128));
    Player::sendMessage(v7, (common::minet::ConstMessagePtr *)(v3 + 128), 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v3 + 128));
    std::shared_ptr<proto::PlayerQuitFromHomeNotify>::~shared_ptr((std::shared_ptr<proto::PlayerQuitFromHomeNotify> *const)(v3 + 96));
  }
  *(_DWORD *)(v3 + 32) = World::getOwnerUid(this);
  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v24);
    scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v24);
    v8 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
    Scene::findPlayer((const Scene *const)(v3 + 128), v8);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 128), 0LL) )
    {
      v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      if ( Scene::kickPlayer(v9, *(_DWORD *)(v3 + 48), 1) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/home_world.cpp",
          "kickPlayer",
          560);
        v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v27,
                (const char (*)[29])"kickPlayer failed, home_uid:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v3 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" target_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/home_world.cpp",
        "kickPlayer",
        562);
      v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v27,
              (const char (*)[30])"kickPlayer success, home_uid:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
      v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" target_uid:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, scene_id);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      Player::setIsQuitMp(v18, 1);
      v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( Player::leaveCurScene(v19) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/home_world.cpp",
          "kickPlayer",
          568);
        v20 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v27,
                (const char (*)[41])"target player leaveCurScene failed, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 128));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 575: range 0000000013177C82-0000000013177F74
void __cdecl HomeWorld::kickAllPlayer(HomeWorld *const this, int reason, bool can_kick_owner)
{
  std::shared_ptr<Scene> *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  Scene *v7; // r14
  HomeWorld::kickAllPlayer::<lambda(Player&)> v8; // [rsp-20h] [rbp-110h]
  uint32_t home_uid; // [rsp+1Ch] [rbp-D4h]
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *scene_pair; // [rsp+38h] [rbp-B8h]
  HomeWorld::kickAllPlayer::<lambda(Player&)> __f; // [rsp+40h] [rbp-B0h]
  common::milog::MiLogStream v16; // [rsp+60h] [rbp-90h] BYREF
  char v17[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (std::shared_ptr<Scene> *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = (std::shared_ptr<Scene> *)v4;
  }
  v3->_M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v3->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 13 scene_ptr:579";
  v3[1]._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)HomeWorld::kickAllPlayer;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  home_uid = World::getOwnerUid(this);
  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    scene_pair = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    std::shared_ptr<Scene>::shared_ptr(v3 + 2, &scene_pair->second);
    if ( std::operator==<Scene>(v3 + 2, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/home_world.cpp",
        "kickAllPlayer",
        582);
      v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v16,
             (const char (*)[33])"scene_ptr is nullptr. scene_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &scene_pair->first);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3[2]);
      __f.__reason = reason;
      __f.__can_kick_owner = can_kick_owner;
      __f.__home_uid = home_uid;
      __f.__scene_ptr = v3 + 2;
      v8.__scene_ptr = v3 + 2;
      *(_OWORD *)&v8.__reason = *(_OWORD *)&__f.__reason;
      std::function<ForeachPolicy ()(Player &)>::function<HomeWorld::kickAllPlayer(int,bool)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v16,
        v8);
      Scene::foreachPlayer(v7, (std::function<ForeachPolicy(Player&)> *)&v16);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v16);
    }
    std::shared_ptr<Scene>::~shared_ptr(v3 + 2);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v3->_M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 585: range 000000001317772A-0000000013177C80
ForeachPolicy __cdecl HomeWorld::kickAllPlayer(int,bool)::{lambda(Player &)#1}::operator()(
        const HomeWorld::kickAllPlayer::<lambda(Player&)> *const __closure,
        Player *target_player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t Uid; // ecx
  char v6; // al
  Scene *v7; // r14
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  ForeachPolicy result; // eax
  unsigned int v20; // [rsp+18h] [rbp-B8h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 10 notify:591";
  *(_QWORD *)(v2 + 16) = HomeWorld::kickAllPlayer(int,bool)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__can_kick_owner >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)__closure + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&__closure->__can_kick_owner >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load1(&__closure->__can_kick_owner);
  }
  if ( __closure->__can_kick_owner )
    goto LABEL_11;
  Uid = Player::getUid(target_player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__home_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__home_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__home_uid);
  }
  if ( Uid == __closure->__home_uid )
    v6 = 1;
  else
LABEL_11:
    v6 = 0;
  if ( !v6 )
  {
    proto::PlayerQuitFromHomeNotify::PlayerQuitFromHomeNotify((proto::PlayerQuitFromHomeNotify *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(__closure);
    }
    proto::PlayerQuitFromHomeNotify::set_reason(
      (proto::PlayerQuitFromHomeNotify *const)(v2 + 32),
      (proto::PlayerQuitFromHomeNotify_QuitReason)__closure->__reason);
    Player::sendProto(target_player, (const google::protobuf::Message *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__scene_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__scene_ptr);
    v8 = Player::getUid(target_player);
    if ( Scene::kickPlayer(v7, v8, 1) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/home_world.cpp",
        "operator()",
        596);
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v22,
             (const char (*)[29])"kickPlayer failed, home_uid:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &__closure->__home_uid);
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" target_uid:");
      val = Player::getUid(target_player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    Player::setIsQuitMp(target_player, 1);
    if ( Player::leaveCurScene(target_player) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/home_world.cpp",
        "operator()",
        602);
      v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v22,
              (const char (*)[41])"target player leaveCurScene failed, uid:");
      val = Player::getUid(target_player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/home_world.cpp",
      "operator()",
      604);
    v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v22,
            (const char (*)[30])"kickPlayer success, home_uid:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &__closure->__home_uid);
    v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" target_uid:");
    v20 = Player::getUid(target_player);
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v20);
    v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__scene_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__scene_ptr);
    val = Scene::getSceneId(v18);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    proto::PlayerQuitFromHomeNotify::~PlayerQuitFromHomeNotify((proto::PlayerQuitFromHomeNotify *const)(v2 + 32));
  }
  result = FOREACH_CONTINUE;
  if ( v23 == (char *)v2 )
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

// Line 612: range 0000000013177F76-0000000013178543
int32_t __cdecl HomeWorld::playerPreEnter(HomeWorld *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  char *v16; // rsi
  uint32_t v17; // ecx
  char v18; // al
  uint32_t Now; // edi
  bool v20; // dl
  PlayerBasicComp *BasicComp; // rax
  const std::string *v22; // rax
  __int64 v23; // rsi
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false> __y; // [rsp+10h] [rbp-B0h] BYREF
  WorldPlayerSlotInfo *slot_info; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v31; // [rsp+20h] [rbp-A0h] BYREF
  char v32[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 12 home_uid:613 48 4 7 uid:615 64 8 8 iter:616";
  *(_QWORD *)(v2 + 16) = HomeWorld::playerPreEnter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 32) = World::getOwnerUid(this);
  *(_DWORD *)(v2 + 48) = Player::getUid(player);
  *(std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::find(
                                                                                        &this->allow_enter_map_,
                                                                                        (const std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::end(&this->allow_enter_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false> *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/home_world.cpp",
      "playerPreEnter",
      619);
    v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v31, (const char (*)[17])"world home_uid: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           v6,
           (const char (*)[35])" cannot found allow slot for uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v31);
    result = -1;
  }
  else
  {
    std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::erase(
      &this->allow_enter_map_,
      *(std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::iterator *)(v2 + 64));
    if ( World::isWorldFull(this) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/home_world.cpp",
        "playerPreEnter",
        627);
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v31, (const char (*)[6])"uid: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v10,
              (const char (*)[22])" pre_enter home_uid: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" world fails");
      common::milog::MiLogStream::~MiLogStream(&v31);
      result = -1;
    }
    else
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,WorldPlayerSlotInfo>,unsigned int>(
             &this->slot_info_map_,
             (const unsigned int *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/home_world.cpp",
          "playerPreEnter",
          633);
        v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v31, (const char (*)[6])"uid: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                v14,
                (const char (*)[36])" already preEnter world, home_uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v31);
      }
      v16 = (char *)(v2 + 48);
      slot_info = std::unordered_map<unsigned int,WorldPlayerSlotInfo>::operator[](
                    &this->slot_info_map_,
                    (const std::unordered_map<unsigned int,WorldPlayerSlotInfo>::key_type *)(v2 + 48));
      v17 = *(_DWORD *)(v2 + 48);
      v18 = *(_BYTE *)(((unsigned __int64)slot_info >> 3) + 0x7FFF8000);
      if ( v18 != 0 && v18 <= 3 )
      {
        LOBYTE(v16) = v18 != 0;
        __asan_report_store4(slot_info, v16, (_BYTE)slot_info);
      }
      slot_info->uid = v17;
      Now = common::tools::TimeUtils::getNow();
      v20 = *(_BYTE *)(((unsigned __int64)&slot_info->pre_enter_time >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)slot_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&slot_info->pre_enter_time >> 3)
                                                                 + 0x7FFF8000);
      if ( v20 )
      {
        Now = (_DWORD)slot_info + 4;
        __asan_report_store4(&slot_info->pre_enter_time, (((_BYTE)slot_info + 4) & 7u) + 3, v20);
      }
      slot_info->pre_enter_time = Now;
      BasicComp = Player::getBasicComp(player);
      v22 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
      std::string::operator=(&slot_info->nickname, v22);
      World::notifyPreEnterMpPlayer(
        this,
        *(_DWORD *)(v2 + 48),
        &slot_info->nickname,
        PlayerPreEnterMpNotify_State_START);
      v23 = (unsigned int)common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&this->last_has_player_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_has_player_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_has_player_time_, v23, (_BYTE)this - 120);
      }
      this->last_has_player_time_ = v23;
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/home_world.cpp",
        "playerPreEnter",
        642);
      v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v31, (const char (*)[13])"[HOME] uid: ");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 48));
      v26 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v25,
              (const char (*)[29])" pre-Enter world, home_uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v31);
      result = 0;
    }
  }
  if ( v32 == (char *)v2 )
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

// Line 648: range 0000000013178716-00000000131798BF
int32_t __cdecl HomeWorld::playerEnter(HomeWorld *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  char v18; // al
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  PlayerSceneComp *SceneComp; // rax
  uint32_t Now; // edi
  __int64 v24; // rsi
  bool v25; // dl
  SceneTeam *v26; // rdx
  HomeWorld::playerEnter::<lambda(Player&)> v27; // si
  common::milog::MiLogStream *v28; // rax
  unsigned __int64 v29; // rax
  common::milog::MiLogStream *v30; // rax
  Home *v31; // rdx
  PlayerHomeComp *HomeComp; // rax
  Home *v33; // rdx
  Home *v34; // rdx
  Home *v35; // rdx
  __int64 v36; // rsi
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  PlayerWorld *v42; // rdx
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  std::string v45; // [rsp+0h] [rbp-290h]
  char __args_0[5]; // [rsp+2Bh] [rbp-265h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerSlotInfo>,false> __y; // [rsp+30h] [rbp-260h] BYREF
  WorldPlayerInfo *player_info; // [rsp+38h] [rbp-258h]
  std::shared_ptr<Player> __r; // [rsp+40h] [rbp-250h] BYREF
  std::shared_ptr<WorldPlayerChangeEvent> v50; // [rsp+50h] [rbp-240h] BYREF
  std::shared_ptr<World> p_world_ptr; // [rsp+60h] [rbp-230h] BYREF
  common::milog::MiLogStream v52; // [rsp+70h] [rbp-220h] BYREF
  HomeWorld::playerEnter::<lambda(Player&)>_0 p___f; // [rsp+90h] [rbp-200h] BYREF
  char v54[464]; // [rsp+C0h] [rbp-1D0h] BYREF

  *(&v45._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v45._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v2 = (unsigned __int64)v54;
  v45._M_dataplus._M_p = v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 10 holder:656 48 4 12 home_uid:649 64 4 7 uid:658 80 4 13 old_count:692 96 8 8 iter:665 "
                        "128 16 18 owner_home_ptr:650 160 16 13 world_ptr:688 192 16 13 event_ptr:725 224 16 16 mp_event_"
                        "ptr:727 256 16 20 player_world_ptr:756 288 24 19 enterer_uid_vec:726 352 24 11 uid_vec:728";
  *(_QWORD *)(v2 + 16) = HomeWorld::playerEnter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = -234881024;
  v4[536862730] = -218959118;
  v4[536862731] = -218103808;
  v4[536862732] = -202116109;
  *(_DWORD *)(v2 + 48) = World::getOwnerUid(this);
  HomeWorld::getOwnHome((const HomeWorld *const)(v2 + 128));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "playerEnter",
      653);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v52,
           (const char (*)[41])"[HOME] owner_home_ptr is null. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v52);
    v6 = -1;
  }
  else
  {
    BasicComp = Player::getBasicComp(player);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v52, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x60Eu, v45);
    std::string::~string(&v52);
    *(_DWORD *)(v2 + 64) = Player::getUid((const Player *const)v45._anon_0._M_allocated_capacity);
    if ( World::isWorldFull(*((const World *const *)&v45._anon_0._M_allocated_capacity + 1)) )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/home_world.cpp",
        "playerEnter",
        661);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v52, (const char (*)[6])"uid: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
      v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v9, (const char (*)[18])" enter home_uid: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" world fails");
      common::milog::MiLogStream::~MiLogStream(&v52);
      v6 = -1;
    }
    else
    {
      *(std::unordered_map<unsigned int,WorldPlayerSlotInfo>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,WorldPlayerSlotInfo>::find(
                                                                                       (std::unordered_map<unsigned int,WorldPlayerSlotInfo> *const)(*(&v45._anon_0._M_allocated_capacity + 1) + 96),
                                                                                       (const std::unordered_map<unsigned int,WorldPlayerSlotInfo>::key_type *)(v2 + 64));
      __y._M_cur = std::unordered_map<unsigned int,WorldPlayerSlotInfo>::end((std::unordered_map<unsigned int,WorldPlayerSlotInfo> *const)(*(&v45._anon_0._M_allocated_capacity + 1) + 96))._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,WorldPlayerSlotInfo>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerSlotInfo>,false> *)(v2 + 96),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/home_world.cpp",
          "playerEnter",
          668);
        v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                &v52,
                (const char (*)[17])"world home_uid: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                v13,
                (const char (*)[29])" cannot found slot for uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v52);
        v6 = -1;
      }
      else if ( std::operator==<UnixTimer>(
                  (const std::shared_ptr<UnixTimer> *)(*(&v45._anon_0._M_allocated_capacity + 1) + 32),
                  0LL) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/home_world.cpp",
          "playerEnter",
          674);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v52,
          (const char (*)[22])"timer_ptr_ is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v52);
        v6 = -1;
      }
      else
      {
        v15 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v45._anon_0._M_allocated_capacity + 1) + 32));
        if ( common::tools::MiTimer::isActive(v15) )
          goto LABEL_19;
        v16 = (unsigned __int64)std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v45._anon_0._M_allocated_capacity + 1) + 32));
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8();
        v17 = *(_QWORD *)v16 + 16LL;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(unsigned __int64, __int64, __int64, const char *, const char *, __int64, _QWORD, _QWORD))v17)(
               v16,
               1LL,
               1LL,
               "./src/scene/home_world.cpp",
               "playerEnter",
               677LL,
               *(unsigned int *)(v2 + 48),
               0LL) )
        {
          v18 = 1;
        }
        else
        {
LABEL_19:
          v18 = 0;
        }
        if ( v18 )
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/home_world.cpp",
            "playerEnter",
            679);
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v52,
            (const char (*)[25])"timer_ptr_->startS fails");
          common::milog::MiLogStream::~MiLogStream(&v52);
        }
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/home_world.cpp",
          "playerEnter",
          682);
        v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v52, (const char (*)[13])"[HOME] uid: ");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v2 + 64));
        v21 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v20,
                (const char (*)[25])" enter world, home_uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v52);
        std::unordered_map<unsigned int,WorldPlayerSlotInfo>::erase(
          (std::unordered_map<unsigned int,WorldPlayerSlotInfo> *const)(*(&v45._anon_0._M_allocated_capacity + 1) + 96),
          *(std::unordered_map<unsigned int,WorldPlayerSlotInfo>::iterator *)(v2 + 96));
        toThisPtr<HomeWorld>((HomeWorld *)(v2 + 160));
        v45._M_string_length = (std::string::size_type)Player::getSceneComp((Player *const)v45._anon_0._M_allocated_capacity);
        std::shared_ptr<World>::shared_ptr<HomeWorld,void>(&p_world_ptr, (const std::shared_ptr<HomeWorld> *)(v2 + 160));
        PlayerSceneComp::setCurWorld((PlayerSceneComp *const)v45._M_string_length, &p_world_ptr);
        std::shared_ptr<World>::~shared_ptr(&p_world_ptr);
        SceneComp = Player::getSceneComp((Player *const)v45._anon_0._M_allocated_capacity);
        PlayerSceneComp::setCurWorldOwnerUid(SceneComp, *(_DWORD *)(v2 + 48));
        *(_DWORD *)(v2 + 80) = World::getPlayerCount(*((const World *const *)&v45._anon_0._M_allocated_capacity + 1));
        player_info = std::unordered_map<unsigned int,WorldPlayerInfo>::operator[](
                        (std::unordered_map<unsigned int,WorldPlayerInfo> *const)(*(&v45._anon_0._M_allocated_capacity
                                                                                  + 1)
                                                                                + 152),
                        (const std::unordered_map<unsigned int,WorldPlayerInfo>::key_type *)(v2 + 64));
        toThisPtr<Player>((Player *)&__r);
        std::weak_ptr<Player>::operator=<Player>(&player_info->player_wtr, &__r);
        std::shared_ptr<Player>::~shared_ptr(&__r);
        Now = common::tools::TimeUtils::getNow();
        v24 = (((_BYTE)player_info + 20) & 7u) + 3;
        v25 = *(_BYTE *)(((unsigned __int64)&player_info->enter_time >> 3) + 0x7FFF8000) != 0
           && (char)((((_BYTE)player_info + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->enter_time >> 3)
                                                                      + 0x7FFF8000);
        if ( v25 )
        {
          Now = (_DWORD)player_info + 20;
          __asan_report_store4(&player_info->enter_time, v24, v25);
        }
        player_info->enter_time = Now;
        if ( *(_BYTE *)(((unsigned __int64)&player_info->cur_scene_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&player_info->cur_scene_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&player_info->cur_scene_id, v24, (_BYTE)player_info + 16);
        }
        player_info->cur_scene_id = 0;
        if ( std::operator!=<SceneTeam>(
               (const std::shared_ptr<SceneTeam> *)(*(&v45._anon_0._M_allocated_capacity + 1) + 224),
               0LL) )
        {
          v26 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v45._anon_0._M_allocated_capacity + 1) + 224));
          v27.gap0[0] = v45._anon_0._M_local_buf[0];
          SceneTeam::onPlayerEnter(v26, (Player *)v45._anon_0._M_allocated_capacity);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/home_world.cpp",
            "playerEnter",
            703);
          v28 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v52,
                  (const char (*)[32])"SceneTeam is nullptr, home_uid:");
          v27.gap0[0] = v2 + 48;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v52);
        }
        std::function<ForeachPolicy ()(Player &)>::function<HomeWorld::playerEnter(Player &)::{lambda(Player &)#1},void,void>(
          (std::function<ForeachPolicy(Player&)> *const)&v52,
          v27);
        World::foreachPlayer(
          *((World *const *)&v45._anon_0._M_allocated_capacity + 1),
          (std::function<ForeachPolicy(Player&)> *)&v52);
        std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v52);
        World::notifyAllPlayerInfo(*((World *const *)&v45._anon_0._M_allocated_capacity + 1));
        if ( *(_BYTE *)((*(&v45._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v29 = **((_QWORD **)&v45._anon_0._M_allocated_capacity + 1) + 176LL;
        if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
          v29 = __asan_report_load8();
        (*(void (__fastcall **)(__int64, std::string::size_type))v29)(
          *(&v45._anon_0._M_allocated_capacity + 1),
          v45._anon_0._M_allocated_capacity);
        HomeWorld::notifyPlayerEnterToOwner(
          *((HomeWorld *const *)&v45._anon_0._M_allocated_capacity + 1),
          (Player *)v45._anon_0._M_allocated_capacity);
        if ( World::getPlayerCount(*((const World *const *)&v45._anon_0._M_allocated_capacity + 1)) > 1 )
          World::notifyEnterWorldChatChannel(
            *((World *const *)&v45._anon_0._M_allocated_capacity + 1),
            (Player *)v45._anon_0._M_allocated_capacity);
        __args_0[0] = 1;
        *(_DWORD *)&__args_0[1] = World::getPlayerCount(*((const World *const *)&v45._anon_0._M_allocated_capacity + 1));
        common::tools::perf::make_shared<WorldPlayerChangeEvent,unsigned int &,unsigned int,unsigned int &,unsigned int &,bool>(
          (unsigned int *)&v50,
          (unsigned int *)(v2 + 80),
          (unsigned int *)&__args_0[1],
          (unsigned int *)(v2 + 48),
          (bool *)(v2 + 64),
          (unsigned int *)__args_0,
          (unsigned int *)v45._M_dataplus._M_p,
          *((unsigned int **)&v45._anon_0._M_allocated_capacity + 1),
          (unsigned int *)v45._anon_0._M_allocated_capacity,
          *((bool **)&v45._anon_0._M_allocated_capacity + 1));
        std::shared_ptr<BaseEvent>::shared_ptr<WorldPlayerChangeEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v2 + 192),
          &v50);
        std::shared_ptr<WorldPlayerChangeEvent>::~shared_ptr(&v50);
        *(_DWORD *)&__args_0[1] = *(_DWORD *)(v2 + 64);
        std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)__args_0);
        std::vector<unsigned int>::vector(
          (std::vector<unsigned int> *const)(v2 + 288),
          (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__args_0[1]),
          (const std::vector<unsigned int>::allocator_type *)__args_0);
        std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)__args_0);
        common::tools::perf::make_shared<EnterMpEvent,std::vector<unsigned int> &>(
          (std::vector<unsigned int> *)&p_world_ptr,
          (std::vector<unsigned int> *)(v2 + 288));
        std::shared_ptr<BaseEvent>::shared_ptr<EnterMpEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v2 + 224),
          (std::shared_ptr<EnterMpEvent> *)&p_world_ptr);
        std::shared_ptr<EnterMpEvent>::~shared_ptr((std::shared_ptr<EnterMpEvent> *const)&p_world_ptr);
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 352));
        p___f.__uid = *(_DWORD *)(v2 + 64);
        std::shared_ptr<BaseEvent>::shared_ptr(&p___f.__event_ptr, (const std::shared_ptr<BaseEvent> *)(v2 + 192));
        std::shared_ptr<BaseEvent>::shared_ptr(&p___f.__mp_event_ptr, (const std::shared_ptr<BaseEvent> *)(v2 + 224));
        p___f.__uid_vec = (std::vector<unsigned int> *)(v2 + 352);
        std::function<ForeachPolicy ()(Player &)>::function<HomeWorld::playerEnter(Player &)::{lambda(Player &)#2},void,void>(
          (std::function<ForeachPolicy(Player&)> *const)&v52,
          &p___f);
        World::foreachPlayer(
          *((World *const *)&v45._anon_0._M_allocated_capacity + 1),
          (std::function<ForeachPolicy(Player&)> *)&v52);
        std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v52);
        HomeWorld::playerEnter(Player &)::{lambda(Player &)#2}::~Player(&p___f);
        if ( *(_DWORD *)(v2 + 64) == *(_DWORD *)(v2 + 48) )
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/scene/home_world.cpp",
            "playerEnter",
            743);
          v30 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v52,
                  (const char (*)[42])"[HOME] player enter self home world. uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v52);
          v31 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          Home::onOwnerPlayerEnter(v31, (Player *)v45._anon_0._M_allocated_capacity);
          HomeComp = Player::getHomeComp((Player *const)v45._anon_0._M_allocated_capacity);
          PlayerHomeComp::notifyPriorCheckInfo(HomeComp);
        }
        v33 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        Home::onPlayerEnter(v33, (Player *)v45._anon_0._M_allocated_capacity);
        v34 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        HomeWorld::logPlayerEnter(
          *((HomeWorld *const *)&v45._anon_0._M_allocated_capacity + 1),
          (Player *)v45._anon_0._M_allocated_capacity,
          v34);
        v35 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        Home::notifyAllDataToPlayer(v35, (Player *)v45._anon_0._M_allocated_capacity);
        v36 = (unsigned int)common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((*(&v45._anon_0._M_allocated_capacity + 1) + 392) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((*(&v45._anon_0._M_allocated_capacity + 1) + 392) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(*(&v45._anon_0._M_allocated_capacity + 1) + 392, v36, v45._anon_0._M_local_buf[8] - 120);
        }
        *(_DWORD *)(*(&v45._anon_0._M_allocated_capacity + 1) + 392) = v36;
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/scene/home_world.cpp",
          "playerEnter",
          754);
        v37 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v52, (const char (*)[13])"[HOME] uid: ");
        v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v37,
                (const unsigned int *)(v2 + 64));
        v39 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v38,
                (const char (*)[18])" enter home_uid: ");
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v39,
                (const unsigned int *)(v2 + 48));
        v41 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v40,
                (const char (*)[17])" now player_cnt:");
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerSlotInfo>,false>::__node_type *)std::unordered_map<unsigned int,WorldPlayerInfo>::size((const std::unordered_map<unsigned int,WorldPlayerInfo> *const)(*(&v45._anon_0._M_allocated_capacity + 1) + 152));
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v41, (const unsigned __int64 *)&__y);
        common::milog::MiLogStream::~MiLogStream(&v52);
        Player::getSceneComp((Player *const)v45._anon_0._M_allocated_capacity);
        PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 256));
        if ( std::operator!=<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 256)) )
        {
          v42 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
          PlayerWorld::notifyPlayerWorldSceneInfoList(v42, (Player *)v45._anon_0._M_allocated_capacity);
        }
        EventComp = Player::getEventComp((Player *const)v45._anon_0._M_allocated_capacity);
        common::tools::perf::make_shared<PlayerEnterHomeEvent,unsigned int &>(
          (unsigned int *)&v50,
          (unsigned int *)(v2 + 48));
        std::shared_ptr<BaseEvent>::shared_ptr<PlayerEnterHomeEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&p_world_ptr,
          (std::shared_ptr<PlayerEnterHomeEvent> *)&v50);
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_world_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_world_ptr);
        std::shared_ptr<PlayerEnterHomeEvent>::~shared_ptr((std::shared_ptr<PlayerEnterHomeEvent> *const)&v50);
        v6 = 0;
        std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 256));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 352));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 224));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 288));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 192));
        std::shared_ptr<HomeWorld>::~shared_ptr((std::shared_ptr<HomeWorld> *const)(v2 + 160));
      }
    }
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 128));
  result = v6;
  if ( v45._M_dataplus._M_p == (std::string::pointer)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 707: range 0000000013178544-000000001317856E
ForeachPolicy __cdecl HomeWorld::playerEnter(Player &)::{lambda(Player &)#1}::operator()(
        const HomeWorld::playerEnter::<lambda(Player&)> *const __closure,
        Player *other_player)
{
  PlayerMpComp *MpComp; // rax

  MpComp = Player::getMpComp(other_player);
  PlayerMpComp::updateMpPlayerInfo(MpComp);
  return 0;
};

// Line 730: range 0000000013178570-00000000131786E4
ForeachPolicy __cdecl HomeWorld::playerEnter(Player &)::{lambda(Player &)#2}::operator()(
        const HomeWorld::playerEnter::<lambda(Player&)>_0 *const __closure,
        Player *other_player)
{
  uint32_t Uid; // ecx
  PlayerEventComp *EventComp; // rbx
  PlayerEventComp *v4; // rbx
  std::vector<unsigned int> *uid_vec; // rbx
  std::vector<unsigned int>::value_type __x; // [rsp+1Ch] [rbp-24h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-20h] BYREF

  Uid = Player::getUid(other_player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( Uid != __closure->__uid )
  {
    EventComp = Player::getEventComp(other_player);
    std::shared_ptr<BaseEvent>::shared_ptr(&p_event_ptr, &__closure->__event_ptr);
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    v4 = Player::getEventComp(other_player);
    std::shared_ptr<BaseEvent>::shared_ptr(&p_event_ptr, &__closure->__mp_event_ptr);
    PlayerEventComp::notifyEvent(v4, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    uid_vec = __closure->__uid_vec;
    __x = Player::getUid(other_player);
    std::vector<unsigned int>::push_back(uid_vec, &__x);
  }
  return 0;
};

// Line 730: range 00000000131A45FA-00000000131A4707
void __cdecl HomeWorld::playerEnter(Player &)::{lambda(Player &)#2}::Player(
        HomeWorld::playerEnter::<lambda(Player&)>_0 *const this,
        HomeWorld::playerEnter::<lambda(Player&)>_0 *a2)
{
  uint32_t uid; // ecx
  char v3; // al
  std::vector<unsigned int> *uid_vec; // rdx
  HomeWorld::playerEnter::<lambda(Player&)>_0 *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  uid = a2->__uid;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->__uid = uid;
  std::shared_ptr<BaseEvent>::shared_ptr(&this->__event_ptr, &v5->__event_ptr);
  std::shared_ptr<BaseEvent>::shared_ptr(&this->__mp_event_ptr, &v5->__mp_event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&v5->__uid_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  uid_vec = v5->__uid_vec;
  if ( *(_BYTE *)(((unsigned __int64)&this->__uid_vec >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__uid_vec, &v5->__mp_event_ptr);
  this->__uid_vec = uid_vec;
};

// Line 730: range 00000000131A47D2-00000000131A48DF
void __cdecl HomeWorld::playerEnter(Player &)::{lambda(Player &)#2}::Player(
        HomeWorld::playerEnter::<lambda(Player&)>_0 *const this,
        const HomeWorld::playerEnter::<lambda(Player&)>_0 *a2)
{
  uint32_t uid; // ecx
  char v3; // al
  std::vector<unsigned int> *uid_vec; // rdx
  const HomeWorld::playerEnter::<lambda(Player&)>_0 *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  uid = a2->__uid;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->__uid = uid;
  std::shared_ptr<BaseEvent>::shared_ptr(&this->__event_ptr, &v5->__event_ptr);
  std::shared_ptr<BaseEvent>::shared_ptr(&this->__mp_event_ptr, &v5->__mp_event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&v5->__uid_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  uid_vec = v5->__uid_vec;
  if ( *(_BYTE *)(((unsigned __int64)&this->__uid_vec >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__uid_vec, &v5->__mp_event_ptr);
  this->__uid_vec = uid_vec;
};

// Line 730: range 00000000131786E6-0000000013178714
void __cdecl HomeWorld::playerEnter(Player &)::{lambda(Player &)#2}::~Player(
        HomeWorld::playerEnter::<lambda(Player&)>_0 *const this)
{
  std::shared_ptr<BaseEvent>::~shared_ptr(&this->__mp_event_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr(&this->__event_ptr);
};

// Line 767: range 00000000131798C0-0000000013179CF6
void __cdecl HomeWorld::notifyPlayerEnterToOwner(HomeWorld *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // r14
  PlayerBasicComp *BasicComp; // rax
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::minet::Packet *v11; // r14
  uint32_t OwnerUid; // eax
  NetworkMgrBase *v13; // r14
  uint32_t v14; // r8d
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  unsigned int Uid; // [rsp+18h] [rbp-E8h] BYREF
  uint32_t owner_uid; // [rsp+1Ch] [rbp-E4h]
  std::shared_ptr<Player> __a; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 packet_ptr:780 64 32 10 notify:777";
  *(_QWORD *)(v2 + 16) = HomeWorld::notifyPlayerEnterToOwner;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  owner_uid = World::getOwnerUid(this);
  if ( owner_uid != Player::getUid(player) )
  {
    World::findPlayerPtr((World *const)&__a, (uint32_t)this);
    v5 = std::operator!=<Player>(&__a, 0LL);
    std::shared_ptr<Player>::~shared_ptr(&__a);
    if ( !v5 )
    {
      proto::OtherPlayerEnterHomeNotify::OtherPlayerEnterHomeNotify((proto::OtherPlayerEnterHomeNotify *const)(v2 + 64));
      BasicComp = Player::getBasicComp(player);
      v7 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
      proto::OtherPlayerEnterHomeNotify::set_nickname((proto::OtherPlayerEnterHomeNotify *const)(v2 + 64), v7);
      proto::OtherPlayerEnterHomeNotify::set_reason(
        (proto::OtherPlayerEnterHomeNotify *const)(v2 + 64),
        OtherPlayerEnterHomeNotify_Reason_ENTER);
      common::minet::PacketUtils::createPacket<proto::OtherPlayerEnterHomeNotify>((const proto::OtherPlayerEnterHomeNotify *)(v2 + 32));
      if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/home_world.cpp",
          "notifyPlayerEnterToOwner",
          783);
        v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
               &v19,
               (const char (*)[31])"createPacket failed, home uid:");
        val = World::getOwnerUid(this);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" uid: ");
        Uid = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &Uid);
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      else
      {
        v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        OwnerUid = World::getOwnerUid(this);
        common::minet::Packet::setUserId(v11, OwnerUid);
        v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)&__a,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
        LOBYTE(v13) = NetworkMgrBase::sendPacketToTargetService(
                        v13,
                        (common::minet::PacketPtr)__PAIR128__(3LL, &__a),
                        0,
                        v14) != 0;
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__a);
        if ( (_BYTE)v13 )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/home_world.cpp",
            "notifyPlayerEnterToOwner",
            789);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v19,
            (const char (*)[33])"sendPacketToTargetService failed");
          common::milog::MiLogStream::~MiLogStream(&v19);
        }
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
      proto::OtherPlayerEnterHomeNotify::~OtherPlayerEnterHomeNotify((proto::OtherPlayerEnterHomeNotify *const)(v2 + 64));
    }
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 794: range 0000000013179CF8-000000001317A12E
void __cdecl HomeWorld::notifyPlayerLeaveToOwner(HomeWorld *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // r14
  PlayerBasicComp *BasicComp; // rax
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::minet::Packet *v11; // r14
  uint32_t OwnerUid; // eax
  NetworkMgrBase *v13; // r14
  uint32_t v14; // r8d
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  unsigned int Uid; // [rsp+18h] [rbp-E8h] BYREF
  uint32_t owner_uid; // [rsp+1Ch] [rbp-E4h]
  std::shared_ptr<Player> __a; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 packet_ptr:807 64 32 10 notify:804";
  *(_QWORD *)(v2 + 16) = HomeWorld::notifyPlayerLeaveToOwner;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  owner_uid = World::getOwnerUid(this);
  if ( owner_uid != Player::getUid(player) )
  {
    World::findPlayerPtr((World *const)&__a, (uint32_t)this);
    v5 = std::operator!=<Player>(&__a, 0LL);
    std::shared_ptr<Player>::~shared_ptr(&__a);
    if ( !v5 )
    {
      proto::OtherPlayerEnterHomeNotify::OtherPlayerEnterHomeNotify((proto::OtherPlayerEnterHomeNotify *const)(v2 + 64));
      BasicComp = Player::getBasicComp(player);
      v7 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
      proto::OtherPlayerEnterHomeNotify::set_nickname((proto::OtherPlayerEnterHomeNotify *const)(v2 + 64), v7);
      proto::OtherPlayerEnterHomeNotify::set_reason(
        (proto::OtherPlayerEnterHomeNotify *const)(v2 + 64),
        OtherPlayerEnterHomeNotify_Reason_LEAVE);
      common::minet::PacketUtils::createPacket<proto::OtherPlayerEnterHomeNotify>((const proto::OtherPlayerEnterHomeNotify *)(v2 + 32));
      if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/home_world.cpp",
          "notifyPlayerLeaveToOwner",
          810);
        v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
               &v19,
               (const char (*)[31])"createPacket failed, home uid:");
        val = World::getOwnerUid(this);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" uid: ");
        Uid = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &Uid);
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      else
      {
        v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        OwnerUid = World::getOwnerUid(this);
        common::minet::Packet::setUserId(v11, OwnerUid);
        v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)&__a,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
        LOBYTE(v13) = NetworkMgrBase::sendPacketToTargetService(
                        v13,
                        (common::minet::PacketPtr)__PAIR128__(3LL, &__a),
                        0,
                        v14) != 0;
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__a);
        if ( (_BYTE)v13 )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/home_world.cpp",
            "notifyPlayerLeaveToOwner",
            816);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v19,
            (const char (*)[33])"sendPacketToTargetService failed");
          common::milog::MiLogStream::~MiLogStream(&v19);
        }
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
      proto::OtherPlayerEnterHomeNotify::~OtherPlayerEnterHomeNotify((proto::OtherPlayerEnterHomeNotify *const)(v2 + 64));
    }
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 822: range 000000001317A130-000000001317A58B
void __cdecl HomeWorld::logPlayerEnter(HomeWorld *const this, Player *player, Home *owner_home)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerSceneComp *SceneComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  uint32_t HomeUid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  PlayerSceneComp *v10; // rax
  const std::string *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t SceneId; // eax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterHome,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  uint32_t v17; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterHome,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  uint32_t CurModuleId; // eax
  std::string v20; // [rsp+0h] [rbp-110h]
  Home *owner_homea; // [rsp+8h] [rbp-108h]
  Player *const playera; // [rsp+10h] [rbp-100h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  std::string v25; // [rsp+40h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  *(&v20._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v20._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v20._M_string_length = (std::string::size_type)owner_home;
  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 10 holder:836 64 16 11 log_ptr:825 96 16 11 log_ptr:837";
  *(_QWORD *)(v3 + 16) = HomeWorld::logPlayerEnter;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  SceneComp = Player::getSceneComp(player);
  PlayerSceneComp::resetEnterWorldTransaction(SceneComp);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyEnterWorld>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  HomeUid = Home::getHomeUid((const Home *const)v20._M_string_length);
  proto_log::PlayerLogBodyEnterWorld::set_owner_uid(v7, HomeUid);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v10 = Player::getSceneComp(player);
  v11 = PlayerSceneComp::getEnterWorldTransaction[abi:cxx11](v10);
  proto_log::PlayerLogBodyEnterWorld::set_transaction(v9, v11);
  Player::getSceneComp(player);
  PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v3 + 96));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
  {
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    SceneId = Scene::getSceneId(v13);
    proto_log::PlayerLogBodyEnterWorld::set_dest_scene_id(v12, SceneId);
  }
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyEnterWorld,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyEnterWorld> *)(v3 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  std::shared_ptr<proto_log::PlayerLogBodyEnterWorld>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyEnterWorld> *const)(v3 + 64));
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v25, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xCE5u, v20);
  std::string::~string(&v25);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyEnterHome>();
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterHome,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterHome,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  v17 = Home::getHomeUid(owner_homea);
  proto_log::PlayerLogBodyEnterHome::set_home_uid(v16, v17);
  v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterHome,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterHome,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  CurModuleId = Home::getCurModuleId(owner_homea);
  proto_log::PlayerLogBodyEnterHome::set_module_id(v18, CurModuleId);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyEnterHome,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyEnterHome> *)(v3 + 96));
  Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyEnterHome>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyEnterHome> *const)(v3 + 96));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 846: range 000000001317A6A2-000000001317B1E2
int32_t __cdecl HomeWorld::playerLeave(
        HomeWorld *const this,
        Player *player,
        uint32_t leave_scene_id,
        proto::LeaveWorldReason leave_world_reason)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::unordered_map<unsigned int,WorldPlayerInfo>::mapped_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerSceneComp *SceneComp; // r14
  PlayerSceneComp *v14; // rax
  Scene *v15; // rcx
  SceneTeam *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  Home *v21; // rdx
  Home *v22; // rdx
  Home *v23; // rdi
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  std::string v31; // [rsp+0h] [rbp-210h]
  unsigned int *v32; // [rsp+0h] [rbp-210h]
  unsigned int *leave_world_reasona; // [rsp+8h] [rbp-208h]
  uint32_t leave_scene_ida; // [rsp+Ch] [rbp-204h]
  Player *playera; // [rsp+10h] [rbp-200h]
  Player *playerb; // [rsp+10h] [rbp-200h]
  HomeWorld *thisa; // [rsp+18h] [rbp-1F8h]
  HomeWorld *thisb; // [rsp+18h] [rbp-1F8h]
  char __args_0[5]; // [rsp+2Bh] [rbp-1E5h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+30h] [rbp-1E0h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+38h] [rbp-1D8h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+40h] [rbp-1D0h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v43; // [rsp+48h] [rbp-1C8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+50h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+58h] [rbp-1B8h]
  std::shared_ptr<LeaveWorldEvent> __r; // [rsp+60h] [rbp-1B0h] BYREF
  std::shared_ptr<World> p_world_ptr; // [rsp+70h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v48; // [rsp+80h] [rbp-190h] BYREF
  char v49[368]; // [rsp+A0h] [rbp-170h] BYREF

  *(&v31._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v31._anon_0._M_allocated_capacity = (std::string::size_type)player;
  HIDWORD(v31._M_string_length) = leave_scene_id;
  LODWORD(v31._M_string_length) = leave_world_reason;
  v4 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 32 1 10 holder:855 48 4 12 home_uid:847 64 4 7 uid:856 80 4 13 old_count:858 96 16 18 owner_ho"
                        "me_ptr:848 128 16 13 event_ptr:899 160 24 22 leave_world_notify:907 224 56 27 leave_world_player_info:859";
  *(_QWORD *)(v4 + 16) = HomeWorld::playerLeave;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862728] = -218103808;
  v6[536862729] = -202116109;
  *(_DWORD *)(v4 + 48) = World::getOwnerUid(this);
  HomeWorld::getOwnHome((const HomeWorld *const)(v4 + 96));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v4 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "playerLeave",
      851);
    v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v48,
           (const char (*)[41])"[HOME] owner_home_ptr is null. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v48);
    v8 = -1;
  }
  else
  {
    BasicComp = Player::getBasicComp(player);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v48, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x60Fu, v31);
    std::string::~string(&v48);
    *(_DWORD *)(v4 + 64) = Player::getUid(playera);
    *(_DWORD *)(v4 + 80) = World::getPlayerCount(thisa);
    v10 = std::unordered_map<unsigned int,WorldPlayerInfo>::operator[](
            &thisa->player_info_map_,
            (const std::unordered_map<unsigned int,WorldPlayerInfo>::key_type *)(v4 + 64));
    WorldPlayerInfo::WorldPlayerInfo((WorldPlayerInfo *const)(v4 + 224), v10);
    if ( !std::unordered_map<unsigned int,WorldPlayerInfo>::erase(
            &thisa->player_info_map_,
            (const std::unordered_map<unsigned int,WorldPlayerInfo>::key_type *)(v4 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/home_world.cpp",
        "playerLeave",
        863);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v48, (const char (*)[16])off_24F55D20);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v12, (const char (*)[20])off_24F55D60);
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    SceneComp = Player::getSceneComp(playera);
    std::shared_ptr<World>::shared_ptr(&p_world_ptr, 0LL);
    PlayerSceneComp::setCurWorld(SceneComp, &p_world_ptr);
    std::shared_ptr<World>::~shared_ptr(&p_world_ptr);
    v14 = Player::getSceneComp(playera);
    PlayerSceneComp::setCurWorldOwnerUid(v14, 0);
    __for_range = &thisa->scene_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&thisa->scene_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&thisa->scene_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v43 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
      scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v43);
      scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v43);
      v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      Scene::onPlayerLeaveWorld(v15, playera, LEAVE_WORLD_REASON_NONE);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
    }
    std::function<ForeachPolicy ()(Player &)>::function<HomeWorld::playerLeave(Player &,unsigned int,proto::LeaveWorldReason)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v48,
      (HomeWorld::playerLeave::<lambda(Player&)>)&__for_end);
    World::foreachPlayer(thisa, (std::function<ForeachPolicy(Player&)> *)&v48);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v48);
    World::notifyAllPlayerInfo(thisa);
    if ( std::operator!=<SceneTeam>(&thisa->scene_team_ptr_, 0LL) )
    {
      v16 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->scene_team_ptr_);
      SceneTeam::onPlayerLeave(v16, *(_DWORD *)(v4 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/home_world.cpp",
        "playerLeave",
        890);
      v17 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v48,
              (const char (*)[27])"SceneTeam is nullptr, uid:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 64));
      v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])" home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    if ( World::getPlayerCount(thisa) )
      World::notifyLeaveWorldChatChannel(thisa, playera);
    __args_0[0] = 0;
    *(_DWORD *)&__args_0[1] = World::getPlayerCount(thisa);
    common::tools::perf::make_shared<WorldPlayerChangeEvent,unsigned int &,unsigned int,unsigned int &,unsigned int &,bool>(
      (unsigned int *)&p_world_ptr,
      (unsigned int *)(v4 + 80),
      (unsigned int *)&__args_0[1],
      (unsigned int *)(v4 + 48),
      (bool *)(v4 + 64),
      (unsigned int *)__args_0,
      v32,
      leave_world_reasona,
      (unsigned int *)playera,
      (bool *)thisa);
    std::shared_ptr<BaseEvent>::shared_ptr<WorldPlayerChangeEvent,void>(
      (std::shared_ptr<BaseEvent> *const)(v4 + 128),
      (std::shared_ptr<WorldPlayerChangeEvent> *)&p_world_ptr);
    std::shared_ptr<WorldPlayerChangeEvent>::~shared_ptr((std::shared_ptr<WorldPlayerChangeEvent> *const)&p_world_ptr);
    *(_DWORD *)(v4 + 160) = *(_DWORD *)(v4 + 64);
    std::shared_ptr<BaseEvent>::shared_ptr(
      (std::shared_ptr<BaseEvent> *const)(v4 + 168),
      (const std::shared_ptr<BaseEvent> *)(v4 + 128));
    std::function<ForeachPolicy ()(Player &)>::function<HomeWorld::playerLeave(Player &,unsigned int,proto::LeaveWorldReason)::{lambda(Player &)#2},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v48,
      (HomeWorld::playerLeave::<lambda(Player&)>_0 *)(v4 + 160));
    World::foreachPlayer(thisb, (std::function<ForeachPolicy(Player&)> *)&v48);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v48);
    HomeWorld::playerLeave(Player &,unsigned int,proto::LeaveWorldReason)::{lambda(Player &)#2}::~LeaveWorldReason((HomeWorld::playerLeave::<lambda(Player&)>_0 *const)(v4 + 160));
    proto::LeaveWorldNotify::LeaveWorldNotify((proto::LeaveWorldNotify *const)(v4 + 160));
    Player::sendProto(playerb, (const google::protobuf::Message *)(v4 + 160));
    HomeWorld::notifyPlayerLeaveToOwner(thisb, playerb);
    if ( *(_DWORD *)(v4 + 64) == *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/scene/home_world.cpp",
        "playerLeave",
        914);
      v20 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v48,
              (const char (*)[42])"[HOME] player leave self home world. uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v48);
      v21 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      Home::onOwnerPlayerLeave(v21, playerb);
    }
    v22 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    Home::onPlayerLeave(v22, playerb);
    v23 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    HomeWorld::logPlayerLeave(thisb, playerb, v23, leave_scene_ida, (const WorldPlayerInfo *)(v4 + 224));
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/scene/home_world.cpp",
      "playerLeave",
      921);
    v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v48, (const char (*)[13])"[HOME] uid: ");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 64));
    v26 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v25,
            (const char (*)[25])" leave world, home_uid: ");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v4 + 48));
    v28 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v27, (const char (*)[17])" now player_cnt:");
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >::_Base_ptr)std::unordered_map<unsigned int,WorldPlayerInfo>::size(&thisb->player_info_map_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v28, (const unsigned __int64 *)&__for_end);
    common::milog::MiLogStream::~MiLogStream(&v48);
    EventComp = Player::getEventComp(playerb);
    common::tools::perf::make_shared<LeaveWorldEvent>();
    std::shared_ptr<BaseEvent>::shared_ptr<LeaveWorldEvent,void>((std::shared_ptr<BaseEvent> *const)&p_world_ptr, &__r);
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_world_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_world_ptr);
    std::shared_ptr<LeaveWorldEvent>::~shared_ptr(&__r);
    v8 = 0;
    proto::LeaveWorldNotify::~LeaveWorldNotify((proto::LeaveWorldNotify *const)(v4 + 160));
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 128));
    WorldPlayerInfo::~WorldPlayerInfo((WorldPlayerInfo *const)(v4 + 224));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v4 + 96));
  result = v8;
  if ( v49 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 875: range 000000001317A58C-000000001317A5B6
ForeachPolicy __cdecl HomeWorld::playerLeave(Player &,unsigned int,proto::LeaveWorldReason)::{lambda(Player &)#1}::operator()(
        const HomeWorld::playerLeave::<lambda(Player&)> *const __closure,
        Player *other_player)
{
  PlayerMpComp *MpComp; // rax

  MpComp = Player::getMpComp(other_player);
  PlayerMpComp::updateMpPlayerInfo(MpComp);
  return 0;
};

// Line 900: range 000000001317A5B8-000000001317A680
ForeachPolicy __cdecl HomeWorld::playerLeave(Player &,unsigned int,proto::LeaveWorldReason)::{lambda(Player &)#2}::operator()(
        const HomeWorld::playerLeave::<lambda(Player&)>_0 *const __closure,
        Player *other_player)
{
  uint32_t Uid; // ecx
  PlayerEventComp *EventComp; // rbx
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+10h] [rbp-20h] BYREF

  Uid = Player::getUid(other_player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( Uid != __closure->__uid )
  {
    EventComp = Player::getEventComp(other_player);
    std::shared_ptr<BaseEvent>::shared_ptr(&p_event_ptr, &__closure->__event_ptr);
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  }
  return 0;
};

// Line 900: range 00000000131A4AA2-00000000131A4B3A
void __cdecl HomeWorld::playerLeave(Player &,unsigned int,proto::LeaveWorldReason)::{lambda(Player &)#2}::LeaveWorldReason(
        HomeWorld::playerLeave::<lambda(Player&)>_0 *const this,
        HomeWorld::playerLeave::<lambda(Player&)>_0 *a2)
{
  uint32_t uid; // ecx
  char v3; // al
  HomeWorld::playerLeave::<lambda(Player&)>_0 *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  uid = a2->__uid;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->__uid = uid;
  std::shared_ptr<BaseEvent>::shared_ptr(&this->__event_ptr, &v4->__event_ptr);
};

// Line 900: range 00000000131A4C06-00000000131A4C9E
void __cdecl HomeWorld::playerLeave(Player &,unsigned int,proto::LeaveWorldReason)::{lambda(Player &)#2}::LeaveWorldReason(
        HomeWorld::playerLeave::<lambda(Player&)>_0 *const this,
        const HomeWorld::playerLeave::<lambda(Player&)>_0 *a2)
{
  uint32_t uid; // ecx
  char v3; // al
  const HomeWorld::playerLeave::<lambda(Player&)>_0 *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  uid = a2->__uid;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->__uid = uid;
  std::shared_ptr<BaseEvent>::shared_ptr(&this->__event_ptr, &v4->__event_ptr);
};

// Line 900: range 000000001317A682-000000001317A6A0
void __cdecl HomeWorld::playerLeave(Player &,unsigned int,proto::LeaveWorldReason)::{lambda(Player &)#2}::~LeaveWorldReason(
        HomeWorld::playerLeave::<lambda(Player&)>_0 *const this)
{
  std::shared_ptr<BaseEvent>::~shared_ptr(&this->__event_ptr);
};

// Line 928: range 000000001317B1E4-000000001317BD71
void __cdecl HomeWorld::logPlayerLeave(
        HomeWorld *const this,
        Player *player,
        Home *owner_home,
        uint32_t leave_scene_id,
        const WorldPlayerInfo *world_player_info)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  uint32_t HomeUid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  PlayerSceneComp *SceneComp; // rax
  const std::string *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t OwnerUid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t SceneId; // eax
  PlayerBasicComp *BasicComp; // rax
  PlayerSocialComp *SocialComp; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // r14
  uint32_t v23; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  uint32_t PlatformType; // eax
  uint32_t *v26; // rax
  uint32_t *v27; // rdx
  _BOOL4 v28; // r14d
  const unsigned int *v29; // rax
  _DWORD *v30; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  int v33; // r14d
  Player *v34; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  uint32_t v38; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  int v41; // r14d
  PlayerBasicComp *v42; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveHome,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // r14
  uint32_t v44; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveHome,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // r14
  uint32_t CurModuleId; // eax
  std::string v47; // [rsp+0h] [rbp-180h]
  std::string v48; // [rsp+0h] [rbp-180h]
  Home *owner_homea; // [rsp+18h] [rbp-168h]
  bool is_friend; // [rsp+37h] [rbp-149h]
  uint32_t now; // [rsp+38h] [rbp-148h]
  uint32_t duration; // [rsp+3Ch] [rbp-144h]
  std::unordered_map<unsigned int,WorldPlayerInfo>::iterator __for_begin; // [rsp+40h] [rbp-140h] BYREF
  std::unordered_map<unsigned int,WorldPlayerInfo>::iterator __for_end; // [rsp+48h] [rbp-138h] BYREF
  std::unordered_map<unsigned int,WorldPlayerInfo> *__for_range; // [rsp+50h] [rbp-130h]
  const std::pair<unsigned int const,WorldPlayerInfo> *v56; // [rsp+58h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,WorldPlayerInfo> >::type *uid; // [rsp+60h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,WorldPlayerInfo> >::type *player_info; // [rsp+68h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+70h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+80h] [rbp-100h] BYREF
  std::string v61; // [rsp+90h] [rbp-F0h] BYREF
  char v62[208]; // [rsp+B0h] [rbp-D0h] BYREF

  *(&v47._anon_0._M_allocated_capacity + 1) = (std::string::size_type)owner_home;
  HIDWORD(v47._anon_0._M_allocated_capacity) = leave_scene_id;
  v47._M_string_length = (std::string::size_type)world_player_info;
  v5 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 10 holder:978 64 16 29 other_mp_state_change_log:947 96 16 20 other_player_ptr:961 128 16 11 log_ptr:979";
  *(_QWORD *)(v5 + 16) = HomeWorld::logPlayerLeave;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyLeaveWorld>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
  HomeUid = Home::getHomeUid(*((const Home *const *)&v47._anon_0._M_allocated_capacity + 1));
  proto_log::PlayerLogBodyLeaveWorld::set_owner_uid(v8, HomeUid);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
  proto_log::PlayerLogBodyLeaveWorld::set_scene_id(v10, HIDWORD(v47._anon_0._M_allocated_capacity));
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
  SceneComp = Player::getSceneComp(player);
  v13 = PlayerSceneComp::getEnterWorldTransaction[abi:cxx11](SceneComp);
  proto_log::PlayerLogBodyLeaveWorld::set_transaction(v11, v13);
  Player::getSceneComp(player);
  PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v5 + 128));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v5 + 128), 0LL) )
  {
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
    OwnerUid = Scene::getOwnerUid(v15);
    proto_log::PlayerLogBodyLeaveWorld::set_dest_owner_uid(v14, OwnerUid);
    v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
    SceneId = Scene::getSceneId(v18);
    proto_log::PlayerLogBodyLeaveWorld::set_dest_scene_id(v17, SceneId);
  }
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyLeaveWorld,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyLeaveWorld> *)(v5 + 96));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 128));
  std::shared_ptr<proto_log::PlayerLogBodyLeaveWorld>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyLeaveWorld> *const)(v5 + 96));
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v61, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x710u, v47);
  std::string::~string(&v61);
  now = common::tools::TimeUtils::getNow();
  __for_range = &this->player_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::begin(&this->player_info_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::end(&this->player_info_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,WorldPlayerInfo>,false>(&__for_begin, &__for_end) )
  {
    v56 = std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,WorldPlayerInfo>(v56);
    player_info = (std::tuple_element<1,const std::pair<unsigned int const,WorldPlayerInfo> >::type *)std::get<1ul,unsigned int const,WorldPlayerInfo>(v56);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyMpStateChange>();
    SocialComp = Player::getSocialComp(player);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(uid);
    }
    is_friend = PlayerSocialComp::isPlayerFriend(SocialComp, *uid);
    v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    v23 = Player::getUid(player);
    proto_log::PlayerLogBodyMpStateChange::set_target_uid(v22, v23);
    v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    PlatformType = Player::getPlatformType(player);
    proto_log::PlayerLogBodyMpStateChange::set_target_platform_type(v24, PlatformType);
    v26 = (uint32_t *)std::max<unsigned int>(
                        (const unsigned int *)(v48._M_string_length + 20),
                        &player_info->enter_time);
    v27 = v26;
    if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v26);
    }
    if ( now >= *v27 )
    {
      v29 = std::max<unsigned int>((const unsigned int *)(v48._M_string_length + 20), &player_info->enter_time);
      v30 = v29;
      if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v29);
      }
      duration = now - *v30;
      v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      proto_log::PlayerLogBodyMpStateChange::set_duration(v31, duration);
      v32 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      proto_log::PlayerLogBodyMpStateChange::set_is_friend(v32, is_friend);
      std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v5 + 96));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v5 + 96)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v61,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/home_world.cpp",
          "logPlayerLeave",
          964);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)&v61,
          (const char (*)[16])"getPlayer fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v61);
        v33 = 0;
      }
      else
      {
        v34 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMpStateChange,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyMpStateChange> *)(v5 + 64));
        Player::printStatLog(v34, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyMpStateChange>();
        v35 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(uid);
        }
        proto_log::PlayerLogBodyMpStateChange::set_target_uid(v35, *uid);
        v36 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
        v37 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        v38 = Player::getPlatformType(v37);
        proto_log::PlayerLogBodyMpStateChange::set_target_platform_type(v36, v38);
        v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
        proto_log::PlayerLogBodyMpStateChange::set_duration(v39, duration);
        v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
        proto_log::PlayerLogBodyMpStateChange::set_is_friend(v40, is_friend);
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMpStateChange,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyMpStateChange> *)(v5 + 128));
        Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        std::shared_ptr<proto_log::PlayerLogBodyMpStateChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMpStateChange> *const)(v5 + 128));
        v33 = 1;
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 96));
      v28 = v33 == 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v61,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/home_world.cpp",
        "logPlayerLeave",
        954);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)&v61,
        (const char (*)[32])"enter_time should not early now");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v61);
      v28 = 0;
    }
    std::shared_ptr<proto_log::PlayerLogBodyMpStateChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMpStateChange> *const)(v5 + 64));
    if ( !v28 )
    {
      v41 = 0;
      goto LABEL_26;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator++(&__for_begin);
  }
  v41 = 1;
LABEL_26:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  if ( v41 == 1 )
  {
    v42 = Player::getBasicComp(player);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v61, v42);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xCE6u, v48);
    std::string::~string(&v61);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyLeaveHome>();
    v43 = std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveHome,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveHome,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
    v44 = Home::getHomeUid(owner_homea);
    proto_log::PlayerLogBodyLeaveHome::set_home_uid(v43, v44);
    v45 = std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveHome,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveHome,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
    CurModuleId = Home::getCurModuleId(owner_homea);
    proto_log::PlayerLogBodyLeaveHome::set_module_id(v45, CurModuleId);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyLeaveHome,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyLeaveHome> *)(v5 + 128));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyLeaveHome>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyLeaveHome> *const)(v5 + 128));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  if ( v62 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 987: range 000000001317BD72-000000001317BF23
void __cdecl HomeWorld::tryClearScene(HomeWorld *const this)
{
  __int64 Now; // rsi
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+38h] [rbp-38h]
  std::pair<unsigned int const,std::shared_ptr<Scene> > __in; // [rsp+40h] [rbp-30h] BYREF

  Now = (unsigned int)common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_for_destroy_scene_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_for_destroy_scene_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wait_for_destroy_scene_time, Now, (_BYTE)this - 32);
  }
  this->wait_for_destroy_scene_time = Now;
  std::list<std::shared_ptr<Scene>>::clear(&this->wait_for_destroy_scene_list_);
  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<Scene>>::pair(&__in, v2);
    scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(&__in);
    scene_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(&__in);
    std::list<std::shared_ptr<Scene>>::push_back(&this->wait_for_destroy_scene_list_, scene_ptr);
    v3 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    v4 = *(_QWORD *)v3 + 48LL;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64))v4)(v3);
    std::pair<unsigned int const,std::shared_ptr<Scene>>::~pair(&__in);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<Scene>>::clear(&this->scene_map_);
};

// Line 1001: range 000000001317BF24-000000001317C3F2
void __cdecl HomeWorld::onPlayerEnterScene(HomeWorld *const this, Player *player, Scene *scene)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  unsigned int *p_OwnerUid; // rsi
  uint32_t SceneId; // edx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  PlayerHomeComp *HomeComp; // r14
  Home *v17; // rcx
  unsigned int val; // [rsp+28h] [rbp-E8h] BYREF
  unsigned int OwnerUid; // [rsp+2Ch] [rbp-E4h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerInfo>,false> __y; // [rsp+30h] [rbp-E0h] BYREF
  WorldPlayerInfo *player_info; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 8 uid:1002 64 8 9 iter:1003 96 16 13 home_ptr:1017";
  *(_QWORD *)(v3 + 16) = HomeWorld::onPlayerEnterScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = Player::getUid(player);
  *(std::unordered_map<unsigned int,WorldPlayerInfo>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,WorldPlayerInfo>::find(
                                                                               &this->player_info_map_,
                                                                               (const std::unordered_map<unsigned int,WorldPlayerInfo>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::end(&this->player_info_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,WorldPlayerInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerInfo>,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "onPlayerEnterScene",
      1006);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v24,
           (const char (*)[33])"player_info_map_ not found uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/home_world.cpp",
      "onPlayerEnterScene",
      1010);
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v24, (const char (*)[13])"[HOME] uid: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" enterScene: ");
    val = Scene::getSceneId(scene);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" scene owner: ");
    OwnerUid = Scene::getOwnerUid(scene);
    p_OwnerUid = &OwnerUid;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &OwnerUid);
    common::milog::MiLogStream::~MiLogStream(&v24);
    player_info = &std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false> *const)(v3 + 64))->second;
    SceneId = Scene::getSceneId(scene);
    v14 = *(_BYTE *)(((unsigned __int64)&player_info->cur_scene_id >> 3) + 0x7FFF8000);
    if ( v14 != 0 && v14 <= 3 )
    {
      LOBYTE(p_OwnerUid) = v14 != 0;
      __asan_report_store4(&player_info->cur_scene_id, p_OwnerUid, SceneId);
    }
    player_info->cur_scene_id = SceneId;
    if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->owner_uid_);
    }
    if ( this->owner_uid_ == *(_DWORD *)(v3 + 48) )
    {
      HomeWorld::getOwnHome((const HomeWorld *const)(v3 + 96));
      if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/home_world.cpp",
          "onPlayerEnterScene",
          1020);
        v15 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v24,
                (const char (*)[41])"[HOME] owner_home_ptr is null. home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->owner_uid_);
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      else
      {
        HomeComp = Player::getHomeComp(player);
        v17 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        PlayerHomeComp::onEnterSelfHomeScene(HomeComp, v17, scene);
      }
      std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 96));
    }
  }
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1030: range 000000001317C3F4-000000001317CBC7
void __cdecl HomeWorld::onPlayerLeaveScene(HomeWorld *const this, Player *player, Scene *scene)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 Position; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned __int64 Rotation; // rax
  __int64 v16; // rsi
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  PlayerHomeComp *HomeComp; // r14
  Home *v21; // rcx
  unsigned int val; // [rsp+28h] [rbp-E8h] BYREF
  unsigned int OwnerUid; // [rsp+2Ch] [rbp-E4h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerInfo>,false> __y; // [rsp+30h] [rbp-E0h] BYREF
  WorldPlayerInfo *player_info; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 8 uid:1031 64 8 9 iter:1032 96 16 13 home_ptr:1059";
  *(_QWORD *)(v3 + 16) = HomeWorld::onPlayerLeaveScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = Player::getUid(player);
  *(std::unordered_map<unsigned int,WorldPlayerInfo>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,WorldPlayerInfo>::find(
                                                                               &this->player_info_map_,
                                                                               (const std::unordered_map<unsigned int,WorldPlayerInfo>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::end(&this->player_info_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,WorldPlayerInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerInfo>,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "onPlayerLeaveScene",
      1035);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v28,
           (const char (*)[33])"player_info_map_ not found uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/home_world.cpp",
      "onPlayerLeaveScene",
      1039);
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v28, (const char (*)[13])"[HOME] uid: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" leaveScene: ");
    val = Scene::getSceneId(scene);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" scene owner: ");
    OwnerUid = Scene::getOwnerUid(scene);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &OwnerUid);
    common::milog::MiLogStream::~MiLogStream(&v28);
    player_info = &std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false> *const)(v3 + 64))->second;
    if ( Scene::getSceneType(scene) == SCENE_HOME_WORLD )
    {
      Player::getCurAvatar((Player *const)(v3 + 96));
      if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 96), 0LL) )
      {
        v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        Position = (unsigned __int64)Entity::getPosition((const Entity *const)v12);
        if ( *(char *)(((unsigned __int64)&player_info->last_main_pos >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&player_info->last_main_pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)player_info + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&player_info->last_main_pos.z
                                                                     + 3) >> 3)
                                                                   + 0x7FFF8000) )
        {
          Position = __asan_report_store_n(&player_info->last_main_pos, 12LL);
        }
        if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
          && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
        {
          Position = __asan_report_load_n(Position, 12LL);
        }
        player_info->last_main_pos = *(Vector3 *)Position;
        v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        Rotation = (unsigned __int64)Entity::getRotation((const Entity *const)v14);
        if ( (((unsigned __int8)player_info + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&player_info->last_main_rot >> 3)
                                                                   + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&player_info->last_main_rot >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&player_info->last_main_rot.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)player_info + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&player_info->last_main_rot.z
                                                                     + 3) >> 3)
                                                                   + 0x7FFF8000) )
        {
          Rotation = __asan_report_store_n(&player_info->last_main_rot, 12LL);
        }
        v16 = ((_DWORD)Rotation + 11) & 7;
        if ( (char)(Rotation & 7) >= *(_BYTE *)((Rotation >> 3) + 0x7FFF8000)
          && *(_BYTE *)((Rotation >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((Rotation + 11) & 7) >= *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) )
        {
          v16 = 12LL;
          Rotation = __asan_report_load_n(Rotation, 12LL);
        }
        player_info->last_main_rot = *(Vector3 *)Rotation;
        if ( *(char *)(((unsigned __int64)&player_info->is_pos_valid >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&player_info->is_pos_valid, v16, &player_info->is_pos_valid);
        player_info->is_pos_valid = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/home_world.cpp",
          "onPlayerLeaveScene",
          1053);
        v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v28, (const char (*)[6])"uid: ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v18, (const char (*)[20])" getCurAvatar fails");
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->owner_uid_);
    }
    if ( this->owner_uid_ == *(_DWORD *)(v3 + 48) )
    {
      HomeWorld::getOwnHome((const HomeWorld *const)(v3 + 96));
      if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/home_world.cpp",
          "onPlayerLeaveScene",
          1062);
        v19 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v28,
                (const char (*)[41])"[HOME] owner_home_ptr is null. home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->owner_uid_);
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      else
      {
        HomeComp = Player::getHomeComp(player);
        v21 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        PlayerHomeComp::onLeaveSelfHomeScene(HomeComp, v21, scene);
      }
      std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 96));
    }
  }
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1071: range 000000001317CBC8-000000001317D4C2
HomeWorld *__fastcall HomeWorld::createHomeScene(HomeWorld *const this, const World *scene_id, uint32_t module_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Scene *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  std::shared_ptr<Scene> *v19; // r8
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >,bool> v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Player> v31; // [rsp+30h] [rbp-E0h] BYREF
  std::shared_ptr<Config> v32; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v33; // [rsp+50h] [rbp-C0h] BYREF
  char v34[160]; // [rsp+70h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 13 home_uid:1072 48 4 13 scene_id:1070 64 16 19 owner_home_ptr:1073 96 16 14 scene_ptr:1091";
  *(_QWORD *)(v3 + 16) = HomeWorld::createHomeScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = module_id;
  *(_DWORD *)(v3 + 32) = World::getOwnerUid(scene_id);
  HomeWorld::getOwnHome((const HomeWorld *const)(v3 + 64));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "createHomeScene",
      1076);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v33,
           (const char (*)[41])"[HOME] owner_home_ptr is null. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v33);
    std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
    scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(
                         &v7->design_config.txt_config_mgr.scene_config_mgr,
                         *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v32);
    if ( scene_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&scene_config_ptr->type);
      }
      if ( !SceneExcelConfigMgr::isHomeScene(scene_config_ptr->type) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/home_world.cpp",
          "createHomeScene",
          1088);
        v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
               &v33,
               (const char (*)[30])"scene is not HomeWorldScene: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v33);
        std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
      }
      else
      {
        std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)&v32, (const std::shared_ptr<Home> *)(v3 + 64));
        std::shared_ptr<Player>::shared_ptr(&v31, 0LL);
        SceneMgr::createScene(v3 + 96, (PlayerPtr *)*(unsigned int *)(v3 + 48), (HomePtr *)&v31, (uint32_t)&v32);
        std::shared_ptr<Player>::~shared_ptr(&v31);
        std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)&v32);
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/home_world.cpp",
            "createHomeScene",
            1094);
          v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v33,
                  (const char (*)[30])"scene_ptr is null, scene_id: ");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  (const unsigned int *)(v3 + 48));
          v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" home_uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v33);
          std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
        }
        else
        {
          v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( Scene::init(v13) )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/home_world.cpp",
              "createHomeScene",
              1099);
            v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v33,
                    (const char (*)[33])"scene_ptr init failed, scene_id:");
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v14,
                    (const unsigned int *)(v3 + 48));
            v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v15,
                    (const char (*)[12])" home_uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v33);
            std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
          }
          else
          {
            v17 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
              v17 = __asan_report_load8();
            v18 = *(_QWORD *)v17 + 40LL;
            if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
              v17 = __asan_report_load8();
            if ( (*(unsigned int (__fastcall **)(unsigned __int64))v18)(v17) )
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/home_world.cpp",
                "createHomeScene",
                1104);
              v20 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      &v33,
                      (const char (*)[34])"scene_ptr start failed, scene_id:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v3 + 48));
              v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v21,
                      (const char (*)[12])" home_uid: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::~MiLogStream(&v33);
              std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
            }
            else
            {
              v23 = std::map<unsigned int,std::shared_ptr<Scene>>::emplace<unsigned int &,std::shared_ptr<Scene>&>(
                      &scene_id->scene_map_,
                      (unsigned int *)(v3 + 48),
                      (std::shared_ptr<Scene> *)(v3 + 96),
                      (unsigned int *)&scene_id->scene_map_,
                      v19);
              if ( !v23.second )
              {
                common::milog::MiLogStream::create(
                  &v33,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/home_world.cpp",
                  "createHomeScene",
                  1109);
                v24 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        &v33,
                        (const char (*)[31])"scene already exist, scene_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v33);
                std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v33,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/home_world.cpp",
                  "createHomeScene",
                  1113);
                v25 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        &v33,
                        (const char (*)[32])"[HOME] scene created, scene_id:");
                v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        (const unsigned int *)(v3 + 48));
                v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v26,
                        (const char (*)[11])" home_uid:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &scene_id->owner_uid_);
                common::milog::MiLogStream::~MiLogStream(&v33);
                std::shared_ptr<Scene>::shared_ptr(
                  (std::shared_ptr<Scene> *const)this,
                  (std::shared_ptr<Scene> *)(v3 + 96));
              }
            }
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/home_world.cpp",
        "createHomeScene",
        1083);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v33,
             (const char (*)[29])"findSceneExcelConfig fails, ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v33);
      std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
    }
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 64));
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 1118: range 000000001317D4C4-000000001317DA40
__int64 __fastcall HomeWorld::destroyHomeScene(HomeWorld *const this, uint32_t scene_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Scene *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >::_Self __y; // [rsp+18h] [rbp-118h] BYREF
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-110h] BYREF
  char v24[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 13 scene_id:1117 48 8 9 iter:1119 80 16 14 scene_ptr:1125 112 48 12 uid_set:1134";
  *(_QWORD *)(v2 + 16) = HomeWorld::destroyHomeScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 32) = scene_id;
  *(std::map<unsigned int,std::shared_ptr<Scene>>::iterator *)(v2 + 48) = std::map<unsigned int,std::shared_ptr<Scene>>::find(
                                                                            &this->scene_map_,
                                                                            (const std::map<unsigned int,std::shared_ptr<Scene>>::key_type *)(v2 + 32));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >::_Self *)(v2 + 48),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/home_world.cpp",
      "destroyHomeScene",
      1122);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v23,
           (const char (*)[27])"scene not exist, scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v23);
    v6 = -1;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > > *const)(v2 + 48));
    std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80), &v7->second);
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/home_world.cpp",
        "destroyHomeScene",
        1128);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v23,
             (const char (*)[29])"scene_ptr is null, scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v23);
      v6 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      if ( Scene::getPlayerCount(v9) )
      {
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 112));
        v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        Scene::getPlayerUidSet(v10, (std::set<unsigned int> *)(v2 + 112));
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/home_world.cpp",
          "destroyHomeScene",
          1136);
        v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v23,
                (const char (*)[40])"home scene still have player. uid_set: ");
        v12 = common::milog::MiLogStream::operator<<<unsigned int>(v11, (const std::set<unsigned int> *)(v2 + 112));
        v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" scene_id: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 32));
        v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->owner_uid_);
        common::milog::MiLogStream::~MiLogStream(&v23);
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 112));
      }
      v16 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v16 = __asan_report_load8();
      v17 = *(_QWORD *)v16 + 48LL;
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        v16 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64))v17)(v16);
      std::map<unsigned int,std::shared_ptr<Scene>>::erase[abi:cxx11](
        &this->scene_map_,
        *(std::map<unsigned int,std::shared_ptr<Scene>>::iterator *)(v2 + 48));
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/home_world.cpp",
        "destroyHomeScene",
        1142);
      v18 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v23,
              (const char (*)[34])"[HOME] scene destroyed, scene_id:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 32));
      v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->owner_uid_);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v6 = 0;
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
  }
  result = v6;
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 1147: range 000000001317DA42-000000001317E36C
void __cdecl HomeWorld::onTimer(HomeWorld *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  Home *v6; // rax
  HomeBasicComp *BasicComp; // rax
  unsigned __int64 v8; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false> *p_y; // rsi
  bool v10; // dl
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false,false>::pointer v11; // rax
  _DWORD *p_first; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false,false>::pointer v13; // rdx
  uint32_t *p_allow_enter_time; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false>::pointer v20; // rdx
  uint32_t *p_pre_enter_time; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false>::pointer v26; // rax
  uint32_t now; // [rsp+1Ch] [rbp-E4h]
  uint32_t pre_enter_time; // [rsp+20h] [rbp-E0h]
  uint32_t allow_enter_time; // [rsp+24h] [rbp-DCh]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false> __y; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v31; // [rsp+30h] [rbp-D0h] BYREF
  char v32[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 13 home_uid:1148 48 4 8 uid:1194 64 8 9 iter:1192 96 16 19 owner_home_ptr:1149";
  *(_QWORD *)(v2 + 16) = HomeWorld::onTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 32) = World::getOwnerUid(this);
  HomeWorld::getOwnHome((const HomeWorld *const)(v2 + 96));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "onTimer",
      1152);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v31,
           (const char (*)[41])"[HOME] owner_home_ptr is null. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v31);
  }
  else
  {
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    BasicComp = Home::getBasicComp(v6);
    if ( HomeBasicComp::getIsInEditMode(BasicComp) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(this->_vptr_World + 15);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      (*(void (__fastcall **)(HomeWorld *const, __int64, _QWORD))v8)(this, 4LL, 0LL);
    }
    now = now_ms / 0x3E8;
    p_y = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false> *)((((_BYTE)this - 44) & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_rtt_notify_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_rtt_notify_time_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->last_rtt_notify_time_);
    }
    if ( now >= this->last_rtt_notify_time_ + 1 )
    {
      World::notifyAllPlayerRttInfo(this);
      p_y = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false> *)((((_BYTE)this - 44) & 7u) + 3);
      v10 = *(_BYTE *)(((unsigned __int64)&this->last_rtt_notify_time_ >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_rtt_notify_time_ >> 3)
                                                             + 0x7FFF8000);
      if ( v10 )
        __asan_report_store4(&this->last_rtt_notify_time_, p_y, v10);
      this->last_rtt_notify_time_ = now;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_location_notify_time_);
    }
    if ( now > this->last_location_notify_time_ + 5 )
    {
      World::notifyAllPlayerLocation(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_location_notify_time_, p_y, (_BYTE)this - 48);
      }
      this->last_location_notify_time_ = now;
      *(std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::begin(&this->allow_enter_map_);
      while ( 1 )
      {
        __y._M_cur = std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::end(&this->allow_enter_map_)._M_cur;
        if ( !std::__detail::operator!=<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false> *)(v2 + 64),
                &__y) )
          break;
        v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false,false> *const)(v2 + 64));
        p_first = &v11->first;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        *(_DWORD *)(v2 + 48) = *p_first;
        v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false,false> *const)(v2 + 64));
        p_allow_enter_time = &v13->second.allow_enter_time;
        if ( *(_BYTE *)(((unsigned __int64)p_allow_enter_time >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_allow_enter_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_allow_enter_time >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(p_allow_enter_time);
        }
        allow_enter_time = v13->second.allow_enter_time;
        if ( !World::isPlayerIn(this, *(_DWORD *)(v2 + 48)) && now > allow_enter_time + 300 )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/home_world.cpp",
            "onTimer",
            1182);
          v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v31,
                  (const char (*)[39])"[WORLD] erase player allow slot, uid: ");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v2 + 48));
          v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])" home_uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v31);
          *(std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::erase(
                                                                                                &this->allow_enter_map_,
                                                                                                *(std::unordered_map<unsigned int,HomeAllowEnterPlayerInfo>::iterator *)(v2 + 64));
        }
        else
        {
          std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false,false> *const)(v2 + 64));
        }
      }
      *(std::unordered_map<unsigned int,WorldPlayerSlotInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,WorldPlayerSlotInfo>::begin(&this->slot_info_map_);
      while ( 1 )
      {
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAllowEnterPlayerInfo>,false>::__node_type *)std::unordered_map<unsigned int,WorldPlayerSlotInfo>::end(&this->slot_info_map_)._M_cur;
        p_y = &__y;
        if ( !std::__detail::operator!=<std::pair<unsigned int const,WorldPlayerSlotInfo>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerSlotInfo>,false> *)(v2 + 64),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerSlotInfo>,false> *)&__y) )
          break;
        v19 = (unsigned __int64)std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v19 >> 3) + 0x7FFF8000) <= 3 )
          v19 = __asan_report_load4(v19);
        *(_DWORD *)(v2 + 48) = *(_DWORD *)v19;
        v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false> *const)(v2 + 64));
        p_pre_enter_time = &v20->second.pre_enter_time;
        if ( *(_BYTE *)(((unsigned __int64)p_pre_enter_time >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_pre_enter_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_pre_enter_time >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(p_pre_enter_time);
        }
        pre_enter_time = v20->second.pre_enter_time;
        if ( !World::isPlayerIn(this, *(_DWORD *)(v2 + 48)) && now > pre_enter_time + 300 )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/home_world.cpp",
            "onTimer",
            1198);
          v23 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v31,
                  (const char (*)[33])"[WORLD] erase player slot, uid: ");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v2 + 48));
          v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v24, (const char (*)[12])" home_uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v31);
          v26 = std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false> *const)(v2 + 64));
          World::notifyPreEnterMpPlayer(
            this,
            *(_DWORD *)(v2 + 48),
            &v26->second.nickname,
            PlayerPreEnterMpNotify_State_TIMEOUT);
          *(std::unordered_map<unsigned int,WorldPlayerSlotInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,WorldPlayerSlotInfo>::erase(
                                                                                           &this->slot_info_map_,
                                                                                           *(std::unordered_map<unsigned int,WorldPlayerSlotInfo>::iterator *)(v2 + 64));
        }
        else
        {
          std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false> *const)(v2 + 64));
        }
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->wait_for_destroy_scene_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->wait_for_destroy_scene_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->wait_for_destroy_scene_time);
    }
    if ( now > this->wait_for_destroy_scene_time + 300 )
    {
      this->wait_for_destroy_scene_time = now;
      std::list<std::shared_ptr<Scene>>::clear(&this->wait_for_destroy_scene_list_);
    }
    if ( HomeWorld::getPlayerCountAllState(this) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_has_player_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_has_player_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_has_player_time_, p_y, (_BYTE)this - 120);
      }
      this->last_has_player_time_ = now;
    }
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 96));
  if ( v32 == (char *)v2 )
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

// Line 1222: range 000000001317E36E-000000001317E4E3
int32_t __cdecl HomeWorld::notifyAllWorldPropData(HomeWorld *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  PropValueMap *prop_map; // [rsp+18h] [rbp-D8h]
  char v8[208]; // [rsp+20h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 11 notify:1223";
  *(_QWORD *)(v2 + 16) = HomeWorld::notifyAllWorldPropData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  proto::WorldDataNotify::WorldDataNotify((proto::WorldDataNotify *const)(v2 + 32));
  prop_map = proto::WorldDataNotify::mutable_world_prop_map((proto::WorldDataNotify *const)(v2 + 32));
  appendIntPropValue(prop_map, 2u, 1LL);
  v5 = Player::sendProto(player, (const google::protobuf::Message *)(v2 + 32));
  proto::WorldDataNotify::~WorldDataNotify((proto::WorldDataNotify *const)(v2 + 32));
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1231: range 000000001317E4E4-000000001317E895
int32_t __cdecl HomeWorld::notifyWorldData(HomeWorld *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t Uid; // eax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  unsigned __int64 v9; // rax
  PlayerWorld *v10; // rdx
  PlayerDailyTaskComp *DailyTaskComp; // r14
  std::__shared_ptr_access<proto::WorldOwnerDailyTaskNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  PlayerGroupLinkComp *GroupLinkComp; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::shared_ptr<proto::WorldOwnerDailyTaskNotify> __r; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 21 player_world_ptr:1243 64 16 15 notify_ptr:1250";
  *(_QWORD *)(v2 + 16) = HomeWorld::notifyWorldData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  Uid = Player::getUid(player);
  if ( !World::isPlayerIn(this, Uid) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/home_world.cpp",
      "notifyWorldData",
      1234);
    v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v17, (const char (*)[15])off_24F56780);
    val = Player::getUid(player);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])off_24F567C0);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v8 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (unsigned __int64)(this->_vptr_World + 22);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    (*(void (__fastcall **)(HomeWorld *const, Player *))v9)(this, player);
    World::notifyAllPlayerInfo(this);
    Player::getSceneComp(player);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 32));
    if ( std::operator!=<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 32)) )
    {
      v10 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      PlayerWorld::notifyPlayerWorldSceneInfoList(v10, player);
    }
    common::tools::perf::make_shared<proto::WorldOwnerDailyTaskNotify>();
    DailyTaskComp = Player::getDailyTaskComp(player);
    v12 = std::__shared_ptr_access<proto::WorldOwnerDailyTaskNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::WorldOwnerDailyTaskNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( !PlayerDailyTaskComp::fillOwnerDailyTaskNotify(DailyTaskComp, v12) )
    {
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::WorldOwnerDailyTaskNotify>(&__r);
      Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    }
    GroupLinkComp = Player::getGroupLinkComp(player);
    PlayerGroupLinkComp::sendGroupLinkBundleNotify(GroupLinkComp, player);
    v8 = 0;
    std::shared_ptr<proto::WorldOwnerDailyTaskNotify>::~shared_ptr((std::shared_ptr<proto::WorldOwnerDailyTaskNotify> *const)(v2 + 64));
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 32));
  }
  result = v8;
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
  return result;
};

// Line 1261: range 000000001317E896-000000001317EE76
void __cdecl HomeWorld::refreshArrangement(HomeWorld *const this, bool is_clear)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  HomeWorldScene *v12; // rax
  SceneHomeComp *HomeComp; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  HomeRoomScene *v17; // rax
  SceneHomeComp *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  data::SceneType scene_type; // [rsp+14h] [rbp-CCh]
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  char *val; // [rsp+28h] [rbp-B8h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+30h] [rbp-B0h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v29; // [rsp+38h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+40h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v32; // [rsp+50h] [rbp-90h] BYREF
  char v33[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 24 home_room_scene_ptr:1284";
  *(_QWORD *)(v2 + 16) = HomeWorld::refreshArrangement;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v29 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v29);
    scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v29);
    if ( std::operator==<Scene>(scene_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/home_world.cpp",
        "refreshArrangement",
        1266);
      v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v32,
             (const char (*)[32])"scene_ptr is nullptr, home_uid:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->owner_uid_);
      v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, scene_id);
      common::milog::MiLogStream::~MiLogStream(&v32);
      break;
    }
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
    scene_type = Scene::getSceneType(v8);
    if ( scene_type == SCENE_HOME_WORLD )
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      toPtr<HomeWorldScene,Scene>((Scene *)(v2 + 32));
      if ( std::operator==<HomeWorldScene>((const std::shared_ptr<HomeWorldScene> *)(v2 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/home_world.cpp",
          "refreshArrangement",
          1275);
        v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v32,
               (const char (*)[40])"toPtr<HomeWorldScene> failed. home_uid:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->owner_uid_);
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, scene_id);
        common::milog::MiLogStream::~MiLogStream(&v32);
      }
      else
      {
        v12 = std::__shared_ptr_access<HomeWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        HomeComp = HomeWorldScene::getHomeComp(v12);
        SceneHomeComp::refreshArrangement(HomeComp, is_clear);
      }
      std::shared_ptr<HomeWorldScene>::~shared_ptr((std::shared_ptr<HomeWorldScene> *const)(v2 + 32));
    }
    else if ( scene_type == SCENE_HOME_ROOM )
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      toPtr<HomeRoomScene,Scene>((Scene *)(v2 + 32));
      if ( std::operator==<HomeRoomScene>((const std::shared_ptr<HomeRoomScene> *)(v2 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/home_world.cpp",
          "refreshArrangement",
          1287);
        v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v32,
                (const char (*)[39])"toPtr<HomeRoomScene> failed. home_uid:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->owner_uid_);
        v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, scene_id);
        common::milog::MiLogStream::~MiLogStream(&v32);
      }
      else
      {
        v17 = std::__shared_ptr_access<HomeRoomScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeRoomScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        v18 = HomeRoomScene::getHomeComp(v17);
        SceneHomeComp::refreshArrangement(v18, is_clear);
      }
      std::shared_ptr<HomeRoomScene>::~shared_ptr((std::shared_ptr<HomeRoomScene> *const)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/home_world.cpp",
        "refreshArrangement",
        1296);
      v19 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v32,
              (const char (*)[20])"invalid scene_type:");
      val = (char *)data::enumValToStr(scene_type);
      v20 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v19, (const char *const *)&val);
      v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" home_uid:");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->owner_uid_);
      v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])" scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, scene_id);
      common::milog::MiLogStream::~MiLogStream(&v32);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
