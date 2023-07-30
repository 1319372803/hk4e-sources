// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/monster/monster_env_animal_comp.cpp

// Line 30: range 00000000168D240E-00000000168D2424
int32_t __cdecl MonsterEnvAnimalComp::interactCheck(
        MonsterEnvAnimalComp *const this,
        Player *player,
        const EntityInteractParam *a3)
{
  return 0;
};

// Line 36: range 00000000168D2426-00000000168D2FAF
int32_t __cdecl MonsterEnvAnimalComp::interact(
        MonsterEnvAnimalComp *const this,
        Player *player,
        const EntityInteractParam *a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  Monster *Monster; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t v13; // r14d
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  PlayerItemComp *v20; // rax
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  PlayerItemComp *v27; // rax
  PlayerItemComp *v28; // r14
  Monster *v29; // rax
  const Vector3 *Position; // rax
  PlayerEventComp *EventComp; // r14
  Monster *v32; // rax
  Monster *v33; // rax
  Monster *v34; // rax
  unsigned int *v35; // r9
  Player *v36; // rax
  PlayerEventComp *v37; // r14
  Monster *v38; // rax
  Monster *v39; // r14
  unsigned __int64 v40; // rax
  void (__fastcall *v41)(Monster *, VisionContext *); // r15
  int32_t result; // eax
  std::string v43; // [rsp+0h] [rbp-250h]
  unsigned int *v44; // [rsp+0h] [rbp-250h]
  unsigned int *v45; // [rsp+8h] [rbp-248h]
  Player *playera; // [rsp+10h] [rbp-240h]
  MonsterEnvAnimalComp *thisa; // [rsp+18h] [rbp-238h]
  unsigned int EntityId; // [rsp+20h] [rbp-230h] BYREF
  unsigned int ConfigId; // [rsp+24h] [rbp-22Ch] BYREF
  unsigned int val; // [rsp+28h] [rbp-228h] BYREF
  data::EntityType type; // [rsp+2Ch] [rbp-224h]
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+30h] [rbp-220h] BYREF
  const data::EnvAnimalGatherExcelConfig *env_animal_gather_config_ptr; // [rsp+38h] [rbp-218h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+40h] [rbp-210h]
  const data::IdCountConfig *config; // [rsp+48h] [rbp-208h]
  VisionContext v56; // [rsp+54h] [rbp-1FCh] BYREF
  std::string v57; // [rsp+60h] [rbp-1F0h] BYREF
  char v58[464]; // [rsp+80h] [rbp-1D0h] BYREF

  *(&v43._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v43._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v43._M_string_length = (std::string::size_type)a3;
  v3 = (unsigned __int64)v58;
  v43._M_dataplus._M_p = v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 1 9 holder:37 64 4 12 animal_id:38 80 4 6 ret:58 96 8 16 output_result:65 128 16 12 event_"
                        "ptr:75 160 16 12 scene_ptr:79 192 16 19 owner_player_ptr:82 224 16 12 event_ptr:85 256 16 8 para"
                        "m:52 288 24 17 item_param_vec:47 352 24 16 action_reason:57";
  *(_QWORD *)(v3 + 16) = MonsterEnvAnimalComp::interact;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862731] = -218103808;
  v5[536862732] = -202116109;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v57, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x5EBu, v43);
  std::string::~string(&v57);
  Monster = MonsterCompBase::getMonster(thisa);
  *(_DWORD *)(v3 + 64) = Monster::getMonsterId(Monster);
  type = Monster;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 256));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
  env_animal_gather_config_ptr = EnvAnimalExcelConfigMgr::findEnvAnimalGatherConfig(
                                   &v8->design_config.txt_config_mgr.env_animal_config_mgr,
                                   *(_DWORD *)(v3 + 64),
                                   Monster);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 256));
  if ( env_animal_gather_config_ptr )
  {
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 288));
    __for_range = &env_animal_gather_config_ptr->gather_item_list;
    __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&env_animal_gather_config_ptr->gather_item_list)._M_current;
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 96) = std::vector<data::IdCountConfig>::end(&env_animal_gather_config_ptr->gather_item_list);
    while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 96)) )
    {
      config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&config->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( config->count )
      {
        *(_QWORD *)(v3 + 256) = 0LL;
        *(_QWORD *)(v3 + 264) = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 256) = config->id;
        *(_DWORD *)(v3 + 260) = config->count;
        std::vector<ItemParam>::emplace_back<ItemParam&>(
          (std::vector<ItemParam> *const)(v3 + 288),
          (ItemParam *)(v3 + 256),
          (ItemParam *)(v3 + 256));
      }
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
    }
    ActionReason::ActionReason((ActionReason *const)(v3 + 352), ACTION_REASON_MONSTER_ENV_ANIMAL, ITEM_LIMIT_ENV_ANIMAL);
    ItemComp = Player::getItemComp(playera);
    *(_DWORD *)(v3 + 80) = PlayerItemComp::checkAddItemBatch(
                             ItemComp,
                             (const std::vector<ItemParam> *)(v3 + 288),
                             (const ActionReason *)(v3 + 352));
    if ( *(_DWORD *)(v3 + 80) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v57,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/monster/monster_env_animal_comp.cpp",
        "interact",
        61);
      v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              (common::milog::MiLogStream *const)&v57,
              (const char (*)[20])"checkAddItemBatch: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 64));
      v17 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])":");
      val = type;
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" failed ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v19, (const int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v57);
      v13 = *(_DWORD *)(v3 + 80);
    }
    else
    {
      v20 = Player::getItemComp(playera);
      *(OutputResult *)(v3 + 96) = PlayerItemComp::checkAndRecordItemLimitOutputCount(
                                     v20,
                                     OUTPUT_CONTROL_OTHER,
                                     (const ActionReason *)(v3 + 352));
      if ( *(_DWORD *)(v3 + 96) )
      {
        LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v3 + 96));
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v57,
          &common::milog::MiLogDefault::default_log_obj_,
          LogLevel,
          "./src/monster/monster_env_animal_comp.cpp",
          "interact",
          68);
        v22 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                (common::milog::MiLogStream *const)&v57,
                (const char (*)[52])"checkAndRecordItemLimitOutputCount fail, animal_id:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v3 + 64));
        v24 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v23, (const char (*)[2])":");
        val = type;
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
        v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" player:");
        operator<<(v26, playera);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v57);
        v13 = *(_DWORD *)(v3 + 80);
      }
      else
      {
        v27 = Player::getItemComp(playera);
        PlayerItemComp::addItemBatch(
          v27,
          (const std::vector<ItemParam> *)(v3 + 288),
          (const ActionReason *)(v3 + 352),
          0LL);
        v28 = Player::getItemComp(playera);
        v29 = MonsterCompBase::getMonster(thisa);
        Position = Entity::getPosition((const Entity *const)v29);
        PlayerItemComp::notifyDropHint(v28, (const std::vector<ItemParam> *)(v3 + 288), Position);
        common::tools::perf::make_shared<EnvAnimalEvent,unsigned int &>(
          (unsigned int *)(v3 + 128),
          (unsigned int *)(v3 + 64));
        EventComp = Player::getEventComp(playera);
        std::shared_ptr<BaseEvent>::shared_ptr<EnvAnimalEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v3 + 256),
          (const std::shared_ptr<EnvAnimalEvent> *)(v3 + 128));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v3 + 256));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 256));
        MonsterCompBase::getMonster(thisa);
        Entity::getScene((const Entity *const)(v3 + 160));
        if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 160), 0LL) )
        {
          std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          Scene::getOwnPlayer((const Scene *const)(v3 + 192));
          if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 192), 0LL) )
          {
            v32 = MonsterCompBase::getMonster(thisa);
            val = Entity::getGroupId((const Entity *const)v32);
            v33 = MonsterCompBase::getMonster(thisa);
            ConfigId = Entity::getConfigId((const Entity *const)v33);
            v34 = MonsterCompBase::getMonster(thisa);
            EntityId = Entity::getEntityId((const Entity *const)v34);
            common::tools::perf::make_shared<MonsterDieEvent,unsigned int,unsigned int,unsigned int &,unsigned int>(
              (unsigned int *)(v3 + 256),
              &EntityId,
              &ConfigId,
              (unsigned int *)(v3 + 64),
              &val,
              v35,
              v44,
              v45);
            std::shared_ptr<BaseEvent>::shared_ptr<MonsterDieEvent,void>(
              (std::shared_ptr<BaseEvent> *const)(v3 + 224),
              (std::shared_ptr<MonsterDieEvent> *)(v3 + 256));
            std::shared_ptr<MonsterDieEvent>::~shared_ptr((std::shared_ptr<MonsterDieEvent> *const)(v3 + 256));
            v36 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            v37 = Player::getEventComp(v36);
            std::shared_ptr<BaseEvent>::shared_ptr(
              (std::shared_ptr<BaseEvent> *const)(v3 + 256),
              (const std::shared_ptr<BaseEvent> *)(v3 + 224));
            PlayerEventComp::notifyEvent(v37, (BaseEventPtr *)(v3 + 256));
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 256));
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 224));
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 192));
        }
        v38 = MonsterCompBase::getMonster(thisa);
        Creature::changeLifeState(v38, LIFE_DEAD, 0LL, 1);
        v39 = MonsterCompBase::getMonster(thisa);
        if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v40 = *(_QWORD *)v39->baseclass_0 + 128LL;
        if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
          v40 = __asan_report_load8();
        v41 = *(void (__fastcall **)(Monster *, VisionContext *))v40;
        VisionContext::VisionContext(&v56, VISION_PICKUP);
        v41(v39, &v56);
        v13 = 0;
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 160));
        std::shared_ptr<EnvAnimalEvent>::~shared_ptr((std::shared_ptr<EnvAnimalEvent> *const)(v3 + 128));
      }
    }
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 288));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster_env_animal_comp.cpp",
      "interact",
      43);
    v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           (common::milog::MiLogStream *const)&v57,
           (const char (*)[27])"findEnvAnimalGatherConfig ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
    v11 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])":");
    val = type;
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v57);
    v13 = -1;
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  result = v13;
  if ( v44 == (unsigned int *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 98: range 00000000168D2FB0-00000000168D3264
bool __cdecl MonsterEnvAnimalComp::checkAndDisappearOnTime(MonsterEnvAnimalComp *const this, uint32_t now)
{
  common::milog::MiLogStream *v2; // rbx
  Monster *Monster; // rax
  Monster *v4; // rax
  Monster *v5; // rbx
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(Monster *, VisionContext *); // r12
  bool is_far_away; // [rsp+1Fh] [rbp-61h]
  uint32_t radius; // [rsp+20h] [rbp-60h]
  uint32_t far_away_time; // [rsp+24h] [rbp-5Ch]
  ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+28h] [rbp-58h]
  VisionContext v13; // [rsp+34h] [rbp-4Ch] BYREF
  std::shared_ptr<Config> v14; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.const_value_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  radius = ConstValueExcelConfigMgr::getEnvAnimalRefreshMaxRadius(const_value_config_mgr);
  far_away_time = ConstValueExcelConfigMgr::getEnvAnimalRefreshFarAwayTime(const_value_config_mgr);
  is_far_away = MonsterEnvAnimalComp::isFarAwayAllPlayers(this, radius);
  if ( *(_BYTE *)(((unsigned __int64)&this->far_away_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->far_away_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->far_away_start_time_ && is_far_away )
    this->far_away_start_time_ = now;
  if ( *(_BYTE *)(((unsigned __int64)&this->far_away_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->far_away_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->far_away_start_time_ )
    return 0;
  if ( !is_far_away )
    this->far_away_start_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->far_away_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->far_away_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( now < this->far_away_start_time_ || far_away_time >= now - this->far_away_start_time_ )
    return 0;
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/monster/monster_env_animal_comp.cpp",
    "checkAndDisappearOnTime",
    116);
  v2 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v15, (const char (*)[21])off_25E21CC0);
  Monster = MonsterCompBase::getMonster(this);
  common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v2, Monster);
  common::milog::MiLogStream::~MiLogStream(&v15);
  v4 = MonsterCompBase::getMonster(this);
  Creature::changeLifeState(v4, LIFE_DEAD, 0LL, 1);
  v5 = MonsterCompBase::getMonster(this);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(_QWORD *)v5->baseclass_0 + 128LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  v7 = *(void (__fastcall **)(Monster *, VisionContext *))v6;
  VisionContext::VisionContext(&v13, VISION_DIE);
  v7(v5, &v13);
  return 1;
};

// Line 130: range 00000000168D34AA-00000000168D36BC
bool __cdecl MonsterEnvAnimalComp::isFarAwayAllPlayers(MonsterEnvAnimalComp *const this, uint32_t radius)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  Monster *Monster; // rax
  Scene *v7; // r14
  bool result; // al
  MonsterEnvAnimalComp::isFarAwayAllPlayers::<lambda(Player&)> v9; // [rsp-20h] [rbp-110h]
  const Vector3 *cur_pos; // [rsp+18h] [rbp-D8h]
  __int64 __f_16; // [rsp+30h] [rbp-C0h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+40h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 19 is_far_away_all:138 64 16 13 scene_ptr:131";
  *(_QWORD *)(v2 + 16) = MonsterEnvAnimalComp::isFarAwayAllPlayers;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  MonsterCompBase::getMonster(this);
  Entity::getScene((const Entity *const)(v2 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
  {
    v5 = 0;
  }
  else
  {
    Monster = MonsterCompBase::getMonster(this);
    cur_pos = Entity::getPosition((const Entity *const)Monster);
    *(_BYTE *)(v2 + 48) = 1;
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    LODWORD(__f_16) = radius;
    *(_QWORD *)&v9.__radius = __f_16;
    v9.__cur_pos = cur_pos;
    v9.__is_far_away_all = (bool *)(v2 + 48);
    std::function<ForeachPolicy ()(Player &)>::function<MonsterEnvAnimalComp::isFarAwayAllPlayers(unsigned int)::{lambda(Player &)#1},void,void>(
      &p_func,
      v9);
    Scene::foreachPlayer(v7, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    v5 = *(_BYTE *)(v2 + 48);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 139: range 00000000168D3266-00000000168D34A8
ForeachPolicy __cdecl MonsterEnvAnimalComp::isFarAwayAllPlayers(unsigned int)::{lambda(Player &)#1}::operator()(
        const MonsterEnvAnimalComp::isFarAwayAllPlayers::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const Vector3 *cur_pos; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const Vector3 *Position; // rax
  float Distance; // xmm1_4
  char v9; // al
  bool *is_far_away_all; // rdx
  ForeachPolicy v11; // r14d
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:141";
  *(_QWORD *)(v2 + 16) = MonsterEnvAnimalComp::isFarAwayAllPlayers(unsigned int)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getCurAvatar((Player *const)(v2 + 32));
  if ( !std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_pos >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cur_pos = __closure->__cur_pos;
  v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  Position = Entity::getPosition((const Entity *const)v6);
  Distance = getDistance(Position, cur_pos);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( (float)(int)__closure->__radius > Distance )
    v9 = 1;
  else
LABEL_11:
    v9 = 0;
  if ( v9 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    is_far_away_all = __closure->__is_far_away_all;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__is_far_away_all >> 3) + 0x7FFF8000) != 0
      && ((__int64)__closure->__is_far_away_all & 7) >= *(_BYTE *)(((unsigned __int64)__closure->__is_far_away_all >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_store1(__closure->__is_far_away_all);
    }
    *is_far_away_all = 0;
    v11 = FOREACH_BREAK;
  }
  else
  {
    v11 = FOREACH_CONTINUE;
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  result = v11;
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
