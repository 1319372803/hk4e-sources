// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/world.cpp

// Line 36: range 0000000017FA66C8-0000000017FA69BE
// local variable allocation has failed, the output may be wrong!
void __cdecl World::World(World *const this, uint32_t world_id)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  bool v4; // dl
  __int64 v5; // rsi
  bool v6; // dl
  std::shared_ptr<SceneTeam> __r; // [rsp+10h] [rbp-20h] BYREF

  std::enable_shared_from_this<World>::enable_shared_from_this(&this->std::enable_shared_from_this<World>);
  v2 = (int (**)(...))(&`vtable for'World + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&world_id);
  this->_vptr_World = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->world_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->world_id_, *(_QWORD *)&world_id, (_BYTE)this + 24);
  }
  this->world_id_ = world_id;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->owner_uid_, v3, v4);
  this->owner_uid_ = 0;
  std::shared_ptr<UnixTimer>::shared_ptr(&this->timer_ptr_);
  std::map<unsigned int,std::shared_ptr<Scene>>::map(&this->scene_map_);
  std::unordered_map<unsigned int,WorldPlayerSlotInfo>::unordered_map(&this->slot_info_map_);
  std::unordered_map<unsigned int,WorldPlayerInfo>::unordered_map(&this->player_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_location_notify_time_, v3, (_BYTE)this - 48);
  }
  this->last_location_notify_time_ = 0;
  v5 = (((_BYTE)this - 44) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->last_rtt_notify_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_rtt_notify_time_ >> 3)
                                                        + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->last_rtt_notify_time_, v5, v6);
  this->last_rtt_notify_time_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_in_self_main_scene_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_self_main_scene_, v5, &this->is_in_self_main_scene_);
  this->is_in_self_main_scene_ = 0;
  std::shared_ptr<SceneTeam>::shared_ptr(&this->scene_team_ptr_);
  std::deque<proto::ChatInfo>::deque(&this->chat_info_que_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->chat_channel_uid_map_);
  common::tools::perf::make_shared<SceneTeam>();
  std::shared_ptr<SceneTeam>::operator=(&this->scene_team_ptr_, &__r);
  std::shared_ptr<SceneTeam>::~shared_ptr(&__r);
};

// Line 42: range 0000000017FA69C0-0000000017FA6A76
void __cdecl World::onGameHourChange(World *const this, uint32_t hour)
{
  Scene *v2; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<Scene> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(__in);
    scene_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(__in);
    v2 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
    BlockGroupComp = Scene::getBlockGroupComp(v2);
    SceneBlockGroupComp::onGameHourChange(BlockGroupComp, hour);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
};

// Line 50: range 0000000017FA6A78-0000000017FA6C02
uint32_t __cdecl World::getMainWorldSceneId(World *const this)
{
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  const data::WorldExcelConfig *world_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  p_scene_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6)->design_config.txt_config_mgr.scene_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->world_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  world_config_ptr = data::SceneExcelConfigMgrBase::findWorldExcelConfig(p_scene_config_mgr, this->world_id_);
  std::shared_ptr<Config>::~shared_ptr(&v6);
  if ( world_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&world_config_ptr->main_scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&world_config_ptr->main_scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    return world_config_ptr->main_scene_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/world.cpp",
      "getMainWorldSceneId",
      54);
    v2 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v7,
           (const char (*)[22])"findWorldExcelConfig ");
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->world_id_);
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v3, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return 0;
  }
};

// Line 61: range 0000000017FA6C04-0000000017FA6D8C
World *__fastcall World::findScene(World *const this, std::map<unsigned int,std::shared_ptr<Scene>> *scene_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 scene_id:60 64 8 7 iter:62";
  *(_QWORD *)(v3 + 16) = World::findScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<Scene>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<Scene>>::find(
                                                                            scene_id + 1,
                                                                            (const std::map<unsigned int,std::shared_ptr<Scene>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(scene_id + 1)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > > *const)(v3 + 64));
    std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, &v6->second);
  }
  else
  {
    std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 71: range 0000000017FA6D8E-0000000017FA6F3E
// local variable allocation has failed, the output may be wrong!
ScenePtr __cdecl World::getScene(World *const this, uint32_t scene_id)
{
  unsigned int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(World *const, uint32_t, _QWORD); // r8
  ScenePtr result; // rax
  unsigned int scene_ida; // [rsp+Ch] [rbp-74h]
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  scene_ida = v2;
  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:72";
  *(_QWORD *)(v3 + 16) = World::getScene;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  World::findScene((World *const)(v3 + 32), *(std::map<unsigned int,std::shared_ptr<Scene>> **)&scene_id, scene_ida);
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, (std::shared_ptr<Scene> *)(v3 + 32));
  }
  else
  {
    if ( *(_BYTE *)((*(_QWORD *)&scene_id >> 3) + 0x7FFF8000LL) )
      __asan_report_load8();
    v6 = **(_QWORD **)&scene_id + 88LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    v7 = *(void (__fastcall **)(World *const, uint32_t, _QWORD))v6;
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, 0LL);
    v7(this, scene_id, scene_ida);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 81: range 0000000017FA6F40-0000000017FA7017
ScenePtr __cdecl World::getMainWorldScene(World *const this)
{
  World *v1; // rsi
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(World *const, World *, _QWORD); // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  ScenePtr result; // rax
  World *thisa; // [rsp+0h] [rbp-20h]

  thisa = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(v1->_vptr_World + 10);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  v3 = *(void (__fastcall **)(World *const, World *, _QWORD))v2;
  v4 = (unsigned __int64)(v1->_vptr_World + 9);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  v5 = (*(unsigned int (__fastcall **)())v4)();
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v5);
  v3(this, thisa, (unsigned int)v5);
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 86: range 0000000017FA7018-0000000017FA7096
bool __cdecl World::isWorldFull(const World *const this)
{
  uint32_t PlayerCount; // ebx
  unsigned __int64 v2; // rax

  PlayerCount = World::getPlayerCount(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_World + 12);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  return PlayerCount >= (*(unsigned int (__fastcall **)(const World *const))v2)(this);
};

// Line 92: range 0000000017FA7098-0000000017FA7557
int32_t __cdecl World::playerPreEnter(World *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,WorldPlayerSlotInfo>::size_type v5; // r14
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  char *v14; // rsi
  uint32_t v15; // ecx
  char v16; // al
  uint32_t Now; // edi
  bool v18; // dl
  PlayerBasicComp *BasicComp; // rax
  const std::string *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  WorldPlayerSlotInfo *slot_info; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v27; // [rsp+20h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 owner_uid:93 64 4 6 uid:94";
  *(_QWORD *)(v2 + 16) = World::playerPreEnter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 48) = World::getOwnerUid(this);
  *(_DWORD *)(v2 + 64) = Player::getUid(player);
  v5 = std::unordered_map<unsigned int,WorldPlayerSlotInfo>::size(&this->slot_info_map_);
  v6 = World::getPlayerCount(this) + v5;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_World + 12);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( v6 < (*(unsigned int (__fastcall **)(World *const))v7)(this) )
  {
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,WorldPlayerSlotInfo>,unsigned int>(
           &this->slot_info_map_,
           (const unsigned int *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/world.cpp",
        "playerPreEnter",
        102);
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v27, (const char (*)[6])"uid: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v12,
              (const char (*)[33])" already preEnter world, owner: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    v14 = (char *)(v2 + 64);
    slot_info = std::unordered_map<unsigned int,WorldPlayerSlotInfo>::operator[](
                  &this->slot_info_map_,
                  (const std::unordered_map<unsigned int,WorldPlayerSlotInfo>::key_type *)(v2 + 64));
    v15 = *(_DWORD *)(v2 + 64);
    v16 = *(_BYTE *)(((unsigned __int64)slot_info >> 3) + 0x7FFF8000);
    if ( v16 != 0 && v16 <= 3 )
    {
      LOBYTE(v14) = v16 != 0;
      __asan_report_store4(slot_info, v14, (_BYTE)slot_info);
    }
    slot_info->uid = v15;
    Now = common::tools::TimeUtils::getNow();
    v18 = *(_BYTE *)(((unsigned __int64)&slot_info->pre_enter_time >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)slot_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&slot_info->pre_enter_time >> 3)
                                                               + 0x7FFF8000);
    if ( v18 )
    {
      Now = (_DWORD)slot_info + 4;
      __asan_report_store4(&slot_info->pre_enter_time, (((_BYTE)slot_info + 4) & 7u) + 3, v18);
    }
    slot_info->pre_enter_time = Now;
    BasicComp = Player::getBasicComp(player);
    v20 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
    std::string::operator=(&slot_info->nickname, v20);
    World::notifyPreEnterMpPlayer(this, *(_DWORD *)(v2 + 64), &slot_info->nickname, PlayerPreEnterMpNotify_State_START);
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/world.cpp",
      "playerPreEnter",
      110);
    v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v27, (const char (*)[14])"[WORLD] uid: ");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 64));
    v23 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            v22,
            (const char (*)[26])" pre-Enter world, owner: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/world.cpp",
      "playerPreEnter",
      97);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v27, (const char (*)[6])"uid: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v9,
      (const char (*)[34])" playerPreEnter fails, world full");
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = -1;
  }
  if ( v28 == (char *)v2 )
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

// Line 116: range 0000000017FA7558-0000000017FA756A
int32_t __cdecl World::playerEnter(World *const this, Player *player)
{
  return 0;
};

// Line 122: range 0000000017FA756C-0000000017FA78CF
int32_t __cdecl World::playerLeave(
        World *const this,
        Player *player,
        uint32_t leave_scene_id,
        proto::LeaveWorldReason leave_world_reason)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::initializer_list<std::string > *i; // rbx
  PlayerAbilityGroupComp *AbilityGroupComp; // [rsp+0h] [rbp-F0h]
  std::allocator<unsigned int> v8; // [rsp+22h] [rbp-CEh] BYREF
  std::allocator<std::string > __a; // [rsp+23h] [rbp-CDh] BYREF
  _DWORD v10[5]; // [rsp+24h] [rbp-CCh] BYREF
  const std::vector<data::MpPlayAbilityGroupExcelConfig> *ability_group_vec_ptr; // [rsp+38h] [rbp-B8h]
  const std::vector<data::MpPlayAbilityGroupExcelConfig> *__for_range; // [rsp+40h] [rbp-B0h]
  const data::MpPlayAbilityGroupExcelConfig *config; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v14; // [rsp+50h] [rbp-A0h] BYREF
  std::vector<unsigned int> avatar_id_vec; // [rsp+60h] [rbp-90h] BYREF
  std::vector<std::string> group_vec; // [rsp+80h] [rbp-70h] BYREF
  std::initializer_list<std::string > __l; // [rsp+A0h] [rbp-50h] BYREF
  __int64 v18; // [rsp+C0h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  ability_group_vec_ptr = MpPlayExcelConfigMgr::findAbilityGroupVecByPlayId(
                            &v4->design_config.txt_config_mgr.mp_play_config_mgr,
                            4u);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( !ability_group_vec_ptr )
    return 0;
  __for_range = ability_group_vec_ptr;
  *(std::vector<data::MpPlayAbilityGroupExcelConfig>::const_iterator *)&v10[1] = std::vector<data::MpPlayAbilityGroupExcelConfig>::begin(ability_group_vec_ptr);
  *(std::vector<data::MpPlayAbilityGroupExcelConfig>::const_iterator *)&v10[3] = std::vector<data::MpPlayAbilityGroupExcelConfig>::end(ability_group_vec_ptr);
  while ( __gnu_cxx::operator!=<data::MpPlayAbilityGroupExcelConfig const*,std::vector<data::MpPlayAbilityGroupExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::MpPlayAbilityGroupExcelConfig*,std::vector<data::MpPlayAbilityGroupExcelConfig> > *)&v10[1],
            (const __gnu_cxx::__normal_iterator<const data::MpPlayAbilityGroupExcelConfig*,std::vector<data::MpPlayAbilityGroupExcelConfig> > *)&v10[3]) )
  {
    config = __gnu_cxx::__normal_iterator<data::MpPlayAbilityGroupExcelConfig const*,std::vector<data::MpPlayAbilityGroupExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::MpPlayAbilityGroupExcelConfig*,std::vector<data::MpPlayAbilityGroupExcelConfig> > *const)&v10[1]);
    if ( !(unsigned __int8)std::string::empty(&config->ability_group_name) )
    {
      AbilityGroupComp = Player::getAbilityGroupComp(player);
      std::string::basic_string(&__l, &config->ability_group_name);
      std::allocator<std::string>::allocator(&__a);
      std::vector<std::string>::vector(&group_vec, (std::initializer_list<std::string >)__PAIR128__(1LL, &__l), &__a);
      if ( *(_BYTE *)(((unsigned __int64)&config->avatar_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->avatar_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v10[0] = config->avatar_id;
      std::allocator<unsigned int>::allocator(&v8);
      std::vector<unsigned int>::vector(&avatar_id_vec, (std::initializer_list<unsigned int>)__PAIR128__(1LL, v10), &v8);
      PlayerAbilityGroupComp::delAvatarFilterAbilityGroup(AbilityGroupComp, &avatar_id_vec, &group_vec);
      std::vector<unsigned int>::~vector(&avatar_id_vec);
      std::allocator<unsigned int>::~allocator(&v8);
      std::vector<std::string>::~vector(&group_vec);
      std::allocator<std::string>::~allocator(&__a);
      for ( i = (std::initializer_list<std::string > *)&v18; i != &__l; std::string::~string(i) )
        i -= 2;
    }
    __gnu_cxx::__normal_iterator<data::MpPlayAbilityGroupExcelConfig const*,std::vector<data::MpPlayAbilityGroupExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::MpPlayAbilityGroupExcelConfig*,std::vector<data::MpPlayAbilityGroupExcelConfig> > *const)&v10[1]);
  }
  return 0;
};

// Line 144: range 0000000017FA78D0-0000000017FA7C58
void __cdecl World::onPlayerEnterScene(World *const this, Player *player, Scene *scene)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  unsigned int *p_val; // rsi
  uint32_t v15; // edx
  char v16; // al
  unsigned int SceneId; // [rsp+28h] [rbp-C8h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerInfo>,false> __y; // [rsp+30h] [rbp-C0h] BYREF
  WorldPlayerInfo *player_info; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:145 64 8 8 iter:146";
  *(_QWORD *)(v3 + 16) = World::onPlayerEnterScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
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
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/world.cpp",
      "onPlayerEnterScene",
      149);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v22,
           (const char (*)[33])"player_info_map_ not found uid: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" owner:");
    val = World::getOwnerUid(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/world.cpp",
      "onPlayerEnterScene",
      153);
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v22, (const char (*)[14])"[WORLD] uid: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" enterScene: ");
    SceneId = Scene::getSceneId(scene);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &SceneId);
    v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" scene owner: ");
    val = Scene::getOwnerUid(scene);
    p_val = &val;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    player_info = &std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false> *const)(v3 + 64))->second;
    v15 = Scene::getSceneId(scene);
    v16 = *(_BYTE *)(((unsigned __int64)&player_info->cur_scene_id >> 3) + 0x7FFF8000);
    if ( v16 != 0 && v16 <= 3 )
    {
      LOBYTE(p_val) = v16 != 0;
      __asan_report_store4(&player_info->cur_scene_id, p_val, v15);
    }
    player_info->cur_scene_id = v15;
  }
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 161: range 0000000017FA7C5A-0000000017FA8335
void __cdecl World::onPlayerLeaveScene(World *const this, Player *player, Scene *scene)
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
  data::SceneType SceneType; // eax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned __int64 Position; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned __int64 Rotation; // rax
  __int64 v18; // rsi
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t SceneId; // ecx
  char v22; // dl
  bool v23; // dl
  unsigned int val; // [rsp+28h] [rbp-E8h] BYREF
  unsigned int OwnerUid; // [rsp+2Ch] [rbp-E4h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerInfo>,false> __y; // [rsp+30h] [rbp-E0h] BYREF
  WorldPlayerInfo *player_info; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 uid:162 64 8 8 iter:163 96 16 14 avatar_ptr:175";
  *(_QWORD *)(v3 + 16) = World::onPlayerLeaveScene;
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
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/world.cpp",
      "onPlayerLeaveScene",
      166);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v29,
           (const char (*)[33])"player_info_map_ not found uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/world.cpp",
      "onPlayerLeaveScene",
      170);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v29, (const char (*)[14])"[WORLD] uid: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" leaveScene: ");
    val = Scene::getSceneId(scene);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" scene owner: ");
    OwnerUid = Scene::getOwnerUid(scene);
    p_OwnerUid = &OwnerUid;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &OwnerUid);
    common::milog::MiLogStream::~MiLogStream(&v29);
    player_info = &std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false> *const)(v3 + 64))->second;
    SceneType = Scene::getSceneType(scene);
    if ( SceneExcelConfigMgr::isWorldScene(SceneType) )
    {
      Player::getCurAvatar((Player *const)(v3 + 96));
      if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 96), 0LL) )
      {
        v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        Position = (unsigned __int64)Entity::getPosition((const Entity *const)v14);
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
        v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        Rotation = (unsigned __int64)Entity::getRotation((const Entity *const)v16);
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
        v18 = ((_DWORD)Rotation + 11) & 7;
        if ( (char)(Rotation & 7) >= *(_BYTE *)((Rotation >> 3) + 0x7FFF8000)
          && *(_BYTE *)((Rotation >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((Rotation + 11) & 7) >= *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) )
        {
          v18 = 12LL;
          Rotation = __asan_report_load_n(Rotation, 12LL);
        }
        player_info->last_main_rot = *(Vector3 *)Rotation;
        if ( *(char *)(((unsigned __int64)&player_info->is_pos_valid >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&player_info->is_pos_valid, v18, &player_info->is_pos_valid);
        player_info->is_pos_valid = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/world.cpp",
          "onPlayerLeaveScene",
          184);
        v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v29, (const char (*)[6])"uid: ");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v20, (const char (*)[20])" getCurAvatar fails");
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
    }
    else if ( Scene::getSceneType(scene) == SCENE_ROOM )
    {
      SceneId = Scene::getSceneId(scene);
      v22 = *(_BYTE *)(((unsigned __int64)&player_info->last_leave_room_scene_id >> 3) + 0x7FFF8000);
      LOBYTE(p_OwnerUid) = v22 != 0;
      v23 = v22 != 0 && (char)((((_BYTE)player_info + 52) & 7) + 3) >= v22;
      if ( v23 )
        __asan_report_store4(&player_info->last_leave_room_scene_id, p_OwnerUid, v23);
      player_info->last_leave_room_scene_id = SceneId;
    }
  }
  if ( v30 == (char *)v3 )
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

// Line 196: range 0000000017FA8388-0000000017FA87F2
void __cdecl World::notifyAllPlayerInfo(World *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  Player *v4; // rax
  PlayerMpComp *MpComp; // r14
  proto::OnlinePlayerInfo *v6; // rax
  Player *v7; // rax
  PlayerWidgetComp *WidgetComp; // r14
  proto::PlayerWidgetInfo *v9; // rax
  std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v11; // rdx
  std::unordered_map<unsigned int,WorldPlayerInfo>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  std::unordered_map<unsigned int,WorldPlayerInfo>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  std::unordered_map<unsigned int,WorldPlayerInfo> *__for_range; // [rsp+28h] [rbp-158h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-150h]
  std::pair<unsigned int const,WorldPlayerInfo> *__in; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,WorldPlayerInfo> >::type *uid; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int const,WorldPlayerInfo> >::type *player_info; // [rsp+48h] [rbp-138h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+50h] [rbp-130h] BYREF
  char v20[272]; // [rsp+70h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 7 uid:210 64 16 14 player_ptr:200 96 96 10 notify:197";
  *(_QWORD *)(v1 + 16) = World::notifyAllPlayerInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862726] = -202116109;
  proto::WorldPlayerInfoNotify::WorldPlayerInfoNotify((proto::WorldPlayerInfoNotify *const)(v1 + 96));
  __for_range = &this->player_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::begin(&this->player_info_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::end(&this->player_info_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,WorldPlayerInfo>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,WorldPlayerInfo>(__in);
    player_info = std::get<1ul,unsigned int const,WorldPlayerInfo>(__in);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v1 + 64));
    if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 64)) )
    {
      v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      MpComp = Player::getMpComp(v4);
      v6 = proto::WorldPlayerInfoNotify::add_player_info_list((proto::WorldPlayerInfoNotify *const)(v1 + 96));
      PlayerMpComp::fillOnlinePlayerInfo(MpComp, v6);
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      WidgetComp = Player::getWidgetComp(v7);
      v9 = proto::WorldPlayerInfoNotify::add_player_widget_info_list((proto::WorldPlayerInfoNotify *const)(v1 + 96));
      PlayerWidgetComp::packPlayerWidgetInfo(WidgetComp, v9);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
    std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator++(&__for_begin);
  }
  if ( std::operator!=<SceneTeam>(&this->scene_team_ptr_, 0LL) )
  {
    v10 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->scene_team_ptr_);
    __for_range_0 = SceneTeam::getPlayerUidVec(v10);
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerInfo>,false>::__node_type *)std::vector<unsigned int>::begin(__for_range_0)._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerInfo>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
    {
      v11 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = *v11;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,WorldPlayerInfo>,unsigned int>(
             &this->player_info_map_,
             (const unsigned int *)(v1 + 48)) )
      {
        proto::WorldPlayerInfoNotify::add_player_uid_list(
          (proto::WorldPlayerInfoNotify *const)(v1 + 96),
          *(_DWORD *)(v1 + 48));
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    }
  }
  std::function<ForeachPolicy ()(Player &)>::function<World::notifyAllPlayerInfo(void)::{lambda(Player &)#1},void,void>(
    &p_func,
    (World::notifyAllPlayerInfo::<lambda(Player&)>)(v1 + 96));
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  proto::WorldPlayerInfoNotify::~WorldPlayerInfoNotify((proto::WorldPlayerInfoNotify *const)(v1 + 96));
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 219: range 0000000017FA8336-0000000017FA8386
ForeachPolicy __cdecl World::notifyAllPlayerInfo(void)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayerInfo::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 227: range 0000000017FA87F4-0000000017FA8B47
int32_t __cdecl World::foreachPlayer(World *const this, std::function<ForeachPolicy(Player&)> *p_func)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,WorldPlayerInfo>::size_type v6; // rax
  Player *v7; // rdx
  int v9; // r15d
  int32_t result; // eax
  std::unordered_map<unsigned int,WorldPlayerInfo>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::unordered_map<unsigned int,WorldPlayerInfo>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,WorldPlayerInfo> *__for_range; // [rsp+30h] [rbp-E0h]
  std::vector<std::weak_ptr<Player>> *__for_range_0; // [rsp+38h] [rbp-D8h]
  std::weak_ptr<Player> *player_wtr; // [rsp+40h] [rbp-D0h]
  std::pair<unsigned int const,WorldPlayerInfo> *__in; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,WorldPlayerInfo> >::type *uid; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,WorldPlayerInfo> >::type *player_info; // [rsp+58h] [rbp-B8h]
  char v19[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 player_ptr:236 64 24 14 player_vec:228";
  *(_QWORD *)(v3 + 16) = World::foreachPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::vector<std::weak_ptr<Player>>::vector((std::vector<std::weak_ptr<Player>> *const)(v3 + 64));
  v6 = std::unordered_map<unsigned int,WorldPlayerInfo>::size(&this->player_info_map_);
  std::vector<std::weak_ptr<Player>>::reserve((std::vector<std::weak_ptr<Player>> *const)(v3 + 64), v6);
  __for_range = &this->player_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::begin(&this->player_info_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::end(&this->player_info_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,WorldPlayerInfo>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,WorldPlayerInfo>(__in);
    player_info = std::get<1ul,unsigned int const,WorldPlayerInfo>(__in);
    std::vector<std::weak_ptr<Player>>::emplace_back<std::weak_ptr<Player>&>(
      (std::vector<std::weak_ptr<Player>> *const)(v3 + 64),
      &player_info->player_wtr,
      &player_info->player_wtr);
    std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::weak_ptr<Player>> *)(v3 + 64);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerInfo>,false>::__node_type *)std::vector<std::weak_ptr<Player>>::begin((std::vector<std::weak_ptr<Player>> *const)(v3 + 64))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerInfo>,false>::__node_type *)std::vector<std::weak_ptr<Player>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *)&__for_end) )
  {
    player_wtr = __gnu_cxx::__normal_iterator<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *const)&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL)
      && (v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
          std::function<ForeachPolicy ()(Player &)>::operator()(p_func, v7)) )
    {
      v2 = 1;
      v9 = 0;
    }
    else
    {
      v9 = 1;
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    if ( v9 != 1 )
      goto LABEL_19;
    __gnu_cxx::__normal_iterator<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *const)&__for_begin);
  }
  v2 = 0;
LABEL_19:
  std::vector<std::weak_ptr<Player>>::~vector((std::vector<std::weak_ptr<Player>> *const)(v3 + 64));
  result = v2;
  if ( v19 == (char *)v3 )
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
  return result;
};

// Line 246: range 0000000017FA8B48-0000000017FA8D92
int32_t __cdecl World::foreachScene(World *const this, std::function<ForeachPolicy(Scene&)> *p_func)
{
  std::map<unsigned int,std::shared_ptr<Scene>> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  Scene *v5; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+20h] [rbp-D0h]
  std::pair<unsigned int const,std::shared_ptr<Scene> > *__in; // [rsp+28h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *id; // [rsp+30h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+38h] [rbp-B8h]
  char v15[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (std::map<unsigned int,std::shared_ptr<Scene>> *)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,std::shared_ptr<Scene>> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 17 tmp_scene_map:247";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)World::foreachScene;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::map<unsigned int,std::shared_ptr<Scene>>::map(v2 + 1, &this->scene_map_);
  __for_range = v2 + 1;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(v2 + 1)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(v2 + 1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(__in);
    scene_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(__in);
    if ( std::operator!=<Scene>(0LL, scene_ptr) )
    {
      v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      if ( std::function<ForeachPolicy ()(Scene &)>::operator()(p_func, v5) )
      {
        v7 = 1;
        goto LABEL_14;
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
  v7 = 0;
LABEL_14:
  std::map<unsigned int,std::shared_ptr<Scene>>::~map(v2 + 1);
  result = v7;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 259: range 0000000017FA8DE6-0000000017FA915A
void __cdecl World::notifyAllPlayerRttInfo(World *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t Rtt; // eax
  const google::protobuf::RepeatedPtrField<proto::PlayerRTTInfo> *v6; // rax
  std::unordered_map<unsigned int,WorldPlayerInfo>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::unordered_map<unsigned int,WorldPlayerInfo>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::unordered_map<unsigned int,WorldPlayerInfo> *__for_range; // [rsp+28h] [rbp-118h]
  const std::pair<unsigned int const,WorldPlayerInfo> *v10; // [rsp+30h] [rbp-110h]
  std::tuple_element<0,const std::pair<unsigned int const,WorldPlayerInfo> >::type *uid; // [rsp+38h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,WorldPlayerInfo> >::type *player_info; // [rsp+40h] [rbp-100h]
  proto::PlayerRTTInfo *player_rtt; // [rsp+48h] [rbp-F8h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+50h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+70h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 14 player_ptr:263 80 48 10 notify:260";
  *(_QWORD *)(v1 + 16) = World::notifyAllPlayerRttInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  proto::WorldPlayerRTTNotify::WorldPlayerRTTNotify((proto::WorldPlayerRTTNotify *const)(v1 + 80));
  __for_range = &this->player_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::begin(&this->player_info_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::end(&this->player_info_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,WorldPlayerInfo>,false>(&__for_begin, &__for_end) )
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,WorldPlayerInfo>(v10);
    player_info = (std::tuple_element<1,const std::pair<unsigned int const,WorldPlayerInfo> >::type *)std::get<1ul,unsigned int const,WorldPlayerInfo>(v10);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v1 + 48));
    if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 48)) )
    {
      player_rtt = proto::WorldPlayerRTTNotify::add_player_rtt_list((proto::WorldPlayerRTTNotify *const)(v1 + 80));
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::PlayerRTTInfo::set_uid(player_rtt, *uid);
      v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      Rtt = Player::getRtt(v4);
      proto::PlayerRTTInfo::set_rtt(player_rtt, Rtt);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 48));
    std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator++(&__for_begin);
  }
  v6 = proto::WorldPlayerRTTNotify::player_rtt_list((const proto::WorldPlayerRTTNotify *const)(v1 + 80));
  if ( !google::protobuf::RepeatedPtrField<proto::PlayerRTTInfo>::empty(v6) )
  {
    std::function<ForeachPolicy ()(Player &)>::function<World::notifyAllPlayerRttInfo(void)::{lambda(Player &)#1},void,void>(
      &p_func,
      (World::notifyAllPlayerRttInfo::<lambda(Player&)>)(v1 + 80));
    World::foreachPlayer(this, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  }
  proto::WorldPlayerRTTNotify::~WorldPlayerRTTNotify((proto::WorldPlayerRTTNotify *const)(v1 + 80));
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
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

// Line 278: range 0000000017FA8D94-0000000017FA8DE4
ForeachPolicy __cdecl World::notifyAllPlayerRttInfo(void)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayerRttInfo::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 287: range 0000000017FA91AE-0000000017FA9EA2
void __cdecl World::notifyAllPlayerLocation(World *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  Player *v5; // rax
  uint32_t v6; // r14d
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  proto::Vector *v12; // rax
  proto::Vector *v13; // rax
  unsigned int val; // [rsp+1Ch] [rbp-1F4h] BYREF
  uint32_t count; // [rsp+20h] [rbp-1F0h]
  uint32_t main_scene_id; // [rsp+24h] [rbp-1ECh]
  std::unordered_map<unsigned int,WorldPlayerInfo>::iterator __for_begin; // [rsp+28h] [rbp-1E8h] BYREF
  std::unordered_map<unsigned int,WorldPlayerInfo>::iterator __for_end; // [rsp+30h] [rbp-1E0h] BYREF
  std::unordered_map<unsigned int,WorldPlayerInfo> *__for_range; // [rsp+38h] [rbp-1D8h]
  const std::pair<unsigned int const,WorldPlayerInfo> *v20; // [rsp+40h] [rbp-1D0h]
  std::tuple_element<0,const std::pair<unsigned int const,WorldPlayerInfo> >::type *uid; // [rsp+48h] [rbp-1C8h]
  std::tuple_element<1,const std::pair<unsigned int const,WorldPlayerInfo> >::type *player_info; // [rsp+50h] [rbp-1C0h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+58h] [rbp-1B8h]
  proto::PlayerWorldLocationInfo *player_loc; // [rsp+60h] [rbp-1B0h]
  proto::PlayerLocationInfo *scene_loc; // [rsp+68h] [rbp-1A8h]
  std::shared_ptr<Scene> p_scene_ptr; // [rsp+70h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v27; // [rsp+80h] [rbp-190h] BYREF
  char v28[368]; // [rsp+A0h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 32 4 17 show_scene_id:314 48 12 7 pos:313 80 12 7 rot:313 112 16 18 main_scene_ptr:292 144 16 "
                        "14 player_ptr:304 176 16 13 scene_ptr:310 208 72 10 notify:301";
  *(_QWORD *)(v1 + 16) = World::notifyAllPlayerLocation;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862721] = 0x4000000;
  v3[536862722] = 62194;
  v3[536862722] = 0x4000000;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862725] = 62194;
  v3[536862726] = 62194;
  v3[536862728] = -218103808;
  v3[536862729] = -202116109;
  if ( !World::getPlayerCount(this) )
    goto LABEL_52;
  World::getMainWorldScene((World *const)(v1 + 112));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/world.cpp",
      "notifyAllPlayerLocation",
      295);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v27, (const char (*)[24])"getMainWorldScene fails");
    common::milog::MiLogStream::~MiLogStream(&v27);
    goto LABEL_51;
  }
  v4 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
  main_scene_id = Scene::getSceneId(v4);
  count = 0;
  proto::WorldPlayerLocationNotify::WorldPlayerLocationNotify((proto::WorldPlayerLocationNotify *const)(v1 + 208));
  __for_range = &this->player_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::begin(&this->player_info_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::end(&this->player_info_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,WorldPlayerInfo>,false>(&__for_begin, &__for_end) )
  {
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,WorldPlayerInfo>(v20);
    player_info = (std::tuple_element<1,const std::pair<unsigned int const,WorldPlayerInfo> >::type *)std::get<1ul,unsigned int const,WorldPlayerInfo>(v20);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v1 + 144));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 144)) )
      goto LABEL_42;
    ++count;
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 144));
    Player::getSceneComp(v5);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 176));
    if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 176)) )
    {
      Vector3::Vector3((Vector3 *const)(v1 + 48), 0.0, 0.0, 0.0);
      Vector3::Vector3((Vector3 *const)(v1 + 80), 0.0, 0.0, 0.0);
      *(_DWORD *)(v1 + 32) = 0;
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v6 = *uid;
      std::shared_ptr<Scene>::shared_ptr(&p_scene_ptr, (const std::shared_ptr<Scene> *)(v1 + 176));
      LOBYTE(v6) = World::findSceneShowMapInfo(
                     this,
                     &p_scene_ptr,
                     v6,
                     (Vector3 *)(v1 + 48),
                     (Vector3 *)(v1 + 80),
                     (uint32_t *)(v1 + 32)) != 0;
      std::shared_ptr<Scene>::~shared_ptr(&p_scene_ptr);
      if ( !(_BYTE)v6 )
        goto LABEL_37;
      if ( *(char *)(((unsigned __int64)&player_info->is_pos_valid >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&player_info->is_pos_valid);
      if ( player_info->is_pos_valid )
      {
        *(_DWORD *)(v1 + 32) = main_scene_id;
        if ( *(char *)(((unsigned __int64)&player_info->last_main_pos >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&player_info->last_main_pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)player_info + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&player_info->last_main_pos.z
                                                                     + 3) >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load_n(&player_info->last_main_pos, 12LL);
        }
        *(Vector3 *)(v1 + 48) = player_info->last_main_pos;
        if ( (((unsigned __int8)player_info + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&player_info->last_main_rot >> 3)
                                                                   + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&player_info->last_main_rot >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&player_info->last_main_rot.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)player_info + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&player_info->last_main_rot.z
                                                                     + 3) >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load_n(&player_info->last_main_rot, 12LL);
        }
        *(Vector3 *)(v1 + 80) = player_info->last_main_rot;
LABEL_37:
        if ( *(_DWORD *)(v1 + 32) )
        {
          player_loc = proto::WorldPlayerLocationNotify::add_player_world_loc_list((proto::WorldPlayerLocationNotify *const)(v1 + 208));
          proto::PlayerWorldLocationInfo::set_scene_id(player_loc, *(_DWORD *)(v1 + 32));
          scene_loc = proto::PlayerWorldLocationInfo::mutable_player_loc(player_loc);
          if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::PlayerLocationInfo::set_uid(scene_loc, *uid);
          Vector3::operator proto::Vector((proto::Vector *)&v27, (const Vector3 *const)(v1 + 48));
          v12 = proto::PlayerLocationInfo::mutable_pos(scene_loc);
          proto::Vector::operator=(v12, (proto::Vector *)&v27);
          proto::Vector::~Vector((proto::Vector *const)&v27);
          Vector3::operator proto::Vector((proto::Vector *)&v27, (const Vector3 *const)(v1 + 80));
          v13 = proto::PlayerLocationInfo::mutable_rot(scene_loc);
          proto::Vector::operator=(v13, (proto::Vector *)&v27);
          proto::Vector::~Vector((proto::Vector *const)&v27);
        }
        goto LABEL_41;
      }
      if ( *(_BYTE *)(((unsigned __int64)&player_info->last_leave_room_scene_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)player_info + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->last_leave_room_scene_id >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( player_info->last_leave_room_scene_id )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&p_scene_ptr);
        p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_scene_ptr)->design_config.lua_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&player_info->last_leave_room_scene_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)player_info + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->last_leave_room_scene_id >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        scene_script_config_ptr = LuaConfigMgr::findSceneScriptConfig(
                                    p_lua_config_mgr,
                                    player_info->last_leave_room_scene_id);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_scene_ptr);
        if ( scene_script_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->room_show_scene_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)scene_script_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->room_show_scene_id >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 32) = scene_script_config_ptr->room_show_scene_id;
          if ( *(char *)(((unsigned __int64)&scene_script_config_ptr->room_show_pos >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->room_show_pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)scene_script_config_ptr + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->room_show_pos.z
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load_n(&scene_script_config_ptr->room_show_pos, 12LL);
          }
          *(Vector3 *)(v1 + 48) = scene_script_config_ptr->room_show_pos;
          if ( (((unsigned __int8)scene_script_config_ptr + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->room_show_rot >> 3)
                                                                                 + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->room_show_rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->room_show_rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)scene_script_config_ptr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->room_show_rot.z
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load_n(&scene_script_config_ptr->room_show_rot, 12LL);
          }
          *(Vector3 *)(v1 + 80) = scene_script_config_ptr->room_show_rot;
          goto LABEL_37;
        }
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/world.cpp",
          "notifyAllPlayerLocation",
          330);
        v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
               &v27,
               (const char (*)[31])"getScriptConfig fails sceneid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v8,
          &player_info->last_leave_room_scene_id);
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/world.cpp",
          "notifyAllPlayerLocation",
          339);
        v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v27, (const char (*)[23])off_26482380);
        v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 176));
        val = Scene::getSceneId(v10);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          v11,
          (const char (*)[41])" show map info and is_pos_valid is false");
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
    }
LABEL_41:
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 176));
LABEL_42:
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 144));
    std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator++(&__for_begin);
  }
  if ( count )
  {
    if ( count != 1 )
      goto LABEL_49;
    if ( *(char *)(((unsigned __int64)&this->is_in_self_main_scene_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_in_self_main_scene_);
    if ( !this->is_in_self_main_scene_ )
    {
LABEL_49:
      std::function<ForeachPolicy ()(Player &)>::function<World::notifyAllPlayerLocation(void)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v27,
        (World::notifyAllPlayerLocation::<lambda(Player&)>)(v1 + 208));
      World::foreachPlayer(this, (std::function<ForeachPolicy(Player&)> *)&v27);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v27);
    }
  }
  proto::WorldPlayerLocationNotify::~WorldPlayerLocationNotify((proto::WorldPlayerLocationNotify *const)(v1 + 208));
LABEL_51:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 112));
LABEL_52:
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 362: range 0000000017FA915C-0000000017FA91AC
ForeachPolicy __cdecl World::notifyAllPlayerLocation(void)::{lambda(Player &)#1}::operator()(
        const World::notifyAllPlayerLocation::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 371: range 0000000017FA9EA4-0000000017FAABF4
__int64 __fastcall World::findSceneShowMapInfo(
        World *const this,
        const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *p_scene_ptr,
        uint32_t uid,
        Vector3 *pos,
        Vector3 *rot,
        unsigned __int64 show_scene_id)
{
  unsigned int v6; // r14d
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  char *v12; // rsi
  common::milog::MiLogStream *v13; // r15
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // r15d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t SceneId; // ecx
  char v20; // dl
  bool v21; // dl
  std::__shared_ptr_access<ScenePlayerLocation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  std::__shared_ptr_access<ScenePlayerLocation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rbx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  __int64 v27; // rsi
  uint32_t room_show_scene_id; // ecx
  char v29; // dl
  bool v30; // dl
  int v31; // r15d
  JsonConfigMgr *p_json_config_mgr; // r15
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  uint32_t DungeonId; // eax
  common::milog::MiLogStream *v35; // r15
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  __int64 v37; // rsi
  uint32_t exit_scene_id; // ecx
  char v39; // dl
  bool v40; // dl
  __int64 result; // rax
  unsigned int val; // [rsp+48h] [rbp-E8h] BYREF
  data::SceneType scene_type; // [rsp+4Ch] [rbp-E4h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+50h] [rbp-E0h]
  const DungeonJsonConfig *dungeon_json_config_ptr; // [rsp+58h] [rbp-D8h]
  common::milog::MiLogStream v51; // [rsp+60h] [rbp-D0h] BYREF
  char v52[176]; // [rsp+80h] [rbp-B0h] BYREF

  v7 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "3 48 4 7 uid:370 64 16 21 dungeon_scene_ptr:411 96 16 16 location_ptr:383";
  *(_QWORD *)(v7 + 16) = World::findSceneShowMapInfo;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -219021312;
  v9[536862723] = -202178560;
  *(_DWORD *)(v7 + 48) = uid;
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)p_scene_ptr) )
  {
    v6 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_scene_ptr);
    scene_type = Scene::getSceneType(v10);
    switch ( scene_type )
    {
      case SCENE_WORLD:
      case SCENE_HOME_WORLD:
        v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_scene_ptr);
        Scene::getPlayerLocation((Scene *const)(v7 + 96), (__int64)v11, *(_DWORD *)(v7 + 48));
        v12 = (char *)(v7 + 96);
        if ( std::operator==<ScenePlayerLocation>(0LL, (const std::shared_ptr<ScenePlayerLocation> *)(v7 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/world.cpp",
            "findSceneShowMapInfo",
            386);
          v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v51,
                  (const char (*)[33])"getPlayerLocation fails sceneid:");
          v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_scene_ptr);
          val = Scene::getSceneId(v14);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v7 + 48));
          common::milog::MiLogStream::~MiLogStream(&v51);
          v17 = 0;
        }
        else
        {
          v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_scene_ptr);
          SceneId = Scene::getSceneId(v18);
          v20 = *(_BYTE *)((show_scene_id >> 3) + 0x7FFF8000);
          LOBYTE(v12) = v20 != 0;
          v21 = v20 != 0 && (char)((show_scene_id & 7) + 3) >= v20;
          if ( v21 )
            __asan_report_store4(show_scene_id, v12, v21);
          *(_DWORD *)show_scene_id = SceneId;
          v22 = std::__shared_ptr_access<ScenePlayerLocation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ScenePlayerLocation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96));
          if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(pos, 12LL);
          }
          if ( ((unsigned __int8)v22 & 7) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v22->cur_pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v22 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v22->cur_pos.z + 3) >> 3)
                                                             + 0x7FFF8000) )
          {
            __asan_report_load_n(v22, 12LL);
          }
          *(_QWORD *)&pos->x = *(_QWORD *)&v22->cur_pos.x;
          pos->z = v22->cur_pos.z;
          v23 = std::__shared_ptr_access<ScenePlayerLocation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ScenePlayerLocation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96));
          if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(rot, 12LL);
          }
          if ( (((unsigned __int8)v23 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&v23->cur_rot >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&v23->cur_rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v23->cur_rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v23 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&v23->cur_rot.z + 3) >> 3)
                                                             + 0x7FFF8000) )
          {
            __asan_report_load_n(&v23->cur_rot, 12LL);
          }
          *(_QWORD *)&rot->x = *(_QWORD *)&v23->cur_rot.x;
          rot->z = v23->cur_rot.z;
          v6 = 0;
          v17 = 1;
        }
        std::shared_ptr<ScenePlayerLocation>::~shared_ptr((std::shared_ptr<ScenePlayerLocation> *const)(v7 + 96));
        if ( !v17 )
          goto LABEL_58;
        break;
      case SCENE_DUNGEON:
        std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v7 + 64));
        if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v7 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/world.cpp",
            "findSceneShowMapInfo",
            414);
          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v51,
            (const char (*)[41])"dynamic_pointer_cast<DungeonScene> fails");
          common::milog::MiLogStream::~MiLogStream(&v51);
          v31 = 0;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v7 + 96));
          p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96))->design_config.json_config_mgr;
          v33 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
          DungeonId = DungeonScene::getDungeonId(v33);
          dungeon_json_config_ptr = JsonConfigMgr::findDungeonJsonConfig(p_json_config_mgr, DungeonId);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 96));
          if ( dungeon_json_config_ptr )
          {
            v37 = ((unsigned __int8)dungeon_json_config_ptr & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)dungeon_json_config_ptr >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)dungeon_json_config_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_json_config_ptr >> 3)
                                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            exit_scene_id = dungeon_json_config_ptr->exit_scene_id;
            v39 = *(_BYTE *)((show_scene_id >> 3) + 0x7FFF8000);
            LOBYTE(v37) = v39 != 0;
            v40 = v39 != 0 && (char)((show_scene_id & 7) + 3) >= v39;
            if ( v40 )
              __asan_report_store4(show_scene_id, v37, v40);
            *(_DWORD *)show_scene_id = exit_scene_id;
            if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(pos, 12LL);
            }
            if ( (((unsigned __int8)dungeon_json_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&dungeon_json_config_ptr->exit_pos >> 3)
                                                                                  + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)&dungeon_json_config_ptr->exit_pos >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&dungeon_json_config_ptr->exit_pos.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)dungeon_json_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&dungeon_json_config_ptr->exit_pos.z
                                                                                     + 3) >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load_n(&dungeon_json_config_ptr->exit_pos, 12LL);
            }
            *pos = dungeon_json_config_ptr->exit_pos;
            if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(rot, 12LL);
            }
            if ( (((unsigned __int8)dungeon_json_config_ptr + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&dungeon_json_config_ptr->exit_rot >> 3)
                                                                                   + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)&dungeon_json_config_ptr->exit_rot >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&dungeon_json_config_ptr->exit_rot.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)dungeon_json_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&dungeon_json_config_ptr->exit_rot.z
                                                                                     + 3) >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load_n(&dungeon_json_config_ptr->exit_rot, 12LL);
            }
            *rot = dungeon_json_config_ptr->exit_rot;
            v6 = 0;
            v31 = 1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v51,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/world.cpp",
              "findSceneShowMapInfo",
              422);
            v35 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v51,
                    (const char (*)[28])"findDungeonJsonConfig fails");
            v36 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
            val = DungeonScene::getDungeonId(v36);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
            common::milog::MiLogStream::~MiLogStream(&v51);
            v31 = 0;
          }
        }
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v7 + 64));
        if ( !v31 )
          goto LABEL_58;
        break;
      case SCENE_ROOM:
        v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_scene_ptr);
        scene_script_config_ptr = Scene::getScriptConfig(v24);
        if ( scene_script_config_ptr )
        {
          v27 = (((_BYTE)scene_script_config_ptr + 20) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->room_show_scene_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)scene_script_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->room_show_scene_id >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          room_show_scene_id = scene_script_config_ptr->room_show_scene_id;
          v29 = *(_BYTE *)((show_scene_id >> 3) + 0x7FFF8000);
          LOBYTE(v27) = v29 != 0;
          v30 = v29 != 0 && (char)((show_scene_id & 7) + 3) >= v29;
          if ( v30 )
            __asan_report_store4(show_scene_id, v27, v30);
          *(_DWORD *)show_scene_id = room_show_scene_id;
          if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(pos, 12LL);
          }
          if ( *(char *)(((unsigned __int64)&scene_script_config_ptr->room_show_pos >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->room_show_pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)scene_script_config_ptr + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->room_show_pos.z
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load_n(&scene_script_config_ptr->room_show_pos, 12LL);
          }
          *pos = scene_script_config_ptr->room_show_pos;
          if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(rot, 12LL);
          }
          if ( (((unsigned __int8)scene_script_config_ptr + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->room_show_rot >> 3)
                                                                                 + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->room_show_rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->room_show_rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)scene_script_config_ptr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->room_show_rot.z
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load_n(&scene_script_config_ptr->room_show_rot, 12LL);
          }
          *rot = scene_script_config_ptr->room_show_rot;
          v6 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/world.cpp",
            "findSceneShowMapInfo",
            400);
          v25 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v51,
                  (const char (*)[31])"getScriptConfig fails sceneid:");
          v26 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_scene_ptr);
          val = Scene::getSceneId(v26);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
          common::milog::MiLogStream::~MiLogStream(&v51);
LABEL_58:
          v6 = -1;
        }
        break;
      case SCENE_HOME_ROOM:
        v6 = 0;
        break;
      default:
        v6 = -1;
        break;
    }
  }
  result = v6;
  if ( v52 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 448: range 0000000017FAABF6-0000000017FAAE1C
int32_t __cdecl World::addChatInfo(World *const this, uint32_t channel_id, const proto::ChatInfo *chat_info)
{
  proto::PlayerChatNotify *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  proto::ChatInfo *v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int32_t result; // eax
  uint32_t max_size; // [rsp+2Ch] [rbp-A4h]
  std::shared_ptr<Config> v11; // [rsp+30h] [rbp-A0h] BYREF
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (proto::PlayerChatNotify *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (proto::PlayerChatNotify *)v4;
  }
  v3->_vptr_MessageLite = (int (**)(...))1102416563;
  v3->_internal_metadata_.ptr_ = "1 32 32 10 notify:451";
  v3->chat_info_ = (proto::ChatInfo *)World::addChatInfo;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  std::deque<proto::ChatInfo>::push_back(&this->chat_info_que_, chat_info);
  proto::PlayerChatNotify::PlayerChatNotify(v3 + 1);
  proto::PlayerChatNotify::set_channel_id(v3 + 1, channel_id);
  v6 = proto::PlayerChatNotify::mutable_chat_info(v3 + 1);
  proto::ChatInfo::operator=(v6, chat_info);
  World::notifyChatChannelPlayer<proto::PlayerChatNotify>(this, v3 + 1, channel_id);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  max_size = ConstValueExcelConfigMgr::getMpChatCachedMaxCount(&v7->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  while ( std::deque<proto::ChatInfo>::size(&this->chat_info_que_) > max_size )
    std::deque<proto::ChatInfo>::pop_front(&this->chat_info_que_);
  proto::PlayerChatNotify::~PlayerChatNotify(v3 + 1);
  result = 0;
  if ( v12 == (char *)v3 )
  {
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 465: range 0000000017FAAE1E-0000000017FAAFD0
World *__fastcall World::findPlayerPtr(World *const this, __int64 player_uid, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerInfo>,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 player_uid:464 64 8 6 it:466";
  *(_QWORD *)(v3 + 16) = World::findPlayerPtr;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,WorldPlayerInfo>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,WorldPlayerInfo>::find(
                                                                               (std::unordered_map<unsigned int,WorldPlayerInfo> *const)(player_uid + 152),
                                                                               (const std::unordered_map<unsigned int,WorldPlayerInfo>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::end((std::unordered_map<unsigned int,WorldPlayerInfo> *const)(player_uid + 152))._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,WorldPlayerInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerInfo>,false> *)(v3 + 64),
         &__y) )
  {
    std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false> *const)(v3 + 64));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, &__y);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  }
  else
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 475: range 0000000017FAAFD2-0000000017FAB179
void __cdecl World::notifyWorldPropData(World *const this, proto::PropValue *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  proto::PropValue *v5; // r14
  proto::PropValue *v6; // rax
  google::protobuf::Map<unsigned int,proto::PropValue>::key_type key; // [rsp+14h] [rbp-DCh] BYREF
  google::protobuf::Map<unsigned int,proto::PropValue> *prop_map; // [rsp+18h] [rbp-D8h]
  char v9[208]; // [rsp+20h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 10 notify:476";
  *(_QWORD *)(v2 + 16) = World::notifyWorldPropData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  proto::WorldDataNotify::WorldDataNotify((proto::WorldDataNotify *const)(v2 + 32));
  prop_map = proto::WorldDataNotify::mutable_world_prop_map((proto::WorldDataNotify *const)(v2 + 32));
  v5 = std::move<proto::PropValue &>(value);
  key = proto::PropValue::type(value);
  v6 = google::protobuf::Map<unsigned int,proto::PropValue>::operator[](prop_map, &key);
  proto::PropValue::operator=(v6, v5);
  World::notifyAllPlayer<proto::WorldDataNotify>(this, (const proto::WorldDataNotify *)(v2 + 32), 0);
  proto::WorldDataNotify::~WorldDataNotify((proto::WorldDataNotify *const)(v2 + 32));
  if ( v9 == (char *)v2 )
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
};

// Line 484: range 0000000017FAB1CC-0000000017FAB3CF
int32_t __cdecl World::notifyPreEnterMpPlayer(
        World *const this,
        uint32_t uid,
        const std::string *nickname,
        proto::PlayerPreEnterMpNotify::State state)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  int32_t result; // eax
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 40 10 notify:490";
  *(_QWORD *)(v4 + 16) = World::notifyPreEnterMpPlayer;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  if ( World::getPlayerCount(this) )
  {
    proto::PlayerPreEnterMpNotify::PlayerPreEnterMpNotify((proto::PlayerPreEnterMpNotify *const)(v4 + 48));
    proto::PlayerPreEnterMpNotify::set_uid((proto::PlayerPreEnterMpNotify *const)(v4 + 48), uid);
    proto::PlayerPreEnterMpNotify::set_state((proto::PlayerPreEnterMpNotify *const)(v4 + 48), state);
    proto::PlayerPreEnterMpNotify::set_nickname((proto::PlayerPreEnterMpNotify *const)(v4 + 48), nickname);
    std::function<ForeachPolicy ()(Player &)>::function<World::notifyPreEnterMpPlayer(unsigned int,std::string const&,proto::PlayerPreEnterMpNotify_State)::{lambda(Player &)#1},void,void>(
      &p_func,
      (World::notifyPreEnterMpPlayer::<lambda(Player&)>)(v4 + 48));
    World::foreachPlayer(this, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    proto::PlayerPreEnterMpNotify::~PlayerPreEnterMpNotify((proto::PlayerPreEnterMpNotify *const)(v4 + 48));
  }
  result = 0;
  if ( v11 == (char *)v4 )
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

// Line 495: range 0000000017FAB17A-0000000017FAB1CA
ForeachPolicy __cdecl World::notifyPreEnterMpPlayer(unsigned int,std::string const&,proto::PlayerPreEnterMpNotify_State)::{lambda(Player &)#1}::operator()(
        const World::notifyPreEnterMpPlayer::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 504: range 0000000017FAB3D0-0000000017FAB61D
int32_t __cdecl World::saveAllGroup(World *const this, bool is_force)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  Scene *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int val; // [rsp+1Ch] [rbp-64h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v14; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-30h] BYREF

  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v14);
    scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v14);
    if ( std::operator==<Scene>(scene_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/world.cpp",
        "saveAllGroup",
        509);
      v2 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v17,
             (const char (*)[27])"scene_ptr is nullptr, uid:");
      val = World::getOwnerUid(this);
      v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
      v4 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v3, (const char (*)[11])" scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, scene_id);
      common::milog::MiLogStream::~MiLogStream(&v17);
      return -1;
    }
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
    if ( Scene::saveAllGroup(v6, is_force) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/world.cpp",
        "saveAllGroup",
        514);
      v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v17,
             (const char (*)[37])"scene_ptr->saveAllGroup failed, uid:");
      val = World::getOwnerUid(this);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, scene_id);
      common::milog::MiLogStream::~MiLogStream(&v17);
      return -1;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 522: range 0000000017FAB61E-0000000017FAB86B
int32_t __cdecl World::getActiveGroupCount(World *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Scene *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  int32_t total_group_count; // [rsp+1Ch] [rbp-B4h]
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v13; // [rsp+38h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+40h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+48h] [rbp-88h]
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-80h] BYREF
  char v17[96]; // [rsp+70h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 15 group_count:526";
  *(_QWORD *)(v1 + 16) = World::getActiveGroupCount;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  total_group_count = 0;
  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v13);
    scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v13);
    v4 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
    *(_DWORD *)(v1 + 32) = Scene::getActiveGroupCount(v4);
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/world.cpp",
      "getActiveGroupCount",
      527);
    v5 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v16, (const char (*)[10])"scene_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, scene_id);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])" group_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v16);
    total_group_count += *(_DWORD *)(v1 + 32);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
  result = total_group_count;
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

// Line 534: range 0000000017FAB86C-0000000017FAB97E
void __cdecl World::checkSilentUpdate(World *const this)
{
  Scene *v1; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v3; // rdx
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<Scene> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(__in);
    scene_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(__in);
    if ( std::operator!=<Scene>(0LL, scene_ptr) )
    {
      v1 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v1);
      if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
        BlockGroupComp = __asan_report_load8();
      v3 = *(_QWORD *)BlockGroupComp + 200LL;
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        BlockGroupComp = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64))v3)(BlockGroupComp);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
};

// Line 545: range 0000000017FAB980-0000000017FABA84
bool __cdecl World::isForbidOtherPlayerEnter(World *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<Scene> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(__in);
    scene_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(__in);
    v1 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
      v1 = __asan_report_load8();
    v2 = *(_QWORD *)v1 + 424LL;
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v1 = __asan_report_load8();
    if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v2)(v1) )
      return 1;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 557: range 0000000017FABBFE-0000000017FAC240
__int64 __fastcall World::addChatChannel(World *const this, uint32_t channel_id, const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  const std::set<unsigned int> *v7; // r8
  common::milog::MiLogStream *v8; // rbx
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t *v11; // rdx
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __int64 result; // rax
  uint32_t now; // [rsp+28h] [rbp-168h]
  uint32_t uid; // [rsp+2Ch] [rbp-164h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-160h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-158h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-150h]
  proto::ChatInfo_SystemHint *system_hint; // [rsp+48h] [rbp-148h]
  std::shared_ptr<Player> __a; // [rsp+50h] [rbp-140h] BYREF
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-130h] BYREF
  char v26[272]; // [rsp+80h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 channel_id:556 48 40 10 notify:573 128 56 13 chat_info:595";
  *(_QWORD *)(v3 + 16) = World::addChatChannel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 32) = channel_id;
  if ( !proto::ChatChannel_IsValid(*(_DWORD *)(v3 + 32)) )
  {
    v6 = -1;
  }
  else if ( std::set<unsigned int>::size(uid_set) <= 4 )
  {
    v9 = std::unordered_map<unsigned int,std::set<unsigned int>>::emplace<unsigned int &,std::set<unsigned int> const&>(
           &this->chat_channel_uid_map_,
           (unsigned int *)(v3 + 32),
           uid_set,
           (unsigned int *)&this->chat_channel_uid_map_,
           v7);
    if ( !v9.second )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/world.cpp",
        "addChatChannel",
        569);
      v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v25,
              (const char (*)[31])"duplicate channel, channel_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v25);
      v6 = -1;
    }
    else
    {
      proto::ChatChannelUpdateNotify::ChatChannelUpdateNotify((proto::ChatChannelUpdateNotify *const)(v3 + 48));
      proto::ChatChannelUpdateNotify::set_channel_id(
        (proto::ChatChannelUpdateNotify *const)(v3 + 48),
        *(_DWORD *)(v3 + 32));
      proto::ChatChannelUpdateNotify::set_is_create((proto::ChatChannelUpdateNotify *const)(v3 + 48), 1);
      std::function<ForeachPolicy ()(Player &)>::function<World::addChatChannel(unsigned int,std::set<unsigned int> const&)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v25,
        (World::addChatChannel::<lambda(Player&)>)__PAIR128__((unsigned __int64)uid_set, v3 + 48));
      World::foreachPlayer(this, (std::function<ForeachPolicy(Player&)> *)&v25);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v25);
      now = common::tools::TimeUtils::getNow();
      __for_range = uid_set;
      __for_begin._M_node = std::set<unsigned int>::begin(uid_set)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(uid_set)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v11 = (uint32_t *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        uid = *v11;
        World::findPlayerPtr((World *const)&__a, (__int64)this, *v11);
        v12 = std::operator!=<Player>(&__a, 0LL);
        std::shared_ptr<Player>::~shared_ptr(&__a);
        if ( v12 )
        {
          proto::ChatInfo::ChatInfo((proto::ChatInfo *const)(v3 + 128));
          proto::ChatInfo::set_time((proto::ChatInfo *const)(v3 + 128), now);
          proto::ChatInfo::set_uid((proto::ChatInfo *const)(v3 + 128), uid);
          system_hint = proto::ChatInfo::mutable_system_hint((proto::ChatInfo *const)(v3 + 128));
          proto::ChatInfo_SystemHint::set_type(system_hint, 1u);
          World::addChatInfo(this, *(_DWORD *)(v3 + 32), (const proto::ChatInfo *)(v3 + 128));
          proto::ChatInfo::~ChatInfo((proto::ChatInfo *const)(v3 + 128));
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/world.cpp",
        "addChatChannel",
        604);
      v13 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v25,
              (const char (*)[38])"ChatChannel set finished, channel_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
      v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])", uid_set:");
      common::milog::MiLogStream::operator<<<unsigned int>(v15, uid_set);
      common::milog::MiLogStream::~MiLogStream(&v25);
      v6 = 0;
      proto::ChatChannelUpdateNotify::~ChatChannelUpdateNotify((proto::ChatChannelUpdateNotify *const)(v3 + 48));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/world.cpp",
      "addChatChannel",
      564);
    v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v25,
           (const char (*)[38])"channel player number too large, num:");
    __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::set<unsigned int>::size(uid_set);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, (const unsigned __int64 *)&__for_end);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v6 = -1;
  }
  result = v6;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
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

// Line 577: range 0000000017FABA86-0000000017FABBFD
ForeachPolicy __cdecl World::addChatChannel(unsigned int,std::set<unsigned int> const&)::{lambda(Player &)#1}::operator()(
        const World::addChatChannel::<lambda(Player&)> *const __closure,
        Player *player)
{
  google::protobuf::uint32 v2; // eax
  PlayerSocialComp *SocialComp; // rbx
  uint32_t v4; // eax
  bool isChannelShield; // al
  unsigned int value; // [rsp+14h] [rbp-1Ch] BYREF
  proto::ChatChannelInfo *info; // [rsp+18h] [rbp-18h]

  value = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid_set >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(__closure->__uid_set, &value) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    info = proto::ChatChannelUpdateNotify::mutable_channel_info(__closure->__notify);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = proto::ChatChannelUpdateNotify::channel_id(__closure->__notify);
    proto::ChatChannelInfo::set_channel_id(info, v2);
    SocialComp = Player::getSocialComp(player);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = proto::ChatChannelUpdateNotify::channel_id(__closure->__notify);
    isChannelShield = PlayerSocialComp::isChannelShield(SocialComp, v4);
    proto::ChatChannelInfo::set_is_shield(info, isChannelShield);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, __closure->__notify);
  }
  return 0;
};

// Line 609: range 0000000017FAC242-0000000017FAC46A
__int64 __fastcall World::delChatChannel(World *const this, uint32_t channel_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-C0h] BYREF
  char v8[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 14 channel_id:608 48 40 10 notify:613";
  *(_QWORD *)(v2 + 16) = World::delChatChannel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 32) = channel_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>>,unsigned int>(
         &this->chat_channel_uid_map_,
         (const unsigned int *)(v2 + 32)) )
  {
    proto::ChatChannelUpdateNotify::ChatChannelUpdateNotify((proto::ChatChannelUpdateNotify *const)(v2 + 48));
    proto::ChatChannelUpdateNotify::set_channel_id(
      (proto::ChatChannelUpdateNotify *const)(v2 + 48),
      *(_DWORD *)(v2 + 32));
    World::notifyChatChannelPlayer<proto::ChatChannelUpdateNotify>(
      this,
      (const proto::ChatChannelUpdateNotify *)(v2 + 48),
      *(_DWORD *)(v2 + 32));
    std::unordered_map<unsigned int,std::set<unsigned int>>::erase(
      &this->chat_channel_uid_map_,
      (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 32));
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/world.cpp",
      "delChatChannel",
      618);
    v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v7,
           (const char (*)[38])"ChatChannel del finished, channel_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v7);
    proto::ChatChannelUpdateNotify::~ChatChannelUpdateNotify((proto::ChatChannelUpdateNotify *const)(v2 + 48));
  }
  result = 0LL;
  if ( v8 == (char *)v2 )
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

// Line 624: range 0000000017FAC46C-0000000017FAC94E
void __cdecl World::notifyEnterWorldChatChannel(World *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::uint32 Now; // eax
  uint32_t Uid; // eax
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  uint32_t *v8; // rdx
  unsigned int value; // [rsp+18h] [rbp-1B8h] BYREF
  uint32_t channel_id_0; // [rsp+1Ch] [rbp-1B4h]
  std::unordered_map<unsigned int,std::set<unsigned int>>::iterator __for_begin; // [rsp+20h] [rbp-1B0h] BYREF
  std::unordered_map<unsigned int,std::set<unsigned int>>::iterator __for_end; // [rsp+28h] [rbp-1A8h] BYREF
  proto::ChatInfo_SystemHint *system_hint; // [rsp+30h] [rbp-1A0h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range; // [rsp+38h] [rbp-198h]
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-190h]
  const std::pair<unsigned int const,std::set<unsigned int> > *v16; // [rsp+48h] [rbp-188h]
  std::tuple_element<0,const std::pair<unsigned int const,std::set<unsigned int> > >::type *channel_id; // [rsp+50h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *uid_set; // [rsp+58h] [rbp-178h]
  char v19[368]; // [rsp+60h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 24 15 channel_vec:633 112 56 13 chat_info:625 208 72 10 notify:646";
  *(_QWORD *)(v2 + 16) = World::notifyEnterWorldChatChannel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  proto::ChatInfo::ChatInfo((proto::ChatInfo *const)(v2 + 112));
  Now = common::tools::TimeUtils::getNow();
  proto::ChatInfo::set_time((proto::ChatInfo *const)(v2 + 112), Now);
  Uid = Player::getUid(player);
  proto::ChatInfo::set_uid((proto::ChatInfo *const)(v2 + 112), Uid);
  system_hint = proto::ChatInfo::mutable_system_hint((proto::ChatInfo *const)(v2 + 112));
  proto::ChatInfo_SystemHint::set_type(system_hint, 1u);
  World::addChatInfo(this, 0, (const proto::ChatInfo *)(v2 + 112));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 48));
  __for_range = &this->chat_channel_uid_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(&this->chat_channel_uid_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(&this->chat_channel_uid_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*(&__for_begin);
    channel_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v16);
    uid_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v16);
    value = Player::getUid(player);
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 48), channel_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++(&__for_begin);
  }
  if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 48)) )
  {
    proto::ChatChannelDataNotify::ChatChannelDataNotify((proto::ChatChannelDataNotify *const)(v2 + 208));
    v7 = proto::ChatChannelDataNotify::mutable_channel_list((proto::ChatChannelDataNotify *const)(v2 + 208));
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
      (const std::vector<unsigned int> *)(v2 + 48),
      v7);
    Player::sendProto(player, (const google::protobuf::Message *)(v2 + 208));
    __for_range_0 = (std::vector<unsigned int> *)(v2 + 48);
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 48))._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      channel_id_0 = *v8;
      World::addChatInfo(this, channel_id_0, (const proto::ChatInfo *)(v2 + 112));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    }
    proto::ChatChannelDataNotify::~ChatChannelDataNotify((proto::ChatChannelDataNotify *const)(v2 + 208));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 48));
  proto::ChatInfo::~ChatInfo((proto::ChatInfo *const)(v2 + 112));
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 657: range 0000000017FAC950-0000000017FACC2F
void __cdecl World::notifyLeaveWorldChatChannel(World *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::uint32 Now; // eax
  uint32_t Uid; // eax
  unsigned int value; // [rsp+14h] [rbp-DCh] BYREF
  std::unordered_map<unsigned int,std::set<unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,std::set<unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  proto::ChatInfo_SystemHint *system_hint; // [rsp+28h] [rbp-C8h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int const,std::set<unsigned int> > *v12; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::set<unsigned int> > >::type *channel_id; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *uid_set; // [rsp+48h] [rbp-A8h]
  char v15[160]; // [rsp+50h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 13 chat_info:658";
  *(_QWORD *)(v2 + 16) = World::notifyLeaveWorldChatChannel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::ChatInfo::ChatInfo((proto::ChatInfo *const)(v2 + 32));
  Now = common::tools::TimeUtils::getNow();
  proto::ChatInfo::set_time((proto::ChatInfo *const)(v2 + 32), Now);
  Uid = Player::getUid(player);
  proto::ChatInfo::set_uid((proto::ChatInfo *const)(v2 + 32), Uid);
  system_hint = proto::ChatInfo::mutable_system_hint((proto::ChatInfo *const)(v2 + 32));
  proto::ChatInfo_SystemHint::set_type(system_hint, 2u);
  World::addChatInfo(this, 0, (const proto::ChatInfo *)(v2 + 32));
  __for_range = &this->chat_channel_uid_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(&this->chat_channel_uid_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(&this->chat_channel_uid_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*(&__for_begin);
    channel_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v12);
    uid_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v12);
    value = Player::getUid(player);
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
    {
      if ( *(_BYTE *)(((unsigned __int64)channel_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)channel_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)channel_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      World::addChatInfo(this, *channel_id, (const proto::ChatInfo *)(v2 + 32));
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++(&__for_begin);
  }
  proto::ChatInfo::~ChatInfo((proto::ChatInfo *const)(v2 + 32));
  if ( v15 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 676: range 0000000017FACC30-0000000017FACD0A
std::set<unsigned int> *__cdecl World::getWorldPlayerUidSet(std::set<unsigned int> *retstr, World *const this)
{
  std::unordered_map<unsigned int,WorldPlayerInfo>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,WorldPlayerInfo>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,WorldPlayerInfo> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,WorldPlayerInfo> *v6; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,WorldPlayerInfo> >::type *uid; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,WorldPlayerInfo> >::type *info; // [rsp+38h] [rbp-18h]

  std::set<unsigned int>::set(retstr);
  __for_range = &this->player_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::begin(&this->player_info_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::end(&this->player_info_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,WorldPlayerInfo>,false>(&__for_begin, &__for_end) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,WorldPlayerInfo>(v6);
    info = (std::tuple_element<1,const std::pair<unsigned int const,WorldPlayerInfo> >::type *)std::get<1ul,unsigned int const,WorldPlayerInfo>(v6);
    std::set<unsigned int>::insert(retstr, uid);
    std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 687: range 0000000017FACD0C-0000000017FAD21D
void __cdecl World::notifySubChatChannel(World *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerSocialComp *SocialComp; // rcx
  bool isChannelShield; // al
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  proto::ChatChannelInfo *M_current; // r14
  google::protobuf::RepeatedPtrField<proto::ChatChannelInfo> *v9; // rax
  unsigned int value; // [rsp+1Ch] [rbp-1E4h] BYREF
  std::unordered_map<unsigned int,std::set<unsigned int>>::iterator __for_begin; // [rsp+20h] [rbp-1E0h] BYREF
  std::unordered_map<unsigned int,std::set<unsigned int>>::iterator __for_end; // [rsp+28h] [rbp-1D8h] BYREF
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range; // [rsp+30h] [rbp-1D0h]
  const std::pair<unsigned int const,std::set<unsigned int> > *v14; // [rsp+38h] [rbp-1C8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::set<unsigned int> > >::type *channel_id; // [rsp+40h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *uid_set; // [rsp+48h] [rbp-1B8h]
  google::protobuf::RepeatedPtrField<proto::ChatChannelInfo> other; // [rsp+50h] [rbp-1B0h] BYREF
  char v18[400]; // [rsp+70h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 24 15 channel_vec:688 112 24 20 channel_info_vec:689 176 32 16 channel_info:695 240 72 10 notify:703";
  *(_QWORD *)(v2 + 16) = World::notifySubChatChannel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862729] = -218103808;
  v4[536862730] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 48));
  std::vector<proto::ChatChannelInfo>::vector((std::vector<proto::ChatChannelInfo> *const)(v2 + 112));
  __for_range = &this->chat_channel_uid_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(&this->chat_channel_uid_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(&this->chat_channel_uid_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*(&__for_begin);
    channel_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v14);
    uid_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v14);
    value = Player::getUid(player);
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(uid_set, &value) )
    {
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 48), channel_id);
      proto::ChatChannelInfo::ChatChannelInfo((proto::ChatChannelInfo *const)(v2 + 176));
      if ( *(_BYTE *)(((unsigned __int64)channel_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)channel_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)channel_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::ChatChannelInfo::set_channel_id((proto::ChatChannelInfo *const)(v2 + 176), *channel_id);
      SocialComp = Player::getSocialComp(player);
      if ( *(_BYTE *)(((unsigned __int64)channel_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)channel_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)channel_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      isChannelShield = PlayerSocialComp::isChannelShield(SocialComp, *channel_id);
      proto::ChatChannelInfo::set_is_shield((proto::ChatChannelInfo *const)(v2 + 176), isChannelShield);
      std::vector<proto::ChatChannelInfo>::emplace_back<proto::ChatChannelInfo&>(
        (std::vector<proto::ChatChannelInfo> *const)(v2 + 112),
        (proto::ChatChannelInfo *)(v2 + 176),
        (proto::ChatChannelInfo *)(v2 + 176));
      proto::ChatChannelInfo::~ChatChannelInfo((proto::ChatChannelInfo *const)(v2 + 176));
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++(&__for_begin);
  }
  proto::ChatChannelDataNotify::ChatChannelDataNotify((proto::ChatChannelDataNotify *const)(v2 + 240));
  v7 = proto::ChatChannelDataNotify::mutable_channel_list((proto::ChatChannelDataNotify *const)(v2 + 240));
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
    (const std::vector<unsigned int> *)(v2 + 48),
    v7);
  M_current = std::vector<proto::ChatChannelInfo>::begin((std::vector<proto::ChatChannelInfo> *const)(v2 + 112))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)std::vector<proto::ChatChannelInfo>::end((std::vector<proto::ChatChannelInfo> *const)(v2 + 112))._M_current;
  google::protobuf::RepeatedPtrField<proto::ChatChannelInfo>::RepeatedPtrField<__gnu_cxx::__normal_iterator<proto::ChatChannelInfo*,std::vector<proto::ChatChannelInfo>>>(
    &other,
    (__gnu_cxx::__normal_iterator<proto::ChatChannelInfo*,std::vector<proto::ChatChannelInfo> >)M_current,
    (const __gnu_cxx::__normal_iterator<proto::ChatChannelInfo*,std::vector<proto::ChatChannelInfo> > *)&__for_end);
  v9 = proto::ChatChannelDataNotify::mutable_channel_info_list((proto::ChatChannelDataNotify *const)(v2 + 240));
  google::protobuf::RepeatedPtrField<proto::ChatChannelInfo>::operator=(v9, &other);
  google::protobuf::RepeatedPtrField<proto::ChatChannelInfo>::~RepeatedPtrField(&other);
  Player::sendProto(player, (const google::protobuf::Message *)(v2 + 240));
  proto::ChatChannelDataNotify::~ChatChannelDataNotify((proto::ChatChannelDataNotify *const)(v2 + 240));
  std::vector<proto::ChatChannelInfo>::~vector((std::vector<proto::ChatChannelInfo> *const)(v2 + 112));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 48));
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
};
