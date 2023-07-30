// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/home_gather_comp.cpp

// Line 29: range 0000000014515066-00000000145152C1
void __cdecl HomeGatherComp::HomeGatherComp(HomeGatherComp *const this, Gadget *gadget, const HomeGatherParam *param)
{
  int (**v3)(...); // rdx
  uint32_t gather_id; // ecx
  uint32_t field_guid; // ecx
  uint32_t sub_field_index; // ecx
  uint32_t bundle_index; // ecx

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, gadget);
  v3 = (int (**)(...))(&`vtable for'HomeGatherComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  gather_id = param->gather_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gather_id_);
  }
  this->gather_id_ = gather_id;
  if ( *(_BYTE *)(((unsigned __int64)&param->field_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->field_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  field_guid = param->field_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->field_guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->field_guid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->field_guid_);
  }
  this->field_guid_ = field_guid;
  if ( *(_BYTE *)(((unsigned __int64)&param->sub_field_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->sub_field_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  sub_field_index = param->sub_field_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_field_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_field_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_field_index_);
  }
  this->sub_field_index_ = sub_field_index;
  if ( *(_BYTE *)(((unsigned __int64)&param->bundle_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->bundle_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  bundle_index = param->bundle_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->bundle_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bundle_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bundle_index_);
  }
  this->bundle_index_ = bundle_index;
};

// Line 40: range 00000000145152C2-0000000014515406
const data::GatherExcelConfig *__cdecl HomeGatherComp::getGatherConfig(const HomeGatherComp *const this)
{
  GatherExcelConfigMgr *p_gather_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  const data::GatherExcelConfig *gather_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_gather_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.gather_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gather_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  gather_config_ptr = data::GatherExcelConfigMgrBase::findGatherExcelConfig(p_gather_config_mgr, this->gather_id_);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( gather_config_ptr )
    return gather_config_ptr;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/gadget/home_gather_comp.cpp",
    "getGatherConfig",
    44);
  v2 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
         &v6,
         (const char (*)[40])"findGatherExcelConfig fails, gather_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->gather_id_);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return 0LL;
};

// Line 51: range 0000000014515408-0000000014515575
int32_t __cdecl HomeGatherComp::toClient(const HomeGatherComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  proto::GadgetBornType born_type; // [rsp+1Ch] [rbp-44h]
  const data::GatherExcelConfig *gather_config_ptr; // [rsp+20h] [rbp-40h]
  proto::GatherGadgetInfo *gather_gadget_info_ptr; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  born_type = GADGET_BORN_NONE;
  gather_config_ptr = HomeGatherComp::getGatherConfig(this);
  if ( gather_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->point_location >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gather_config_ptr->point_location >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( gather_config_ptr->point_location == POINT_AIR )
      born_type = GADGET_BORN_IN_AIR;
    proto::SceneGadgetInfo::set_born_type(gadget_info, born_type);
    gather_gadget_info_ptr = proto::SceneGadgetInfo::mutable_gather_gadget(gadget_info);
    if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gather_config_ptr->item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::GatherGadgetInfo::set_item_id(gather_gadget_info_ptr, gather_config_ptr->item_id);
    proto::GatherGadgetInfo::set_is_forbid_guest(gather_gadget_info_ptr, 1);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/home_gather_comp.cpp",
      "toClient",
      57);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v6,
      (const char (*)[28])"findGatherExcelConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 74: range 0000000014515576-00000000145155B2
int32_t __cdecl HomeGatherComp::interactCheck(
        HomeGatherComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  PlayerSceneComp *SceneComp; // rax

  SceneComp = Player::getSceneComp(player);
  if ( !PlayerSceneComp::isInMyHomeWorld(SceneComp) )
    return -1;
  else
    return 0;
};

// Line 83: range 00000000145155B4-0000000014515DCD
int32_t __cdecl HomeGatherComp::interact(HomeGatherComp *const this, Player *player, const EntityInteractParam *param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t v15; // r14d
  Home *v16; // rax
  HomePlantComp *PlantComp; // rdi
  uint32_t bundle_index; // esi
  uint32_t sub_field_index; // ecx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  Gadget *v28; // rax
  Gadget *v29; // rax
  Gadget *v30; // rax
  unsigned int *v31; // r9
  PlayerEventComp *EventComp; // r14
  Gadget *v33; // r14
  unsigned __int64 v34; // rax
  void (__fastcall *v35)(Gadget *, VisionContext *); // r15
  std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  int32_t result; // eax
  unsigned int *v38; // [rsp+0h] [rbp-140h]
  unsigned int EntityId; // [rsp+24h] [rbp-11Ch] BYREF
  unsigned int ConfigId; // [rsp+28h] [rbp-118h] BYREF
  unsigned int __args_0; // [rsp+2Ch] [rbp-114h] BYREF
  int32_t ret; // [rsp+30h] [rbp-110h]
  uint32_t entity_id; // [rsp+34h] [rbp-10Ch]
  Gadget *gadget; // [rsp+38h] [rbp-108h]
  VisionContext v48; // [rsp+44h] [rbp-FCh] BYREF
  common::milog::MiLogStream v49; // [rsp+50h] [rbp-F0h] BYREF
  unsigned int v50[52]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v50;
  v38 = v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 11 home_ptr:93 64 16 13 event_ptr:110 96 16 13 scene_ptr:115 128 16 23 scene_home_comp_ptr:121";
  *(_QWORD *)(v3 + 16) = HomeGatherComp::interact;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  SceneComp = Player::getSceneComp(player);
  if ( !PlayerSceneComp::isInMyHomeWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/home_gather_comp.cpp",
      "interact",
      86);
    v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v49, (const char (*)[22])off_253F01C0);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])"gather_id_ ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->gather_id_);
    v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])"field_guid_ ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->field_guid_);
    v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v11, (const char (*)[18])"sub_field_index_ ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->sub_field_index_);
    v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])"bundle_index_ ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->bundle_index_);
    common::milog::MiLogStream::~MiLogStream(&v49);
    v15 = -1;
  }
  else
  {
    Player::getHomeComp(player);
    PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v3 + 32));
    if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/home_gather_comp.cpp",
        "interact",
        96);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v49,
        (const char (*)[28])"findGatherExcelConfig fails");
      common::milog::MiLogStream::~MiLogStream(&v49);
      v15 = -1;
    }
    else
    {
      v16 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      PlantComp = Home::getPlantComp(v16);
      if ( *(_BYTE *)(((unsigned __int64)&this->bundle_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bundle_index_ >> 3) + 0x7FFF8000) )
      {
        PlantComp = (HomePlantComp *)&this->bundle_index_;
        __asan_report_load4();
      }
      bundle_index = this->bundle_index_;
      if ( *(_BYTE *)(((unsigned __int64)&this->sub_field_index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->sub_field_index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        PlantComp = (HomePlantComp *)&this->sub_field_index_;
        __asan_report_load4();
      }
      sub_field_index = this->sub_field_index_;
      if ( *(_BYTE *)(((unsigned __int64)&this->field_guid_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->field_guid_ >> 3) + 0x7FFF8000) )
      {
        PlantComp = (HomePlantComp *)&this->field_guid_;
        __asan_report_load4();
      }
      ret = HomePlantComp::gather(PlantComp, player, this->field_guid_, sub_field_index, bundle_index);
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/home_gather_comp.cpp",
          "interact",
          102);
        v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v49, (const char (*)[13])"gather fail.");
        v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])"gather_id_ ");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->gather_id_);
        v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])"field_guid_ ");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &this->field_guid_);
        v25 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v24,
                (const char (*)[18])"sub_field_index_ ");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &this->sub_field_index_);
        v27 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v26, (const char (*)[15])"bundle_index_ ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &this->bundle_index_);
        common::milog::MiLogStream::~MiLogStream(&v49);
        v15 = ret;
      }
      else
      {
        v28 = GadgetCompBase::getGadget(this);
        __args_0 = Gadget::getGadgetId(v28);
        v29 = GadgetCompBase::getGadget(this);
        ConfigId = Entity::getConfigId((const Entity *const)v29);
        v30 = GadgetCompBase::getGadget(this);
        EntityId = Entity::getEntityId((const Entity *const)v30);
        common::tools::perf::make_shared<HomeGatherEvent,unsigned int,unsigned int,unsigned int &,unsigned int>(
          (unsigned int *)(v3 + 128),
          &EntityId,
          &ConfigId,
          &this->gather_id_,
          &__args_0,
          v31,
          v50,
          (unsigned int *)param);
        std::shared_ptr<BaseEvent>::shared_ptr<HomeGatherEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v3 + 64),
          (std::shared_ptr<HomeGatherEvent> *)(v3 + 128));
        std::shared_ptr<HomeGatherEvent>::~shared_ptr((std::shared_ptr<HomeGatherEvent> *const)(v3 + 128));
        EventComp = Player::getEventComp(player);
        std::shared_ptr<BaseEvent>::shared_ptr(
          (std::shared_ptr<BaseEvent> *const)(v3 + 128),
          (const std::shared_ptr<BaseEvent> *)(v3 + 64));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v3 + 128));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 128));
        gadget = GadgetCompBase::getGadget(this);
        entity_id = Entity::getEntityId((const Entity *const)gadget);
        Entity::getScene((const Entity *const)(v3 + 96));
        Creature::changeLifeState(gadget, LIFE_DEAD, 0LL, 1);
        v33 = gadget;
        if ( *(_BYTE *)(((unsigned __int64)gadget >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v34 = *(_QWORD *)gadget->baseclass_0 + 128LL;
        if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
          v34 = __asan_report_load8();
        v35 = *(void (__fastcall **)(Gadget *, VisionContext *))v34;
        VisionContext::VisionContext(&v48, VISION_DIE);
        v35(v33, &v48);
        if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
        {
          std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          EcsBase<Scene,SceneCompBase,12u>::findComp<SceneHomeComp>((const EcsBase<Scene,SceneCompBase,12> *const)(v3 + 128));
          if ( std::operator!=<SceneHomeComp>((const std::shared_ptr<SceneHomeComp> *)(v3 + 128), 0LL) )
          {
            v36 = std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            SceneHomeComp::onRemoveGather(v36, entity_id);
          }
          std::shared_ptr<SceneHomeComp>::~shared_ptr((std::shared_ptr<SceneHomeComp> *const)(v3 + 128));
        }
        v15 = 0;
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 64));
      }
    }
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 32));
  }
  result = v15;
  if ( v38 == (unsigned int *)v3 )
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
