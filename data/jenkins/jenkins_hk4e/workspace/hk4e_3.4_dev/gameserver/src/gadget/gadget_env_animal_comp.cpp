// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gadget_env_animal_comp.cpp

// Line 30: range 00000000175376AC-0000000017537C66
int32_t __cdecl GadgetEnvAnimalComp::start(GadgetEnvAnimalComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  SceneUnixTimer *v5; // rax
  Gadget *Gadget; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int Now; // esi
  uint32_t v9; // ecx
  int32_t result; // eax
  uint32_t animal_id; // [rsp+10h] [rbp-E0h]
  const data::EnvAnimalGatherExcelConfig *env_gather_config_ptr; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<Gadget> __r; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<Scene> v14; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 scene_ptr:31 64 16 13 gadget_wtr:40";
  *(_QWORD *)(v1 + 16) = GadgetEnvAnimalComp::start;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  GadgetCompBase::getGadget(this);
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_env_animal_comp.cpp",
      "start",
      34);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v15, (const char (*)[21])"scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v4 = -1;
  }
  else
  {
    if ( std::operator==<SceneUnixTimer>(&this->update_timer_ptr_, 0LL) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      toThisPtr<Gadget>((Gadget *)&__r);
      std::weak_ptr<Gadget>::weak_ptr<Gadget,void>((std::weak_ptr<Gadget> *const)(v1 + 64), &__r);
      std::shared_ptr<Gadget>::~shared_ptr(&__r);
      std::weak_ptr<Gadget>::weak_ptr((std::weak_ptr<Gadget> *const)&__r, (const std::weak_ptr<Gadget> *)(v1 + 64));
      common::tools::perf::make_shared<SceneUnixTimer,std::shared_ptr<Scene> &,GadgetEnvAnimalComp::start(void)::{lambda(unsigned long)#1}>(
        &v14,
        (GadgetEnvAnimalComp::start::<lambda(uint64_t)> *)(v1 + 32),
        (std::shared_ptr<Scene> *)&__r,
        (GadgetEnvAnimalComp::start::<lambda(uint64_t)> *)(v1 + 32));
      std::shared_ptr<SceneUnixTimer>::operator=(&this->update_timer_ptr_, (std::shared_ptr<SceneUnixTimer> *)&v14);
      std::shared_ptr<SceneUnixTimer>::~shared_ptr((std::shared_ptr<SceneUnixTimer> *const)&v14);
      GadgetEnvAnimalComp::start(void)::{lambda(unsigned long)#1}::~start((GadgetEnvAnimalComp::start::<lambda(uint64_t)> *const)&__r);
      std::weak_ptr<Gadget>::~weak_ptr((std::weak_ptr<Gadget> *const)(v1 + 64));
    }
    if ( std::operator==<SceneUnixTimer>(&this->update_timer_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_env_animal_comp.cpp",
        "start",
        46);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v15,
        (const char (*)[29])"create SceneUnixTimer failed");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v4 = -1;
    }
    else
    {
      v5 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->update_timer_ptr_);
      if ( SceneUnixTimer::startS(v5, 1u, 1, "./src/gadget/gadget_env_animal_comp.cpp", "start", 50) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget_env_animal_comp.cpp",
          "start",
          52);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v15,
          (const char (*)[34])"crystal update_timer start failed");
        common::milog::MiLogStream::~MiLogStream(&v15);
        v4 = -1;
      }
      else
      {
        Gadget = GadgetCompBase::getGadget(this);
        animal_id = Gadget::getGadgetId(Gadget);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v14);
        v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
        env_gather_config_ptr = EnvAnimalExcelConfigMgr::findEnvAnimalGatherConfig(
                                  &v7->design_config.txt_config_mgr.env_animal_config_mgr,
                                  animal_id,
                                  Gadget);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v14);
        if ( env_gather_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&env_gather_config_ptr->alive_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&env_gather_config_ptr->alive_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( env_gather_config_ptr->alive_time )
          {
            Now = common::tools::TimeUtils::getNow();
            if ( *(_BYTE *)(((unsigned __int64)&env_gather_config_ptr->alive_time >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&env_gather_config_ptr->alive_time >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            v9 = Now + env_gather_config_ptr->alive_time;
            if ( *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_store4(&this->disappear_time_);
            }
            this->disappear_time_ = v9;
          }
        }
        v4 = 0;
      }
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v4;
  if ( v16 == (char *)v1 )
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

// Line 40: range 000000001753745C-000000001753768F
void __cdecl GadgetEnvAnimalComp::start(void)::{lambda(unsigned long)#1}::operator()(
        const GadgetEnvAnimalComp::start::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GadgetEnvAnimalComp *v5; // rdx
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
  *(_QWORD *)(v2 + 8) = "2 32 16 13 gadget_ptr:40 64 16 10 obj_ptr:40";
  *(_QWORD *)(v2 + 16) = GadgetEnvAnimalComp::start(void)::{lambda(unsigned long)#1}::operator();
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
      "./src/gadget/gadget_env_animal_comp.cpp",
      "operator()",
      40);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v6,
      (const char (*)[36])"gadget is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetEnvAnimalComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
    if ( std::operator!=<GadgetEnvAnimalComp>((const std::shared_ptr<GadgetEnvAnimalComp> *)(v2 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<GadgetEnvAnimalComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetEnvAnimalComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      GadgetEnvAnimalComp::onUpdateTimer(v5, now_ms);
    }
    std::shared_ptr<GadgetEnvAnimalComp>::~shared_ptr((std::shared_ptr<GadgetEnvAnimalComp> *const)(v2 + 64));
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

// Line 40: range 000000001760B932-000000001760B957
void __cdecl GadgetEnvAnimalComp::start(void)::{lambda(unsigned long)#1}::start(
        GadgetEnvAnimalComp::start::<lambda(uint64_t)> *const this,
        GadgetEnvAnimalComp::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 40: range 000000001760D5B4-000000001760D5D9
void __cdecl GadgetEnvAnimalComp::start(void)::{lambda(unsigned long)#1}::start(
        GadgetEnvAnimalComp::start::<lambda(uint64_t)> *const this,
        const GadgetEnvAnimalComp::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 40: range 0000000017537690-00000000175376AA
void __cdecl GadgetEnvAnimalComp::start(void)::{lambda(unsigned long)#1}::~start(
        GadgetEnvAnimalComp::start::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->__gadget_wtr);
};

// Line 66: range 0000000017537C68-0000000017537C7E
int32_t __cdecl GadgetEnvAnimalComp::interactCheck(
        GadgetEnvAnimalComp *const this,
        Player *player,
        const EntityInteractParam *a3)
{
  return 0;
};

// Line 72: range 0000000017537C80-0000000017538594
int32_t __cdecl GadgetEnvAnimalComp::interact(
        GadgetEnvAnimalComp *const this,
        Player *player,
        const EntityInteractParam *a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  Gadget *Gadget; // rax
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
  PlayerItemComp *v19; // rax
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  PlayerItemComp *v26; // rax
  PlayerItemComp *v27; // r14
  Gadget *v28; // rax
  const Vector3 *Position; // rax
  PlayerEventComp *EventComp; // r14
  Gadget *v31; // rax
  Gadget *v32; // r14
  unsigned __int64 v33; // rax
  void (__fastcall *v34)(Gadget *, VisionContext *); // r15
  int32_t result; // eax
  std::string v36; // [rsp+0h] [rbp-1D0h]
  char *v37; // [rsp+0h] [rbp-1D0h]
  Player *playera; // [rsp+10h] [rbp-1C0h]
  GadgetEnvAnimalComp *thisa; // [rsp+18h] [rbp-1B8h]
  unsigned int val; // [rsp+24h] [rbp-1ACh] BYREF
  data::EntityType entity_type; // [rsp+28h] [rbp-1A8h]
  int32_t ret; // [rsp+2Ch] [rbp-1A4h]
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+30h] [rbp-1A0h] BYREF
  const data::EnvAnimalGatherExcelConfig *env_animal_gather_config_ptr; // [rsp+38h] [rbp-198h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+40h] [rbp-190h]
  const data::IdCountConfig *config; // [rsp+48h] [rbp-188h]
  VisionContext v47; // [rsp+54h] [rbp-17Ch] BYREF
  std::string v48; // [rsp+60h] [rbp-170h] BYREF
  char v49[336]; // [rsp+80h] [rbp-150h] BYREF

  *(&v36._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v36._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v36._M_string_length = (std::string::size_type)a3;
  v3 = (unsigned __int64)v49;
  v36._M_dataplus._M_p = v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 1 9 holder:73 48 4 12 animal_id:75 64 8 17 output_result:102 96 16 13 event_ptr:112 128 16 "
                        "8 param:89 160 24 17 item_param_vec:84 224 24 16 action_reason:94";
  *(_QWORD *)(v3 + 16) = GadgetEnvAnimalComp::interact;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v48, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x5F0u, v36);
  std::string::~string(&v48);
  Gadget = GadgetCompBase::getGadget(thisa);
  *(_DWORD *)(v3 + 48) = Gadget::getGadgetId(Gadget);
  entity_type = Gadget;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 128));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  env_animal_gather_config_ptr = EnvAnimalExcelConfigMgr::findEnvAnimalGatherConfig(
                                   &v8->design_config.txt_config_mgr.env_animal_config_mgr,
                                   *(_DWORD *)(v3 + 48),
                                   Gadget);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
  if ( env_animal_gather_config_ptr )
  {
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 160));
    __for_range = &env_animal_gather_config_ptr->gather_item_list;
    __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&env_animal_gather_config_ptr->gather_item_list)._M_current;
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 64) = std::vector<data::IdCountConfig>::end(&env_animal_gather_config_ptr->gather_item_list);
    while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 64)) )
    {
      config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&config->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( config->count )
      {
        *(_QWORD *)(v3 + 128) = 0LL;
        *(_QWORD *)(v3 + 136) = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 128) = config->id;
        *(_DWORD *)(v3 + 132) = config->count;
        std::vector<ItemParam>::emplace_back<ItemParam&>(
          (std::vector<ItemParam> *const)(v3 + 160),
          (ItemParam *)(v3 + 128),
          (ItemParam *)(v3 + 128));
      }
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
    }
    ActionReason::ActionReason((ActionReason *const)(v3 + 224), ACTION_REASON_GADGET_ENV_ANIMAL, ITEM_LIMIT_ENV_ANIMAL);
    ItemComp = Player::getItemComp(playera);
    ret = PlayerItemComp::checkAddItemBatch(
            ItemComp,
            (const std::vector<ItemParam> *)(v3 + 160),
            (const ActionReason *)(v3 + 224));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget_env_animal_comp.cpp",
        "interact",
        98);
      v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              (common::milog::MiLogStream *const)&v48,
              (const char (*)[20])"checkAddItemBatch: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])":");
      val = entity_type;
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48);
      v13 = ret;
    }
    else
    {
      v19 = Player::getItemComp(playera);
      *(OutputResult *)(v3 + 64) = PlayerItemComp::checkAndRecordItemLimitOutputCount(
                                     v19,
                                     OUTPUT_CONTROL_OTHER,
                                     (const ActionReason *)(v3 + 224));
      if ( *(_DWORD *)(v3 + 64) )
      {
        LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v3 + 64));
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v48,
          &common::milog::MiLogDefault::default_log_obj_,
          LogLevel,
          "./src/gadget/gadget_env_animal_comp.cpp",
          "interact",
          105);
        v21 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                (common::milog::MiLogStream *const)&v48,
                (const char (*)[52])"checkAndRecordItemLimitOutputCount fail, animal_id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v3 + 48));
        v23 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v22, (const char (*)[2])":");
        val = entity_type;
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
        v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])" player:");
        operator<<(v25, playera);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48);
        v13 = *(_DWORD *)(v3 + 64);
      }
      else
      {
        v26 = Player::getItemComp(playera);
        PlayerItemComp::addItemBatch(
          v26,
          (const std::vector<ItemParam> *)(v3 + 160),
          (const ActionReason *)(v3 + 224),
          0LL);
        v27 = Player::getItemComp(playera);
        v28 = GadgetCompBase::getGadget(thisa);
        Position = Entity::getPosition((const Entity *const)v28);
        PlayerItemComp::notifyDropHint(v27, (const std::vector<ItemParam> *)(v3 + 160), Position);
        common::tools::perf::make_shared<EnvAnimalEvent,unsigned int &>(
          (unsigned int *)(v3 + 96),
          (unsigned int *)(v3 + 48));
        EventComp = Player::getEventComp(playera);
        std::shared_ptr<BaseEvent>::shared_ptr<EnvAnimalEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v3 + 128),
          (const std::shared_ptr<EnvAnimalEvent> *)(v3 + 96));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v3 + 128));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 128));
        v31 = GadgetCompBase::getGadget(thisa);
        Creature::changeLifeState(v31, LIFE_DEAD, 0LL, 1);
        v32 = GadgetCompBase::getGadget(thisa);
        if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v33 = *(_QWORD *)v32->baseclass_0 + 128LL;
        if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
          v33 = __asan_report_load8();
        v34 = *(void (__fastcall **)(Gadget *, VisionContext *))v33;
        VisionContext::VisionContext(&v47, VISION_PICKUP);
        v34(v32, &v47);
        v13 = 0;
        std::shared_ptr<EnvAnimalEvent>::~shared_ptr((std::shared_ptr<EnvAnimalEvent> *const)(v3 + 96));
      }
    }
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 160));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget_env_animal_comp.cpp",
      "interact",
      80);
    v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           (common::milog::MiLogStream *const)&v48,
           (const char (*)[27])"findEnvAnimalGatherConfig ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])":");
    val = entity_type;
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48);
    v13 = -1;
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  result = v13;
  if ( v37 == (char *)v3 )
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
  return result;
};

// Line 122: range 0000000017538596-0000000017538FF3
void __cdecl GadgetEnvAnimalComp::onUpdateTimer(GadgetEnvAnimalComp *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  Gadget *Gadget; // rax
  char v7; // al
  PlayerWorldScene *v8; // rax
  SceneEnvAnimalComp *EnvAnimalComp; // rcx
  Gadget *v10; // rax
  Gadget *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  char v13; // al
  uint32_t v14; // ecx
  common::milog::MiLogStream *v15; // r14
  Gadget *v16; // rax
  bool is_far_away; // [rsp+17h] [rbp-F9h]
  uint32_t now; // [rsp+18h] [rbp-F8h]
  uint32_t radius; // [rsp+1Ch] [rbp-F4h]
  uint32_t far_away_time; // [rsp+20h] [rbp-F0h]
  uint32_t animal_id; // [rsp+24h] [rbp-ECh]
  uint32_t firworm_escape_radius; // [rsp+28h] [rbp-E8h]
  uint32_t fireworm_appear_radius; // [rsp+2Ch] [rbp-E4h]
  uint32_t firworm_escape_num; // [rsp+30h] [rbp-E0h]
  ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+40h] [rbp-D0h]
  const data::EnvAnimalGatherExcelConfig *env_gather_config_ptr; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Scene> v27; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 gadget_ptr:124 64 16 19 world_scene_ptr:158";
  *(_QWORD *)(v2 + 16) = GadgetEnvAnimalComp::onUpdateTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  GadgetCompBase::getGadget(this);
  toPtr<Gadget,Gadget>((Gadget *)(v2 + 32));
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gadget/gadget_env_animal_comp.cpp",
      "onUpdateTimer",
      127);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v28, (const char (*)[22])"gadget_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else
  {
    now = now_ms / 0x3E8;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.const_value_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v27);
    radius = ConstValueExcelConfigMgr::getEnvAnimalRefreshMaxRadius(const_value_config_mgr);
    far_away_time = ConstValueExcelConfigMgr::getEnvAnimalRefreshFarAwayTime(const_value_config_mgr);
    is_far_away = GadgetEnvAnimalComp::isFarAwayAllPlayers(this, radius);
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
      goto LABEL_21;
    if ( !is_far_away )
      this->far_away_start_time_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->far_away_start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->far_away_start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( now >= this->far_away_start_time_ && far_away_time < now - this->far_away_start_time_ )
    {
      GadgetEnvAnimalComp::disappear(this, 0);
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/gadget_env_animal_comp.cpp",
        "onUpdateTimer",
        150);
      v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v28, (const char (*)[21])off_26126140);
      Gadget = GadgetCompBase::getGadget(this);
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, Gadget);
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    else
    {
LABEL_21:
      if ( *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( this->disappear_time_ && now > this->disappear_time_ )
      {
        GadgetCompBase::getGadget(this);
        Entity::getScene((const Entity *const)&v27);
        std::dynamic_pointer_cast<PlayerWorldScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 64));
        std::shared_ptr<Scene>::~shared_ptr(&v27);
        if ( !std::operator!=<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v2 + 64), 0LL) )
          goto LABEL_30;
        if ( *(_BYTE *)(((unsigned __int64)&this->zone_index_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->zone_index_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( this->zone_index_ )
          v7 = 1;
        else
LABEL_30:
          v7 = 0;
        if ( v7 )
        {
          v8 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          EnvAnimalComp = PlayerWorldScene::getEnvAnimalComp(v8);
          if ( *(_BYTE *)(((unsigned __int64)&this->zone_index_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->zone_index_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          SceneEnvAnimalComp::onEnvAnimalTimeout(EnvAnimalComp, this->zone_index_);
        }
        GadgetEnvAnimalComp::disappear(this, 1);
        std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 64));
      }
      else
      {
        v10 = GadgetCompBase::getGadget(this);
        animal_id = Gadget::getGadgetId(v10);
        v11 = GadgetCompBase::getGadget(this);
        if ( Gadget::getGadgetId(v11) != 70590008 )
          goto LABEL_43;
        firworm_escape_radius = ConstValueExcelConfigMgr::getFirewormEscapeRadius(const_value_config_mgr);
        fireworm_appear_radius = ConstValueExcelConfigMgr::getFirewormEscapeAppearRadius(const_value_config_mgr);
        firworm_escape_num = ConstValueExcelConfigMgr::getFirewormEscapeNum(const_value_config_mgr);
        if ( *(_BYTE *)(((unsigned __int64)&this->escape_num_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->escape_num_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( firworm_escape_num > this->escape_num_ && firworm_escape_radius && fireworm_appear_radius )
        {
          GadgetEnvAnimalComp::firewormSpecialEscape(this, firworm_escape_radius, fireworm_appear_radius);
        }
        else
        {
LABEL_43:
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v27);
          v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
          env_gather_config_ptr = EnvAnimalExcelConfigMgr::findEnvAnimalGatherConfig(
                                    &v12->design_config.txt_config_mgr.env_animal_config_mgr,
                                    animal_id,
                                    Gadget);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v27);
          if ( env_gather_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->escape_start_time_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->escape_start_time_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( this->escape_start_time_ )
              goto LABEL_52;
            if ( *(_BYTE *)(((unsigned __int64)&env_gather_config_ptr->escape_radius >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&env_gather_config_ptr->escape_radius >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( !GadgetEnvAnimalComp::isEscapeState(this, env_gather_config_ptr->escape_radius) )
LABEL_52:
              v13 = 0;
            else
              v13 = 1;
            if ( v13 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->escape_start_time_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->escape_start_time_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_store4(&this->escape_start_time_);
              }
              this->escape_start_time_ = now;
            }
            if ( *(_BYTE *)(((unsigned __int64)&this->escape_start_time_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->escape_start_time_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( this->escape_start_time_ && now >= this->escape_start_time_ )
            {
              v14 = now - this->escape_start_time_;
              if ( *(_BYTE *)(((unsigned __int64)&env_gather_config_ptr->escape_time >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)env_gather_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&env_gather_config_ptr->escape_time >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( v14 > env_gather_config_ptr->escape_time )
              {
                GadgetEnvAnimalComp::disappear(this, 1);
                common::milog::MiLogStream::create(
                  &v28,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/gadget/gadget_env_animal_comp.cpp",
                  "onUpdateTimer",
                  196);
                v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        &v28,
                        (const char (*)[19])"escape disappear: ");
                v16 = GadgetCompBase::getGadget(this);
                common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v15, v16);
                common::milog::MiLogStream::~MiLogStream(&v28);
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v28,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/gadget_env_animal_comp.cpp",
              "onUpdateTimer",
              186);
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v28,
              (const char (*)[33])"findEnvAnimalGatherConfig failed");
            common::milog::MiLogStream::~MiLogStream(&v28);
          }
        }
      }
    }
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  if ( v29 == (char *)v2 )
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

// Line 205: range 0000000017539238-000000001753944A
bool __cdecl GadgetEnvAnimalComp::isFarAwayAllPlayers(GadgetEnvAnimalComp *const this, uint32_t radius)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  Gadget *Gadget; // rax
  Scene *v7; // r14
  bool result; // al
  GadgetEnvAnimalComp::isFarAwayAllPlayers::<lambda(Player&)> v9; // [rsp-20h] [rbp-110h]
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
  *(_QWORD *)(v2 + 8) = "2 48 1 19 is_far_away_all:213 64 16 13 scene_ptr:206";
  *(_QWORD *)(v2 + 16) = GadgetEnvAnimalComp::isFarAwayAllPlayers;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  GadgetCompBase::getGadget(this);
  Entity::getScene((const Entity *const)(v2 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
  {
    v5 = 0;
  }
  else
  {
    Gadget = GadgetCompBase::getGadget(this);
    cur_pos = Entity::getPosition((const Entity *const)Gadget);
    *(_BYTE *)(v2 + 48) = 1;
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    LODWORD(__f_16) = radius;
    *(_QWORD *)&v9.__radius = __f_16;
    v9.__cur_pos = cur_pos;
    v9.__is_far_away_all = (bool *)(v2 + 48);
    std::function<ForeachPolicy ()(Player &)>::function<GadgetEnvAnimalComp::isFarAwayAllPlayers(unsigned int)::{lambda(Player &)#1},void,void>(
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

// Line 214: range 0000000017538FF4-0000000017539236
ForeachPolicy __cdecl GadgetEnvAnimalComp::isFarAwayAllPlayers(unsigned int)::{lambda(Player &)#1}::operator()(
        const GadgetEnvAnimalComp::isFarAwayAllPlayers::<lambda(Player&)> *const __closure,
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:216";
  *(_QWORD *)(v2 + 16) = GadgetEnvAnimalComp::isFarAwayAllPlayers(unsigned int)::{lambda(Player &)#1}::operator();
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

// Line 229: range 0000000017539690-00000000175398A2
bool __cdecl GadgetEnvAnimalComp::isEscapeState(GadgetEnvAnimalComp *const this, uint32_t escape_radius)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  Gadget *Gadget; // rax
  Scene *v7; // r14
  bool result; // al
  GadgetEnvAnimalComp::isEscapeState::<lambda(Player&)> v9; // [rsp-20h] [rbp-110h]
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
  *(_QWORD *)(v2 + 8) = "2 48 1 13 is_escape:237 64 16 13 scene_ptr:230";
  *(_QWORD *)(v2 + 16) = GadgetEnvAnimalComp::isEscapeState;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  GadgetCompBase::getGadget(this);
  Entity::getScene((const Entity *const)(v2 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
  {
    v5 = 0;
  }
  else
  {
    Gadget = GadgetCompBase::getGadget(this);
    cur_pos = Entity::getPosition((const Entity *const)Gadget);
    *(_BYTE *)(v2 + 48) = 0;
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    LODWORD(__f_16) = escape_radius;
    *(_QWORD *)&v9.__escape_radius = __f_16;
    v9.__cur_pos = cur_pos;
    v9.__is_escape = (bool *)(v2 + 48);
    std::function<ForeachPolicy ()(Player &)>::function<GadgetEnvAnimalComp::isEscapeState(unsigned int)::{lambda(Player &)#1},void,void>(
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

// Line 238: range 000000001753944C-000000001753968E
ForeachPolicy __cdecl GadgetEnvAnimalComp::isEscapeState(unsigned int)::{lambda(Player &)#1}::operator()(
        const GadgetEnvAnimalComp::isEscapeState::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const Vector3 *cur_pos; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const Vector3 *Position; // rax
  float PlaneDistance; // xmm1_4
  char v9; // al
  bool *is_escape; // rdx
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:240";
  *(_QWORD *)(v2 + 16) = GadgetEnvAnimalComp::isEscapeState(unsigned int)::{lambda(Player &)#1}::operator();
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
  PlaneDistance = getPlaneDistance(Position, cur_pos);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__escape_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__escape_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( (float)(int)__closure->__escape_radius > PlaneDistance )
    v9 = 1;
  else
LABEL_11:
    v9 = 0;
  if ( v9 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    is_escape = __closure->__is_escape;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__is_escape >> 3) + 0x7FFF8000) != 0
      && ((__int64)__closure->__is_escape & 7) >= *(_BYTE *)(((unsigned __int64)__closure->__is_escape >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(__closure->__is_escape);
    }
    *is_escape = 1;
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

// Line 254: range 00000000175398A4-0000000017539C8E
void __cdecl GadgetEnvAnimalComp::firewormSpecialEscape(
        GadgetEnvAnimalComp *const this,
        uint32_t escape_radius,
        uint32_t appear_radius)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  Gadget *Gadget; // rax
  __m128i v7; // xmm0
  float v8; // xmm2_4
  float y; // xmm1_4
  PlayerWorldScene *v10; // rax
  SceneEnvAnimalComp *EnvAnimalComp; // rdi
  float rand_angle; // [rsp+1Ch] [rbp-B4h]
  float x; // [rsp+20h] [rbp-B0h]
  float z; // [rsp+24h] [rbp-ACh]
  const Vector3 *old_pos; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Scene> v18; // [rsp+30h] [rbp-A0h] BYREF
  char v19[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 12 11 new_pos:265 64 16 19 world_scene_ptr:267";
  *(_QWORD *)(v3 + 16) = GadgetEnvAnimalComp::firewormSpecialEscape;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -202178560;
  if ( GadgetEnvAnimalComp::isEscapeState(this, escape_radius) )
  {
    Gadget = GadgetCompBase::getGadget(this);
    old_pos = Entity::getPosition((const Entity *const)Gadget);
    v7 = 0LL;
    *(float *)v7.m128i_i32 = common::tools::RandomUtils::rand<float>(0.0, 6.2831855);
    rand_angle = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
    x = (float)(int)appear_radius * std::cos(rand_angle);
    z = (float)(int)appear_radius * std::sin(rand_angle);
    if ( *(_BYTE *)(((unsigned __int64)&old_pos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)old_pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&old_pos->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v8 = old_pos->z + z;
    if ( *(_BYTE *)(((unsigned __int64)&old_pos->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)old_pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&old_pos->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    y = old_pos->y;
    if ( *(_BYTE *)(((unsigned __int64)old_pos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)old_pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)old_pos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Vector3::Vector3((Vector3 *const)(v3 + 32), old_pos->x + x, y, v8);
    GadgetCompBase::getGadget(this);
    Entity::getScene((const Entity *const)&v18);
    std::dynamic_pointer_cast<PlayerWorldScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 64));
    std::shared_ptr<Scene>::~shared_ptr(&v18);
    if ( !std::operator==<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v3 + 64), 0LL) )
    {
      v10 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      EnvAnimalComp = PlayerWorldScene::getEnvAnimalComp(v10);
      if ( *(_BYTE *)(((unsigned __int64)&this->escape_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->escape_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        EnvAnimalComp = (SceneEnvAnimalComp *)&this->escape_num_;
        __asan_report_load4();
      }
      SceneEnvAnimalComp::fireWormEscapeBlink(EnvAnimalComp, this->escape_num_ + 1, (const Vector3 *)(v3 + 32));
      GadgetEnvAnimalComp::disappear(this, 1);
    }
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 64));
  }
  if ( v19 == (char *)v3 )
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

// Line 278: range 0000000017539C90-0000000017539F75
void __cdecl GadgetEnvAnimalComp::disappear(GadgetEnvAnimalComp *const this, bool is_escape)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Gadget *Gadget; // r14
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(Gadget *, VisionContext *); // r15
  Gadget *v8; // rax
  Gadget *v9; // r14
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(Gadget *, VisionContext *); // r15
  VisionContext v12; // [rsp+24h] [rbp-9Ch] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:279";
  *(_QWORD *)(v2 + 16) = GadgetEnvAnimalComp::disappear;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  GadgetCompBase::getGadget(this);
  Entity::getScene((const Entity *const)(v2 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/gadget_env_animal_comp.cpp",
      "disappear",
      282);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v13, (const char (*)[24])"getScene return nullptr");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else if ( is_escape )
  {
    Gadget = GadgetCompBase::getGadget(this);
    if ( *(_BYTE *)(((unsigned __int64)Gadget >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = *(_QWORD *)Gadget->baseclass_0 + 128LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    v7 = *(void (__fastcall **)(Gadget *, VisionContext *))v6;
    VisionContext::VisionContext(&v12, VISION_GATHER_ESCAPE);
    v7(Gadget, &v12);
  }
  else
  {
    v8 = GadgetCompBase::getGadget(this);
    Creature::changeLifeState(v8, LIFE_DEAD, 0LL, 1);
    v9 = GadgetCompBase::getGadget(this);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = *(_QWORD *)v9->baseclass_0 + 128LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    v11 = *(void (__fastcall **)(Gadget *, VisionContext *))v10;
    VisionContext::VisionContext(&v12, VISION_DIE);
    v11(v9, &v12);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
