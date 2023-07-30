// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/foundation_comp.cpp

// Line 23: range 0000000017521496-0000000017521787
void __cdecl FoundationComp::FoundationComp(FoundationComp *const this, Gadget *gadget, const FoundationParam *param)
{
  int (**v3)(...); // rdx
  uint32_t point_config_id; // ecx

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, gadget);
  v3 = (int (**)(...))(&`vtable for'FoundationComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->status_);
  }
  this->status_ = FOUNDATION_STATUS_INIT;
  std::set<unsigned int>::set(&this->uid_set_);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  point_config_id = param->point_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point_config_id_);
  }
  this->point_config_id_ = point_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->only_op_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->only_op_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->only_op_uid_);
  }
  this->only_op_uid_ = 0;
  std::weak_ptr<Player>::weak_ptr(&this->locked_player_wtr_);
  std::weak_ptr<Gadget>::weak_ptr(&this->gear_gadget_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->current_tower_id_);
  }
  this->current_tower_id_ = 0;
  std::weak_ptr<TowerDefensePlayBase>::weak_ptr<TowerDefensePlayBase,void>(
    &this->tower_defense_play_base_wtr_,
    &param->play_base_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_rotate_scene_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_rotate_scene_time_ms_);
  this->last_rotate_scene_time_ms_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_play_end_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_play_end_);
  this->is_play_end_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Gadget::setEnableInteract(this->gadget_, 1, 1);
};

// Line 33: range 0000000017521788-0000000017521CEE
int32_t __cdecl FoundationComp::toClient(const FoundationComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Scene *v5; // rax
  int32_t v6; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t Uid; // eax
  google::protobuf::RepeatedField<unsigned int> *v9; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  google::protobuf::RepeatedField<unsigned int> *v11; // rax
  int32_t result; // eax
  std::_Rb_tree_const_iterator<unsigned int> end; // [rsp+10h] [rbp-F0h] BYREF
  proto::FoundationInfo *info; // [rsp+18h] [rbp-E8h]
  google::protobuf::RepeatedField<unsigned int> other; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 12 scene_ptr:34 64 16 16 play_base_ptr:40 96 16 20 locked_player_ptr:55";
  *(_QWORD *)(v2 + 16) = FoundationComp::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v2 + 32));
  if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Scene::getPlayerUidSet(v5, &this->uid_set_);
  }
  FoundationComp::getTowerDefensePlayBasePtr((const FoundationComp *const)(v2 + 64));
  if ( std::operator==<TowerDefensePlayBase>(0LL, (const std::shared_ptr<TowerDefensePlayBase> *)(v2 + 64)) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_play_end_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_play_end_);
    if ( this->is_play_end_ )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/foundation_comp.cpp",
        "toClient",
        45);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v16,
        (const char (*)[35])"[FOUNDATION] play_base_ptr nullptr");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v6 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/foundation_comp.cpp",
        "toClient",
        48);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v16,
        (const char (*)[35])"[FOUNDATION] play_base_ptr nullptr");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v6 = -1;
    }
  }
  else
  {
    info = proto::SceneGadgetInfo::mutable_foundation_info(gadget_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::FoundationInfo::set_status(info, this->status_);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 96));
    if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Uid = Player::getUid(v7);
      proto::FoundationInfo::set_locked_by_uid(info, Uid);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->only_op_uid_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->only_op_uid_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->only_op_uid_ )
    {
      v9 = proto::FoundationInfo::mutable_uid_list(info);
      google::protobuf::RepeatedField<unsigned int>::Add(v9, &this->only_op_uid_);
    }
    else
    {
      M_node = std::set<unsigned int>::begin(&this->uid_set_)._M_node;
      end._M_node = std::set<unsigned int>::end(&this->uid_set_)._M_node;
      google::protobuf::RepeatedField<unsigned int>::RepeatedField<std::_Rb_tree_const_iterator<unsigned int>>(
        &other,
        (std::_Rb_tree_const_iterator<unsigned int>)M_node,
        &end);
      v11 = proto::FoundationInfo::mutable_uid_list(info);
      google::protobuf::RepeatedField<unsigned int>::operator=(v11, &other);
      google::protobuf::RepeatedField<unsigned int>::~RepeatedField(&other);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::FoundationInfo::set_current_building_id(info, this->current_tower_id_);
    v6 = 0;
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  }
  std::shared_ptr<TowerDefensePlayBase>::~shared_ptr((std::shared_ptr<TowerDefensePlayBase> *const)(v2 + 64));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = v6;
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
  return result;
};

// Line 75: range 0000000017521CF0-0000000017522432
int32_t __cdecl FoundationComp::procInteract(
        FoundationComp *const this,
        Player *player,
        const EntityInteractParam *param,
        bool check_only)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  int32_t v7; // r14d
  uint32_t Uid; // ecx
  char v9; // al
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t v11; // r14d
  Group *v12; // rdi
  Group *v13; // rdx
  Group *v14; // rdi
  Group *v15; // rdx
  bool v16; // cl
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int32_t result; // eax
  std::set<unsigned int>::key_type __x; // [rsp+24h] [rbp-DCh] BYREF
  int32_t retcode; // [rsp+28h] [rbp-D8h]
  uint32_t tower_id; // [rsp+2Ch] [rbp-D4h]
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 16 20 locked_player_ptr:90 64 16 13 group_ptr:111 96 16 13 scene_ptr:117";
  *(_QWORD *)(v4 + 16) = FoundationComp::procInteract;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  __x = Player::getUid(player);
  if ( !std::set<unsigned int>::count(&this->uid_set_, &__x) )
  {
    v7 = 9251;
    goto LABEL_52;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->only_op_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->only_op_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( !this->only_op_uid_ )
    goto LABEL_13;
  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&this->only_op_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->only_op_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( Uid == this->only_op_uid_ )
LABEL_13:
    v9 = 0;
  else
    v9 = 1;
  if ( v9 )
  {
    v7 = 9251;
    goto LABEL_52;
  }
  if ( *(_BYTE *)(((unsigned __int64)&param->building_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->building_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  tower_id = param->building_id;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v4 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&param->foundation_op >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->foundation_op >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( param->foundation_op != FOUNDATION_OP_LOCK )
  {
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 32)) )
    {
      v7 = 9259;
      goto LABEL_51;
    }
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v11 = Player::getUid(v10);
    if ( v11 != Player::getUid(player) )
    {
      v7 = 9258;
      goto LABEL_51;
    }
LABEL_27:
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getGroup((const Entity *const)(v4 + 64));
    if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v4 + 64)) )
    {
      v7 = 513;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Entity::getScene((const Entity *const)(v4 + 96));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 96)) )
      {
        v7 = 9252;
      }
      else
      {
        retcode = 0;
        if ( *(_BYTE *)(((unsigned __int64)&param->foundation_op >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->foundation_op >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        switch ( param->foundation_op )
        {
          case FOUNDATION_OP_BUILD:
            v12 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            retcode = FoundationComp::procBuild(this, player, v12, tower_id, check_only);
            break;
          case FOUNDATION_OP_DEMOLITION:
            v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            retcode = FoundationComp::procDemolish(this, player, v13, check_only);
            break;
          case FOUNDATION_OP_REBUILD:
            v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            retcode = FoundationComp::procRebuild(this, player, v14, tower_id, check_only);
            break;
          case FOUNDATION_OP_ROTATE:
            v15 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            retcode = FoundationComp::procRotate(this, player, v15, check_only);
            break;
          case FOUNDATION_OP_LOCK:
          case FOUNDATION_OP_UNLOCK:
            v16 = check_only;
            if ( *(_BYTE *)(((unsigned __int64)&param->foundation_op >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->foundation_op >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            retcode = FoundationComp::procLock(this, player, param->foundation_op == FOUNDATION_OP_LOCK, v16);
            break;
          default:
            retcode = 9256;
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/gadget/foundation_comp.cpp",
              "procInteract",
              144);
            v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v27,
                    (const char (*)[29])"unsurpported foundation op: ");
            v18 = common::milog::MiLogStream::operator<<<proto::FoundationOpType,(proto::FoundationOpType*)0>(
                    v17,
                    &param->foundation_op);
            v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])". player: ");
            operator<<(v19, player);
            common::milog::MiLogStream::~MiLogStream(&v27);
            break;
        }
        if ( !check_only )
          FoundationComp::broadcastFoundationInfo(this);
        v7 = retcode;
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 64));
    goto LABEL_51;
  }
  if ( !std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 32)) )
    goto LABEL_27;
  v7 = 9260;
LABEL_51:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 32));
LABEL_52:
  result = v7;
  if ( v28 == (char *)v4 )
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

// Line 157: range 0000000017522434-0000000017522462
int32_t __cdecl FoundationComp::interactCheck(
        FoundationComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  return FoundationComp::procInteract(this, player, param, 1);
};

// Line 162: range 0000000017522464-0000000017522492
int32_t __cdecl FoundationComp::interact(FoundationComp *const this, Player *player, const EntityInteractParam *param)
{
  return FoundationComp::procInteract(this, player, param, 0);
};

// Line 167: range 0000000017522494-0000000017522836
void __cdecl FoundationComp::broadcastFoundationInfo(const FoundationComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rcx
  common::milog::MiLogStream *v5; // rcx
  Scene *p_gadget; // rdi
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-D0h] BYREF
  char v9[176]; // [rsp+30h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:168 64 32 10 notify:174";
  *(_QWORD *)(v1 + 16) = FoundationComp::broadcastFoundationInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/foundation_comp.cpp",
      "broadcastFoundationInfo",
      171);
    v4 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v8, (const char (*)[17])" scene nullptr: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v4, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    proto::FoundationNotify::FoundationNotify((proto::FoundationNotify *const)(v1 + 64));
    if ( FoundationComp::fillFoundationNotify(this, (proto::FoundationNotify *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/foundation_comp.cpp",
        "broadcastFoundationInfo",
        177);
      v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v8,
             (const char (*)[31])" fillFoundationNotify failed: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v8);
    }
    else
    {
      p_gadget = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      {
        p_gadget = (Scene *)&this->gadget_;
        __asan_report_load8();
      }
      Scene::notifyViewingPlayers<proto::FoundationNotify>(
        p_gadget,
        (Entity *)this->gadget_,
        (proto::FoundationNotify *)(v1 + 64),
        0);
    }
    proto::FoundationNotify::~FoundationNotify((proto::FoundationNotify *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 184: range 0000000017522838-0000000017522DDC
__int64 __fastcall FoundationComp::procBuild(
        FoundationComp *const this,
        Player *player,
        Group *group,
        uint32_t tower_id,
        bool check_only)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rbx
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  __int64 result; // rax
  unsigned int retcode; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+50h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 12 tower_id:183 64 16 17 play_base_ptr:197";
  *(_QWORD *)(v5 + 16) = FoundationComp::procBuild;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 48) = tower_id;
  Group::getGroupId(group);
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->status_ == FOUNDATION_STATUS_INIT )
  {
    FoundationComp::getTowerDefensePlayBasePtr((const FoundationComp *const)(v5 + 64));
    if ( std::operator==<TowerDefensePlayBase>(0LL, (const std::shared_ptr<TowerDefensePlayBase> *)(v5 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/foundation_comp.cpp",
        "procBuild",
        200);
      v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v28,
              (const char (*)[42])"[FOUNDATION] play nullptr. REQ tower id: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])", player: ");
      operator<<(v14, player);
      common::milog::MiLogStream::~MiLogStream(&v28);
      retcode = 860;
    }
    else
    {
      v15 = (unsigned __int64)std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8();
      v16 = *(_QWORD *)v15 + 48LL;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8();
      retcode = (*(__int64 (__fastcall **)(unsigned __int64, Player *, _QWORD))v16)(
                  v15,
                  player,
                  *(unsigned int *)(v5 + 48));
      if ( retcode )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/foundation_comp.cpp",
          "procBuild",
          208);
        v17 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v28,
                (const char (*)[52])"[FOUNDATION] checkBuildTower failed. REQ tower id: ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v5 + 48));
        v19 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v18, (const char (*)[3])", ");
        operator<<(v19, player);
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      else if ( !check_only )
      {
        retcode = FoundationComp::createBuildingGadget(this, player, group, *(_DWORD *)(v5 + 48));
        if ( retcode )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/foundation_comp.cpp",
            "procBuild",
            220);
          v20 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  &v28,
                  (const char (*)[58])"[FOUNDATION] create building gadget fails. REQ tower_id: ");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v5 + 48));
          v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])". player: ");
          operator<<(v22, player);
          common::milog::MiLogStream::~MiLogStream(&v28);
        }
      }
    }
    std::shared_ptr<TowerDefensePlayBase>::~shared_ptr((std::shared_ptr<TowerDefensePlayBase> *const)(v5 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/foundation_comp.cpp",
      "procBuild",
      192);
    v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v28,
           (const char (*)[41])"[FOUNDATION] req build in wrong status: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v9 = proto::FoundationStatus_Name[abi:cxx11](this->status_);
    v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, v9);
    v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])", player: ");
    operator<<(v11, player);
    common::milog::MiLogStream::~MiLogStream(&v28);
    retcode = 9253;
  }
  result = retcode;
  if ( v29 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 229: range 0000000017522DDE-00000000175233C7
int32_t __cdecl FoundationComp::procDemolish(FoundationComp *const this, Player *player, Group *group, bool check_only)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // r13
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 (__fastcall *v16)(unsigned __int64, Player *, _QWORD); // r8
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  int32_t result; // eax
  int32_t retcode; // [rsp+2Ch] [rbp-94h]
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-90h] BYREF
  char v28[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 17 play_base_ptr:241";
  *(_QWORD *)(v4 + 16) = FoundationComp::procDemolish;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->status_ == FOUNDATION_STATUS_BUILT )
  {
    FoundationComp::getTowerDefensePlayBasePtr((const FoundationComp *const)(v4 + 32));
    if ( std::operator==<TowerDefensePlayBase>(0LL, (const std::shared_ptr<TowerDefensePlayBase> *)(v4 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/foundation_comp.cpp",
        "procDemolish",
        244);
      v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v27,
              (const char (*)[43])"[FOUNDATION] play nullptr. curr tower id: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->current_tower_id_);
      v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])", player: ");
      operator<<(v13, player);
      common::milog::MiLogStream::~MiLogStream(&v27);
      retcode = 860;
    }
    else
    {
      v14 = (unsigned __int64)std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8();
      v15 = *(_QWORD *)v14 + 72LL;
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8();
      v16 = *(__int64 (__fastcall **)(unsigned __int64, Player *, _QWORD))v15;
      if ( *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      retcode = v16(v14, player, this->current_tower_id_);
      if ( retcode )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/foundation_comp.cpp",
          "procDemolish",
          252);
        v17 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                &v27,
                (const char (*)[59])"[FOUNDATION] checkDemolishTower failed. current tower id: ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->current_tower_id_);
        v19 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v18, (const char (*)[3])", ");
        operator<<(v19, player);
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      else if ( !check_only )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        retcode = FoundationComp::demolishBuildingGadget(this, player, group, this->current_tower_id_);
        if ( retcode )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/foundation_comp.cpp",
            "procDemolish",
            265);
          v20 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v27,
                  (const char (*)[32])"[FOUNDATION] demolish tower id:");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->current_tower_id_);
          v22 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v21,
                  (const char (*)[18])" failed. player: ");
          operator<<(v22, player);
          common::milog::MiLogStream::~MiLogStream(&v27);
        }
      }
    }
    std::shared_ptr<TowerDefensePlayBase>::~shared_ptr((std::shared_ptr<TowerDefensePlayBase> *const)(v4 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/foundation_comp.cpp",
      "procDemolish",
      236);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v27,
           (const char (*)[35])"[FOUNDATION] req in wrong status: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v8 = proto::FoundationStatus_Name[abi:cxx11](this->status_);
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, v8);
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])", player: ");
    operator<<(v10, player);
    common::milog::MiLogStream::~MiLogStream(&v27);
    retcode = 9255;
  }
  result = retcode;
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 274: range 00000000175233C8-0000000017523AE8
__int64 __fastcall FoundationComp::procRebuild(
        FoundationComp *const this,
        Player *player,
        Group *group,
        uint32_t tower_id,
        bool check_only)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rbx
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 (__fastcall *v17)(unsigned __int64, Player *, _QWORD, _QWORD); // r8
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  __int64 result; // rax
  unsigned int retcode; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v33; // [rsp+30h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+50h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 12 tower_id:273 64 16 17 play_base_ptr:287";
  *(_QWORD *)(v5 + 16) = FoundationComp::procRebuild;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 48) = tower_id;
  Group::getGroupId(group);
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->status_ == FOUNDATION_STATUS_BUILT )
  {
    FoundationComp::getTowerDefensePlayBasePtr((const FoundationComp *const)(v5 + 64));
    if ( std::operator==<TowerDefensePlayBase>(0LL, (const std::shared_ptr<TowerDefensePlayBase> *)(v5 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/foundation_comp.cpp",
        "procRebuild",
        290);
      v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v33,
              (const char (*)[42])"[FOUNDATION] play nullptr. REQ tower id: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])", player: ");
      operator<<(v14, player);
      common::milog::MiLogStream::~MiLogStream(&v33);
      retcode = 860;
    }
    else
    {
      v15 = (unsigned __int64)std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8();
      v16 = *(_QWORD *)v15 + 88LL;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8();
      v17 = *(__int64 (__fastcall **)(unsigned __int64, Player *, _QWORD, _QWORD))v16;
      if ( *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      retcode = v17(v15, player, *(unsigned int *)(v5 + 48), this->current_tower_id_);
      if ( retcode )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/foundation_comp.cpp",
          "procRebuild",
          298);
        v18 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v33,
                (const char (*)[47])"[FOUNDATION] checkRebuildTower failed. tower: ");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->current_tower_id_);
        v20 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v19, (const char (*)[5])off_26115CE0);
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v5 + 48));
        operator<<(v21, player);
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      else if ( !check_only )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        retcode = FoundationComp::demolishBuildingGadget(this, player, group, this->current_tower_id_);
        if ( retcode )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/foundation_comp.cpp",
            "procRebuild",
            310);
          v22 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v33,
                  (const char (*)[29])"[FOUNDATION] demolish tower ");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->current_tower_id_);
          v24 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v23,
                  (const char (*)[18])" failed. player: ");
          operator<<(v24, player);
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
        else
        {
          retcode = FoundationComp::createBuildingGadget(this, player, group, *(_DWORD *)(v5 + 48));
          if ( retcode )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/foundation_comp.cpp",
              "procRebuild",
              317);
            v25 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    &v33,
                    (const char (*)[51])"[FOUNDATION] create tower gadget fails. tower id: ");
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v5 + 48));
            v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])". player: ");
            operator<<(v27, player);
            common::milog::MiLogStream::~MiLogStream(&v33);
          }
        }
      }
    }
    std::shared_ptr<TowerDefensePlayBase>::~shared_ptr((std::shared_ptr<TowerDefensePlayBase> *const)(v5 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/foundation_comp.cpp",
      "procRebuild",
      282);
    v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v33,
           (const char (*)[43])"[FOUNDATION] req rebuild in wrong status: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v9 = proto::FoundationStatus_Name[abi:cxx11](this->status_);
    v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, v9);
    v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])", player:");
    operator<<(v11, player);
    common::milog::MiLogStream::~MiLogStream(&v33);
    retcode = 9255;
  }
  result = retcode;
  if ( v34 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 326: range 0000000017523AEA-00000000175247C1
int32_t __cdecl FoundationComp::procRotate(FoundationComp *const this, Player *player, Group *group, bool check_only)
{
  __m128i v4; // xmm0
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // r14
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 (__fastcall *v18)(unsigned __int64, Player *, _QWORD); // r8
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  Scene *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  signed __int64 last_rotate_scene_time_ms; // rax
  float v39; // xmm0_4
  uint64_t v40; // rdx
  float v41; // xmm1_4
  __int64 v42; // rax
  float v43; // xmm0_4
  __int64 v44; // rdx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  int32_t result; // eax
  int32_t retcode; // [rsp+20h] [rbp-160h]
  float rot_speed; // [rsp+28h] [rbp-158h]
  float rot_angle; // [rsp+2Ch] [rbp-154h]
  std::shared_ptr<Config> v60; // [rsp+30h] [rbp-150h] BYREF
  std::shared_ptr<Config> v61; // [rsp+40h] [rbp-140h] BYREF
  common::milog::MiLogStream v62; // [rsp+50h] [rbp-130h] BYREF
  char v63[272]; // [rsp+70h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 4 15 rot_time_ms:376 64 8 17 scene_time_ms:381 96 16 13 scene_ptr:327 128 16 17 play_base_p"
                        "tr:344 160 16 14 gadget_ptr:359 192 16 21 platform_comp_ptr:366";
  *(_QWORD *)(v5 + 16) = FoundationComp::procRotate;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -219021312;
  v7[536862724] = -219021312;
  v7[536862725] = -219021312;
  v7[536862726] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v5 + 96));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v5 + 96)) )
  {
    v8 = -1;
  }
  else
  {
    Group::getGroupId(group);
    if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
    {
      *(double *)v4.m128i_i64 = __asan_report_load4();
    }
    if ( this->status_ == FOUNDATION_STATUS_BUILT )
    {
      FoundationComp::getTowerDefensePlayBasePtr((const FoundationComp *const)(v5 + 128));
      if ( std::operator==<TowerDefensePlayBase>(0LL, (const std::shared_ptr<TowerDefensePlayBase> *)(v5 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/foundation_comp.cpp",
          "procRotate",
          347);
        v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v62,
                (const char (*)[42])"[FOUNDATION] play nullptr. REQ tower id: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->current_tower_id_);
        v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])", player: ");
        operator<<(v15, player);
        common::milog::MiLogStream::~MiLogStream(&v62);
        retcode = 860;
      }
      else
      {
        v16 = (unsigned __int64)std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8();
        v17 = *(_QWORD *)v16 + 96LL;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8();
        v18 = *(__int64 (__fastcall **)(unsigned __int64, Player *, _QWORD))v17;
        if ( *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          *(double *)v4.m128i_i64 = __asan_report_load4();
        }
        retcode = v18(v16, player, this->current_tower_id_);
        if ( retcode )
        {
          common::milog::MiLogStream::create(
            &v62,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/gadget/foundation_comp.cpp",
            "procRotate",
            355);
          v19 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v62,
                  (const char (*)[46])"[FOUNDATION] checkRotateTower failed. tower: ");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->current_tower_id_);
          operator<<(v20, player);
          common::milog::MiLogStream::~MiLogStream(&v62);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            *(double *)v4.m128i_i64 = __asan_report_load4();
          }
          Group::findEntityByConfigId<Gadget>((Group *const)(v5 + 160), (uint32_t)group);
          if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v5 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v62,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/foundation_comp.cpp",
              "procRotate",
              362);
            v21 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v62,
                    (const char (*)[36])"[FOUNDATION] tower entity nullptr: ");
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->current_tower_id_);
            v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])", player: ");
            operator<<(v23, player);
            common::milog::MiLogStream::~MiLogStream(&v62);
            retcode = -1;
          }
          else
          {
            std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
            EcsBase<Gadget,GadgetCompBase,28u>::findComp<PlatformComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v5 + 192));
            if ( std::operator==<PlatformComp>(0LL, (const std::shared_ptr<PlatformComp> *)(v5 + 192)) )
            {
              common::milog::MiLogStream::create(
                &v62,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/gadget/foundation_comp.cpp",
                "procRotate",
                369);
              v24 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      &v62,
                      (const char (*)[37])"[FOUNDATION] platform comp nullptr: ");
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v24,
                      &this->current_tower_id_);
              v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v25,
                      (const char (*)[11])", player: ");
              v27 = operator<<(v26, player);
              v28 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v27,
                      (const char (*)[10])" gadget: ");
              v29 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
              common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v28, v29);
              common::milog::MiLogStream::~MiLogStream(&v62);
              retcode = -1;
            }
            else
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v60);
              v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v60);
              *(float *)v4.m128i_i32 = ConstValueExcelConfigMgr::getMechanicusRotation1Speed(&v30->design_config.txt_config_mgr.const_value_config_mgr);
              rot_speed = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
              std::shared_ptr<Config>::~shared_ptr(&v60);
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v61);
              v31 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v61);
              *(float *)v4.m128i_i32 = ConstValueExcelConfigMgr::getMechanicusRotation1Angle(&v31->design_config.txt_config_mgr.const_value_config_mgr);
              rot_angle = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
              std::shared_ptr<Config>::~shared_ptr(&v61);
              *(_DWORD *)(v5 + 48) = 0;
              if ( rot_speed != 0.0 )
                *(float *)(v5 + 48) = std::fabs(rot_angle / rot_speed) * 1000.0;
              v32 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
              *(_QWORD *)(v5 + 64) = Scene::getSceneTimeMs(v32);
              common::milog::MiLogStream::create(
                &v62,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/gadget/foundation_comp.cpp",
                "procRotate",
                382);
              v33 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      &v62,
                      (const char (*)[28])"[FOUNDATION] last_rot_time:");
              v34 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                      v33,
                      &this->last_rotate_scene_time_ms_);
              v35 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v34,
                      (const char (*)[11])" interval:");
              v36 = common::milog::MiLogStream::operator<<<float,(float *)0>(v35, (const float *)(v5 + 48));
              v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v36,
                      (const char (*)[16])" scene_time_ms:");
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v37,
                (const unsigned __int64 *)(v5 + 64));
              common::milog::MiLogStream::~MiLogStream(&v62);
              if ( *(_BYTE *)(((unsigned __int64)&this->last_rotate_scene_time_ms_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              last_rotate_scene_time_ms = this->last_rotate_scene_time_ms_;
              if ( last_rotate_scene_time_ms < 0 )
              {
                v40 = this->last_rotate_scene_time_ms_ & 1 | ((unsigned __int64)last_rotate_scene_time_ms >> 1);
                v39 = (float)(int)v40 + (float)(int)v40;
              }
              else
              {
                v39 = (float)(int)last_rotate_scene_time_ms;
              }
              v41 = *(float *)(v5 + 48) + v39;
              v42 = *(_QWORD *)(v5 + 64);
              if ( v42 < 0 )
              {
                v44 = *(_QWORD *)(v5 + 64) & 1LL | ((unsigned __int64)v42 >> 1);
                v43 = (float)(int)v44 + (float)(int)v44;
              }
              else
              {
                v43 = (float)(int)v42;
              }
              if ( v41 <= v43 )
              {
                if ( !check_only )
                {
                  retcode = FoundationComp::rotateBuildingGagdet(this, player, group);
                  if ( retcode )
                  {
                    common::milog::MiLogStream::create(
                      &v62,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/gadget/foundation_comp.cpp",
                      "procRotate",
                      398);
                    v51 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                            &v62,
                            (const char (*)[54])"[FOUNDATION] rotate building gadget fails. tower id: ");
                    v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v51,
                            &this->current_tower_id_);
                    v53 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                            v52,
                            (const char (*)[11])". player: ");
                    operator<<(v53, player);
                    common::milog::MiLogStream::~MiLogStream(&v62);
                  }
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v62,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/gadget/foundation_comp.cpp",
                  "procRotate",
                  385);
                v45 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        &v62,
                        (const char (*)[39])"[FOUNDATION] rotation on going @tower:");
                v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v45,
                        &this->current_tower_id_);
                v47 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v46,
                        (const char (*)[11])", player: ");
                v48 = operator<<(v47, player);
                v49 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v48,
                        (const char (*)[10])" gadget: ");
                v50 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
                common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v49, v50);
                common::milog::MiLogStream::~MiLogStream(&v62);
                retcode = 9266;
              }
            }
            std::shared_ptr<PlatformComp>::~shared_ptr((std::shared_ptr<PlatformComp> *const)(v5 + 192));
          }
          std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v5 + 160));
        }
      }
      std::shared_ptr<TowerDefensePlayBase>::~shared_ptr((std::shared_ptr<TowerDefensePlayBase> *const)(v5 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v62,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/foundation_comp.cpp",
        "procRotate",
        339);
      v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v62,
             (const char (*)[42])"[FOUNDATION] req rotate in wrong status: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v10 = proto::FoundationStatus_Name[abi:cxx11](this->status_);
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", player: ");
      operator<<(v12, player);
      common::milog::MiLogStream::~MiLogStream(&v62);
      retcode = 9255;
    }
    v8 = retcode;
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 96));
  result = v8;
  if ( v63 == (char *)v5 )
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

// Line 407: range 00000000175247C2-0000000017524B89
int32_t __cdecl FoundationComp::procLock(FoundationComp *const this, Player *player, bool is_lock, bool check_only)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t Uid; // r14d
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  int32_t result; // eax
  std::enable_shared_from_this<Player> v19; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-90h] BYREF
  char v21[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 14 player_ptr:408";
  *(_QWORD *)(v4 + 16) = FoundationComp::procLock;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v4 + 32));
  if ( is_lock )
  {
    if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 32)) )
    {
      v7 = 9260;
      goto LABEL_20;
    }
    if ( !check_only )
    {
      std::enable_shared_from_this<Player>::weak_from_this(&v19);
      std::weak_ptr<Player>::operator=(&this->locked_player_wtr_, &v19._M_weak_this);
      std::weak_ptr<Player>::~weak_ptr(&v19._M_weak_this);
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/foundation_comp.cpp",
        "procLock",
        418);
      v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v20, (const char (*)[14])"[FOUNDATION] ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v8, this->gadget_);
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" locked by: ");
      operator<<(v10, player);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
  }
  else
  {
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 32)) )
    {
      v7 = 9259;
      goto LABEL_20;
    }
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    Uid = Player::getUid(v11);
    if ( Uid != Player::getUid(player) )
    {
      v7 = 9258;
      goto LABEL_20;
    }
    if ( !check_only )
    {
      std::__weak_ptr<Player,(__gnu_cxx::_Lock_policy)2>::reset(&this->locked_player_wtr_);
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/foundation_comp.cpp",
        "procLock",
        434);
      v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v20, (const char (*)[14])"[FOUNDATION] ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v14 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v13, this->gadget_);
      v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])" unlocked by: ");
      operator<<(v15, player);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
  }
  v7 = 0;
LABEL_20:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 32));
  result = v7;
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 442: range 0000000017524B8A-000000001752515D
int32_t __cdecl FoundationComp::demolishBuildingGadget(
        FoundationComp *const this,
        Player *player,
        Group *group,
        uint32_t tower_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t v10; // r14d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  int32_t result; // eax
  uint32_t groupa; // [rsp+8h] [rbp-D8h]
  int32_t retcode; // [rsp+2Ch] [rbp-B4h]
  int32_t retcodea; // [rsp+2Ch] [rbp-B4h]
  common::milog::MiLogStream v30; // [rsp+30h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+50h] [rbp-90h] BYREF

  groupa = (unsigned int)group;
  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 14 gadget_ptr:443 64 16 17 play_base_ptr:460";
  *(_QWORD *)(v4 + 16) = FoundationComp::demolishBuildingGadget;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Group::findEntityByConfigId<Gadget>((Group *const)(v4 + 32), groupa);
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/foundation_comp.cpp",
      "demolishBuildingGadget",
      446);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v30,
           (const char (*)[36])"[FOUNDATION] tower entity nullptr: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->current_tower_id_);
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])", player: ");
    operator<<(v9, player);
    common::milog::MiLogStream::~MiLogStream(&v30);
    std::shared_ptr<Gadget>::shared_ptr(
      (std::shared_ptr<Gadget> *const)(v4 + 64),
      (const std::shared_ptr<Gadget> *)(v4 + 32));
    FoundationComp::resetOnGearRemove(this, (GadgetPtr *)(v4 + 64), 1);
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 64));
    v10 = -1;
  }
  else
  {
    v11 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    retcode = Creature::subCurHpToZero(v11, CHANGE_HP_SUB_GEAR, 1);
    if ( retcode )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/foundation_comp.cpp",
        "demolishBuildingGadget",
        455);
      v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v30,
              (const char (*)[33])"[FOUNDATION] kill tower entity: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->current_tower_id_);
      v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v13,
              (const char (*)[18])" failed. player: ");
      operator<<(v14, player);
      common::milog::MiLogStream::~MiLogStream(&v30);
      v10 = retcode;
    }
    else
    {
      std::shared_ptr<Gadget>::shared_ptr(
        (std::shared_ptr<Gadget> *const)(v4 + 64),
        (const std::shared_ptr<Gadget> *)(v4 + 32));
      FoundationComp::resetOnGearRemove(this, (GadgetPtr *)(v4 + 64), 0);
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 64));
      FoundationComp::getTowerDefensePlayBasePtr((const FoundationComp *const)(v4 + 64));
      if ( std::operator==<TowerDefensePlayBase>(0LL, (const std::shared_ptr<TowerDefensePlayBase> *)(v4 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/foundation_comp.cpp",
          "demolishBuildingGadget",
          463);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v30,
                (const char (*)[28])"[FOUNDATION] play nullptr. ");
        v16 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        v17 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v15, v16);
        v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])". point_id: ");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->point_config_id_);
        v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])" player: ");
        operator<<(v20, player);
        common::milog::MiLogStream::~MiLogStream(&v30);
        v10 = 860;
      }
      else
      {
        v21 = (unsigned __int64)std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8();
        v22 = *(_QWORD *)v21 + 80LL;
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8();
        retcodea = (*(__int64 (__fastcall **)(unsigned __int64, Player *, _QWORD))v22)(v21, player, tower_id);
        if ( retcodea )
        {
          v10 = retcodea;
        }
        else
        {
          v23 = (unsigned __int64)std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
            v23 = __asan_report_load8();
          v24 = *(_QWORD *)v23 + 128LL;
          if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
            v23 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64))v24)(v23);
          v10 = 0;
        }
      }
      std::shared_ptr<TowerDefensePlayBase>::~shared_ptr((std::shared_ptr<TowerDefensePlayBase> *const)(v4 + 64));
    }
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 32));
  result = v10;
  if ( v31 == (char *)v4 )
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

// Line 478: range 000000001752515E-0000000017525C1C
int32_t __cdecl FoundationComp::createBuildingGadget(
        FoundationComp *const this,
        Player *player,
        Group *group,
        uint32_t tower_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  const Vector3 *p_pos; // rax
  const Vector3 *p_rot; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rcx
  Gadget *v30; // r14
  uint32_t Uid; // ecx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  int32_t retcode; // [rsp+24h] [rbp-49Ch]
  int32_t retcodea; // [rsp+24h] [rbp-49Ch]
  const PointScriptConfig *point_config_ptr; // [rsp+28h] [rbp-498h]
  std::shared_ptr<Gadget> __r; // [rsp+30h] [rbp-490h] BYREF
  std::weak_ptr<Gadget> p_foundation_wtr; // [rsp+40h] [rbp-480h] BYREF
  common::milog::MiLogStream v42; // [rsp+50h] [rbp-470h] BYREF
  char v43[1104]; // [rsp+70h] [rbp-450h] BYREF

  v4 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1056LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 16 17 play_base_ptr:480 80 16 14 gadget_ptr:516 112 816 16 gadget_param:500";
  *(_QWORD *)(v4 + 16) = FoundationComp::createBuildingGadget;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862749] = -202116109;
  v6[536862750] = -202116109;
  v6[536862751] = -202116109;
  v6[536862752] = -202116109;
  Group::getGroupId(group);
  FoundationComp::getTowerDefensePlayBasePtr((const FoundationComp *const)(v4 + 48));
  if ( std::operator==<TowerDefensePlayBase>(0LL, (const std::shared_ptr<TowerDefensePlayBase> *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/foundation_comp.cpp",
      "createBuildingGadget",
      483);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v42,
           (const char (*)[38])"[FOUNDATION] play nullptr. point_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->point_config_id_);
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" player: ");
    operator<<(v9, player);
    common::milog::MiLogStream::~MiLogStream(&v42);
    v10 = 860;
  }
  else
  {
    v11 = (unsigned __int64)std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    v12 = *(_QWORD *)v11 + 56LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    retcode = (*(__int64 (__fastcall **)(unsigned __int64, Player *, _QWORD))v12)(v11, player, tower_id);
    if ( retcode )
    {
      v10 = retcode;
    }
    else
    {
      point_config_ptr = FoundationComp::findPointConfig(this);
      if ( !point_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/foundation_comp.cpp",
          "createBuildingGadget",
          497);
        v13 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                &v42,
                (const char (*)[72])"[FOUNDATION] create tower gadget fails. PointConfig nullptr @point_id: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->point_config_id_);
        v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" player: ");
        operator<<(v15, player);
        common::milog::MiLogStream::~MiLogStream(&v42);
      }
      GadgetParam::GadgetParam((GadgetParam *const)(v4 + 112));
      *(_BYTE *)(v4 + 408) = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 116) = this->point_config_id_;
      *(_DWORD *)(v4 + 912) = this->point_config_id_;
      if ( point_config_ptr )
      {
        p_pos = &point_config_ptr->pos;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        p_pos = Entity::getPosition((const Entity *const)this->gadget_);
      }
      if ( ((unsigned __int8)p_pos & 7) >= *(_BYTE *)(((unsigned __int64)p_pos >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)p_pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&p_pos->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&p_pos->z + 3) >> 3) + 0x7FFF8000) )
      {
        p_pos = (const Vector3 *)__asan_report_load_n(p_pos, 12LL);
      }
      *(_QWORD *)(v4 + 124) = *(_QWORD *)&p_pos->x;
      *(float *)(v4 + 132) = p_pos->z;
      if ( point_config_ptr )
      {
        p_rot = &point_config_ptr->rot;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        p_rot = Entity::getRotation((const Entity *const)this->gadget_);
      }
      if ( ((unsigned __int8)p_rot & 7) >= *(_BYTE *)(((unsigned __int64)p_rot >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)p_rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&p_rot->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&p_rot->z + 3) >> 3) + 0x7FFF8000) )
      {
        p_rot = (const Vector3 *)__asan_report_load_n(p_rot, 12LL);
      }
      *(_QWORD *)(v4 + 136) = *(_QWORD *)&p_rot->x;
      *(float *)(v4 + 144) = p_rot->z;
      v18 = (unsigned __int64)std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      v19 = *(_QWORD *)v18 + 64LL;
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      retcodea = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64))v19)(v18, tower_id, v4 + 112);
      if ( retcodea )
      {
        v10 = retcodea;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/foundation_comp.cpp",
          "createBuildingGadget",
          514);
        v20 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v42,
                (const char (*)[37])"[FOUNDATION] tower gadget. gadget_id");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v4 + 112));
        v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v21, (const char (*)[10])" @group: ");
        v23 = operator<<(v22, group);
        v24 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])" with SGV map:");
        common::milog::MiLogStream::operator<<<std::string,float>(v24, (const std::map<std::string,float> *)(v4 + 864));
        common::milog::MiLogStream::~MiLogStream(&v42);
        Group::createGadget((Group *const)(v4 + 80), (GadgetParam *)group);
        if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v4 + 80), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/foundation_comp.cpp",
            "createBuildingGadget",
            519);
          v25 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v42,
                  (const char (*)[50])"[FOUNDATION] create tower gadget fails. gadget_id");
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  (const unsigned int *)(v4 + 112));
          v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])" @group: ");
          v28 = operator<<(v27, group);
          v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v28,
                  (const char (*)[14])" foundation: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v29, this->gadget_);
          common::milog::MiLogStream::~MiLogStream(&v42);
          v10 = -1;
        }
        else
        {
          v30 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          toThisPtr<Gadget>((Gadget *)&__r);
          std::weak_ptr<Gadget>::weak_ptr<Gadget,void>(&p_foundation_wtr, &__r);
          Gadget::setFoundationWtr(v30, &p_foundation_wtr);
          std::weak_ptr<Gadget>::~weak_ptr(&p_foundation_wtr);
          std::shared_ptr<Gadget>::~shared_ptr(&__r);
          if ( *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->current_tower_id_);
          }
          this->current_tower_id_ = tower_id;
          std::weak_ptr<Gadget>::operator=<Gadget>(&this->gear_gadget_wtr_, (const std::shared_ptr<Gadget> *)(v4 + 80));
          Uid = Player::getUid(player);
          if ( *(_BYTE *)(((unsigned __int64)&this->only_op_uid_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->only_op_uid_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store4(&this->only_op_uid_);
          }
          this->only_op_uid_ = Uid;
          if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->status_);
          }
          this->status_ = FOUNDATION_STATUS_BUILT;
          v32 = (unsigned __int64)std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
          if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
            v32 = __asan_report_load8();
          v33 = *(_QWORD *)v32 + 128LL;
          if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
            v32 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64))v33)(v32);
          v10 = 0;
        }
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 80));
      }
      GadgetParam::~GadgetParam((GadgetParam *const)(v4 + 112));
    }
  }
  std::shared_ptr<TowerDefensePlayBase>::~shared_ptr((std::shared_ptr<TowerDefensePlayBase> *const)(v4 + 48));
  if ( v43 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF807C) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1056LL, v43);
  }
  return v10;
};

// Line 535: range 0000000017525C1E-0000000017526333
int32_t __cdecl FoundationComp::rotateBuildingGagdet(FoundationComp *const this, Player *player, Group *group)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  PlatformComp *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  Scene *v26; // rax
  __int64 SceneTimeMs; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  int32_t result; // eax
  uint32_t groupa; // [rsp+8h] [rbp-118h]
  float rot_speed; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<Config> v34; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<Gadget> p_gadget_ptr; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v36; // [rsp+50h] [rbp-D0h] BYREF
  char v37[176]; // [rsp+70h] [rbp-B0h] BYREF

  groupa = (unsigned int)group;
  v4 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 16 13 scene_ptr:536 64 16 14 gadget_ptr:542 96 16 21 platform_comp_ptr:551";
  *(_QWORD *)(v4 + 16) = FoundationComp::rotateBuildingGagdet;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v4 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 32)) )
  {
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      *(double *)v3.m128i_i64 = __asan_report_load4();
    }
    Group::findEntityByConfigId<Gadget>((Group *const)(v4 + 64), groupa);
    if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v4 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/foundation_comp.cpp",
        "rotateBuildingGagdet",
        545);
      v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v36,
             (const char (*)[36])"[FOUNDATION] tower entity nullptr: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->current_tower_id_);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])", player: ");
      operator<<(v10, player);
      common::milog::MiLogStream::~MiLogStream(&v36);
      std::shared_ptr<Gadget>::shared_ptr(&p_gadget_ptr, (const std::shared_ptr<Gadget> *)(v4 + 64));
      FoundationComp::resetOnGearRemove(this, &p_gadget_ptr, 1);
      std::shared_ptr<Gadget>::~shared_ptr(&p_gadget_ptr);
      v7 = -1;
    }
    else
    {
      std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      EcsBase<Gadget,GadgetCompBase,28u>::findComp<PlatformComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v4 + 96));
      if ( std::operator==<PlatformComp>((const std::shared_ptr<PlatformComp> *)(v4 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/foundation_comp.cpp",
          "rotateBuildingGagdet",
          554);
        v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v36,
                (const char (*)[37])"[FOUNDATION] platform comp nullptr: ");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->current_tower_id_);
        v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])", player: ");
        v14 = operator<<(v13, player);
        v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" gadget: ");
        v16 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v15, v16);
        common::milog::MiLogStream::~MiLogStream(&v36);
        v7 = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v34);
        v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
        *(float *)v3.m128i_i32 = ConstValueExcelConfigMgr::getMechanicusRotation1Speed(&v17->design_config.txt_config_mgr.const_value_config_mgr);
        rot_speed = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
        std::shared_ptr<Config>::~shared_ptr(&v34);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&p_gadget_ptr);
        v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_gadget_ptr);
        *(float *)v3.m128i_i32 = ConstValueExcelConfigMgr::getMechanicusRotation1Angle(&v18->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_gadget_ptr);
        v19 = std::__shared_ptr_access<PlatformComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        if ( PlatformComp::rotateBySpeedAndAngle(v19, rot_speed, COERCE_FLOAT(_mm_cvtsi128_si32(v3))) )
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/foundation_comp.cpp",
            "rotateBuildingGagdet",
            563);
          v20 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v36,
                  (const char (*)[38])"[FOUNDATION] platform rotate failed: ");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->current_tower_id_);
          v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])", player: ");
          v23 = operator<<(v22, player);
          v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v23, (const char (*)[10])" gadget: ");
          v25 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v24, v25);
          common::milog::MiLogStream::~MiLogStream(&v36);
          v7 = -1;
        }
        else
        {
          v26 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
          SceneTimeMs = Scene::getSceneTimeMs(v26);
          if ( *(_BYTE *)(((unsigned __int64)&this->last_rotate_scene_time_ms_ >> 3) + 0x7FFF8000) )
            SceneTimeMs = __asan_report_store8(&this->last_rotate_scene_time_ms_);
          this->last_rotate_scene_time_ms_ = SceneTimeMs;
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/gadget/foundation_comp.cpp",
            "rotateBuildingGagdet",
            568);
          v28 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v36,
                  (const char (*)[32])"[FOUNDATION] new scene_time_ms:");
          v29 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v28,
                  &this->last_rotate_scene_time_ms_);
          v30 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v29, v30);
          common::milog::MiLogStream::~MiLogStream(&v36);
          v7 = 0;
        }
      }
      std::shared_ptr<PlatformComp>::~shared_ptr((std::shared_ptr<PlatformComp> *const)(v4 + 96));
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 32));
  result = v7;
  if ( v37 == (char *)v4 )
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

// Line 573: range 0000000017526334-00000000175265E5
const PointScriptConfig *__cdecl FoundationComp::findPointConfig(const FoundationComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  const PointScriptConfig *PointConfig; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  const PointScriptConfig *result; // rax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  const GroupScriptConfig *group_script_config_ptr; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 group_ptr:574";
  *(_QWORD *)(v1 + 16) = FoundationComp::findPointConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getGroup((const Entity *const)(v1 + 32));
  if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 32)) )
  {
    PointConfig = 0LL;
  }
  else
  {
    v5 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    group_script_config_ptr = Group::getScriptConfig(v5);
    if ( group_script_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      PointConfig = GroupScriptConfig::findPointConfig(group_script_config_ptr, this->point_config_id_);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/foundation_comp.cpp",
        "findPointConfig",
        584);
      v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v12,
             (const char (*)[33])"getScriptConfig fails, group_id:");
      v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      val = Group::getGroupId(v7);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v8, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v12);
      PointConfig = 0LL;
    }
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
  result = PointConfig;
  if ( v13 == (char *)v1 )
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

// Line 592: range 00000000175265E6-00000000175266F3
uint32_t __cdecl FoundationComp::getGearGadgetId(FoundationComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t GadgetId; // r14d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t result; // eax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 gadget_ptr:593";
  *(_QWORD *)(v1 + 16) = FoundationComp::getGearGadgetId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  FoundationComp::getGearGadgetPtr((FoundationComp *const)(v1 + 32));
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v1 + 32)) )
  {
    GadgetId = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    GadgetId = Gadget::getGadgetId(v5);
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 32));
  result = GadgetId;
  if ( v7 == (char *)v1 )
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

// Line 602: range 00000000175266F4-0000000017526A10
void __cdecl FoundationComp::resetOnGearRemove(FoundationComp *const this, GadgetPtr *p_gadget_ptr, bool is_notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 17 play_base_ptr:609";
  *(_QWORD *)(v3 + 16) = FoundationComp::resetOnGearRemove;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->current_tower_id_);
  }
  this->current_tower_id_ = 0;
  std::__weak_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::reset(&this->gear_gadget_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->only_op_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->only_op_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->only_op_uid_);
  }
  this->only_op_uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->status_);
  }
  this->status_ = FOUNDATION_STATUS_INIT;
  if ( is_notify )
  {
    FoundationComp::getTowerDefensePlayBasePtr((const FoundationComp *const)(v3 + 32));
    if ( std::operator!=<TowerDefensePlayBase>(0LL, (const std::shared_ptr<TowerDefensePlayBase> *)(v3 + 32)) )
    {
      v6 = (unsigned __int64)std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      v7 = *(_QWORD *)v6 + 128LL;
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64))v7)(v6);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/foundation_comp.cpp",
        "resetOnGearRemove",
        616);
      v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v10,
             (const char (*)[27])"[FOUNDATION] play nullptr.");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v8, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    FoundationComp::broadcastFoundationInfo(this);
    std::shared_ptr<TowerDefensePlayBase>::~shared_ptr((std::shared_ptr<TowerDefensePlayBase> *const)(v3 + 32));
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 623: range 0000000017526A12-0000000017526ED7
void __cdecl FoundationComp::killGear(FoundationComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t v4; // ecx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  std::shared_ptr<Gadget> p_gadget_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 group_ptr:624 64 16 14 entity_ptr:630";
  *(_QWORD *)(v1 + 16) = FoundationComp::killGear;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getGroup((const Entity *const)(v1 + 32));
  if ( !std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 32)) )
  {
    v4 = (unsigned int)std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    Group::findEntityByConfigId<Gadget>((Group *const)(v1 + 64), v4);
    if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/foundation_comp.cpp",
        "killGear",
        633);
      v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v13,
             (const char (*)[39])"[FOUNDATION] building entity nullptr: ");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->current_tower_id_);
      v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])", gdaget: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v13);
      std::shared_ptr<Gadget>::shared_ptr(&p_gadget_ptr, (const std::shared_ptr<Gadget> *)(v1 + 64));
      FoundationComp::resetOnGearRemove(this, &p_gadget_ptr, 1);
      std::shared_ptr<Gadget>::~shared_ptr(&p_gadget_ptr);
    }
    else
    {
      v8 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( Creature::subCurHpToZero(v8, CHANGE_HP_SUB_KILL_SELF, 1) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/foundation_comp.cpp",
          "killGear",
          641);
        v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
               &v13,
               (const char (*)[31])"[FOUNDATION] building entity: ");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->current_tower_id_);
        v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                v10,
                (const char (*)[28])" kill self failed. gdaget: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v11, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v13);
      }
      else
      {
        std::shared_ptr<Gadget>::shared_ptr(&p_gadget_ptr, (const std::shared_ptr<Gadget> *)(v1 + 64));
        FoundationComp::resetOnGearRemove(this, &p_gadget_ptr, 1);
        std::shared_ptr<Gadget>::~shared_ptr(&p_gadget_ptr);
      }
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 64));
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
  if ( v14 == (char *)v1 )
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
};

// Line 649: range 0000000017526ED8-00000000175270E4
void __cdecl FoundationComp::sendFoundationInfoNotify(const FoundationComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rcx
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
  *(_QWORD *)(v2 + 8) = "1 32 32 10 notify:650";
  *(_QWORD *)(v2 + 16) = FoundationComp::sendFoundationInfoNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::FoundationNotify::FoundationNotify((proto::FoundationNotify *const)(v2 + 32));
  if ( FoundationComp::fillFoundationNotify(this, (proto::FoundationNotify *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/foundation_comp.cpp",
      "sendFoundationInfoNotify",
      653);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v6,
           (const char (*)[31])" fillFoundationNotify failed: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    Player::sendProto(player, (const google::protobuf::Message *)(v2 + 32));
  }
  proto::FoundationNotify::~FoundationNotify((proto::FoundationNotify *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 660: range 00000000175270E6-0000000017527324
int32_t __cdecl FoundationComp::fillFoundationNotify(const FoundationComp *const this, proto::FoundationNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  int32_t v6; // r14d
  uint32_t EntityId; // edx
  proto::FoundationInfo *v8; // r14
  const proto::FoundationInfo *v9; // rax
  int32_t result; // eax
  char v11[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 128 15 gadget_info:661";
  *(_QWORD *)(v2 + 16) = FoundationComp::fillFoundationNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450900) = -202116109;
  proto::SceneGadgetInfo::SceneGadgetInfo((proto::SceneGadgetInfo *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_GadgetCompBase + 7);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(const FoundationComp *const, unsigned __int64))v5)(this, v2 + 32) )
  {
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
    proto::FoundationNotify::set_gadget_entity_id(notify, EntityId);
    v8 = proto::FoundationNotify::mutable_info(notify);
    v9 = proto::SceneGadgetInfo::foundation_info((const proto::SceneGadgetInfo *const)(v2 + 32));
    proto::FoundationInfo::CopyFrom(v8, v9);
    v6 = 0;
  }
  proto::SceneGadgetInfo::~SceneGadgetInfo((proto::SceneGadgetInfo *const)(v2 + 32));
  result = v6;
  if ( v11 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 673: range 0000000017527326-000000001752805A
__int64 __fastcall FoundationComp::forceSetTower(FoundationComp *const this, uint32_t tower_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t v9; // ecx
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const Vector3 *p_pos; // rax
  const Vector3 *p_rot; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  Gadget *v33; // r14
  uint32_t v34; // ecx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdx
  int32_t retcode; // [rsp+14h] [rbp-4DCh]
  const PointScriptConfig *point_config_ptr; // [rsp+18h] [rbp-4D8h]
  std::shared_ptr<Gadget> __r; // [rsp+20h] [rbp-4D0h] BYREF
  std::shared_ptr<Gadget> p_gadget_ptr; // [rsp+30h] [rbp-4C0h] BYREF
  common::milog::MiLogStream v42; // [rsp+40h] [rbp-4B0h] BYREF
  char v43[1168]; // [rsp+60h] [rbp-490h] BYREF

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1120LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 12 tower_id:672 48 16 13 group_ptr:674 80 16 17 play_base_ptr:681 112 16 14 gadget_ptr:68"
                        "8 144 16 18 new_gadget_ptr:722 176 816 16 gadget_param:706";
  *(_QWORD *)(v2 + 16) = FoundationComp::forceSetTower;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862751] = -202116109;
  v4[536862752] = -202116109;
  v4[536862753] = -202116109;
  v4[536862754] = -202116109;
  *(_DWORD *)(v2 + 32) = tower_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getGroup((const Entity *const)(v2 + 48));
  if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/foundation_comp.cpp",
      "forceSetTower",
      677);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v42,
      (const char (*)[29])"[FOUNDATION] group null ptr!");
    common::milog::MiLogStream::~MiLogStream(&v42);
    v5 = 513;
  }
  else
  {
    FoundationComp::getTowerDefensePlayBasePtr((const FoundationComp *const)(v2 + 80));
    if ( std::operator==<TowerDefensePlayBase>(0LL, (const std::shared_ptr<TowerDefensePlayBase> *)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/foundation_comp.cpp",
        "forceSetTower",
        684);
      v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v42,
             (const char (*)[35])"[FOUNDATION] play nullptr.  tower:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])". point_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->point_config_id_);
      common::milog::MiLogStream::~MiLogStream(&v42);
      v5 = -1;
    }
    else
    {
      v9 = (unsigned int)std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      Group::findEntityByConfigId<Gadget>((Group *const)(v2 + 112), v9);
      if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 112)) )
      {
        v10 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        if ( Creature::subCurHpToZero(v10, CHANGE_HP_SUB_GEAR, 1) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/foundation_comp.cpp",
            "forceSetTower",
            694);
          v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  &v42,
                  (const char (*)[14])"[FOUNDATION] ");
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v12 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v11, this->gadget_);
          v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v12,
                  (const char (*)[14])" kill tower: ");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->current_tower_id_);
          common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" failed.");
          common::milog::MiLogStream::~MiLogStream(&v42);
        }
        std::shared_ptr<Gadget>::shared_ptr(&p_gadget_ptr, (const std::shared_ptr<Gadget> *)(v2 + 112));
        FoundationComp::resetOnGearRemove(this, &p_gadget_ptr, 0);
        std::shared_ptr<Gadget>::~shared_ptr(&p_gadget_ptr);
      }
      point_config_ptr = FoundationComp::findPointConfig(this);
      if ( !point_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/foundation_comp.cpp",
          "forceSetTower",
          703);
        v15 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                &v42,
                (const char (*)[72])"[FOUNDATION] create tower gadget fails. PointConfig nullptr @point_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->point_config_id_);
        common::milog::MiLogStream::~MiLogStream(&v42);
      }
      GadgetParam::GadgetParam((GadgetParam *const)(v2 + 176));
      *(_BYTE *)(v2 + 472) = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 180) = this->point_config_id_;
      *(_DWORD *)(v2 + 976) = this->point_config_id_;
      if ( point_config_ptr )
      {
        p_pos = &point_config_ptr->pos;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        p_pos = Entity::getPosition((const Entity *const)this->gadget_);
      }
      if ( ((unsigned __int8)p_pos & 7) >= *(_BYTE *)(((unsigned __int64)p_pos >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)p_pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&p_pos->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&p_pos->z + 3) >> 3) + 0x7FFF8000) )
      {
        p_pos = (const Vector3 *)__asan_report_load_n(p_pos, 12LL);
      }
      *(_QWORD *)(v2 + 188) = *(_QWORD *)&p_pos->x;
      *(float *)(v2 + 196) = p_pos->z;
      if ( point_config_ptr )
      {
        p_rot = &point_config_ptr->rot;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        p_rot = Entity::getRotation((const Entity *const)this->gadget_);
      }
      if ( ((unsigned __int8)p_rot & 7) >= *(_BYTE *)(((unsigned __int64)p_rot >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)p_rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&p_rot->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&p_rot->z + 3) >> 3) + 0x7FFF8000) )
      {
        p_rot = (const Vector3 *)__asan_report_load_n(p_rot, 12LL);
      }
      *(_QWORD *)(v2 + 200) = *(_QWORD *)&p_rot->x;
      *(float *)(v2 + 208) = p_rot->z;
      v18 = (unsigned __int64)std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      v19 = *(_QWORD *)v18 + 64LL;
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      retcode = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64))v19)(
                  v18,
                  *(unsigned int *)(v2 + 32),
                  v2 + 176);
      if ( retcode )
      {
        v5 = retcode;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/foundation_comp.cpp",
          "forceSetTower",
          720);
        v20 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v42,
                (const char (*)[37])"[FOUNDATION] tower gadget. gadget_id");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v2 + 176));
        v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v21, (const char (*)[10])" @group: ");
        v23 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        v24 = operator<<(v22, v23);
        v25 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v24, (const char (*)[15])" with SGV map:");
        common::milog::MiLogStream::operator<<<std::string,float>(v25, (const std::map<std::string,float> *)(v2 + 928));
        common::milog::MiLogStream::~MiLogStream(&v42);
        v26 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        Group::createGadget((Group *const)(v2 + 144), (GadgetParam *)v26);
        if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 144), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/foundation_comp.cpp",
            "forceSetTower",
            725);
          v27 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v42,
                  (const char (*)[50])"[FOUNDATION] create tower gadget fails. gadget_id");
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v2 + 176));
          v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])" @group: ");
          v30 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          v31 = operator<<(v29, v30);
          v32 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v31,
                  (const char (*)[14])" foundation: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v32, this->gadget_);
          common::milog::MiLogStream::~MiLogStream(&v42);
          v5 = -1;
        }
        else
        {
          v33 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          toThisPtr<Gadget>((Gadget *)&__r);
          std::weak_ptr<Gadget>::weak_ptr<Gadget,void>((std::weak_ptr<Gadget> *const)&p_gadget_ptr, &__r);
          Gadget::setFoundationWtr(v33, (GadgetWtr *)&p_gadget_ptr);
          std::weak_ptr<Gadget>::~weak_ptr((std::weak_ptr<Gadget> *const)&p_gadget_ptr);
          std::shared_ptr<Gadget>::~shared_ptr(&__r);
          v34 = *(_DWORD *)(v2 + 32);
          if ( *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->current_tower_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->current_tower_id_);
          }
          this->current_tower_id_ = v34;
          std::weak_ptr<Gadget>::operator=<Gadget>(&this->gear_gadget_wtr_, (const std::shared_ptr<Gadget> *)(v2 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&this->only_op_uid_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->only_op_uid_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store4(&this->only_op_uid_);
          }
          this->only_op_uid_ = 0;
          if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->status_);
          }
          this->status_ = FOUNDATION_STATUS_BUILT;
          v35 = (unsigned __int64)std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
            v35 = __asan_report_load8();
          v36 = *(_QWORD *)v35 + 128LL;
          if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
            v35 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64))v36)(v35);
          v5 = 0;
        }
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 144));
      }
      GadgetParam::~GadgetParam((GadgetParam *const)(v2 + 176));
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 112));
    }
    std::shared_ptr<TowerDefensePlayBase>::~shared_ptr((std::shared_ptr<TowerDefensePlayBase> *const)(v2 + 80));
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 48));
  if ( v43 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1120LL, v43);
  }
  return v5;
};
