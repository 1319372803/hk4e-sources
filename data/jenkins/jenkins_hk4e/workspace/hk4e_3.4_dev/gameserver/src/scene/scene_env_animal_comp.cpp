// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_env_animal_comp.cpp

// Line 32: range 0000000015C7468A-0000000015C74A73
int32_t __cdecl SceneEnvAnimalComp::fromBin(SceneEnvAnimalComp *const this, const proto::SceneBin *scene_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  google::protobuf::uint32 refresh_time; // ecx
  char v6; // dl
  google::protobuf::Map<unsigned int,proto::EnvZoneInfoBin>::const_reference v7; // rsi
  bool v8; // dl
  google::protobuf::uint32 v9; // ecx
  char v10; // dl
  bool v11; // dl
  int32_t v12; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  time_t Now; // r15
  Player *v15; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t LastLoginTime; // eax
  int32_t result; // eax
  uint32_t time_offset; // [rsp+2Ch] [rbp-104h]
  const proto::SceneEnvAnimalCompBin *comp_data; // [rsp+30h] [rbp-100h]
  const google::protobuf::Map<unsigned int,proto::EnvZoneInfoBin> *__for_range; // [rsp+38h] [rbp-F8h]
  google::protobuf::Map<unsigned int,proto::EnvZoneInfoBin>::const_reference p_index; // [rsp+40h] [rbp-F0h]
  EnvZoneInfo *zone_info; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v24; // [rsp+50h] [rbp-E0h] BYREF
  google::protobuf::Map<unsigned int,proto::EnvZoneInfoBin>::const_iterator __for_begin; // [rsp+60h] [rbp-D0h] BYREF
  google::protobuf::Map<unsigned int,proto::EnvZoneInfoBin>::const_iterator __for_end; // [rsp+80h] [rbp-B0h] BYREF
  common::milog::MiLogStream v27; // [rsp+A0h] [rbp-90h] BYREF
  char v28[112]; // [rsp+C0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 player_ptr:42";
  *(_QWORD *)(v2 + 16) = SceneEnvAnimalComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  comp_data = proto::SceneBin::env_animal_bin(scene_bin);
  std::unordered_map<unsigned int,EnvZoneInfo>::clear(&this->env_zone_info_map_);
  __for_range = proto::SceneEnvAnimalCompBin::zone_info_map(comp_data);
  google::protobuf::Map<unsigned int,proto::EnvZoneInfoBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::EnvZoneInfoBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_index = google::protobuf::Map<unsigned int,proto::EnvZoneInfoBin>::const_iterator::operator*(&__for_begin);
    v7 = p_index;
    zone_info = std::unordered_map<unsigned int,EnvZoneInfo>::operator[](&this->env_zone_info_map_, &p_index->first);
    refresh_time = proto::EnvZoneInfoBin::last_refresh_time(&p_index->second);
    v6 = *(_BYTE *)(((unsigned __int64)zone_info >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v6 != 0;
    v8 = v6 != 0 && (char)(((unsigned __int8)zone_info & 7) + 3) >= v6;
    if ( v8 )
      __asan_report_store4(zone_info, v7, v8);
    zone_info->last_refresh_time = refresh_time;
    v9 = proto::EnvZoneInfoBin::animal_num(&p_index->second);
    v10 = *(_BYTE *)(((unsigned __int64)&zone_info->animal_num >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v10 != 0;
    v11 = v10 != 0 && (char)((((_BYTE)zone_info + 4) & 7) + 3) >= v10;
    if ( v11 )
      __asan_report_store4(&zone_info->animal_num, v7, v11);
    zone_info->animal_num = v9;
    google::protobuf::Map<unsigned int,proto::EnvZoneInfoBin>::const_iterator::operator++(&__for_begin);
  }
  SceneCompBase::getScene(this);
  Scene::getOwnPlayer((const Scene *const)(v2 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_env_animal_comp.cpp",
      "fromBin",
      45);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v27,
      (const char (*)[28])"getOwnPlayer return nullptr");
    common::milog::MiLogStream::~MiLogStream(&v27);
    v12 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v13->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v24);
    Now = common::tools::TimeUtils::getNow();
    v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BasicComp = Player::getBasicComp(v15);
    LastLoginTime = PlayerBasicComp::getLastLoginTime(BasicComp);
    if ( !common::tools::TimeUtils::isSameDay(LastLoginTime, Now, time_offset) )
      std::unordered_map<unsigned int,EnvZoneInfo>::clear(&this->env_zone_info_map_);
    v12 = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v12;
  if ( v28 == (char *)v2 )
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

// Line 59: range 0000000015C74A74-0000000015C74BE4
int32_t __cdecl SceneEnvAnimalComp::toBin(const SceneEnvAnimalComp *const this, proto::SceneBin *scene_bin)
{
  std::unordered_map<unsigned int,EnvZoneInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,EnvZoneInfo>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  proto::SceneEnvAnimalCompBin *comp_data; // [rsp+28h] [rbp-38h]
  google::protobuf::Map<unsigned int,proto::EnvZoneInfoBin> *zone_info_map; // [rsp+30h] [rbp-30h]
  const std::unordered_map<unsigned int,EnvZoneInfo> *__for_range; // [rsp+38h] [rbp-28h]
  const std::pair<unsigned int const,EnvZoneInfo> *v8; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,EnvZoneInfo> >::type *index; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,EnvZoneInfo> >::type *zone_info; // [rsp+50h] [rbp-10h]
  proto::EnvZoneInfoBin *zone_info_bin; // [rsp+58h] [rbp-8h]

  comp_data = proto::SceneBin::mutable_env_animal_bin(scene_bin);
  zone_info_map = proto::SceneEnvAnimalCompBin::mutable_zone_info_map(comp_data);
  __for_range = &this->env_zone_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,EnvZoneInfo>::begin(&this->env_zone_info_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,EnvZoneInfo>::end(&this->env_zone_info_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,EnvZoneInfo>,false>(&__for_begin, &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,EnvZoneInfo>,false,false>::operator*(&__for_begin);
    index = std::get<0ul,unsigned int const,EnvZoneInfo>(v8);
    zone_info = (std::tuple_element<1,const std::pair<unsigned int const,EnvZoneInfo> >::type *)std::get<1ul,unsigned int const,EnvZoneInfo>(v8);
    zone_info_bin = google::protobuf::Map<unsigned int,proto::EnvZoneInfoBin>::operator[](zone_info_map, index);
    if ( *(_BYTE *)(((unsigned __int64)zone_info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)zone_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)zone_info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::EnvZoneInfoBin::set_last_refresh_time(zone_info_bin, zone_info->last_refresh_time);
    if ( *(_BYTE *)(((unsigned __int64)&zone_info->animal_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)zone_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&zone_info->animal_num >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::EnvZoneInfoBin::set_animal_num(zone_info_bin, zone_info->animal_num);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,EnvZoneInfo>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 72: range 0000000015C74BE6-0000000015C74E05
void __cdecl SceneEnvAnimalComp::onTimer(SceneEnvAnimalComp *const this, uint32_t now)
{
  Scene *Scene; // rax
  GameserverService *v3; // rsi
  uint32_t v4; // ecx
  char v5; // dl
  bool v6; // dl
  uint32_t env_animal_refresh_interval; // [rsp+18h] [rbp-58h]
  uint32_t env_animal_refresh_max_radius; // [rsp+1Ch] [rbp-54h]
  uint32_t env_animal_refresh_min_radius; // [rsp+24h] [rbp-4Ch]
  ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v12; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-30h] BYREF

  Scene = SceneCompBase::getScene(this);
  if ( Scene::getPlayerCount(Scene) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !this->next_refresh_time_ || now >= this->next_refresh_time_ )
    {
      v3 = ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v12);
      const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.const_value_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v12);
      env_animal_refresh_interval = ConstValueExcelConfigMgr::getEnvAnimalRefreshInterval(const_value_config_mgr);
      env_animal_refresh_max_radius = ConstValueExcelConfigMgr::getEnvAnimalRefreshMaxRadius(const_value_config_mgr);
      ConstValueExcelConfigMgr::getEnvAnimalRefreshFarAwayTime(const_value_config_mgr);
      env_animal_refresh_min_radius = ConstValueExcelConfigMgr::getEnvAnimalRefreshMinRadius(const_value_config_mgr);
      if ( env_animal_refresh_interval )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->refresh_interval_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->refresh_interval_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->refresh_interval_, v3, (_BYTE)this + 80);
        }
        this->refresh_interval_ = env_animal_refresh_interval;
        v4 = this->refresh_interval_ + now;
        v5 = *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000);
        LOBYTE(v3) = v5 != 0;
        v6 = v5 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v5;
        if ( v6 )
          __asan_report_store4(&this->next_refresh_time_, v3, v6);
        this->next_refresh_time_ = v4;
        SceneEnvAnimalComp::refreshEnvAnimal(this, now, env_animal_refresh_max_radius, env_animal_refresh_min_radius);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_env_animal_comp.cpp",
          "onTimer",
          88);
        common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
          &v13,
          (const char (*)[45])"CONST_VALUE_ENV_ANIMAL_REFRESH interval is 0");
        common::milog::MiLogStream::~MiLogStream(&v13);
      }
    }
  }
};

// Line 99: range 0000000015C752DE-0000000015C75DD7
void __cdecl SceneEnvAnimalComp::refreshEnvAnimal(
        SceneEnvAnimalComp *const this,
        uint32_t now,
        uint32_t refresh_max_radius,
        uint32_t refresh_min_radius)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::vector<unsigned int>::size_type v10; // rax
  std::__shared_ptr_access<MonsterEnvAnimalComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  char v12; // al
  int v13; // r14d
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  size_t v15; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  const Vector3 *Position; // rax
  unsigned __int64 v18; // rax
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::size_type v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  size_t v22; // rax
  const std::vector<std::shared_ptr<Avatar>> *v23; // rax
  std::vector<unsigned int>::reference v24; // rdx
  common::milog::MiLogStream *v26; // r14
  const unsigned int *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::vector<std::shared_ptr<Avatar>> *v29; // rax
  AvatarPtr *v30; // rsi
  Scene *Scene; // [rsp+10h] [rbp-210h]
  std::allocator<unsigned int> __a; // [rsp+3Bh] [rbp-1E5h] BYREF
  std::vector<unsigned int>::value_type __value; // [rsp+3Ch] [rbp-1E4h] BYREF
  uint32_t group_max_animal; // [rsp+40h] [rbp-1E0h]
  uint32_t max_count_in_scene; // [rsp+44h] [rbp-1DCh]
  std::vector<std::shared_ptr<Avatar>>::iterator __for_begin; // [rsp+48h] [rbp-1D8h] BYREF
  std::vector<std::shared_ptr<Avatar>>::iterator __for_end; // [rsp+50h] [rbp-1D0h] BYREF
  size_t idx; // [rsp+58h] [rbp-1C8h]
  size_t idx_0; // [rsp+60h] [rbp-1C0h]
  size_t size; // [rsp+68h] [rbp-1B8h]
  std::size_t rand; // [rsp+70h] [rbp-1B0h]
  const Vector3 *animal_pos; // [rsp+78h] [rbp-1A8h]
  std::vector<std::shared_ptr<Avatar>> *__for_range; // [rsp+80h] [rbp-1A0h]
  const std::shared_ptr<Avatar> *avatar_ptr; // [rsp+88h] [rbp-198h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+90h] [rbp-190h] BYREF
  char v48[368]; // [rsp+B0h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 22 group_max_distance:105 64 8 8 iter:138 96 16 14 animal_ptr:140 128 16 15 monster_ptr:1"
                        "46 160 16 31 monster_env_animal_comp_ptr:149 192 24 13 group_vec:110 256 24 18 animal_num_vec:137";
  *(_QWORD *)(v4 + 16) = SceneEnvAnimalComp::refreshEnvAnimal;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862728] = -218103808;
  v6[536862729] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_enable_refresh_env_animal_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_refresh_env_animal_);
  if ( this->is_enable_refresh_env_animal_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 160));
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    *(_DWORD *)(v4 + 48) = ConstValueExcelConfigMgr::getEnvAnimalGroupMaxDistance(&v7->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 160));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 160));
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    group_max_animal = ConstValueExcelConfigMgr::getEnvAnimalGroupMaxAnimal(&v8->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 160));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 160));
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    max_count_in_scene = ConstValueExcelConfigMgr::getEnvAnimalMaxCountInScene(&v9->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 160));
    std::vector<std::vector<std::shared_ptr<Avatar>>>::vector((std::vector<std::vector<std::shared_ptr<Avatar>>> *const)(v4 + 192));
    Scene = SceneCompBase::getScene(this);
    std::function<ForeachPolicy ()(Player &)>::function<SceneEnvAnimalComp::refreshEnvAnimal(unsigned int,unsigned int,unsigned int)::{lambda(Player &)#1},void,void>(
      &p_func,
      (SceneEnvAnimalComp::refreshEnvAnimal::<lambda(Player&)>)__PAIR128__(v4 + 48, v4 + 192));
    Scene::foreachPlayer(Scene, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    std::allocator<unsigned int>::allocator(&__a);
    __value = 0;
    v10 = std::vector<std::vector<std::shared_ptr<Avatar>>>::size((const std::vector<std::vector<std::shared_ptr<Avatar>>> *const)(v4 + 192));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 256), v10, &__value, &__a);
    std::allocator<unsigned int>::~allocator(&__a);
    *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::begin(&this->env_animal_map_);
    while ( 1 )
    {
      __for_end._M_current = (std::shared_ptr<Avatar> *)std::unordered_map<unsigned int,std::weak_ptr<Entity>>::end(&this->env_animal_map_)._M_cur;
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::weak_ptr<Entity>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false> *)(v4 + 64),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false> *)&__for_end) )
        break;
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false> *const)(v4 + 64));
      std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v4 + 96));
      if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v4 + 96), 0LL) )
      {
        *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::erase(
                                                                                           &this->env_animal_map_,
                                                                                           *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v4 + 64));
      }
      else
      {
        std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v4 + 128));
        if ( !std::operator!=<Monster>(0LL, (const std::shared_ptr<Monster> *)(v4 + 128))
          || ((std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128)),
               EcsBase<Monster,MonsterCompBase,4u>::findComp<MonsterEnvAnimalComp>((const EcsBase<Monster,MonsterCompBase,4> *const)(v4 + 160)),
               !std::operator!=<MonsterEnvAnimalComp>(0LL, (const std::shared_ptr<MonsterEnvAnimalComp> *)(v4 + 160)))
           || (v11 = std::__shared_ptr_access<MonsterEnvAnimalComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterEnvAnimalComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160)),
               !MonsterEnvAnimalComp::checkAndDisappearOnTime(v11, now))
            ? (v12 = 0)
            : (v12 = 1),
              !v12
            ? (v13 = 1)
            : (*(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::erase(
                                                                                                  &this->env_animal_map_,
                                                                                                  *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v4 + 64)),
               v13 = 0),
              std::shared_ptr<MonsterEnvAnimalComp>::~shared_ptr((std::shared_ptr<MonsterEnvAnimalComp> *const)(v4 + 160)),
              v13 == 1) )
        {
          v14 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          animal_pos = Entity::getPosition(v14);
          for ( idx = 0LL; ; ++idx )
          {
            v15 = std::vector<std::vector<std::shared_ptr<Avatar>>>::size((const std::vector<std::vector<std::shared_ptr<Avatar>>> *const)(v4 + 192));
            if ( idx >= v15 )
              break;
            __for_range = std::vector<std::vector<std::shared_ptr<Avatar>>>::operator[](
                            (std::vector<std::vector<std::shared_ptr<Avatar>>> *const)(v4 + 192),
                            idx);
            __for_begin._M_current = std::vector<std::shared_ptr<Avatar>>::begin(__for_range)._M_current;
            __for_end._M_current = std::vector<std::shared_ptr<Avatar>>::end(__for_range)._M_current;
            while ( __gnu_cxx::operator!=<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>(
                      &__for_begin,
                      &__for_end) )
            {
              avatar_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>::operator*(&__for_begin);
              v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)avatar_ptr);
              Position = Entity::getPosition((const Entity *const)v16);
              if ( (float)(int)refresh_max_radius > getDistance(animal_pos, Position) )
              {
                v18 = (unsigned __int64)std::vector<unsigned int>::operator[](
                                          (std::vector<unsigned int> *const)(v4 + 256),
                                          idx);
                if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0
                  && (char)((v18 & 7) + 3) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
                {
                  v18 = __asan_report_load4();
                }
                ++*(_DWORD *)v18;
                break;
              }
              __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>::operator++(&__for_begin);
            }
          }
          std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false> *const)(v4 + 64));
        }
        std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v4 + 128));
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v4 + 96));
    }
    v19 = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::size(&this->env_animal_map_);
    if ( v19 <= max_count_in_scene )
    {
      for ( idx_0 = 0LL; ; ++idx_0 )
      {
        v22 = std::vector<std::vector<std::shared_ptr<Avatar>>>::size((const std::vector<std::vector<std::shared_ptr<Avatar>>> *const)(v4 + 192));
        if ( idx_0 >= v22 )
          break;
        v23 = std::vector<std::vector<std::shared_ptr<Avatar>>>::operator[](
                (std::vector<std::vector<std::shared_ptr<Avatar>>> *const)(v4 + 192),
                idx_0);
        size = std::vector<std::shared_ptr<Avatar>>::size(v23);
        v24 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 256), idx_0);
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( group_max_animal <= *v24 || !size )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&p_func,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_env_animal_comp.cpp",
            "refreshEnvAnimal",
            188);
          v26 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  (common::milog::MiLogStream *const)&p_func,
                  (const char (*)[23])"current alive animal: ");
          v27 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 256), idx_0);
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, v27);
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v28, (const char (*)[21])off_259BDAC0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
        }
        else
        {
          rand = common::tools::RandomUtils::rand<unsigned int>(0, size - 1);
          if ( rand < size )
          {
            v29 = std::vector<std::vector<std::shared_ptr<Avatar>>>::operator[](
                    (std::vector<std::vector<std::shared_ptr<Avatar>>> *const)(v4 + 192),
                    idx_0);
            v30 = std::vector<std::shared_ptr<Avatar>>::operator[](v29, rand);
            SceneEnvAnimalComp::randomAnimal(this, v30, refresh_max_radius, refresh_min_radius);
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_env_animal_comp.cpp",
        "refreshEnvAnimal",
        175);
      v20 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              (common::milog::MiLogStream *const)&p_func,
              (const char (*)[23])"env_animal_map_ size: ");
      __for_end._M_current = (std::shared_ptr<Avatar> *)std::unordered_map<unsigned int,std::weak_ptr<Entity>>::size(&this->env_animal_map_);
      v21 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v20,
              (const unsigned __int64 *)&__for_end);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        v21,
        (const char (*)[35])" maybe create too many env animals");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 256));
    std::vector<std::vector<std::shared_ptr<Avatar>>>::~vector((std::vector<std::vector<std::shared_ptr<Avatar>>> *const)(v4 + 192));
  }
  if ( v48 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
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
};

// Line 111: range 0000000015C74E06-0000000015C752DD
ForeachPolicy __cdecl SceneEnvAnimalComp::refreshEnvAnimal(unsigned int,unsigned int,unsigned int)::{lambda(Player &)#1}::operator()(
        const SceneEnvAnimalComp::refreshEnvAnimal::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const Vector3 *Position; // rax
  float Distance; // xmm1_4
  uint32_t *group_max_distance; // rdx
  std::shared_ptr<Avatar> *i; // r14
  ForeachPolicy result; // eax
  std::allocator<std::shared_ptr<Avatar> > __a; // [rsp+27h] [rbp-109h] BYREF
  std::vector<std::vector<std::shared_ptr<Avatar>>>::iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  std::vector<std::vector<std::shared_ptr<Avatar>>>::iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  std::vector<std::shared_ptr<Avatar>>::iterator __for_begin_0; // [rsp+38h] [rbp-F8h] BYREF
  std::vector<std::shared_ptr<Avatar>>::iterator __for_end_0; // [rsp+40h] [rbp-F0h] BYREF
  const Vector3 *cur_pos; // [rsp+48h] [rbp-E8h]
  std::vector<std::vector<std::shared_ptr<Avatar>>> *__for_range; // [rsp+50h] [rbp-E0h]
  std::vector<std::shared_ptr<Avatar>> *other_avatar_vec; // [rsp+58h] [rbp-D8h]
  std::vector<std::shared_ptr<Avatar>> *__for_range_0; // [rsp+60h] [rbp-D0h]
  const std::shared_ptr<Avatar> *other_avatar_ptr; // [rsp+68h] [rbp-C8h]
  std::shared_ptr<Avatar> v22; // [rsp+70h] [rbp-C0h] BYREF
  char v23[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 18 cur_avatar_ptr:113 64 24 14 avatar_vec:131";
  *(_QWORD *)(v2 + 16) = SceneEnvAnimalComp::refreshEnvAnimal(unsigned int,unsigned int,unsigned int)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  Player::getCurAvatar((Player *const)(v2 + 32));
  if ( !std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    cur_pos = Entity::getPosition((const Entity *const)v5);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __for_range = __closure->__group_vec;
    __for_begin._M_current = std::vector<std::vector<std::shared_ptr<Avatar>>>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<std::vector<std::shared_ptr<Avatar>>>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<std::vector<std::shared_ptr<Avatar>> *,std::vector<std::vector<std::shared_ptr<Avatar>>>>(
              &__for_begin,
              &__for_end) )
    {
      other_avatar_vec = __gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<Avatar>> *,std::vector<std::vector<std::shared_ptr<Avatar>>>>::operator*(&__for_begin);
      __for_range_0 = other_avatar_vec;
      __for_begin_0._M_current = std::vector<std::shared_ptr<Avatar>>::begin(other_avatar_vec)._M_current;
      __for_end_0._M_current = std::vector<std::shared_ptr<Avatar>>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>(
                &__for_begin_0,
                &__for_end_0) )
      {
        other_avatar_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>::operator*(&__for_begin_0);
        v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)other_avatar_ptr);
        Position = Entity::getPosition((const Entity *const)v6);
        Distance = getDistance(cur_pos, Position);
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__group_max_distance >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        group_max_distance = __closure->__group_max_distance;
        if ( *(_BYTE *)(((unsigned __int64)group_max_distance >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)group_max_distance & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_max_distance >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( (float)(int)*group_max_distance > Distance )
        {
          std::vector<std::shared_ptr<Avatar>>::emplace_back<std::shared_ptr<Avatar>&>(
            other_avatar_vec,
            (std::shared_ptr<Avatar> *)(v2 + 32),
            (std::shared_ptr<Avatar> *)(v2 + 32));
          goto LABEL_25;
        }
        __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>::operator++(&__for_begin_0);
      }
      __gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<Avatar>> *,std::vector<std::vector<std::shared_ptr<Avatar>>>>::operator++(&__for_begin);
    }
    std::shared_ptr<Avatar>::shared_ptr(&v22, (const std::shared_ptr<Avatar> *)(v2 + 32));
    std::allocator<std::shared_ptr<Avatar>>::allocator(&__a);
    std::vector<std::shared_ptr<Avatar>>::vector(
      (std::vector<std::shared_ptr<Avatar>> *const)(v2 + 64),
      (std::initializer_list<std::shared_ptr<Avatar> >)__PAIR128__(1LL, &v22),
      &__a);
    std::allocator<std::shared_ptr<Avatar>>::~allocator(&__a);
    for ( i = (std::shared_ptr<Avatar> *)v23; i != &v22; std::shared_ptr<Avatar>::~shared_ptr(i) )
      --i;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::vector<std::vector<std::shared_ptr<Avatar>>>::emplace_back<std::vector<std::shared_ptr<Avatar>>&>(
      __closure->__group_vec,
      (std::vector<std::shared_ptr<Avatar>> *)(v2 + 64),
      (std::vector<std::shared_ptr<Avatar>> *)(v2 + 64));
    std::vector<std::shared_ptr<Avatar>>::~vector((std::vector<std::shared_ptr<Avatar>> *const)(v2 + 64));
  }
LABEL_25:
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
  if ( v23 == (char *)v2 )
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

// Line 202: range 0000000015C75DD8-0000000015C7665E
void __cdecl SceneEnvAnimalComp::randomAnimal(
        SceneEnvAnimalComp *const this,
        AvatarPtr *avatar_ptr,
        uint32_t refresh_max_radius,
        uint32_t refresh_min_radius)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  __m128i v10; // xmm0
  float v11; // xmm2_4
  float y; // xmm1_4
  Scene *Scene; // rax
  Scene *v14; // rax
  Player *v15; // rax
  PlayerSceneComp *SceneComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t v18; // edi
  bool v19; // dl
  bool v20; // dl
  uint32_t index; // ecx
  signed int rand_raduis; // [rsp+2Ch] [rbp-104h]
  float rand_angle; // [rsp+30h] [rbp-100h]
  float x; // [rsp+34h] [rbp-FCh]
  float z; // [rsp+38h] [rbp-F8h]
  uint32_t scene_id; // [rsp+3Ch] [rbp-F4h]
  uint32_t area_id; // [rsp+40h] [rbp-F0h]
  const Vector3 *avatar_pos; // [rsp+48h] [rbp-E8h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+50h] [rbp-E0h]
  const data::ConfigEnvironmentZone *zone_config_ptr; // [rsp+58h] [rbp-D8h]
  EnvZoneInfo *zone_info; // [rsp+60h] [rbp-D0h]
  __int64 now; // [rsp+68h] [rbp-C8h]
  std::shared_ptr<Config> v36; // [rsp+70h] [rbp-C0h] BYREF
  common::milog::MiLogStream v37; // [rsp+80h] [rbp-B0h] BYREF
  char v38[144]; // [rsp+A0h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 12 14 animal_pos:219 64 16 14 player_ptr:207";
  *(_QWORD *)(v4 + 16) = SceneEnvAnimalComp::randomAnimal;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -202178560;
  if ( !std::operator==<Avatar>(avatar_ptr, 0LL) )
  {
    v7 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)avatar_ptr);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    v8 = *(_QWORD *)v7 + 152LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v8)(v4 + 64, v7);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_env_animal_comp.cpp",
        "randomAnimal",
        210);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v37,
        (const char (*)[28])"avatar_ptr->getPlayer fails");
      common::milog::MiLogStream::~MiLogStream(&v37);
    }
    else
    {
      v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)avatar_ptr);
      avatar_pos = Entity::getPosition((const Entity *const)v9);
      rand_raduis = common::tools::RandomUtils::rand<unsigned int>(refresh_min_radius, refresh_max_radius);
      v10 = 0LL;
      *(float *)v10.m128i_i32 = common::tools::RandomUtils::rand<float>(0.0, 360.0);
      rand_angle = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
      x = (float)rand_raduis * std::cos(rand_angle);
      z = (float)rand_raduis * std::sin(rand_angle);
      if ( *(_BYTE *)(((unsigned __int64)&avatar_pos->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)avatar_pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_pos->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v11 = avatar_pos->z + z;
      if ( *(_BYTE *)(((unsigned __int64)&avatar_pos->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)avatar_pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_pos->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      y = avatar_pos->y;
      if ( *(_BYTE *)(((unsigned __int64)avatar_pos >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)avatar_pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_pos >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      Vector3::Vector3((Vector3 *const)(v4 + 32), avatar_pos->x + x, y, v11);
      Scene = SceneCompBase::getScene(this);
      scene_script_config_ptr = Scene::getScriptConfig(Scene);
      if ( scene_script_config_ptr )
      {
        if ( SceneScriptConfig::isPosValid(scene_script_config_ptr, (const Vector3 *)(v4 + 32)) )
        {
          v14 = SceneCompBase::getScene(this);
          scene_id = Scene::getSceneId(v14);
          v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          SceneComp = Player::getSceneComp(v15);
          area_id = PlayerSceneComp::getLevel1AreaId(SceneComp);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v36);
          v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36);
          zone_config_ptr = JsonConfigMgr::findConfigEnvironmentZone(
                              &v17->design_config.json_config_mgr,
                              scene_id,
                              area_id,
                              (const Vector3 *)(v4 + 32),
                              1u);
          std::shared_ptr<Config>::~shared_ptr(&v36);
          if ( zone_config_ptr )
          {
            zone_info = std::unordered_map<unsigned int,EnvZoneInfo>::operator[](
                          &this->env_zone_info_map_,
                          &zone_config_ptr->index);
            now = common::tools::TimeUtils::getNow();
            if ( *(_BYTE *)(((unsigned __int64)zone_info >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)zone_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)zone_info >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( !zone_info->last_refresh_time )
              goto LABEL_27;
            if ( *(_BYTE *)(((unsigned __int64)&zone_config_ptr->refresh_time >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&zone_config_ptr->refresh_time >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( zone_config_ptr->refresh_time && now > zone_info->last_refresh_time + zone_config_ptr->refresh_time )
            {
LABEL_27:
              v18 = now;
              v19 = *(_BYTE *)(((unsigned __int64)zone_info >> 3) + 0x7FFF8000) != 0
                 && (char)(((unsigned __int8)zone_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)zone_info >> 3)
                                                                             + 0x7FFF8000);
              if ( v19 )
              {
                v18 = (unsigned int)zone_info;
                __asan_report_store4(zone_info, ((unsigned __int8)zone_info & 7u) + 3, v19);
              }
              zone_info->last_refresh_time = v18;
              v20 = *(_BYTE *)(((unsigned __int64)&zone_info->animal_num >> 3) + 0x7FFF8000) != 0
                 && (char)((((_BYTE)zone_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&zone_info->animal_num >> 3)
                                                                         + 0x7FFF8000);
              if ( v20 )
                __asan_report_store4(&zone_info->animal_num, (((_BYTE)zone_info + 4) & 7u) + 3, v20);
              zone_info->animal_num = 0;
            }
            if ( *(_BYTE *)(((unsigned __int64)&zone_config_ptr->animal_max_num >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)zone_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&zone_config_ptr->animal_max_num >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( !zone_config_ptr->animal_max_num )
              goto LABEL_38;
            if ( *(_BYTE *)(((unsigned __int64)&zone_info->animal_num >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)zone_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&zone_info->animal_num >> 3)
                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( zone_info->animal_num < zone_config_ptr->animal_max_num )
            {
LABEL_38:
              if ( *(_BYTE *)(((unsigned __int64)&zone_config_ptr->index >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)zone_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&zone_config_ptr->index >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              index = zone_config_ptr->index;
              if ( *(_BYTE *)(((unsigned __int64)&zone_config_ptr->env_type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)zone_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&zone_config_ptr->env_type >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( !SceneEnvAnimalComp::createAnimal(this, zone_config_ptr->env_type, (const Vector3 *)(v4 + 32), index) )
              {
                if ( *(_BYTE *)(((unsigned __int64)&zone_info->animal_num >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)zone_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&zone_info->animal_num >> 3)
                                                                          + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                ++zone_info->animal_num;
              }
            }
          }
        }
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  }
  if ( v38 == (char *)v4 )
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
};

// Line 264: range 0000000015C76660-0000000015C77359
int32_t __cdecl SceneEnvAnimalComp::createAnimal(
        SceneEnvAnimalComp *const this,
        data::EnvironmentType env_type,
        const Vector3 *animal_pos,
        uint32_t zone_index)
{
  int32_t v4; // r15d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  Player *v10; // rax
  PlayerSceneComp *SceneComp; // rax
  EnvAnimalExcelConfigMgr *p_env_animal_config_mgr; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Scene *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // r14d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  unsigned __int64 v19; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rsi
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::weak_ptr<Entity> *v22; // rax
  GadgetEnvAnimalComp *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  const Vector3 *Position; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  Scene *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  int v35; // r14d
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // r14
  unsigned __int64 v37; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rsi
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::weak_ptr<Entity> *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  const Vector3 *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  void (__fastcall *v50)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // [rsp+8h] [rbp-6A8h]
  void (__fastcall *v51)(std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // [rsp+8h] [rbp-6A8h]
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::key_type __k; // [rsp+34h] [rbp-67Ch] BYREF
  uint32_t hour; // [rsp+38h] [rbp-678h]
  uint32_t climate_type; // [rsp+3Ch] [rbp-674h]
  common::milog::MiLogStream v57; // [rsp+40h] [rbp-670h] BYREF
  char v58[1616]; // [rsp+60h] [rbp-650h] BYREF

  v5 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_5(1568LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 48 4 13 animal_id:273 64 4 15 entity_type:274 80 16 14 player_ptr:265 112 16 13 scene_ptr:282 "
                        "144 16 14 gadget_ptr:289 176 16 15 monster_ptr:311 208 352 9 param:307 624 816 9 param:285";
  *(_QWORD *)(v5 + 16) = SceneEnvAnimalComp::createAnimal;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = 61956;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862725] = 62194;
  v7[536862726] = 62194;
  v7[536862737] = -219021312;
  v7[536862738] = -218959118;
  v7[536862739] = 62194;
  v7[536862765] = -202116109;
  v7[536862766] = -202116109;
  v7[536862767] = -202116109;
  v7[536862768] = -202116109;
  SceneCompBase::getScene(this);
  Scene::getOwnPlayer((const Scene *const)(v5 + 80));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v5 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_env_animal_comp.cpp",
      "createAnimal",
      268);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v57, (const char (*)[20])"getOwnPlayer failed");
    common::milog::MiLogStream::~MiLogStream(&v57);
    v4 = -1;
    goto LABEL_39;
  }
  v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
  BasicComp = Player::getBasicComp(v8);
  hour = PlayerBasicComp::getGameHour(BasicComp);
  *(_DWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 64) = 0;
  v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
  SceneComp = Player::getSceneComp(v10);
  climate_type = PlayerSceneComp::getCurrentWeatherType(SceneComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v5 + 144));
  p_env_animal_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144))->design_config.txt_config_mgr.env_animal_config_mgr;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v5 + 176));
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
  LOBYTE(p_env_animal_config_mgr) = EnvAnimalExcelConfigMgr::randomAnimalIdAndType(
                                      p_env_animal_config_mgr,
                                      &v13->design_config.txt_config_mgr,
                                      climate_type,
                                      env_type,
                                      hour,
                                      (uint32_t *)(v5 + 48),
                                      (data::EntityType *)(v5 + 64)) != 0;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 176));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 144));
  if ( (_BYTE)p_env_animal_config_mgr )
  {
    v4 = -1;
    goto LABEL_39;
  }
  SceneCompBase::getScene(this);
  toThisPtr<Scene>((Scene *)(v5 + 112));
  if ( *(_DWORD *)(v5 + 64) == 19 )
  {
    GadgetParam::GadgetParam((GadgetParam *const)(v5 + 624));
    *(_DWORD *)(v5 + 624) = *(_DWORD *)(v5 + 48);
    if ( ((unsigned __int8)animal_pos & 7) >= *(_BYTE *)(((unsigned __int64)animal_pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)animal_pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&animal_pos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)animal_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&animal_pos->z + 3) >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load_n(animal_pos, 12LL);
    }
    *(_QWORD *)(v5 + 636) = *(_QWORD *)&animal_pos->x;
    *(float *)(v5 + 644) = animal_pos->z;
    v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
    *(_DWORD *)(v5 + 632) = Scene::genNewEntityId(v14, PROT_ENTITY_GADGET);
    EntityMgr::createGadget((const GadgetParam *)(v5 + 144));
    if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v5 + 144), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_env_animal_comp.cpp",
        "createAnimal",
        292);
      v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v57, (const char (*)[15])"createGadget: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v57);
      v4 = -1;
      v17 = 0;
    }
    else
    {
      v18 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = *(_QWORD *)v18->baseclass_0 + 56LL;
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load8();
      v50 = *(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v19;
      v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
      v50(v18, v20, &VisionContext::meet_context);
      v21 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
      __k = Entity::getEntityId((const Entity *const)v21);
      v22 = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::operator[](&this->env_animal_map_, &__k);
      std::weak_ptr<Entity>::operator=<Gadget>(v22, (const std::shared_ptr<Gadget> *)(v5 + 144));
      std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
      EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetEnvAnimalComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v5 + 176));
      if ( std::operator!=<GadgetEnvAnimalComp>((const std::shared_ptr<GadgetEnvAnimalComp> *)(v5 + 176), 0LL) )
      {
        v23 = std::__shared_ptr_access<GadgetEnvAnimalComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetEnvAnimalComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
        GadgetEnvAnimalComp::setZoneIndex(v23, zone_index);
      }
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_env_animal_comp.cpp",
        "createAnimal",
        303);
      v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v57, (const char (*)[13])off_259BDD40);
      v25 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
      v26 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v24, v25);
      v27 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v26, (const char (*)[2])" ");
      v28 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
      Position = Entity::getPosition((const Entity *const)v28);
      v30 = operator<<(v27, Position);
      v31 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v30, (const char (*)[7])" uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      __k = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &__k);
      common::milog::MiLogStream::~MiLogStream(&v57);
      std::shared_ptr<GadgetEnvAnimalComp>::~shared_ptr((std::shared_ptr<GadgetEnvAnimalComp> *const)(v5 + 176));
      v17 = 1;
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v5 + 144));
    GadgetParam::~GadgetParam((GadgetParam *const)(v5 + 624));
    if ( v17 != 1 )
      goto LABEL_38;
  }
  else if ( *(_DWORD *)(v5 + 64) == 2 )
  {
    MonsterParam::MonsterParam((MonsterParam *const)(v5 + 208));
    *(_DWORD *)(v5 + 208) = *(_DWORD *)(v5 + 48);
    if ( ((unsigned __int8)animal_pos & 7) >= *(_BYTE *)(((unsigned __int64)animal_pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)animal_pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&animal_pos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)animal_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&animal_pos->z + 3) >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load_n(animal_pos, 12LL);
    }
    *(_QWORD *)(v5 + 220) = *(_QWORD *)&animal_pos->x;
    *(float *)(v5 + 228) = animal_pos->z;
    v32 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
    *(_DWORD *)(v5 + 216) = Scene::genNewEntityId(v32, PROT_ENTITY_MONSTER);
    EntityMgr::createMonster((const MonsterParam *)(v5 + 176));
    if ( std::operator==<Monster>((const std::shared_ptr<Monster> *)(v5 + 176), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_env_animal_comp.cpp",
        "createAnimal",
        314);
      v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v57, (const char (*)[16])"createMonster: ");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v34, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v57);
      v4 = -1;
      v35 = 0;
    }
    else
    {
      v36 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
      if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v37 = *(_QWORD *)v36->baseclass_0 + 56LL;
      if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
        v37 = __asan_report_load8();
      v51 = *(void (__fastcall **)(std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v37;
      v38 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
      v51(v36, v38, &VisionContext::meet_context);
      v39 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
      __k = Entity::getEntityId((const Entity *const)v39);
      v40 = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::operator[](&this->env_animal_map_, &__k);
      std::weak_ptr<Entity>::operator=<Monster>(v40, (const std::shared_ptr<Monster> *)(v5 + 176));
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_env_animal_comp.cpp",
        "createAnimal",
        319);
      v41 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v57, (const char (*)[13])off_259BDD40);
      v42 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
      v43 = common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v41, v42);
      v44 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v43, (const char (*)[2])" ");
      v45 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
      v46 = Entity::getPosition((const Entity *const)v45);
      v47 = operator<<(v44, v46);
      v48 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v47, (const char (*)[7])" uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      __k = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &__k);
      common::milog::MiLogStream::~MiLogStream(&v57);
      v35 = 1;
    }
    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v5 + 176));
    MonsterParam::~MonsterParam((MonsterParam *const)(v5 + 208));
    if ( v35 != 1 )
      goto LABEL_38;
  }
  v4 = 0;
LABEL_38:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 112));
LABEL_39:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 80));
  if ( v58 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF80B4) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF80BC) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    __asan_stack_free_5(v5, 1568LL, v58);
  }
  return v4;
};

// Line 326: range 0000000015C7735A-0000000015C77915
void __fastcall SceneEnvAnimalComp::fireWormEscapeBlink(
        SceneEnvAnimalComp *const this,
        uint32_t escape_num,
        unsigned __int64 pos)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  Scene *Scene; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  Scene *v11; // rax
  GadgetEnvAnimalComp *v12; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::weak_ptr<Entity> *v14; // rax
  common::milog::MiLogStream *v15; // rax
  void (__fastcall *v16)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Scene *, VisionContext *); // [rsp+0h] [rbp-4A0h]
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::key_type __k; // [rsp+2Ch] [rbp-474h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-470h] BYREF
  char v20[1104]; // [rsp+50h] [rbp-450h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1056LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 14 escape_num:325 48 16 14 gadget_ptr:331 80 16 16 env_comp_ptr:338 112 816 9 param:327";
  *(_QWORD *)(v3 + 16) = SceneEnvAnimalComp::fireWormEscapeBlink;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862749] = -202116109;
  v5[536862750] = -202116109;
  v5[536862751] = -202116109;
  v5[536862752] = -202116109;
  *(_DWORD *)(v3 + 32) = escape_num;
  GadgetParam::GadgetParam((GadgetParam *const)(v3 + 112));
  *(_DWORD *)(v3 + 112) = 70590008;
  if ( (char)(pos & 7) >= *(_BYTE *)((pos >> 3) + 0x7FFF8000) && *(_BYTE *)((pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((pos + 11) & 7) >= *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(pos, 12LL);
  }
  *(_QWORD *)(v3 + 124) = *(_QWORD *)pos;
  *(_DWORD *)(v3 + 132) = *(_DWORD *)(pos + 8);
  Scene = SceneCompBase::getScene(this);
  *(_DWORD *)(v3 + 120) = Scene::genNewEntityId(Scene, PROT_ENTITY_GADGET);
  EntityMgr::createGadget((const GadgetParam *)(v3 + 48));
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v3 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_env_animal_comp.cpp",
      "fireWormEscapeBlink",
      334);
    v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v19, (const char (*)[15])"createGadget: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 112));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    v9 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = *(_QWORD *)v9->baseclass_0 + 56LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    v16 = *(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Scene *, VisionContext *))v10;
    v11 = SceneCompBase::getScene(this);
    v16(v9, v11, &VisionContext::meet_context);
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetEnvAnimalComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 80));
    if ( std::operator==<GadgetEnvAnimalComp>((const std::shared_ptr<GadgetEnvAnimalComp> *)(v3 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_env_animal_comp.cpp",
        "fireWormEscapeBlink",
        341);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v19,
        (const char (*)[37])"findComp<GadgetEnvAnimalComp> failed");
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      v12 = std::__shared_ptr_access<GadgetEnvAnimalComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetEnvAnimalComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      GadgetEnvAnimalComp::setEscapeTime(v12, *(_DWORD *)(v3 + 32));
      v13 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      __k = Entity::getEntityId((const Entity *const)v13);
      v14 = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::operator[](&this->env_animal_map_, &__k);
      std::weak_ptr<Entity>::operator=<Gadget>(v14, (const std::shared_ptr<Gadget> *)(v3 + 48));
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_env_animal_comp.cpp",
        "fireWormEscapeBlink",
        346);
      v15 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v19,
              (const char (*)[33])"fireWormEscapeBlink escape_num: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    std::shared_ptr<GadgetEnvAnimalComp>::~shared_ptr((std::shared_ptr<GadgetEnvAnimalComp> *const)(v3 + 80));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 48));
  GadgetParam::~GadgetParam((GadgetParam *const)(v3 + 112));
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF807C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1056LL, v20);
  }
};

// Line 351: range 0000000015C77916-0000000015C77AF9
void __fastcall SceneEnvAnimalComp::onEnvAnimalTimeout(SceneEnvAnimalComp *const this, uint32_t zone_index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,EnvZoneInfo>,false,false>::pointer v5; // rdx
  __int64 v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,EnvZoneInfo>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 zone_index:350 64 8 8 iter:352";
  *(_QWORD *)(v2 + 16) = SceneEnvAnimalComp::onEnvAnimalTimeout;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = zone_index;
  *(std::unordered_map<unsigned int,EnvZoneInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,EnvZoneInfo>::find(
                                                                           &this->env_zone_info_map_,
                                                                           (const std::unordered_map<unsigned int,EnvZoneInfo>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,EnvZoneInfo>::end(&this->env_zone_info_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,EnvZoneInfo>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,EnvZoneInfo>,false> *)(v2 + 64),
          &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,EnvZoneInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,EnvZoneInfo>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v5->second.animal_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v5 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->second.animal_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v5->second.animal_num )
    {
      v6 = (__int64)std::__detail::_Node_iterator<std::pair<unsigned int const,EnvZoneInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,EnvZoneInfo>,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) != 0
        && (char)(((v6 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
      {
        v6 = __asan_report_load4();
      }
      --*(_DWORD *)(v6 + 8);
    }
  }
  if ( v8 == (char *)v2 )
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

// Line 365: range 0000000015C77AFA-0000000015C781B2
void __cdecl SceneEnvAnimalComp::onWeatherChange(SceneEnvAnimalComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rcx
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  unsigned __int64 v6; // rax
  __int64 (__fastcall *v7)(std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const Vector3 *); // r15
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const Vector3 *Position; // rax
  EnvAnimalExcelConfigMgr *p_env_animal_config_mgr; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t GadgetId; // eax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  void (__fastcall *v15)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  uint32_t climate_type; // [rsp+14h] [rbp-16Ch]
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<Entity>> *__for_range; // [rsp+30h] [rbp-150h]
  const std::pair<unsigned int const,std::weak_ptr<Entity> > *v21; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,const std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *_; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *entity_wtr; // [rsp+48h] [rbp-138h]
  VisionContext v24; // [rsp+54h] [rbp-12Ch] BYREF
  std::shared_ptr<Config> v25; // [rsp+60h] [rbp-120h] BYREF
  common::milog::MiLogStream v26; // [rsp+70h] [rbp-110h] BYREF
  char v27[240]; // [rsp+90h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 16 19 world_scene_ptr:366 64 16 14 entity_ptr:383 96 16 14 gadget_ptr:388 128 24 24 to_remo"
                        "ve_gadget_vec:380";
  *(_QWORD *)(v1 + 16) = SceneEnvAnimalComp::onWeatherChange;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<PlayerWorldScene,Scene>((Scene *)(v1 + 32));
  if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_env_animal_comp.cpp",
      "onWeatherChange",
      369);
    v4 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v26,
           (const char (*)[32])"world_scene_ptr is null, scene:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v4, this->scene_);
    common::milog::MiLogStream::~MiLogStream(&v26);
    goto LABEL_33;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Scene::getScriptConfig(this->scene_) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_env_animal_comp.cpp",
      "onWeatherChange",
      376);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v26,
           (const char (*)[29])"getScriptConfig fail, scene:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  std::vector<std::shared_ptr<Gadget>>::vector((std::vector<std::shared_ptr<Gadget>> *const)(v1 + 128));
  __for_range = &this->env_animal_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::begin(&this->env_animal_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::end(&this->env_animal_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::weak_ptr<Entity>>,false>(&__for_begin, &__for_end) )
  {
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::weak_ptr<Entity>>(v21);
    entity_wtr = (std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *)std::get<1ul,unsigned int const,std::weak_ptr<Entity>>(v21);
    std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v1 + 64));
    if ( !std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v1 + 64)) )
    {
      std::dynamic_pointer_cast<Gadget,Entity>((const std::shared_ptr<Entity> *)(v1 + 96));
      if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v1 + 96)) )
      {
        v5 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v6 = (unsigned __int64)(v5->_vptr_DescribalBase + 36);
        if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
          v6 = __asan_report_load8();
        v7 = *(__int64 (__fastcall **)(std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const Vector3 *))v6;
        v8 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        Position = Entity::getPosition((const Entity *const)v8);
        climate_type = v7(v5, Position);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v25);
        p_env_animal_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.env_animal_config_mgr;
        v11 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        GadgetId = Gadget::getGadgetId(v11);
        LOBYTE(p_env_animal_config_mgr) = !EnvAnimalExcelConfigMgr::checkEnvAnimalWeather(
                                             p_env_animal_config_mgr,
                                             GadgetId,
                                             climate_type);
        std::shared_ptr<Config>::~shared_ptr(&v25);
        if ( (_BYTE)p_env_animal_config_mgr )
        {
          v13 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v14 = *(_QWORD *)v13->baseclass_0 + 128LL;
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            v14 = __asan_report_load8();
          v15 = *(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v14;
          VisionContext::VisionContext(&v24, VISION_GATHER_ESCAPE);
          v15(v13, &v24);
        }
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 96));
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v1 + 64));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator++(&__for_begin);
  }
  std::vector<std::shared_ptr<Gadget>>::~vector((std::vector<std::shared_ptr<Gadget>> *const)(v1 + 128));
LABEL_33:
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 32));
  if ( v27 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 403: range 0000000015C781B4-0000000015C78313
// local variable allocation has failed, the output may be wrong!
void __cdecl SceneEnvAnimalComp::setIsEnableRefreshEnvAnimal(SceneEnvAnimalComp *const this, bool is_enable)
{
  common::milog::MiLogStream *v2; // rcx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rcx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_enable_refresh_env_animal_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_refresh_env_animal_, is_enable, &this->is_enable_refresh_env_animal_);
  this->is_enable_refresh_env_animal_ = is_enable;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_env_animal_comp.cpp",
    "setIsEnableRefreshEnvAnimal",
    405);
  v2 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v5,
         (const char (*)[30])"is_enable_refresh_env_animal:");
  if ( *(char *)(((unsigned __int64)&this->is_enable_refresh_env_animal_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_refresh_env_animal_);
  v3 = common::milog::MiLogStream::operator<<(v2, this->is_enable_refresh_env_animal_);
  v4 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v3, (const char (*)[8])" scene:");
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v4, this->scene_);
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 410: range 0000000015C78314-0000000015C78584
void __cdecl SceneEnvAnimalComp::clearEnvAnimals(SceneEnvAnimalComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // r14
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<Entity>> *__for_range; // [rsp+20h] [rbp-A0h]
  const std::pair<unsigned int const,std::weak_ptr<Entity> > *v10; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *_; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *entity_wtr; // [rsp+38h] [rbp-88h]
  VisionContext v13; // [rsp+44h] [rbp-7Ch] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 entity_ptr:413";
  *(_QWORD *)(v1 + 16) = SceneEnvAnimalComp::clearEnvAnimals;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  __for_range = &this->env_animal_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::begin(&this->env_animal_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::end(&this->env_animal_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::weak_ptr<Entity>>,false>(&__for_begin, &__for_end) )
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::weak_ptr<Entity>>(v10);
    entity_wtr = (std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *)std::get<1ul,unsigned int const,std::weak_ptr<Entity>>(v10);
    std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v1 + 32));
    if ( !std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v1 + 32)) )
    {
      v4 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = (unsigned __int64)(v4->_vptr_DescribalBase + 16);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      v6 = *(void (__fastcall **)(std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v5;
      VisionContext::VisionContext(&v13, VISION_MISS);
      v6(v4, &v13);
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v1 + 32));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::clear(&this->env_animal_map_);
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
