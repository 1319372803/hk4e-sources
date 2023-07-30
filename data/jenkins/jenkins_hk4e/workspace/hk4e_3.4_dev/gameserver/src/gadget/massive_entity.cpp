// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/massive_entity.cpp

// Line 19: range 0000000014515DCE-00000000145162A0
MassiveEntityPtr __cdecl MassiveEntity::create(const MassiveEntityParam *param)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rdx
  MassiveEntityPtr result; // rax
  Entity *v8; // rdi
  Creature *v9; // rdi
  MassiveEntity *p_entity_type; // rdi
  const MassiveEntity::MassiveEntityInfo *v11; // rcx
  int64_t v12; // rsi
  common::milog::MiLogStream *v13; // rax
  const MassiveEntityParam *parama; // [rsp+0h] [rbp-A0h]
  const data::GadgetExcelConfig *gadget_config_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-80h] BYREF
  char v18[96]; // [rsp+40h] [rbp-60h] BYREF

  parama = (const MassiveEntityParam *)v1;
  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 massive_entity_ptr:26";
  *(_QWORD *)(v2 + 16) = MassiveEntity::create;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 32));
  p_gadget_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->design_config.txt_config_mgr.gadget_config_mgr;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v1 >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4();
  gadget_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, *(_DWORD *)v1);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  if ( gadget_config_ptr )
  {
    common::tools::perf::make_shared<MassiveEntity,unsigned int const&>(
      (const unsigned int *)(v2 + 32),
      (const unsigned int *)v1);
    if ( std::operator==<MassiveEntity>((const std::shared_ptr<MassiveEntity> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/massive_entity.cpp",
        "create",
        29);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v17,
        (const char (*)[27])"massive_entity_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v17);
      std::shared_ptr<MassiveEntity>::shared_ptr((std::shared_ptr<MassiveEntity> *const)param, 0LL);
    }
    else
    {
      v8 = (Entity *)std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = (Entity *)(v1 + 8);
        __asan_report_load4();
      }
      Entity::setEntityId(v8, *(_DWORD *)(v1 + 8));
      v9 = (Creature *)std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((v1 + 24) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 24) >> 3) + 0x7FFF8000) <= 3 )
      {
        v9 = (Creature *)(v1 + 24);
        __asan_report_load4();
      }
      Creature::setAuthorityPeerId(v9, *(_DWORD *)(v1 + 24));
      p_entity_type = std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MassiveEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v11 = (const MassiveEntity::MassiveEntityInfo *)(v1 + 32);
      if ( *(_BYTE *)(((v1 + 16) >> 3) + 0x7FFF8000) )
      {
        p_entity_type = (MassiveEntity *)(v1 + 16);
        __asan_report_load8();
      }
      v12 = *(_QWORD *)(v1 + 16);
      if ( *(_BYTE *)(((unsigned __int64)&parama->entity_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)parama + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&parama->entity_type >> 3) + 0x7FFF8000) )
      {
        p_entity_type = (MassiveEntity *)&parama->entity_type;
        __asan_report_load4();
      }
      if ( MassiveEntity::init(p_entity_type, parama->entity_type, v12, v11) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/massive_entity.cpp",
          "create",
          36);
        v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v17,
                (const char (*)[21])"init failed, obj_id:");
        common::milog::MiLogStream::operator<<<long,(long *)0>(v13, &parama->obj_id);
        common::milog::MiLogStream::~MiLogStream(&v17);
        std::shared_ptr<MassiveEntity>::shared_ptr((std::shared_ptr<MassiveEntity> *const)param, 0LL);
      }
      else
      {
        std::shared_ptr<MassiveEntity>::shared_ptr(
          (std::shared_ptr<MassiveEntity> *const)param,
          (std::shared_ptr<MassiveEntity> *)(v2 + 32));
      }
    }
    std::shared_ptr<MassiveEntity>::~shared_ptr((std::shared_ptr<MassiveEntity> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/massive_entity.cpp",
      "create",
      23);
    v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v17,
           (const char (*)[40])"findGadgetExcelConfig fails, config_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)v1);
    common::milog::MiLogStream::~MiLogStream(&v17);
    std::shared_ptr<MassiveEntity>::shared_ptr((std::shared_ptr<MassiveEntity> *const)param, 0LL);
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<MassiveEntity,(__gnu_cxx::_Lock_policy)2>::element_type *)param;
  return result;
};

// Line 43: range 00000000145162A2-00000000145166E0
int32_t __cdecl MassiveEntity::init(
        MassiveEntity *const this,
        uint32_t entity_type,
        int64_t obj_id,
        const MassiveEntity::MassiveEntityInfo *entity_info)
{
  common::milog::MiLogStream *v4; // rdx
  MassiveEntity *v6; // rdx
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rdx
  std::string __rhs; // [rsp+30h] [rbp-B0h] BYREF
  std::string __lhs; // [rsp+50h] [rbp-90h] BYREF
  std::string v13; // [rsp+70h] [rbp-70h] BYREF
  std::string v14; // [rsp+90h] [rbp-50h] BYREF
  std::string name; // [rsp+B0h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->obj_id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::tools::StringUtils::numToStr<long>(&v14, this->obj_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  common::tools::StringUtils::numToStr<unsigned int>(&__rhs, this->entity_type_);
  std::operator+<char>(&__lhs, "MassiveEntity_", &__rhs);
  std::operator+<char>(&v13, &__lhs, "_");
  std::operator+<char>(&name, &v13, &v14);
  Entity::setName((Entity *const)this, &name);
  std::string::~string(&name);
  std::string::~string(&v13);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  std::string::~string(&v14);
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entity_type_);
  }
  this->entity_type_ = entity_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->obj_id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->obj_id_);
  this->obj_id_ = obj_id;
  std::variant<proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo>::operator=(
    &this->entity_info_,
    entity_info);
  if ( Gadget::getGadgetConfig((const Gadget *const)this) )
  {
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = *(_QWORD *)this->baseclass_0 + 408LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(MassiveEntity *, __int64))v7)(v6, 1LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/massive_entity.cpp",
        "init",
        59);
      v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[19])"initAbility fails ");
      common::milog::MiLogStream::operator<<<MassiveEntity,(MassiveEntity*)0>(v8, this);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/massive_entity.cpp",
      "init",
      53);
    v4 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[22])"getGadgetConfig fails");
    common::milog::MiLogStream::operator<<<MassiveEntity,(MassiveEntity*)0>(v4, this);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    return -1;
  }
};

// Line 68: range 00000000145166E2-00000000145168B5
int32_t __cdecl MassiveEntity::toClient(const MassiveEntity *const this, proto::ServerMassiveEntity *info)
{
  uint32_t GadgetId; // edx
  uint32_t EntityId; // edx
  uint32_t AuthorityPeerId; // edx
  proto::MassiveWaterInfo *v5; // rbx
  const proto::MassiveWaterInfo *v6; // rax
  proto::MassiveGrassInfo *v7; // rbx
  const proto::MassiveGrassInfo *v8; // rax
  proto::MassiveBoxInfo *v9; // rbx
  const proto::MassiveBoxInfo *v10; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ServerMassiveEntity::set_entity_type(info, this->entity_type_);
  GadgetId = Gadget::getGadgetId((const Gadget *const)this);
  proto::ServerMassiveEntity::set_config_id(info, GadgetId);
  EntityId = Entity::getEntityId((const Entity *const)this);
  proto::ServerMassiveEntity::set_runtime_id(info, EntityId);
  AuthorityPeerId = Creature::getAuthorityPeerId((const Creature *const)this);
  proto::ServerMassiveEntity::set_authority_peer_id(info, AuthorityPeerId);
  if ( *(_BYTE *)(((unsigned __int64)&this->obj_id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::ServerMassiveEntity::set_obj_id(info, this->obj_id_);
  if ( std::holds_alternative<proto::MassiveWaterInfo,proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo>(&this->entity_info_) )
  {
    v5 = proto::ServerMassiveEntity::mutable_water_info(info);
    v6 = std::get<proto::MassiveWaterInfo,proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo>(&this->entity_info_);
    proto::MassiveWaterInfo::CopyFrom(v5, v6);
  }
  else if ( std::holds_alternative<proto::MassiveGrassInfo,proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo>(&this->entity_info_) )
  {
    v7 = proto::ServerMassiveEntity::mutable_grass_info(info);
    v8 = std::get<proto::MassiveGrassInfo,proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo>(&this->entity_info_);
    proto::MassiveGrassInfo::CopyFrom(v7, v8);
  }
  else if ( std::holds_alternative<proto::MassiveBoxInfo,proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo>(&this->entity_info_) )
  {
    v9 = proto::ServerMassiveEntity::mutable_box_info(info);
    v10 = std::get<proto::MassiveBoxInfo,proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo>(&this->entity_info_);
    proto::MassiveBoxInfo::CopyFrom(v9, v10);
  }
  return 0;
};

// Line 91: range 00000000145168B6-0000000014516A10
int32_t __cdecl MassiveEntity::enterScene(MassiveEntity *const this, Scene *scene, const VisionContext *a3)
{
  common::milog::MiLogStream *v3; // rdx
  uint32_t EntityId; // ecx
  int64_t obj_id; // rdi
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( Scene::addGridlessEntity(scene, (Entity *)this) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/massive_entity.cpp",
      "enterScene",
      94);
    v3 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v8,
           (const char (*)[24])"addGridlessEntity fails");
    common::milog::MiLogStream::operator<<<MassiveEntity,(MassiveEntity*)0>(v3, this);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    EntityId = Entity::getEntityId((const Entity *const)this);
    if ( *(_BYTE *)(((unsigned __int64)&this->obj_id_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    obj_id = this->obj_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) )
    {
      obj_id = (int64_t)&this->entity_type_;
      __asan_report_load4();
    }
    Scene::addMassiveEntity(scene, this->entity_type_, obj_id, EntityId);
    return 0;
  }
};

// Line 103: range 0000000014516A12-0000000014516C81
int32_t __cdecl MassiveEntity::leaveScene(MassiveEntity *const this, const VisionContext *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  Scene *p_obj_id; // rdi
  int64_t obj_id; // rcx
  Scene *v9; // r14
  uint32_t EntityId; // eax
  int32_t result; // eax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-90h] BYREF
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:104";
  *(_QWORD *)(v2 + 16) = MassiveEntity::leaveScene;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v2 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/massive_entity.cpp",
      "leaveScene",
      107);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v13, (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::operator<<<MassiveEntity,(MassiveEntity*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v6 = -1;
  }
  else
  {
    p_obj_id = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->obj_id_ >> 3) + 0x7FFF8000) )
    {
      p_obj_id = (Scene *)&this->obj_id_;
      __asan_report_load8();
    }
    obj_id = this->obj_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) )
    {
      p_obj_id = (Scene *)&this->entity_type_;
      __asan_report_load4();
    }
    Scene::deleteMassiveEntity(p_obj_id, this->entity_type_, obj_id);
    v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EntityId = Entity::getEntityId((const Entity *const)this);
    v6 = Scene::delGridlessEntity(v9, EntityId);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = v6;
  if ( v14 == (char *)v2 )
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
