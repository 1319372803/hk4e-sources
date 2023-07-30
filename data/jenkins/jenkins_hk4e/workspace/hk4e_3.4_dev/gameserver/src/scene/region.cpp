// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/region.cpp

// Line 32: range 0000000015C5DC2C-0000000015C5DDDB
IntersectType __cdecl Region::getIntersectType(const Region *const this, const Vector3 *pos1, const Vector3 *pos2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rax
  char v7; // al
  char is_in_region1; // [rsp+2Eh] [rbp-2h]
  char is_in_region2; // [rsp+2Fh] [rbp-1h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(this->_vptr_DescribalBase + 31);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  is_in_region1 = (*(__int64 (__fastcall **)(const Region *const, const Vector3 *))v3)(this, pos1);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(this->_vptr_DescribalBase + 31);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  is_in_region2 = (*(__int64 (__fastcall **)(const Region *const, const Vector3 *))v4)(this, pos2);
  if ( is_in_region1 != 1 && is_in_region2 )
    return 1;
  if ( is_in_region1 && is_in_region2 != 1 )
    return 2;
  if ( is_in_region1 == 1 || is_in_region2 == 1 )
    goto LABEL_23;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_DescribalBase + 32);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(const Region *const, const Vector3 *, const Vector3 *))v6)(this, pos1, pos2) )
    v7 = 1;
  else
LABEL_23:
    v7 = 0;
  if ( v7 )
    return 3;
  else
    return 0;
};

// Line 53: range 0000000015C5DDDC-0000000015C5E329
std::string *__cdecl Region::getDesc[abi:cxx11](std::string *retstr, const Region *const this)
{
  unsigned int GroupId; // eax
  unsigned __int64 v3; // rax
  data::RegionShape v4; // eax
  const char *v5; // rax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-1D1h] BYREF
  std::string __rhs; // [rsp+20h] [rbp-1D0h] BYREF
  std::string __lhs; // [rsp+40h] [rbp-1B0h] BYREF
  std::string v10; // [rsp+60h] [rbp-190h] BYREF
  std::string v11; // [rsp+80h] [rbp-170h] BYREF
  std::string v12; // [rsp+A0h] [rbp-150h] BYREF
  std::string v13; // [rsp+C0h] [rbp-130h] BYREF
  std::string v14; // [rsp+E0h] [rbp-110h] BYREF
  std::string v15; // [rsp+100h] [rbp-F0h] BYREF
  std::string v16; // [rsp+120h] [rbp-D0h] BYREF
  std::string v17; // [rsp+140h] [rbp-B0h] BYREF
  std::string v18; // [rsp+160h] [rbp-90h] BYREF
  std::string v19; // [rsp+180h] [rbp-70h] BYREF
  std::string v20; // [rsp+1A0h] [rbp-50h] BYREF
  std::string v21; // [rsp+1C0h] [rbp-30h] BYREF

  Vector3::toString[abi:cxx11](&v20, &this->position_);
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entity_id_);
  }
  std::to_string(&v17, this->entity_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id_);
  }
  std::to_string(&v14, this->config_id_);
  GroupId = Entity::getGroupId(this);
  std::to_string(&v11, GroupId);
  std::allocator<char>::allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(this->_vptr_DescribalBase + 30);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  v4 = (*(unsigned int (__fastcall **)(const Region *const))v3)(this);
  v5 = data::enumValToStr(v4);
  std::string::basic_string<std::allocator<char>>(&__rhs, v5, &__a);
  std::operator+<char>(&__lhs, "[region_shape:", &__rhs);
  std::operator+<char>(&v10, &__lhs, ", group_id:");
  std::operator+<char>(&v12, &v10, &v11);
  std::operator+<char>(&v13, &v12, ", config_id:");
  std::operator+<char>(&v15, &v13, &v14);
  std::operator+<char>(&v16, &v15, ", entity_id:");
  std::operator+<char>(&v18, &v16, &v17);
  std::operator+<char>(&v19, &v18, ", pos:");
  std::operator+<char>(&v21, &v19, &v20);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &v21, "]");
  std::string::~string(&v21);
  std::string::~string(&v19);
  std::string::~string(&v18);
  std::string::~string(&v16);
  std::string::~string(&v15);
  std::string::~string(&v13);
  std::string::~string(&v12);
  std::string::~string(&v10);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  std::allocator<char>::~allocator(&__a);
  std::string::~string(&v11);
  std::string::~string(&v14);
  std::string::~string(&v17);
  std::string::~string(&v20);
  return retstr;
};

// Line 63: range 0000000015C5E32A-0000000015C5E343
bool __cdecl Region::isTriggerEnterLeaveEvtByVisionType(proto::VisionType vision_type)
{
  return !SceneUtils::isVisionTypeReplace(vision_type);
};

// Line 69: range 0000000015C5E344-0000000015C5EF98
int32_t __cdecl Region::addEntity(
        Region *const this,
        Entity *entity,
        bool is_trigger_enter_leave_evt,
        proto::VisionType vision_type)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rdx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::shared_ptr<Entity> *v10; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r15
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  __int64 v20; // rsi
  int v21; // r15d
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  uint32_t PlayerUid; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  char v25; // cl
  uint32_t entity_id; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  char v28; // cl
  uint32_t EntityId; // r15d
  __int64 v30; // rax
  char v31; // dl
  bool v32; // dl
  __int64 v33; // rsi
  uint32_t config_id; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rdx
  char v36; // cl
  unsigned __int64 v37; // rax
  int v38; // r15d
  __int64 v39; // rax
  char v40; // dl
  bool v41; // dl
  uint32_t ConfigId; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rdx
  char v44; // cl
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  char *v47; // rsi
  Player *v48; // rax
  PlayerVehicleComp *VehicleComp; // rax
  uint32_t CurVehicleType; // r15d
  __int64 v51; // rax
  char v52; // dl
  bool v53; // dl
  Group *v54; // rax
  int v55; // r15d
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rdx
  Player *v58; // rax
  PlayerSceneComp *SceneComp; // r15
  uint32_t v60; // r14d
  uint32_t GroupId; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-134h] BYREF
  common::milog::MiLogStream v67; // [rsp+30h] [rbp-130h] BYREF
  char v68[272]; // [rsp+50h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 4 12 entity_id:80 64 16 12 scene_ptr:70 96 16 13 entity_ptr:81 128 16 12 group_ptr:98 160 1"
                        "6 14 avatar_ptr:132 192 16 14 player_ptr:135";
  *(_QWORD *)(v5 + 16) = Region::addEntity;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -219021312;
  v7[536862725] = -219021312;
  v7[536862726] = -202178560;
  Entity::getScene((const Entity *const)(v5 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v5 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v67,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/region.cpp",
      "addEntity",
      73);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v67,
           (const char (*)[36])"[REGION] scene_ptr is null, region:");
    common::milog::MiLogStream::operator<<<Region,(Region*)0>(v8, this);
    common::milog::MiLogStream::~MiLogStream(&v67);
    v4 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    if ( !Scene::getIsInited(v9) )
    {
      v4 = 0;
    }
    else
    {
      *(_DWORD *)(v5 + 48) = Entity::getEntityId(entity);
      toThisPtr<Entity>((Entity *)(v5 + 96));
      v11 = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::emplace<unsigned int &,std::shared_ptr<Entity> &>(
              &this->entity_map_,
              (unsigned int *)(v5 + 48),
              (std::shared_ptr<Entity> *)(v5 + 96),
              (unsigned int *)&this->entity_map_,
              v10);
      if ( !v11.second )
      {
        common::milog::MiLogStream::create(
          &v67,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/region.cpp",
          "addEntity",
          84);
        v12 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v67,
                (const char (*)[38])"[REGION] duplicate entity, entity_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v5 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])", region:");
        common::milog::MiLogStream::operator<<<Region,(Region*)0>(v14, this);
        common::milog::MiLogStream::~MiLogStream(&v67);
        v4 = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v67,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/region.cpp",
          "addEntity",
          87);
        v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                &v67,
                (const char (*)[17])"[REGION] region:");
        v16 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(v15, this);
        v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" add entity:");
        val = Entity::getEntityId(entity);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v18,
                (const char (*)[17])" is_trigger_evt:");
        common::milog::MiLogStream::operator<<(v19, is_trigger_enter_leave_evt);
        common::milog::MiLogStream::~MiLogStream(&v67);
        Region::procAbilityGroups(this, entity, ADD_0, vision_type);
        Region::addRegionGroupVisionType(this, entity, vision_type);
        if ( !SceneUtils::isVisionTypeReplace(vision_type) )
          Region::tryReloadGroupOnNextPlayerMove(this, entity);
        if ( !is_trigger_enter_leave_evt )
          goto LABEL_55;
        Entity::getGroup((const Entity *const)(v5 + 128));
        if ( !std::operator!=<Group>((const std::shared_ptr<Group> *)(v5 + 128), 0LL) )
          goto LABEL_53;
        EventUtil::createEvent((data::EventType)(v5 + 160));
        v20 = 0LL;
        if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v5 + 160), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v67,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/region.cpp",
            "addEntity",
            104);
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v67, (const char (*)[18])"createEvent fails");
          common::milog::MiLogStream::~MiLogStream(&v67);
          v4 = -1;
          v21 = 0;
        }
        else
        {
          v22 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          PlayerUid = Entity::getPlayerUid(v22);
          v24 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
          v25 = *(_BYTE *)(((unsigned __int64)&v24->uid >> 3) + 0x7FFF8000);
          if ( v25 != 0 && (char)((((_BYTE)v24 + 60) & 7) + 3) >= v25 )
          {
            LOBYTE(v20) = v25 != 0;
            __asan_report_store4(&v24->uid, v20, (_BYTE)v24);
          }
          v24->uid = PlayerUid;
          if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->entity_id_);
          }
          entity_id = this->entity_id_;
          v27 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
          v28 = *(_BYTE *)(((unsigned __int64)&v27->source_entity_id >> 3) + 0x7FFF8000);
          if ( v28 != 0 && (char)((((_BYTE)v27 + 4) & 7) + 3) >= v28 )
          {
            LOBYTE(v20) = v28 != 0;
            __asan_report_store4(&v27->source_entity_id, v20, (_BYTE)v27);
          }
          v27->source_entity_id = entity_id;
          EntityId = Entity::getEntityId(entity);
          v30 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
          v31 = *(_BYTE *)(((unsigned __int64)(v30 + 40) >> 3) + 0x7FFF8000);
          LOBYTE(v20) = v31 != 0;
          v32 = v31 != 0 && v31 <= 3;
          if ( v32 )
            v30 = __asan_report_store4(v30 + 40, v20, v32);
          *(_DWORD *)(v30 + 40) = EntityId;
          v33 = (((_BYTE)this + 4) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&this->config_id_);
          }
          config_id = this->config_id_;
          v35 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
          v36 = *(_BYTE *)(((unsigned __int64)&v35->param1 >> 3) + 0x7FFF8000);
          if ( v36 != 0 && (char)((((_BYTE)v35 + 44) & 7) + 3) >= v36 )
          {
            LOBYTE(v33) = v36 != 0;
            __asan_report_store4(&v35->param1, v33, (_BYTE)v35);
          }
          v35->param1 = config_id;
          if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v37 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
          if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
            v37 = __asan_report_load8();
          v38 = (*(__int64 (__fastcall **)(Entity *))v37)(entity);
          v39 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
          v40 = *(_BYTE *)(((unsigned __int64)(v39 + 48) >> 3) + 0x7FFF8000);
          LOBYTE(v33) = v40 != 0;
          v41 = v40 != 0 && v40 <= 3;
          if ( v41 )
            v39 = __asan_report_store4(v39 + 48, v33, v41);
          *(_DWORD *)(v39 + 48) = v38;
          ConfigId = Entity::getConfigId(entity);
          v43 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
          v44 = *(_BYTE *)(((unsigned __int64)&v43->param3 >> 3) + 0x7FFF8000);
          if ( v44 != 0 && (char)((((_BYTE)v43 + 52) & 7) + 3) >= v44 )
          {
            LOBYTE(v33) = v44 != 0;
            __asan_report_store4(&v43->param3, v33, (_BYTE)v43);
          }
          v43->param3 = ConfigId;
          if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v45 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
          if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
            v45 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(Entity *))v45)(entity) == 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v46 = (unsigned __int64)(entity->_vptr_DescribalBase + 19);
            if ( *(_BYTE *)((v46 >> 3) + 0x7FFF8000) )
              v46 = __asan_report_load8();
            (*(void (__fastcall **)(unsigned __int64, Entity *))v46)(v5 + 192, entity);
            v47 = (char *)(v5 + 192);
            if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v5 + 192)) )
            {
              v48 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
              VehicleComp = Player::getVehicleComp(v48);
              CurVehicleType = PlayerVehicleComp::getCurVehicleType(VehicleComp);
              v51 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
              v52 = *(_BYTE *)(((unsigned __int64)(v51 + 56) >> 3) + 0x7FFF8000);
              LOBYTE(v47) = v52 != 0;
              v53 = v52 != 0 && v52 <= 3;
              if ( v53 )
                v51 = __asan_report_store4(v51 + 56, v47, v53);
              *(_DWORD *)(v51 + 56) = CurVehicleType;
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 192));
          }
          v54 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
          Group::handleEvent(v54, (EventPtr *)(v5 + 160));
          v21 = 1;
        }
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v5 + 160));
        if ( v21 == 1 )
LABEL_53:
          v55 = 1;
        else
          v55 = 0;
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v5 + 128));
        if ( v55 == 1 )
        {
LABEL_55:
          std::dynamic_pointer_cast<Avatar,Entity>((const std::shared_ptr<Entity> *)(v5 + 160));
          if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v5 + 160), 0LL) )
          {
            v56 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
            if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
              v56 = __asan_report_load8();
            v57 = *(_QWORD *)v56 + 152LL;
            if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
              v56 = __asan_report_load8();
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v57)(v5 + 192, v56);
            if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v5 + 192)) )
            {
              v58 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
              SceneComp = Player::getSceneComp(v58);
              if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_load4(&this->config_id_);
              }
              v60 = this->config_id_;
              GroupId = Entity::getGroupId(this);
              PlayerSceneComp::onPlayerEnterRegion(SceneComp, GroupId, v60);
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 192));
          }
          if ( std::function<void ()(Entity &)>::operator bool(&this->add_notify_func_) )
            std::function<void ()(Entity &)>::operator()(&this->add_notify_func_, entity);
          v4 = 0;
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 160));
        }
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v5 + 96));
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 64));
  result = v4;
  if ( v68 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 152: range 0000000015C5EF9A-0000000015C5FB87
int32_t __cdecl Region::delEntity(
        Region *const this,
        Entity *entity,
        bool is_trigger_enter_leave_evt,
        proto::VisionType vision_type)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rdx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r15
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  __int64 v18; // rsi
  int v19; // r15d
  uint32_t PlayerUid; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  char v22; // cl
  uint32_t entity_id; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  char v25; // cl
  uint32_t EntityId; // r15d
  __int64 v27; // rax
  char v28; // dl
  bool v29; // dl
  __int64 v30; // rsi
  uint32_t config_id; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rdx
  char v33; // cl
  unsigned __int64 v34; // rax
  int v35; // r15d
  __int64 v36; // rax
  char v37; // dl
  bool v38; // dl
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  _BOOL4 IsUnloading; // r15d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rdx
  char v42; // cl
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  char *v45; // rsi
  Player *v46; // rax
  PlayerVehicleComp *VehicleComp; // rax
  uint32_t CurVehicleType; // r15d
  __int64 v49; // rax
  char v50; // dl
  bool v51; // dl
  Group *v52; // rax
  int v53; // r15d
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdx
  Player *v56; // rax
  PlayerSceneComp *SceneComp; // r15
  uint32_t v58; // r14d
  uint32_t GroupId; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-114h] BYREF
  common::milog::MiLogStream v65; // [rsp+30h] [rbp-110h] BYREF
  char v66[240]; // [rsp+50h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v66;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 48 4 13 entity_id:163 64 16 13 scene_ptr:153 96 16 14 entity_ptr:200 128 16 14 avatar_ptr:201 "
                        "160 16 14 player_ptr:204";
  *(_QWORD *)(v5 + 16) = Region::delEntity;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -219021312;
  v7[536862725] = -202178560;
  Entity::getScene((const Entity *const)(v5 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v5 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v65,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/region.cpp",
      "delEntity",
      156);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v65,
           (const char (*)[36])"[REGION] scene_ptr is null, region:");
    common::milog::MiLogStream::operator<<<Region,(Region*)0>(v8, this);
    common::milog::MiLogStream::~MiLogStream(&v65);
    v4 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    if ( !Scene::getIsInited(v9) )
    {
      v4 = 0;
    }
    else
    {
      *(_DWORD *)(v5 + 48) = Entity::getEntityId(entity);
      if ( std::unordered_map<unsigned int,std::weak_ptr<Entity>>::erase(
             &this->entity_map_,
             (const std::unordered_map<unsigned int,std::weak_ptr<Entity>>::key_type *)(v5 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v65,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/region.cpp",
          "delEntity",
          169);
        v13 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                &v65,
                (const char (*)[17])"[REGION] region:");
        v14 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(v13, this);
        v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" del entity:");
        val = Entity::getEntityId(entity);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v16,
                (const char (*)[17])" is_trigger_evt:");
        common::milog::MiLogStream::operator<<(v17, is_trigger_enter_leave_evt);
        common::milog::MiLogStream::~MiLogStream(&v65);
        Region::procAbilityGroups(this, entity, DEL, vision_type);
        Region::delRegionGroupVisionType(this, entity, vision_type);
        if ( !is_trigger_enter_leave_evt )
          goto LABEL_53;
        Entity::getGroup((const Entity *const)(v5 + 96));
        if ( !std::operator!=<Group>((const std::shared_ptr<Group> *)(v5 + 96), 0LL) )
          goto LABEL_51;
        EventUtil::createEvent((data::EventType)(v5 + 128));
        v18 = 0LL;
        if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v5 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v65,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/region.cpp",
            "delEntity",
            180);
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v65, (const char (*)[18])"createEvent fails");
          common::milog::MiLogStream::~MiLogStream(&v65);
          v4 = -1;
          v19 = 0;
        }
        else
        {
          PlayerUid = Entity::getPlayerUid(entity);
          v21 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
          v22 = *(_BYTE *)(((unsigned __int64)&v21->uid >> 3) + 0x7FFF8000);
          if ( v22 != 0 && (char)((((_BYTE)v21 + 60) & 7) + 3) >= v22 )
          {
            LOBYTE(v18) = v22 != 0;
            __asan_report_store4(&v21->uid, v18, (_BYTE)v21);
          }
          v21->uid = PlayerUid;
          if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->entity_id_);
          }
          entity_id = this->entity_id_;
          v24 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
          v25 = *(_BYTE *)(((unsigned __int64)&v24->source_entity_id >> 3) + 0x7FFF8000);
          if ( v25 != 0 && (char)((((_BYTE)v24 + 4) & 7) + 3) >= v25 )
          {
            LOBYTE(v18) = v25 != 0;
            __asan_report_store4(&v24->source_entity_id, v18, (_BYTE)v24);
          }
          v24->source_entity_id = entity_id;
          EntityId = Entity::getEntityId(entity);
          v27 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
          v28 = *(_BYTE *)(((unsigned __int64)(v27 + 40) >> 3) + 0x7FFF8000);
          LOBYTE(v18) = v28 != 0;
          v29 = v28 != 0 && v28 <= 3;
          if ( v29 )
            v27 = __asan_report_store4(v27 + 40, v18, v29);
          *(_DWORD *)(v27 + 40) = EntityId;
          v30 = (((_BYTE)this + 4) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&this->config_id_);
          }
          config_id = this->config_id_;
          v32 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
          v33 = *(_BYTE *)(((unsigned __int64)&v32->param1 >> 3) + 0x7FFF8000);
          if ( v33 != 0 && (char)((((_BYTE)v32 + 44) & 7) + 3) >= v33 )
          {
            LOBYTE(v30) = v33 != 0;
            __asan_report_store4(&v32->param1, v30, (_BYTE)v32);
          }
          v32->param1 = config_id;
          if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v34 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
          if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
            v34 = __asan_report_load8();
          v35 = (*(__int64 (__fastcall **)(Entity *))v34)(entity);
          v36 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
          v37 = *(_BYTE *)(((unsigned __int64)(v36 + 48) >> 3) + 0x7FFF8000);
          LOBYTE(v30) = v37 != 0;
          v38 = v37 != 0 && v37 <= 3;
          if ( v38 )
            v36 = __asan_report_store4(v36 + 48, v30, v38);
          *(_DWORD *)(v36 + 48) = v35;
          v39 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          IsUnloading = Group::getIsUnloading(v39);
          v41 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
          v42 = *(_BYTE *)(((unsigned __int64)&v41->param3 >> 3) + 0x7FFF8000);
          if ( v42 != 0 && (char)((((_BYTE)v41 + 52) & 7) + 3) >= v42 )
          {
            LOBYTE(v30) = v42 != 0;
            __asan_report_store4(&v41->param3, v30, (_BYTE)v41);
          }
          v41->param3 = IsUnloading;
          if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v43 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
          if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
            v43 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(Entity *))v43)(entity) == 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v44 = (unsigned __int64)(entity->_vptr_DescribalBase + 19);
            if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
              v44 = __asan_report_load8();
            (*(void (__fastcall **)(unsigned __int64, Entity *))v44)(v5 + 160, entity);
            v45 = (char *)(v5 + 160);
            if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v5 + 160)) )
            {
              v46 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
              VehicleComp = Player::getVehicleComp(v46);
              CurVehicleType = PlayerVehicleComp::getCurVehicleType(VehicleComp);
              v49 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
              v50 = *(_BYTE *)(((unsigned __int64)(v49 + 56) >> 3) + 0x7FFF8000);
              LOBYTE(v45) = v50 != 0;
              v51 = v50 != 0 && v50 <= 3;
              if ( v51 )
                v49 = __asan_report_store4(v49 + 56, v45, v51);
              *(_DWORD *)(v49 + 56) = CurVehicleType;
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 160));
          }
          v52 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          Group::handleEvent(v52, (EventPtr *)(v5 + 128));
          v19 = 1;
        }
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v5 + 128));
        if ( v19 == 1 )
LABEL_51:
          v53 = 1;
        else
          v53 = 0;
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v5 + 96));
        if ( v53 == 1 )
        {
LABEL_53:
          toThisPtr<Entity>((Entity *)(v5 + 96));
          std::dynamic_pointer_cast<Avatar,Entity>((const std::shared_ptr<Entity> *)(v5 + 128));
          if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v5 + 128), 0LL) )
          {
            v54 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
            if ( *(_BYTE *)((v54 >> 3) + 0x7FFF8000) )
              v54 = __asan_report_load8();
            v55 = *(_QWORD *)v54 + 152LL;
            if ( *(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
              v54 = __asan_report_load8();
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v55)(v5 + 160, v54);
            if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v5 + 160)) )
            {
              v56 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
              SceneComp = Player::getSceneComp(v56);
              if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_load4(&this->config_id_);
              }
              v58 = this->config_id_;
              GroupId = Entity::getGroupId(this);
              PlayerSceneComp::onPlayerLeaveRegion(SceneComp, GroupId, v58);
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 160));
          }
          if ( std::function<void ()(Entity &)>::operator bool(&this->del_notify_func_) )
            std::function<void ()(Entity &)>::operator()(&this->del_notify_func_, entity);
          v4 = 0;
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 128));
          std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v5 + 96));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v65,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/region.cpp",
          "delEntity",
          166);
        v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v65,
                (const char (*)[31])"[REGION] can't find entity_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v5 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])", region:");
        common::milog::MiLogStream::operator<<<Region,(Region*)0>(v12, this);
        common::milog::MiLogStream::~MiLogStream(&v65);
        v4 = -1;
      }
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 64));
  result = v4;
  if ( v66 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 220: range 0000000015C5FBB4-0000000015C5FE4D
int32_t __cdecl Region::onBeforeLeaveScene(Region *const this, const VisionContext *context)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Scene *v5; // r14
  int32_t result; // eax
  Region::onBeforeLeaveScene::<lambda(Player&)> v7; // [rsp-20h] [rbp-F0h]
  __int128 __f_8; // [rsp+28h] [rbp-A8h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+40h] [rbp-90h] BYREF
  char v10[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:224";
  *(_QWORD *)(v2 + 16) = Region::onBeforeLeaveScene;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(context);
  }
  Region::clearEntity(this, context->type != VISION_REFRESH, context->type);
  Entity::getScene((const Entity *const)(v2 + 32));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( ((unsigned __int8)context & 7) >= *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&context->exclude_uid + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)context + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&context->exclude_uid + 3) >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load_n(context, 12LL);
    }
    *(VisionContext *)&__f_8 = *context;
    *(_OWORD *)&v7.__context.type = __f_8;
    v7.__this = this;
    std::function<ForeachPolicy ()(Player &)>::function<Region::onBeforeLeaveScene(VisionContext const&)::{lambda(Player &)#1},void,void>(
      &p_func,
      v7);
    Scene::foreachPlayer(v5, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = 0;
  if ( v10 == (char *)v2 )
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

// Line 227: range 0000000015C5FB88-0000000015C5FBB2
ForeachPolicy __cdecl Region::onBeforeLeaveScene(VisionContext const&)::{lambda(Player &)#1}::operator()(
        const Region::onBeforeLeaveScene::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerAbilityGroupComp *AbilityGroupComp; // rax

  AbilityGroupComp = Player::getAbilityGroupComp(player);
  PlayerAbilityGroupComp::tryRefreshAbilityGroup(AbilityGroupComp);
  return 0;
};

// Line 239: range 0000000015C5FF1A-0000000015C6004D
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Region::clearEntity(Region *const this, bool is_trigger_enter_leave_evt, proto::VisionType vision_type)
{
  unsigned int v3; // r13d
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rdx OVERLAPPED
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-40h] BYREF

  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/region.cpp",
    "clearEntity",
    240);
  v4 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v11,
         (const char (*)[30])"[REGION] clearEntity. region:");
  v5 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(v4, this);
  v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v5, (const char (*)[20])" is_is_trigger_evt:");
  common::milog::MiLogStream::operator<<(v6, is_trigger_enter_leave_evt);
  common::milog::MiLogStream::~MiLogStream(&v11);
  LOBYTE(v3) = is_trigger_enter_leave_evt;
  v7 = v3 | ((unsigned __int64)(unsigned int)vision_type << 32);
  std::function<ForeachPolicy ()(Entity &)>::function<Region::clearEntity(bool,proto::VisionType)::{lambda(Entity &)#1},void,void>(
    (std::function<ForeachPolicy(Entity&)> *const)&v11,
    *(Region::clearEntity::<lambda(Entity&)> *)(&v7 - 1));
  Region::foreachEntity<Entity>(this, (std::function<ForeachPolicy(Entity&)> *)&v11);
  std::function<ForeachPolicy ()(Entity &)>::~function((std::function<ForeachPolicy(Entity&)> *const)&v11);
  return 0;
};

// Line 241: range 0000000015C5FE4E-0000000015C5FF19
ForeachPolicy __cdecl Region::clearEntity(bool,proto::VisionType)::{lambda(Entity &)#1}::operator()(
        const Region::clearEntity::<lambda(Entity&)> *const __closure,
        Entity *entity)
{
  Region *this; // rdi
  proto::VisionType vision_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__vision_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__vision_type >> 3)
                                                             + 0x7FFF8000) )
  {
    this = (Region *)&__closure->__vision_type;
    __asan_report_load4(&__closure->__vision_type);
  }
  vision_type = __closure->__vision_type;
  if ( *(char *)(((unsigned __int64)&__closure->__is_trigger_enter_leave_evt >> 3) + 0x7FFF8000) < 0 )
  {
    this = (Region *)&__closure->__is_trigger_enter_leave_evt;
    __asan_report_load1(&__closure->__is_trigger_enter_leave_evt);
  }
  Region::delEntity(this, entity, __closure->__is_trigger_enter_leave_evt, vision_type);
  return 0;
};

// Line 251: range 0000000015C6004E-0000000015C60151
bool __fastcall Region::isEntityInRegion(const Region *const this, uint32_t entity_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false> __x; // [rsp+10h] [rbp-70h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false> __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 entity_id:250";
  *(_QWORD *)(v2 + 16) = Region::isEntityInRegion;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = entity_id;
  __y._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::end(&this->entity_map_)._M_cur;
  __x._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::find(
                 &this->entity_map_,
                 (const std::unordered_map<unsigned int,std::weak_ptr<Entity>>::key_type *)(v2 + 32))._M_cur;
  result = std::__detail::operator!=<std::pair<unsigned int const,std::weak_ptr<Entity>>,false>(&__x, &__y);
  if ( v8 == (char *)v2 )
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

// Line 257: range 0000000015C60152-0000000015C6017E
void __cdecl Region::setAddNotifyFunc(Region *const this, std::function<void(Entity&)> *p_add_notify_func)
{
  std::function<void ()(Entity &)>::operator=(&this->add_notify_func_, p_add_notify_func);
};

// Line 265: range 0000000015C60180-0000000015C601AC
void __cdecl Region::setDelNotifyFunc(Region *const this, std::function<void(Entity&)> *p_del_notify_func)
{
  std::function<void ()(Entity &)>::operator=(&this->del_notify_func_, p_del_notify_func);
};

// Line 273: range 0000000015C601AE-0000000015C60220
bool __cdecl SphereRegion::isInRegion(const SphereRegion *const this, const Vector3 *pos)
{
  float Distance; // xmm0_4

  Distance = getDistance(pos, &this->position_);
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius_);
  }
  return this->radius_ >= Distance;
};

// Line 279: range 0000000015C60222-0000000015C6029B
bool __cdecl SphereRegion::isIntersect(const SphereRegion *const this, const Vector3 *pos1, const Vector3 *pos2)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius_);
  }
  return isLineSegmentIntersectSphere(pos1, pos2, &this->position_, this->radius_);
};

// Line 284: range 0000000015C6029C-0000000015C603B0
data::VisionLevelType __cdecl SphereRegion::calcVisionLevelType(SphereRegion *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius_);
  }
  if ( this->radius_ < 50.0 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius_);
  }
  if ( this->radius_ < 100.0 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius_);
  }
  if ( this->radius_ >= 700.0 )
    return 3;
  else
    return 2;
};

// Line 303: range 0000000015C603B2-0000000015C60C67
void __cdecl SphereRegion::getCoveredCoordinates(
        SphereRegion *const this,
        const SceneGridComp *scene_grid_comp,
        std::vector<Coordinate> *coord_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  float x; // xmm0_4
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int *v9; // r8
  float left_x; // [rsp+24h] [rbp-ECh]
  float right_x; // [rsp+28h] [rbp-E8h]
  float low_z; // [rsp+2Ch] [rbp-E4h]
  float up_z; // [rsp+30h] [rbp-E0h]
  int grid_width; // [rsp+34h] [rbp-DCh]
  int32_t left_coord_x; // [rsp+38h] [rbp-D8h]
  int32_t right_coord_x; // [rsp+3Ch] [rbp-D4h]
  int32_t low_coord_y; // [rsp+40h] [rbp-D0h]
  int32_t up_coord_y; // [rsp+44h] [rbp-CCh]
  const Vector2 *begin_pos; // [rsp+48h] [rbp-C8h]
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-C0h] BYREF
  char v22[160]; // [rsp+70h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 5 x:321 48 4 5 y:323 64 12 10 circle:317 96 16 8 rect:325";
  *(_QWORD *)(v3 + 16) = SphereRegion::getCoveredCoordinates;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219020288;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->position_);
  }
  x = this->position_.x;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius_);
  }
  left_x = x - this->radius_;
  right_x = this->radius_ + this->position_.x;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->position_.z);
  }
  low_z = this->position_.z - this->radius_;
  up_z = this->radius_ + this->position_.z;
  begin_pos = SceneSightComp::getBeginPos(scene_grid_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->vision_level_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vision_level_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->vision_level_type_);
  }
  grid_width = SceneGridComp::getGridWidth(this->vision_level_type_);
  if ( grid_width )
  {
    if ( *(_BYTE *)(((unsigned __int64)begin_pos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)begin_pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)begin_pos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(begin_pos);
    }
    left_coord_x = (int)(float)((float)(left_x - begin_pos->x) / (float)grid_width);
    right_coord_x = (int)(float)((float)(right_x - begin_pos->x) / (float)grid_width);
    if ( *(_BYTE *)(((unsigned __int64)&begin_pos->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)begin_pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&begin_pos->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&begin_pos->y);
    }
    low_coord_y = (int)(float)((float)(low_z - begin_pos->y) / (float)grid_width);
    up_coord_y = (int)(float)((float)(up_z - begin_pos->y) / (float)grid_width);
    *(_DWORD *)(v3 + 64) = 0;
    *(_DWORD *)(v3 + 68) = 0;
    *(_DWORD *)(v3 + 72) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->position_);
    }
    *(float *)(v3 + 64) = this->position_.x;
    if ( *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->position_.z);
    }
    *(float *)(v3 + 68) = this->position_.z;
    if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->radius_);
    }
    *(float *)(v3 + 72) = this->radius_;
    for ( *(_DWORD *)(v3 + 32) = left_coord_x; right_coord_x >= *(_DWORD *)(v3 + 32); ++*(_DWORD *)(v3 + 32) )
    {
      for ( *(_DWORD *)(v3 + 48) = low_coord_y; up_coord_y >= *(_DWORD *)(v3 + 48); ++*(_DWORD *)(v3 + 48) )
      {
        *(_DWORD *)(v3 + 96) = 0;
        *(_DWORD *)(v3 + 100) = 0;
        *(_DWORD *)(v3 + 104) = 0;
        *(_DWORD *)(v3 + 108) = 0;
        if ( *(_BYTE *)(((unsigned __int64)begin_pos >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)begin_pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)begin_pos >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(begin_pos);
        }
        *(float *)(v3 + 96) = (float)((unsigned int)grid_width >> 1)
                            + (float)(begin_pos->x + (float)(grid_width * *(_DWORD *)(v3 + 32)));
        if ( *(_BYTE *)(((unsigned __int64)&begin_pos->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)begin_pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&begin_pos->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&begin_pos->y);
        }
        *(float *)(v3 + 100) = (float)((unsigned int)grid_width >> 1)
                             + (float)(begin_pos->y + (float)(grid_width * *(_DWORD *)(v3 + 48)));
        *(float *)(v3 + 104) = (float)grid_width;
        *(float *)(v3 + 108) = (float)grid_width;
        if ( isRectangleIntersectCircle((const AxisAlignedRectangle *)(v3 + 96), (const Circle *)(v3 + 64)) )
          std::vector<Coordinate>::emplace_back<int &,int &>(
            coord_vec,
            (int *)(v3 + 32),
            (int *)(v3 + 48),
            (int *)(v3 + 32),
            v9);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/region.cpp",
      "getCoveredCoordinates",
      310);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v21,
           (const char (*)[20])"vision_level_type_:");
    v8 = common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
           v7,
           &this->vision_level_type_);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])" grid_width == 0");
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  if ( v22 == (char *)v3 )
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

// Line 342: range 0000000015C60C68-0000000015C60FDA
bool __cdecl CubicRegion::isInRegion(const CubicRegion *const this, const Vector3 *pos)
{
  float x; // xmm0_4
  float v3; // xmm1_4
  float y; // xmm0_4
  float v5; // xmm1_4
  float z; // xmm0_4
  float v7; // xmm1_4

  if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pos);
  }
  x = pos->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->position_);
  }
  v3 = this->position_.x;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->size_);
  }
  if ( x < (float)(v3 - (float)(this->size_.x / 2.0))
    || (float)((float)(this->size_.x / 2.0) + this->position_.x) < pos->x )
  {
    return 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pos->y);
  }
  y = pos->y;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_.y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->position_.y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->position_.y);
  }
  v5 = this->position_.y;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->size_.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->size_.y);
  }
  if ( y < (float)(v5 - (float)(this->size_.y / 2.0))
    || (float)((float)(this->size_.y / 2.0) + this->position_.y) < pos->y )
  {
    return 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pos->z);
  }
  z = pos->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->position_.z);
  }
  v7 = this->position_.z;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_.z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->size_.z >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->size_.z);
  }
  return z >= (float)(v7 - (float)(this->size_.z / 2.0))
      && (float)((float)(this->size_.z / 2.0) + this->position_.z) >= pos->z;
};

// Line 353: range 0000000015C60FDC-0000000015C61017
bool __cdecl CubicRegion::isIntersect(const CubicRegion *const this, const Vector3 *pos1, const Vector3 *pos2)
{
  return isLineSegmentIntersectCube(pos1, pos2, &this->position_, &this->size_);
};

// Line 358: range 0000000015C61018-0000000015C610CC
data::VisionLevelType __cdecl CubicRegion::calcVisionLevelType(CubicRegion *const this)
{
  float *v1; // rax
  float *v2; // rdx
  float max_len; // [rsp+1Ch] [rbp-4h]

  v1 = (float *)std::max<float>(&this->size_.x, &this->size_.z);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v1);
  }
  max_len = *v2;
  if ( *v2 < 100.0 )
    return 0;
  if ( max_len < 200.0 )
    return 1;
  if ( max_len >= 1400.0 )
    return 3;
  return 2;
};

// Line 378: range 0000000015C610CE-0000000015C616BB
void __cdecl CubicRegion::getCoveredCoordinates(
        CubicRegion *const this,
        const SceneGridComp *scene_grid_comp,
        std::vector<Coordinate> *coord_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  float x; // xmm0_4
  float z; // xmm0_4
  int *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  float left_x; // [rsp+24h] [rbp-CCh]
  float right_x; // [rsp+28h] [rbp-C8h]
  float low_z; // [rsp+2Ch] [rbp-C4h]
  float up_z; // [rsp+30h] [rbp-C0h]
  int grid_width; // [rsp+34h] [rbp-BCh]
  int32_t left_coord_x; // [rsp+38h] [rbp-B8h]
  int32_t right_coord_x; // [rsp+3Ch] [rbp-B4h]
  int32_t low_coord_y; // [rsp+40h] [rbp-B0h]
  int32_t up_coord_y; // [rsp+44h] [rbp-ACh]
  const Vector2 *begin_pos; // [rsp+48h] [rbp-A8h]
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-A0h] BYREF
  char v23[128]; // [rsp+70h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 5 x:392 64 4 5 y:394";
  *(_QWORD *)(v3 + 16) = CubicRegion::getCoveredCoordinates;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->position_);
  }
  x = this->position_.x;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->size_);
  }
  left_x = x - (float)(this->size_.x / 2.0);
  right_x = (float)(this->size_.x / 2.0) + this->position_.x;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->position_.z);
  }
  z = this->position_.z;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_.z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->size_.z >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->size_.z);
  }
  low_z = z - (float)(this->size_.z / 2.0);
  up_z = (float)(this->size_.z / 2.0) + this->position_.z;
  begin_pos = SceneSightComp::getBeginPos(scene_grid_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->vision_level_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vision_level_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->vision_level_type_);
  }
  grid_width = SceneGridComp::getGridWidth(this->vision_level_type_);
  if ( grid_width )
  {
    if ( *(_BYTE *)(((unsigned __int64)begin_pos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)begin_pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)begin_pos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(begin_pos);
    }
    left_coord_x = (int)(float)((float)(left_x - begin_pos->x) / (float)grid_width);
    right_coord_x = (int)(float)((float)(right_x - begin_pos->x) / (float)grid_width);
    if ( *(_BYTE *)(((unsigned __int64)&begin_pos->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)begin_pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&begin_pos->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&begin_pos->y);
    }
    low_coord_y = (int)(float)((float)(low_z - begin_pos->y) / (float)grid_width);
    up_coord_y = (int)(float)((float)(up_z - begin_pos->y) / (float)grid_width);
    for ( *(_DWORD *)(v3 + 48) = left_coord_x; right_coord_x >= *(_DWORD *)(v3 + 48); ++*(_DWORD *)(v3 + 48) )
    {
      for ( *(_DWORD *)(v3 + 64) = low_coord_y; up_coord_y >= *(_DWORD *)(v3 + 64); ++*(_DWORD *)(v3 + 64) )
        std::vector<Coordinate>::emplace_back<int &,int &>(
          coord_vec,
          (int *)(v3 + 48),
          (int *)(v3 + 64),
          (int *)(v3 + 48),
          v8);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/region.cpp",
      "getCoveredCoordinates",
      385);
    v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v22,
           (const char (*)[20])"vision_level_type_:");
    v10 = common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
            v9,
            &this->vision_level_type_);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v10, (const char (*)[17])" grid_width == 0");
    common::milog::MiLogStream::~MiLogStream(&v22);
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

// Line 404: range 0000000015C616BC-0000000015C61961
const RegionScriptConfig *__cdecl Region::getScriptConfig(const Region *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  const RegionScriptConfig *RegionConfig; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  const RegionScriptConfig *result; // rax
  const GroupScriptConfig *group_script_config_ptr; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 group_ptr:405";
  *(_QWORD *)(v1 + 16) = Region::getScriptConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Entity::getGroup((const Entity *const)(v1 + 32));
  if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/region.cpp",
      "getScriptConfig",
      408);
    v4 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(&v10, this);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v4, (const char (*)[15])" has no group.");
    common::milog::MiLogStream::~MiLogStream(&v10);
    RegionConfig = 0LL;
  }
  else
  {
    v6 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    group_script_config_ptr = Group::getScriptConfig(v6);
    if ( group_script_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->config_id_);
      }
      RegionConfig = GroupScriptConfig::findRegionConfig(group_script_config_ptr, this->config_id_);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/region.cpp",
        "getScriptConfig",
        415);
      v7 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(&v10, this);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v7,
        (const char (*)[33])" get group script config failed.");
      common::milog::MiLogStream::~MiLogStream(&v10);
      RegionConfig = 0LL;
    }
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
  result = RegionConfig;
  if ( v11 == (char *)v1 )
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

// Line 423: range 0000000015C61962-0000000015C620BA
void __cdecl Region::procAbilityGroups(
        Region *const this,
        Entity *entity,
        RegionAbilityGroupOp op_type,
        proto::VisionType vision_type)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  Player *v10; // rax
  PlayerAbilityGroupComp *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  Player *v18; // rax
  PlayerAbilityGroupComp *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  Player *v26; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  Player *v34; // rax
  PlayerAbilityGroupComp *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  const RegionScriptConfig *script_config_ptr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v46; // [rsp+30h] [rbp-B0h] BYREF
  char v47[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 14 avatar_ptr:424 64 16 14 player_ptr:429";
  *(_QWORD *)(v4 + 16) = Region::procAbilityGroups;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  toPtr<Avatar,Entity>((Entity *)(v4 + 32));
  if ( !std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 32), 0LL) )
  {
    v7 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    v8 = *(_QWORD *)v7 + 152LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v8)(v4 + 64, v7);
    if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 64)) )
    {
      script_config_ptr = Region::getScriptConfig(this);
      if ( script_config_ptr )
      {
        if ( !std::vector<std::string>::empty(&script_config_ptr->ability_group_vec)
          || !std::vector<std::string>::empty(&script_config_ptr->team_ability_group_vec) )
        {
          if ( op_type )
          {
            if ( op_type == DEL )
            {
              if ( !SceneUtils::isVisionTypeReplace(vision_type) )
              {
                v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                AbilityGroupComp = Player::getAbilityGroupComp(v26);
                PlayerAbilityGroupComp::delTeamAbilityGroup(
                  AbilityGroupComp,
                  &script_config_ptr->team_ability_group_vec);
                common::milog::MiLogStream::create(
                  &v46,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/region.cpp",
                  "procAbilityGroups",
                  461);
                v28 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                        &v46,
                        (const char (*)[25])" DEL TEAM ABILITY_GROUP:");
                v29 = common::milog::MiLogStream::operator<<<std::string>(
                        v28,
                        &script_config_ptr->team_ability_group_vec);
                v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v29,
                        (const char (*)[11])", entity: ");
                v31 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
                v32 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v30, v31);
                v33 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v32, (const char (*)[3])" @");
                common::milog::MiLogStream::operator<<<Region,(Region*)0>(v33, this);
                common::milog::MiLogStream::~MiLogStream(&v46);
                v34 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                v35 = Player::getAbilityGroupComp(v34);
                PlayerAbilityGroupComp::delNoneFilterAbilityGroup(v35, &script_config_ptr->ability_group_vec);
                common::milog::MiLogStream::create(
                  &v46,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/region.cpp",
                  "procAbilityGroups",
                  463);
                v36 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                        &v46,
                        (const char (*)[27])" DEL AVATAR ABILITY_GROUP:");
                v37 = common::milog::MiLogStream::operator<<<std::string>(v36, &script_config_ptr->ability_group_vec);
                v38 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v37,
                        (const char (*)[11])", entity: ");
                v39 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
                v40 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v38, v39);
                v41 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v40, (const char (*)[3])" @");
                common::milog::MiLogStream::operator<<<Region,(Region*)0>(v41, this);
                common::milog::MiLogStream::~MiLogStream(&v46);
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v46,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/scene/region.cpp",
                "procAbilityGroups",
                469);
              v42 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(&v46, this);
              common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                v42,
                (const char (*)[26])" invalid ability group op");
              common::milog::MiLogStream::~MiLogStream(&v46);
            }
          }
          else if ( !SceneUtils::isVisionTypeReplace(vision_type) )
          {
            v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            v11 = Player::getAbilityGroupComp(v10);
            PlayerAbilityGroupComp::addTeamAbilityGroup(v11, &script_config_ptr->team_ability_group_vec, 1);
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/region.cpp",
              "procAbilityGroups",
              449);
            v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &v46,
                    (const char (*)[25])" ADD TEAM ABILITY_GROUP:");
            v13 = common::milog::MiLogStream::operator<<<std::string>(v12, &script_config_ptr->team_ability_group_vec);
            v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])", entity: ");
            v15 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
            v16 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v14, v15);
            v17 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v16, (const char (*)[3])" @");
            common::milog::MiLogStream::operator<<<Region,(Region*)0>(v17, this);
            common::milog::MiLogStream::~MiLogStream(&v46);
            v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            v19 = Player::getAbilityGroupComp(v18);
            PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v19, &script_config_ptr->ability_group_vec, 1);
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/region.cpp",
              "procAbilityGroups",
              451);
            v20 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    &v46,
                    (const char (*)[27])" ADD AVATAR ABILITY_GROUP:");
            v21 = common::milog::MiLogStream::operator<<<std::string>(v20, &script_config_ptr->ability_group_vec);
            v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])", entity: ");
            v23 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
            v24 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v22, v23);
            v25 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v24, (const char (*)[3])" @");
            common::milog::MiLogStream::operator<<<Region,(Region*)0>(v25, this);
            common::milog::MiLogStream::~MiLogStream(&v46);
          }
        }
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 32));
  if ( v47 == (char *)v4 )
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

// Line 476: range 0000000015C620BC-0000000015C624A4
void __cdecl Region::addRegionGroupVisionType(Region *const this, Entity *entity, proto::VisionType vision_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  PlayerViewMgr *p_entity_id; // rdi
  const std::set<unsigned int> *p_group_vision_type_set; // rcx
  const RegionScriptConfig *script_config_ptr; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-F0h] BYREF
  char v16[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 uid:499 64 16 14 avatar_ptr:477 96 16 13 scene_ptr:482 128 16 23 player_view_mgr_ptr:500";
  *(_QWORD *)(v3 + 16) = Region::addRegionGroupVisionType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  toPtr<Avatar,Entity>((Entity *)(v3 + 64));
  if ( !std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 64), 0LL) )
  {
    std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Entity::getScene((const Entity *const)(v3 + 96));
    if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
    {
      script_config_ptr = Region::getScriptConfig(this);
      if ( script_config_ptr )
      {
        if ( !std::set<unsigned int>::empty(&script_config_ptr->group_vision_type_set)
          && !SceneUtils::isVisionTypeReplace(vision_type) )
        {
          v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          *(_DWORD *)(v3 + 48) = Entity::getPlayerUid((const Entity *const)v6);
          v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          Scene::findPlayerViewMgr((const Scene *const)(v3 + 128), v7);
          if ( std::operator==<PlayerViewMgr>((const std::shared_ptr<PlayerViewMgr> *)(v3 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v15,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/region.cpp",
              "addRegionGroupVisionType",
              503);
            v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   &v15,
                   (const char (*)[14])"[REGION] uid:");
            v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v8,
                   (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              v9,
              (const char (*)[31])" not found player_view_mgr_ptr");
            common::milog::MiLogStream::~MiLogStream(&v15);
          }
          else
          {
            p_entity_id = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            p_group_vision_type_set = &script_config_ptr->group_vision_type_set;
            if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              p_entity_id = (PlayerViewMgr *)&this->entity_id_;
              __asan_report_load4(&this->entity_id_);
            }
            PlayerViewMgr::addRegionGroupVisionTypeSet(p_entity_id, this->entity_id_, p_group_vision_type_set);
          }
          std::shared_ptr<PlayerViewMgr>::~shared_ptr((std::shared_ptr<PlayerViewMgr> *const)(v3 + 128));
        }
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 64));
  if ( v16 == (char *)v3 )
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

// Line 511: range 0000000015C624A6-0000000015C6288E
void __cdecl Region::delRegionGroupVisionType(Region *const this, Entity *entity, proto::VisionType vision_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  PlayerViewMgr *p_entity_id; // rdi
  const std::set<unsigned int> *p_group_vision_type_set; // rcx
  const RegionScriptConfig *script_config_ptr; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-F0h] BYREF
  char v16[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 uid:534 64 16 14 avatar_ptr:512 96 16 13 scene_ptr:517 128 16 23 player_view_mgr_ptr:535";
  *(_QWORD *)(v3 + 16) = Region::delRegionGroupVisionType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  toPtr<Avatar,Entity>((Entity *)(v3 + 64));
  if ( !std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 64), 0LL) )
  {
    std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Entity::getScene((const Entity *const)(v3 + 96));
    if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
    {
      script_config_ptr = Region::getScriptConfig(this);
      if ( script_config_ptr )
      {
        if ( !std::set<unsigned int>::empty(&script_config_ptr->group_vision_type_set)
          && !SceneUtils::isVisionTypeReplace(vision_type) )
        {
          v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          *(_DWORD *)(v3 + 48) = Entity::getPlayerUid((const Entity *const)v6);
          v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          Scene::findPlayerViewMgr((const Scene *const)(v3 + 128), v7);
          if ( std::operator==<PlayerViewMgr>((const std::shared_ptr<PlayerViewMgr> *)(v3 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v15,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/region.cpp",
              "delRegionGroupVisionType",
              538);
            v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   &v15,
                   (const char (*)[14])"[REGION] uid:");
            v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v8,
                   (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              v9,
              (const char (*)[31])" not found player_view_mgr_ptr");
            common::milog::MiLogStream::~MiLogStream(&v15);
          }
          else
          {
            p_entity_id = std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerViewMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            p_group_vision_type_set = &script_config_ptr->group_vision_type_set;
            if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              p_entity_id = (PlayerViewMgr *)&this->entity_id_;
              __asan_report_load4(&this->entity_id_);
            }
            PlayerViewMgr::delRegionGroupVisionTypeSet(p_entity_id, this->entity_id_, p_group_vision_type_set);
          }
          std::shared_ptr<PlayerViewMgr>::~shared_ptr((std::shared_ptr<PlayerViewMgr> *const)(v3 + 128));
        }
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 64));
  if ( v16 == (char *)v3 )
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

// Line 546: range 0000000015C62F2C-0000000015C631DD
int32_t __cdecl Region::onAfterEnterScene(Region *const this, Scene *scene, const VisionContext *context)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  Scene *v8; // r14
  int32_t result; // eax
  Region::onAfterEnterScene::<lambda(Player&)> v10; // [rsp-20h] [rbp-F0h]
  __int128 __f_8; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-90h] BYREF
  char v14[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 scene_ptr:547";
  *(_QWORD *)(v3 + 16) = Region::onAfterEnterScene;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/region.cpp",
      "onAfterEnterScene",
      550);
    v6 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(&v13, this);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])" not on scene");
    common::milog::MiLogStream::~MiLogStream(&v13);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( ((unsigned __int8)context & 7) >= *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&context->exclude_uid + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)context + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&context->exclude_uid + 3) >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load_n(context, 12LL);
    }
    *(_QWORD *)&__f_8 = *(_QWORD *)&context->type;
    DWORD2(__f_8) = context->exclude_uid;
    *(_OWORD *)&v10.__context.type = __f_8;
    v10.__this = this;
    std::function<ForeachPolicy ()(Player &)>::function<Region::onAfterEnterScene(Scene &,VisionContext const&)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v13,
      v10);
    Scene::foreachPlayer(v8, (std::function<ForeachPolicy(Player&)> *)&v13);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v13);
    v7 = 0;
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v7;
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 554: range 0000000015C62890-0000000015C62F2A
ForeachPolicy __cdecl Region::onAfterEnterScene(Scene &,VisionContext const&)::{lambda(Player &)#1}::operator()(
        const Region::onAfterEnterScene::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  Region *this; // r14
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v16; // rax
  unsigned __int8 (__fastcall *v17)(Region *, const Vector3 *); // r15
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  const Vector3 *Position; // rax
  common::milog::MiLogStream *v20; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  Region *v30; // r14
  proto::VisionType type; // r15d
  Entity *v32; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  ForeachPolicy result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v36; // [rsp+30h] [rbp-90h] BYREF
  char v37[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:558";
  *(_QWORD *)(v2 + 16) = Region::onAfterEnterScene(Scene &,VisionContext const&)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getCurAvatar((Player *const)(v2 + 32));
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/region.cpp",
      "operator()",
      561);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v36,
           (const char (*)[23])"[REGION] place region:");
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(v5, __closure->__this);
    v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])" foreachPlayer. uid:");
    val = Player::getUid(player);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v8, (const char (*)[20])" cur_avatar is null");
    common::milog::MiLogStream::~MiLogStream(&v36);
  }
  else
  {
    v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( !Entity::isOnScene((const Entity *const)v9) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/region.cpp",
        "operator()",
        566);
      v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v36,
              (const char (*)[23])"[REGION] place region:");
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(v10, __closure->__this);
      v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v11,
              (const char (*)[21])" foreachPlayer. uid:");
      val = Player::getUid(player);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        v13,
        (const char (*)[28])" cur_avatar is not on scene");
      common::milog::MiLogStream::~MiLogStream(&v36);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      this = __closure->__this;
      p_vptr_DescribalBase = &__closure->__this->_vptr_DescribalBase;
      if ( *(_BYTE *)(((unsigned __int64)__closure->__this >> 3) + 0x7FFF8000) )
        p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
      v16 = *p_vptr_DescribalBase + 248LL;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v16 = __asan_report_load8();
      v17 = *(unsigned __int8 (__fastcall **)(Region *, const Vector3 *))v16;
      v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      Position = Entity::getPosition((const Entity *const)v18);
      if ( v17(this, Position) != 1 )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/region.cpp",
          "operator()",
          571);
        v20 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v36,
                (const char (*)[23])"[REGION] place region:");
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v21 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(v20, __closure->__this);
        v22 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v21,
                (const char (*)[21])" foreachPlayer. uid:");
        val = Player::getUid(player);
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          v23,
          (const char (*)[29])" cur_avatar is not in region");
        common::milog::MiLogStream::~MiLogStream(&v36);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/region.cpp",
          "operator()",
          574);
        v24 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v36,
                (const char (*)[23])"[REGION] place region:");
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v25 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(v24, __closure->__this);
        v26 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v25,
                (const char (*)[21])" foreachPlayer. uid:");
        val = Player::getUid(player);
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
        v28 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v27,
                (const char (*)[17])" add cur_avatar:");
        v29 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v28, v29);
        common::milog::MiLogStream::~MiLogStream(&v36);
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v30 = __closure->__this;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__context >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&__closure->__context >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&__closure->__context);
        }
        type = __closure->__context.type;
        v32 = (Entity *)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        Region::addEntity(v30, v32, 1, type);
      }
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  AbilityGroupComp = Player::getAbilityGroupComp(player);
  PlayerAbilityGroupComp::tryRefreshAbilityGroup(AbilityGroupComp);
  result = FOREACH_CONTINUE;
  if ( v37 == (char *)v2 )
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

// Line 587: range 0000000015C631DE-0000000015C635F5
void __cdecl Region::tryReloadGroupOnNextPlayerMove(Region *const this, Entity *entity)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  bool *p_is_forbid_special_region_trigger_group_load; // rax
  char v7; // al
  Scene *v8; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  Scene *v10; // rax
  SceneBlockGroupComp *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  const RegionScriptConfig *script_config_ptr; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 config_ptr:589 64 16 14 avatar_ptr:603 96 16 13 scene_ptr:608";
  *(_QWORD *)(v2 + 16) = Region::tryReloadGroupOnNextPlayerMove;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 32));
  if ( !std::operator!=<Config>((const std::shared_ptr<Config> *)(v2 + 32), 0LL) )
    goto LABEL_9;
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  p_is_forbid_special_region_trigger_group_load = &v5->is_forbid_special_region_trigger_group_load;
  if ( *(_BYTE *)(((unsigned __int64)p_is_forbid_special_region_trigger_group_load >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_forbid_special_region_trigger_group_load & 7) >= *(_BYTE *)(((unsigned __int64)p_is_forbid_special_region_trigger_group_load >> 3)
                                                                                        + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_forbid_special_region_trigger_group_load);
  }
  if ( v5->is_forbid_special_region_trigger_group_load )
    v7 = 1;
  else
LABEL_9:
    v7 = 0;
  if ( !v7 )
  {
    script_config_ptr = Region::getScriptConfig(this);
    if ( script_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&script_config_ptr->is_trigger_reload_group >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&script_config_ptr->is_trigger_reload_group);
      if ( script_config_ptr->is_trigger_reload_group )
      {
        toPtr<Avatar,Entity>((Entity *)(v2 + 64));
        if ( !std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 64), 0LL) )
        {
          std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          Entity::getScene((const Entity *const)(v2 + 96));
          if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 96), 0LL) )
          {
            v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            BlockGroupComp = Scene::getBlockGroupComp(v8);
            if ( !SceneBlockGroupComp::getIsNeedReloadGroup(BlockGroupComp) )
            {
              v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              v11 = Scene::getBlockGroupComp(v10);
              SceneBlockGroupComp::setIsNeedReloadGroup(v11, 1);
              common::milog::MiLogStream::create(
                &v16,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/region.cpp",
                "tryReloadGroupOnNextPlayerMove",
                619);
              v12 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      &v16,
                      (const char (*)[47])"region triggered group load, region config id:");
              v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v12,
                      &script_config_ptr->config_id);
              v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v13,
                      (const char (*)[13])", entity id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->entity_id_);
              common::milog::MiLogStream::~MiLogStream(&v16);
            }
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
      }
    }
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  if ( v17 == (char *)v2 )
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

// Line 624: range 0000000015C635F6-0000000015C63790
bool __cdecl CylinderRegion::isInRegion(const CylinderRegion *const this, const Vector3 *pos)
{
  float PlaneDistance; // xmm0_4
  float y; // xmm0_4
  float v4; // xmm1_4

  PlaneDistance = getPlaneDistance(pos, &this->position_);
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius_);
  }
  if ( this->radius_ < PlaneDistance )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pos->y);
  }
  y = pos->y;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_.y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->position_.y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->position_.y);
  }
  v4 = this->position_.y;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->height_);
  }
  return y >= (float)(v4 - (float)(this->height_ / 2.0))
      && (float)((float)(this->height_ / 2.0) + this->position_.y) >= pos->y;
};

// Line 632: range 0000000015C63792-0000000015C638A6
data::VisionLevelType __cdecl CylinderRegion::calcVisionLevelType(CylinderRegion *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius_);
  }
  if ( this->radius_ < 50.0 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius_);
  }
  if ( this->radius_ < 100.0 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius_);
  }
  if ( this->radius_ >= 700.0 )
    return 3;
  else
    return 2;
};

// Line 650: range 0000000015C638A8-0000000015C6415D
void __cdecl CylinderRegion::getCoveredCoordinates(
        CylinderRegion *const this,
        const SceneGridComp *scene_grid_comp,
        std::vector<Coordinate> *coord_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  float x; // xmm0_4
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int *v9; // r8
  float left_x; // [rsp+24h] [rbp-ECh]
  float right_x; // [rsp+28h] [rbp-E8h]
  float low_z; // [rsp+2Ch] [rbp-E4h]
  float up_z; // [rsp+30h] [rbp-E0h]
  int grid_width; // [rsp+34h] [rbp-DCh]
  int32_t left_coord_x; // [rsp+38h] [rbp-D8h]
  int32_t right_coord_x; // [rsp+3Ch] [rbp-D4h]
  int32_t low_coord_y; // [rsp+40h] [rbp-D0h]
  int32_t up_coord_y; // [rsp+44h] [rbp-CCh]
  const Vector2 *begin_pos; // [rsp+48h] [rbp-C8h]
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-C0h] BYREF
  char v22[160]; // [rsp+70h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 5 x:668 48 4 5 y:670 64 12 10 circle:664 96 16 8 rect:672";
  *(_QWORD *)(v3 + 16) = CylinderRegion::getCoveredCoordinates;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219020288;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->position_);
  }
  x = this->position_.x;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius_);
  }
  left_x = x - this->radius_;
  right_x = this->radius_ + this->position_.x;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->position_.z);
  }
  low_z = this->position_.z - this->radius_;
  up_z = this->radius_ + this->position_.z;
  begin_pos = SceneSightComp::getBeginPos(scene_grid_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->vision_level_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vision_level_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->vision_level_type_);
  }
  grid_width = SceneGridComp::getGridWidth(this->vision_level_type_);
  if ( grid_width )
  {
    if ( *(_BYTE *)(((unsigned __int64)begin_pos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)begin_pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)begin_pos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(begin_pos);
    }
    left_coord_x = (int)(float)((float)(left_x - begin_pos->x) / (float)grid_width);
    right_coord_x = (int)(float)((float)(right_x - begin_pos->x) / (float)grid_width);
    if ( *(_BYTE *)(((unsigned __int64)&begin_pos->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)begin_pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&begin_pos->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&begin_pos->y);
    }
    low_coord_y = (int)(float)((float)(low_z - begin_pos->y) / (float)grid_width);
    up_coord_y = (int)(float)((float)(up_z - begin_pos->y) / (float)grid_width);
    *(_DWORD *)(v3 + 64) = 0;
    *(_DWORD *)(v3 + 68) = 0;
    *(_DWORD *)(v3 + 72) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->position_);
    }
    *(float *)(v3 + 64) = this->position_.x;
    if ( *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->position_.z);
    }
    *(float *)(v3 + 68) = this->position_.z;
    if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->radius_);
    }
    *(float *)(v3 + 72) = this->radius_;
    for ( *(_DWORD *)(v3 + 32) = left_coord_x; right_coord_x >= *(_DWORD *)(v3 + 32); ++*(_DWORD *)(v3 + 32) )
    {
      for ( *(_DWORD *)(v3 + 48) = low_coord_y; up_coord_y >= *(_DWORD *)(v3 + 48); ++*(_DWORD *)(v3 + 48) )
      {
        *(_DWORD *)(v3 + 96) = 0;
        *(_DWORD *)(v3 + 100) = 0;
        *(_DWORD *)(v3 + 104) = 0;
        *(_DWORD *)(v3 + 108) = 0;
        if ( *(_BYTE *)(((unsigned __int64)begin_pos >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)begin_pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)begin_pos >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(begin_pos);
        }
        *(float *)(v3 + 96) = (float)((unsigned int)grid_width >> 1)
                            + (float)(begin_pos->x + (float)(grid_width * *(_DWORD *)(v3 + 32)));
        if ( *(_BYTE *)(((unsigned __int64)&begin_pos->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)begin_pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&begin_pos->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&begin_pos->y);
        }
        *(float *)(v3 + 100) = (float)((unsigned int)grid_width >> 1)
                             + (float)(begin_pos->y + (float)(grid_width * *(_DWORD *)(v3 + 48)));
        *(float *)(v3 + 104) = (float)grid_width;
        *(float *)(v3 + 108) = (float)grid_width;
        if ( isRectangleIntersectCircle((const AxisAlignedRectangle *)(v3 + 96), (const Circle *)(v3 + 64)) )
          std::vector<Coordinate>::emplace_back<int &,int &>(
            coord_vec,
            (int *)(v3 + 32),
            (int *)(v3 + 48),
            (int *)(v3 + 32),
            v9);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/region.cpp",
      "getCoveredCoordinates",
      657);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v21,
           (const char (*)[20])"vision_level_type_:");
    v8 = common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
           v7,
           &this->vision_level_type_);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])" grid_width == 0");
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  if ( v22 == (char *)v3 )
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

// Line 687: range 0000000015C6415E-0000000015C643F3
bool __cdecl PolygonRegion::isInRegion(const PolygonRegion *const this, const Vector3 *pos)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  float y; // xmm0_4
  float v7; // xmm1_4
  bool result; // al
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 64;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 9 point:688";
  *(_QWORD *)(v2 + 16) = PolygonRegion::isInRegion;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_DWORD *)(v2 + 40) = 0;
  if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(pos);
  }
  *(float *)(v4 - 32) = pos->x;
  if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(&pos->z);
  }
  *(float *)(v4 - 28) = pos->z;
  if ( !JsonConfigMgr::isInSimplePolygon((const data::Point2D *)(v4 - 32), &this->point_vec_) )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pos->y);
  }
  y = pos->y;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_.y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->position_.y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->position_.y);
  }
  v7 = this->position_.y;
  if ( *(_BYTE *)(((unsigned __int64)&this->aabb_size_.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aabb_size_.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->aabb_size_.y);
  }
  if ( y >= (float)(v7 - (float)(this->aabb_size_.y / 2.0))
    && (float)((float)(this->aabb_size_.y / 2.0) + this->position_.y) >= pos->y )
  {
    result = 1;
  }
  else
  {
LABEL_18:
    result = 0;
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

// Line 696: range 0000000015C643F4-0000000015C644A8
data::VisionLevelType __cdecl PolygonRegion::calcVisionLevelType(PolygonRegion *const this)
{
  float *v1; // rax
  float *v2; // rdx
  float max_len; // [rsp+1Ch] [rbp-4h]

  v1 = (float *)std::max<float>(&this->aabb_size_.x, &this->aabb_size_.z);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v1);
  }
  max_len = *v2;
  if ( *v2 < 100.0 )
    return 0;
  if ( max_len < 200.0 )
    return 1;
  if ( max_len >= 1400.0 )
    return 3;
  return 2;
};

// Line 716: range 0000000015C644AA-0000000015C64A97
void __cdecl PolygonRegion::getCoveredCoordinates(
        PolygonRegion *const this,
        const SceneGridComp *scene_grid_comp,
        std::vector<Coordinate> *coord_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  float x; // xmm0_4
  float z; // xmm0_4
  int *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  float left_x; // [rsp+24h] [rbp-CCh]
  float right_x; // [rsp+28h] [rbp-C8h]
  float low_z; // [rsp+2Ch] [rbp-C4h]
  float up_z; // [rsp+30h] [rbp-C0h]
  int grid_width; // [rsp+34h] [rbp-BCh]
  int32_t left_coord_x; // [rsp+38h] [rbp-B8h]
  int32_t right_coord_x; // [rsp+3Ch] [rbp-B4h]
  int32_t low_coord_y; // [rsp+40h] [rbp-B0h]
  int32_t up_coord_y; // [rsp+44h] [rbp-ACh]
  const Vector2 *begin_pos; // [rsp+48h] [rbp-A8h]
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-A0h] BYREF
  char v23[128]; // [rsp+70h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 5 x:730 64 4 5 y:732";
  *(_QWORD *)(v3 + 16) = PolygonRegion::getCoveredCoordinates;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->position_);
  }
  x = this->position_.x;
  if ( *(_BYTE *)(((unsigned __int64)&this->aabb_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aabb_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->aabb_size_);
  }
  left_x = x - (float)(this->aabb_size_.x / 2.0);
  right_x = (float)(this->aabb_size_.x / 2.0) + this->position_.x;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->position_.z);
  }
  z = this->position_.z;
  if ( *(_BYTE *)(((unsigned __int64)&this->aabb_size_.z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aabb_size_.z >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->aabb_size_.z);
  }
  low_z = z - (float)(this->aabb_size_.z / 2.0);
  up_z = (float)(this->aabb_size_.z / 2.0) + this->position_.z;
  begin_pos = SceneSightComp::getBeginPos(scene_grid_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->vision_level_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vision_level_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->vision_level_type_);
  }
  grid_width = SceneGridComp::getGridWidth(this->vision_level_type_);
  if ( grid_width )
  {
    if ( *(_BYTE *)(((unsigned __int64)begin_pos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)begin_pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)begin_pos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(begin_pos);
    }
    left_coord_x = (int)(float)((float)(left_x - begin_pos->x) / (float)grid_width);
    right_coord_x = (int)(float)((float)(right_x - begin_pos->x) / (float)grid_width);
    if ( *(_BYTE *)(((unsigned __int64)&begin_pos->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)begin_pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&begin_pos->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&begin_pos->y);
    }
    low_coord_y = (int)(float)((float)(low_z - begin_pos->y) / (float)grid_width);
    up_coord_y = (int)(float)((float)(up_z - begin_pos->y) / (float)grid_width);
    for ( *(_DWORD *)(v3 + 48) = left_coord_x; right_coord_x >= *(_DWORD *)(v3 + 48); ++*(_DWORD *)(v3 + 48) )
    {
      for ( *(_DWORD *)(v3 + 64) = low_coord_y; up_coord_y >= *(_DWORD *)(v3 + 64); ++*(_DWORD *)(v3 + 64) )
        std::vector<Coordinate>::emplace_back<int &,int &>(
          coord_vec,
          (int *)(v3 + 48),
          (int *)(v3 + 64),
          (int *)(v3 + 48),
          v8);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/region.cpp",
      "getCoveredCoordinates",
      723);
    v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v22,
           (const char (*)[20])"vision_level_type_:");
    v10 = common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
            v9,
            &this->vision_level_type_);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v10, (const char (*)[17])" grid_width == 0");
    common::milog::MiLogStream::~MiLogStream(&v22);
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

// Line 740: range 0000000015C64A98-0000000015C64BB8
void __cdecl PolygonRegion::initByPointVecAndAABBSiize(
        PolygonRegion *const this,
        const data::Point2DList *point_vec,
        const Vector3 *size)
{
  std::vector<data::Point2D>::operator=(&this->point_vec_, point_vec);
  if ( *(char *)(((unsigned __int64)&this->aabb_size_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->aabb_size_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 117) & 7) >= *(_BYTE *)((((unsigned __int64)&this->aabb_size_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->aabb_size_, 12LL);
  }
  if ( ((unsigned __int8)size & 7) >= *(_BYTE *)(((unsigned __int64)size >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)size >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&size->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)size + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&size->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(size, 12LL);
  }
  this->aabb_size_ = *size;
};
